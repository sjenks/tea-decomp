// Extract Borland C++ 5.x class RTTI (tpid), vtables and OWL response tables from a PE32 image.
// Read-only static parsing. Usage: node borland-rtti.js <exe> <out.json> [--print]
const fs = require("fs");
const { load, hex } = require("./pe");

function extract(file) {
  const p = load(file);
  const b = p.b;
  const dw = (o) => b.readUInt32LE(o);
  const w = (o) => b.readUInt16LE(o);

  // ---- 1. class type descriptors ------------------------------------------
  // +00 u32 size | +04 u16 mask | +06 u16 nameOff | +08 u32 vptrOffs | +0c u32 flags
  // +10 u16 baseList | +12 u16 vbaseList | +14 dlOp | +18 masks | +1c daOp
  // (nameOff==0x30 only) +20 dtorCount | +24 nvDtorCount | +28 dtorAddr | +2c u16 dtorMask | +2e u16 dtMembers
  const byVa = new Map();
  const nameOk = (s) => s.length >= 1 && s.length <= 400 && /^[A-Za-z_@$][\x20-\x7e]*$/.test(s);
  for (const s of p.secs) {
    if (s.name !== ".text" && s.name !== ".data") continue;
    for (let o = s.raw; o + 0x34 < s.raw + s.rawSize; o++) {
      const nameOff = w(o + 6);
      if (nameOff !== 0x30 && nameOff !== 0x20) continue;
      const mask = w(o + 4);
      if ((mask & 3) === 0 || mask & ~0x7ff) continue;
      const size = dw(o);
      if (size === 0 || size > 0x400000) continue;
      const baseList = w(o + 0x10), vbaseList = w(o + 0x12);
      if (baseList < nameOff || vbaseList < baseList || vbaseList > 0x800) continue;
      const name = p.cstr(o + nameOff, 420);
      if (!nameOk(name)) continue;
      if (baseList < nameOff + name.length + 1) continue; // lists live after the name
      const va = p.off2va(o);
      const t = { va, name, size, mask, vptrOffs: dw(o + 8), flags: dw(o + 0xc), bases: [], vbases: [], members: [], dtor: 0, vtables: [] };
      const readList = (at, width) => {
        const out = [];
        for (let q = o + at; out.length < 64; q += width * 4) {
          const tp = dw(q);
          if (tp === 0) break;
          if (!p.inImage(tp)) return null;
          out.push(width === 3 ? { tpid: tp, offset: dw(q + 4), flags: dw(q + 8) } : { tpid: tp, offset: dw(q + 4) });
        }
        return out;
      };
      const bl = readList(baseList, 3), vl = readList(vbaseList, 3);
      if (!bl || !vl) continue;
      t.bases = bl; t.vbases = vl;
      if (nameOff === 0x30) {
        const d = dw(o + 0x28);
        if (d && p.inText(d)) t.dtor = d;
        const dm = w(o + 0x2e);
        if (dm) { const ml = readList(dm, 2); if (ml) t.members = ml; }
      }
      byVa.set(va, t);
    }
  }
  // keep only descriptors whose base/member links resolve to other descriptors (kills false positives)
  let changed = true;
  while (changed) {
    changed = false;
    for (const [va, t] of byVa) {
      const bad = [...t.bases, ...t.vbases].some((x) => !byVa.has(x.tpid));
      if (bad) { byVa.delete(va); changed = true; }
    }
  }
  const nameOf = (va) => (byVa.get(va) ? byVa.get(va).name : null);
  for (const t of byVa.values()) {
    t.bases = t.bases.map((x) => ({ name: nameOf(x.tpid), offset: x.offset, flags: x.flags }));
    t.vbases = t.vbases.map((x) => ({ name: nameOf(x.tpid), offset: x.offset, flags: x.flags }));
    t.members = t.members.map((x) => ({ type: nameOf(x.tpid) || memberTypeName(p, x.tpid), offset: x.offset })).sort((a, c) => a.offset - c.offset);
  }

  // ---- 2. vtables ----------------------------------------------------------
  // .data: [tpid][0][0][slot0][slot1]...   (vtable symbol = address of slot0)
  const data = p.sec(".data");
  const tpidSet = new Set(byVa.keys());
  for (let o = data.raw; o + 16 <= data.raw + data.rawSize; o += 4) {
    const t = byVa.get(dw(o));
    if (!t) continue;
    // real vtables carry a zero/zero prefix; (4, negative-ebp-offset) rows are exception-cleanup
    // descriptors whose code pointer is a handler block inside a function, not a function entry
    if (dw(o + 4) !== 0 || dw(o + 8) !== 0) continue;
    if (!p.inText(dw(o + 12)) || tpidSet.has(dw(o + 12))) continue;
    const slots = [];
    for (let q = o + 12; q + 4 <= data.raw + data.rawSize; q += 4) {
      const v = dw(q);
      if (!p.inText(v) || tpidSet.has(v)) break;
      slots.push(v);
    }
    t.vtables.push({ va: p.off2va(o + 12), prefix: [dw(o + 4), dw(o + 8)], slots });
  }

  // ---- 2b. vtables of virtual-base subobjects --------------------------------
  // A class with a virtual base (OWL::TWindow in every OWL window class) gets a second vtable for that
  // subobject. It has no RTTI prefix, so it is found by shape: as many slots as the base's own vtable,
  // all code pointers, and at least a third of them identical to the base's. Slots the class overrides
  // point to `this`-adjusting thunks:  mov eax,[esp+4]; add eax,[eax-4]; add eax,imm; mov [esp+4],eax; jmp F
  const secondary = [];
  {
    const vbaseNames = new Set();
    for (const t of byVa.values()) for (const b of t.vbases) vbaseNames.add(b.tpid !== undefined ? nameOf(b.tpid) : b.name);
    const thunkTarget = (va) => {
      const o = p.va2off(va);
      if (o < 0 || p.b[o] !== 0x8b || p.b[o + 1] !== 0x44 || p.b[o + 2] !== 0x24 || p.b[o + 3] !== 0x04 || p.b[o + 4] !== 0x03 || p.b[o + 5] !== 0x40 || p.b[o + 6] !== 0xfc) return null;
      let q = o + 7;
      if (p.b[q] === 0x83 && p.b[q + 1] === 0xc0) q += 3; else if (p.b[q] === 0x05) q += 5; else return null;
      if (p.b[q] !== 0x89 || p.b[q + 1] !== 0x44 || p.b[q + 2] !== 0x24 || p.b[q + 3] !== 0x04 || p.b[q + 4] !== 0xe9) return null;
      return (p.off2va(q + 9) + p.b.readInt32LE(q + 5)) >>> 0;
    };
    for (const t of byVa.values()) {
      if (!vbaseNames.has(t.name) || !t.vtables.length) continue;
      const S = t.vtables[0].slots, N = S.length;
      if (N < 4) continue;
      for (let o = data.raw; o + 4 * N <= data.raw + data.rawSize; o += 4) {
        const va = p.off2va(o);
        if (va === t.vtables[0].va) continue;
        let same = 0, code = 0;
        for (let i = 0; i < N; i++) { const v = dw(o + 4 * i); if (v === S[i]) same++; if (p.inText(v)) code++; }
        if (code < N || same * 3 < N) continue;
        const slots = [];
        for (let i = 0; i < N; i++) {
          const v = dw(o + 4 * i);
          if (v === S[i]) { slots.push({ i, inherited: true, target: v }); continue; }
          const tt = thunkTarget(v);
          slots.push({ i, thunk: tt !== null ? v : null, target: tt !== null ? tt : v });
        }
        secondary.push({ va, base: t.name, slots });
        o += 4 * N - 4;
      }
    }
  }

  // ---- 3. OWL response tables ---------------------------------------------
  // entry: { u32 msgOrNotify; u32 id; dispatcher*; pmf{ fn, delta, vb } }  (24 bytes), zero-terminated
  const tables = [];
  const isEntry = (o) => p.inText(dw(o + 8)) && p.inText(dw(o + 12)) && !tpidSet.has(dw(o + 8));
  const isTerm = (o) => dw(o) === 0 && dw(o + 4) === 0 && dw(o + 8) === 0 && dw(o + 12) === 0;
  const dispCount = new Map();
  const runs = [];
  for (let o = data.raw; o + 24 <= data.raw + data.rawSize; o += 4) {
    if (!isEntry(o)) continue;
    let q = o, n = 0;
    while (q + 24 <= data.raw + data.rawSize && isEntry(q)) { q += 24; n++; }
    if (!isTerm(q)) continue;
    // don't start in the middle of a longer run
    if (o - 24 >= data.raw && isEntry(o - 24)) continue;
    runs.push({ o, n });
    for (let i = 0; i < n; i++) { const d = dw(o + i * 24 + 8); dispCount.set(d, (dispCount.get(d) || 0) + 1); }
    o = q; // skip past table
  }
  for (const r of runs) {
    const entries = [];
    for (let i = 0; i < r.n; i++) {
      const e = r.o + i * 24;
      entries.push({ msg: dw(e), id: dw(e + 4), dispatcher: dw(e + 8), handler: dw(e + 12), pmfDelta: dw(e + 16), pmfVb: dw(e + 20) });
    }
    // a real table uses dispatchers that are shared with other tables or repeated
    const score = entries.filter((e) => dispCount.get(e.dispatcher) >= 2).length / entries.length;
    if (score < 0.5) continue;
    tables.push({ va: p.off2va(r.o), entries });
  }

  return { file, imageBase: p.imageBase, classes: [...byVa.values()].sort((a, c) => a.va - c.va), responseTables: tables, secondaryVtables: secondary, p };
}

function memberTypeName(p, va) {
  // non-class tpids (pointers, arrays, builtins): { u32 size; u16 mask; u16 nameOff; ...; name }
  const o = p.va2off(va);
  if (o < 0) return hex(va);
  const nameOff = p.b.readUInt16LE(o + 6);
  if (nameOff < 8 || nameOff > 0x60) return hex(va);
  const s = p.cstr(o + nameOff, 200);
  return /^[\x20-\x7e]+$/.test(s) ? s : hex(va);
}

if (require.main === module) {
  const [file, out, flag] = process.argv.slice(2);
  const r = extract(file);
  const { p, ...json } = r;
  fs.writeFileSync(out, JSON.stringify(json, null, 1));
  const cls = r.classes;
  console.log(`${file}`);
  console.log(`  classes: ${cls.length}  with vtable: ${cls.filter((c) => c.vtables.length).length}  with dtor: ${cls.filter((c) => c.dtor).length}  vtable slots: ${cls.reduce((a, c) => a + c.vtables.reduce((x, v) => x + v.slots.length, 0), 0)}`);
  console.log(`  response tables: ${r.responseTables.length}  entries: ${r.responseTables.reduce((a, t) => a + t.entries.length, 0)}`);
  if (flag === "--print") {
    for (const c of cls.filter((c) => !/^(std::|OWL::|_|string|basic_|x[a-z]+$)/.test(c.name)).slice(0, 400)) {
      const bs = c.bases.map((x) => x.name).concat(c.vbases.map((x) => "virtual " + x.name));
      console.log(`  ${hex(c.va)} ${String(c.size).padStart(6)}  ${c.name}${bs.length ? " : " + bs.join(", ") : ""}  dtor=${c.dtor ? hex(c.dtor) : "-"} vt=${c.vtables.map((v) => hex(v.va) + "[" + v.slots.length + "]").join(",") || "-"} members=${c.members.length}`);
    }
    const disp = new Map();
    for (const t of r.responseTables) for (const e of t.entries) disp.set(e.dispatcher, (disp.get(e.dispatcher) || 0) + 1);
    console.log("  dispatchers:", [...disp.entries()].sort((a, c) => c[1] - a[1]).map(([k, v]) => hex(k) + "x" + v).join(" "));
    for (const t of r.responseTables.slice(0, 6)) {
      console.log(`  table ${hex(t.va)} (${t.entries.length})`);
      for (const e of t.entries.slice(0, 8)) console.log(`     msg=${hex(e.msg, 4)} id=${hex(e.id, 4)} disp=${hex(e.dispatcher)} handler=${hex(e.handler)} pmf=(${e.pmfDelta},${e.pmfVb})`);
    }
  }
}

module.exports = { extract };

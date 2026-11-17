// Probe for Borland C++ type descriptors (tpid) and check candidate function addresses.
// Usage: node rtti-probe.js <exe> [--addrs 0x401000,0x...] [--dump N]
const { load, hex } = require("./pe");
const args = process.argv.slice(2);
const file = args[0];
const opt = (k, d) => { const i = args.indexOf(k); return i >= 0 ? args[i + 1] : d; };
const p = load(file);
const b = p.b;

// --- 1. tpid scan -----------------------------------------------------------
// struct tpid { u32 tpSize; u16 tpMask; u16 tpName; ...; char name[] }  (tpName = offset from tpid start)
const TM_IS_STRUCT = 0x0001, TM_IS_CLASS = 0x0002, TM_IS_PTR = 0x0010, TM_IS_REF = 0x0020;
const nameOk = (s) => s.length >= 2 && s.length <= 300 && /^[A-Za-z_@$][\x20-\x7e]*$/.test(s);
const cands = [];
for (const s of p.secs) {
  if (!["​", ".text", ".data", "CODE", "DATA"].includes(s.name)) continue;
  const end = s.raw + s.rawSize - 16;
  for (let o = s.raw; o < end; o++) {
    const mask = b.readUInt16LE(o + 4);
    const nameOff = b.readUInt16LE(o + 6);
    if (!(mask & (TM_IS_STRUCT | TM_IS_CLASS))) continue;
    if (mask & ~0x7ff) continue;
    if (nameOff < 0x20 || nameOff > 0x60 || nameOff & 1) continue;
    const size = b.readUInt32LE(o);
    if (size === 0 || size > 0x400000) continue;
    const name = p.cstr(o + nameOff, 320);
    if (!nameOk(name)) continue;
    // name must be immediately preceded by header bytes, not by more name text
    cands.push({ off: o, va: p.off2va(o), sec: s.name, size, mask, nameOff, name });
  }
}
// De-duplicate overlapping hits that resolve to the same name string start.
const byNameStart = new Map();
for (const c of cands) {
  const k = c.off + c.nameOff;
  const prev = byNameStart.get(k);
  if (!prev || c.nameOff > prev.nameOff) byNameStart.set(k, c);
}
const tpids = [...byNameStart.values()].sort((a, b2) => a.off - b2.off);
console.log(`tpid candidates: ${tpids.length} (raw hits ${cands.length})`);
const hist = {};
for (const t of tpids) hist[`${t.sec} nameOff=${hex(t.nameOff, 2)} mask=${hex(t.mask, 4)}`] = (hist[`${t.sec} nameOff=${hex(t.nameOff, 2)} mask=${hex(t.mask, 4)}`] || 0) + 1;
for (const [k, v] of Object.entries(hist).sort((a, b2) => b2[1] - a[1]).slice(0, 12)) console.log(`  ${String(v).padStart(5)}  ${k}`);

const dumpN = +opt("--dump", 0);
if (dumpN) {
  console.log("\n--- raw header dump of first candidates ---");
  for (const t of tpids.slice(0, dumpN)) {
    console.log(`${hex(t.va)} size=${t.size} mask=${hex(t.mask, 4)} nameOff=${hex(t.nameOff, 2)} name=${JSON.stringify(t.name)}`);
    console.log("   " + b.subarray(t.off, t.off + t.nameOff).toString("hex").replace(/(.{8})/g, "$1 "));
  }
}
const interesting = tpids.filter((t) => !/^(std::|_|T[A-Z]|string|basic_|exception|bad_|xmsg|xalloc|type_info|ios|[a-z_]+$)/.test(t.name));
console.log(`\n--- names not obviously RTL/OWL (${interesting.length}) ---`);
console.log(interesting.map((t) => `${hex(t.va)} ${String(t.size).padStart(6)} ${t.name.slice(0, 110)}`).join("\n"));

// --- 2. address sanity ------------------------------------------------------
const addrs = (opt("--addrs", "") || "").split(",").filter(Boolean).map((x) => parseInt(x, 16));
if (addrs.length) console.log("\n--- candidate function addresses ---");
for (const va of addrs) {
  const off = p.va2off(va);
  if (off < 0) { console.log(`${hex(va)}  <not mapped>`); continue; }
  const bytes = b.subarray(off, off + 12);
  const prev = b.subarray(off - 4, off);
  const prologue = bytes[0] === 0x55 && bytes[1] === 0x8b && bytes[2] === 0xec;
  console.log(`${hex(va)}  ${bytes.toString("hex")}  prev=${prev.toString("hex")}  ${prologue ? "push ebp; mov ebp,esp  ✔ function prologue" : "(no standard prologue)"}`);
}

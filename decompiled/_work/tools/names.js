// Build the symbol database for one binary from static evidence:
//   - Borland RTTI (destructors, vtable slots, class membership)
//   - OWL response tables (message / command handlers)
//   - decoded resources (menu captions for command ids)
//   - optional manual names (analysis + user notes), which take priority
// Usage: node names.js <exe> <rawDir> <resources.json> <out symbols.json> [manual.json ...]
const fs = require("fs");
const path = require("path");
const { hex } = require("./pe");
const { extract } = require("./borland-rtti");
const { WM, evName } = require("./winmsg");

function loadJournal(rawDir) {
  const fns = [];
  const seen = new Map();
  for (const line of fs.readFileSync(path.join(rawDir, "decompile-journal.jsonl"), "utf8").split("\n")) {
    if (!line.trim()) continue;
    const r = JSON.parse(line);
    if (!r.address) continue;
    seen.set(r.address, r); // latest attempt wins
  }
  for (const r of seen.values()) {
    const a = parseInt(r.address, 16);
    const ranges = (r.body && r.body.ranges ? r.body.ranges : []).map((x) => [parseInt(x.start, 16), parseInt(x.end, 16)]);
    fns.push({ addr: a, ghidraName: r.name, status: r.status, file: r.relative_path || null, ranges,
      proto: r.proto || null, thunk: !!r.thunk, thunkOf: r.thunk_of || null, globals: r.globals || [], locals: r.locals || [], reason: r.reason || null, sigSource: r.sig_source || null });
  }
  fns.sort((a, b) => a.addr - b.addr);
  return fns;
}

// Method names for vtable slots of OWL classes. OWL::TWindow's were identified from its own slot
// implementations in TEA.exe (e.g. slot 3 registers the WNDCLASS, slot 5 calls CreateWindowExA, slot 29
// returns "OWL_Window") and from which slot its message handlers call (EvPaint -> 21, EvCreate -> 30,
// EvDestroy -> 31); they follow OWL 5's declaration order.
const SLOT_NAMES = {
  "OWL::TWindow": ["~TWindow", "GetTooltip", "EnableTooltip", "Register", "Create", "PerformCreate", "Destroy", "Execute", "DoExecute", "CloseWindow",
    "PreProcessMsg", "IdleAction", "HoldFocusHWnd", "SetParent", "SetDocTitle", "CanClose", "WindowProc", "DefWindowProc", "EvCommand", "EvNotify",
    "EvCommandEnable", "Paint", "Transfer", "TransferData", "EnableWindow", "ShowWindow", "Invalidate", "InvalidateRect", "GetWindowClass", "GetClassName",
    "SetupWindow", "CleanupWindow", "RemoveChild", "Find"],
};
const SLOT_NOTE = "slot name identified from OWL::TWindow's own implementation of that slot";

function build(exe, rawDir, resFile, manualFiles) {
  const r = extract(exe);
  const p = r.p;
  const fns = loadJournal(rawDir);
  const fnAt = new Map(fns.map((f) => [f.addr, f]));
  const starts = fns.filter((f) => f.ranges.length).map((f) => f.addr);
  const containing = (va) => {
    // binary search on start, then verify range membership
    let lo = 0, hi = starts.length - 1, best = -1;
    while (lo <= hi) { const m = (lo + hi) >> 1; if (starts[m] <= va) { best = m; lo = m + 1; } else hi = m - 1; }
    for (let i = best; i >= 0 && i > best - 6; i--) {
      const f = fnAt.get(starts[i]);
      if (f.ranges.some(([s, e]) => va >= s && va <= e)) return f;
    }
    return null;
  };
  const res = fs.existsSync(resFile) ? JSON.parse(fs.readFileSync(resFile, "utf8")) : { commands: {}, strings: {}, dialogs: {}, menus: {} };

  const sym = { functions: {}, data: {}, notes: [] };
  // vtable slot names: OWL's (SLOT_NAMES) plus hand-assigned ones (manual entries with slotClass/slot)
  const slotNames = {};
  const slotNotes = {};
  for (const [k, v] of Object.entries(SLOT_NAMES)) slotNames[k] = [...v];
  for (const mf of manualFiles) {
    if (!fs.existsSync(mf)) continue;
    for (const m of JSON.parse(fs.readFileSync(mf, "utf8"))) {
      if (!m.slotClass) continue;
      (slotNames[m.slotClass] ||= [])[m.slot] = m.name;
      (slotNotes[m.slotClass] ||= [])[m.slot] = m.note;
    }
  }
  const usedNames = new Map();
  const setFn = (addr, name, info) => {
    if (!fnAt.has(addr)) { sym.notes.push(`${hex(addr)} ${name}: not a function entry in the Ghidra inventory (${info.source})`); return false; }
    const prev = sym.functions[addr];
    if (prev && prev.priority >= (info.priority || 0)) { (prev.aliases ||= []).push(`${name} [${info.source}]`); return false; }
    let unique = name;
    if (usedNames.has(name) && usedNames.get(name) !== addr) unique = `${name}_${addr.toString(16)}`;
    usedNames.set(unique, addr);
    sym.functions[addr] = { name: unique, priority: 0, ...info, aliases: prev ? [`${prev.name} [${prev.source}]`].concat(prev.aliases || []) : undefined };
    return true;
  };

  // ---- classes: topological order (bases first) -----------------------------
  const byName = new Map();
  for (const c of r.classes) if (!byName.has(c.name)) byName.set(c.name, c);
  const depth = new Map();
  const depthOf = (c, guard = 0) => {
    if (depth.has(c.name)) return depth.get(c.name);
    if (guard > 40) return 0;
    let d = 0;
    for (const b of [...c.bases, ...c.vbases]) { const bc = byName.get(b.name); if (bc && bc !== c) d = Math.max(d, 1 + depthOf(bc, guard + 1)); }
    depth.set(c.name, d);
    return d;
  };
  const ordered = [...r.classes].sort((a, b) => depthOf(a) - depthOf(b) || a.va - b.va);
  const ancestors = (c, acc = new Set()) => {
    for (const b of [...c.bases, ...c.vbases]) { if (!acc.has(b.name)) { acc.add(b.name); const bc = byName.get(b.name); if (bc) ancestors(bc, acc); } }
    return acc;
  };

  // which classes list each function in a vtable
  const fnClasses = new Map();
  for (const c of r.classes) for (const v of c.vtables) for (const s of v.slots) { if (!fnClasses.has(s)) fnClasses.set(s, new Set()); fnClasses.get(s).add(c.name); }
  const introducers = (fn) => {
    const cs = [...(fnClasses.get(fn) || [])];
    return cs.filter((n) => { const anc = ancestors(byName.get(n)); return !cs.some((o) => o !== n && anc.has(o)); });
  };

  // last scope component without template arguments: "std::vector<A::B,C>" -> "vector", "X::Y" -> "Y"
  const shortName = (n) => {
    let depth = 0, cut = 0, firstLt = -1;
    for (let i = 0; i < n.length; i++) {
      const ch = n[i];
      if (ch === "<") { if (depth === 0 && firstLt < 0) firstLt = i; depth++; }
      else if (ch === ">") depth--;
      else if (ch === ":" && n[i + 1] === ":" && depth === 0) { cut = i + 2; firstLt = -1; i++; }
    }
    return n.slice(cut, firstLt >= 0 ? firstLt : n.length).trim();
  };
  // the name of vtable slot i of class c: from c or the nearest base at offset 0 (which shares the vtable prefix)
  const slotNameFor = (c, i) => {
    for (let x = c, guard = 0; x && guard < 40; guard++) {
      const sn = slotNames[x.name];
      if (sn && sn[i] && x.vtables.length && i < x.vtables[0].slots.length) return { name: sn[i], from: x.name, note: (slotNotes[x.name] || [])[i] };
      const b = x.bases.find((y) => y.offset === 0);
      x = b ? byName.get(b.name) : null;
    }
    return null;
  };
  for (const c of ordered) {
    if (c.dtor) setFn(c.dtor, `${c.name}::~${shortName(c.name)}`, { cls: c.name, kind: "destructor", source: "rtti:dtor", priority: 5 });
    c.vtables.forEach((v, vi) => {
      sym.data[v.va] = { name: `${c.name}::vftable${vi ? "_" + (vi + 1) : ""}`, source: "rtti:vtable", cls: c.name };
      v.slots.forEach((fn, i) => {
        if (fn === c.dtor) return;
        if (sym.functions[fn]) return; // inherited: already named by a base
        const intro = introducers(fn);
        if (intro.length > 1) {
          // shared across unrelated hierarchies: pure-virtual trap or a generic stub
          const n = (fnClasses.get(fn) || new Set()).size;
          setFn(fn, n >= 12 ? `__vstub_${fn.toString(16)}` : `vshared_${fn.toString(16)}`, { kind: "shared-virtual-stub", source: "rtti:vtable", note: `in vtables of ${n} classes across unrelated hierarchies (${intro.slice(0, 4).join(", ")}${intro.length > 4 ? ", …" : ""})`, priority: 1 });
          return;
        }
        const sn = vi === 0 ? slotNameFor(c, i) : null;
        setFn(fn, sn ? `${c.name}::${sn.name}` : `${c.name}::vf${i}`, { cls: c.name, kind: "virtual", slot: i, source: "rtti:vtable",
          note: sn ? `vtable slot ${i}${sn.from !== c.name ? " (introduced by " + sn.from + ")" : ""}; ${sn.note || SLOT_NOTE}` : undefined, priority: 2 });
      });
    });
  }

  // ---- vtables of virtual-base subobjects (OWL::TWindow in every window class) ------------------
  // Each table belongs to the class whose constructor/destructor stores it. A slot that differs from the
  // base's own entry is that class's (or an ancestor's) override; tables are visited bases first so an
  // inherited override is named after the class that defines it.
  const text = p.text;
  {
    const refFns = (va) => {
      const needle = Buffer.alloc(4); needle.writeUInt32LE(va);
      const out = [];
      let pos = text.raw;
      while ((pos = p.b.indexOf(needle, pos)) >= 0 && pos < text.raw + text.rawSize) { const f = containing(p.off2va(pos)); if (f && !out.includes(f.addr)) out.push(f.addr); pos++; }
      return out;
    };
    const dtorOf = new Map(r.classes.filter((c) => c.dtor).map((c) => [c.dtor, c.name]));
    const tables = [];
    for (const t of r.secondaryVtables || []) {
      const refs = refFns(t.va);
      let owner = null;
      for (const a of refs) if (dtorOf.has(a)) { owner = dtorOf.get(a); break; }
      if (!owner) for (const a of refs) { const s = sym.functions[a]; if (s && s.cls && s.cls !== t.base) { owner = s.cls; break; } }
      if (!owner) continue;
      const oc = byName.get(owner);
      tables.push({ ...t, owner, depth: oc ? depthOf(oc) : 99 });
      sym.data[t.va] = { name: `${owner}::vftable_${t.base.replace(/^.*::/, "")}`, source: "rtti:vtable (virtual-base subobject)", cls: owner };
    }
    tables.sort((a, b) => a.depth - b.depth);
    const done = new Set();
    for (const t of tables) {
      const names = SLOT_NAMES[t.base];
      for (const s of t.slots) {
        if (s.inherited || s.i === 0 || done.has(s.target)) continue;
        done.add(s.target);
        const base = byName.get(t.base);
        const baseFn = base && base.vtables[0] ? base.vtables[0].slots[s.i] : null;
        const leaf = names ? names[s.i] : `${t.base.replace(/^.*::/, "")}_vf${s.i}`;
        setFn(s.target, `${t.owner}::${leaf}`, { cls: t.owner, kind: "virtual", slot: s.i, source: "rtti:vtable",
          note: `override of ${t.base} vtable slot ${s.i}${names ? "" : " (" + (baseFn && sym.functions[baseFn] ? sym.functions[baseFn].name : "?") + ")"}, from ${t.owner}'s ${t.base} subobject vtable at ${hex(t.va)}${s.thunk ? " (through the this-adjusting thunk at " + hex(s.thunk) + ")" : ""}${names ? "; " + SLOT_NOTE : ""}`, priority: 2.5 });
      }
    }
  }

  // ---- response tables -------------------------------------------------------
  const cmdIdent = (id) => {
    const list = res.commands[id];
    if (!list) return null;
    const m = list.find((x) => x.path) || null;
    if (!m) return null;
    const parts = m.path.split(" > ").map((s) => s.replace(/\t.*$/, "").replace(/&/g, "").replace(/\.\.\.$/, "").replace(/\*/g, "").trim());
    const pascal = parts.map((s) => s.replace(/[^A-Za-z0-9]+/g, " ").trim().split(" ").filter(Boolean).map((w) => w[0].toUpperCase() + w.slice(1)).join("")).join("");
    return pascal || null;
  };
  const tableOut = [];
  for (const t of r.responseTables) {
    // owner: the function that references the table address (OWL's generated Find()) and the class introducing it
    const needle = Buffer.alloc(4); needle.writeUInt32LE(t.va);
    const refs = [];
    let pos = text.raw;
    const end = text.raw + text.rawSize;
    while ((pos = p.b.indexOf(needle, pos)) >= 0 && pos < end) { const f = containing(p.off2va(pos)); if (f && !refs.includes(f.addr)) refs.push(f.addr); pos++; }
    let owner = null, findFn = null;
    for (const fa of refs) { const intro = introducers(fa); if (intro.length === 1) { owner = intro[0]; findFn = fa; break; } }
    if (!owner && refs.length) {
      // fall back: class whose anchors bracket the handlers (decided later by the organiser)
      findFn = refs[0];
    }
    const label = owner ? `${owner}::__entries` : `response_table_${t.va.toString(16)}`;
    sym.data[t.va] = { name: label, source: "owl:response-table", cls: owner || undefined };
    if (findFn !== null && owner) setFn(findFn, `${owner}::Find`, { cls: owner, kind: "response-table-find", source: "owl:response-table", priority: 4 });
    const rows = [];
    // a handler bound to several different commands/messages must not be named after just the first one
    const uses = new Map();
    for (const e of t.entries) { if (!uses.has(e.handler)) uses.set(e.handler, new Set()); uses.get(e.handler).add(e.msg + ":" + e.id); }
    for (const e of t.entries) {
      let hname, what;
      const wm = WM[e.msg];
      if (e.msg === 0x7fff) { const c = cmdIdent(e.id); hname = c ? `Ce${c}` : `CeCmd${e.id}`; what = `EV_COMMAND_ENABLE(${e.id})`; }
      else if (e.msg === 0 && e.id === 0) { hname = `EvRegisteredMsg_${e.handler.toString(16)}`; what = "message id 0 in the static table (filled at run time or WM_NULL)"; }
      else if (e.msg === 0 && e.id === 0xffffffff) { hname = "BNClicked"; what = "EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)"; }
      else if (e.msg === 0) { const c = cmdIdent(e.id); hname = c ? `Cm${c}` : `Cmd${e.id}`; what = `EV_COMMAND(${e.id})`; }
      else if (e.id === 0xffffffff) { hname = `NotifyAtChild_${(e.msg | 0) < 0 ? "m" + -(e.msg | 0) : e.msg}`; what = `EV_NOTIFY_AT_CHILD(code ${e.msg | 0})`; }
      else if (e.id !== 0) { hname = `Child${e.id}_Notify${(e.msg | 0) < 0 ? "m" + -(e.msg | 0) : e.msg}`; what = `EV_CHILD_NOTIFY(id ${e.id}, code ${e.msg | 0})`; }
      else if (wm) { hname = evName(wm); what = wm; }
      else { hname = `EvMsg_${e.msg.toString(16)}`; what = `message ${hex(e.msg, 4)}`; }
      const caption = res.commands[e.id] ? res.commands[e.id].map((x) => x.path || "accel " + x.accelerator).join(" | ") : null;
      let note = what + (caption ? ` — ${caption}` : "");
      if (uses.get(e.handler).size > 1) {
        const all = t.entries.filter((x) => x.handler === e.handler);
        const kind = all.every((x) => x.msg === 0x7fff) ? "Ce" : all.every((x) => x.msg === 0 && x.id !== 0 && x.id !== 0xffffffff) ? "Cm" : "Ev";
        const ids = all.map((x) => x.id).filter((x) => x && x !== 0xffffffff).sort((a, b) => a - b);
        const contiguous = ids.length > 1 && ids[ids.length - 1] - ids[0] === ids.length - 1;
        hname = contiguous ? `${kind}Range${ids[0]}to${ids[ids.length - 1]}` : `${kind}Shared_${e.handler.toString(16)}`;
        const caps = all.map((x) => (res.commands[x.id] ? (res.commands[x.id].find((c) => c.path) || {}).path : null) || (kind === "Ev" ? WM[x.msg] || "msg " + x.msg : "id " + x.id));
        note = `one handler for ${all.length} table entries: ${[...new Set(caps)].slice(0, 12).join("; ")}${caps.length > 12 ? "; …" : ""}`;
      }
      rows.push({ msg: e.msg, id: e.id, handler: e.handler, dispatcher: e.dispatcher, what, caption, name: hname });
      const full = owner ? `${owner}::${hname}` : `${hname}_${e.handler.toString(16)}`;
      setFn(e.handler, full, { cls: owner || undefined, kind: "message-handler", source: "owl:response-table", note, priority: 3 });
    }
    tableOut.push({ va: t.va, owner, find: findFn, rows });
  }

  // ---- constructors: functions that store a class's vtable at that class's vptr offset in `this` ----
  // Base-class constructors are inlined or called first, so the last such store names the class being
  // built. Stores into locals (temporary exception objects) do not count: only param_1 is `this`.
  {
    const vtClass = new Map(); // vtable VA -> class (primary vtables only)
    for (const c of r.classes) if (c.vtables.length) vtClass.set(c.vtables[0].va, c);
    const ctorRe = /^\s*(\*param_1|param_1\[(\d+)\]|\*\([^()]*\)\(param_1 \+ (0x[0-9a-f]+|\d+)\)) = (?:\([^()]*\))?(?:&(?:PTR_(?:FUN|LAB|DAT)_|DAT_)([0-9a-f]{8})|0x([0-9a-f]{6,8}));/gm;
    for (const f of fns) {
      if (sym.functions[f.addr] || f.status !== "written" || !f.file) continue;
      const text = fs.readFileSync(path.join(rawDir, f.file), "utf8");
      let last = null;
      for (const m of text.matchAll(ctorRe)) {
        const off = m[1] === "*param_1" ? 0 : m[2] !== undefined ? +m[2] * 4 : parseInt(m[3]);
        const c = vtClass.get(parseInt(m[4] || m[5], 16));
        if (c && c.vptrOffs === off) last = c;
      }
      if (last) setFn(f.addr, `${last.name}::${shortName(last.name)}`, { cls: last.name, kind: "constructor", source: "rtti:vtable-store",
        note: `constructor: stores ${last.name}'s vtable at its vptr offset (+${hex(last.vptrOffs, 1)}) in this`, priority: 1.5 });
    }
  }

  // ---- manual names (highest priority) ---------------------------------------
  for (const mf of manualFiles) {
    if (!fs.existsSync(mf)) continue;
    for (const m of JSON.parse(fs.readFileSync(mf, "utf8"))) {
      const a = typeof m.addr === "string" ? parseInt(m.addr, 16) : m.addr;
      if (m.slotClass) continue;
      if (m.data) { sym.data[a] = { name: m.name, source: m.source || "analysis", note: m.note }; continue; }
      setFn(a, m.name, { cls: m.cls, module: m.module, kind: m.kind || "function", source: m.source || "analysis", note: m.note, priority: 10 });
    }
  }

  const classes = r.classes.map((c) => ({ ...c, tables: tableOut.filter((t) => t.owner === c.name).map((t) => t.va) }));
  return { exe: path.basename(exe), imageBase: r.imageBase, functions: sym.functions, data: sym.data, classes, responseTables: tableOut, notes: sym.notes, inventory: fns.length };
}

if (require.main === module) {
  const [exe, rawDir, resFile, out, ...manual] = process.argv.slice(2);
  const s = build(exe, rawDir, resFile, manual);
  fs.writeFileSync(out, JSON.stringify(s, null, 1));
  const f = Object.values(s.functions);
  const by = {};
  for (const x of f) by[x.source] = (by[x.source] || 0) + 1;
  console.log(`${s.exe}: ${f.length} named of ${s.inventory} functions  ${JSON.stringify(by)}  tables=${s.responseTables.length} (owned ${s.responseTables.filter((t) => t.owner).length})  dataLabels=${Object.keys(s.data).length}  notes=${s.notes.length}`);
  for (const n of s.notes.slice(0, 12)) console.log("   note: " + n);
}
module.exports = { build, loadJournal };

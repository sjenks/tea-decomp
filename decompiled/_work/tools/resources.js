// Decode Win32 resources (menus, dialogs, string tables, accelerators, version) of a PE32 image
// into a readable .rc-style text plus a JSON id map. Read-only static parsing.
// Usage: node resources.js <exe> <outDir>
const fs = require("fs");
const path = require("path");
const { load, hex } = require("./pe");

function walkResources(p) {
  const { b } = p;
  const r = p.dd(2);
  if (!r.rva) return [];
  const base = p.rva2off(r.rva);
  const out = [];
  const name = (v) => {
    if (v & 0x80000000) {
      const o = base + (v & 0x7fffffff);
      const n = b.readUInt16LE(o);
      return b.toString("utf16le", o + 2, o + 2 + n * 2);
    }
    return v;
  };
  const walk = (off, pa) => {
    const n = b.readUInt16LE(off + 12) + b.readUInt16LE(off + 14);
    for (let i = 0; i < n; i++) {
      const e = off + 16 + i * 8;
      const id = name(b.readUInt32LE(e)), tgt = b.readUInt32LE(e + 4);
      if (tgt & 0x80000000) walk(base + (tgt & 0x7fffffff), pa.concat([id]));
      else {
        const d = base + tgt;
        const rva = b.readUInt32LE(d), size = b.readUInt32LE(d + 4);
        out.push({ type: pa[0], name: pa[1], lang: id, rva, size, data: b.subarray(p.rva2off(rva), p.rva2off(rva) + size) });
      }
    }
  };
  walk(base, []);
  return out;
}

const q = (s) => '"' + String(s).replace(/\\/g, "\\\\").replace(/"/g, '""').replace(/\t/g, "\\t").replace(/\r/g, "\\r").replace(/\n/g, "\\n") + '"';
const idName = (v) => (typeof v === "string" ? v : String(v));

// ---- MENU ------------------------------------------------------------------
function parseMenu(d) {
  const version = d.readUInt16LE(0);
  if (version === 1) return parseMenuEx(d);
  let o = 4 + d.readUInt16LE(2);
  const MF_POPUP = 0x10, MF_END = 0x80;
  const items = (depth) => {
    const list = [];
    for (;;) {
      const flags = d.readUInt16LE(o); o += 2;
      let id = null;
      if (!(flags & MF_POPUP)) { id = d.readUInt16LE(o); o += 2; }
      let e = o; while (d.readUInt16LE(e) !== 0) e += 2;
      const text = d.toString("utf16le", o, e); o = e + 2;
      const it = { flags, id, text };
      if (flags & MF_POPUP) it.children = items(depth + 1);
      list.push(it);
      if (flags & MF_END) break;
    }
    return list;
  };
  return items(0);
}
function parseMenuEx(d) {
  let o = 4 + d.readUInt16LE(2);
  const items = () => {
    const list = [];
    for (;;) {
      o = (o + 3) & ~3;
      const type = d.readUInt32LE(o), state = d.readUInt32LE(o + 4), id = d.readUInt32LE(o + 8), res = d.readUInt16LE(o + 12); o += 14;
      let e = o; while (d.readUInt16LE(e) !== 0) e += 2;
      const text = d.toString("utf16le", o, e); o = e + 2;
      const it = { flags: type, state, id, text };
      if (res & 0x01) { o = (o + 3) & ~3; o += 4; it.children = items(); }
      list.push(it);
      if (res & 0x80) break;
    }
    return list;
  };
  return items();
}
function menuRc(name, items) {
  const L = [`${idName(name)} MENU`, "BEGIN"];
  const rec = (list, ind) => {
    for (const it of list) {
      if (it.children) { L.push(`${ind}POPUP ${q(it.text)}`, `${ind}BEGIN`); rec(it.children, ind + "    "); L.push(`${ind}END`); }
      else if (!it.text && !it.id) L.push(`${ind}MENUITEM SEPARATOR`);
      else {
        const fl = [];
        if (it.flags & 0x01) fl.push("GRAYED"); if (it.flags & 0x08) fl.push("CHECKED"); if (it.flags & 0x4000) fl.push("HELP");
        L.push(`${ind}MENUITEM ${q(it.text)}, ${it.id}${fl.length ? ", " + fl.join(", ") : ""}`);
      }
    }
  };
  rec(items, "    ");
  L.push("END");
  return L.join("\n");
}

// ---- DIALOG ----------------------------------------------------------------
const CLASSES = { 0x80: "BUTTON", 0x81: "EDIT", 0x82: "STATIC", 0x83: "LISTBOX", 0x84: "SCROLLBAR", 0x85: "COMBOBOX" };
function parseDialog(d) {
  let o = 0;
  const align = () => { o = (o + 3) & ~3; };
  const szOrOrd = () => {
    const v = d.readUInt16LE(o);
    if (v === 0) { o += 2; return null; }
    if (v === 0xffff) { const id = d.readUInt16LE(o + 2); o += 4; return id; }
    let e = o; while (d.readUInt16LE(e) !== 0) e += 2;
    const s = d.toString("utf16le", o, e); o = e + 2; return s;
  };
  const ex = d.readUInt16LE(0) === 1 && d.readUInt16LE(2) === 0xffff;
  const dlg = { ex, controls: [] };
  let count;
  if (ex) {
    dlg.helpId = d.readUInt32LE(4); dlg.exStyle = d.readUInt32LE(8); dlg.style = d.readUInt32LE(12);
    count = d.readUInt16LE(16); dlg.x = d.readInt16LE(18); dlg.y = d.readInt16LE(20); dlg.cx = d.readInt16LE(22); dlg.cy = d.readInt16LE(24); o = 26;
  } else {
    dlg.style = d.readUInt32LE(0); dlg.exStyle = d.readUInt32LE(4);
    count = d.readUInt16LE(8); dlg.x = d.readInt16LE(10); dlg.y = d.readInt16LE(12); dlg.cx = d.readInt16LE(14); dlg.cy = d.readInt16LE(16); o = 18;
  }
  dlg.menu = szOrOrd(); dlg.cls = szOrOrd(); dlg.title = szOrOrd() || "";
  if (dlg.style & 0x40 /* DS_SETFONT */) {
    dlg.pointSize = d.readUInt16LE(o); o += 2;
    if (ex) { dlg.weight = d.readUInt16LE(o); o += 4; }
    dlg.font = szOrOrd();
  }
  for (let i = 0; i < count; i++) {
    align();
    const c = {};
    if (ex) {
      c.helpId = d.readUInt32LE(o); c.exStyle = d.readUInt32LE(o + 4); c.style = d.readUInt32LE(o + 8);
      c.x = d.readInt16LE(o + 12); c.y = d.readInt16LE(o + 14); c.cx = d.readInt16LE(o + 16); c.cy = d.readInt16LE(o + 18); c.id = d.readInt32LE(o + 20); o += 24;
    } else {
      c.style = d.readUInt32LE(o); c.exStyle = d.readUInt32LE(o + 4);
      c.x = d.readInt16LE(o + 8); c.y = d.readInt16LE(o + 10); c.cx = d.readInt16LE(o + 12); c.cy = d.readInt16LE(o + 14); c.id = d.readUInt16LE(o + 16); o += 18;
    }
    const cls = szOrOrd(); c.cls = typeof cls === "number" ? CLASSES[cls] || "#" + cls : cls;
    const t = szOrOrd(); c.text = t === null ? "" : t;
    const extra = d.readUInt16LE(o); o += 2 + extra;
    dlg.controls.push(c);
  }
  return dlg;
}
function dialogRc(name, g) {
  const L = [`${idName(name)} ${g.ex ? "DIALOGEX" : "DIALOG"} ${g.x}, ${g.y}, ${g.cx}, ${g.cy}`, `STYLE ${hex(g.style)}`];
  if (g.exStyle) L.push(`EXSTYLE ${hex(g.exStyle)}`);
  if (g.title) L.push(`CAPTION ${q(g.title)}`);
  if (g.cls) L.push(`CLASS ${q(g.cls)}`);
  if (g.menu) L.push(`MENU ${g.menu}`);
  if (g.font) L.push(`FONT ${g.pointSize}, ${q(g.font)}`);
  L.push("BEGIN");
  for (const c of g.controls)
    L.push(`    CONTROL ${typeof c.text === "number" ? c.text : q(c.text)},${c.id === 0xffff ? -1 : c.id}, ${q(c.cls)}, ${hex(c.style)}, ${c.x}, ${c.y}, ${c.cx}, ${c.cy}${c.exStyle ? ", " + hex(c.exStyle) : ""}`);
  L.push("END");
  return L.join("\n");
}

// ---- STRING / ACCELERATOR ---------------------------------------------------
function parseStrings(blockId, d) {
  const out = []; let o = 0;
  for (let i = 0; i < 16 && o + 2 <= d.length; i++) {
    const n = d.readUInt16LE(o); o += 2;
    if (n) out.push({ id: (blockId - 1) * 16 + i, text: d.toString("utf16le", o, o + n * 2) });
    o += n * 2;
  }
  return out;
}
const VK = { 8: "VK_BACK", 9: "VK_TAB", 13: "VK_RETURN", 27: "VK_ESCAPE", 32: "VK_SPACE", 33: "VK_PRIOR", 34: "VK_NEXT", 35: "VK_END", 36: "VK_HOME", 37: "VK_LEFT", 38: "VK_UP", 39: "VK_RIGHT", 40: "VK_DOWN", 45: "VK_INSERT", 46: "VK_DELETE" };
for (let i = 1; i <= 24; i++) VK[0x6f + i] = "VK_F" + i;
function parseAccel(d) {
  const out = [];
  for (let o = 0; o + 8 <= d.length; o += 8) {
    const f = d.readUInt16LE(o), key = d.readUInt16LE(o + 2), cmd = d.readUInt16LE(o + 4);
    const mods = []; if (f & 8) mods.push("CONTROL"); if (f & 4) mods.push("SHIFT"); if (f & 0x10) mods.push("ALT");
    const k = f & 1 ? VK[key] || (key >= 0x30 && key <= 0x5a ? `"${String.fromCharCode(key)}"` : hex(key, 2)) : key < 32 ? `"^${String.fromCharCode(key + 64)}"` : `"${String.fromCharCode(key)}"`;
    out.push({ key: k, cmd, virt: !!(f & 1), mods });
    if (f & 0x80) break;
  }
  return out;
}

// ---- VERSIONINFO --------------------------------------------------------------
function versionRc(name, d) {
  // every node: u16 length, u16 valueLength, u16 type (1 = text), UTF-16 key, padding, value, padding, children
  const node = (o) => {
    const len = d.readUInt16LE(o), vlen = d.readUInt16LE(o + 2), type = d.readUInt16LE(o + 4);
    let k = o + 6;
    while (d.readUInt16LE(k) !== 0) k += 2;
    const key = d.toString("utf16le", o + 6, k);
    let v = (k + 2 + 3) & ~3;
    const vbytes = type === 1 ? vlen * 2 : vlen;
    const value = d.subarray(v, Math.min(v + vbytes, o + len));
    const kids = [];
    let c = (v + vbytes + 3) & ~3;
    while (c + 6 <= o + len) { const ch = node(c); if (ch.len === 0) break; kids.push(ch); c = (c + ch.len + 3) & ~3; }
    return { len, type, key, value, kids };
  };
  const root = node(0);
  if (root.key !== "VS_VERSION_INFO" || root.value.length < 52) throw new Error("not a VS_VERSION_INFO block");
  const f = root.value;
  const ver = (hi, lo) => [f.readUInt16LE(hi + 2), f.readUInt16LE(hi), f.readUInt16LE(lo + 2), f.readUInt16LE(lo)].join(",");
  const L = [`${idName(name)} VERSIONINFO`, `FILEVERSION ${ver(8, 12)}`, `PRODUCTVERSION ${ver(16, 20)}`, `FILEFLAGSMASK ${hex(f.readUInt32LE(24))}L`, `FILEFLAGS ${hex(f.readUInt32LE(28))}L`,
    `FILEOS ${hex(f.readUInt32LE(32))}L`, `FILETYPE ${hex(f.readUInt32LE(36))}L`, `FILESUBTYPE ${hex(f.readUInt32LE(40))}L`, "BEGIN"];
  for (const blk of root.kids) {
    L.push(`    BLOCK ${q(blk.key)}`, "    BEGIN");
    if (blk.key === "StringFileInfo") {
      for (const tbl of blk.kids) {
        L.push(`        BLOCK ${q(tbl.key)}`, "        BEGIN");
        for (const s of tbl.kids) L.push(`            VALUE ${q(s.key)}, ${q(s.value.toString("utf16le").replace(/\0+$/, ""))}`);
        L.push("        END");
      }
    } else {
      for (const v of blk.kids) { const w = []; for (let i = 0; i + 2 <= v.value.length; i += 2) w.push(i % 4 === 0 ? hex(v.value.readUInt16LE(i), 4) : v.value.readUInt16LE(i)); L.push(`        VALUE ${q(v.key)}, ${w.join(", ")}`); }
    }
    L.push("    END");
  }
  L.push("END");
  return L.join("\n");
}

function run(file, outDir) {
  const p = load(file);
  const res = walkResources(p);
  fs.mkdirSync(outDir, { recursive: true });
  const rc = [`// Resources decoded from ${path.basename(file)} (static parse of the PE .rsrc section; not the original .rc source)`,
    "// Compiles with a resource compiler (checked with GNU windres). Bitmaps, icons and cursors are listed at the end, not included.",
    "#include <windows.h>", ""];
  const map = { commands: {}, strings: {}, dialogs: {}, menus: {} };
  const warn = [];
  const of = (t) => res.filter((r) => r.type === t);
  for (const r of of(4)) {
    try {
      const items = parseMenu(r.data);
      rc.push(menuRc(r.name, items), "");
      const rec = (list, trail) => { for (const it of list) { if (it.children) rec(it.children, trail.concat(it.text)); else if (it.id) (map.commands[it.id] ||= []).push({ menu: idName(r.name), path: trail.concat(it.text).join(" > ") }); } };
      rec(items, []); map.menus[idName(r.name)] = items;
    } catch (e) { warn.push(`menu ${r.name}: ${e.message}`); }
  }
  for (const r of of(9)) {
    try {
      const acc = parseAccel(r.data);
      rc.push(`${idName(r.name)} ACCELERATORS`, "BEGIN", ...acc.map((a) => `    ${a.key}, ${a.cmd}${a.virt ? ", VIRTKEY" : ""}${a.mods.length ? ", " + a.mods.join(", ") : ""}`), "END", "");
      for (const a of acc) (map.commands[a.cmd] ||= []).push({ accelerator: a.mods.concat(a.key.replace(/"/g, "")).join("+") });
    } catch (e) { warn.push(`accel ${r.name}: ${e.message}`); }
  }
  for (const r of of(5)) {
    try { const g = parseDialog(r.data); rc.push(dialogRc(r.name, g), ""); map.dialogs[idName(r.name)] = { title: g.title, controls: g.controls.map((c) => ({ id: c.id, cls: c.cls, text: c.text })) }; }
    catch (e) { warn.push(`dialog ${r.name}: ${e.message}`); }
  }
  const strs = [];
  for (const r of of(6)) { try { strs.push(...parseStrings(r.name, r.data)); } catch (e) { warn.push(`strings ${r.name}: ${e.message}`); } }
  strs.sort((a, c) => a.id - c.id);
  if (strs.length) { rc.push("STRINGTABLE", "BEGIN", ...strs.map((s) => `    ${String(s.id).padEnd(6)} ${q(s.text)}`), "END", ""); for (const s of strs) map.strings[s.id] = s.text; }
  for (const r of of(16)) { try { rc.push(versionRc(r.name, r.data), ""); } catch (e) { warn.push(`version ${r.name}: ${e.message}`); } }
  // raw binary resources (bitmaps, icons, cursors) are listed, not dumped as text
  const TN = { 1: "CURSOR", 2: "BITMAP", 3: "ICON", 10: "RCDATA", 12: "GROUP_CURSOR", 14: "GROUP_ICON" };
  rc.push("// Binary resources (not expanded here):");
  for (const r of res) if (TN[r.type]) rc.push(`//   ${TN[r.type].padEnd(12)} ${String(idName(r.name)).padEnd(12)} ${r.size} bytes @ rva ${hex(r.rva)}`);
  fs.writeFileSync(path.join(outDir, path.basename(file, ".exe") + ".rc"), rc.join("\n") + "\n");
  fs.writeFileSync(path.join(outDir, path.basename(file, ".exe") + ".resources.json"), JSON.stringify(map, null, 1));
  console.log(`${path.basename(file)}: menus=${of(4).length} dialogs=${of(5).length} accel=${of(9).length} strings=${strs.length} commandIds=${Object.keys(map.commands).length} warnings=${warn.length}`);
  for (const x of warn) console.log("   ! " + x);
  return map;
}

if (require.main === module) run(process.argv[2], process.argv[3]);
module.exports = { run };

// Engine-free PE fact dump: sections, entry point, resource names, version info, compiler markers.
// Usage: node pe-facts.js <exe> [<exe> ...]
const fs = require("fs");
const path = require("path");

function readPE(file) {
  const b = fs.readFileSync(file);
  const pe = b.readUInt32LE(0x3c);
  if (b.toString("latin1", pe, pe + 4) !== "PE\0\0") throw new Error("not PE: " + file);
  const coff = pe + 4;
  const nsec = b.readUInt16LE(coff + 2);
  const stamp = b.readUInt32LE(coff + 4);
  const optSize = b.readUInt16LE(coff + 16);
  const opt = coff + 20;
  const magic = b.readUInt16LE(opt);
  const linker = b[opt + 2] + "." + b[opt + 3];
  const entry = b.readUInt32LE(opt + 16);
  const imageBase = b.readUInt32LE(opt + 28);
  const subsystem = b.readUInt16LE(opt + 68);
  const ddBase = opt + 96;
  const dd = (i) => ({ rva: b.readUInt32LE(ddBase + i * 8), size: b.readUInt32LE(ddBase + i * 8 + 4) });
  const secs = [];
  const st = opt + optSize;
  for (let i = 0; i < nsec; i++) {
    const o = st + i * 40;
    secs.push({
      name: b.toString("latin1", o, o + 8).replace(/\0+$/, ""),
      vsize: b.readUInt32LE(o + 8),
      va: b.readUInt32LE(o + 12),
      rawSize: b.readUInt32LE(o + 16),
      raw: b.readUInt32LE(o + 20),
      chars: b.readUInt32LE(o + 36),
    });
  }
  const rva2off = (rva) => {
    for (const s of secs) if (rva >= s.va && rva < s.va + Math.max(s.vsize, s.rawSize)) return rva - s.va + s.raw;
    return -1;
  };
  return { b, magic, linker, stamp, entry, imageBase, subsystem, secs, dd, rva2off };
}

function resources(p) {
  const { b, dd, rva2off } = p;
  const r = dd(2);
  if (!r.rva) return [];
  const base = rva2off(r.rva);
  const out = [];
  const name = (v) => {
    if (v & 0x80000000) {
      const o = base + (v & 0x7fffffff);
      const n = b.readUInt16LE(o);
      return b.toString("utf16le", o + 2, o + 2 + n * 2);
    }
    return "#" + v;
  };
  const walk = (off, pathArr) => {
    const named = b.readUInt16LE(off + 12), ids = b.readUInt16LE(off + 14);
    for (let i = 0; i < named + ids; i++) {
      const e = off + 16 + i * 8;
      const id = b.readUInt32LE(e), tgt = b.readUInt32LE(e + 4);
      const np = pathArr.concat(name(id));
      if (tgt & 0x80000000) walk(base + (tgt & 0x7fffffff), np);
      else {
        const d = base + tgt;
        out.push({ path: np, rva: b.readUInt32LE(d), size: b.readUInt32LE(d + 4), off: rva2off(b.readUInt32LE(d)) });
      }
    }
  };
  walk(base, []);
  return out;
}

const RT = { "#1": "CURSOR", "#2": "BITMAP", "#3": "ICON", "#4": "MENU", "#5": "DIALOG", "#6": "STRING", "#9": "ACCELERATOR", "#10": "RCDATA", "#12": "GROUP_CURSOR", "#14": "GROUP_ICON", "#16": "VERSION" };

function versionStrings(b, off, size) {
  // Pull the UTF-16 "key\0value" pairs out of a VS_VERSIONINFO block without a full parse.
  const txt = b.toString("utf16le", off, off + size - (size % 2));
  const keys = ["CompanyName", "FileDescription", "FileVersion", "InternalName", "LegalCopyright", "OriginalFilename", "ProductName", "ProductVersion", "Comments"];
  const res = {};
  for (const k of keys) {
    const i = txt.indexOf(k + "\0");
    if (i < 0) continue;
    let j = i + k.length;
    while (j < txt.length && txt.charCodeAt(j) === 0) j++;
    let e = j;
    while (e < txt.length && txt.charCodeAt(e) !== 0) e++;
    res[k] = txt.slice(j, e);
  }
  return res;
}

const MARKERS = [
  /Borland C\+\+[^\0]{0,40}/g, /Borland[^\0]{0,60}/g, /Inprise[^\0]{0,40}/g, /Embarcadero[^\0]{0,40}/g, /Delphi[^\0]{0,30}/g,
  /C\+\+Builder[^\0]{0,30}/g, /Object ?Windows[^\0]{0,30}/g, /\bOWL[A-Za-z0-9 ]{0,20}/g, /Turbo C[^\0]{0,30}/g,
  /Microsoft Visual C\+\+[^\0]{0,30}/g, /\bMFC[0-9A-Za-z]*/g, /GCC: \([^\0]{0,40}/g, /mingw[^\0]{0,20}/gi, /wxWidgets[^\0]{0,20}/g,
  /UPX!/g, /mscoree\.dll/gi, /FastMM[^\0]{0,20}/g, /SOFTWARE\\Borland\\[^\0]{0,40}/g, /Portions Copyright[^\0]{0,60}/g,
  /TObject|TForm\b|TApplication\b|TWindow\b|TDialog\b|TModule\b/g, /Inno Setup[^\0]{0,40}/g, /zlib[^\0]{0,30}/gi, /inflate [0-9.]+ Copyright[^\0]{0,40}/g,
];

for (const file of process.argv.slice(2)) {
  const p = readPE(file);
  console.log("\n################ " + path.basename(file) + " ################");
  console.log(`pe32 magic=0x${p.magic.toString(16)} linker=${p.linker} timestamp=0x${p.stamp.toString(16)} (${new Date(p.stamp * 1000).toISOString()}) subsystem=${p.subsystem}`);
  console.log(`imageBase=0x${p.imageBase.toString(16)} entry=0x${(p.imageBase + p.entry).toString(16)} debugDir=${JSON.stringify(p.dd(6))} tlsDir=${JSON.stringify(p.dd(9))} exportDir=${JSON.stringify(p.dd(0))}`);
  for (const s of p.secs)
    console.log(`  ${s.name.padEnd(8)} va=0x${(p.imageBase + s.va).toString(16)} vsize=0x${s.vsize.toString(16).padStart(6)} raw=0x${s.raw.toString(16).padStart(6)} rawSize=0x${s.rawSize.toString(16).padStart(6)} chars=0x${s.chars.toString(16)}`);
  const rs = resources(p);
  const byType = {};
  for (const r of rs) (byType[r.path[0]] ||= []).push(r);
  for (const [t, list] of Object.entries(byType)) {
    const names = list.map((r) => r.path[1]);
    const shown = names.length > 24 ? names.slice(0, 24).join(" ") + " …(+" + (names.length - 24) + ")" : names.join(" ");
    console.log(`  res ${(RT[t] || t).padEnd(12)} x${String(list.length).padStart(3)}  bytes=${list.reduce((a, r) => a + r.size, 0)}  names: ${shown}`);
  }
  const ver = rs.find((r) => r.path[0] === "#16");
  if (ver) console.log("  version:", JSON.stringify(versionStrings(p.b, ver.off, ver.size)));
  const lat = p.b.toString("latin1");
  const hits = new Map();
  for (const re of MARKERS) for (const m of lat.matchAll(re)) {
    const k = m[0].replace(/[^\x20-\x7e]+/g, " ").trim().slice(0, 70);
    hits.set(k, (hits.get(k) || 0) + 1);
  }
  console.log("  markers:");
  for (const [k, v] of [...hits.entries()].sort((a, b) => b[1] - a[1]).slice(0, 30)) console.log(`    ${String(v).padStart(4)}x ${k}`);
}

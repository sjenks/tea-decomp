// Empirically inspect how a named Borland tpid is laid out and what references it.
// Usage: node rtti-refs.js <exe> <ClassName> [ctxDwords]
const { load, hex } = require("./pe");
const [file, cls, ctxArg] = process.argv.slice(2);
const ctx = +(ctxArg || 6);
const p = load(file);
const b = p.b;

// locate tpid by name with the 0x30 / 0x20 header forms
let found = null;
for (const s of p.secs) {
  if (s.name !== ".text" && s.name !== ".data") continue;
  for (let o = s.raw; o < s.raw + s.rawSize - 64; o++) {
    const nameOff = b.readUInt16LE(o + 6);
    if (nameOff !== 0x30 && nameOff !== 0x20) continue;
    if ((b.readUInt16LE(o + 4) & 3) === 0) continue;
    if (p.cstr(o + nameOff, 300) === cls) { found = o; break; }
  }
  if (found !== null) break;
}
if (found === null) { console.log("tpid not found for", cls); process.exit(1); }
const va = p.off2va(found);
const nameOff = b.readUInt16LE(found + 6);
console.log(`tpid ${cls} @ ${hex(va)} (file ${hex(found)}) size=${b.readUInt32LE(found)} nameOff=${hex(nameOff, 2)}`);
const dw = (o) => b.readUInt32LE(o);
const tail = found + nameOff + cls.length + 1;
const aligned = (tail + 3) & ~3;
console.log("header: " + b.subarray(found, found + nameOff).toString("hex").replace(/(.{8})/g, "$1 "));
console.log("after name (dwords):");
for (let i = 0; i < 24; i++) {
  const v = dw(aligned + i * 4);
  let note = "";
  if (p.inImage(v)) {
    const vo = p.va2off(v);
    const no = vo >= 0 ? b.readUInt16LE(vo + 6) : 0;
    if (vo >= 0 && (no === 0x30 || no === 0x20) && (b.readUInt16LE(vo + 4) & 3)) note = "  -> tpid " + p.cstr(vo + no, 80);
    else note = p.inText(v) ? "  -> .text" : "  -> image";
  }
  console.log(`   +${hex(aligned - found + i * 4, 3)}  ${hex(v)}${note}`);
}

// references to the tpid VA anywhere in initialized data
console.log(`\nreferences to ${hex(va)}:`);
const refs = [];
const needle = Buffer.alloc(4); needle.writeUInt32LE(va);
let pos = 0;
while ((pos = b.indexOf(needle, pos)) >= 0) { refs.push(pos); pos++; }
for (const r of refs.slice(0, 40)) {
  const rva = p.off2va(r);
  const sec = p.secs.find((s) => r >= s.raw && r < s.raw + s.rawSize);
  const before = [], after = [];
  for (let i = ctx; i >= 1; i--) before.push(hex(dw(r - i * 4)).slice(2));
  for (let i = 1; i <= ctx; i++) after.push(hex(dw(r + i * 4)).slice(2));
  console.log(`  ${hex(rva)} [${sec ? sec.name : "?"}]  ${before.join(" ")} | <tpid> | ${after.join(" ")}`);
}
console.log(`  (${refs.length} refs)`);

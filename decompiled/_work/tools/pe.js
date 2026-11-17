// Minimal PE32 reader shared by the analysis scripts. Read-only; never executes the target.
const fs = require("fs");

function load(file) {
  const b = fs.readFileSync(file);
  const pe = b.readUInt32LE(0x3c);
  if (b.toString("latin1", pe, pe + 4) !== "PE\0\0") throw new Error("not PE: " + file);
  const coff = pe + 4;
  const nsec = b.readUInt16LE(coff + 2);
  const optSize = b.readUInt16LE(coff + 16);
  const opt = coff + 20;
  const imageBase = b.readUInt32LE(opt + 28);
  const entry = b.readUInt32LE(opt + 16);
  const ddBase = opt + 96;
  const dd = (i) => ({ rva: b.readUInt32LE(ddBase + i * 8), size: b.readUInt32LE(ddBase + i * 8 + 4) });
  const secs = [];
  const st = opt + optSize;
  for (let i = 0; i < nsec; i++) {
    const o = st + i * 40;
    secs.push({
      name: b.toString("latin1", o, o + 8).replace(/\0+$/, ""),
      vsize: b.readUInt32LE(o + 8),
      rva: b.readUInt32LE(o + 12),
      rawSize: b.readUInt32LE(o + 16),
      raw: b.readUInt32LE(o + 20),
      chars: b.readUInt32LE(o + 36),
    });
  }
  const secOfRva = (rva) => secs.find((s) => rva >= s.rva && rva < s.rva + Math.max(s.vsize, s.rawSize));
  const rva2off = (rva) => {
    const s = secOfRva(rva);
    if (!s) return -1;
    const o = rva - s.rva;
    return o < s.rawSize ? s.raw + o : -1; // -1 for uninitialised tail
  };
  const va2off = (va) => rva2off(va - imageBase);
  const off2va = (off) => {
    const s = secs.find((x) => off >= x.raw && off < x.raw + x.rawSize);
    return s ? imageBase + s.rva + (off - s.raw) : -1;
  };
  const sec = (name) => secs.find((s) => s.name === name);
  const text = sec(".text") || sec("CODE");
  const inText = (va) => va >= imageBase + text.rva && va < imageBase + text.rva + text.vsize;
  const inImage = (va) => !!secOfRva(va - imageBase);
  const cstr = (off, max = 512) => {
    let e = off;
    while (e < b.length && e - off < max && b[e] !== 0) e++;
    return b.toString("latin1", off, e);
  };
  return { file, b, imageBase, entry: imageBase + entry, dd, secs, sec, text, secOfRva, rva2off, va2off, off2va, inText, inImage, cstr };
}

const hex = (n, w = 8) => "0x" + (n >>> 0).toString(16).padStart(w, "0");

module.exports = { load, hex };

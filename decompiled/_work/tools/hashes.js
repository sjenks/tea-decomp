// Position-independent fingerprint of every function: body bytes with relocated absolute addresses
// and inter-function call/jump displacements masked out. Identical source compiled with the same
// compiler/options yields the same fingerprint in different binaries.
// Usage: node hashes.js <exe> <rawDir> <out.json>
const fs = require("fs");
const crypto = require("crypto");
const { load } = require("./pe");
const { loadJournal } = require("./names");

function relocSites(p) {
  const r = p.dd(5);
  const sites = new Set();
  if (!r.rva) return sites;
  let o = p.rva2off(r.rva);
  const end = o + r.size;
  while (o + 8 <= end) {
    const page = p.b.readUInt32LE(o), size = p.b.readUInt32LE(o + 4);
    if (size < 8) break;
    for (let i = 8; i + 2 <= size; i += 2) {
      const e = p.b.readUInt16LE(o + i);
      if (e >> 12 === 3) sites.add(p.imageBase + page + (e & 0xfff));
    }
    o += size;
  }
  return sites;
}

function fingerprints(exe, rawDir) {
  const p = load(exe);
  const fns = loadJournal(rawDir).filter((f) => f.ranges.length);
  const starts = new Set(fns.map((f) => f.addr));
  const relocs = relocSites(p);
  const out = {};
  for (const f of fns) {
    const h = crypto.createHash("sha1");
    let total = 0;
    for (const [s, e] of f.ranges) {
      const off = p.va2off(s);
      if (off < 0) continue;
      const buf = Buffer.from(p.b.subarray(off, off + (e - s + 1)));
      for (let i = 0; i < buf.length; i++) {
        const va = s + i;
        if (relocs.has(va) && i + 4 <= buf.length) { buf.fill(0, i, i + 4); i += 3; continue; }
        if ((buf[i] === 0xe8 || buf[i] === 0xe9) && i + 5 <= buf.length) {
          const tgt = (va + 5 + buf.readInt32LE(i + 1)) >>> 0;
          if (starts.has(tgt)) { buf.fill(0, i + 1, i + 5); i += 4; }
        }
      }
      h.update(buf);
      total += buf.length;
    }
    out[f.addr] = { h: h.digest("hex").slice(0, 20) + ":" + total, n: total };
  }
  return out;
}

if (require.main === module) {
  const [exe, rawDir, out] = process.argv.slice(2);
  const fp = fingerprints(exe, rawDir);
  fs.writeFileSync(out, JSON.stringify(fp));
  console.log(`${exe.split(/[\\/]/).pop()}: ${Object.keys(fp).length} fingerprints`);
}
module.exports = { fingerprints };

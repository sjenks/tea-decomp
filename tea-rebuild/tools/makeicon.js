// Draws the program icon (src/tea.ico): three honeycomb cells, amber on a transparent background.
// Usage: node tools/makeicon.js
const fs = require("fs");
const path = require("path");

function render(size) {
  const px = new Float32Array(size * size * 4); // premultiplied RGBA, 0..1
  const ss = 4; // supersampling per axis
  const r = size * 0.24; // hexagon circumradius
  const h = (Math.sqrt(3) / 2) * r;
  const cx = size / 2, cy = size / 2;
  // Three cells in a triangle; pointy-top hexagons.
  const cells = [
    [cx - h, cy - r * 0.75, [0.98, 0.72, 0.16]],
    [cx + h, cy - r * 0.75, [0.95, 0.62, 0.10]],
    [cx, cy + r * 0.75, [0.90, 0.55, 0.08]],
  ];
  const inside = (x, y, ccx, ccy, rr) => {
    const dx = Math.abs(x - ccx), dy = Math.abs(y - ccy);
    const hh = (Math.sqrt(3) / 2) * rr;
    if (dx > hh) return false;
    return dy <= rr - dx * Math.tan(Math.PI / 6);
  };
  for (let y = 0; y < size; y++)
    for (let x = 0; x < size; x++) {
      let a = 0, cr = 0, cg = 0, cb = 0;
      for (let sy = 0; sy < ss; sy++)
        for (let sx = 0; sx < ss; sx++) {
          const fx = x + (sx + 0.5) / ss, fy = y + (sy + 0.5) / ss;
          for (const [ccx, ccy, col] of cells) {
            if (inside(fx, fy, ccx, ccy, r * 0.98)) {
              // A darker rim and a lighter centre give the cells some depth.
              const rim = !inside(fx, fy, ccx, ccy, r * 0.98 - Math.max(1, size / 16));
              const k = rim ? 0.62 : 1.0;
              cr += col[0] * k; cg += col[1] * k; cb += col[2] * k; a += 1;
              break;
            }
          }
        }
      const n = ss * ss, i = (y * size + x) * 4;
      px[i] = cr / n; px[i + 1] = cg / n; px[i + 2] = cb / n; px[i + 3] = a / n;
    }
  // BMP inside ICO: BITMAPINFOHEADER, height doubled, bottom-up BGRA, then a 1-bpp AND mask.
  const maskRow = Math.ceil(size / 32) * 4;
  const buf = Buffer.alloc(40 + size * size * 4 + maskRow * size);
  buf.writeUInt32LE(40, 0); buf.writeInt32LE(size, 4); buf.writeInt32LE(size * 2, 8);
  buf.writeUInt16LE(1, 12); buf.writeUInt16LE(32, 14); buf.writeUInt32LE(size * size * 4 + maskRow * size, 20);
  for (let y = 0; y < size; y++)
    for (let x = 0; x < size; x++) {
      const s = ((size - 1 - y) * size + x) * 4, d = 40 + (y * size + x) * 4;
      const a = px[s + 3];
      const un = (v) => Math.round(a > 0 ? Math.min(1, v / a) * 255 : 0);
      buf[d] = un(px[s + 2]); buf[d + 1] = un(px[s + 1]); buf[d + 2] = un(px[s]); buf[d + 3] = Math.round(a * 255);
      if (a < 0.5) {
        const m = 40 + size * size * 4 + y * maskRow + (x >> 3);
        buf[m] |= 0x80 >> (x & 7);
      }
    }
  return buf;
}

const sizes = [16, 24, 32, 48];
const images = sizes.map(render);
const header = Buffer.alloc(6 + 16 * sizes.length);
header.writeUInt16LE(0, 0); header.writeUInt16LE(1, 2); header.writeUInt16LE(sizes.length, 4);
let offset = header.length;
sizes.forEach((s, i) => {
  const e = 6 + i * 16;
  header[e] = s; header[e + 1] = s; header.writeUInt16LE(1, e + 4); header.writeUInt16LE(32, e + 6);
  header.writeUInt32LE(images[i].length, e + 8); header.writeUInt32LE(offset, e + 12);
  offset += images[i].length;
});
const out = path.join(__dirname, "..", "src", "tea.ico");
fs.writeFileSync(out, Buffer.concat([header, ...images]));
console.log("wrote", out);

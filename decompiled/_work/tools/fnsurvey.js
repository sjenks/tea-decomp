// Survey decompiled functions in an address range: size, Windows APIs called, string literals, callers count.
// Usage: node fnsurvey.js <rawDir> <startHex> <endHex> [--all]
const fs = require("fs");
const path = require("path");
const [rawDir, s, e, flag] = process.argv.slice(2);
const lo = parseInt(s, 16), hi = parseInt(e, 16);
const dir = path.join(rawDir, "functions");
const files = fs.readdirSync(dir).filter((f) => f.endsWith(".c"));
const bodies = new Map();
for (const f of files) {
  const t = fs.readFileSync(path.join(dir, f), "utf8");
  const i = t.indexOf("// pseudocode:");
  bodies.set(parseInt(f, 16), t.slice(i < 0 ? 0 : t.indexOf("\n", i) + 1));
}
// call counts
const calls = new Map();
for (const b of bodies.values()) for (const m of b.matchAll(/\bFUN_([0-9a-f]{8})\(/g)) { const a = parseInt(m[1], 16); calls.set(a, (calls.get(a) || 0) + 1); }
const strRe = /"((?:[^"\\]|\\.){2,70})"/g;
const apiRe = /\b([A-Z][A-Za-z0-9]+)\(/g;
for (const a of [...bodies.keys()].sort((x, y) => x - y)) {
  if (a < lo || a > hi) continue;
  const b = bodies.get(a);
  const strs = [...new Set([...b.matchAll(strRe)].map((m) => m[1]))].slice(0, 5);
  const apis = [...new Set([...b.matchAll(apiRe)].map((m) => m[1]).filter((n) => !/^(CONCAT|SUB|ZEXT|SEXT|LAB|FUN|CARRY|SBORROW|SCARRY|POPCOUNT)/.test(n)))].slice(0, 6);
  const sig = (b.match(/^[^\n{;]*\([^)]*\)\s*$/m) || [""])[0].trim().replace(/\s+/g, " ");
  if (flag !== "--all" && !strs.length && !apis.length) continue;
  const n = calls.get(a) || 0;
  console.log(`0x${a.toString(16)} ${String(b.split("\n").length).padStart(5)}L x${String(n).padStart(3)} ${sig.slice(0, 78).padEnd(78)} ${apis.join(",").slice(0, 50)} ${strs.map((x) => JSON.stringify(x)).join(" ").slice(0, 140)}`);
}

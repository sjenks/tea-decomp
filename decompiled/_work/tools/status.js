// Naming status per function of one generated file (or all src/ files): size, name source, variables
// still carrying Ghidra storage names.
// Usage: node status.js <Program> [file.cpp ...]   (no file: one summary line per src/ file)
const fs = require("fs");
const path = require("path");
const { parse, GENERIC } = require("./varnames");
const D = path.join(__dirname, "..", "..");
const [prog, ...files] = process.argv.slice(2);
const dir = path.join(D, prog, "src");
const list = files.length ? files : fs.readdirSync(dir).filter((f) => f.endsWith(".cpp"));
const summary = [];
for (const f of list) {
  const t = fs.readFileSync(path.join(dir, f), "utf8").replace(/\r/g, "");
  let fns = 0, unnamed = 0, left = 0;
  for (const p of t.split(/^\/\/ -{100}\n/m).slice(1)) {
    const m = p.match(/^\/\/ (0x[0-9a-f]{8})  (\S+)\s+\((\d+) bytes[^)]*\)\s+\[([^\]]*)\]/);
    if (!m) continue;
    const P = parse(p.replace(/\n\} \/\/ namespace tea\n?$/, ""));
    const gen = P ? [...P.params, ...P.locals].map((v) => v.name).filter((n) => n && GENERIC.test(n)) : [];
    fns++; if (m[4].startsWith("unnamed")) unnamed++; left += gen.length;
    if (files.length) console.log(`${m[1]} ${String(m[3]).padStart(6)}B ${m[2].padEnd(48)} ${m[4].startsWith("unnamed") ? "UNNAMED " : ""}${gen.length ? gen.length + ": " + gen.join(" ") : ""}`.slice(0, 330));
  }
  summary.push([f, fns, unnamed, left]);
}
if (!files.length) for (const [f, n, u, l] of summary.sort((a, b) => b[3] - a[3])) console.log(`${f.padEnd(45)} ${String(n).padStart(4)} fns ${String(u).padStart(4)} unnamed ${String(l).padStart(5)} generic vars`);

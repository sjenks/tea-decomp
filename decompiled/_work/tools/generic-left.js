// List the variables that still carry Ghidra's storage names (param_1, local_28, iVar3, ...) per function.
// Usage: node generic-left.js <Program> [src|lib|all] [--min N]
const fs = require("fs");
const path = require("path");
const { parse, GENERIC } = require("./varnames");
const D = path.join(__dirname, "..", "..");
const args = process.argv.slice(2);
const [prog, where = "src"] = args.filter((a) => !a.startsWith("--") && !/^\d+$/.test(a));
let min = 1;
{ const i = args.indexOf("--min"); if (i >= 0) min = +args[i + 1]; }
const out = [];
let total = 0;
for (const sub of where === "all" ? ["src", "lib"] : [where]) {
  for (const f of fs.readdirSync(path.join(D, prog, sub))) {
    const t = fs.readFileSync(path.join(D, prog, sub, f), "utf8").replace(/\r/g, "");
    for (const p of t.split(/^\/\/ -{100}\n/m).slice(1)) {
      const m = p.match(/^\/\/ (0x[0-9a-f]{8})  (\S+)\s+\((\d+) bytes/);
      if (!m) continue;
      const body = p.slice(p.indexOf("\n", p.search(/^[^/\s].*\(/m)) >= 0 ? 0 : 0);
      const P = parse(p.replace(/\n\} \/\/ namespace tea\n?$/, ""));
      if (!P) continue;
      const left = [...P.params, ...P.locals].map((v) => v.name).filter((n) => n && GENERIC.test(n));
      total += left.length;
      if (left.length >= min) out.push([m[1], m[2], +m[3], left]);
    }
  }
}
out.sort((a, b) => b[3].length - a[3].length);
for (const [a, n, size, left] of out) console.log(`${a} ${String(left.length).padStart(4)} ${String(size).padStart(6)}B ${n}  ${left.join(" ")}`.slice(0, 400));
console.log(`total ${total} in ${out.length} functions`);

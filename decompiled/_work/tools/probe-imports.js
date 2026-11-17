// Find which imported API names the Windows SDK headers in use do NOT declare, so decomp.h can
// declare those itself (from Ghidra's prototype). Names the headers define as macros are left alone.
// Usage: node probe-imports.js <programDir> <seedsDir>   reads <seeds>/<Program>.imports.json, writes <seeds>/<Program>.sdk-missing.json
const fs = require("fs");
const path = require("path");
const { compileFiles } = require("./compile");

const dir = path.resolve(process.argv[2]);
const seeds = path.resolve(process.argv[3] || path.join(__dirname, "..", "seeds"));
const prog = path.basename(dir);
const names = JSON.parse(fs.readFileSync(path.join(seeds, `${prog}.imports.json`), "utf8"));
const probe = ["#include \"../ghidra.h\""];
const lineOf = new Map();
for (const n of names) { probe.push(`#ifdef ${n}`, `#error IS_MACRO ${n}`, "#endif"); }
probe.push("namespace probe {");
for (const n of names) { lineOf.set(probe.length + 1, n); probe.push(`using ::${n};`); }
probe.push("}");
fs.mkdirSync(path.join(dir, "src"), { recursive: true });
const rel = "src/__probe_imports.cpp";
fs.writeFileSync(path.join(dir, rel), probe.join("\n") + "\n");
compileFiles(dir, [rel], { jobs: 1 }).then((res) => {
  fs.rmSync(path.join(dir, rel), { force: true });
  const macros = new Set(), missing = new Set();
  for (const line of res[0].err.split(/\r?\n/)) {
    let m = line.match(/#error IS_MACRO (\w+)/);
    if (m) { macros.add(m[1]); continue; }
    m = line.match(/__probe_imports\.cpp:(\d+):\d+: error:/);
    if (m && lineOf.has(+m[1])) missing.add(lineOf.get(+m[1]));
  }
  const out = [...missing].filter((n) => !macros.has(n)).sort();
  fs.writeFileSync(path.join(seeds, `${prog}.sdk-missing.json`), JSON.stringify(out));
  console.log(`${path.basename(dir)}: ${names.length} imported APIs with known prototypes; ${out.length} not declared by the SDK headers${macros.size ? `; ${macros.size} are macros there (${[...macros].slice(0, 6).join(", ")})` : ""}${out.length ? ": " + out.slice(0, 12).join(", ") + (out.length > 12 ? ", …" : "") : ""}`);
});

// One-paragraph summaries of functions in the generated tree, for naming many at once: signature,
// what it calls (named functions and APIs), string literals, resource ids, and who calls it.
// Usage: node brief.js <Program> <file.cpp|addr ...> [--unnamed]
const fs = require("fs");
const path = require("path");
const D = path.join(__dirname, "..", "..");
const args = process.argv.slice(2);
const onlyUnnamed = args.includes("--unnamed");
const [prog, ...wanted] = args.filter((a) => a !== "--unnamed");
const fns = [];
for (const sub of ["src", "lib"]) for (const f of fs.readdirSync(path.join(D, prog, sub))) {
  const t = fs.readFileSync(path.join(D, prog, sub, f), "utf8").replace(/\r/g, "");
  for (const p of t.split(/^\/\/ -{100}\n/m).slice(1)) {
    const m = p.match(/^\/\/ (0x[0-9a-f]{8})  (\S+)\s+\((\d+) bytes[^)]*\)\s+\[([^\]]*)\]/);
    if (m) fns.push({ addr: parseInt(m[1], 16), name: m[2], size: +m[3], tag: m[4], file: f, text: p });
  }
}
const codeName = (f) => { const m = f.text.match(/^\/\/   written in code as (\S+)/m); return m ? m[1] : f.name; };
const callers = new Map();
const KW = new Set(["if", "while", "for", "switch", "return", "sizeof"]);
for (const f of fns) {
  for (const m of f.text.matchAll(/([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_~][A-Za-z0-9_]*)*)\(/g)) {
    if (KW.has(m[1])) continue;
    if (!callers.has(m[1])) callers.set(m[1], new Set());
    callers.get(m[1]).add(f.name);
  }
}
let sel = [];
for (const w of wanted) {
  if (/\.cpp$/.test(w)) sel.push(...fns.filter((f) => f.file === w));
  else sel.push(...fns.filter((f) => f.addr === parseInt(w, 16)));
}
if (onlyUnnamed) sel = sel.filter((f) => f.tag.startsWith("unnamed"));
const NOISE = /^(std::string::|operator_delete|operator_new|__InitExcept|memcpy|strlen|_ThrowException|__rwstd::except|CONCAT|SUB|ZEXT|GH_)/;
for (const f of sel) {
  const body = f.text;
  const sig = (body.match(/^[^/\n{][^\n]*\([^\n]*\)\s*$/m) || [""])[0].replace(/\s+/g, " ").trim();
  const calls = new Map();
  for (const m of body.matchAll(/([A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_~][A-Za-z0-9_]*)*)\(/g)) {
    const c = m[1];
    if (KW.has(c) || c === f.name || NOISE.test(c) || /^(FUN_[0-9a-f]+|thunk_FUN)/.test(c) && false) continue;
    calls.set(c, (calls.get(c) || 0) + 1);
  }
  const strs = [...new Set([...body.matchAll(/"((?:[^"\\\n]|\\.){2,60})"/g)].map((m) => m[1]))].slice(0, 6);
  const fields = [...new Set([...body.matchAll(/\((?:self|param_1) \+ (0x[0-9a-f]+)\)/g)].map((m) => m[1]))].slice(0, 12);
  const by = [...(callers.get(codeName(f)) || [])].filter((n) => n !== f.name).slice(0, 4);
  console.log(`${"0x" + f.addr.toString(16)} ${f.size}B ${f.name}${f.tag.startsWith("unnamed") ? "" : "  [" + f.tag.slice(0, 30) + "]"}`);
  console.log(`   ${sig.slice(0, 200)}`);
  if (calls.size) console.log(`   calls: ${[...calls.entries()].map(([c, n]) => (n > 1 ? `${c}x${n}` : c)).join(", ").slice(0, 330)}`);
  if (strs.length) console.log(`   strings: ${strs.map((s) => JSON.stringify(s)).join(" ").slice(0, 300)}`);
  if (fields.length) console.log(`   this+: ${fields.join(" ")}`);
  if (by.length) console.log(`   called by: ${by.join(", ")}`);
}

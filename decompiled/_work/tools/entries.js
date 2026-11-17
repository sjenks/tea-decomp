// Emit code-entry candidates proven by static tables (RTTI destructors, vtable slots, response-table
// handlers and dispatchers) so the Ghidra project can define functions the default analysis missed.
// Usage: node entries.js <exe> <out.txt>
const fs = require("fs");
const { extract } = require("./borland-rtti");
const [exe, out] = process.argv.slice(2);
const r = extract(exe);
const set = new Map();
const add = (a, why) => { if (a && !set.has(a)) set.set(a, why); };
for (const c of r.classes) {
  add(c.dtor, "rtti-dtor");
  for (const v of c.vtables) for (const s of v.slots) add(s, "vtable-slot");
}
for (const t of r.responseTables) for (const e of t.entries) { add(e.handler, "response-handler"); add(e.dispatcher, "response-dispatcher"); }
const lines = [...set.entries()].sort((a, b) => a[0] - b[0]).map(([a, why]) => a.toString(16) + "\t" + why);
fs.writeFileSync(out, lines.join("\n") + "\n");
const by = {};
for (const w of set.values()) by[w] = (by[w] || 0) + 1;
console.log(`${exe.split(/[\\/]/).pop()}: ${set.size} entry candidates ${JSON.stringify(by)}`);

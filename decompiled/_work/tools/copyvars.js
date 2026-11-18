// Suggest hand variable names for a function from its counterpart in another program: every hand name
// whose Ghidra token is declared in the target with the same type. Prints `v` lines for addnames.js,
// plus the tokens that did not carry over, so the result can be checked before it is merged.
// Usage: node copyvars.js <FromProgram> <fromAddr> <ToProgram> <toAddr> [more pairs: fromAddr toAddr ...]
const fs = require("fs");
const path = require("path");
const { parse } = require("./varnames");
const D = path.join(__dirname, "..", "..");
const [from, ...rest] = process.argv.slice(2);
const decls = (prog, addr) => {
  const f = path.join(D, "raw", prog, "functions", "0x" + parseInt(addr, 16).toString(16) + ".c");
  const t = fs.readFileSync(f, "utf8").replace(/\r/g, "");
  const i = t.indexOf("// pseudocode:");
  const P = parse(t.slice(i < 0 ? 0 : t.indexOf("\n", i) + 1).replace(/^\s*\n+/, ""));
  return new Map([...P.params, ...P.locals].filter((v) => v.name).map((v) => [v.name, v.type]));
};
const vars = JSON.parse(fs.readFileSync(path.join(__dirname, "..", "manual", from + ".vars.json"), "utf8"));
let to = null;
const pairs = [];
for (let i = 0; i < rest.length; i++) {
  if (!/^0x/.test(rest[i])) { to = rest[i]; continue; }
  pairs.push([rest[i], rest[i + 1]]); i++;
}
for (const [fa, ta] of pairs) {
  const key = "0x" + parseInt(fa, 16).toString(16).padStart(8, "0");
  const hand = vars[key] || {};
  const ds = decls(from, fa), dt = decls(to, ta);
  const ok = [], miss = [];
  for (const [tok, name] of Object.entries(hand)) {
    if (dt.has(tok) && dt.get(tok) === ds.get(tok)) ok.push(`${tok}=${name}`);
    else miss.push(tok);
  }
  console.log(`v ${ta} ${ok.join(" ")}`);
  if (miss.length) console.log(`# ${ta}: not carried (absent or different type): ${miss.join(" ")}`);
}

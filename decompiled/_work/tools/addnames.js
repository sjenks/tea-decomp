// Merge hand-assigned names written in a compact text form into the manual name files.
// Usage: node addnames.js <Program> [file]      (reads stdin when no file is given)
//
//   fn   0x407ae0 Name::Of::Function [cls=Class::Name] [module=x] [src=analysis] -- note
//   v    0x407ae0 param_1=result param_2=path local_c=pathData      (variables of that function)
//   data 0x42fab4 g_nullStringRep -- note                            (a global)
//   field Class 0x1144 name type -- note                             (a member at an offset)
//   # comment
// fn/data go to manual/<Program>.json (replacing an entry with the same address), v to
// manual/<Program>.vars.json, field to manual/<Program>.fields.json.
const fs = require("fs");
const path = require("path");
const [prog, file] = process.argv.slice(2);
const M = path.join(__dirname, "..", "manual");
const text = fs.readFileSync(file || 0, "utf8").replace(/\r/g, "");
const load = (f, d) => (fs.existsSync(f) ? JSON.parse(fs.readFileSync(f, "utf8")) : d);
const namesFile = path.join(M, prog + ".json"), varsFile = path.join(M, prog + ".vars.json"), fieldsFile = path.join(M, prog + ".fields.json");
const names = load(namesFile, []), vars = load(varsFile, {}), fields = load(fieldsFile, {});
const hx = (a) => "0x" + parseInt(a, 16).toString(16).padStart(8, "0");
const byAddr = new Map(names.map((e, i) => [e.addr ? parseInt(e.addr, 16) : -1 - i, i]));
let nf = 0, nv = 0, nd = 0, nfl = 0;
for (const raw of text.split("\n")) {
  const line = raw.trim();
  if (!line || line.startsWith("#")) continue;
  const [head, note] = line.split(/\s+--\s+/, 2);
  const w = head.split(/\s+/);
  if (w[0] === "fn" || w[0] === "data") {
    const a = parseInt(w[1], 16);
    const e = { addr: "0x" + a.toString(16), name: w[2] };
    for (const kv of w.slice(3)) { const [k, v] = kv.split("="); if (k === "cls") e.cls = v; else if (k === "module") e.module = v; else if (k === "src") e.source = v.replace(/_/g, " "); else if (k === "kind") e.kind = v; }
    if (w[0] === "data") e.data = true;
    e.source = e.source || "analysis";
    if (note) e.note = note;
    if (byAddr.has(a)) {
      const old = names[byAddr.get(a)];
      // keep a better-attested source tag (notes...) unless one is given
      if (!w.slice(3).some((x) => x.startsWith("src=")) && old.source && /^notes/.test(old.source)) e.source = old.source;
      if (!note && old.note) e.note = old.note;
      if (!e.cls && old.cls && w[0] === "fn") e.cls = old.cls;
      if (!e.module && old.module) e.module = old.module;
      names[byAddr.get(a)] = e;
    } else { byAddr.set(a, names.length); names.push(e); }
    w[0] === "fn" ? nf++ : nd++;
  } else if (w[0] === "v") {
    const k = hx(w[1]);
    const m = vars[k] || {};
    for (const kv of w.slice(2)) { const i = kv.indexOf("="); if (i < 0) throw new Error("bad v entry: " + kv); m[kv.slice(0, i)] = kv.slice(i + 1); nv++; }
    vars[k] = m;
  } else if (w[0] === "slot") {
    // slot Class N Name -- note : names vtable slot N of Class and every override of it in derived classes
    const [, cls, n, name] = w;
    const e = { slotClass: cls, slot: +n, name, source: "analysis" };
    if (note) e.note = note;
    const i = names.findIndex((x) => x.slotClass === cls && x.slot === +n);
    if (i >= 0) names[i] = e; else names.push(e);
    nf++;
  } else if (w[0] === "field") {
    const [, cls, off, name, ...type] = w;
    (fields[cls] ||= {})[hx(off).replace(/^0x0+(?=[0-9a-f])/, "0x")] = { name, type: type.join(" ") || "int", ...(note ? { note } : {}) };
    nfl++;
  } else throw new Error("unknown line: " + line);
}
const sortedVars = Object.fromEntries(Object.entries(vars).sort((a, b) => parseInt(a[0], 16) - parseInt(b[0], 16)));
fs.writeFileSync(namesFile, JSON.stringify(names, null, 1) + "\n");
fs.writeFileSync(varsFile, JSON.stringify(sortedVars, null, 1) + "\n");
if (nfl || fs.existsSync(fieldsFile)) fs.writeFileSync(fieldsFile, JSON.stringify(fields, null, 1) + "\n");
console.log(`${prog}: ${nf} functions, ${nd} globals, ${nv} variables, ${nfl} fields merged`);

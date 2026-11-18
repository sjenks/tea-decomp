// Print functions from the generated tree for reading, with decompiler boilerplate folded away:
// dead stores (unused*), exception-frame bookkeeping, and Borland std::string release sequences.
// Usage: node readfn.js <Program> <addr|name|file.cpp> [more...] [--full] [--max N]
//   a file name prints every function in that src/ or lib/ file
const fs = require("fs");
const path = require("path");
const D = path.join(__dirname, "..", "..");
const args = process.argv.slice(2);
const full = args.includes("--full");
let max = 400;
{ const i = args.indexOf("--max"); if (i >= 0) { max = +args[i + 1]; args.splice(i, 2); } }
const [prog, ...wanted] = args.filter((a) => a !== "--full");
const files = [];
for (const sub of ["src", "lib"]) for (const f of fs.readdirSync(path.join(D, prog, sub))) files.push(path.join(D, prog, sub, f));
const fns = [];
for (const file of files) {
  const t = fs.readFileSync(file, "utf8").replace(/\r/g, "");
  const parts = t.split(/^\/\/ -{100}\n/m).slice(1);
  for (const p of parts) {
    const m = p.match(/^\/\/ (0x[0-9a-f]{8})  (\S+)/);
    if (m) fns.push({ addr: parseInt(m[1], 16), name: m[2], file: path.basename(file), text: p.replace(/\n\} \/\/ namespace tea\n?$/, "").trimEnd() });
  }
}
const fold = (text) => {
  const L = text.split("\n");
  const out = [];
  for (let i = 0; i < L.length; i++) {
    const l = L[i], t = l.trim();
    if (/^unused\d* = .*;$/.test(t)) continue;
    if (/^  (undefined\d?|int|uint|char|byte|short|ushort|undefined\d? \*|int \*|uint \*|char \*|byte \*|undefined \*\*?|undefined\d \*\*?) \*?unused\d*( \[\d+\])?;$/.test(l)) continue;
    if (/^(ehContext|ehDtorCount)\d* = /.test(t) || /^__InitExceptBlock/.test(t) || /^\*sehChainHead = sehPrevFrame\d*;$/.test(t)) continue;
    if (/^  \S.* \*?(sehChainHead|sehPrevFrame|ehContext|ehDtorCount)\d*;$/.test(l)) continue;
    // string release: if (S != 0) { if (... != -1) { rep = ...; if (rep == &null) {...} ... } ... operator_delete(); ... }  -> /* release S */
    const rel = t.match(/^if \(\*\(int \*\)\(([A-Za-z_]\w*) \+ -0xc\) != -1\) \{$|^if \(([A-Za-z_]\w*)\[-3\] != -1\) \{$/);
    if (rel) {
      const ind = l.match(/^ */)[0];
      let j = i + 1, depth = 1;
      for (; j < L.length && depth > 0; j++) { depth += (L[j].match(/\{/g) || []).length - (L[j].match(/\}/g) || []).length; }
      // swallow the operator_delete and following dead stores
      let k = j;
      while (k < L.length && (/^\s*(operator_delete\(\);|unused\d* = .*;|[A-Za-z_]\w* = \((?:undefined1|int|char) \*\)0x0;|[A-Za-z_]\w* = 0;)$/.test(L[k]))) k++;
      out.push(`${ind}/* release string ${rel[1] || rel[2]} */`);
      i = k - 1;
      continue;
    }
    out.push(l);
  }
  // drop empty if-blocks left behind: if (S != 0) { /* release */ }
  return out.join("\n").replace(/\n( *)if \(([A-Za-z_]\w*) != (?:\([a-z0-9 ]+\*\))?0(?:x0)?\) \{\n *(\/\* release string \2 \*\/)\n *\}/g, "\n$1$3");
};
// show Ghidra's own variable names next to renamed declarations (hand maps are keyed by them)
const orig = new Map(); // addr -> Map(newName -> ghidraName)
{
  const tsv = path.join(D, prog, "varnames.tsv");
  if (fs.existsSync(tsv)) for (const row of fs.readFileSync(tsv, "utf8").split("\n").slice(1)) {
    const c = row.split("\t");
    if (c.length < 4) continue;
    const a = parseInt(c[0], 16);
    if (!orig.has(a)) orig.set(a, new Map());
    orig.get(a).set(c[3], c[2]);
  }
}
const annotate = (f, text) => {
  const m = orig.get(f.addr);
  if (!m) return text;
  const L = text.split("\n");
  const bi = L.indexOf("{");
  for (let i = 0; i < L.length; i++) {
    if (i === bi - 2 || (i > bi && /^  \S.*;$/.test(L[i]) && !/[=(]/.test(L[i]))) {
      L[i] = L[i].replace(/[A-Za-z_][A-Za-z0-9_]*/g, (t) => (m.has(t) && m.get(t) !== t ? `${t}/*${m.get(t)}*/` : t));
    }
    if (i > bi && /^  \S.*;$/.test(L[i]) === false && i > bi + 1 && !/^  \S/.test(L[i])) break;
  }
  return L.join("\n");
};
for (const w of wanted) {
  let sel;
  if (/\.cpp$/.test(w)) sel = fns.filter((f) => f.file === w).sort((a, b) => a.addr - b.addr);
  else if (/^0x[0-9a-f]+$/i.test(w)) sel = fns.filter((f) => f.addr === parseInt(w, 16));
  else sel = fns.filter((f) => f.name === w || f.name.endsWith("::" + w));
  if (!sel.length) { console.log(`?? ${w}`); continue; }
  for (const f of sel) {
    const t = annotate(f, full ? f.text : fold(f.text));
    const lines = t.split("\n");
    console.log(lines.slice(0, max).map((l) => (l.length > 220 ? l.slice(0, 220) + "…" : l)).join("\n") + (lines.length > max ? `\n  … ${lines.length - max} more lines` : "") + "\n");
  }
}

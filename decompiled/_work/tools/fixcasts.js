// Repair the places where Ghidra's pseudocode is valid in Ghidra's own loose type model but not in C++.
//
// Driven by the compiler: each error below arrives with the exact source range of the offending
// expression, and is repaired in a fixed, mechanical way. Nothing else in the text is changed.
//
//   cannot convert 'A' to 'B'                 -> (B)expr          Ghidra treats `undefined` pointers as wildcards
//   ... cannot be used as a function          -> ((code *)p)(...) a call through a pointer Ghidra typed as data
//   assignment of read-only location          -> GH_WRITABLE(lv)  a write through a pointer the SDK declares const
//   incompatible types in assignment to array -> GH_SET(dst, v)   a value assigned to an array-typed local
//   casting to an array type                  -> cast removed     (then handled as the line above)
//
// Repeats until none of these is left. Usage: node fixcasts.js <programDir> [--only src|lib] [--rounds N]
const fs = require("fs");
const path = require("path");
const { compileFiles, listFiles, kindOf } = require("./compile");

const argv = process.argv.slice(2);
const dir = path.resolve(argv[0]);
const opt = (k, d) => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : d; };
const maxRounds = +opt("--rounds", 10);

const CONVERT = /cannot convert '(.+?)'(?: \{+aka '.+?'\}+)? to '(.+?)'(?: \{+aka '.+?'\}+)?(?: in | for |$)/;
const simple = (e) => /^&?[A-Za-z_][A-Za-z0-9_:]*$/.test(e) || /^"(?:[^"\\]|\\.)*"$/.test(e);

// index of the bracket matching the one at `open` (handles string and char literals)
function matchClose(s, open) {
  let depth = 0;
  for (let i = open; i < s.length; i++) {
    const ch = s[i];
    if (ch === '"' || ch === "'") { for (i++; i < s.length && s[i] !== ch; i++) if (s[i] === "\\") i++; continue; }
    if (ch === "(" || ch === "[" || ch === "{") depth++;
    else if (ch === ")" || ch === "]" || ch === "}") { depth--; if (depth === 0) return i; }
  }
  return -1;
}
// index of the bracket that opens the group closed at `close`
function matchOpen(s, close) {
  let depth = 0;
  for (let i = close; i >= 0; i--) {
    const ch = s[i];
    if (ch === ")" || ch === "]") depth++;
    else if (ch === "(" || ch === "[") { depth--; if (depth === 0) return i; }
  }
  return -1;
}
// position of the first assignment operator at bracket depth 0, or null
function findAssign(s) {
  let depth = 0;
  for (let i = 0; i < s.length; i++) {
    const ch = s[i];
    if (ch === '"' || ch === "'") { for (i++; i < s.length && s[i] !== ch; i++) if (s[i] === "\\") i++; continue; }
    if (ch === "(" || ch === "[") depth++;
    else if (ch === ")" || ch === "]") depth--;
    else if (ch === "=" && depth === 0 && s[i + 1] !== "=" && !"=!<>".includes(s[i - 1] || " ")) {
      let start = i;
      if ("+-*/|&^%".includes(s[i - 1])) start = i - 1;
      else if ((s[i - 1] === "<" || s[i - 1] === ">") && s[i - 2] === s[i - 1]) start = i - 2;
      return { start, end: i + 1 };
    }
  }
  return null;
}

// Each repair returns {a, b, text} (replace [a,b) with text) or null.
function repair(text, a, b, msg, res) {
  let m = msg.match(CONVERT);
  if (m) {
    if (/unresolved overloaded|<brace-enclosed/.test(m[1])) return null;
    const type = m[2].replace(/\btea::/g, "");
    // "initializing argument N of '<signature>'": when the argument has no location of its own (a bare
    // function name), GCC points at the whole call instead, and the argument has to be found inside it
    const note = (res.relatedLocations || []).map((x) => (x.message && x.message.text) || "").find((t) => /initializing argument \d+ of/.test(t));
    const whole = text.slice(a, b);
    if (note) {
      const argN = +note.match(/initializing argument (\d+) of/)[1];
      const callee = (note.slice(note.indexOf(" of ")).match(/([A-Za-z_][A-Za-z0-9_]*)\(/) || [])[1];
      if (callee && new RegExp("^(?:[A-Za-z_][A-Za-z0-9_]*::)*" + callee + "\\s*\\(").test(whole) && whole.endsWith(")")) {
        const open = whole.indexOf("(");
        let depth = 0, start = open + 1, n = 1, found = null;
        for (let i = open; i < whole.length; i++) {
          const ch = whole[i];
          if (ch === '"' || ch === "'") { for (i++; i < whole.length && whole[i] !== ch; i++) if (whole[i] === "\\") i++; continue; }
          if (ch === "(" || ch === "[") depth++;
          else if (ch === ")" || ch === "]") { depth--; if (depth === 0) { if (n === argN) found = [start, i]; break; } }
          else if (ch === "," && depth === 1) { if (n === argN) { found = [start, i]; break; } n++; start = i + 1; }
        }
        if (!found) return null;
        while (/\s/.test(whole[found[0]])) found[0]++;
        b = a + found[1]; a = a + found[0];
      }
    }
    const expr = text.slice(a, b);
    if (expr.startsWith(`(${type})`)) return null;
    return { a, b, text: simple(expr) ? `(${type})${expr}` : `(${type})(${expr})` };
  }
  if (/cannot be used as a function|void value not ignored as it ought to be/.test(msg)) {
    // a call through something not typed as a function, or a call whose declared result is void but
    // whose value the pseudocode uses: make the callee a generic function pointer
    const whole = text.slice(a, b);
    if (!whole.endsWith(")")) return null;
    const open = matchOpen(whole, whole.length - 1);
    if (open <= 0) return null;
    const callee = whole.slice(0, open).trim(), args = whole.slice(open);
    if (callee.startsWith("((code *)")) return null;
    const inner = callee.match(/^\(\*([\s\S]+)\)$/);
    return { a, b, text: (inner && matchClose(callee, 0) === callee.length - 1 ? `((code *)${inner[1]})` : `((code *)(${callee}))`) + args };
  }
  if (/invalid type argument of unary '\*'/.test(msg)) {
    // (*x)(args) where x holds a function address in an integer-typed variable
    const expr = text.slice(a, b);
    if (expr.startsWith("*") && text[a - 1] === "(" && text.slice(b, b + 2) === ")(") return { a: a - 1, b: b + 1, text: `((code *)${expr.slice(1)})` };
    return null;
  }
  if (/(assignment|increment|decrement) of read-only (location|variable|member|parameter)/.test(msg)) {
    const whole = text.slice(a, b);
    const op = findAssign(whole);
    if (!op) return null;
    const lhs = whole.slice(0, op.start).trim();
    if (lhs.startsWith("GH_WRITABLE(")) return null;
    return { a, b: a + op.start, text: `GH_WRITABLE(${lhs}) ` };
  }
  if (/incompatible types in assignment of .* to '.*\[\d*\]'|invalid array assignment/.test(msg)) {
    // the statement starts at `a`; find its terminating semicolon
    let end = a, depth = 0;
    for (; end < text.length; end++) {
      const ch = text[end];
      if (ch === '"' || ch === "'") { for (end++; end < text.length && text[end] !== ch; end++) if (text[end] === "\\") end++; continue; }
      if (ch === "(" || ch === "[") depth++; else if (ch === ")" || ch === "]") depth--;
      else if (ch === ";" && depth === 0) break;
    }
    const stmt = text.slice(a, end);
    const op = findAssign(stmt);
    if (!op || stmt.slice(op.start, op.end) !== "=") return null;
    return { a, b: end, text: `GH_SET(${stmt.slice(0, op.start).trim()}, ${stmt.slice(op.end).trim()})` };
  }
  if (/forbids casting to an array type/.test(msg)) {
    const m2 = text.slice(a, a + 80).match(/^\(\s*[A-Za-z_][\w ]*?\s*(?:\[\d+\]\s*)+\)/);
    return m2 ? { a, b: a + m2[0].length, text: "" } : null;
  }
  return null;
}

function parseSarif(err) {
  const start = err.indexOf("{");
  if (start < 0) return null;
  try { return JSON.parse(err.slice(start)); } catch { return null; }
}

(async () => {
  let files = listFiles(dir, opt("--only", null));
  const repaired = new Map(); // file -> count
  const kindsDone = {};
  let leftover = [];
  for (let round = 1; round <= maxRounds && files.length; round++) {
    const results = await compileFiles(dir, files, { sarif: true });
    const next = [];
    leftover = leftover.filter((e) => !files.includes(e.file));
    let editsThisRound = 0;
    for (const r of results) {
      const sarif = parseSarif(r.err);
      if (!sarif) { if (r.code !== 0) leftover.push({ file: r.file, msg: "unparsed compiler output: " + r.err.slice(0, 200) }); continue; }
      const errors = (sarif.runs[0].results || []).filter((x) => x.level === "error");
      if (!errors.length) continue;
      const full = path.join(dir, r.file);
      const lines = fs.readFileSync(full, "utf8").split("\n");
      const offs = [0];
      for (const l of lines) offs.push(offs[offs.length - 1] + l.length + 1);
      let text = lines.join("\n");
      // GCC columns count bytes; the files are ASCII in code but comments may hold UTF-8
      const toOff = (line, col) => offs[line - 1] + Buffer.from(lines[line - 1], "utf8").subarray(0, col - 1).toString("utf8").length;
      const edits = [];
      for (const res of errors) {
        const loc = res.locations && res.locations[0] && res.locations[0].physicalLocation;
        const msg = res.message.text;
        const here = loc && loc.artifactLocation && loc.artifactLocation.uri.replace(/\\/g, "/").endsWith(r.file);
        let e = null;
        if (here) { const g = loc.region; e = repair(text, toOff(g.startLine, g.startColumn), toOff(g.endLine || g.startLine, g.endColumn || g.startColumn + 1), msg, res); }
        if (e) { e.kind = kindOf(msg); edits.push(e); }
        else leftover.push({ file: r.file, where: loc ? `${path.basename(loc.artifactLocation.uri)}:${loc.region.startLine}` : "", msg });
      }
      edits.sort((x, y) => y.a - x.a);
      let lastStart = Infinity, applied = 0;
      for (const e of edits) {
        if (e.b > lastStart) continue; // overlaps an edit already made: picked up next round
        text = text.slice(0, e.a) + e.text + text.slice(e.b);
        lastStart = e.a;
        applied++;
        kindsDone[e.kind] = (kindsDone[e.kind] || 0) + 1;
      }
      if (applied) { fs.writeFileSync(full, text); repaired.set(r.file, (repaired.get(r.file) || 0) + applied); editsThisRound += applied; next.push(r.file); }
    }
    console.log(`  round ${round}: ${files.length} files compiled, ${editsThisRound} repairs`);
    files = next;
  }
  const total = [...repaired.values()].reduce((a, b) => a + b, 0);
  const kinds = new Map();
  for (const e of leftover) { const k = kindOf(e.msg); if (!kinds.has(k)) kinds.set(k, { n: 0, ex: e }); kinds.get(k).n++; }
  const file = path.join(dir, "repairs.json");
  const prev = fs.existsSync(file) && opt("--only", null) ? JSON.parse(fs.readFileSync(file, "utf8")) : { files: {}, kinds: {} };
  for (const [f, n] of repaired) prev.files[f] = n;
  for (const [k, n] of Object.entries(kindsDone)) prev.kinds[k] = (prev.kinds[k] || 0) + n;
  prev.total = Object.values(prev.files).reduce((a, b) => a + b, 0);
  fs.writeFileSync(file, JSON.stringify(prev, null, 1));
  console.log(`${path.basename(dir)}: ${total} repairs in ${repaired.size} files; ${leftover.length} other errors remain`);
  for (const [k, v] of [...kinds.entries()].sort((a, b) => b[1].n - a[1].n).slice(0, +opt("--show", 15))) console.log(`  ${String(v.n).padStart(5)}  ${k}\n         e.g. ${v.ex.file} ${v.ex.where || ""}: ${v.ex.msg.slice(0, 230)}`);
})();

// Differential test: run the original TEACON.exe and the rebuilt teacon on the same switches and
// patterns, and require identical standard output, error output and exit code.
//
// Usage:
//   node difftest.js [--seed N] [--rounds N] [--per N] [--dict name,...|all] [--only interface|curated|fuzz]
//                    [--gen random|words|both] [--keep] [--show N] [--timeout seconds]
// Three parts, all run unless --only names one: interface (switches, input handling, failures),
// curated (tests/curated.txt plus generated limit cases) and fuzz (generated patterns).
// --gen words builds patterns from real dictionary entries so that most of them match something;
// --gen random builds them from the pattern grammar alone; both (the default) alternates by round.
// The original needs its licence to be present on this machine; without it every run differs.
const fs = require("fs");
const path = require("path");
const os = require("os");
const { spawnSync } = require("child_process");

const ROOT = path.resolve(__dirname, "..", "..");
const ORIG = path.join(ROOT, "TEA Crossword Helper 2.11", "TEACON.exe");
const NEW = path.join(ROOT, "teacon-rebuild", "bin", "teacon.exe");
const DICTS = path.join(ROOT, "TEA Crossword Helper 2.11", "Dictionaries");

const argv = process.argv.slice(2);
const opt = (k, d) => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : d; };
const flag = (k) => argv.includes(k);

// ---------- deterministic random numbers ----------
let seed = +opt("--seed", 1) >>> 0;
const rnd = () => { seed = (seed + 0x6d2b79f5) >>> 0; let t = seed; t = Math.imul(t ^ (t >>> 15), t | 1); t ^= t + Math.imul(t ^ (t >>> 7), t | 61); return ((t ^ (t >>> 14)) >>> 0) / 4294967296; };
const int = (n) => Math.floor(rnd() * n);
const pick = (a) => a[int(a.length)];
const chance = (p) => rnd() < p;

// ---------- pattern generator ----------
const COMMON = "eeeeaaaiiooutttnnnsssrrrlldcmphgbfywkvxzjq";
const letter = () => (chance(0.08) ? pick("ABCDEMRST") : pick(COMMON));
const PUNCT = [" ", " ", "-", "-", "'", ".", "!", "/", ","];
function choice() {
  let s = "[" + (chance(0.25) ? "^" : "");
  const n = 1 + int(5);
  for (let i = 0; i < n; i++) s += chance(0.04) ? "\\" + letter() : letter();
  return s + "]";
}
function templateItem(depth) {
  const r = rnd();
  if (r < 0.34) return letter();
  if (r < 0.58) return chance(0.8) ? "." : "?";
  if (r < 0.68) return "*";
  if (r < 0.75) return choice();
  if (r < 0.83) return String(int(chance(0.7) ? 3 : 10));
  if (r < 0.88) return pick(PUNCT);
  if (r < 0.91) return "\\" + (chance(0.5) ? letter() : pick(["!", "*", ".", "(", ")", "[", ";", "&", "|", "\\", " ", "-", "1"]));
  if (r < 0.94) return pick(["@", "#"]);
  if (depth < 2) return "(" + leaf(depth + 1) + ")";
  return letter();
}
function anagramItem(depth) {
  const r = rnd();
  if (r < 0.6) return letter();
  if (r < 0.74) return ".";
  if (r < 0.79) return "*";
  if (r < 0.85) return choice();
  if (r < 0.91) return String(int(3));
  if (r < 0.93) return pick(["@", "#", " "]);
  if (r < 0.95) return "\\" + letter();
  if (depth < 2) return "(" + leaf(depth + 1) + ")";
  return letter();
}
function leaf(depth = 0) {
  let s = "";
  const kind = rnd();
  if (kind < 0.62 || depth > 0 && kind < 0.75) {
    const n = 1 + int(depth ? 4 : 8);
    for (let i = 0; i < n; i++) s += templateItem(depth);
  }
  if (kind >= 0.5) {
    s += ";";
    const n = 1 + int(depth ? 4 : 8);
    for (let i = 0; i < n; i++) s += anagramItem(depth);
  }
  return s;
}
function query() {
  if (chance(0.03)) return junk();
  let q = "";
  const terms = chance(0.72) ? 1 : 2 + int(3);
  let open = 0;
  for (let i = 0; i < terms; i++) {
    if (i) q += pick([" & ", " | ", "&", "|", " &", "| "]);
    if (chance(0.2)) q += chance(0.5) ? "!" : "! ";
    if (terms > 1 && chance(0.25)) { q += chance(0.2) ? "!(" : "("; open++; }
    q += leaf();
    if (open && chance(0.5)) { q += ")"; open--; }
  }
  while (open-- > 0) if (chance(0.9)) q += ")";
  return q;
}
function junk() {
  const chars = "abcdefghijklmnopqrstuvwxyzAEST.?*[]^();&|!\\@#0123456789 -'";
  let s = "";
  const n = int(12);
  for (let i = 0; i < n; i++) s += pick(chars);
  return s;
}

// ---------- patterns derived from real dictionary words (so that most of them match something) ----------
const isLetter = (c) => /[A-Za-zÀ-ÖØ-öø-ÿ]/.test(c);
const SPECIAL = ".?*[]^();&|!\\@#0123456789";
const lit = (c) => (SPECIAL.includes(c) ? "\\" + c : c);
function shuffle(a) { a = [...a]; for (let i = a.length - 1; i > 0; i--) { const j = int(i + 1); [a[i], a[j]] = [a[j], a[i]]; } return a; }
function someLetters(n, not = "") { let s = ""; while (s.length < n) { const c = pick(COMMON); if (!not.includes(c)) s += c; } return s; }
function makeVars() { const map = {}; let next = int(3); return (c) => { if (!(c in map)) map[c] = Object.keys(map).length < 6 ? String(next++ % 10) : "."; return map[c]; }; }

function wordTemplate(w, vars = makeVars()) {
  const chars = [...w];
  let from = -1, to = -1;
  if (chance(0.35)) { from = int(chars.length + 1); to = from + int(chars.length - from + 1); }
  let out = "";
  for (let i = 0; i <= chars.length; i++) {
    if (i === from) out += "*";
    if (i === chars.length || (i >= from && i < to)) continue;
    const c = chars[i], lc = c.toLowerCase();
    if (!isLetter(c)) { if (chance(0.75)) out += lit(c); continue; }
    const r = rnd();
    if (r < 0.42) out += chance(0.93) ? lc : c;
    else if (r < 0.64) out += chance(0.85) ? "." : "?";
    else if (r < 0.75) out += vars(lc);
    else if (r < 0.82) out += "[" + shuffle(lc + someLetters(1 + int(3))).join("") + "]";
    else if (r < 0.87) out += "[^" + someLetters(1 + int(4), chance(0.85) ? lc : "") + "]";
    else if (r < 0.92) out += "aeiou".includes(lc) ? "@" : "#";
    else if (r < 0.95) out += "\\" + c;
    else if (r < 0.97) out += "*";
    else out += pick(COMMON);
  }
  return out;
}
function wordAnagram(w, vars = makeVars(), nested = true) {
  const letters = shuffle([...w].filter(isLetter).map((c) => c.toLowerCase()));
  const items = [];
  let dropped = 0;
  for (const c of letters) {
    const r = rnd();
    if (r < 0.66) items.push(c);
    else if (r < 0.78) items.push(".");
    else if (r < 0.84) items.push("[" + shuffle(c + someLetters(1 + int(2))).join("") + "]");
    else if (r < 0.87) items.push("[^" + someLetters(1 + int(3), c) + "]");
    else if (r < 0.91) dropped++;
    else if (r < 0.95) items.push(vars(c));
    else if (r < 0.97) items.push("aeiou".includes(c) ? "@" : "#");
    else items.push(c, pick(COMMON));
  }
  if (dropped ? chance(0.75) : chance(0.08)) items.push("*");
  if (chance(0.05)) items.push(pick(COMMON));
  let out = shuffle(items).join("");
  if (nested && chance(0.12)) out += "(" + pick(COMMON) + (chance(0.5) ? pick(COMMON) : "") + ")";
  return out;
}
function splitWord(w) { const k = 1 + int(Math.max(1, w.length - 1)); return [w.slice(0, k), w.slice(k)]; }
function wordLeaf(w) {
  const vars = makeVars();
  const r = rnd();
  if (r < 0.3) return wordTemplate(w, vars);
  if (r < 0.52) return ";" + wordAnagram(w, vars);
  if (r < 0.66) {                      // template with an anagram of (some of) the letters behind the wildcards
    const chars = [...w];
    let t = "", hidden = "";
    for (const c of chars) { if (isLetter(c) && chance(0.6)) { t += "."; hidden += c; } else t += isLetter(c) ? c.toLowerCase() : lit(c); }
    if (chance(0.3)) t += "*";
    const part = shuffle([...hidden]).slice(0, 1 + int(Math.max(1, hidden.length))).join("");
    return t + ";" + (part ? wordAnagram(part, vars, false) : ".") + (chance(0.4) ? "." : "");
  }
  const [a, b] = splitWord(w);
  if (!b) return wordTemplate(w, vars);
  if (r < 0.74) return "(" + wordTemplate(a, vars) + ")(" + wordTemplate(b, vars) + ")";
  if (r < 0.8) return "(;" + wordAnagram(a, vars, false) + ")" + wordTemplate(b, vars);
  if (r < 0.86) return wordTemplate(a, vars) + "(;" + wordAnagram(b, vars, false) + ")";
  if (r < 0.9) return "(;" + wordAnagram(a, vars, false) + ")" + (chance(0.5) ? "*" : "") + "(;" + wordAnagram(b, vars, false) + ")";
  if (r < 0.95) return ";" + wordAnagram(a, vars, false) + "(" + wordTemplate(b, vars) + ")";
  return ";" + wordAnagram(a, vars, false) + "(;" + wordAnagram(b, vars, false) + ")";
}
function wordQuery(words) {
  const w = pick(words);
  const r = rnd();
  if (r < 0.7) return wordLeaf(w);
  const second = chance(0.5) ? wordLeaf(w) : chance(0.5) ? wordLeaf(pick(words)) : leaf();
  const neg = () => (chance(0.25) ? (chance(0.5) ? "!" : "! ") : "");
  const op = pick([" & ", " | ", "&", "|"]);
  if (r < 0.88) return neg() + wordLeaf(w) + op + neg() + second;
  const third = chance(0.5) ? wordLeaf(pick(words)) : leaf();
  const shape = int(4);
  if (shape === 0) return "(" + neg() + wordLeaf(w) + op + neg() + second + ")" + pick([" & ", " | "]) + neg() + third;
  if (shape === 1) return neg() + wordLeaf(w) + op + "(" + neg() + second + pick([" & ", " | "]) + neg() + third + ")";
  if (shape === 2) return "!(" + wordLeaf(w) + op + second + ")" + pick([" & ", " | "]) + third;
  return neg() + wordLeaf(w) + op + neg() + second + pick([" & ", " | "]) + neg() + third;
}

// ---------- runner ----------
const TIMEOUT = +opt("--timeout", 1800) * 1000;
function runRaw(exe, args, input) {
  const r = spawnSync(exe, args, { input: Buffer.from(input, "latin1"), encoding: "buffer", maxBuffer: 1 << 30, windowsVerbatimArguments: false, timeout: TIMEOUT });
  return { code: r.status, out: (r.stdout || Buffer.alloc(0)).toString("latin1"), err: (r.stderr || Buffer.alloc(0)).toString("latin1"), spawnError: r.error ? String(r.error) : null };
}
function run(exe, switches, patterns) {
  // Line feeds only: on a pipe the original takes a carriage return as part of the pattern.
  // Output is compared byte for byte, with no line-ending normalisation.
  return runRaw(exe, switches, patterns.join("\n") + "\n");
}
function firstDifference(a, b, patterns) {
  // Walk both outputs line by line, remembering the last echoed pattern (" " + pattern) seen in the
  // original, so the report can name the pattern whose results first differ.
  const la = a.split("\n"), lb = b.split("\n");
  const echoes = new Set(patterns.map((p) => (p.startsWith(" ") || p.startsWith("\t") ? p : " " + p)));
  let last = null;
  for (let i = 0; i < Math.max(la.length, lb.length); i++) {
    if (la[i] !== lb[i]) return { pattern: last, line: i + 1, original: la[i], rebuild: lb[i] };
    if (echoes.has(la[i])) last = la[i].slice(1);
  }
  return null;
}

const DICT_SETS = {
  core: ["Core English.tsd"],
  edited: ["Edited English.tsd"],
  french: ["French.tsd"],
  german: ["German.tsd"],
  anagrams: ["Anagrams.tsd"],
  two: ["Core English.tsd", "Spanish.tsd"],
  italian: ["Italian.tsd"],
  spanish: ["Spanish.tsd"],
  enable: ["ENABLE.tsd"],
  bible: ["King James Bible.tsd"],
  shakespeare: ["Shakespeare.tsd"],
  compounds: ["Webster's 2nd Compounds.tsd"],
  webster2: ["Webster's 2nd.tsd"],
  banks: ["Letter Banks.tsd"],
  reversibles: ["Reversibles.tsd"],
  flash: ["Flash Dictionary.tsd"],
  devil: ["The Devil's Dictionary.tsd"],
  grose: ["1811 Grose's Dictionary.tsd"],
  romany: ["Word-book of the Romany.tsd"],
  welsh: ["Welsh-English Dictionary.tsd"],
  esperanto: ["English-Esperanto Dictionary.tsd"],
  hacker: ["The New Hacker's Dictionary.tsd"],
  cook: ["The Cook and Housekeeper's Dictionary.tsd"],
  quotations: ["1901 Dictionary of Quotations.tsd"],
  biographical: ["1910 Biographical Dictionary.tsd"],
  nuttall: ["1907 Nuttall Encyclopaedia.tsd"],
  webster1913: ["1913 Webster's Unabridged.tsd"],
  unedited: ["Unedited English.tsd"],
  wikipedia: ["Wikipedia English.tsd"],
  three: ["Edited English.tsd", "French.tsd", "Anagrams.tsd"],
};
const wantedArg = opt("--dict", "core,edited,french");
const wanted = (wantedArg === "all" ? Object.keys(DICT_SETS).join(",") : wantedArg).split(",").filter(Boolean);
for (const d of wanted) if (!DICT_SETS[d]) { console.error(`unknown dictionary set "${d}"; known: ${Object.keys(DICT_SETS).join(", ")}`); process.exit(2); }
const dictArg = (name) => "/D:" + DICT_SETS[name].map((f) => path.join(DICTS, f)).join(";");

// A sample of real entries from a dictionary set, taken from the original's own listing.
const wordCache = {};
function wordsOf(name) {
  if (!wordCache[name]) {
    const r = spawnSync(ORIG, [dictArg(name), "/Q", "/N:0", "/B:0", "/S:2", "/L:14", "*"], { encoding: "buffer", maxBuffer: 1 << 30 });
    const all = r.stdout.toString("latin1").split("\n").filter((w) => w.length >= 2 && w.length <= 18);
    const sample = [];
    const step = Math.max(1, Math.floor(all.length / 4000));
    for (let i = int(step); i < all.length; i += step) sample.push(all[i]);
    wordCache[name] = sample.length ? sample : ["tea"];
  }
  return wordCache[name];
}

function switchSets() {
  const sets = [];
  for (const x of [0, 1]) for (const u of [0, 1]) sets.push([`/X:${x}`, `/U:${u}`, "/B:1", "/N:1", "/O:0"]);
  sets.push(["/X:1", "/U:1", "/B:0", "/N:0", "/O:3"], ["/X:0", "/U:0", "/B:1", "/N:1", "/O:1", "/S:4", "/L:9"], ["/X:0", "/U:1", "/B:1", "/N:1", "/O:4", "/S:7"],
    ["/X:1", "/U:0", "/B:1", "/N:0", "/O:2", "/L:6"], ["/X:0", "/U:1", "/B:1", "/N:1", "/H:[bcd]", "/A:.."], ["/X:0", "/U:1", "/H:", "/A:"]);
  return sets;
}

const CURATED = fs.existsSync(path.join(__dirname, "curated.txt")) ? fs.readFileSync(path.join(__dirname, "curated.txt"), "latin1").split(/\r?\n/).filter((l) => l !== "" && !l.startsWith("##")) : [];

let total = 0, failed = 0, patternsRun = 0;
const failures = [];
// What the original did with the patterns, so a clean run can be seen to have exercised something.
const stats = { withResults: 0, noResults: 0, errors: 0, resultLines: 0, balanceLines: 0 };
function tally(a, patterns) {
  const lines = a.out.split("\n");
  const echoes = patterns.map((p) => (p.startsWith(" ") || p.startsWith("\t") ? p : " " + p));
  let i = 0, withResults = 0;
  for (let p = 0; p < patterns.length; p++) {
    if (lines[i] !== echoes[p]) return;         // echo not where expected (quiet mode or odd pattern)
    i++;
    let n = 0;
    while (i < lines.length && lines[i] !== echoes[p + 1] && !(p + 1 === patterns.length && i === lines.length - 1)) {
      if (/ [-+]/.test(lines[i])) stats.balanceLines++;
      n++; i++;
    }
    stats.resultLines += n;
    if (n) withResults++;
  }
  const errors = a.err.split("\n").filter((l) => l.startsWith("Pattern error:")).length;
  stats.errors += errors;
  stats.withResults += withResults;
  stats.noResults += patterns.length - withResults - errors;
}
function compare(label, switches, patterns) {
  total++;
  patternsRun += patterns.length;
  const a = run(ORIG, switches, patterns), b = run(NEW, switches, patterns);
  if (a.spawnError || b.spawnError) { failed++; failures.push({ label, switches, problem: a.spawnError || b.spawnError }); return false; }
  tally(a, patterns);
  const problems = [];
  if (a.out !== b.out) { const d = firstDifference(a.out, b.out, patterns); problems.push({ what: "stdout", ...d }); }
  if (a.err !== b.err) { const la = a.err.split("\n"), lb = b.err.split("\n"); let i = 0; while (i < la.length && la[i] === lb[i]) i++; problems.push({ what: "stderr", line: i + 1, original: la[i], rebuild: lb[i] }); }
  if (a.code !== b.code) problems.push({ what: "exit code", original: a.code, rebuild: b.code });
  if (problems.length) { failed++; failures.push({ label, switches: switches.filter((s) => !s.startsWith("/D:")), problems }); if (flag("--keep")) { const d = fs.mkdtempSync(path.join(os.tmpdir(), "teadiff-")); fs.writeFileSync(path.join(d, "patterns.txt"), patterns.join("\n")); fs.writeFileSync(path.join(d, "orig.out"), a.out); fs.writeFileSync(path.join(d, "new.out"), b.out); fs.writeFileSync(path.join(d, "orig.err"), a.err); fs.writeFileSync(path.join(d, "new.err"), b.err); failures[failures.length - 1].kept = d; } return false; }
  return true;
}

// Patterns that lean on the engine's size limits; generated rather than typed out.
const rep = (s, n) => s.repeat(n);
const LIMITS = [
  ...[8, 9, 16, 17, 32, 33, 64, 65].map((n) => rep("[ab]", n)),
  ...[8, 16, 17, 32, 33, 64].map((n) => rep("(a)", n)),
  ...[4, 8, 12].map((n) => ";" + rep("[ab]", n)), ...[4, 8, 12].map((n) => ";" + rep("(a)", n)),
  ...[20, 40, 50].map((n) => rep("a-", n)), rep("-", 60), rep(" -", 70), rep("a b ", 30), rep("\\a", 40), rep("'", 130),
  rep("q???k|", 10) + "y??k", rep("q???k|", 40) + "y??k", rep("q???k&", 80) + "y??k", rep("!q???k|", 40) + "y??k",
  rep("(", 30) + "q???k" + rep(")", 30), rep("!", 30) + "q???k", rep("(", 5) + "q*" + rep(")", 4), rep("(", 4) + "q*" + rep(")", 5),
  "((((a))))", "(((((((((((a)))))))))))", ";((a))b", ";(;(;ab))c", "(((..)(..))((..)(..)))", ";(;(;(;(;ab)c)d)e)f",
  "0123456789", "0123456789012", ";012345", "(01)(10)", "(0)(1)(0)(1)", ";(01)(10)", "0*0", "*0*0*", "0;0",
  ...[99, 100, 101, 127, 128, 129, 200].map((n) => rep(".", n)), ...[99, 100, 101, 128].map((n) => ";" + rep(".", n)),
  rep("a", 127), rep("a", 128), rep("a", 129), ";" + rep("a", 128), ";" + rep("a", 129), rep("*a", 9), rep("*", 5) + "q", rep("**", 3),
  rep(".", 60) + rep("*", 2) + rep(".", 60), rep("[^a]", 40) + "*", ";" + rep("[^a]", 20), ";*" + rep(".", 20), ";" + rep("*", 5) + "abc",
];
const ALL_CURATED = [...CURATED, ...LIMITS];

// Runs on raw input and arguments: line endings, end of input, over-long lines, argument mode,
// and failures that must leave standard output empty.
function compareRaw(label, args, input, { stderrToo = true } = {}) {
  total++;
  const a = runRaw(ORIG, args, input), b = runRaw(NEW, args, input);
  const problems = [];
  if (a.spawnError || b.spawnError) problems.push({ what: "spawn", original: a.spawnError, rebuild: b.spawnError });
  if (a.out !== b.out) problems.push({ what: "stdout", original: a.out.slice(0, 200), rebuild: b.out.slice(0, 200) });
  if (stderrToo && a.err !== b.err) problems.push({ what: "stderr", original: a.err.slice(0, 200), rebuild: b.err.slice(0, 200) });
  if (a.code !== b.code) problems.push({ what: "exit code", original: a.code, rebuild: b.code });
  if (problems.length) { failed++; failures.push({ label, problems }); }
}
function interfaceTests() {
  const core = dictArg("core"), longLine = (n) => rep(".", n);
  const bad = "/D:" + path.join(DICTS, "No Such Dictionary.tsd");
  const cases = [
    ["no final newline", [core], "q???k\ny??k"],
    ["empty input", [core], ""],
    ["blank lines", [core], "\n\nq???k\n\n"],
    ["comments", [core], " a comment\n\ttabbed\nq???k\n  \n"],
    ["quiet", [core, "/Q"], " a comment\nq???k\n[abc\ny??k\n"],
    ["quiet, lower-case switch", [core, "/q"], "q???k\n"],
    ["999-character line", [core, "/Q"], "q???k\n" + longLine(999) + "\ny??k\n"],
    ["1000-character line ends the run", [core, "/Q"], "q???k\n" + longLine(1000) + "\ny??k\n"],
    ["3000-character line ends the run", [core], "q???k\n" + longLine(3000) + "\ny??k\n"],
    ["NUL inside a line", [core], "q???k\0junk\ny??k\n"],
    ["control characters", [core], "q\x01?\x7fk\n\x1b[abc\n"],
    ["high bytes", [dictArg("french")], "caf\xe9\n;\xe9t\xe9\n\xc9*\n[\xe0\xe2]*\n"],
    ["patterns as arguments", [core, "q???k", "*zz*", ";acenrt", "abc)", " comment", "y*y"], ""],
    ["arguments win over input", [core, "q???k"], "y??k\n"],
    ["wildcard arguments are patterns", [core, "/S:3", "/L:3", "*", "?a?", "*.*"], ""],
    ["switches after patterns", [core, "q*", "/S:5", "/L:5"], ""],
    ["later switch wins", [core, "/S:9", "/S:5", "/L:5", "q*"], ""],
    ["switch case", [core.replace("/D:", "/d:"), "/s:5", "/l:5", "/n:0", "/b:0", "/x:0", "/u:1", "/o:4", "q*"], ""],
    ["numbers with junk", [core, "/S: 4", "/L:4x", "q*"], ""],
    ["non-numeric number", [core, "/S:abc", "q?"], ""],
    ["negative lengths", [core, "/S:-5", "/L:-2", "q*k"], ""],
    ["shortest above longest", [core, "/S:10", "/L:5", "*"], ""],
    ["lengths beyond the limit", [core, "/S:101", "/L:200", "*"], ""],
    ["output mode wraps", [dictArg("french"), "/O:7", "/S:4", "/L:4", "caf."], ""],
    ["negative output mode", [dictArg("french"), "/O:-3", "/S:4", "/L:4", "caf."], ""],
    ["annotation and balance flags", [dictArg("anagrams"), "/N:2", "/B:7", ";teas."], ""],
    ["annotations off", [dictArg("anagrams"), "/N:0", ";teas."], ""],
    ["macros", [core, "/H:[st]*", "/A:;", "#@abc", "\\#", "\\@a", "[#]", "[@x]"], ""],
    ["macros naming each other", [core, "/H:@@", "/A:x#", "#a", "@"], ""],
    ["empty macros", [core, "/H:", "/A:", "#q@?k", "#", "@#"], ""],
    ["two dictionaries", [dictArg("two"), "q???k", ";aeinrst"], ""],
    ["same dictionary twice", [core + ";" + path.join(DICTS, "Core English.tsd"), "q???k"], ""],
    ["last /D: wins", [bad, core, "q???k"], ""],
    ["missing dictionary", [bad, "q???k"], ""],
    ["not a dictionary", ["/D:" + path.join(ROOT, "TEA Crossword Helper 2.11", "ReadMe.txt"), "q???k"], ""],
    ["a folder as dictionary", ["/D:" + DICTS, "q???k"], ""],
    ["empty dictionary list", ["/D:", "q???k"], ""],
    ["trailing semicolon", [core + ";", "q???k"], ""],
    ["leading semicolon", ["/D:;" + path.join(DICTS, "Core English.tsd"), "q???k"], ""],
    ["bad dictionary reported before patterns", [core + ";" + path.join(DICTS, "nope.tsd"), "q???k"], ""],
  ];
  for (const [label, args, input] of cases) compareRaw("interface/" + label, args, input);
  // Usage text is the rebuild's own, so only the exit code and the empty standard output are compared.
  for (const [label, args] of [["unknown switch", [core, "/Z", "q???k"]], ["help switch", ["/?"]], ["switch with a tail", [core, "/Qx", "q???k"]], ["slash pattern", [core, "/abc"]], ["unknown switch after a bad dictionary", [bad, "/Z"]]])
    compareRaw("interface/" + label, args, "", { stderrToo: false });
}

const only = opt("--only", null);
const t0 = Date.now();
if (!only || only === "interface") interfaceTests();
if (only === "interface") { /* nothing else */ }
else if (only !== "fuzz" && ALL_CURATED.length) {
  for (const d of wanted) for (const sw of switchSets().slice(0, 4)) compare(`curated/${d}`, [dictArg(d), ...sw], ALL_CURATED);
}
if (only !== "curated" && only !== "interface") {
  const rounds = +opt("--rounds", 6), per = +opt("--per", 150);
  const sets = switchSets();
  for (let r = 0; r < rounds; r++) {
    const d = wanted[r % wanted.length];
    const sw = sets[int(sets.length)];
    const patterns = [];
    const how = opt("--gen", "both");
    const fromWords = how === "words" || (how === "both" && r % 2 === 1);
    const words = fromWords ? wordsOf(d) : null;
    for (let i = 0; i < per; i++) patterns.push(fromWords ? wordQuery(words) : query());
    compare(`fuzz/${d}/round${r}/${fromWords ? "words" : "random"}`, [dictArg(d), ...sw], patterns);
  }
}
console.log(`${total} runs, ${patternsRun} patterns, ${failed} runs differ (${Math.round((Date.now() - t0) / 1000)}s)`);
console.log(`original: ${stats.withResults} patterns with results, ${stats.noResults} with none, ${stats.errors} pattern errors, ${stats.resultLines} result lines (${stats.balanceLines} with a balance)`);
for (const f of failures.slice(0, +opt("--show", 12))) console.log(JSON.stringify(f));
process.exitCode = failed ? 1 : 0;

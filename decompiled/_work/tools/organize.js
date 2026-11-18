// Turn the raw per-address Ghidra export into a readable, named source tree that also compiles.
// Nothing here re-analyses code: it relabels and regroups the exported pseudocode using the symbol
// database, and adds the declarations a compiler needs (decomp.h).
// Usage: node organize.js <exe> <rawDir> <symbols.json> <outDir> [prepare-report.txt] [resources.rc] [--libstart 0x...]
const fs = require("fs");
const path = require("path");
const { load, hex } = require("./pe");
const { loadJournal } = require("./names");

const argv = process.argv.slice(2);
let libStartArg = null;
{ const i = argv.indexOf("--libstart"); if (i >= 0) { libStartArg = parseInt(argv[i + 1], 16); argv.splice(i, 2); } }
const [exe, rawDir, symFile, outDir, reportFile, rcFile] = argv;
const p = load(exe);
const sym = JSON.parse(fs.readFileSync(symFile, "utf8"));
const all = loadJournal(rawDir);                       // every function Ghidra knows, including ones it could not decompile
// Ghidra's label text can hold characters that are not legal in an identifier; when printing C it turns
// some of them into '_' and leaves others (such as '>'). Tokens are therefore matched tolerantly: see tokRe.
const fns = all.filter((f) => f.status === "written" && f.file);
const externals = fs.readFileSync(path.join(rawDir, "decompile-journal.jsonl"), "utf8").split("\n").filter((l) => l.includes('"external":true')).map((l) => JSON.parse(l));
const exeName = path.basename(exe);
const NS = "tea";

// ---------- display names -------------------------------------------------------
const pretty = (n) =>
  n.replace(/std::basic_string<char,std::char_traits<char>,std::allocator<char> >/g, "std::string")
    .replace(/std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >/g, "std::wstring")
    .replace(/,std::allocator<[^<>]*(?:<[^<>]*(?:<[^<>]*>[^<>]*)*>[^<>]*)*> >/g, " >")
    .replace(/,std::char_traits<(?:char|wchar_t)> >/g, " >")
    .replace(/\s+>/g, ">");
const fnSym = new Map();
for (const [a, s] of Object.entries(sym.functions)) fnSym.set(+a, { ...s, name: pretty(s.name), cls: s.cls ? pretty(s.cls) : undefined });
const dataSym = new Map();
for (const [a, s] of Object.entries(sym.data)) dataSym.set(+a, { ...s, name: pretty(s.name) });
{
  const seen = new Map();
  for (const [a, s] of [...fnSym.entries()].sort((x, y) => x[0] - y[0])) {
    if (seen.has(s.name)) s.name = `${s.name}_${a.toString(16)}`;
    seen.set(s.name, a);
  }
}
const created = new Map(); // functions defined by the prepare script
if (reportFile && fs.existsSync(reportFile))
  for (const line of fs.readFileSync(reportFile, "utf8").split("\n")) { const c = line.split("\t"); if (c[0] === "new") created.set(parseInt(c[1], 16), c[2]); }

// ---------- code names: display names turned into identifiers a compiler accepts -----------------
// A::B::f stays A::B::f (A and B become namespaces). ~X becomes _dtor. Template arguments and other
// punctuation are folded into the identifier. The display name is kept in each function's header comment.
const KEYWORDS = new Set(("alignas alignof and and_eq asm auto bitand bitor bool break case catch char char8_t char16_t char32_t class compl concept const consteval constexpr constinit const_cast continue co_await co_return co_yield decltype default delete do double dynamic_cast else enum explicit export extern false float for friend goto if inline int long mutable namespace new noexcept not not_eq nullptr operator or or_eq private protected public register reinterpret_cast requires return short signed sizeof static static_assert static_cast struct switch template this thread_local throw true try typedef typeid typename union unsigned using virtual void volatile wchar_t while xor xor_eq main near far pascal cdecl interface small").split(" "));
const splitTop = (n) => {
  const parts = [];
  let d = 0, start = 0;
  for (let i = 0; i < n.length; i++) {
    if (n[i] === "<") d++; else if (n[i] === ">") d--;
    else if (d === 0 && n[i] === ":" && n[i + 1] === ":") { parts.push(n.slice(start, i)); start = i + 2; i++; }
  }
  parts.push(n.slice(start));
  return parts;
};
const ident = (part) => {
  let s = part.trim();
  if (s.startsWith("~")) return "_dtor";
  if (!/^[A-Za-z_][A-Za-z0-9_]*$/.test(s)) {
    s = s.replace(/\*/g, "_ptr").replace(/&/g, "_ref").replace(/[^A-Za-z0-9_]+/g, "_").replace(/_{2,}/g, "_").replace(/^_+|_+$/g, "");
    if (!s || /^[0-9]/.test(s)) s = "n_" + s;
  }
  if (KEYWORDS.has(s)) s += "_";
  return s;
};
const toCode = (display) => splitTop(display).map(ident).join("::");

// the token Ghidra prints for a function: FUN_<addr>, thunk_FUN_<target>, or the leaf of its own name
const leafOf = (ghidraName) => { const parts = splitTop(ghidraName); return parts[parts.length - 1]; };
const fnByAddr = new Map(all.map((f) => [f.addr, f]));
const usedCode = new Map(); // code name -> addr
const claim = (name, addr) => {
  let n = name;
  if (usedCode.has(n) && usedCode.get(n) !== addr) n = `${n}_${addr.toString(16)}`;
  usedCode.set(n, addr);
  return n;
};
// pass 1: everything except default-named thunks (their name depends on the target's)
for (const f of all) {
  const s = fnSym.get(f.addr);
  f.token = leafOf(f.ghidraName);
  f.display = s ? s.name : f.token;
  if (/^thunk_FUN_[0-9a-f]{8}$/.test(f.token) && !s) continue;
  f.code = claim(s ? toCode(s.name) : ident(f.token), f.addr);
}
// a function and a namespace cannot share a name in the same scope: move such functions aside
{
  const scopes = new Set();
  for (const f of all) if (f.code) { const parts = f.code.split("::"); for (let i = 1; i < parts.length; i++) scopes.add(parts.slice(0, i).join("::")); }
  for (const f of all) if (f.code && scopes.has(f.code)) { usedCode.delete(f.code); f.code = claim(f.code + "_fn", f.addr); }
}
for (const f of all) {
  if (f.code) continue;
  const target = fnByAddr.get(parseInt(f.token.slice(10), 16));
  const tcode = target && target.code ? target.code : f.token.slice(6);
  const parts = tcode.split("::");
  parts[parts.length - 1] = "thunk_" + parts[parts.length - 1];
  f.code = claim(parts.join("::"), f.addr);
  f.display = "thunk → " + (target ? target.display : f.token.slice(6));
}
// printed token -> function (first by address wins when several share a token)
const tokenFn = new Map();
for (const f of all) if (!tokenFn.has(f.token)) tokenFn.set(f.token, f);

// ---------- imports -----------------------------------------------------------------
// Each imported API has a stub in the image (a jump through the import table). Ghidra prints calls by API name.
//  - prototype known to Ghidra: calls stay API calls and resolve to the Windows SDK declaration
//    (or to a declaration of our own when the SDK headers in use have none: sdk-missing.json);
//  - prototype unknown to Ghidra: the decompiler shows such calls without arguments, so they are
//    routed to the stub, which is declared variadic.
const seedsDir = path.dirname(symFile), progName = path.basename(exe, ".exe");
const sdkMissingFile = path.join(seedsDir, `${progName}.sdk-missing.json`);
const sdkMissing = new Set(fs.existsSync(sdkMissingFile) ? JSON.parse(fs.readFileSync(sdkMissingFile, "utf8")) : []);
const stubs = all.filter((f) => f.thunkOf && f.thunkOf.startsWith("external:"));
const unknownProtoImports = new Set();
for (const f of stubs) {
  f.stubOf = f.thunkOf.slice(9);
  f.api = leafOf(f.stubOf);
  f.display = f.stubOf;
  f.protoUnknown = f.sigSource === "DEFAULT";
  if (f.protoUnknown) unknownProtoImports.add(f.api);
  usedCode.delete(f.code);
  f.code = claim("import_" + ident(f.api), f.addr);
}
// the API-name token now means the API itself, not the stub
for (const f of stubs) if (tokenFn.get(f.token) === f) tokenFn.delete(f.token);
const unknownImportRe = unknownProtoImports.size
  ? new RegExp("(?<![A-Za-z0-9_:])(" + [...unknownProtoImports].map((s) => s.replace(/[$]/g, "[$]")).join("|") + ")(?![A-Za-z0-9_])", "g")
  : null;
const fnCode = (a) => (fnByAddr.has(a) ? fnByAddr.get(a).code : null);

// ---------- globals ---------------------------------------------------------------
// Every global the pseudocode names, with the type the decompiler used. One declaration per name: the
// type most functions agree on. A function that sees it differently reads it through a cast.
const isIdent = (s) => /^[A-Za-z_][A-Za-z0-9_]*$/.test(s);
const fixType = (t) => t.replace(/\.conflict\d*/g, "").replace(/\bstruct\s+/g, "").trim();
const isStringTok = (g) => /^(s|u)_/.test(g.t) && g.a;
const globals = new Map(); // token -> {votes: Map(type->n), symVotes, a, code, fn}
for (const f of fns) for (const g of f.globals) {
  if (g.fn || isStringTok(g)) continue;
  let e = globals.get(g.t);
  if (!e) { e = { t: g.t, a: g.a ? parseInt(g.a, 16) : null, code: g.code, votes: new Map(), symVotes: new Map() }; globals.set(g.t, e); }
  const m = g.direct ? e.votes : e.symVotes;
  const ty = fixType(g.direct ? g.type : g.symtype);
  m.set(ty, (m.get(ty) || 0) + 1);
}
const best = (m) => [...m.entries()].sort((a, b) => b[1] - a[1] || a[0].localeCompare(b[0]))[0];
for (const e of globals.values()) {
  e.type = (best(e.votes) || best(e.symVotes))[0];
  // labels inside code are jump targets or data islands; declare them as code
  if (e.code && /^(LAB_|code_r0x|caseD_|switchD_)/.test(e.t)) e.type = "undefined";
  const ds = e.a !== null && !/^_/.test(e.t) ? dataSym.get(e.a) : null;
  e.display = ds && /^(PTR_FUN_|PTR_LAB_|PTR_DAT_|DAT_)/.test(e.t) ? ds.name : e.t;
  e.codeName = ds && e.display !== e.t ? toCode(e.display) : isIdent(e.t) ? e.t : ident(e.t);
}
const declOf = (type, name) => { const m = type.match(/^(.*?)((?:\[\d+\])+)$/); return m ? `${m[1].trim()} ${name}${m[2]}` : `${type} ${name}`; };
const ptrTo = (type) => { const m = type.match(/^(.*?)((?:\[\d+\])+)$/); return m ? `${m[1].trim()} (*)${m[2]}` : `${type} *`; };

// ---------- strings ---------------------------------------------------------------
const esc = (ch) => (ch === 0x5c ? "\\\\" : ch === 0x22 ? '\\"' : ch === 10 ? "\\n" : ch === 13 ? "\\r" : ch === 9 ? "\\t" : ch === 0x3f ? "\\?" : ch >= 0x20 && ch < 0x7f ? String.fromCharCode(ch) : "\\" + ch.toString(8).padStart(3, "0"));
const cString = (va) => {
  const off = p.va2off(va);
  if (off < 0) return null;
  let e = off, s = "";
  while (e < p.b.length && e - off < 8192 && p.b[e] !== 0) s += esc(p.b[e++]);
  return `"${s}"`;
};
const wString = (va) => {
  const off = p.va2off(va);
  if (off < 0) return null;
  let s = "";
  for (let e = off; e + 1 < p.b.length && e - off < 8192; e += 2) { const c = p.b.readUInt16LE(e); if (c === 0) break; s += c < 0x80 ? esc(c) : "\\x" + c.toString(16) + '" L"'; }
  return `L"${s}"`.replace(/ L""$/, "");
};
const printable = (va) => {
  const off = p.va2off(va);
  if (off < 0) return null;
  let e = off;
  while (e < p.b.length && e - off < 120 && p.b[e] >= 0x20 && p.b[e] < 0x7f) e++;
  if (e - off < 3 || p.b[e] !== 0) return null;
  return p.b.toString("latin1", off, e);
};
const reEsc = (s) => s.replace(/[.*+?^${}()|[\]\\]/g, "\\$&");
// matches a journal token as printed: each non-identifier character may appear as itself or as '_'
const tokRe = (t) => new RegExp("(?<![A-Za-z0-9_])" + [...t].map((c) => (/[A-Za-z0-9_]/.test(c) ? c : `(?:_|${reEsc(c)})`)).join("") + "(?![A-Za-z0-9_])", "g");

const unknownTargets = new Set(); // func_0x<addr>: call targets outside any function Ghidra defined

// ---------- rewrite one function ---------------------------------------------------
function splitHeader(text) {
  // Ghidra prints: [comments] <return type> [convention] <name>(<params>) <blank> { ...
  const brace = text.search(/^\{\s*$/m);
  if (brace < 0) return null;
  const head = text.slice(0, brace);
  const lines = head.split("\n");
  let i = 0, inComment = false;
  const pre = [];
  for (; i < lines.length; i++) {
    const l = lines[i].trim();
    if (inComment) { pre.push(lines[i]); if (l.includes("*/")) inComment = false; continue; }
    if (l === "") { pre.push(lines[i]); continue; }
    if (l.startsWith("/*")) { pre.push(lines[i]); if (!l.includes("*/")) inComment = true; continue; }
    break;
  }
  return { pre: pre.join("\n").replace(/\s+$/, ""), proto: lines.slice(i).join(" ").replace(/\s+/g, " ").trim(), body: text.slice(brace) };
}
// replace the function-name token (the identifier before the first top-level parenthesis)
function renameInProto(proto, newName) {
  const open = proto.indexOf("(");
  if (open < 0) return null;
  const before = proto.slice(0, open).replace(/\s+$/, "");
  const m = before.match(/([A-Za-z_@?$~.][A-Za-z0-9_@?$~.:<>]*)$/);
  if (!m) return null;
  return before.slice(0, before.length - m[1].length) + newName + proto.slice(open);
}
const fixProtoTypes = (s) => s.replace(/\.conflict\d*/g, "").replace(/\bthis\b/g, "this_");

function rewriteBody(body, f) {
  let out = body;
  // Ghidra's notation for "M bytes at offset N inside this variable": x._N_M_ (before names are replaced)
  out = out.replace(/((?:\b[su]_[A-Za-z0-9_<>:~$@?!]*?_[0-9a-f]{8}|[A-Za-z_][A-Za-z0-9_]*)(?:\.(?!_\d+_\d+_)[A-Za-z_]\w*|\[[^\]\n]*\])*)\._(\d+)_(\d+)_/g,
    (m, lv, off, n) => `GH_PIECE(${lv}, ${off}, ${{ 1: "undefined1", 2: "undefined2", 3: "undefined3", 4: "undefined4", 8: "undefined8" }[n] || "undefined"})`);
  // strings named by this function -> literals (exact tokens from the decompiler, not guessed)
  for (const g of f.globals) {
    if (!isStringTok(g)) continue;
    const lit = g.t.startsWith("u_") ? wString(parseInt(g.a, 16)) : cString(parseInt(g.a, 16));
    if (lit) out = out.replace(tokRe(g.t), () => lit);
  }
  // strings the decompiler referenced without recording a symbol
  out = out.replace(/\b([su])_[A-Za-z0-9_<>:~.$@?!]*?_([0-9a-f]{8})\b/g, (m, k, d) => (k === "u" ? wString(parseInt(d, 16)) : cString(parseInt(d, 16))) || m);
  // locals read or written with a different type than declared: Ghidra prints _name
  for (const l of f.locals || []) out = out.replace(tokRe(l.t), () => `(*(${ptrTo(fixType(l.type))})&${l.base})`);
  // calls to addresses where Ghidra has no function: func_0x<addr>
  for (const m of out.matchAll(/\bfunc_0x[0-9a-f]{8}\b/g)) unknownTargets.add(m[0]);
  if (unknownImportRe && !f.stubOf) out = out.replace(unknownImportRe, (m) => "import_" + m);
  out = out
    .replace(/\b(thunk_FUN_[0-9a-f]{8}|FUN_[0-9a-f]{8})\b/g, (m) => { const t = tokenFn.get(m); return t ? t.code : m; })
    .replace(/&(DAT_([0-9a-f]{8}))\b(?!\s*\/\*)/g, (m, tok, d) => { const s = printable(parseInt(d, 16)); return s ? `${m} /* "${s.replace(/\*\//g, "* /")}" */` : m; })
    .replace(/\bstack0x([0-9a-f]{8})\b/g, (m, o) => `GHIDRA_STACK(0x${o})`)
    .replace(/\bthis\b/g, "this_");
  // globals: local view of the type, then the compilable name
  for (const g of f.globals) {
    if (g.fn) { const t = tokenFn.get(g.t); if (t && t.code !== g.t) out = out.replace(tokRe(g.t), () => t.code); continue; }
    if (isStringTok(g)) continue;
    const e = globals.get(g.t);
    if (!e) continue;
    const local = fixType(g.type);
    if (g.direct && local !== e.type) out = out.replace(tokRe(g.t), () => `(*(${ptrTo(local)})&${e.codeName})`);
    else if (e.codeName !== g.t) out = out.replace(tokRe(g.t), () => e.codeName);
  }
  return out;
}

// ---------- module assignment ---------------------------------------------------
const LIB_DENY = new Set(["TThunkAllocator", "TInstanceThunk", "type_info_hash", "xmsg", "xalloc", "Bad_cast", "Bad_typeid", "string", "TXOwl", "type_info"]);
const isLibClass = (n) => /^(OWL::|std::|__rwstd::|_)/.test(n) || LIB_DENY.has(n);
// module a class belongs to: its outermost class, keeping a leading namespace (OWL::TWindow::X -> OWL::TWindow)
// and dropping template arguments (std::vector<...> -> std::vector)
const topLevel = (n) => {
  const parts = splitTop(n);
  const bare = (s) => s.replace(/<.*$/, "");
  if (parts.length > 1 && /^(OWL|std|__rwstd)$/.test(parts[0])) return parts[0] + "::" + bare(parts[1]);
  return bare(parts[0]);
};
const ownerOf = (a) => { const s = fnSym.get(a); return s ? s.module || s.cls || null : null; };

fns.sort((a, b) => a.addr - b.addr);
const appAnchors = fns.filter((f) => { const o = ownerOf(f.addr); return o && !isLibClass(o); }).map((f) => f.addr);
let lastApp = appAnchors.length ? appAnchors[0] : 0;
for (let i = 1; i < appAnchors.length; i++) { if (i >= 3 && appAnchors[i] - appAnchors[i - 1] > 0x12000) break; lastApp = appAnchors[i]; }
let libStart = libStartArg || Infinity;
if (!libStartArg) for (const f of fns) { if (f.addr <= lastApp) continue; const o = ownerOf(f.addr); if (o && isLibClass(o)) { libStart = f.addr; break; } }

const modules = new Map(); // key -> {key, dir, name, fns:[]}
const mod = (dir, name) => { const key = dir + "/" + name; if (!modules.has(key)) modules.set(key, { key, dir, name, fns: [] }); return modules.get(key); };
const safe = (n) => n.replace(/::/g, "_").replace(/[^A-Za-z0-9_.-]+/g, "_").replace(/_+/g, "_").replace(/^_|_$/g, "").slice(0, 80) || "unnamed";
let current = null;
const pending = [];
for (const f of fns) {
  const o = ownerOf(f.addr);
  if (f.addr < libStart) {
    if (o && !isLibClass(o)) {
      current = topLevel(o);
      for (const q of pending) { q.module = mod("src", safe(current)); q.placement = "inferred (precedes first anchor)"; q.module.fns.push(q); }
      pending.length = 0;
      f.placement = "anchored";
    } else f.placement = "inferred (address adjacency)";
    if (!current) { pending.push(f); continue; }
    f.module = mod("src", safe(current));
  } else {
    if (o) { f.module = mod("lib", safe(topLevel(o))); f.placement = "anchored"; }
    else { f.module = mod("lib", "code_" + hex(f.addr & ~0x3fff)); f.placement = "by address"; }
  }
  f.module.fns.push(f);
}
for (const q of pending) { q.module = mod("src", "_startup"); q.placement = "no anchor"; q.module.fns.push(q); }

// ---------- render ---------------------------------------------------------------
fs.mkdirSync(outDir, { recursive: true });
for (const d of ["src", "lib", "resources"]) fs.rmSync(path.join(outDir, d), { recursive: true, force: true });
for (const stale of ["classes.hpp"]) fs.rmSync(path.join(outDir, stale), { force: true });
const size = (f) => f.ranges.reduce((a, [s, e]) => a + (e - s + 1), 0);
const tagOf = (f) => {
  const s = fnSym.get(f.addr);
  const tags = [];
  if (s) tags.push(s.source + (s.kind && s.kind !== "function" ? " " + s.kind : "") + (s.slot !== undefined ? " slot " + s.slot : ""));
  else tags.push("unnamed");
  if (created.has(f.addr)) tags.push("function defined from " + created.get(f.addr));
  return tags.join("; ");
};
const symRows = [];
const protos = []; // {code, proto} for decomp.h
const problems = [];
let namedCount = 0;
for (const f of fns) {
  const raw = fs.readFileSync(path.join(rawDir, f.file), "utf8").replace(/\r\n/g, "\n");
  const i = raw.indexOf("// pseudocode:");
  const text = raw.slice(i < 0 ? 0 : raw.indexOf("\n", i) + 1).replace(/^\s*\n+/, "").replace(/\s+$/, "");
  const h = splitHeader(text);
  const proto = h ? renameInProto(fixProtoTypes(h.proto), "\u0000") : null;
  if (!h || !proto) { problems.push(`${hex(f.addr)}: could not parse the definition header`); f.text = rewriteBody(text, f); continue; }
  f.protoTemplate = proto; // name position marked with \0
  if (f.stubOf && f.protoUnknown) {
    // Ghidra has no prototype for this API, so neither the stub nor its callers show real arguments
    f.protoTemplate = "int __stdcall \u0000(...)";
    f.text = f.protoTemplate.replace("\u0000", f.code) + "\n\n{\n  /* jump through the import table to " + f.stubOf + "; Ghidra has no prototype for it,\n     so its arguments and result are not recovered here or at its call sites */\n  return 0;\n}";
    continue;
  }
  f.text = (h.pre ? h.pre + "\n" : "") + f.protoTemplate.replace("\u0000", f.code) + "\n\n" + rewriteBody(h.body, f);
}

// ---------- variable names (varnames.js): hand-assigned, carried from identical functions, and by rule -------
const varStats = { declared: 0, generic: 0, hand: 0, rule: 0, genericLeft: 0, src: { declared: 0, generic: 0, hand: 0, rule: 0, genericLeft: 0 } };
const varRows = [];
{
  const VN = require("./varnames");
  const manualDir = path.join(seedsDir, "..", "manual");
  const hand = new Map();
  const loadVars = (file, rule) => {
    if (!fs.existsSync(file)) return;
    for (const [a, m] of Object.entries(JSON.parse(fs.readFileSync(file, "utf8")))) {
      if (a.startsWith("_")) continue;
      const addr = parseInt(a, 16);
      const cur = hand.get(addr) || {};
      for (const [tok, v] of Object.entries(m.vars || m)) {
        if (tok.startsWith("_") || cur[tok]) continue;
        cur[tok] = typeof v === "string" ? { name: v, rule: m.from ? `${rule} (identical body in ${m.from})` : rule } : v;
      }
      hand.set(addr, cur);
    }
  };
  loadVars(path.join(manualDir, `${progName}.vars.json`), "hand-assigned");
  loadVars(path.join(seedsDir, `${progName}.propagated-vars.json`), "hand-assigned");
  const apiParams = new Map();
  for (const x of externals) {
    const leaf = leafOf(x.name);
    const m = x.proto.match(/\((.*)\)\s*$/);
    if (!m || !m[1].trim() || m[1].trim() === "void") continue;
    apiParams.set(leaf, VN.splitTopLevel(m[1]).map((p) => { const q = p.match(/([A-Za-z_][A-Za-z0-9_]*)\s*$/); return q ? q[1] : null; }));
  }
  // the shared empty string rep of Borland's std::string: the global compared twice in every release sequence
  const repVotes = new Map();
  for (const f of fns) if (f.text) for (const m of f.text.matchAll(/else if \([A-Za-z_][A-Za-z0-9_]* == (?:\([a-z ]+\*\))?&([A-Za-z_][A-Za-z0-9_:]*)\)/g)) repVotes.set(m[1], (repVotes.get(m[1]) || 0) + 1);
  const nullRep = [...repVotes.entries()].sort((a, b) => b[1] - a[1])[0];
  const input = fns.filter((f) => f.text).map((f) => {
    const s = fnSym.get(f.addr);
    return { addr: f.addr, code: f.code, display: f.display, cls: s ? s.cls : undefined, kind: s ? s.kind : undefined, handNamed: !!(s && /^(analysis|notes)/.test(s.source)), text: f.text };
  });
  const named = VN.nameAll(input, { hand, apiParams, nullRep: nullRep ? nullRep[0] : null });
  for (const f of fns) {
    if (!f.text) continue;
    const r = named.get(f.addr);
    const P = VN.parse(f.text);
    const decl = P ? [...P.params.filter((p) => p.name), ...P.locals] : [];
    const isSrc = f.addr < libStart;
    for (const v of decl) {
      const gen = VN.GENERIC.test(v.name);
      const nm = r && r.map.get(v.name);
      const row = r && r.rows.find((x) => x[0] === v.name);
      for (const st of isSrc ? [varStats, varStats.src] : [varStats]) {
        st.declared++;
        if (gen) st.generic++;
        if (nm) st[row[2]]++;
        else if (gen) st.genericLeft++;
      }
    }
    if (!r || !r.map.size) continue;
    f.text = VN.applyNames(f.text, r.map);
    if (f.protoTemplate) f.protoTemplate = VN.applyNames(f.protoTemplate, r.map);
    for (const [tok, name, src, rule] of r.rows) varRows.push([hex(f.addr), f.display, tok, name, src, rule].join("\t"));
  }
}

// ---------- member names (manual/<Program>.fields.json): named offsets inside member functions ---------
// The binary records no member layout, so members stay offsets from `this`; each known offset becomes a
// named constant of the class (m_<name>, declared in decomp.h) and `self + 0x1148` reads `self + m_opCount`.
// Inherited members are included at their base's offset.
const fieldConsts = new Map(); // class code name -> [[name, offset, type, note]]
let fieldUses = 0;
{
  const fieldsFile = path.join(seedsDir, "..", "manual", `${progName}.fields.json`);
  const own = fs.existsSync(fieldsFile) ? JSON.parse(fs.readFileSync(fieldsFile, "utf8")) : {};
  const classByName = new Map(sym.classes.map((c) => [c.name, c]));
  const layout = (cls, guard = 0) => {
    const out = new Map();
    const c = classByName.get(cls);
    if (c && guard < 20) for (const b of [...c.bases, ...c.vbases.filter(() => false)]) for (const [o, v] of layout(b.name, guard + 1)) out.set(o + b.offset, v);
    for (const [o, v] of Object.entries(own[cls] || {})) out.set(parseInt(o, 16), v);
    return out;
  };
  const classesWithFields = new Set();
  for (const cls of Object.keys(own)) classesWithFields.add(cls);
  for (const c of sym.classes) if ([...layout(c.name).keys()].length) classesWithFields.add(c.name);
  for (const cls of classesWithFields) {
    const L = layout(cls);
    if (!L.size) continue;
    fieldConsts.set(toCode(pretty(cls)), [...L.entries()].sort((a, b) => a[0] - b[0]).map(([o, v]) => ["m_" + v.name, o, v.type, v.note]));
  }
  const NUM = "(0x[0-9a-f]+|[0-9]+)";
  for (const f of fns) {
    if (!f.text) continue;
    const s = fnSym.get(f.addr);
    if (!s || !s.cls) continue;
    const consts = fieldConsts.get(toCode(s.cls));
    if (!consts) continue;
    const byOff = new Map(consts.map(([n, o]) => [o, n]));
    const P = require("./varnames").parse(f.text);
    const selfParam = P && P.params.find((p) => p.name === "self");
    if (!selfParam) continue;
    const t = selfParam.type.replace(/\s+/g, "");
    const elem = /^(int|uint|undefined4|dword|long|ulong)\*$/.test(t) ? 4 : /^(short|ushort|undefined2|word)\*$/.test(t) ? 2 : /^(char|byte|undefined1|uchar)\*$/.test(t) ? 1 : 0;
    const P0 = P.lines.slice(P.bodyStart).join("\n");
    let body = P0;
    if (/^(int|uint|undefined4)$/.test(t)) {
      body = body.replace(new RegExp(String.raw`(?<![\w.>])self \+ ${NUM}(?![\w\[(])`, "g"), (m, n) => { const o = parseInt(n); const nm = byOff.get(o); if (!nm) return m; fieldUses++; return `self + ${nm}`; });
    } else if (elem) {
      body = body.replace(new RegExp(String.raw`(?<![\w.>])self\[${NUM}\]`, "g"), (m, n) => { const o = parseInt(n) * elem; const nm = byOff.get(o); if (!nm) return m; fieldUses++; return elem === 1 ? `self[${nm}]` : `self[${nm} / ${elem}]`; });
      body = body.replace(new RegExp(String.raw`(?<![\w.>])self \+ ${NUM}(?![\w\[(])`, "g"), (m, n) => { const o = parseInt(n) * elem; const nm = byOff.get(o); if (!nm) return m; fieldUses++; return elem === 1 ? `self + ${nm}` : `self + ${nm} / ${elem}`; });
      body = body.replace(new RegExp(String.raw`\(int\)self \+ ${NUM}(?![\w\[(])`, "g"), (m, n) => { const o = parseInt(n); const nm = byOff.get(o); if (!nm) return m; fieldUses++; return `(int)self + ${nm}`; });
    }
    if (body !== P0) f.text = P.lines.slice(0, P.bodyStart).join("\n") + "\n" + body;
  }
}

for (const m of modules.values()) {
  m.fns.sort((a, b) => a.addr - b.addr);
  const lo = m.fns[0].addr, hi = m.fns[m.fns.length - 1].addr;
  const L = [];
  L.push(`// ${exeName} — ${m.dir === "src" ? "application module" : "runtime / library code"} "${m.name}"`);
  L.push(`// ${m.fns.length} functions, ${hex(lo)}..${hex(hi)}. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.`);
  L.push(`// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.`);
  L.push("", `#include "../decomp.h"`, "", `namespace ${NS} {`, "");
  for (const f of m.fns) {
    const s = fnSym.get(f.addr);
    if (s) namedCount++;
    L.push(`// ${"-".repeat(100)}`);
    L.push(`// ${hex(f.addr)}  ${f.display}   (${size(f)} bytes${f.ranges.length > 1 ? ", " + f.ranges.length + " ranges" : ""})   [${tagOf(f)}]`);
    if (s && s.note) L.push(`//   ${s.note}`);
    if (s && s.aliases && s.aliases.length) L.push(`//   also: ${s.aliases.map(pretty).slice(0, 4).join("; ")}`);
    if (f.stubOf) L.push(`//   import stub: a jump through the import table to ${f.stubOf}`);
    else if (f.code !== f.display && !f.display.startsWith("thunk")) L.push(`//   written in code as ${f.code}`);
    if (f.placement && f.placement !== "anchored" && m.dir === "src") L.push(`//   file placement: ${f.placement}`);
    L.push(f.text, "");
    symRows.push([hex(f.addr), f.display, f.code, s && s.cls ? s.cls : "", s ? s.kind || "" : "", s ? s.source : "", `${m.dir}/${m.name}.cpp`, size(f)].join("\t"));
  }
  L.push(`} // namespace ${NS}`);
  fs.mkdirSync(path.join(outDir, m.dir), { recursive: true });
  fs.writeFileSync(path.join(outDir, m.dir, m.name + ".cpp"), L.join("\n") + "\n");
}
fs.writeFileSync(path.join(outDir, "symbols.tsv"), ["address\tname\tname_in_code\tclass\tkind\tname_source\tfile\tbytes"].concat(symRows.sort()).join("\n") + "\n");
fs.writeFileSync(path.join(outDir, "varnames.tsv"), ["address\tfunction\tghidra_name\tname\tsource\tevidence"].concat(varRows).join("\n") + "\n");

// ---------- decomp.h: declarations for everything the pseudocode refers to -----------------------
{
  const nsWrap = (code, decl) => { const parts = code.split("::"); const leaf = parts.pop(); return parts.length ? `namespace ${parts.join("::")} { ${decl(leaf)} }` : decl(leaf); };
  const L = [`// ${exeName} — declarations for the decompiled program. Generated; do not edit.`,
    "// One prototype per function (as Ghidra has it after its signatures were committed) and one",
    "// declaration per global the pseudocode names. Class names appear as namespaces: the binary has no",
    "// type information from which real class definitions could be rebuilt.",
    "#pragma once", `#include "../ghidra.h"`, "", `namespace ${NS} {`, ""];
  const declared = new Set();
  L.push(`// ---- functions (${all.length}) ----`);
  for (const f of all) {
    let tmpl = f.protoTemplate;
    if (!tmpl && f.proto) tmpl = renameInProto(fixProtoTypes(f.proto.replace(/\s*\*\s*/g, " *").replace(/, /g, ",")), "\u0000");
    if (!tmpl) { problems.push(`${hex(f.addr)}: no prototype available for ${f.code}`); continue; }
    // a function Ghidra could not decompile has no recovered parameters: accept whatever its callers pass
    if (f.status !== "written") tmpl = tmpl.replace(/\(\s*(?:void)?\s*\)\s*$/, "(...)").replace(/^undefined /, "int ");
    L.push(nsWrap(f.code, (leaf) => tmpl.replace("\u0000", leaf) + ";") + (f.status !== "written" ? "   // not decompiled" : ""));
    declared.add(f.code);
  }
  // imported functions the Windows SDK headers in use do not declare (found by probe-imports.js)
  const ext = [];
  for (const x of externals) {
    const leaf = leafOf(x.name);
    if (!isIdent(leaf) || declared.has(leaf) || tokenFn.has(leaf) || !sdkMissing.has(leaf) || unknownProtoImports.has(leaf)) continue;
    const tmpl = renameInProto(fixProtoTypes(x.proto.replace(/\s*\*\s*/g, " *").replace(/, /g, ",")), "\u0000");
    if (!tmpl) continue;
    declared.add(leaf);
    ext.push(tmpl.replace("\u0000", leaf) + ";   // " + x.name);
  }
  if (ext.length) L.push("", `// ---- imported functions the SDK headers do not declare (${ext.length}) ----`, ...ext);
  if (unknownTargets.size) L.push("", `// ---- call targets where Ghidra found no function (${unknownTargets.size}) ----`, ...[...unknownTargets].sort().map((t) => `code ${t};`));
  const gl = [...globals.values()].sort((a, b) => (a.a ?? 0) - (b.a ?? 0) || a.t.localeCompare(b.t));
  L.push("", `// ---- globals (${gl.length}) ----`);
  for (const e of gl) {
    if (declared.has(e.codeName)) continue;
    declared.add(e.codeName);
    const d = (leaf) => (e.type === "code" ? `code ${leaf};` : `extern ${declOf(e.type, leaf)};`);
    L.push(nsWrap(e.codeName, d) + (e.a !== null ? `   // ${hex(e.a)}${e.display !== e.t ? "  " + e.t : ""}` : ""));
  }
  if (fieldConsts.size) {
    L.push("", `// ---- member offsets (${fieldConsts.size} classes): byte offset of each known member from the start of the object ----`,
      "// Member functions write `self + m_name` (or `self[m_name / 4]` when Ghidra typed `self` as an int pointer).");
    for (const [code, list] of [...fieldConsts.entries()].sort()) {
      L.push(`namespace ${code.split("::").join(" { namespace ")} { enum : int {`);
      for (const [n, o, type, note] of list) L.push(`  ${n} = ${hex(o, 1)},   // ${type || ""}${note ? " — " + note : ""}`);
      L.push(`}; ${"}".repeat(code.split("::").length)}`);
    }
  }
  L.push("", `} // namespace ${NS}`);
  fs.writeFileSync(path.join(outDir, "decomp.h"), L.join("\n") + "\n");
}

// ---------- classes.md: what the RTTI and message maps say about each class --------------------------
{
  const L = [`# ${exeName} — classes`, "",
    "Recovered from Borland C++ RTTI (type descriptors, vtables) and OWL response tables. Sizes, bases, destructors and vtable contents are read directly from tables in the binary.",
    "",
    "Member lists are **partial**: RTTI records only members that need destruction (objects with destructors), with their offsets. Virtual slots are named `vfN` unless a better name was established; response-table handlers are named from the message or command id.",
    "",
    "These are descriptions, not compilable class definitions — in the code each class name is a namespace holding its functions.", ""];
  const classes = sym.classes.map((c) => ({ ...c, pname: pretty(c.name) }));
  const tablesByOwner = new Map();
  for (const t of sym.responseTables) if (t.owner) { const k = pretty(t.owner); if (!tablesByOwner.has(k)) tablesByOwner.set(k, []); tablesByOwner.get(k).push(t); }
  const dispOf = (a) => (fnByAddr.has(a) ? fnByAddr.get(a).display : "FUN_" + a.toString(16).padStart(8, "0"));
  const emit = (c) => {
    const bases = c.bases.map((b) => "public " + pretty(b.name || "?")).concat(c.vbases.map((b) => "public virtual " + pretty(b.name || "?")));
    L.push(`### ${c.pname}`, "", "```cpp");
    L.push(`// sizeof ${c.size} (${hex(c.size, 1)})  rtti ${hex(c.va)}${c.vptrOffs !== 0xffffffff ? "  vptr at +" + hex(c.vptrOffs, 1) : "  no vptr"}${c.dtor ? "  destructor " + hex(c.dtor) : ""}`);
    L.push(`class ${c.pname}${bases.length ? " : " + bases.join(", ") : ""} {`);
    for (const b of c.bases) L.push(`    /* +${hex(b.offset, 3)} */ // base subobject ${pretty(b.name || "?")}`);
    for (const m of c.members) L.push(`    /* +${hex(m.offset, 3)} */ ${pretty(m.type)} m_${m.offset.toString(16)};`);
    c.vtables.forEach((v, vi) => {
      L.push(`    // vtable${vi ? " " + (vi + 1) : ""} at ${hex(v.va)} (${v.slots.length} slots)`);
      v.slots.forEach((fn, i) => L.push(`    //   [${String(i).padStart(2)}] ${hex(fn)}  ${dispOf(fn)}`));
    });
    for (const t of tablesByOwner.get(c.pname) || []) {
      L.push(`    // response table at ${hex(t.va)} (${t.rows.length} entries)`);
      for (const r of t.rows) L.push(`    //   ${r.what.padEnd(44)} -> ${hex(r.handler)}  ${dispOf(r.handler)}${r.caption ? "   // " + r.caption : ""}`);
    }
    L.push("};", "```", "");
  };
  const app = classes.filter((c) => !isLibClass(c.name));
  const lib = classes.filter((c) => isLibClass(c.name));
  L.push(`## Application classes (${app.length})`, "");
  app.sort((a, b) => a.pname.localeCompare(b.pname)).forEach(emit);
  L.push(`## Library and template classes (${lib.length})`, "");
  lib.sort((a, b) => a.pname.localeCompare(b.pname)).forEach(emit);
  const orphan = sym.responseTables.filter((t) => !t.owner);
  if (orphan.length) {
    L.push(`## Response tables whose owning class was not resolved (${orphan.length})`, "", "```");
    for (const t of orphan) { L.push(`table at ${hex(t.va)}`); for (const r of t.rows) L.push(`  ${r.what.padEnd(44)} -> ${hex(r.handler)}  ${dispOf(r.handler)}`); }
    L.push("```", "");
  }
  fs.writeFileSync(path.join(outDir, "classes.md"), L.join("\n") + "\n");
}
if (rcFile && fs.existsSync(rcFile)) { fs.mkdirSync(path.join(outDir, "resources"), { recursive: true }); fs.copyFileSync(rcFile, path.join(outDir, "resources", path.basename(rcFile))); }

// ---------- summary -------------------------------------------------------------------
const text = p.text;
const covered = fns.reduce((a, f) => a + size(f), 0);
const bySource = {};
for (const f of fns) { const s = fnSym.get(f.addr); const k = s ? s.source : "unnamed"; bySource[k] = (bySource[k] || 0) + 1; }
const srcMods = [...modules.values()].filter((m) => m.dir === "src");
const summary = {
  exe: exeName, sha256: require("crypto").createHash("sha256").update(p.b).digest("hex"),
  functions: fns.length, named: namedCount, nameSources: bySource,
  appFunctions: srcMods.reduce((a, m) => a + m.fns.length, 0), libFunctions: fns.length - srcMods.reduce((a, m) => a + m.fns.length, 0),
  appNamed: srcMods.reduce((a, m) => a + m.fns.filter((f) => fnSym.has(f.addr)).length, 0),
  libStart: libStart === Infinity ? null : hex(libStart), textBytes: text.vsize, bytesInFunctions: covered,
  definedByTables: [...created.values()].filter((w) => w !== "prologue-scan").length, definedByPrologueScan: [...created.values()].filter((w) => w === "prologue-scan").length,
  classes: sym.classes.length, appClasses: sym.classes.filter((c) => !isLibClass(c.name)).length,
  responseTables: sym.responseTables.length, responseTablesOwned: sym.responseTables.filter((t) => t.owner).length,
  globalsDeclared: globals.size, generatorProblems: problems, variables: varStats,
  modules: srcMods.map((m) => ({ file: `src/${m.name}.cpp`, functions: m.fns.length, named: m.fns.filter((f) => fnSym.has(f.addr)).length, from: hex(m.fns[0].addr), to: hex(m.fns[m.fns.length - 1].addr), bytes: m.fns.reduce((a, f) => a + size(f), 0) })).sort((a, b) => parseInt(a.from, 16) - parseInt(b.from, 16)),
  libFiles: [...modules.values()].filter((m) => m.dir === "lib").length,
};
fs.writeFileSync(path.join(outDir, "summary.json"), JSON.stringify(summary, null, 1));
// API names whose prototypes Ghidra knows: probe-imports.js checks which of them the SDK headers declare
fs.writeFileSync(path.join(seedsDir, `${progName}.imports.json`), JSON.stringify([...new Set(externals.map((x) => leafOf(x.name)).filter((n) => isIdent(n) && !unknownProtoImports.has(n)))].sort()));
console.log(`${exeName}: ${summary.functions} functions -> ${srcMods.length} app modules (${summary.appFunctions} fns, ${summary.appNamed} named) + ${summary.libFiles} lib files (${summary.libFunctions} fns); named total ${summary.named}; globals ${globals.size}; libStart ${summary.libStart}${problems.length ? "; generator problems " + problems.length : ""}`);
console.log(`   variables: ${varStats.declared} declared, ${varStats.generic} with Ghidra storage names; named by hand ${varStats.hand}, by rule ${varStats.rule}; still generic ${varStats.genericLeft} (src/: ${varStats.src.genericLeft} of ${varStats.src.generic})`);
for (const x of problems.slice(0, 8)) console.log("   ! " + x);

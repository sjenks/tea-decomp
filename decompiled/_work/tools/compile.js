// Compile every .cpp of one decompiled program with the project-local 32-bit GCC and report errors.
// Usage: node compile.js <programDir> [--only src|lib] [--obj] [--jobs N] [--show N] [--quiet]
//   default: syntax + semantic check only (-fsyntax-only); --obj also generates object files in <programDir>/obj
const fs = require("fs");
const path = require("path");
const os = require("os");
const { spawn } = require("child_process");

const MINGW = process.env.TEA_MINGW || "C:\\Users\\jenks\\code\\tea-rea\\_tools\\mingw\\mingw32\\bin";
const GXX = path.join(MINGW, "g++.exe");
const FLAGS = ["-std=gnu++17", "-fpermissive", "-w", "-fmax-errors=0"];
const ENV = { ...process.env, PATH: MINGW + ";" + process.env.PATH };

function listFiles(dir, only) {
  const files = [];
  for (const sub of ["src", "lib"]) {
    if (only && only !== sub) continue;
    const d = path.join(dir, sub);
    if (!fs.existsSync(d)) continue;
    for (const f of fs.readdirSync(d).filter((x) => x.endsWith(".cpp")).sort()) files.push(sub + "/" + f);
  }
  return files;
}

// Runs the compiler over `files` (paths relative to dir). Returns [{file, code, err}].
function compileFiles(dir, files, { sarif = false, obj = false, jobs = Math.max(1, os.cpus().length - 1), extra = [] } = {}) {
  const results = [];
  let next = 0;
  const runOne = () => {
    if (next >= files.length) return Promise.resolve();
    const rel = files[next++];
    const args = FLAGS.concat(extra, [sarif ? "-fdiagnostics-format=sarif-stderr" : "-fdiagnostics-plain-output"],
      obj ? ["-c", rel, "-o", "obj/" + rel.replace(/\.cpp$/, ".o")] : ["-fsyntax-only", rel]);
    return new Promise((resolve) => {
      const cp = spawn(GXX, args, { cwd: dir, env: ENV });
      const chunks = [];
      cp.stderr.on("data", (d) => chunks.push(d));
      cp.stdout.on("data", () => {});
      cp.on("close", (code) => { results.push({ file: rel, code, err: Buffer.concat(chunks).toString("utf8") }); resolve(runOne()); });
      cp.on("error", (e) => { results.push({ file: rel, code: -1, err: String(e) }); resolve(runOne()); });
    });
  };
  return Promise.all(Array.from({ length: Math.min(jobs, files.length) }, runOne)).then(() => results.sort((a, b) => a.file.localeCompare(b.file)));
}

function parseTextErrors(results) {
  const errs = [];
  for (const r of results) {
    const before = errs.length;
    for (const line of r.err.split(/\r?\n/)) {
      const m = line.match(/^(.*?):(\d+):(\d+): (?:fatal )?error: (.*)$/);
      if (m) errs.push({ file: r.file, where: path.basename(m[1]) + ":" + m[2], msg: m[4] });
      else if (/(fatal error|internal compiler error|cc1plus\.exe: error|g\+\+\.exe: error)/.test(line)) errs.push({ file: r.file, where: "", msg: line.trim() });
    }
    if (r.code !== 0 && errs.length === before) errs.push({ file: r.file, where: "", msg: "compiler exited with code " + r.code + ": " + r.err.split(/\r?\n/).slice(0, 2).join(" | ") });
  }
  return errs;
}
// group messages by kind: identifiers, types and literals replaced by placeholders
const kindOf = (m) => m.replace(/'[^']*'/g, "'…'").replace(/\{+aka [^}]*\}+/g, "").replace(/\b\d+\b/g, "N").replace(/\s+/g, " ").slice(0, 150);
function summarize(errs) {
  const kinds = new Map();
  for (const e of errs) { const k = kindOf(e.msg); if (!kinds.has(k)) kinds.set(k, { n: 0, ex: e }); kinds.get(k).n++; }
  return [...kinds.entries()].sort((a, b) => b[1].n - a[1].n).map(([k, v]) => ({ count: v.n, kind: k, example: `${v.ex.file} ${v.ex.where}: ${v.ex.msg}`.slice(0, 400) }));
}

module.exports = { compileFiles, listFiles, parseTextErrors, summarize, kindOf, GXX, FLAGS };

if (require.main === module) {
  const argv = process.argv.slice(2);
  const dir = path.resolve(argv[0]);
  const opt = (k, d) => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : d; };
  const flag = (k) => argv.includes(k);
  const files = listFiles(dir, opt("--only", null));
  const obj = flag("--obj");
  if (obj) { fs.rmSync(path.join(dir, "obj"), { recursive: true, force: true }); for (const s of ["src", "lib"]) fs.mkdirSync(path.join(dir, "obj", s), { recursive: true }); }
  const t0 = Date.now();
  compileFiles(dir, files, { obj, jobs: +opt("--jobs", Math.max(1, os.cpus().length - 1)) }).then((results) => {
    const errs = parseTextErrors(results);
    const failed = new Set(errs.map((e) => e.file));
    const objects = obj ? files.filter((f) => fs.existsSync(path.join(dir, "obj", f.replace(/\.cpp$/, ".o")))).length : null;
    const report = {
      program: path.basename(dir), compiler: GXX, flags: FLAGS.concat(obj ? ["-c"] : ["-fsyntax-only"]),
      files: files.length, filesWithErrors: failed.size, errors: errs.length, objectFiles: objects, seconds: Math.round((Date.now() - t0) / 1000),
      errorKinds: summarize(errs), failedFiles: [...failed].sort(),
    };
    if (!opt("--only", null)) fs.writeFileSync(path.join(dir, "compile-report.json"), JSON.stringify(report, null, 1));
    console.log(`${report.program}: ${files.length} files, ${failed.size} with errors, ${errs.length} errors, ${report.seconds}s${obj ? ` (${objects} object files in obj/)` : " (syntax+semantics only)"}`);
    if (!flag("--quiet")) for (const k of report.errorKinds.slice(0, +opt("--show", 12))) console.log(`  ${String(k.count).padStart(5)}  ${k.kind}\n         e.g. ${k.example.slice(0, 260)}`);
    process.exitCode = errs.length ? 1 : 0;
  });
}

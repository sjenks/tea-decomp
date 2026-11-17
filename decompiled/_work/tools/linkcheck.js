// Try to link a program's object files, to state precisely what is missing for a runnable build.
// It is expected to fail: the tree declares its globals without defining them. Nothing is kept.
// Usage: node linkcheck.js <programDir>     (needs obj/ from `compile.js <programDir> --obj`)
const fs = require("fs");
const path = require("path");
const os = require("os");
const { spawnSync } = require("child_process");
const { GXX } = require("./compile");

const dir = path.resolve(process.argv[2]);
const objs = [];
for (const sub of ["src", "lib"]) { const d = path.join(dir, "obj", sub); if (fs.existsSync(d)) for (const f of fs.readdirSync(d)) if (f.endsWith(".o")) objs.push(`obj/${sub}/${f}`); }
if (!objs.length) { console.log("no object files: run compile.js --obj first"); process.exit(1); }
const rsp = path.join(os.tmpdir(), `tea-link-${process.pid}.rsp`);
const out = path.join(os.tmpdir(), `tea-link-${process.pid}.exe`);
fs.writeFileSync(rsp, objs.map((o) => `"${o}"`).join("\n"));
const env = { ...process.env, PATH: path.dirname(GXX) + ";" + process.env.PATH };
const r = spawnSync(GXX, ["@" + rsp, "-o", out, "-Wl,--allow-multiple-definition"], { cwd: dir, env, encoding: "utf8", maxBuffer: 1 << 28 });
fs.rmSync(rsp, { force: true });
fs.rmSync(out, { force: true });
const undef = new Map();
let multi = 0;
for (const line of (r.stderr || "").split(/\r?\n/)) {
  const m = line.match(/undefined reference to [`'](.+?)'/);
  if (m) undef.set(m[1], (undef.get(m[1]) || 0) + 1);
  if (/multiple definition of/.test(line)) multi++;
}
const names = [...undef.keys()];
const data = names.filter((n) => /(^|::)(_?DAT_|PTR_|LAB_|switchdataD_|s_|u_|IMAGE_|vftable|__entries|response_table)/.test(n)).length;
const report = {
  program: path.basename(dir), objects: objs.length, linked: r.status === 0, undefinedSymbols: names.length, undefinedReferences: [...undef.values()].reduce((a, b) => a + b, 0),
  undefinedData: data, undefinedOther: names.length - data,
  examples: names.filter((n) => /DAT_|vftable/.test(n)).slice(0, 2).concat(names.filter((n) => !/DAT_|PTR_|vftable|LAB_/.test(n)).slice(0, 4)).map((n) => n.replace(/^tea::/, "")),
};
fs.writeFileSync(path.join(dir, "link-report.json"), JSON.stringify(report, null, 1));
console.log(`${report.program}: ${objs.length} objects; link ${report.linked ? "SUCCEEDED" : "failed"}; ${report.undefinedSymbols} undefined symbols (${data} data/labels, ${report.undefinedOther} other) in ${report.undefinedReferences} references`);
console.log("  e.g. " + report.examples.join(", "));

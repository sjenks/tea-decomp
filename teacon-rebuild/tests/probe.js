// Ad-hoc probe: run both programs on one input and show both results with control characters visible.
//   node probe.js [--eol crlf|lf|none] [--args] [--dict name[;name]|none] [--max N] [--timeout ms] [--time]
//                 [switches...] -- pattern [pattern...]
// --args passes the patterns as command-line arguments instead of standard input; --time prints how
// long each program took; a program still running after --timeout (default 60000 ms) is stopped.
const path = require("path");
const { spawnSync } = require("child_process");
const ROOT = path.resolve(__dirname, "..", "..");
const ORIG = path.join(ROOT, "TEA Crossword Helper 2.11", "TEACON.exe");
const NEW = path.join(ROOT, "teacon-rebuild", "bin", "teacon.exe");
const DICTS = path.join(ROOT, "TEA Crossword Helper 2.11", "Dictionaries");
const argv = process.argv.slice(2);
const sep = argv.indexOf("--");
const head = sep >= 0 ? argv.slice(0, sep) : argv, patterns = sep >= 0 ? argv.slice(sep + 1) : [];
let eol = "crlf", asArgs = false, dict = "Core English", max = 12, limit = 60000, timing = false;
const switches = [];
for (let i = 0; i < head.length; i++) {
  if (head[i] === "--eol") eol = head[++i];
  else if (head[i] === "--timeout") limit = +head[++i];
  else if (head[i] === "--time") timing = true;
  else if (head[i] === "--args") asArgs = true;
  else if (head[i] === "--dict") dict = head[++i];
  else if (head[i] === "--max") max = +head[++i];
  else switches.push(head[i]);
}
const e = eol === "crlf" ? "\r\n" : eol === "lf" ? "\n" : "";
const input = asArgs ? "" : eol === "none" ? patterns.join("\n") : patterns.map((p) => p + e).join("");
const args = [...(dict === "none" ? [] : ["/D:" + dict.split(";").map((d) => path.join(DICTS, d + ".tsd")).join(";")]), ...switches, ...(asArgs ? patterns : [])];
const show = (s) => { const lines = s.split("\n"); const shown = lines.slice(0, max).map((l) => JSON.stringify(l)); return shown.join("\n") + (lines.length > max ? `\n… ${lines.length} lines` : ""); };
let same = true;
const res = [ORIG, NEW].map((exe) => { const t0 = Date.now(); const r = spawnSync(exe, args, { input: Buffer.from(input, "latin1"), encoding: "buffer", maxBuffer: 1 << 30, timeout: limit }); return { code: r.error && r.error.code === "ETIMEDOUT" ? `none (stopped after ${limit} ms)` : r.status, out: r.stdout.toString("latin1"), err: r.stderr.toString("latin1"), ms: Date.now() - t0 }; });
if (timing) console.log(`original ${res[0].ms} ms, rebuild ${res[1].ms} ms`);
same = res[0].code === res[1].code && res[0].out === res[1].out && res[0].err === res[1].err;
["original", "rebuild"].forEach((name, i) => { if (i === 1 && same) return; console.log(`== ${name}${same ? " (rebuild identical)" : ""}: exit ${res[i].code}`); console.log(show(res[i].out)); if (res[i].err) console.log("-- stderr\n" + show(res[i].err)); });

// Cross-binary function matching on position-independent fingerprints.
//  - reports where shared (library) code begins in each binary
//  - propagates names between binaries for 1:1 fingerprint matches
// Usage: node xmatch.js <seedsDir> <NameA> <NameB> ...   (expects <Name>.hashes.json and <Name>.symbols.json)
const fs = require("fs");
const path = require("path");
const [seedsDir, ...names] = process.argv.slice(2);
const MIN = 24; // ignore tiny bodies: too many coincidental duplicates
const H = {}, S = {};
for (const n of names) {
  H[n] = JSON.parse(fs.readFileSync(path.join(seedsDir, n + ".hashes.json"), "utf8"));
  S[n] = JSON.parse(fs.readFileSync(path.join(seedsDir, n + ".symbols.json"), "utf8"));
}
const index = {};
for (const n of names) { index[n] = new Map(); for (const [a, v] of Object.entries(H[n])) { if (v.n < MIN) continue; if (!index[n].has(v.h)) index[n].set(v.h, []); index[n].get(v.h).push(+a); } }

const hx = (a) => "0x" + (+a).toString(16).padStart(8, "0");
for (const n of names) {
  const addrs = Object.keys(H[n]).map(Number).sort((a, b) => a - b);
  // shared = fingerprint present in at least one other binary
  const shared = addrs.map((a) => { const v = H[n][a]; return v.n >= MIN && names.some((o) => o !== n && index[o].has(v.h)); });
  // library start: first address after which >= 70% of sizeable functions are shared (suffix scan)
  let cut = null, sh = 0, tot = 0;
  const big = addrs.map((a) => H[n][a].n >= MIN);
  const suffix = new Array(addrs.length + 1).fill(null);
  for (let i = addrs.length - 1; i >= 0; i--) { if (big[i]) { tot++; if (shared[i]) sh++; } suffix[i] = tot ? sh / tot : 0; }
  // choose the earliest i where the suffix ratio is high AND the preceding window is mostly unshared
  for (let i = 0; i < addrs.length; i++) {
    if (!shared[i] || suffix[i] < 0.6) continue;
    let w = 0, ws = 0;
    for (let j = i; j < Math.min(addrs.length, i + 30); j++) if (big[j]) { w++; if (shared[j]) ws++; }
    if (w >= 10 && ws / w >= 0.7) { cut = addrs[i]; break; }
  }
  const total = big.filter(Boolean).length, sharedN = shared.filter(Boolean).length;
  console.log(`${n}: ${addrs.length} functions, ${sharedN}/${total} sizeable ones have an identical body in another program`);
  S[n]._sharedStart = cut;

  // propagate names: 1:1 fingerprint matches only
  const out = [];
  for (const a of addrs) {
    const v = H[n][a];
    if (v.n < MIN || index[n].get(v.h).length !== 1) continue;
    if (S[n].functions[a] && S[n].functions[a].priority >= 10) continue; // already hand-named here
    let best = null;
    for (const o of names) {
      if (o === n) continue;
      const m = index[o].get(v.h);
      if (!m || m.length !== 1) continue;
      const s = S[o].functions[m[0]];
      if (!s) continue;
      // table-derived names are recomputed per binary; only original hand names travel (no chains)
      if (!/^(analysis|notes)/.test(s.source) || s.source.includes("(matched ")) continue;
      if (!best || s.priority > best.s.priority) best = { o, a: m[0], s };
    }
    if (best) out.push({ addr: hx(a), name: best.s.name, cls: best.s.cls, module: best.s.module, kind: best.s.kind, source: `${best.s.source} (matched ${best.o}.exe)`, note: `identical body to ${best.o}.exe ${hx(best.a)}.${best.s.note ? " " + best.s.note : ""}` });
  }
  // second pass: positional alignment. A hand-named function in another program whose body differs here
  // is paired by order when it sits between two identical-body neighbours and the number of functions
  // between those neighbours is the same in both programs (and sizes are comparable).
  const have = new Set(out.map((x) => parseInt(x.addr, 16)));
  let positional = 0;
  for (const o of names) {
    if (o === n) continue;
    const srcAddrs = Object.keys(H[o]).map(Number).sort((a, b) => a - b);
    const uniq = (a) => { const v = H[o][a]; if (v.n < MIN || index[o].get(v.h).length !== 1) return null; const m = index[n].get(v.h); return m && m.length === 1 ? m[0] : null; };
    const dstPos = new Map(addrs.map((a, i) => [a, i]));
    for (let i = 0; i < srcAddrs.length; i++) {
      const s = S[o].functions[srcAddrs[i]];
      if (!s || !/^(analysis|notes)/.test(s.source) || s.source.includes("matched ")) continue;
      if (uniq(srcAddrs[i]) !== null) continue; // exact match already handled
      let ip = -1, inx = -1;
      for (let j = i - 1; j >= Math.max(0, i - 8); j--) if (uniq(srcAddrs[j]) !== null) { ip = j; break; }
      for (let j = i + 1; j <= Math.min(srcAddrs.length - 1, i + 8); j++) if (uniq(srcAddrs[j]) !== null) { inx = j; break; }
      if (ip < 0 || inx < 0) continue;
      const dp = dstPos.get(uniq(srcAddrs[ip])), dn = dstPos.get(uniq(srcAddrs[inx]));
      if (dp === undefined || dn === undefined || dn <= dp) continue;
      if (inx - ip !== dn - dp) continue; // different number of functions in between
      const target = addrs[dp + (i - ip)];
      const a1 = H[o][srcAddrs[i]].n, a2 = H[n][target].n;
      if (Math.min(a1, a2) / Math.max(a1, a2) < 0.6) continue;
      if (have.has(target) || (S[n].functions[target] && S[n].functions[target].priority >= 10)) continue;
      have.add(target);
      positional++;
      out.push({ addr: hx(target), name: s.name, cls: s.cls, module: s.module, kind: s.kind, source: `${s.source} (position-matched ${o}.exe)`,
        note: (H[o][srcAddrs[i]].h === H[n][target].h
          ? `same masked bytes as ${o}.exe ${hx(srcAddrs[i])} (${a1} bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.`
          : `paired with ${o}.exe ${hx(srcAddrs[i])} by position between identical neighbours; the bodies differ (${a1} vs ${a2} bytes), so treat the name as probable.`) + (s.note ? " " + s.note : "") });
    }
  }
  fs.writeFileSync(path.join(seedsDir, n + ".propagated.json"), JSON.stringify(out, null, 1));
  console.log(`   propagated hand-assigned names into ${n}: ${out.length} (${positional} by position)`);
}
fs.writeFileSync(path.join(seedsDir, "shared-start.json"), JSON.stringify(Object.fromEntries(names.map((n) => [n, S[n]._sharedStart ? hx(S[n]._sharedStart) : null])), null, 1));

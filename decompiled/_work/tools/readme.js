// Write decompiled/README.md and decompiled/<exe>/README.md from the generated summaries and evidence.
// Usage: node readme.js <decompiledDir> <workDir> NAME...
const fs = require("fs");
const path = require("path");
const [D, W, ...names] = process.argv.slice(2);
const readJson = (f, d = null) => { try { return JSON.parse(fs.readFileSync(f, "utf8")); } catch { return d; } };
const S = {}, C = {}, R = {}, K = {};
for (const n of names) {
  S[n] = readJson(path.join(D, n, "summary.json"));
  C[n] = readJson(path.join(D, n, "compile-report.json"));
  R[n] = readJson(path.join(D, n, "repairs.json"), { total: 0, kinds: {}, files: {} });
  K[n] = readJson(path.join(D, n, "link-report.json"));
}
const ev = (n, op) => readJson(path.join(W, "evidence", `${n}.${op}.json`));
const pct = (a, b) => (b ? ((100 * a) / b).toFixed(1) + "%" : "-");
const kv = (file) => { try { const l = fs.readFileSync(file, "utf8").split("\n").find((x) => x.startsWith("summary")); return Object.fromEntries(l.split("\t").slice(1).map((x) => x.split("="))); } catch { return {}; } };
const prep = (n) => kv(path.join(W, "seeds", `${n}.prepare-report.txt`));
const commit = (n) => kv(path.join(W, "seeds", `${n}.commit-report.txt`));
const failed = (n) => { try { return fs.readFileSync(path.join(D, "raw", n, "decompile-journal.jsonl"), "utf8").split("\n").filter((l) => l.includes('"status":"failed"')).map((l) => JSON.parse(l)); } catch { return []; } };
const DESC = { TEA: "main GUI program (OWL)", TEACON: "console version", TSBuild: "dictionary builder (OWL)", TSMerge: "word-list merge tool (OWL)" };
const compiled = (n) => (C[n] ? `${C[n].files} files, ${C[n].errors} errors` : "not checked");
const REPAIR = [
  [/cannot convert/, "explicit pointer cast added — `(T *)expr`"],
  [/cannot be used as a function|invalid type argument of unary/, "call through a data-typed pointer — `((code *)p)(…)`"],
  [/void value not ignored/, "call whose declared result is `void` but whose value is used — `((code *)f)(…)`"],
  [/read-only/, "write through a `const` pointer — `GH_WRITABLE(…)`"],
  [/incompatible types in assignment|invalid array assignment/, "value assigned to an array-typed local — `GH_SET(…)`"],
  [/casting to an array type/, "cast to an array type removed"],
];
const repairRows = (kinds) => {
  const rows = new Map();
  for (const [k, n] of Object.entries(kinds || {})) { const r = REPAIR.find(([re]) => re.test(k)); const label = r ? r[1] : k; rows.set(label, (rows.get(label) || 0) + n); }
  return [...rows.entries()].sort((a, b) => b[1] - a[1]);
};

// ---------------- per-program README ----------------
for (const n of names) {
  const s = S[n], f = failed(n), cm = commit(n);
  const sym = readJson(path.join(W, "seeds", `${n}.symbols.json`));
  const isLib = (c) => /^(OWL::|std::|__rwstd::|_)/.test(c) || ["TThunkAllocator", "TInstanceThunk", "type_info_hash"].includes(c);
  const app = sym.classes.filter((c) => !isLib(c.name)).sort((a, b) => a.name.localeCompare(b.name));
  const L = [];
  L.push(`# ${n}.exe — ${DESC[n] || ""}`, "");
  L.push(`SHA-256 \`${s.sha256}\``, "");
  L.push("| | |", "|---|---|");
  L.push(`| Functions decompiled | ${s.functions}${f.length ? ` (+${f.length} that Ghidra could not decompile, listed below)` : ""} |`);
  L.push(`| Application functions (\`src/\`) | ${s.appFunctions}, of which ${s.appNamed} have a recovered name (${pct(s.appNamed, s.appFunctions)}) |`);
  L.push(`| Runtime / library functions (\`lib/\`) | ${s.libFunctions} |`);
  L.push(`| **Compiles** | **${compiled(n)}**${C[n] && C[n].objectFiles !== null ? ` — ${C[n].objectFiles} object files produced` : ""} |`);
  L.push(`| Mechanical repairs needed for C++ | ${R[n].total} in ${Object.keys(R[n].files).length} files |`);
  if (K[n]) L.push(`| Links into a program | no — ${K[n].undefinedSymbols} symbols undefined${K[n].examples && K[n].examples.length ? ` (e.g. \`${K[n].examples.slice(0, 3).join("`, `")}\`)` : ""} |`);
  if (s.variables) L.push(`| Variables (parameters and locals) | ${s.variables.declared}; ${s.variables.hand} named by hand, ${s.variables.rule} by rule, ${s.variables.genericLeft} still with Ghidra's storage name. In \`src/\`: ${s.variables.src.declared}, of which ${s.variables.src.genericLeft} keep a storage name (${pct(s.variables.src.declared - s.variables.src.genericLeft, s.variables.src.declared)} named) |`);
  L.push(`| Globals declared in \`decomp.h\` | ${s.globalsDeclared} |`);
  L.push(`| Classes recovered from RTTI | ${s.classes} (${s.appClasses} application classes) |`);
  L.push(`| OWL response tables (message maps) | ${s.responseTables}${s.responseTables ? `, ${s.responseTablesOwned} tied to their class` : ""} |`);
  L.push(`| Code section covered by functions | ${pct(s.bytesInFunctions, s.textBytes)} of ${s.textBytes} bytes (the remainder is RTTI/exception tables and padding stored in the code section, plus any code never referenced) |`);
  L.push(`| Functions the default analysis missed, recovered here | ${s.definedByTables} from RTTI/vtable/response tables, ${s.definedByPrologueScan} from the prologue scan |`);
  if (cm.committed) L.push(`| Signatures committed in Ghidra | ${cm.committed}; ${cm.void_widened_to_value} recovered as \`void\` were given a 4-byte result because a caller uses it |`);
  L.push(`| Library code starts at | ${s.libStart || "n/a"} |`, "");
  const rr = repairRows(R[n].kinds);
  if (rr.length) { L.push("## Repairs made so the pseudocode is valid C++", "", "Each was applied at a location the compiler reported, in a fixed way; see ../README.md.", "", "| repair | count |", "|---|---|"); for (const [k, v] of rr) L.push(`| ${k} | ${v} |`); L.push(""); }
  if (C[n] && C[n].errors) { L.push("## Remaining compile errors", "", "| count | kind | example |", "|---|---|---|"); for (const k of C[n].errorKinds) L.push(`| ${k.count} | ${k.kind.replace(/\|/g, "\\|")} | \`${k.example.replace(/\|/g, "\\|").replace(/`/g, "'").slice(0, 160)}\` |`); L.push(""); }
  L.push("## Name sources", "", "| source tag | functions |", "|---|---|");
  for (const [k, v] of Object.entries(s.nameSources).sort((a, b) => b[1] - a[1])) L.push(`| ${k} | ${v} |`);
  L.push("", "Every renamed variable, with the rule or hand assignment behind it, is listed in [varnames.tsv](varnames.tsv).");
  L.push("", "## Application modules (`src/`)", "", "| file | functions | named | address range |", "|---|---|---|---|");
  for (const m of s.modules) L.push(`| [${m.file}](${m.file}) | ${m.functions} | ${m.named} | ${m.from} – ${m.to} |`);
  L.push("", `## Application classes (${app.length})`, "", "Members, vtables and message maps for every class are in [classes.md](classes.md).", "", "| class | size | bases | vtable slots | message-map entries |", "|---|---|---|---|---|");
  for (const c of app) {
    const tabs = sym.responseTables.filter((t) => t.owner === c.name).reduce((a, t) => a + t.rows.length, 0);
    L.push(`| \`${c.name.length > 70 ? c.name.slice(0, 67) + "…" : c.name}\` | ${c.size} | ${c.bases.map((b) => b.name).join(", ").slice(0, 60) || "—"} | ${c.vtables.reduce((a, v) => a + v.slots.length, 0) || "—"} | ${tabs || "—"} |`);
  }
  if (f.length) { L.push("", "## Functions Ghidra could not decompile", "", "They are declared in `decomp.h` (so calls to them compile) but have no body in the tree.", ""); for (const x of f) L.push(`- \`${x.address}\` (${x.body.ranges.map((r) => r.start + "–" + r.end).join(", ")}): ${String(x.reason).trim()}`); }
  L.push("", "Other files: [decomp.h](decomp.h) (every prototype and global), [symbols.tsv](symbols.tsv) (address → name → name in code → file), [resources/](resources/) (menus, dialogs, strings, version info as a compilable `.rc`), `summary.json`, `compile-report.json`, `repairs.json`.", "");
  fs.writeFileSync(path.join(D, n, "README.md"), L.join("\n"));
}

// ---------------- top-level README ----------------
const L = [];
const totFiles = names.reduce((a, n) => a + (C[n] ? C[n].files : 0), 0), totErr = names.reduce((a, n) => a + (C[n] ? C[n].errors : 0), 0), totRep = names.reduce((a, n) => a + R[n].total, 0);
L.push("# TEA Crossword Helper 2.11 — decompiled", "");
L.push("Readable decompilation of the four programs in `TEA Crossword Helper 2.11/`: Ghidra decompiler pseudocode with recovered names, grouped into one file per class.", "");
L.push(`**It compiles, and it is not a working rebuild.** All ${totFiles} source files compile to object files with ${totErr} errors under 32-bit GCC. The objects do not link into a runnable program, and the code is the decompiler's reading of the machine code, not the original source. Both points are explained below.`, "");
L.push("There are programs you can run, written by hand from this tree and checked against the originals: [`../teacon-rebuild`](../teacon-rebuild/README.md) reimplements the console version `TEACON.exe`, and [`../tea-rebuild`](../tea-rebuild/README.md) the window program `TEA.exe`.", "");
L.push("| program | role | functions | app functions (named) | app classes | compiles | start here |", "|---|---|---|---|---|---|---|");
for (const n of names) { const s = S[n]; L.push(`| \`${n}.exe\` | ${DESC[n] || ""} | ${s.functions} | ${s.appFunctions} (${s.appNamed}) | ${s.appClasses} | ${compiled(n)} | [${n}/README.md](${n}/README.md) |`); }
L.push("", "All four are 32-bit Windows programs built with Borland C++ 5.x (runtime banner `Borland C++ - Copyright 1999 Inprise Corporation`); three use the OWL framework, statically linked. None is packed.", "");
L.push("## Layout", "", "```", "decompiled/", "  ghidra.h           types and pseudo-operations Ghidra's output uses (undefined4, CONCAT31, …)", "  <Program>/", "    README.md        module and class index, compile status", "    src/             application code, one file per class/module, functions in address order", "    lib/             statically linked runtime (Borland RTL, STL, OWL) — mostly unnamed", "    decomp.h         a prototype for every function and a declaration for every global", "    classes.md       every class from RTTI: size, bases, members, vtable, message map", "    symbols.tsv      address -> name -> name in code -> class -> name source -> file", "    resources/       menus, dialogs, string table, accelerators, version info as a compilable .rc", "  raw/               unmodified Ghidra output, one file per function address (source of src/ and lib/)", "  raw-rea-default/   REA `decompile-all` exports from Ghidra's default analysis (TEACON, TEA) — baseline", "  ghidra-project/    the analysed Ghidra project (open tea.gpr in Ghidra to browse interactively)", "  _work/             scripts, hand-assigned names, intermediate data, REA evidence JSON, backups", "```", "");

L.push("## Compiling", "");
L.push("```", "node _work/tools/compile.js TEACON          # type-check every file, write TEACON/compile-report.json", "node _work/tools/compile.js TEACON --obj    # also produce object files in TEACON/obj/", "```", "");
L.push("or by hand, from a program's folder, with the compiler in `../../_tools/mingw/mingw32/bin`:", "", "```", "g++ -std=gnu++17 -fpermissive -w -c src/MatchEngine.cpp", "windres -i resources/TEA.rc -O coff -o TEA.res", "```", "");
L.push("The compiler is MinGW-w64 GCC 16.2 targeting 32-bit x86. Three things about that command matter:", "");
L.push("- **32-bit target.** The pseudocode keeps pointers in `int` and does arithmetic on them. A 64-bit compiler rejects it.");
L.push("- **`-fpermissive`.** Integer↔pointer and `void *` conversions without a cast are accepted as GCC extensions. Ghidra writes them constantly; adding a cast at each would bury the code. Conversions between *unrelated pointer types* are errors even so, and those are the ones that were repaired (next section).");
L.push("- **`-w`.** Warnings are off. With them on, each file produces hundreds: uninitialised register variables (`in_EAX`, `unaff_ESI`), missing returns, sign mismatches. They are accurate descriptions of decompiler output, not defects to fix.", "");
L.push("### What had to change for it to compile", "");
L.push("1. **Signatures were made authoritative in Ghidra** (`TeaCommit.java`). By default the decompiler re-derives arguments and return-value use at every call site, so a function printed as `void f(void)` could be called elsewhere as `x = f(a, b)`. Each function's recovered parameters and return type are now committed, so definitions and calls agree. A function recovered as `void` whose result a caller uses was given a 4-byte result. This changed the pseudocode of some functions relative to the first version of this tree" + (() => { const d = readJson(path.join(W, "evidence", "signature-commit-diff.json")); return d ? " (" + d.map((x) => `${x.program}: ${x.changed} of ${x.total}`).join("; ") + ")" : ""; })() + ".");
L.push("2. **Names became identifiers.** `MatchEngine::Compile` is kept as written: each class is a *namespace* holding its functions, because the binary has no type information from which real class definitions could be rebuilt. Destructors are `Class::_dtor`; template instances are folded into one identifier (`std::vector_MatchEngine_ptr`). Each function's header comment still shows the display name. Everything sits in `namespace tea` so that names recovered for the statically linked runtime (`strlen`, `malloc`, `std::string::append`) cannot collide with the real ones.");
L.push("3. **Everything is declared** in `<Program>/decomp.h`: one prototype per function, one declaration per global, with the type most functions use for it. A function that uses a global at a different type reads it through a cast, `(*(T *)&DAT_…)`.");
L.push("4. **String labels became literals** (`s_Pattern_error___s_0042abc4` → `\"Pattern error: %s\\n\"`), read from the image.");
L.push(`5. **${totRep} mechanical repairs** where Ghidra's loose type model is not valid C++. Each was applied at a source range the compiler reported, in one of these fixed ways (\`_work/tools/fixcasts.js\`); nothing else in the text was touched:`, "");
{
  const all = {};
  for (const n of names) for (const [k, v] of Object.entries(R[n].kinds || {})) all[k] = (all[k] || 0) + v;
  L.push("   | repair | count |", "   |---|---|");
  for (const [k, v] of repairRows(all)) L.push(`   | ${k} | ${v} |`);
  L.push("");
}
L.push("6. **Windows API calls** resolve to the SDK's declarations. Each API's import stub (the `jmp` through the import table) is in `lib/` as `import_<Name>`. Where Ghidra has no prototype for an API, it shows the call without arguments; those calls go to the stub, declared variadic.", "");
L.push("### Why it still is not a working program", "");
L.push("- **It does not link.** No data sections are emitted: globals are declared, not defined, and their initial contents (tables, vtables, strings referenced by address) stay in the original image. " + (names.filter((n) => K[n]).length ? names.filter((n) => K[n]).map((n) => `\`${n}\`: ${K[n].undefinedSymbols} undefined symbols at link`).join("; ") + "." : ""));
L.push("- **Arguments in registers are partly lost.** Borland's register convention and OWL's `this`-in-register calls leave values the decompiler shows as `in_EAX` / `extraout_ECX` rather than as parameters.");
L.push("- **Calls through vtables and callbacks are untyped** (`(**(code **)(*param_1 + 0x14))()`), with whatever arguments the decompiler saw.");
L.push("- **The runtime is Borland's.** `lib/` is a decompilation of its RTL and OWL, including structured-exception plumbing that cannot be expressed in C++. A real rebuild would replace `lib/` with a modern runtime and rewrite `src/` against it by hand.");
L.push("- **Some instructions have no C form** and appear as calls to declared-but-undefined helpers (`halt_baddata`, `LOCK`, `swi`).", "");

L.push("## How to read the output", "");
L.push("Every function is headed by a line such as", "", "```", "// 0x0040d73c  MatchEngine::MatchWord   (262 bytes)   [analysis]", "```", "", "The tag in brackets says where the **name** came from, which is also how much to trust it:", "");
L.push("| tag | meaning | reliability |", "|---|---|---|");
L.push("| `rtti:dtor` | destructor address stored in the class's Borland type descriptor | read from the binary |");
L.push("| `rtti:vtable` | function is slot N of that class's vtable (or of its TWindow-subobject vtable); named after the slot's method where that is known, else `Class::vfN` | class and slot are read from the binary; slot names as described below |");
L.push("| `rtti:vtable-store` | constructor: stores the class's vtable at its vptr offset in `this` | read from the binary |");
L.push("| `owl:response-table` | handler listed in an OWL message map; named from the Windows message (`EvPaint`) or the menu caption of its command id (`CmFileOpen`) | message/command id read from the binary; the identifier is a reconstruction in OWL's naming style |");
L.push("| `analysis` | named after reading the decompiled code | my judgement; the header line gives the reason |");
L.push("| `analysis (usage pattern)` | runtime-library function recognised by how it is called (`operator_new`, `memcpy`, …) | likely; \"less certain\" is marked where it applies |");
L.push("| `notes…` | name taken from the reverse-engineering notes supplied for this task; `notes+analysis` means I also read the code, plain `notes` means only the entry point was checked | as stated per function |");
L.push("| `… (matched X.exe)` | name carried over from another of the four programs because the function bodies are identical once addresses are masked | as reliable as the original name |");
L.push("| `… (position-matched X.exe)`, `… by position and size` | carried over where the bodies differ but the function sits in the same position between identical neighbours, with a comparable size | probable; the header line says so |");
L.push("| `unnamed` | still `FUN_<address>` | — |", "");
L.push("### Variable, member and method names", "");
L.push("Ghidra names variables after their storage (`param_1`, `local_28`, `iVar3`). They are renamed per function, in this order of trust (`_work/tools/varnames.js`; every rename and its reason is in `<Program>/varnames.tsv`):", "");
L.push("1. **Hand-assigned** names (`_work/manual/<Program>.vars.json`), written after reading the function, and carried to the other programs where the body is byte-for-byte the same (or where a position-matched counterpart declares exactly the same variables).");
L.push("2. **Rules** that recognise what a variable is from how it is used: `self` for `this` in member functions, `dtorFlags`, Borland exception-frame slots (`sehChainHead`, `sehPrevFrame`, `ehContext`, `ehDtorCount`), the inlined reference-counted `std::string` code (`str`, `strRep`, `refs`, `len`, `newRep`, `prevRefs`), dead stores (`unused`), loop indexes, Win32 struct and handle types (`rect`, `findData`, `hWnd`), objects whose vtable is stored (`lengthError`), upper register bytes (`regHigh`).");
L.push("3. **Names carried between functions**: an argument passed to a parameter that has a name takes it (Windows API parameter names count: `lpFileName` becomes `fileName`), an object passed as `this` is named after its class, and a variable that only holds one named function's result is named after it (`GetCount` gives `count`).", "");
L.push("Variables nothing identifies keep Ghidra's name, mostly in `lib/`, the statically linked runtime.", "");
L.push("**Members** have no names in the binary. For the classes in `_work/manual/<Program>.fields.json` each known offset is a named constant of the class in `decomp.h` (`MatchEngine::m_opCount = 0x1148`), and member functions read `*(int *)(self + m_opCount)` instead of `*(int *)(self + 0x1148)`.", "");
L.push("**Constructors** are found by the vtable they store at the class's vptr offset (tag `rtti:vtable-store`). **Virtual methods** get real names where the slot is known: OWL `TWindow`'s 34 slots were identified from TWindow's own implementations (slot 3 registers the WNDCLASS, 5 calls CreateWindowExA, 29 returns \"OWL_Window\") and from the slots its message handlers call (EvPaint calls 21, `Paint`; EvCreate calls 30, `SetupWindow`); `TListBox`/`TComboBox`/`TEdit` slots from the message each sends; the dialog base `PropertiesViewWindows`'s own slots from what the controls call (`OnButton`, `OnEditChange`, ...). Overrides of `TWindow` virtuals in window classes are found through the vtable of each class's `TWindow` virtual-base subobject, which has no RTTI prefix and is located by shape. A slot whose meaning was not established keeps `vfN` (or a name that says so).", "");
L.push("Things that are **inferred, not observed**:", "");
L.push("- **File grouping.** The binaries carry no file names. Functions are grouped under the class of the nearest preceding function whose class is known (address order approximates source order within a Borland object file). Each function says `file placement: inferred …` when it has no class evidence of its own. Addresses are always shown, so the true neighbours are never hidden.");
L.push("- **Class members.** `classes.md` lists only members that have destructors — that is all the RTTI records. Plain fields appear as `this + 0x…` offsets, named (`m_…`) only for the classes that were analysed.");
L.push("- **Types** are Ghidra's (`undefined4`, `int` for pointers). Parameter and local names are recovered as described above; member functions take `this` as their first parameter, named `self`.");
L.push("- **Static analysis only.** Nothing here was run or observed at run time. Compiling the tree checks that it is well-formed, not that it behaves like the original.", "");

L.push("## How it was produced", "");
L.push("1. **Identification** (REA, no engine): PE imports, resources, entropy and hardening for each program. Evidence IDs are in the table below; the JSON is in `_work/evidence/`.");
L.push("2. **Baseline decompile** (REA `decompile-all`, Ghidra 12.1.4, compiler spec `borlandcpp` auto-detected): TEACON.exe and TEA.exe → `raw-rea-default/`.");
L.push("3. **Table mining** (`_work/tools/borland-rtti.js`): Borland type descriptors, vtables and OWL response tables parsed straight from the PE image.");
L.push("4. **Prepared Ghidra project** (`_work/ghidra-scripts/TeaPrepare.java`): every table-proven code address and every unclaimed 4-byte-aligned `push ebp; mov ebp,esp` is made a function, because Ghidra's default analysis does not follow pointers held in Borland RTTI.");
L.push("5. **Signature commit** (`TeaCommit.java`): see *What had to change for it to compile*. The project as it was before this step is kept in `_work/backup/`.");
L.push("6. **Export** (`TeaExport.java`) from that project → `raw/`, with each function's prototype and the type of every global it names. REA cannot reuse an existing Ghidra project on Windows (it reports this as Linux/macOS only), so this step calls Ghidra's decompiler directly.");
L.push("7. **Naming, grouping, declarations** (`names.js`, `xmatch.js`, `organize.js`): symbol database, cross-program fingerprint matching, then `src/`, `lib/`, `decomp.h`, `classes.md`.");
L.push("8. **Repair and compile** (`probe-imports.js`, `fixcasts.js`, `compile.js`) with the GCC in `../_tools/mingw`.", "");
const x = (() => { try { return fs.readFileSync(path.join(W, "evidence", "crosscheck.txt"), "utf8").trim(); } catch { return null; } })();
if (x) L.push("Cross-check of the direct export against REA's (step 2), made **before** step 5: " + x + " That pre-commit export is kept in `_work/backup/raw-before-signature-commit/`. After step 5 more functions differ from REA's output, by design.", "");
L.push("| program | SHA-256 | functions before → after step 4 | REA evidence (imports / resources / entropy / hardening / decompile-all) |", "|---|---|---|---|");
for (const n of names) {
  const p = prep(n);
  const ids = ["inspect-pe-imports", "inspect-pe-resources", "inspect-byte-entropy", "inspect-binary-hardening", "decompile-all"].map((op) => { const e = ev(n, op); return e && e.evidence_id ? "`" + e.evidence_id.slice(0, 15) + "…`" : "—"; });
  L.push(`| \`${n}.exe\` | \`${S[n].sha256.slice(0, 16)}…\` | ${p.functions_before || "?"} → ${p.functions_after || "?"} | ${ids.join(" / ")} |`);
}
L.push("");
L.push("## Reconciling the supplied notes", "");
L.push("The reverse-engineering notes supplied with this task (binary internals and `.tsd` format) were used as leads and checked against these binaries:", "");
L.push("- **Object sizes agree exactly**: `InputEngine` 18,444 bytes (0x480c) and `MatchEngine` 4,432 bytes (0x1150) in the RTTI of both TEA.exe and TEACON.exe.");
L.push("- **Function addresses given for TEACON.exe that are real function entries there**: 0x41130c, 0x41204c, 0x40c468, 0x406a2c, 0x409c78, 0x40a218, 0x40dc80, 0x40dca0, 0x40dd14, 0x40dd78, 0x40e430, 0x40e480, 0x40e5b4, 0x40e79c, 0x40ea58, 0x40eb20, 0x40d844. Each is named accordingly in `TEACON/src/`.");
L.push("- **Addresses the notes attribute to TEACON.exe that are actually TEA.exe addresses**: 0x412000 (boolean VM; with 0x4120a4 and 0x4120e3–0x412107 inside it), 0x41217c (file open / handle stealing), 0x41229c (link group index), 0x4122bc (annotation). In TEACON.exe the same functions are at 0x40a09c, 0x40a218 and 0x40a338; no counterpart of 0x41229c was identified in TEACON.exe.");
L.push("- **TEA.exe addresses confirmed as function entries**: 0x40e5e0, 0x410788, 0x40c84c, 0x40ca04, 0x408ef4, 0x410420, 0x410568, 0x4105bc, 0x410628, 0x410704, 0x448c4c, 0x4304f0, 0x4309cc.");
L.push("- **Not resolved**: 0x40dd40 (\"MatchGeneralAnagram\") lies inside `MatchEngine::MatchMultiAnagram` (0x40dd14–0x40dd76) in TEACON.exe and no function starts there; 0x44805c (\"WordListMap\") in TEA.exe is not inside any function Ghidra defined; 0x409864, 0x40ebd0 and 0x431060 are range end-points that fall between functions (0x431060 is a type descriptor).");
L.push("- Functions named `notes` (without `+analysis`) carry the notes' description on trust: the entry point was checked, the body was not read.", "");
L.push("## Known gaps", "");
const tot = names.reduce((a, n) => a + S[n].functions, 0), named = names.reduce((a, n) => a + S[n].named, 0);
if (totErr) L.push(`- **${totErr} compile errors remain**; they are listed by kind in each program's README.`);
L.push(`- **${tot - named} of ${tot} functions are still unnamed**, most of them in the statically linked libraries. Ghidra ships no signature database for Borland's RTL or OWL, so library functions are named only where a class table or a usage pattern identified them.`);
L.push(`- **Some virtual methods are still \`vfN\`**: slots of OWL classes other than TWindow, TListBox, TComboBox and TEdit (TScroller, TApplication, TDecoratedFrame, ...) and a few application slots. ${names.map((n) => S[n].appFunctions - S[n].appNamed).reduce((a, b) => a + b, 0)} application functions keep Ghidra's FUN_ name.`);
L.push("- **Most library variables keep Ghidra's names**, and most members of the GUI classes are still offsets: hand-naming covered the application code and the engine classes.");
for (const n of names) { const f = failed(n); if (f.length) L.push(`- **${n}.exe: ${f.length} tiny library functions failed in Ghidra's decompiler** (${f.map((y) => "`" + y.address + "`").join(", ")}); they are declared but have no body, and are listed in ${n}/README.md.`); }
L.push("- **Frameless functions that nothing references** are not found by the prologue scan and would be missing. Code-section coverage per program is in each README.");
L.push("- **Some response-table handlers are named generically** (`EvRegisteredMsg_…`, `Cmd<id>`, `Child<id>_Notify<code>`, `CmShared_…`, `CeRange<a>to<b>`): message id 0 in the static table, command ids with no menu caption, control notifications, and handlers bound to several commands at once.");
L.push("- **Bitmaps, icons and cursors are not extracted**; the `.rc` files list them in comments.", "");
L.push("## Extending it", "");
L.push("Add or correct names in `_work/manual/<Program>.json` (functions, globals, vtable slots), `<Program>.vars.json` (variables) and `<Program>.fields.json` (members); `node _work/tools/addnames.js <Program> file` takes a compact text form (`fn`, `v`, `data`, `slot`, `field` lines; see its header). `node _work/tools/readfn.js <Program> <addr>` prints a function with Ghidra's variable names beside the new ones, and `node _work/tools/status.js <Program>` shows what is still unnamed. Then:", "", "```", "_work/tools/build-all.sh                      # names, cross-program matching, src/ lib/ decomp.h, repairs", "for p in TEA TEACON TSBuild TSMerge; do node _work/tools/compile.js $p --quiet; done", "node _work/tools/readme.js . _work TEA TEACON TSBuild TSMerge", "```", "");
L.push("That regenerates everything from `raw/` and carries each hand-assigned name to the other programs wherever the same function appears. It needs the compiler in `../_tools/mingw` for the repair step (`GENFLAGS=--nofix` skips it, leaving a tree that reads the same but does not compile). Re-running Ghidra is only needed to change which functions exist or their signatures (`_work/tools/prepare.ps1`, `commit.ps1`, `export.ps1`); those need the JDK and Ghidra in `../_tools/`.", "");
fs.writeFileSync(path.join(D, "README.md"), L.join("\n"));
console.log("README written for", names.join(", "));

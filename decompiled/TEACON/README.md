# TEACON.exe — console version

SHA-256 `d4a30243fa47315ecd79278f862ac5a4706b023ca32d5f90d08020608bc69b1c`

| | |
|---|---|
| Functions decompiled | 825 |
| Application functions (`src/`) | 155, of which 153 have a recovered name (98.7%) |
| Runtime / library functions (`lib/`) | 670 |
| **Compiles** | **35 files, 0 errors** — 35 object files produced |
| Mechanical repairs needed for C++ | 85 in 14 files |
| Links into a program | no — 341 symbols undefined (e.g. `DAT_0042fab4`, `DAT_0042e763`, `_tls_index`) |
| Variables (parameters and locals) | 5631; 1143 named by hand, 2120 by rule, 2162 still with Ghidra's storage name. In `src/`: 2210, of which 10 keep a storage name (99.5% named) |
| Globals declared in `decomp.h` | 342 |
| Classes recovered from RTTI | 41 (10 application classes) |
| OWL response tables (message maps) | 0 |
| Code section covered by functions | 91.5% of 167936 bytes (the remainder is RTTI/exception tables and padding stored in the code section, plus any code never referenced) |
| Functions the default analysis missed, recovered here | 7 from RTTI/vtable/response tables, 1 from the prologue scan |
| Signatures committed in Ghidra | 747; 49 recovered as `void` were given a 4-byte result because a caller uses it |
| Library code starts at | 0x00414f4c |

## Repairs made so the pseudocode is valid C++

Each was applied at a location the compiler reported, in a fixed way; see ../README.md.

| repair | count |
|---|---|
| explicit pointer cast added — `(T *)expr` | 53 |
| value assigned to an array-typed local — `GH_SET(…)` | 11 |
| cast to an array type removed | 10 |
| call through a data-typed pointer — `((code *)p)(…)` | 9 |
| write through a `const` pointer — `GH_WRITABLE(…)` | 2 |

## Name sources

| source tag | functions |
|---|---|
| unnamed | 535 |
| analysis | 153 |
| rtti:dtor | 38 |
| rtti:vtable | 28 |
| notes+analysis | 18 |
| analysis (usage pattern) | 18 |
| rtti:vtable-store | 16 |
| analysis (matched TEACON.exe, duplicated code) | 8 |
| notes | 5 |
| analysis (usage pattern, less certain) | 3 |
| analysis (usage pattern) (matched TEA.exe) | 3 |

Every renamed variable, with the rule or hand assignment behind it, is listed in [varnames.tsv](varnames.tsv).

## Application modules (`src/`)

| file | functions | named | address range |
|---|---|---|---|
| [src/main.cpp](src/main.cpp) | 23 | 21 | 0x00401000 – 0x00411910 |
| [src/TSDictionaryList.cpp](src/TSDictionaryList.cpp) | 32 | 32 | 0x004051bc – 0x00407768 |
| [src/MatchEngine.cpp](src/MatchEngine.cpp) | 45 | 45 | 0x0040784c – 0x0040ebec |
| [src/InputEngine.cpp](src/InputEngine.cpp) | 7 | 7 | 0x00409a5c – 0x0040a338 |
| [src/VariableValues.cpp](src/VariableValues.cpp) | 8 | 8 | 0x0040d97c – 0x0040edbc |
| [src/Pattern.cpp](src/Pattern.cpp) | 5 | 5 | 0x0040dae0 – 0x0040dc68 |
| [src/TEAViewProfileWindows.cpp](src/TEAViewProfileWindows.cpp) | 2 | 2 | 0x0040f26c – 0x00411148 |
| [src/Persist.cpp](src/Persist.cpp) | 8 | 8 | 0x0041193c – 0x00411dd8 |
| [src/MatchEngineSet.cpp](src/MatchEngineSet.cpp) | 23 | 23 | 0x00411e94 – 0x00414ab4 |
| [src/Common.cpp](src/Common.cpp) | 2 | 2 | 0x00414ddc – 0x00414ea8 |

## Application classes (10)

Members, vtables and message maps for every class are in [classes.md](classes.md).

| class | size | bases | vtable slots | message-map entries |
|---|---|---|---|---|
| `Common` | 16 | — | — | — |
| `InputEngine` | 18444 | — | — | — |
| `MatchEngine` | 4432 | — | — | — |
| `MatchEngineSet` | 56 | — | — | — |
| `Pattern` | 4104 | — | — | — |
| `Persist` | 8 | — | — | — |
| `TEAViewProfileWindows` | 496 | — | — | — |
| `TSDictionaryList` | 40 | — | — | — |
| `TSDictionaryList::Dictionary` | 12200 | — | 11 | — |
| `VariableValues` | 11 | — | — | — |

Other files: [decomp.h](decomp.h) (every prototype and global), [symbols.tsv](symbols.tsv) (address → name → name in code → file), [resources/](resources/) (menus, dialogs, strings, version info as a compilable `.rc`), `summary.json`, `compile-report.json`, `repairs.json`.

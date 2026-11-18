# TSBuild.exe — dictionary builder (OWL)

SHA-256 `17654f120447e967b41e97b801f862ad0a780dde475b66b75003117c8639883a`

| | |
|---|---|
| Functions decompiled | 3029 (+3 that Ghidra could not decompile, listed below) |
| Application functions (`src/`) | 215, of which 213 have a recovered name (99.1%) |
| Runtime / library functions (`lib/`) | 2814 |
| **Compiles** | **192 files, 0 errors** — 192 object files produced |
| Mechanical repairs needed for C++ | 215 in 45 files |
| Links into a program | no — 1156 symbols undefined (e.g. `DictionaryMaintainer::vftable`, `DAT_00485bcc`, `_tls_index`) |
| Variables (parameters and locals) | 16752; 579 named by hand, 6964 by rule, 8090 still with Ghidra's storage name. In `src/`: 2583, of which 552 keep a storage name (78.6% named) |
| Globals declared in `decomp.h` | 1107 |
| Classes recovered from RTTI | 228 (8 application classes) |
| OWL response tables (message maps) | 22, 18 tied to their class |
| Code section covered by functions | 86.2% of 471040 bytes (the remainder is RTTI/exception tables and padding stored in the code section, plus any code never referenced) |
| Functions the default analysis missed, recovered here | 85 from RTTI/vtable/response tables, 21 from the prologue scan |
| Signatures committed in Ghidra | 2725; 123 recovered as `void` were given a 4-byte result because a caller uses it |
| Library code starts at | 0x00419e94 |

## Repairs made so the pseudocode is valid C++

Each was applied at a location the compiler reported, in a fixed way; see ../README.md.

| repair | count |
|---|---|
| explicit pointer cast added — `(T *)expr` | 155 |
| call through a data-typed pointer — `((code *)p)(…)` | 36 |
| value assigned to an array-typed local — `GH_SET(…)` | 11 |
| cast to an array type removed | 10 |
| write through a `const` pointer — `GH_WRITABLE(…)` | 2 |
| call whose declared result is `void` but whose value is used — `((code *)f)(…)` | 1 |

## Name sources

| source tag | functions |
|---|---|
| unnamed | 1697 |
| rtti:vtable | 602 |
| owl:response-table | 187 |
| rtti:dtor | 185 |
| rtti:vtable-store | 117 |
| analysis | 85 |
| analysis (matched TEACON.exe) | 38 |
| analysis (matched TEA.exe, duplicated code) | 36 |
| analysis (matched TEACON.exe, duplicated code) | 24 |
| analysis (matched TEA.exe) | 22 |
| analysis (usage pattern) (matched TEACON.exe) | 13 |
| analysis (position-matched TEA.exe) | 6 |
| analysis (usage pattern) (position-matched TEACON.exe) | 5 |
| analysis (position-matched TEACON.exe) | 4 |
| notes (matched TEA.exe, duplicated code) | 3 |
| analysis (usage pattern) (matched TEA.exe) | 3 |
| analysis (usage pattern, less certain) (position-matched TEACON.exe) | 1 |
| analysis (usage pattern, less certain) (matched TEACON.exe) | 1 |

Every renamed variable, with the rule or hand assignment behind it, is listed in [varnames.tsv](varnames.tsv).

## Application modules (`src/`)

| file | functions | named | address range |
|---|---|---|---|
| [src/DMDialog.cpp](src/DMDialog.cpp) | 63 | 61 | 0x00401000 – 0x0041740c |
| [src/DMApplication.cpp](src/DMApplication.cpp) | 9 | 9 | 0x00403778 – 0x00404158 |
| [src/DictionaryMaintainer.cpp](src/DictionaryMaintainer.cpp) | 21 | 21 | 0x00405f68 – 0x00415f14 |
| [src/OccurrenceListCache.cpp](src/OccurrenceListCache.cpp) | 88 | 88 | 0x00405ff4 – 0x00414a7c |
| [src/TSBuildProfile.cpp](src/TSBuildProfile.cpp) | 5 | 5 | 0x00415fb8 – 0x00416c8c |
| [src/TSDictionaryBuilderProgressBar.cpp](src/TSDictionaryBuilderProgressBar.cpp) | 14 | 14 | 0x004171b4 – 0x00419664 |
| [src/Persist.cpp](src/Persist.cpp) | 9 | 9 | 0x004198b4 – 0x00419bf0 |
| [src/Help.cpp](src/Help.cpp) | 6 | 6 | 0x00419d14 – 0x00419e8c |

## Application classes (8)

Members, vtables and message maps for every class are in [classes.md](classes.md).

| class | size | bases | vtable slots | message-map entries |
|---|---|---|---|---|
| `DictionaryMaintainer` | 4 | — | 5 | — |
| `DMApplication` | 119 | OWL::TApplication | 19 | — |
| `DMDialog` | 3616 | OWL::TDialog, DictionaryMaintainer | 20 | 13 |
| `Help` | 12 | — | — | — |
| `OccurrenceListCache` | 32 | — | — | — |
| `Persist` | 8 | — | — | — |
| `TSBuildProfile` | 80 | — | — | — |
| `TSDictionaryBuilderProgressBar` | 180 | OWL::TButton | 11 | — |

## Functions Ghidra could not decompile

They are declared in `decomp.h` (so calls to them compile) but have no body in the tree.

- `0x41d6cc` (0x41d6cc–0x41d6d6): Low-level Error: Cannot properly adjust input varnodes
- `0x421198` (0x421198–0x4211a3): Low-level Error: Cannot properly adjust input varnodes
- `0x4498f4` (0x4498f4–0x4498fe): Low-level Error: Cannot properly adjust input varnodes

Other files: [decomp.h](decomp.h) (every prototype and global), [symbols.tsv](symbols.tsv) (address → name → name in code → file), [resources/](resources/) (menus, dialogs, strings, version info as a compilable `.rc`), `summary.json`, `compile-report.json`, `repairs.json`.

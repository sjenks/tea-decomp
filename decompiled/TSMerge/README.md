# TSMerge.exe — word-list merge tool (OWL)

SHA-256 `1bb081e905800b5a000ca63af04de2d022c868b64d275fbb0922761f779fb35d`

| | |
|---|---|
| Functions decompiled | 2691 (+5 that Ghidra could not decompile, listed below) |
| Application functions (`src/`) | 116, of which 44 have a recovered name (37.9%) |
| Runtime / library functions (`lib/`) | 2575 |
| **Compiles** | **181 files, 0 errors** — 181 object files produced |
| Mechanical repairs needed for C++ | 179 in 42 files |
| Links into a program | no — 1087 symbols undefined (e.g. `DAT_00471d5c`, `DAT_00408678`, `DMDialog::__entries`) |
| Globals declared in `decomp.h` | 1040 |
| Classes recovered from RTTI | 211 (8 application classes) |
| OWL response tables (message maps) | 22, 18 tied to their class |
| Code section covered by functions | 86.1% of 393216 bytes (the remainder is RTTI/exception tables and padding stored in the code section, plus any code never referenced) |
| Functions the default analysis missed, recovered here | 85 from RTTI/vtable/response tables, 18 from the prologue scan |
| Signatures committed in Ghidra | 2392; 102 recovered as `void` were given a 4-byte result because a caller uses it |
| Library code starts at | 0x0040ef00 |

## Repairs made so the pseudocode is valid C++

Each was applied at a location the compiler reported, in a fixed way; see ../README.md.

| repair | count |
|---|---|
| explicit pointer cast added — `(T *)expr` | 126 |
| call through a data-typed pointer — `((code *)p)(…)` | 29 |
| value assigned to an array-typed local — `GH_SET(…)` | 11 |
| cast to an array type removed | 10 |
| write through a `const` pointer — `GH_WRITABLE(…)` | 2 |
| call whose declared result is `void` but whose value is used — `((code *)f)(…)` | 1 |

## Name sources

| source tag | functions |
|---|---|
| unnamed | 1763 |
| rtti:vtable | 557 |
| owl:response-table | 181 |
| rtti:dtor | 167 |
| analysis (usage pattern) (matched TEACON.exe) | 13 |
| analysis (usage pattern) (position-matched TEACON.exe) | 5 |
| analysis (matched TEACON.exe) | 3 |
| analysis (usage pattern, less certain) (position-matched TEACON.exe) | 1 |
| analysis (usage pattern, less certain) (matched TEACON.exe) | 1 |

## Application modules (`src/`)

| file | functions | named | address range |
|---|---|---|---|
| [src/DMProgressBar.cpp](src/DMProgressBar.cpp) | 10 | 2 | 0x00401000 – 0x004014b4 |
| [src/DMDialog.cpp](src/DMDialog.cpp) | 61 | 22 | 0x00401678 – 0x0040a884 |
| [src/DMApplication.cpp](src/DMApplication.cpp) | 9 | 8 | 0x00404128 – 0x00404a9c |
| [src/Abandon_exception.cpp](src/Abandon_exception.cpp) | 10 | 6 | 0x0040aae0 – 0x0040be50 |
| [src/TSMergeProfile.cpp](src/TSMergeProfile.cpp) | 12 | 2 | 0x0040bf28 – 0x0040e920 |
| [src/Persist.cpp](src/Persist.cpp) | 8 | 3 | 0x0040ea04 – 0x0040ec5c |
| [src/Help.cpp](src/Help.cpp) | 6 | 1 | 0x0040ed80 – 0x0040eef8 |

## Application classes (8)

Members, vtables and message maps for every class are in [classes.md](classes.md).

| class | size | bases | vtable slots | message-map entries |
|---|---|---|---|---|
| `Abandon_exception` | 4 | std::exception | 2 | — |
| `DMApplication` | 119 | OWL::TApplication | 19 | — |
| `DMDialog` | 3792 | OWL::TDialog, MergeClient | 18 | 17 |
| `DMProgressBar` | 180 | OWL::TButton | 11 | — |
| `Help` | 12 | — | — | — |
| `MergeClient` | 4 | — | 2 | — |
| `Persist` | 8 | — | — | — |
| `TSMergeProfile` | 72 | — | — | — |

## Functions Ghidra could not decompile

They are declared in `decomp.h` (so calls to them compile) but have no body in the tree.

- `0x4125b0` (0x4125b0–0x4125b7): Low-level Error: Cannot properly adjust input varnodes
- `0x416174` (0x416174–0x41617e): Low-level Error: Cannot properly adjust input varnodes
- `0x42111c` (0x42111c–0x421126): Low-level Error: Cannot properly adjust input varnodes
- `0x423bac` (0x423bac–0x423bb6): Low-level Error: Cannot properly adjust input varnodes
- `0x43e760` (0x43e760–0x43e76a): Low-level Error: Cannot properly adjust input varnodes

Other files: [decomp.h](decomp.h) (every prototype and global), [symbols.tsv](symbols.tsv) (address → name → name in code → file), [resources/](resources/) (menus, dialogs, strings, version info as a compilable `.rc`), `summary.json`, `compile-report.json`, `repairs.json`.

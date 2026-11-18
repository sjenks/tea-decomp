# TEA Crossword Helper 2.11 — decompiled

Readable decompilation of the four programs in `TEA Crossword Helper 2.11/`: Ghidra decompiler pseudocode with recovered names, grouped into one file per class.

**It compiles, and it is not a working rebuild.** All 689 source files compile to object files with 0 errors under 32-bit GCC. The objects do not link into a runnable program, and the code is the decompiler's reading of the machine code, not the original source. Both points are explained below.

There are programs you can run, written by hand from this tree and checked against the originals: [`../teacon-rebuild`](../teacon-rebuild/README.md) reimplements the console version `TEACON.exe`, and [`../tea-rebuild`](../tea-rebuild/README.md) the window program `TEA.exe`.

| program | role | functions | app functions (named) | app classes | compiles | start here |
|---|---|---|---|---|---|---|
| `TEA.exe` | main GUI program (OWL) | 4489 | 1385 (1383) | 83 | 281 files, 0 errors | [TEA/README.md](TEA/README.md) |
| `TEACON.exe` | console version | 825 | 155 (153) | 10 | 35 files, 0 errors | [TEACON/README.md](TEACON/README.md) |
| `TSBuild.exe` | dictionary builder (OWL) | 3029 | 215 (213) | 8 | 192 files, 0 errors | [TSBuild/README.md](TSBuild/README.md) |
| `TSMerge.exe` | word-list merge tool (OWL) | 2691 | 116 (114) | 8 | 181 files, 0 errors | [TSMerge/README.md](TSMerge/README.md) |

All four are 32-bit Windows programs built with Borland C++ 5.x (runtime banner `Borland C++ - Copyright 1999 Inprise Corporation`); three use the OWL framework, statically linked. None is packed.

## Layout

```
decompiled/
  ghidra.h           types and pseudo-operations Ghidra's output uses (undefined4, CONCAT31, …)
  <Program>/
    README.md        module and class index, compile status
    src/             application code, one file per class/module, functions in address order
    lib/             statically linked runtime (Borland RTL, STL, OWL) — mostly unnamed
    decomp.h         a prototype for every function and a declaration for every global
    classes.md       every class from RTTI: size, bases, members, vtable, message map
    symbols.tsv      address -> name -> name in code -> class -> name source -> file
    resources/       menus, dialogs, string table, accelerators, version info as a compilable .rc
  raw/               unmodified Ghidra output, one file per function address (source of src/ and lib/)
  raw-rea-default/   REA `decompile-all` exports from Ghidra's default analysis (TEACON, TEA) — baseline
  ghidra-project/    the analysed Ghidra project (open tea.gpr in Ghidra to browse interactively)
  _work/             scripts, hand-assigned names, intermediate data, REA evidence JSON, backups
```

## Compiling

```
node _work/tools/compile.js TEACON          # type-check every file, write TEACON/compile-report.json
node _work/tools/compile.js TEACON --obj    # also produce object files in TEACON/obj/
```

or by hand, from a program's folder, with the compiler in `../../_tools/mingw/mingw32/bin`:

```
g++ -std=gnu++17 -fpermissive -w -c src/MatchEngine.cpp
windres -i resources/TEA.rc -O coff -o TEA.res
```

The compiler is MinGW-w64 GCC 16.2 targeting 32-bit x86. Three things about that command matter:

- **32-bit target.** The pseudocode keeps pointers in `int` and does arithmetic on them. A 64-bit compiler rejects it.
- **`-fpermissive`.** Integer↔pointer and `void *` conversions without a cast are accepted as GCC extensions. Ghidra writes them constantly; adding a cast at each would bury the code. Conversions between *unrelated pointer types* are errors even so, and those are the ones that were repaired (next section).
- **`-w`.** Warnings are off. With them on, each file produces hundreds: uninitialised register variables (`in_EAX`, `unaff_ESI`), missing returns, sign mismatches. They are accurate descriptions of decompiler output, not defects to fix.

### What had to change for it to compile

1. **Signatures were made authoritative in Ghidra** (`TeaCommit.java`). By default the decompiler re-derives arguments and return-value use at every call site, so a function printed as `void f(void)` could be called elsewhere as `x = f(a, b)`. Each function's recovered parameters and return type are now committed, so definitions and calls agree. A function recovered as `void` whose result a caller uses was given a 4-byte result. This changed the pseudocode of some functions relative to the first version of this tree (TEA: 202 of 4489; TEACON: 57 of 825; TSBuild: 143 of 3029; TSMerge: 121 of 2691).
2. **Names became identifiers.** `MatchEngine::Compile` is kept as written: each class is a *namespace* holding its functions, because the binary has no type information from which real class definitions could be rebuilt. Destructors are `Class::_dtor`; template instances are folded into one identifier (`std::vector_MatchEngine_ptr`). Each function's header comment still shows the display name. Everything sits in `namespace tea` so that names recovered for the statically linked runtime (`strlen`, `malloc`, `std::string::append`) cannot collide with the real ones.
3. **Everything is declared** in `<Program>/decomp.h`: one prototype per function, one declaration per global, with the type most functions use for it. A function that uses a global at a different type reads it through a cast, `(*(T *)&DAT_…)`.
4. **String labels became literals** (`s_Pattern_error___s_0042abc4` → `"Pattern error: %s\n"`), read from the image.
5. **839 mechanical repairs** where Ghidra's loose type model is not valid C++. Each was applied at a source range the compiler reported, in one of these fixed ways (`_work/tools/fixcasts.js`); nothing else in the text was touched:

   | repair | count |
   |---|---|
   | explicit pointer cast added — `(T *)expr` | 620 |
   | call through a data-typed pointer — `((code *)p)(…)` | 124 |
   | value assigned to an array-typed local — `GH_SET(…)` | 44 |
   | cast to an array type removed | 40 |
   | write through a `const` pointer — `GH_WRITABLE(…)` | 8 |
   | call whose declared result is `void` but whose value is used — `((code *)f)(…)` | 3 |

6. **Windows API calls** resolve to the SDK's declarations. Each API's import stub (the `jmp` through the import table) is in `lib/` as `import_<Name>`. Where Ghidra has no prototype for an API, it shows the call without arguments; those calls go to the stub, declared variadic.

### Why it still is not a working program

- **It does not link.** No data sections are emitted: globals are declared, not defined, and their initial contents (tables, vtables, strings referenced by address) stay in the original image. `TEA`: 1645 undefined symbols at link; `TEACON`: 341 undefined symbols at link; `TSBuild`: 1156 undefined symbols at link; `TSMerge`: 1087 undefined symbols at link.
- **Arguments in registers are partly lost.** Borland's register convention and OWL's `this`-in-register calls leave values the decompiler shows as `in_EAX` / `extraout_ECX` rather than as parameters.
- **Calls through vtables and callbacks are untyped** (`(**(code **)(*param_1 + 0x14))()`), with whatever arguments the decompiler saw.
- **The runtime is Borland's.** `lib/` is a decompilation of its RTL and OWL, including structured-exception plumbing that cannot be expressed in C++. A real rebuild would replace `lib/` with a modern runtime and rewrite `src/` against it by hand.
- **Some instructions have no C form** and appear as calls to declared-but-undefined helpers (`halt_baddata`, `LOCK`, `swi`).

## How to read the output

Every function is headed by a line such as

```
// 0x0040d73c  MatchEngine::MatchWord   (262 bytes)   [analysis]
```

The tag in brackets says where the **name** came from, which is also how much to trust it:

| tag | meaning | reliability |
|---|---|---|
| `rtti:dtor` | destructor address stored in the class's Borland type descriptor | read from the binary |
| `rtti:vtable` | function is slot N of that class's vtable (or of its TWindow-subobject vtable); named after the slot's method where that is known, else `Class::vfN` | class and slot are read from the binary; slot names as described below |
| `rtti:vtable-store` | constructor: stores the class's vtable at its vptr offset in `this` | read from the binary |
| `owl:response-table` | handler listed in an OWL message map; named from the Windows message (`EvPaint`) or the menu caption of its command id (`CmFileOpen`) | message/command id read from the binary; the identifier is a reconstruction in OWL's naming style |
| `analysis` | named after reading the decompiled code | my judgement; the header line gives the reason |
| `analysis (usage pattern)` | runtime-library function recognised by how it is called (`operator_new`, `memcpy`, …) | likely; "less certain" is marked where it applies |
| `notes…` | name taken from the reverse-engineering notes supplied for this task; `notes+analysis` means I also read the code, plain `notes` means only the entry point was checked | as stated per function |
| `… (matched X.exe)` | name carried over from another of the four programs because the function bodies are identical once addresses are masked | as reliable as the original name |
| `… (position-matched X.exe)`, `… by position and size` | carried over where the bodies differ but the function sits in the same position between identical neighbours, with a comparable size | probable; the header line says so |
| `unnamed` | still `FUN_<address>` | — |

### Variable, member and method names

Ghidra names variables after their storage (`param_1`, `local_28`, `iVar3`). They are renamed per function, in this order of trust (`_work/tools/varnames.js`; every rename and its reason is in `<Program>/varnames.tsv`):

1. **Hand-assigned** names (`_work/manual/<Program>.vars.json`), written after reading the function, and carried to the other programs where the body is byte-for-byte the same (or where a position-matched counterpart declares exactly the same variables).
2. **Rules** that recognise what a variable is from how it is used: `self` for `this` in member functions, `dtorFlags`, Borland exception-frame slots (`sehChainHead`, `sehPrevFrame`, `ehContext`, `ehDtorCount`), the inlined reference-counted `std::string` code (`str`, `strRep`, `refs`, `len`, `newRep`, `prevRefs`), dead stores (`unused`), loop indexes, Win32 struct and handle types (`rect`, `findData`, `hWnd`), objects whose vtable is stored (`lengthError`), upper register bytes (`regHigh`).
3. **Names carried between functions**: an argument passed to a parameter that has a name takes it (Windows API parameter names count: `lpFileName` becomes `fileName`), an object passed as `this` is named after its class, and a variable that only holds one named function's result is named after it (`GetCount` gives `count`).

Variables nothing identifies keep Ghidra's name, mostly in `lib/`, the statically linked runtime.

**Members** have no names in the binary. For the classes in `_work/manual/<Program>.fields.json` each known offset is a named constant of the class in `decomp.h` (`MatchEngine::m_opCount = 0x1148`), and member functions read `*(int *)(self + m_opCount)` instead of `*(int *)(self + 0x1148)`.

**Constructors** are found by the vtable they store at the class's vptr offset (tag `rtti:vtable-store`). **Virtual methods** get real names where the slot is known: OWL `TWindow`'s 34 slots were identified from TWindow's own implementations (slot 3 registers the WNDCLASS, 5 calls CreateWindowExA, 29 returns "OWL_Window") and from the slots its message handlers call (EvPaint calls 21, `Paint`; EvCreate calls 30, `SetupWindow`); `TListBox`/`TComboBox`/`TEdit` slots from the message each sends; the dialog base `PropertiesViewWindows`'s own slots from what the controls call (`OnButton`, `OnEditChange`, ...). Overrides of `TWindow` virtuals in window classes are found through the vtable of each class's `TWindow` virtual-base subobject, which has no RTTI prefix and is located by shape. A slot whose meaning was not established keeps `vfN` (or a name that says so).

Things that are **inferred, not observed**:

- **File grouping.** The binaries carry no file names. Functions are grouped under the class of the nearest preceding function whose class is known (address order approximates source order within a Borland object file). Each function says `file placement: inferred …` when it has no class evidence of its own. Addresses are always shown, so the true neighbours are never hidden.
- **Class members.** `classes.md` lists only members that have destructors — that is all the RTTI records. Plain fields appear as `this + 0x…` offsets, named (`m_…`) only for the classes that were analysed.
- **Types** are Ghidra's (`undefined4`, `int` for pointers). Parameter and local names are recovered as described above; member functions take `this` as their first parameter, named `self`.
- **Static analysis only.** Nothing here was run or observed at run time. Compiling the tree checks that it is well-formed, not that it behaves like the original.

## How it was produced

1. **Identification** (REA, no engine): PE imports, resources, entropy and hardening for each program. Evidence IDs are in the table below; the JSON is in `_work/evidence/`.
2. **Baseline decompile** (REA `decompile-all`, Ghidra 12.1.4, compiler spec `borlandcpp` auto-detected): TEACON.exe and TEA.exe → `raw-rea-default/`.
3. **Table mining** (`_work/tools/borland-rtti.js`): Borland type descriptors, vtables and OWL response tables parsed straight from the PE image.
4. **Prepared Ghidra project** (`_work/ghidra-scripts/TeaPrepare.java`): every table-proven code address and every unclaimed 4-byte-aligned `push ebp; mov ebp,esp` is made a function, because Ghidra's default analysis does not follow pointers held in Borland RTTI.
5. **Signature commit** (`TeaCommit.java`): see *What had to change for it to compile*. The project as it was before this step is kept in `_work/backup/`.
6. **Export** (`TeaExport.java`) from that project → `raw/`, with each function's prototype and the type of every global it names. REA cannot reuse an existing Ghidra project on Windows (it reports this as Linux/macOS only), so this step calls Ghidra's decompiler directly.
7. **Naming, grouping, declarations** (`names.js`, `xmatch.js`, `organize.js`): symbol database, cross-program fingerprint matching, then `src/`, `lib/`, `decomp.h`, `classes.md`.
8. **Repair and compile** (`probe-imports.js`, `fixcasts.js`, `compile.js`) with the GCC in `../_tools/mingw`.

Cross-check of the direct export against REA's (step 2), made **before** step 5: TEACON.exe: 817 functions in the REA export; 814 have identical pseudocode in the prepared-project export, 3 differ, 0 are absent; the prepared export adds 8 functions. TEA.exe: 4321 functions in the REA export; 4241 have identical pseudocode in the prepared-project export, 80 differ, 0 are absent; the prepared export adds 168 functions. That pre-commit export is kept in `_work/backup/raw-before-signature-commit/`. After step 5 more functions differ from REA's output, by design.

| program | SHA-256 | functions before → after step 4 | REA evidence (imports / resources / entropy / hardening / decompile-all) |
|---|---|---|---|
| `TEA.exe` | `d83da2a8dc455b24…` | 4674 → 4846 | `ev_9ee899fcfeb7…` / `ev_63303eba5e18…` / `ev_8166148a9bfb…` / `ev_359133deb690…` / `ev_f67f3e8cfb55…` |
| `TEACON.exe` | `d4a30243fa47315e…` | 887 → 895 | `ev_e39d95057b85…` / `ev_4f114457cffd…` / `ev_a2f18153318f…` / `ev_ed32e23470bc…` / `ev_025bb97773b4…` |
| `TSBuild.exe` | `17654f120447e967…` | 3216 → 3322 | `ev_6980484a6b71…` / `ev_99f642f7b240…` / `ev_b5dbb438877f…` / `ev_5fea4a993a0e…` / — |
| `TSMerge.exe` | `1bb081e905800b5a…` | 2881 → 2984 | `ev_bb0ee08e5365…` / `ev_d2cdfcb21e2f…` / `ev_88c0a473a611…` / `ev_209de943f34c…` / — |

## Reconciling the supplied notes

The reverse-engineering notes supplied with this task (binary internals and `.tsd` format) were used as leads and checked against these binaries:

- **Object sizes agree exactly**: `InputEngine` 18,444 bytes (0x480c) and `MatchEngine` 4,432 bytes (0x1150) in the RTTI of both TEA.exe and TEACON.exe.
- **Function addresses given for TEACON.exe that are real function entries there**: 0x41130c, 0x41204c, 0x40c468, 0x406a2c, 0x409c78, 0x40a218, 0x40dc80, 0x40dca0, 0x40dd14, 0x40dd78, 0x40e430, 0x40e480, 0x40e5b4, 0x40e79c, 0x40ea58, 0x40eb20, 0x40d844. Each is named accordingly in `TEACON/src/`.
- **Addresses the notes attribute to TEACON.exe that are actually TEA.exe addresses**: 0x412000 (boolean VM; with 0x4120a4 and 0x4120e3–0x412107 inside it), 0x41217c (file open / handle stealing), 0x41229c (link group index), 0x4122bc (annotation). In TEACON.exe the same functions are at 0x40a09c, 0x40a218 and 0x40a338; no counterpart of 0x41229c was identified in TEACON.exe.
- **TEA.exe addresses confirmed as function entries**: 0x40e5e0, 0x410788, 0x40c84c, 0x40ca04, 0x408ef4, 0x410420, 0x410568, 0x4105bc, 0x410628, 0x410704, 0x448c4c, 0x4304f0, 0x4309cc.
- **Not resolved**: 0x40dd40 ("MatchGeneralAnagram") lies inside `MatchEngine::MatchMultiAnagram` (0x40dd14–0x40dd76) in TEACON.exe and no function starts there; 0x44805c ("WordListMap") in TEA.exe is not inside any function Ghidra defined; 0x409864, 0x40ebd0 and 0x431060 are range end-points that fall between functions (0x431060 is a type descriptor).
- Functions named `notes` (without `+analysis`) carry the notes' description on trust: the entry point was checked, the body was not read.

## Known gaps

- **5676 of 11034 functions are still unnamed**, most of them in the statically linked libraries. Ghidra ships no signature database for Borland's RTL or OWL, so library functions are named only where a class table or a usage pattern identified them.
- **Some virtual methods are still `vfN`**: slots of OWL classes other than TWindow, TListBox, TComboBox and TEdit (TScroller, TApplication, TDecoratedFrame, ...) and a few application slots. 8 application functions keep Ghidra's FUN_ name.
- **Most library variables keep Ghidra's names**, and most members of the GUI classes are still offsets: hand-naming covered the application code and the engine classes.
- **TEA.exe: 4 tiny library functions failed in Ghidra's decompiler** (`0x488b50`, `0x49b0e8`, `0x4ba5d8`, `0x4ba6cc`); they are declared but have no body, and are listed in TEA/README.md.
- **TSBuild.exe: 3 tiny library functions failed in Ghidra's decompiler** (`0x41d6cc`, `0x421198`, `0x4498f4`); they are declared but have no body, and are listed in TSBuild/README.md.
- **TSMerge.exe: 5 tiny library functions failed in Ghidra's decompiler** (`0x4125b0`, `0x416174`, `0x42111c`, `0x423bac`, `0x43e760`); they are declared but have no body, and are listed in TSMerge/README.md.
- **Frameless functions that nothing references** are not found by the prologue scan and would be missing. Code-section coverage per program is in each README.
- **Some response-table handlers are named generically** (`EvRegisteredMsg_…`, `Cmd<id>`, `Child<id>_Notify<code>`, `CmShared_…`, `CeRange<a>to<b>`): message id 0 in the static table, command ids with no menu caption, control notifications, and handlers bound to several commands at once.
- **Bitmaps, icons and cursors are not extracted**; the `.rc` files list them in comments.

## Extending it

Add or correct names in `_work/manual/<Program>.json` (functions, globals, vtable slots), `<Program>.vars.json` (variables) and `<Program>.fields.json` (members); `node _work/tools/addnames.js <Program> file` takes a compact text form (`fn`, `v`, `data`, `slot`, `field` lines; see its header). `node _work/tools/readfn.js <Program> <addr>` prints a function with Ghidra's variable names beside the new ones, and `node _work/tools/status.js <Program>` shows what is still unnamed. Then:

```
_work/tools/build-all.sh                      # names, cross-program matching, src/ lib/ decomp.h, repairs
for p in TEA TEACON TSBuild TSMerge; do node _work/tools/compile.js $p --quiet; done
node _work/tools/readme.js . _work TEA TEACON TSBuild TSMerge
```

That regenerates everything from `raw/` and carries each hand-assigned name to the other programs wherever the same function appears. It needs the compiler in `../_tools/mingw` for the repair step (`GENFLAGS=--nofix` skips it, leaving a tree that reads the same but does not compile). Re-running Ghidra is only needed to change which functions exist or their signatures (`_work/tools/prepare.ps1`, `commit.ps1`, `export.ps1`); those need the JDK and Ghidra in `../_tools/`.

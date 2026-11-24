# TEA Crossword Helper 2.11: decompiled and rebuilt

This repository takes apart [TEA Crossword Helper](http://www.crosswordman.com/tea.html) 2.11,
Crossword Man's Windows word-search program for crossword setters and solvers, and puts it back
together:

1. **A readable decompilation** of all four programs in the release, with recovered names, one
   file per class, that compiles without errors.
2. **Two new programs written from that decompilation** that give the same answers as the
   originals: `teacon`, the console search, and `tea`, the window program.

You type a pattern such as `q???k`, `;acenrt` (anagrams) or `123321` (letter variables), and TEA
searches its `.tsd` dictionaries for the words that match.

```
$ teacon "/D:Core English.tsd" "q???k" ";acenrt"
 q???k
quack
quark
quick
quirk
 ;acenrt
canter
nectar
recant
trance
```

## What's here

| Folder | What it is | Start with |
| --- | --- | --- |
| [`teacon-rebuild/`](teacon-rebuild/README.md) | `teacon`: about 1,800 lines of plain C++17 that reimplement `TEACON.exe`, including the pattern compiler, the matcher and the `.tsd` reader. Its output matched the original byte for byte across about 186 million result lines | [README](teacon-rebuild/README.md) |
| [`tea-rebuild/`](tea-rebuild/README.md) | `tea.exe`: a new Win32 program (no framework) that reimplements the window program `TEA.exe`: results lists, definitions, full-text search, options, printing and saving. Checked against the original by driving both side by side | [README](tea-rebuild/README.md) |
| [`decompiled/`](decompiled/README.md) | Ghidra pseudocode for `TEA.exe`, `TEACON.exe`, `TSBuild.exe` and `TSMerge.exe`: 11,034 functions, grouped by class, renamed, declared in one header per program, and repaired until all 689 source files compile. It does not link, and the README explains why | [README](decompiled/README.md) |

The two rebuilds share one engine: `tea-rebuild` compiles the pattern engine and dictionary reader
from `teacon-rebuild/src`, so a pattern finds the same words in both.

## Quick start

You need MinGW-w64 `g++` (C++17) on Windows. `tea.exe` also needs `windres`. Both build scripts
use the `g++` on your `PATH`, or `_tools/mingw` if there isn't one.

```sh
sh teacon-rebuild/build.sh    # -> teacon-rebuild/bin/teacon.exe
sh tea-rebuild/build.sh       # -> tea-rebuild/bin/tea.exe, plus tsddump.exe and savetsd_check.exe
```

Neither program includes dictionaries. Point them at the `.tsd` files from a TEA install:

```sh
teacon-rebuild/bin/teacon "/D:C:\path\to\TEA\Dictionaries\Core English.tsd" "y*y"
tea-rebuild/bin/tea.exe "C:\path\to\TEA\Dictionaries\Core English.tsd"
```

`teacon` also reads the dictionary list from the `TEACON_DICTIONARIES` environment variable. `tea`
remembers the dictionaries you open with **File | Open**. The full switch list and a summary of the
pattern language are in [`teacon-rebuild/README.md`](teacon-rebuild/README.md#use). The original
help pages are in [`decompiled/_work/help/TEA/html`](decompiled/_work/help/TEA/html).

## What isn't in the repository

These are kept out on purpose (see [`.gitignore`](.gitignore)). Some tasks need them in the places
listed:

| Missing | Expected at | Needed for |
| --- | --- | --- |
| The original TEA Crossword Helper 2.11 release, installed and licensed | `TEA Crossword Helper 2.11/` | Dictionaries; the side-by-side tests in both rebuilds; help, tips and the Tools menu in `tea.exe` |
| MinGW-w64 GCC (32-bit target) | `_tools/mingw/mingw32/` | Compiling `decompiled/` (a 32-bit target is required). Optional for the rebuilds if `g++` is on `PATH` |
| Ghidra 12.1.4 and JDK 21 | `_tools/ghidra/`, `_tools/jdk/` | Re-running the Ghidra steps only (`decompiled/_work/tools/prepare.ps1`, `commit.ps1`, `export.ps1`) |
| The analysed Ghidra project | `decompiled/ghidra-project/` | Browsing interactively; rebuilt by the scripts above |
| Node.js | on `PATH` | The decompilation tools in `decompiled/_work/tools` and `teacon-rebuild/tests/difftest.js` |

The original binaries and dictionaries are not redistributed. The release is commercial software,
and its word lists carry their own licence terms. The rebuilds read `.tsd` files where they are
and copy nothing.

## How the rebuilds differ from the originals

Both rebuilds keep the originals' behaviour on purpose, including the odd parts. For example,
`and`, `or` and `not` are evaluated left to right with no precedence. The deliberate differences:

- **No licence check or evaluation mode**, and no ordering or registration menus.
- **No registry.** `teacon` uses built-in defaults. `tea` stores its settings in an `.ini` file.
- **No built-in dictionary list.** You choose the dictionaries.
- `tea` adds a modern look (visual styles, DPI-aware text, Unicode file names), runs searches on a
  background thread, and uses its own icon and toolbar art.

Each rebuild's README lists the full set of differences, the behaviour kept the same, and how it
was tested.

## Working on the decompilation

The decompiled tree is generated. To change a name, edit the hand-assigned name files in
`decompiled/_work/manual/` and regenerate the tree. Don't edit `src/` directly.

```sh
cd decompiled
node _work/tools/status.js TEA                 # what is still unnamed
node _work/tools/readfn.js TEACON MatchEngine::MatchWord   # one function (or an address), with Ghidra's names beside the new ones
_work/tools/build-all.sh                       # regenerate src/, lib/, decomp.h and the repairs
node _work/tools/compile.js TEA                # type-check every file
```

[`decompiled/README.md`](decompiled/README.md) explains how the tree was produced, what each name
tag means and how far to trust it, and what is still missing.

## Licence

The code and tools in this repository are under the [MIT licence](LICENSE). That covers this
project's own work. It does not cover TEA Crossword Helper itself, its dictionaries or its help
text, which belong to their authors. This is an independent project, not affiliated with or
endorsed by Crossword Man.

# tea — the TEA Crossword Helper window program, rebuilt

`tea.exe` is a new Win32 program that does what `TEA.exe` (TEA Crossword Helper 2.11, the window
version) does: you type a pattern, it searches the open `.tsd` dictionaries, and shows one results
list per dictionary; you can look up definitions, search inside definitions, save and print the
results. It was written from the decompiled original in
[`../decompiled/TEA`](../decompiled/TEA/README.md) and checked against the original program by
driving both side by side (see [How it was checked](#how-it-was-checked)).

It shares its pattern engine and dictionary reader with the console rebuild,
[`../teacon-rebuild`](../teacon-rebuild/README.md), so a pattern finds the same words in both.

## Build

```sh
sh build.sh          # writes bin/tea.exe, and the tools bin/tsddump.exe and bin/savetsd_check.exe
```

Needs MinGW-w64 `g++` and `windres` (C++17). If there is no `g++` on `PATH` the script uses the
MinGW in `../_tools`. The program is Windows-only: it is written against the Win32 API with no
framework.

## Run

```sh
bin/tea.exe                                  # the dictionaries open last time
bin/tea.exe "path\Core English.tsd" ...      # these dictionaries instead
```

The first time, use **File | Open** to choose dictionaries (several at once with Ctrl). They are
remembered. Up to ten can be open; each gets a results list, searched in list order.

The help (`TEA.chm`), the startup tips (`Tips.txt`) and the two tools on the Tools menu
(`TSBuild.exe`, `TSMerge.exe`) are the original release's files. `tea.exe` looks for them next to
itself, then next to the open dictionaries and in the folder above them, which finds them in the
original install folder. Without them, Help and Tools are greyed out and the tips window says so.

## What it does

Everything in the original's menus and dialogs except licensing and ordering:

| Area | What is there |
| --- | --- |
| Main window | Pattern box with history, Word Search / Full Text Search button (and its menu), Shortest / Longest, the length ruler, a results list per dictionary with its header and count, status bar with pattern messages; tile horizontally or vertically; drag the gaps between lists; Always On Top |
| Searching | Same results as the original, including duplicate suppression across dictionaries, the four entry-type filters, alphabetical sorting and length grouping (ascending, smart, descending), annotations and anagram balances; pause and resume |
| Results lists | Click, Shift/Ctrl-click, drag, keyboard selection; copy, select all; double-click to look up |
| File | Open (several files, drag and drop, command line), Close, Promote, Demote, Properties, Save Results as text or as a new dictionary, Print, Print Preview, Page Setup, recent files |
| Definitions | Lookup / Lookup in New Window: definition windows with the dictionary/definition tree, the definition text (RTF) with the word highlighted, double-click a word or underlined phrase to look it up, Back / Forward, Previous / Next Result, Previous / Next Definition, the Go To menu of recent words |
| Full Text Search | Definitions containing words that match the pattern, with the original's two methods (index, or a scan of the text) |
| External lookup | Web searches with `{entry}` in the address (Google, OneLook, Wikipedia set up), plus the original's DDE, window-message and run-a-program methods; the Lookup Methods dialog; the "No definitions found — try an external search?" box |
| Options | All five tabs, applied as you change them; Save as defaults per tab |
| Help | Contents (TEA.chm), Quick Reference (click a feature for help, an example to try it), Startup Tips, About |

## What is different from the original

Deliberate:

- **No licence, no evaluation mode.** No introduction or licence dialogs, no exit screen, nothing
  hidden for evaluators. The Help menu has no ordering, order form, e-mail or "online" items (they
  pointed at Crossword Man's web site).
- **Settings in a file, not the registry.** The original's registry key is never read or written.
  Settings go to `%APPDATA%\TEA Rebuild\tea.ini`, or to `tea.ini` next to `tea.exe` if that file
  exists (portable use), or to the file named by the `TEA_SETTINGS` environment variable. As in
  the original, Options changes last for the session unless you click **Save as defaults**; window
  positions, open dictionaries, recent files and the pattern history are saved on exit.
- **No default dictionary list.** The original opens its four English dictionaries from its own
  folder on first run; this program starts empty and asks you to open some. Likewise the
  definition dictionaries list (Options, Dictionary tab) starts empty: lookup searches the open
  dictionaries plus whatever you add there.
- **Modern Windows look.** Visual styles, sharp text at any display scaling (the original is
  scaled up as a bitmap), Unicode file names. The control layout and numbering follow the
  original.
- **Searching runs in the background**, so the window stays responsive; Stop pauses and Resume
  continues, as before.
- **Own icon and toolbar pictures** (the original's artwork is not copied). The definition
  window's toolbar uses Windows' symbol font.
- **External lookup defaults** are the three web searches the original enables, with `https`
  addresses; the old dictionary programs it listed for DDE and messages are not filled in.

Same as the original, including odd parts:

- A search's dictionaries are searched one after another; with duplicate suppression (the
  default) an entry is hidden if an earlier list already shows one that is the same letters,
  ignoring case, accents and punctuation (`Q-hook` hides `Q hook`).
- The filters classify an entry as a phrase only if a space is *inside* its letters, and as
  punctuated only if punctuation is between letters (`Whaam!` counts as plain).
- "Smart" length grouping lists longer words first only for patterns that allow a bounded range
  of lengths.
- Copying one entry puts it on the clipboard with no line break; several entries get one each.
- With **Search active dictionary only**, the other lists keep their earlier results, and the
  "results found" count still includes them.
- Full Text Search has two methods, chosen as the original chooses them. If the pattern has no
  `!` and every part except the last matches a single length (so any pattern with one part), it
  uses the dictionary's index: each entry matching a part brings in the definitions it heads and
  the ones the index lists it in, and the parts are combined strictly left to right as sets, so
  `a & b | c` means `(a & b) | c`, unlike word search. Otherwise it reads every definition and
  splits its raw text into runs of letters, RTF markup included (`par` comes from `\par`), and the
  parts combine as in word search. The two methods can give different answers for similar
  patterns, as they do in the original.
- A cross-reference definition (one with no headword of its own, such as a citation) is shown
  with the looked-up entry's name inserted at its start, as the original does.

## How it was checked

`tests/guitest.ps1` starts the original `TEA.exe` and the rebuild together, types the same
pattern into each, presses Return, waits for the search to end, and then in every results list
clicks, selects all and copies. The copied text and the list headers (with their counts) must be
identical. Options are changed through each program's own Options dialog, which works because the
rebuild keeps the original's control numbers.

`tests/deftest.ps1` does the same for definition windows: it looks a word up in both programs
and compares the window title, every item of the dictionary/definition tree (read from the other
process) and the text of the first definition. The rebuild is given the original's definition
dictionary list for this.

Results for the current source, run on 2026-11-17 with the original's four default English
dictionaries open (Core, Edited, Unedited and Wikipedia English, 67 thousand to 4.8 million
entries):

| Part | What ran | Differences |
| --- | --- | --- |
| Word search | 25 patterns (from the help pages: templates, anagrams with balances, wildcards, choice lists, letter variables, punctuation, logic, macros, sub-patterns) under each of 13 option settings: defaults; alphabetical ascending, descending, and without length groups; length grouping ascending and descending; each of the four entry types filtered out; dictionaries independent; active dictionary only; no annotations or balances. 325 runs, about 1.6 million list entries compared | 0 |
| Full Text Search | 16 patterns (`tests/fulltext.txt`) covering both methods, `&`, `|`, `!` and brackets; up to 117,792 definitions per pattern | 0 |
| Definition windows | 13 words (`tests/deftest.ps1` defaults), up to 68 tree items each, including cross-reference stubs and hyphenated entries | 0 |

The comparison is exact: list contents byte for byte as copied, header counts, window titles,
tree labels in order.

```powershell
powershell -ExecutionPolicy Bypass -File tests\guitest.ps1                    # everything (about an hour)
powershell -ExecutionPolicy Bypass -File tests\guitest.ps1 -Only "defaults,full text"
powershell -ExecutionPolicy Bypass -File tests\guitest.ps1 -Only "full text" -FullTextFile my.txt -DumpDir diffs
powershell -ExecutionPolicy Bypass -File tests\deftest.ps1 -Words "quick,fast,lead"
```

Both tests need the original installed in `../TEA Crossword Helper 2.11` and licensed, with its
options at their defaults; they use whichever dictionaries the original has open and give the
rebuild the same ones. They take the clipboard and both programs' windows while they run, and
never write to the clipboard themselves: the original crashes (an unhandled exception) if it
finds the clipboard busy when copying.

Saving results as a dictionary was checked by writing 539,111 words with the rebuild's writer
(`tests/savetsd_check.cpp`) and reading the file back with the original `TEACON.exe` and with
`teacon`: both list exactly the words written.

Not covered by the automatic tests: the look of the windows (compared by eye from screenshots
taken with `tools/wincap.ps1`), printing, external lookups, pausing a search, and typing at a
real keyboard (the tests send window messages).

## The code

| File | What it holds |
| --- | --- |
| `src/app.cpp` | Entry point, message loop, finding the original's help, tips and tools |
| `src/mainwin.cpp` | Main window: pattern box, validation messages, list panes, splitters, menus, commands |
| `src/search.cpp` | The search on a worker thread: dictionary and length order, filters, duplicate suppression |
| `src/fulltext.cpp` | Full Text Search, indexed and sequential |
| `src/results.cpp` | Result storage, the original's collation table and sort orders |
| `src/resultlist.cpp` | The results list control (`MATCHLIST`) |
| `src/lengthbar.cpp` | The length ruler / progress bar |
| `src/definitions.cpp` | Lookup and the definition windows |
| `src/dialogs.cpp` | Options, Properties, About, Quick Reference, Startup Tips, Dictionary List |
| `src/lookup.cpp` | External lookup and the Lookup Methods dialog |
| `src/printing.cpp` | Print, Print Preview, Page Setup |
| `src/savetsd.cpp` | Saving results as a `.tsd` dictionary |
| `src/settings.cpp`, `src/util.cpp` | Settings file; text, font and window helpers |
| `src/tea.rc`, `src/resource.h` | Menus, accelerators, dialogs, strings (identifiers as in the original) |
| `../teacon-rebuild/src/engine.*`, `tsd.*` | Pattern engine and dictionary reader, shared with `teacon` |
| `tests/guitest.ps1` | The side-by-side test of searches against the original |
| `tests/fulltext.txt` | Patterns for its Full Text Search part |
| `tests/deftest.ps1` | The side-by-side test of definition windows |
| `tests/savetsd_check.cpp` | Writes a dictionary with the "save as .tsd" code, for reading back |
| `tools/wincap.ps1` | Window list, control tree, screenshots and simple input for either program |
| `tools/tsddump.cpp` | Shows a dictionary's header, or the entries, link groups and definitions for a word |
| `tools/makeicon.js` | Draws `src/tea.ico` |

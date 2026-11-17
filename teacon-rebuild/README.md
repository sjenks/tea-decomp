# teacon — the TEA console search, rebuilt

`teacon` is a new C++17 program that does what `TEACON.exe` (TEA Crossword Helper 2.11, console
version) does: it searches `.tsd` dictionaries for words matching TEA patterns. It was written from
the decompiled original in [`../decompiled/TEACON`](../decompiled/TEACON/README.md) and checked
against the original program, which it matches byte for byte on everything tested
(see [How it was checked](#how-it-was-checked)).

It is not a recompilation of the decompiler output. That tree compiles but cannot link, and its
code is not readable enough to maintain. This is about 1,800 lines of ordinary C++ that follow the
original's algorithms.

## Build

```sh
sh build.sh          # writes bin/teacon.exe (bin/teacon elsewhere)
```

Needs `g++` with C++17. If there is none on `PATH`, the script uses the MinGW in `../_tools`.
Only the Windows build has been built and tested; the code avoids Windows-only calls outside
`#ifdef _WIN32`, but a Linux or macOS build is untried.

## Use

```
teacon /D:dictionaries [switches] [pattern ...]
```

```sh
teacon "/D:..\TEA Crossword Helper 2.11\Dictionaries\Core English.tsd" "q???k" ";acenrt"
```

```
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

With no patterns on the command line, each line of standard input is a pattern. A line or argument
starting with a space or tab is a comment and is echoed unchanged.

| Switch | Meaning | Default |
| --- | --- | --- |
| `/D:files` | Dictionaries, separated by semicolons | `TEACON_DICTIONARIES` environment variable |
| `/H:text` | What `#` expands to | `[^aeiou]` |
| `/A:text` | What `@` expands to | `[aeiou]` |
| `/S:n` | Shortest result | 1 |
| `/L:n` | Longest result | 100 |
| `/N:0\|1` | Show dictionary annotations | 1 |
| `/B:0\|1` | Show anagram balances (`+X` letters left over, `-X` letters missing) | 1 |
| `/X:0\|1` | Different letter variables must be different letters | 1 |
| `/U:0\|1` | Ignore punctuation the pattern does not mention | 0 |
| `/O:0-4` | Output: as stored, ASCII, ASCII letters, lower case, upper case | 0 |
| `/Q` | Do not echo patterns and comments | off |

Switch letters are not case sensitive. Results go to standard output, errors
(`Pattern error: …`, `"name" is not a valid dictionary`) to standard error. The exit code is 1 if
any pattern was rejected, a dictionary could not be opened, or a switch was not recognised.

The pattern language is the original's; its help pages are in
[`../decompiled/_work/help/TEA/html`](../decompiled/_work/help/TEA/html). In brief:

| Pattern | Matches |
| --- | --- |
| `q???k`, `q...k` | `.` or `?` is any one letter |
| `y*y` | `*` is any run of letters, including none |
| `[xyz]..[^abc]` | one of the listed letters; `^` means any letter but those |
| `123321` | digits are letter variables: the same digit is the same letter |
| `;acenrt` | anagrams of the letters; `.` is any letter, `*` any number of extra letters |
| `e........;cats` | template first, and the word must also contain the anagram letters |
| `...(;orange)` | a sub-pattern in brackets matches part of the word |
| `a & b`, `a \| b`, `! a` | and, or, not; brackets group |
| `\x` | the character `x` exactly (case, or a character that is otherwise special) |

## The dictionaries

None are included. The `.tsd` files belong to the TEA release, whose ReadMe says it is for
licensed users and that its word lists carry their own restrictions. `teacon` reads them where they
are and copies nothing.

## What is different from the original

These are deliberate:

- **No licence check, no registry.** The original checks for its licence (it asks you to run the
  Windows version first if it finds none), reads its defaults from the registry, and prints a
  banner naming the licensee above its usage text. `teacon` does none of that. Its defaults are
  the built-in ones in the table above, and its usage text is its own.
- **No default dictionary list.** The original has one (on this machine, four English
  dictionaries from its own folder). `teacon` needs `/D:` or `TEACON_DICTIONARIES`, and says so
  if it has neither.
- **A carriage return before a line feed is dropped from piped input.** The original reads a pipe
  as raw bytes, so with CR LF input every pattern ends in a carriage return and fails
  (`type patterns.txt | TEACON` does not work there). `teacon` strips it.
- **Speed.** Much the same; a little faster on most whole-dictionary scans, a little slower when
  nothing matches.

## What is the same, including the odd parts

Kept because the goal is the same answers:

- Operators are evaluated strictly left to right with no precedence: `*zz & q* | b*` means
  `*zz & (q* | b*)`.
- The word lengths to search are worked out ignoring `!`, so a negated term limits the lengths to
  those it could have matched: `.. & !*ing` finds nothing, because `*ing` needs three letters.
- An anagram is tried against the first way its template matched, with no second attempt.
- Dictionaries are searched one after another and duplicates are not merged.
- Every item between semicolons in `/D:` is a file name, so a trailing semicolon is an error.
- A line of 1,000 characters or more on standard input ends the run without a message.
- Lengths outside 1–100 are clamped; `/O:` wraps modulo 5.
- On Windows, output to a pipe uses bare line feeds and output to a file uses CR LF, as the
  original's does.
- Patterns that are slow in the original are slow here. Twelve consecutive `*`, or an anagram of
  ten different letter variables (`;0123456789`), did not finish within 20 seconds in either
  program on the smallest English dictionary.

## How it was checked

`tests/difftest.js` runs the original and the rebuild with identical arguments and input and
requires identical standard output, standard error and exit code, compared as raw bytes.

Results for the current source, run on 2026-11-17 against all 28 dictionaries in the release
(both `TSD0` and `TSD1` files, from 16 KB to 72 MB):

| Part | What ran | Differences |
| --- | --- | --- |
| Interface | 45 cases: switch parsing, line endings, end of input, over-long lines, patterns as arguments, bad dictionary lists | 0 |
| Curated | 206 patterns (131 in `tests/curated.txt`, 75 generated to press on size limits), each with the four combinations of `/X` and `/U`, on 28 dictionary sets: 23,072 pattern runs | 0 |
| Generated | 10,980 patterns on 30 dictionary sets with ten switch combinations (`/S /L /N /B /O /H /A` varied as well). Half are built from the pattern grammar alone, half from real dictionary entries so that they match something | 0 |

In the generated part the original returned results for 5,801 patterns, nothing for 4,929 and an
error for 250. Altogether about 186 million result lines were compared.

Input and output through files rather than pipes was compared by hand once (identical, CR LF
line endings in both); it is not part of the script.

The usage text is the one thing compared loosely: for an unrecognised switch only the exit code
and the empty standard output are checked, since the wording is deliberately not the original's.

Not covered: typing patterns in at a console (the tests use pipes and files), and anything but
Windows.

```sh
node tests/difftest.js                              # interface cases, curated patterns, a short fuzz
node tests/difftest.js --dict all --rounds 60       # every bundled dictionary
node tests/difftest.js --only fuzz --seed 5 --gen words --dict french,german --keep
node tests/probe.js --dict "Edited English" /U:1 -- "*-*-*"    # show both programs' output for one case
```

The tests need the original `TEACON.exe` and its dictionaries in `../TEA Crossword Helper 2.11`,
and the original has to be licensed on the machine or every comparison fails.

## The code

| File | What it holds |
| --- | --- |
| `src/tsd.h`, `src/tsd.cpp` | Reading `.tsd` dictionaries (both `TSD0` and `TSD1`): header, character table, Huffman-coded word streams; also definitions, link groups and the full-text index, which only the GUI rebuild uses |
| `src/engine.h`, `src/engine.cpp` | The pattern compiler (pattern text to bytecode), the backtracking matcher, and the and/or/not layer |
| `src/main.cpp` | Switches, input, output modes |
| `tests/difftest.js` | Differential test against the original |
| `tests/curated.txt` | Hand-picked patterns, mostly from the help pages, plus error cases |
| `tests/probe.js` | Runs one case on both programs and shows the outputs side by side |

The engine and the reader are shared with the GUI rebuild, [`../tea-rebuild`](../tea-rebuild/README.md), which compiles them from here.

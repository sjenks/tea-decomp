#!/usr/bin/env bash
# Rebuild symbol databases, cross-binary name propagation and the organised source trees.
# usage: build-all.sh [NAME...]   (default: every program that has a raw export)
# GENFLAGS=--nofix skips the compiler-driven repairs (needs _tools/mingw otherwise)
SP="$(cd "$(dirname "$0")/.." && pwd)"
APP="C:/Users/jenks/code/tea-rea/TEA Crossword Helper 2.11"
D="C:/Users/jenks/code/tea-rea/decompiled"
cd "$SP/tools" || exit 1
NAMES=("$@"); if [ ${#NAMES[@]} -eq 0 ]; then for n in TEACON TEA TSBuild TSMerge; do [ -f "$D/raw/$n/decompile-journal.jsonl" ] && NAMES+=("$n"); done; fi
sym() { node names.js "$APP/$1.exe" "$D/raw/$1" "$SP/seeds/resources/$1.resources.json" "$SP/seeds/$1.symbols.json" "$SP/manual/$1.json" "$SP/seeds/$1.propagated.json" | head -${2:-1}; }
# start clean: propagated names are derived data and must not feed back into themselves
for n in "${NAMES[@]}"; do rm -f "$SP/seeds/$n.propagated.json"; done
echo "== pass 1: symbols + fingerprints"; for n in "${NAMES[@]}"; do sym "$n"; node hashes.js "$APP/$n.exe" "$D/raw/$n" "$SP/seeds/$n.hashes.json"; done
echo "== cross-binary matching"; node xmatch.js "$SP/seeds" "${NAMES[@]}"
echo "== pass 2: symbols with propagated names"; for n in "${NAMES[@]}"; do sym "$n" 6; done
echo "== generate, probe SDK headers, repair for C++"
for n in "${NAMES[@]}"; do "$SP/tools/gen.sh" "$n" $GENFLAGS; done

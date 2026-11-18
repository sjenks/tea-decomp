#!/usr/bin/env bash
# syms-all.sh : the symbol half of build-all.sh (symbols, fingerprints, cross-program matching) without
# regenerating the trees - for checking names quickly; follow with org1.sh <Program>.
SP="$(cd "$(dirname "$0")/.." && pwd)"
APP="C:/Users/jenks/code/tea-rea/TEA Crossword Helper 2.11"
D="C:/Users/jenks/code/tea-rea/decompiled"
cd "$SP/tools" || exit 1
NAMES=(TEACON TEA TSBuild TSMerge)
sym() { node names.js "$APP/$1.exe" "$D/raw/$1" "$SP/seeds/resources/$1.resources.json" "$SP/seeds/$1.symbols.json" "$SP/manual/$1.json" "$SP/seeds/$1.propagated.json" | head -${2:-1}; }
for n in "${NAMES[@]}"; do rm -f "$SP/seeds/$n.propagated.json" "$SP/seeds/$n.propagated-vars.json"; done
for n in "${NAMES[@]}"; do sym "$n" > /dev/null; [ -f "$SP/seeds/$n.hashes.json" ] || node hashes.js "$APP/$n.exe" "$D/raw/$n" "$SP/seeds/$n.hashes.json"; done
node xmatch.js "$SP/seeds" "${NAMES[@]}" | grep propagated
for n in "${NAMES[@]}"; do sym "$n" > /dev/null; done

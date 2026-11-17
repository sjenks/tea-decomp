#!/usr/bin/env bash
# Generate one program's tree and make it compile: organise -> probe SDK headers -> organise -> insert casts.
# usage: gen.sh NAME [--nofix]
SP="$(cd "$(dirname "$0")/.." && pwd)"
APP="C:/Users/jenks/code/tea-rea/TEA Crossword Helper 2.11"
D="C:/Users/jenks/code/tea-rea/decompiled"
n="$1"
cd "$SP/tools" || exit 1
LS=""; [ -f "$SP/manual/$n.libstart" ] && LS="--libstart $(cat "$SP/manual/$n.libstart")"
org() { node organize.js "$APP/$n.exe" "$D/raw/$n" "$SP/seeds/$n.symbols.json" "$D/$n" "$SP/seeds/$n.prepare-report.txt" "$SP/seeds/resources/$n.rc" $LS; }
org > /dev/null || exit 1
node probe-imports.js "$D/$n" "$SP/seeds" || exit 1
org || exit 1
[ "$2" = "--nofix" ] || node fixcasts.js "$D/$n"

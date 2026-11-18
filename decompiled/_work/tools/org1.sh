#!/usr/bin/env bash
# org1.sh NAME : rebuild one program's symbol database and run organize.js once (no header probe, no
# repairs, no cross-program matching) - for quick checks while naming. build-all.sh does the real build.
SP="$(cd "$(dirname "$0")/.." && pwd)"
APP="C:/Users/jenks/code/tea-rea/TEA Crossword Helper 2.11"
D="C:/Users/jenks/code/tea-rea/decompiled"
n="$1"
LS=""; [ -f "$SP/manual/$n.libstart" ] && LS="--libstart $(cat "$SP/manual/$n.libstart")"
cd "$SP/tools" || exit 1
node names.js "$APP/$n.exe" "$D/raw/$n" "$SP/seeds/resources/$n.resources.json" "$SP/seeds/$n.symbols.json" "$SP/manual/$n.json" "$SP/seeds/$n.propagated.json" > /dev/null || exit 1
node organize.js "$APP/$n.exe" "$D/raw/$n" "$SP/seeds/$n.symbols.json" "$D/$n" "$SP/seeds/$n.prepare-report.txt" "$SP/seeds/resources/$n.rc" $LS

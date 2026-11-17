#!/usr/bin/env bash
# show.sh <exe> <addr> [maxlines] : print a raw decompiled function body without the REA header
f="/c/Users/jenks/code/tea-rea/decompiled/raw/$1/functions/$2.c"; n="${3:-80}"
echo "=================== $1 $2 ($(wc -l < "$f") lines) ==================="
awk 'f{print} /^\/\/ pseudocode:/{f=1}' "$f" | sed '/^$/d' | head -n "$n" | cut -c1-170

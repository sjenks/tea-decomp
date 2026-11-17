#!/usr/bin/env bash
# fnview.sh <Program> <0xADDR> [from] [to] : print one function from the generated tree with the
# Borland string-refcount boilerplate filtered out, for reading.
D="/c/Users/jenks/code/tea-rea/decompiled/$1"
a=$(printf '0x%08x' "$2")
awk -v a="// $a" 'index($0,a)==1{f=1} f{print} f&&/^}$/{exit}' "$D"/src/*.cpp "$D"/lib/*.cpp \
 | grep -vE '^\s*(local_[0-9a-f]+ = (local_[0-9a-f]+|&DAT_[0-9a-f]+|0|\(undefined[0-9]* ?\*?\)0x0|local_[0-9a-f]+ \+ -?(0xc|1)|[0-9a-fx]+);|[ip]Var[0-9]+ = 1;|operator_delete\(\);)$|\+ -0xc\) != -1|== -1 \|\| .* \+ 1 < 0|^\s*$|WARNING: Removing unreachable|__InitExceptBlockLDTC|in_FS_OFFSET' \
 | sed -n "${3:-1},${4:-400}p" | cut -c1-190

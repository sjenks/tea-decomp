#!/usr/bin/env bash
# skim.sh <exe> <fromHex> <toHex> [lines] : compact previews (declarations and noise removed)
cd "/c/Users/jenks/code/tea-rea/decompiled/raw/$1/functions" || exit 1
n="${4:-9}"
for f in $(ls | sed 's/\.c$//' | awk -v a="$2" -v b="$3" '$1>=a && $1<b'); do
  body=$(awk 'f{print} /^\/\/ pseudocode:/{f=1}' "$f.c" | grep -vE '^\s*$|^\{|^\}|^\s*(int|uint|char|byte|bool|undefined[0-9]?|short|ushort|code|void|float|double|HANDLE|DWORD|BOOL|LPCSTR|LPSTR|_FILETIME|_SYSTEMTIME|LPFILETIME|size_t|longlong|ulonglong)\b[^(=]*;$|WARNING|in_FS_OFFSET|local_28;|FUN_0041f3fc')
  echo "### $f ($(echo "$body" | wc -l)L)"; echo "$body" | head -n "$n" | cut -c1-160
done

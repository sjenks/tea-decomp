#!/usr/bin/env bash
# Build teacon. Uses the g++ on PATH, or the project-local MinGW (../_tools) if there is none.
set -e
cd "$(dirname "$0")"
LOCAL="$(pwd)/../_tools/mingw/mingw32/bin"
command -v g++ >/dev/null 2>&1 || { [ -x "$LOCAL/g++.exe" ] && export PATH="$LOCAL:$PATH"; }
mkdir -p bin
STATIC=""; case "$(uname -s)" in MINGW*|MSYS*|CYGWIN*) STATIC="-static";; esac
g++ -std=c++17 -O2 -Wall -Wextra -o bin/teacon src/tsd.cpp src/engine.cpp src/main.cpp $STATIC
echo "built bin/teacon"

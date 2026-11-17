#!/usr/bin/env bash
# Build tea.exe (the GUI). Uses the g++ on PATH, or the project-local MinGW (../_tools) if there is none.
# The pattern engine and dictionary reader are shared with the console rebuild in ../teacon-rebuild.
set -e
cd "$(dirname "$0")"
LOCAL="$(pwd)/../_tools/mingw/mingw32/bin"
command -v g++ >/dev/null 2>&1 || { [ -x "$LOCAL/g++.exe" ] && export PATH="$LOCAL:$PATH"; }
mkdir -p bin obj
SHARED=../teacon-rebuild/src
CXXFLAGS="-std=c++17 -O2 -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wno-cast-function-type -I$SHARED -DUNICODE -D_UNICODE -DWINVER=0x0A00 -D_WIN32_WINNT=0x0A00"
OBJS=""
for f in src/*.cpp $SHARED/tsd.cpp $SHARED/engine.cpp; do
    o="obj/$(basename "${f%.cpp}").o"
    if [ ! -f "$o" ] || [ "$f" -nt "$o" ] || [ -n "$(find src $SHARED -name '*.h' -newer "$o" 2>/dev/null | head -1)" ]; then
        g++ $CXXFLAGS -c "$f" -o "$o"
    fi
    OBJS="$OBJS $o"
done
windres -I src -i src/tea.rc -O coff -o obj/tea.res
# MinGW links its own default manifest; an empty stand-in found first keeps ours the only one.
mkdir -p obj/nomanifest
[ -f obj/nomanifest/default-manifest.o ] || { echo "" > obj/nomanifest/empty.c; gcc -c obj/nomanifest/empty.c -o obj/nomanifest/default-manifest.o; }
g++ -B obj/nomanifest/ -municode -mwindows -static -o bin/tea.exe $OBJS obj/tea.res \
    -lcomctl32 -lcomdlg32 -lgdi32 -luser32 -lshell32 -lole32 -luuid -luxtheme
# Developer and test tools.
g++ -std=c++17 -O2 -o bin/tsddump.exe tools/tsddump.cpp $SHARED/tsd.cpp -static
g++ $CXXFLAGS -o bin/savetsd_check.exe tests/savetsd_check.cpp src/savetsd.cpp src/results.cpp src/util.cpp $SHARED/tsd.cpp -static -luser32 -lgdi32 -lshell32 -lole32
echo "built bin/tea.exe"

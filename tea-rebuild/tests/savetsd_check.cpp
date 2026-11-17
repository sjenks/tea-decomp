// Writes a .tsd with the GUI's writer (savetsd::write), for checking that other programs read it.
//   savetsd_check out.tsd alphabet.tsd < words.txt      (one word per line, Windows-1252)
// The original TEACON.exe can then list the file with the pattern "*".
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

#include "../src/dialogs.h"
#include "../src/util.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        std::fprintf(stderr, "usage: savetsd_check out.tsd alphabet.tsd < words.txt\n");
        return 2;
    }
    tea::Dictionary alphabet;
    if (!alphabet.load(argv[2])) {
        std::fprintf(stderr, "cannot load %s\n", argv[2]);
        return 1;
    }
    std::vector<std::string> words;
    std::string line;
    while (std::getline(std::cin, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (!line.empty()) words.push_back(line);
    }
    const std::wstring err = savetsd::write(ui::widen(argv[1], CP_ACP), words, "savetsd_check test dictionary", alphabet);
    if (!err.empty()) {
        std::fprintf(stderr, "%s\n", ui::narrow(err, CP_ACP).c_str());
        return 1;
    }
    std::printf("wrote %zu words\n", words.size());
    return 0;
}

// The writer's dialog half refers to these; the check never shows the dialog.
#include "../src/app.h"
namespace app {
HINSTANCE instance() { return GetModuleHandleW(nullptr); }
void showHelp(HWND, const std::wstring&) {}
}

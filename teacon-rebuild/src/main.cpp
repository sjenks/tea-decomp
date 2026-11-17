// teacon — console word search over TEA&Sympathy dictionaries.
//
// An independent reimplementation of the search performed by the TEA Crossword Helper console
// program, written to give the same results for the same patterns and dictionaries. It takes the
// same command-line switches. Unlike the original it keeps no settings anywhere: defaults are
// built in, and the dictionaries must be named with /D: or the TEACON_DICTIONARIES variable.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#ifdef _WIN32
#include <fcntl.h>
#include <io.h>
#include <windows.h>
#endif

#include "engine.h"
#include "tsd.h"

#ifdef __MINGW32__
// Patterns are full of * and ?, so the MinGW runtime must not expand arguments as file wildcards.
extern "C" {
int _dowildcard = 0;
}
#endif

namespace {

struct Options {
    std::string dictionaries;
    std::string hash = "[^aeiou]";
    std::string at = "[aeiou]";
    int shortest = 1;
    int longest = 100;
    int annotations = 1;
    int balances = 1;
    int exclusive = 1;
    int ignoreUnused = 0;
    int output = 0;
    bool quiet = false;
};

bool startsWithNoCase(const char* s, const char* prefix) {
    for (; *prefix; s++, prefix++) {
        unsigned char a = static_cast<unsigned char>(*s), b = static_cast<unsigned char>(*prefix);
        if (a >= 'a' && a <= 'z') a = static_cast<unsigned char>(a - 32);
        if (b >= 'a' && b <= 'z') b = static_cast<unsigned char>(b - 32);
        if (a != b) return false;
    }
    return true;
}

bool isAsciiLetter(unsigned char c) { return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'); }
char lower(char c) { return c >= 'A' && c <= 'Z' ? static_cast<char>(c + 32) : c; }
char upper(char c) { return c >= 'a' && c <= 'z' ? static_cast<char>(c - 32) : c; }

// ASCII spelling of the Windows-1252 letters 0x80..0xFF; nullptr = no letter, dropped.
const char* asciiFor(unsigned char c) {
    switch (c) {
    case 0x8a: return "S";  case 0x8c: return "OE"; case 0x9a: return "s";  case 0x9c: return "oe"; case 0x9f: return "Y";
    case 0xc0: case 0xc1: case 0xc2: case 0xc3: case 0xc4: case 0xc5: return "A";
    case 0xc6: return "AE"; case 0xc7: return "C";
    case 0xc8: case 0xc9: case 0xca: case 0xcb: return "E";
    case 0xcc: case 0xcd: case 0xce: case 0xcf: return "I";
    case 0xd0: return "D";  case 0xd1: return "N";
    case 0xd2: case 0xd3: case 0xd4: case 0xd5: case 0xd6: case 0xd8: return "O";
    case 0xd9: case 0xda: case 0xdb: case 0xdc: return "U";
    case 0xdd: return "Y";  case 0xde: return "TH"; case 0xdf: return "ss";
    case 0xe0: case 0xe1: case 0xe2: case 0xe3: case 0xe4: case 0xe5: return "a";
    case 0xe6: return "ae"; case 0xe7: return "c";
    case 0xe8: case 0xe9: case 0xea: case 0xeb: return "e";
    case 0xec: case 0xed: case 0xee: case 0xef: return "i";
    case 0xf0: return "d";  case 0xf1: return "n";
    case 0xf2: case 0xf3: case 0xf4: case 0xf5: case 0xf6: case 0xf8: return "o";
    case 0xf9: case 0xfa: case 0xfb: case 0xfc: return "u";
    case 0xfd: case 0xff: return "y";
    case 0xfe: return "th";
    default: return nullptr;
    }
}

// /O: 0 as stored, 1 ASCII, 2 ASCII letters only, 3 lower-case letters, 4 upper-case letters.
std::string present(const std::string& s, int mode) {
    if (mode == 0) return s;
    std::string out;
    // A negative mode (from a negative /O: value) falls through the original's tests the same way:
    // plain characters are dropped and accented letters come out as upper-case ASCII.
    for (unsigned char c : s) {
        const char ch = static_cast<char>(c);
        if (c < 0x80) {
            if (mode == 1) out += ch;
            else if (mode == 2 && isAsciiLetter(c)) out += ch;
            else if (mode == 3 && isAsciiLetter(c)) out += lower(ch);
            else if (mode == 4 && isAsciiLetter(c)) out += upper(ch);
        } else if (const char* a = asciiFor(c)) {
            for (; *a; a++) out += (mode == 1 || mode == 2) ? *a : mode == 3 ? lower(*a) : upper(*a);
        }
    }
    return out;
}

// The original program leaves pipes untranslated (bare line feeds, bytes passed through) and uses
// text mode for files and the console. Do the same so that output is byte-for-byte comparable.
void matchStreamModes() {
#ifdef _WIN32
    const DWORD ids[3] = {STD_INPUT_HANDLE, STD_OUTPUT_HANDLE, STD_ERROR_HANDLE};
    std::FILE* const streams[3] = {stdin, stdout, stderr};
    for (int i = 0; i < 3; i++)
        if (GetFileType(GetStdHandle(ids[i])) == FILE_TYPE_PIPE) _setmode(_fileno(streams[i]), _O_BINARY);
#endif
}

// One pattern line from standard input; false at the end of input. The original reads into a
// 1000-byte buffer and stops at the first line that does not fit, so this does too. Unlike the
// original on a pipe, a carriage return before the line feed is not part of the pattern.
bool readLine(std::string& line) {
    line.clear();
    bool any = false;
    for (int c; (c = std::getc(stdin)) != EOF;) {
        any = true;
        if (c == '\n') break;
        line.push_back(static_cast<char>(c));
    }
    if (!any) return false;
    if (!line.empty() && line.back() == '\r') line.pop_back();
    if (line.size() > 999) return false;
    const size_t nul = line.find('\0');
    if (nul != std::string::npos) line.resize(nul);
    return true;
}

void usage(const Options& o) {
    std::fprintf(stderr,
        "teacon - word search over TEA&Sympathy dictionaries (reimplementation)\n\n"
        "teacon [/D:dictionaries] [/H:hash] [/A:at] [/S:shortest] [/L:longest]\n"
        "       [/N:annotations] [/B:balances] [/X:variables] [/U:ignored] [/O:output]\n"
        "       [/Q] [pattern ...]\n\n"
        "  /D:dictionaries  Semicolon-separated file list       (default=%s)\n"
        "  /H:hash          Hash (#) macro expansion            (default=%s)\n"
        "  /A:at            At (@) macro expansion              (default=%s)\n"
        "  /S:shortest      Minimum length of result            (default=%d)\n"
        "  /L:longest       Maximum length of result            (default=%d)\n"
        "  /N:annotations   0 = dictionary annotations omitted  (default=%d)\n"
        "                   1 = dictionary annotations shown\n"
        "  /B:balances      0 = anagram balances omitted        (default=%d)\n"
        "                   1 = anagram balances shown\n"
        "  /X:variables     0 = non-exclusive letter variables  (default=%d)\n"
        "                   1 = exclusive letter variables\n"
        "  /U:ignored       0 = unused punctuation significant  (default=%d)\n"
        "                   1 = unused punctuation ignored\n"
        "  /O:output        0 = exactly as in dictionary        (default=%d)\n"
        "                   1 = as ASCII\n"
        "                   2 = as ASCII letters\n"
        "                   3 = as ASCII lower case letters\n"
        "                   4 = as ASCII upper case letters\n"
        "  /Q               Quiet mode (no pattern/comment echoing)\n"
        "  pattern ...      TEA patterns to be matched\n\n"
        "                   If there are no patterns on the command line,\n"
        "                   each line of standard input is assumed to be\n"
        "                   a pattern to be matched.\n\n"
        "The default dictionary list comes from the TEACON_DICTIONARIES environment variable.\n",
        o.dictionaries.empty() ? "(none)" : o.dictionaries.c_str(), o.hash.c_str(), o.at.c_str(), o.shortest, o.longest,
        o.annotations, o.balances, o.exclusive, o.ignoreUnused, o.output);
}

} // namespace

int main(int argc, char** argv) {
    matchStreamModes();
    Options opt;
    bool dictionariesGiven = false;
    if (const char* env = std::getenv("TEACON_DICTIONARIES")) {
        opt.dictionaries = env;
        dictionariesGiven = env[0] != 0;
    }
    const Options defaults = opt;

    std::vector<std::string> patterns;
    for (int i = 1; i < argc; i++) {
        const char* a = argv[i];
        if (startsWithNoCase(a, "/D:")) { opt.dictionaries = a + 3; dictionariesGiven = true; }
        else if (startsWithNoCase(a, "/H:")) opt.hash = a + 3;
        else if (startsWithNoCase(a, "/A:")) opt.at = a + 3;
        else if (startsWithNoCase(a, "/S:")) opt.shortest = static_cast<int>(std::atol(a + 3));
        else if (startsWithNoCase(a, "/L:")) opt.longest = static_cast<int>(std::atol(a + 3));
        else if (startsWithNoCase(a, "/N:")) opt.annotations = static_cast<int>(std::atol(a + 3));
        else if (startsWithNoCase(a, "/B:")) opt.balances = static_cast<int>(std::atol(a + 3));
        else if (startsWithNoCase(a, "/X:")) opt.exclusive = static_cast<int>(std::atol(a + 3));
        else if (startsWithNoCase(a, "/U:")) opt.ignoreUnused = static_cast<int>(std::atol(a + 3));
        else if (startsWithNoCase(a, "/O:")) opt.output = static_cast<int>(std::atol(a + 3) % 5);
        else if (startsWithNoCase(a, "/Q") && a[2] == 0) opt.quiet = true;
        else if (a[0] == '/') { usage(defaults); return 1; }
        else patterns.emplace_back(a);
    }

    if (!dictionariesGiven) {
        std::fprintf(stderr, "No dictionaries: name them with /D:file.tsd[;file2.tsd] or set TEACON_DICTIONARIES\n");
        return 1;
    }
    // Open every dictionary before doing anything else. As in the original, every item between
    // semicolons is a file name, so an empty item (a stray or trailing semicolon) is an error.
    std::vector<tea::Dictionary> dicts;
    {
        size_t start = 0;
        const std::string& list = opt.dictionaries;
        while (start <= list.size()) {
            size_t end = list.find(';', start);
            if (end == std::string::npos) end = list.size();
            const std::string name = list.substr(start, end - start);
            start = end + 1;
            dicts.emplace_back();
            if (!dicts.back().load(name)) {
                std::fprintf(stderr, "\"%s\" is not a valid dictionary\n", name.c_str());
                return 1;
            }
        }
    }

    static char outBuffer[1 << 16];
    std::setvbuf(stdout, outBuffer, _IOFBF, sizeof outBuffer);

    int exitCode = 0;
    tea::WordBuffer buffer;
    tea::Dictionary::Word word;
    const auto run = [&](const std::string& pattern) {
        if (!pattern.empty() && (pattern[0] == ' ' || pattern[0] == '\t')) {   // a comment
            if (!opt.quiet) std::printf("%s\n", pattern.c_str());
            return;
        }
        if (!opt.quiet) std::printf(" %s\n", pattern.c_str());
        const std::string query = tea::expandMacros(pattern, opt.at, opt.hash);

        for (const tea::Dictionary& dict : dicts) {
            tea::MatchEngineSet set;
            const int status = set.compile(dict, query, opt.shortest, opt.longest, opt.ignoreUnused != 0, opt.exclusive != 0);
            if (status != 0) {
                std::fflush(stdout);
                if (status > 0 && status < 15) std::fprintf(stderr, "Pattern error: %s\n", tea::errorText(status));
                exitCode = 1;
                break;
            }
            int first, last;
            set.lengthRange(first, last);
            for (int length = first; length <= last; length++) {
                if (!dict.hasLength(length)) continue;
                tea::Dictionary::Reader reader(dict, length);
                if (!reader.ok()) continue;
                set.setWordLength(length);
                while (reader.next(word)) {
                    buffer.set(word);
                    if (!set.matches(buffer, length)) continue;
                    std::string text = word.display;
                    // An annotation carries its own leading space in the dictionary; none is added.
                    if (opt.annotations != 0) text += word.annotation;
                    text = present(text, opt.output);
                    if (opt.balances != 0) text += set.balanceText();
                    std::fwrite(text.data(), 1, text.size(), stdout);
                    std::fputc('\n', stdout);
                }
            }
        }
        std::fflush(stdout);   // results appear as each pattern finishes, as when typing patterns in
    };

    if (!patterns.empty()) {
        for (const std::string& pattern : patterns) run(pattern);
    } else {
        std::string line;
        while (readLine(line)) run(line);
    }
    std::fflush(stdout);
    return exitCode;
}

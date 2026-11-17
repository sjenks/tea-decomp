// Developer tool: shows what a .tsd file holds for one word (entries, link groups, definitions).
//   tsddump dictionary.tsd word          definitions of word (exact letters, any case/punctuation)
//   tsddump dictionary.tsd --header      header summary
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

#include "../../teacon-rebuild/src/tsd.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        std::fprintf(stderr, "usage: tsddump file.tsd word|--header\n");
        return 2;
    }
    tea::Dictionary d;
    if (!d.load(argv[1])) {
        std::fprintf(stderr, "cannot load %s\n", argv[1]);
        return 1;
    }
    if (std::strcmp(argv[2], "--header") == 0) {
        std::printf("format TSD%d lengths %d defs [%u %u %u] definitions %d\n", d.format, d.numLengths, d.defStart, d.defPass2, d.defEnd, d.definitionCount());
        for (int n = 1; n < d.numLengths; n++)
            if (d.wordCount[n]) std::printf("  %3d: %u words, stream %u, links %u@%u, occ %u\n", n, d.wordCount[n], d.wordStreamOffset[n], d.defLinkCount[n], d.defLinkOffset[n], d.occIndexOffset[n]);
        return 0;
    }
    if (std::strcmp(argv[2], "--links-to") == 0 && argc > 3) {
        // Every entry whose link group contains the definition at this offset.
        const uint32_t want = static_cast<uint32_t>(std::strtoul(argv[3], nullptr, 10));
        for (int n = 1; n < d.numLengths; n++) {
            if (!d.hasLength(n)) continue;
            tea::Dictionary::Reader r(d, n);
            tea::Dictionary::Word w;
            int linked = 0;
            while (r.next(w)) {
                if (!w.hasLinks) continue;
                const int k = linked++;
                for (uint32_t off : d.linkGroup(n, k))
                    if (off == want) std::printf("%s%s\n", w.display.c_str(), w.annotation.c_str());
            }
        }
        return 0;
    }
    const std::string target = argv[2];
    std::string key;
    for (unsigned char c : target)
        if (d.letterIndex[c] != tea::kNotLetter) key.push_back(static_cast<char>(d.letterIndex[c]));
    const int length = static_cast<int>(key.size());
    tea::Dictionary::Reader r(d, length);
    tea::Dictionary::Word w;
    int linked = 0;
    while (r.next(w)) {
        const int k = w.hasLinks ? linked++ : -1;
        if (std::string(w.letters.begin(), w.letters.end()) != key) continue;
        std::printf("entry \"%s\" annotation \"%s\" links %d\n", w.display.c_str(), w.annotation.c_str(), k);
        if (k < 0) continue;
        for (uint32_t off : d.linkGroup(length, k)) {
            if (off == tea::kTooManyOccurrences) { std::printf("  occurrences: too many\n"); continue; }
            if (off >= d.defEnd) {
                std::printf("  occurrence list @%u:", off);
                for (uint32_t o : d.occurrences(off)) std::printf(" %u", o);
                std::printf("\n");
                continue;
            }
            tea::Definition def;
            d.readDefinition(off, def);
            std::printf("  definition @%u:", off);
            for (size_t i = 0; i < def.headwords.size(); i++) std::printf(" [%s|%s]", def.headwords[i].c_str(), def.qualifiers[i].c_str());
            std::printf("\n    %s\n", def.text.c_str());
        }
    }
    return 0;
}

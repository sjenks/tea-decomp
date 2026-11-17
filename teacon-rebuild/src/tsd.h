// Reader for TEA&Sympathy dictionary files (.tsd), formats TSD0 and TSD1.
//
// A dictionary stores its words grouped by length (number of letters, not bytes) as a
// Huffman-coded bit stream per length. Only the header is loaded; words are decoded on demand.
#pragma once
#include <cstdint>
#include <cstdio>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

namespace tea {

constexpr int kNotLetter = 0xff;   // letterIndex value for bytes that are not letters
constexpr int kMaxWordLength = 100;

// One definition record (TSD1). Strings are stored XOR 0xBD in the file; these are decoded.
struct Definition {
    uint32_t offset = 0;
    std::vector<std::string> headwords;      // empty for a cross-reference stub (";alias|See ...")
    std::vector<std::string> qualifiers;     // one per headword, spaces kept (" 1 n.")
    std::string text;                        // plain text, or RTF starting "{\rtf1"
};

constexpr uint32_t kTooManyOccurrences = 0x7fffffff;   // occurrence list dropped when the dictionary was built

struct Dictionary {
    std::string path;
    int format = 0;                          // 0 = "TSD0", 1 = "TSD1"
    int numLengths = 0;                      // longest word length + 1
    std::vector<uint32_t> wordStreamOffset;  // [numLengths] file offset of each length's word stream
    std::vector<uint32_t> wordCount;         // [numLengths]
    std::string description;

    // TSD1 only (left empty / zero for TSD0).
    uint32_t defStart = 0, defPass2 = 0, defEnd = 0;   // definition section: stubs, then headword definitions
    std::vector<uint32_t> occIndexOffset;    // [numLengths] full-text index of words found only in definitions
    std::vector<uint32_t> defLinkOffset;     // [numLengths] link table of words that have definitions
    std::vector<uint32_t> defLinkCount;      // [numLengths] uint32 entries in that table
    bool hasDefinitions() const { return defEnd > defStart; }

    // Reads the definition record at `offset`. False if the offset is outside the definition section.
    bool readDefinition(uint32_t offset, Definition& out) const;
    // The link group of the k-th linked word of `length` (k counts words whose hasLinks bit is set).
    // Entries are returned without the end-of-group bit. Empty if there is no such group.
    std::vector<uint32_t> linkGroup(int length, int k) const;
    // Definition offsets in the occurrence list at `offset` (full-text index).
    std::vector<uint32_t> occurrences(uint32_t offset) const;
    // Pointer table of the words of `length` that occur only in definitions (empty if none).
    std::vector<uint32_t> occurrenceIndex(int length) const;
    // Number of definition records (counted by walking the section once; cached).
    int definitionCount() const;
    int numUsedLetters = 0;                  // letter classes that occur in this dictionary
    int numTotalLetters = 0;                 // letter classes in its alphabet

    uint8_t letterIndex[256];                // byte -> letter class, or kNotLetter
    uint8_t canonical[256];                  // letter class -> the byte that represents it (e.g. 'A')
    uint8_t codeLength[256];                 // byte -> Huffman code length (0 = unused)

    // Returns false (and leaves the object unusable) if the file is missing or not a valid dictionary.
    bool load(const std::string& file);

    // True if this dictionary has any words with exactly `length` letters.
    bool hasLength(int length) const;

    // One decoded entry. `letters` holds the letter classes of the word part only.
    struct Word {
        std::string display;       // the word as stored, punctuation and case included
        std::string annotation;    // text after the word, if the entry has any
        bool hasAnnotation = false;
        bool hasLinks = false;     // TSD1: the word has definitions or a full-text occurrence list
        std::vector<uint8_t> letters;
    };

    // Sequential reader over the words of one length.
    class Reader {
    public:
        Reader(const Dictionary& dict, int length);
        ~Reader();
        Reader(const Reader&) = delete;
        Reader& operator=(const Reader&) = delete;
        bool ok() const { return file_ != nullptr; }
        bool next(Word& out);      // false at the end of this length's words
        // After next() has returned false: the words of this length that occur only inside
        // definitions (TSD1), in the order of occurrenceIndex(). False at the end.
        bool nextDefinitionOnly(std::string& word);
    private:
        void fill();               // tops up the pending bits from the file
        int nextByte();            // decodes one byte; -1 at end of file or on an impossible code
        const Dictionary& dict_;
        std::FILE* file_ = nullptr;
        std::vector<uint8_t> buf_;
        size_t pos_ = 0, len_ = 0;
        uint64_t acc_ = 0;         // pending bits; the next bit of the stream is bit 0
        int nbits_ = 0;
        bool eof_ = false;
        bool linkBits_ = false;
        bool done_ = false;
        bool secondDone_ = false;
    };

private:
    // Caches for the definition lookups; the GUI reads them from more than one thread.
    std::unique_ptr<std::mutex> cacheLock_ = std::make_unique<std::mutex>();
    mutable std::vector<std::vector<uint32_t>> linkTables_;     // loaded on first use, per length
    mutable std::vector<std::vector<uint32_t>> groupStarts_;    // index of each group's first entry
    mutable int definitionCount_ = -1;
    const std::vector<uint32_t>& linkTable(int length) const;
    static constexpr int kFastBits = 11;
    static constexpr uint16_t kBadCode = 0xffff;
    int32_t trie_[768][2];                   // Huffman decoding tree; node 256 is the root, values < 256 are bytes
    // What the next kFastBits bits decode to: (code length << 12) | byte when the code is that short,
    // otherwise the tree node reached (length field 0), or kBadCode if no code starts that way.
    uint16_t fast_[1 << kFastBits];
    friend class Reader;
};

} // namespace tea

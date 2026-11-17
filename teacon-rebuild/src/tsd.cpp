#include "tsd.h"

#include <algorithm>
#include <cstring>

namespace tea {

namespace {

bool readExact(std::FILE* f, void* dst, size_t n) { return std::fread(dst, 1, n, f) == n; }

bool readU16(std::FILE* f, uint16_t& v) {
    uint8_t b[2];
    if (!readExact(f, b, 2)) return false;
    v = static_cast<uint16_t>(b[0] | (b[1] << 8));
    return true;
}

bool readU32(std::FILE* f, uint32_t& v) {
    uint8_t b[4];
    if (!readExact(f, b, 4)) return false;
    v = static_cast<uint32_t>(b[0]) | (static_cast<uint32_t>(b[1]) << 8) | (static_cast<uint32_t>(b[2]) << 16) | (static_cast<uint32_t>(b[3]) << 24);
    return true;
}

bool readU32Array(std::FILE* f, std::vector<uint32_t>& out, int n) {
    out.resize(n);
    for (int i = 0; i < n; i++)
        if (!readU32(f, out[i])) return false;
    return true;
}

} // namespace

bool Dictionary::load(const std::string& file) {
    path = file;
    std::FILE* f = std::fopen(file.c_str(), "rb");
    if (!f) return false;
    struct Closer { std::FILE* f; ~Closer() { std::fclose(f); } } closer{f};

    char magic[4];
    if (!readExact(f, magic, 4)) return false;
    if (std::memcmp(magic, "TSD0", 4) != 0 && std::memcmp(magic, "TSD1", 4) != 0) return false;
    format = magic[3] - '0';

    uint16_t n;
    if (!readU16(f, n)) return false;
    numLengths = n;

    size_t descriptionSize = 80;
    if (format != 0) {
        // TSD1 adds the definition section and the full-text index (word search needs none of it).
        descriptionSize = 1000;
        if (!readU32(f, defStart) || !readU32(f, defPass2) || !readU32(f, defEnd)) return false;
        if (!readU32Array(f, occIndexOffset, numLengths)) return false;
        if (!readU32Array(f, defLinkOffset, numLengths)) return false;
        if (!readU32Array(f, defLinkCount, numLengths)) return false;
        linkTables_.assign(numLengths, {});
        groupStarts_.assign(numLengths, {});
    }
    if (!readU32Array(f, wordStreamOffset, numLengths)) return false;
    if (!readU32Array(f, wordCount, numLengths)) return false;

    std::vector<char> desc(descriptionSize);
    if (!readExact(f, desc.data(), descriptionSize)) return false;
    { const void* nul = std::memchr(desc.data(), 0, descriptionSize); description.assign(desc.data(), nul ? static_cast<size_t>(static_cast<const char*>(nul) - desc.data()) : descriptionSize); }

    uint16_t used, total;
    if (!readU16(f, used) || !readU16(f, total)) return false;
    numUsedLetters = static_cast<int16_t>(used);
    numTotalLetters = static_cast<int16_t>(total);
    if (numUsedLetters < 0 || numUsedLetters > 0xfd || numTotalLetters < 1 || numTotalLetters > 0xfd || numTotalLetters < numUsedLetters) return false;

    std::memset(canonical, '!', sizeof canonical);
    std::memset(codeLength, 0, sizeof codeLength);
    std::memset(letterIndex, kNotLetter, sizeof letterIndex);
    for (auto& node : trie_) node[0] = node[1] = -1;

    // One 8-byte record per byte value: canonical byte, code length, letter class, Huffman code.
    // The code is stored most significant bit first; the stream presents that same bit first.
    int nextNode = 257;
    for (int c = 0; c < 256; c++) {
        uint8_t rec[8];
        if (!readExact(f, rec, 8)) return false;
        const uint8_t canon = rec[0], len = rec[1];
        const int16_t index = static_cast<int16_t>(rec[2] | (rec[3] << 8));
        const uint32_t code = static_cast<uint32_t>(rec[4]) | (static_cast<uint32_t>(rec[5]) << 8) | (static_cast<uint32_t>(rec[6]) << 16) | (static_cast<uint32_t>(rec[7]) << 24);
        if (len != 0) {
            int node = 256;
            for (int bit = len; bit > 1; bit--) {
                if (node < 256 || node >= 768) return false;
                if (trie_[node][0] < 0) trie_[node][0] = nextNode++;
                if (trie_[node][1] < 0) trie_[node][1] = nextNode++;
                node = trie_[node][(code >> (bit - 1)) & 1];
            }
            if (node < 256 || node >= 768) return false;
            trie_[node][code & 1] = c;
            codeLength[c] = len;
        }
        if (index >= 0) {
            letterIndex[c] = static_cast<uint8_t>(index);
            canonical[index & 0xff] = canon;
        }
    }

    // Decoding shortcut: resolve the first kFastBits bits of any code with one table lookup.
    for (int bits = 0; bits < (1 << kFastBits); bits++) {
        int node = 256;
        uint16_t entry = 0;
        for (int i = 0; i < kFastBits; i++) {
            const int next = trie_[node][(bits >> i) & 1];
            if (next < 0) { entry = kBadCode; break; }
            if (next < 256) { entry = static_cast<uint16_t>(((i + 1) << 12) | next); break; }
            node = next;
        }
        fast_[bits] = entry != 0 ? entry : static_cast<uint16_t>(node);
    }
    return true;
}

bool Dictionary::hasLength(int length) const {
    if (length <= 0 || length >= numLengths) return false;
    // Empty lengths repeat the next length's offset, so an increase means there is data here.
    if (length != numLengths - 1 && wordStreamOffset[length + 1] <= wordStreamOffset[length]) return false;
    return true;
}

Dictionary::Reader::Reader(const Dictionary& dict, int length) : dict_(dict), buf_(1 << 16) {
    if (!dict.hasLength(length)) return;
    file_ = std::fopen(dict.path.c_str(), "rb");
    if (!file_) return;
    if (std::fseek(file_, static_cast<long>(dict.wordStreamOffset[length]), SEEK_SET) != 0) {
        std::fclose(file_);
        file_ = nullptr;
        return;
    }
    linkBits_ = dict.format != 0;   // TSD1 follows every word with one "has definitions" bit
}

Dictionary::Reader::~Reader() {
    if (file_) std::fclose(file_);
}

// The stream is read least significant bit first, so bytes are added above the bits still pending.
void Dictionary::Reader::fill() {
    while (nbits_ <= 56) {
        if (pos_ == len_) {
            if (eof_) return;
            len_ = std::fread(buf_.data(), 1, buf_.size(), file_);
            pos_ = 0;
            if (len_ == 0) { eof_ = true; return; }
        }
        acc_ |= static_cast<uint64_t>(buf_[pos_++]) << nbits_;
        nbits_ += 8;
    }
}

int Dictionary::Reader::nextByte() {
    if (nbits_ < 32) fill();
    int node = 256;
    if (nbits_ >= kFastBits) {
        const uint16_t entry = dict_.fast_[acc_ & ((1u << kFastBits) - 1)];
        if (entry == kBadCode) return -1;
        const int length = entry >> 12;
        if (length != 0) {
            acc_ >>= length;
            nbits_ -= length;
            return entry & 0xff;
        }
        node = entry;               // a longer code: carry on down the tree one bit at a time
        acc_ >>= kFastBits;
        nbits_ -= kFastBits;
    }
    while (node >= 256) {
        if (nbits_ == 0) {
            fill();
            if (nbits_ == 0) return -1;
        }
        if (node >= 768) return -1;
        node = dict_.trie_[node][acc_ & 1];
        acc_ >>= 1;
        nbits_--;
        if (node < 0) return -1;
    }
    return node;
}

bool Dictionary::Reader::next(Word& out) {
    if (!file_ || done_) return false;
    out.display.clear();
    out.annotation.clear();
    out.letters.clear();
    out.hasAnnotation = false;
    out.hasLinks = false;
    for (;;) {
        const int byte = nextByte();
        if (byte < 0) { done_ = true; return false; }
        const uint8_t c = static_cast<uint8_t>(byte);
        if (c == 0) break;
        if (out.hasAnnotation) {
            out.annotation.push_back(static_cast<char>(c));
        } else if (c == '\n') {
            out.hasAnnotation = true;    // everything after the line feed is annotation
        } else {
            out.display.push_back(static_cast<char>(c));
            if (dict_.letterIndex[c] != kNotLetter) out.letters.push_back(dict_.letterIndex[c]);
        }
    }
    // An entry with no letters marks the end of this length's words (what follows is the index of
    // words that occur only inside definitions).
    if (out.letters.empty() && !out.hasAnnotation) { done_ = true; return false; }
    if (linkBits_) {
        if (nbits_ == 0) fill();
        if (nbits_ == 0) {
            done_ = true;
        } else {
            out.hasLinks = (acc_ & 1) != 0;
            acc_ >>= 1;
            nbits_--;
        }
    }
    return true;
}

bool Dictionary::Reader::nextDefinitionOnly(std::string& word) {
    word.clear();
    if (!file_ || !linkBits_ || secondDone_) return false;
    if (!done_) {                      // skip whatever is left of the dictionary words
        Word w;
        while (next(w)) {}
    }
    for (;;) {
        const int byte = nextByte();
        if (byte < 0) { secondDone_ = true; return false; }
        if (byte == 0) break;
        word.push_back(static_cast<char>(byte));
    }
    if (word.empty()) { secondDone_ = true; return false; }
    return true;
}

// ---------------------------------------------------------------------------------------------
// Definitions and the full-text index (TSD1)

namespace {

struct File {
    std::FILE* f;
    explicit File(const std::string& path) : f(std::fopen(path.c_str(), "rb")) {}
    ~File() { if (f) std::fclose(f); }
    bool seek(uint32_t offset) { return f && std::fseek(f, static_cast<long>(offset), SEEK_SET) == 0; }
};

// Reads one string stored XOR 0xBD and ended by 0xBD.
bool readXorString(std::FILE* f, std::string& out) {
    out.clear();
    for (;;) {
        const int c = std::fgetc(f);
        if (c == EOF) return false;
        if (c == 0xbd) return true;
        out.push_back(static_cast<char>(c ^ 0xbd));
    }
}

} // namespace

bool Dictionary::readDefinition(uint32_t offset, Definition& out) const {
    out = Definition{};
    out.offset = offset;
    if (!hasDefinitions() || offset < defStart || offset >= defEnd) return false;
    File file(path);
    if (!file.seek(offset)) return false;
    const int count = std::fgetc(file.f);
    if (count == EOF) return false;
    for (int i = 0; i < count; i++) {
        std::string head, qualifier;
        if (!readXorString(file.f, head) || !readXorString(file.f, qualifier)) return false;
        out.headwords.push_back(std::move(head));
        out.qualifiers.push_back(std::move(qualifier));
    }
    return readXorString(file.f, out.text);
}

const std::vector<uint32_t>& Dictionary::linkTable(int length) const {
    // Called with cacheLock_ held.
    static const std::vector<uint32_t> none;
    if (length <= 0 || length >= numLengths || linkTables_.empty()) return none;
    std::vector<uint32_t>& table = linkTables_[length];
    if (table.empty() && defLinkCount[length] != 0 && defLinkOffset[length] != 0) {
        File file(path);
        if (!file.seek(defLinkOffset[length])) return none;
        if (!readU32Array(file.f, table, static_cast<int>(defLinkCount[length]))) { table.clear(); return none; }
        std::vector<uint32_t>& starts = groupStarts_[length];
        starts.clear();
        bool atStart = true;
        for (size_t i = 0; i < table.size(); i++) {
            if (atStart) starts.push_back(static_cast<uint32_t>(i));
            atStart = (table[i] & 0x80000000u) != 0;
        }
    }
    return table;
}

std::vector<uint32_t> Dictionary::linkGroup(int length, int k) const {
    std::vector<uint32_t> group;
    std::lock_guard<std::mutex> lock(*cacheLock_);
    const std::vector<uint32_t>& table = linkTable(length);
    if (table.empty() || k < 0) return group;
    const std::vector<uint32_t>& starts = groupStarts_[length];
    if (static_cast<size_t>(k) >= starts.size()) return group;
    for (size_t i = starts[k]; i < table.size(); i++) {
        group.push_back(table[i] & 0x7fffffffu);
        if (table[i] & 0x80000000u) break;
    }
    return group;
}

std::vector<uint32_t> Dictionary::occurrences(uint32_t offset) const {
    std::vector<uint32_t> list;
    if (offset == kTooManyOccurrences || offset < defEnd) return list;
    File file(path);
    if (!file.seek(offset)) return list;
    for (;;) {
        uint32_t v;
        if (!readU32(file.f, v)) break;
        list.push_back(v & 0x7fffffffu);
        if (v & 0x80000000u) break;
    }
    return list;
}

std::vector<uint32_t> Dictionary::occurrenceIndex(int length) const {
    std::vector<uint32_t> table;
    if (length <= 0 || length >= numLengths || occIndexOffset.empty() || occIndexOffset[length] == 0) return table;
    // The table runs up to this length's word stream, which immediately follows it.
    const uint32_t start = occIndexOffset[length], end = wordStreamOffset[length];
    if (end <= start) return table;
    File file(path);
    if (!file.seek(start)) return table;
    if (!readU32Array(file.f, table, static_cast<int>((end - start) / 4))) table.clear();
    return table;
}

int Dictionary::definitionCount() const {
    std::lock_guard<std::mutex> lock(*cacheLock_);
    if (definitionCount_ >= 0) return definitionCount_;
    int count = 0;
    if (hasDefinitions()) {
        File file(path);
        if (file.seek(defStart)) {
            std::vector<uint8_t> buf(1 << 16);
            uint32_t pos = defStart;
            // Each record: count byte, then 2 * count + 1 strings each ended by 0xBD.
            int pendingStrings = -1;     // -1: the next byte is a record's count byte
            while (pos < defEnd) {
                const size_t want = std::min<size_t>(buf.size(), defEnd - pos);
                const size_t got = std::fread(buf.data(), 1, want, file.f);
                if (got == 0) break;
                for (size_t i = 0; i < got; i++) {
                    if (pendingStrings < 0) {
                        pendingStrings = 2 * buf[i] + 1;
                        count++;
                    } else if (buf[i] == 0xbd && --pendingStrings == 0) {
                        pendingStrings = -1;
                    }
                }
                pos += static_cast<uint32_t>(got);
            }
        }
    }
    definitionCount_ = count;
    return count;
}

} // namespace tea

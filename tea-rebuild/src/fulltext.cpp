#include "fulltext.h"

#include <algorithm>
#include <cstdio>
#include <memory>
#include <vector>

namespace fulltext {

Search::Search(const tea::Dictionary& dict, const std::string& query, int shortest, int longest, bool ignoreUnused, bool exclusive) : dict_(dict) {
    status_ = set_.compile(dict, query, shortest, longest, ignoreUnused, exclusive);
}

bool Search::run(const ProgressFn& progress, const HitFn& hit) {
    if (status_ != 0) return true;
    // Only headword definitions (the second part of the definition section) are searched.
    if (!(dict_.defPass2 < dict_.defEnd)) return true;
    const int r = runIndexed(progress, hit);
    if (r < 0) return false;
    if (r > 0) return true;
    return runSequential(progress, hit);
}

bool Search::emit(uint32_t offset, const HitFn& hit) {
    tea::Definition d;
    if (!dict_.readDefinition(offset, d) || d.headwords.empty()) return false;
    Hit h;
    // The original reads both into 128-byte buffers.
    h.headword = d.headwords[0].substr(0, 127);
    h.qualifier = d.qualifiers[0].substr(0, 127);
    h.offset = offset;
    hit(h);
    return true;
}

// The definitions one leaf's matching words lead to: each matching dictionary word's own definitions
// and the definitions the full-text index lists it in, then the same for matching words that occur
// only in definitions. Every length the leaf can match is visited. False if a matching word was too
// common to be indexed (the original then falls back to reading every definition).
int Search::collectLeaf(tea::MatchEngine& e, std::vector<uint32_t>& out, const ProgressFn& progress) {
    tea::WordBuffer buffer;
    tea::Dictionary::Word word;
    const int lo = e.minLength(), hi = e.maxLength();
    for (int length = lo; length <= hi; length++) {
        if (!progress(length, lo, hi, 0.0)) return -1;
        if (!dict_.hasLength(length)) continue;
        tea::Dictionary::Reader reader(dict_, length);
        if (!reader.ok()) continue;
        e.setWordLength(length);
        int linked = 0;
        unsigned seen = 0;
        while (reader.next(word)) {
            if ((++seen & 4095) == 0 && !progress(length, lo, hi, seen / std::max(1.0, double(dict_.wordCount[length])))) return -1;
            if (!word.hasLinks) continue;
            const int k = linked++;
            buffer.set(word);
            if (!e.matchWord(buffer)) continue;
            const std::vector<uint32_t> group = dict_.linkGroup(length, k);
            if (group.empty()) continue;
            for (uint32_t off : group)
                if (off >= dict_.defStart && off < dict_.defEnd) out.push_back(off);
            const uint32_t lastEntry = group.back();
            if (lastEntry == tea::kTooManyOccurrences) return 0;
            if (lastEntry < dict_.defEnd) continue;
            const std::vector<uint32_t> occ = dict_.occurrences(lastEntry);
            out.insert(out.end(), occ.begin(), occ.end());
        }
        const std::vector<uint32_t> index = dict_.occurrenceIndex(length);
        std::string only;
        size_t j = 0;
        while (reader.nextDefinitionOnly(only)) {
            const size_t at = j++;
            word.display = only;
            word.letters.clear();
            for (unsigned char c : only)
                if (dict_.letterIndex[c] != tea::kNotLetter) word.letters.push_back(dict_.letterIndex[c]);
            buffer.set(word);
            if (!e.matchWord(buffer)) continue;
            if (at >= index.size()) continue;
            if (index[at] == tea::kTooManyOccurrences) return 0;
            const std::vector<uint32_t> occ = dict_.occurrences(index[at]);
            out.insert(out.end(), occ.begin(), occ.end());
        }
    }
    std::sort(out.begin(), out.end());
    out.erase(std::unique(out.begin(), out.end()), out.end());
    return 1;
}

int Search::runIndexed(const ProgressFn& progress, const HitFn& hit) {
    // TSDictionaryDefinitionSearchIndexed in the original. It takes the index unless an operator
    // before the end carries a NOT or a leaf before the last can match more than one length; its
    // loop stops at the end marker before looking at the last leaf, so a single pattern always
    // qualifies whatever its lengths.
    const std::string& ops = set_.opcodes();
    for (size_t pos = 0; pos < ops.size(); pos++) {
        const uint8_t o = static_cast<uint8_t>(ops[pos]);
        if (o == 3) break;
        if (o & 8) return 0;
        if (pos < set_.slotCount())
            if (tea::MatchEngine* e = set_.leaf(pos))
                if (e->minLength() != e->maxLength()) return 0;
    }
    // The leaves' definition sets are combined strictly left to right, with brackets: unlike word
    // search, a & b | c is (a & b) | c here.
    using Set = std::vector<uint32_t>;
    auto combine = [](const Set& a, const Set& b, uint8_t op) {
        Set r;
        if (op == 1) std::set_union(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(r));
        else std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(r));
        return r;
    };
    Set result;
    std::vector<std::pair<Set, uint8_t>> stack;   // saved result and the operator joining the group to it
    size_t pos = 0;
    for (;;) {
        if (pos >= ops.size()) break;
        for (; pos < ops.size() && static_cast<uint8_t>(ops[pos]) == 4; pos++) {
            const uint8_t before = pos == 0 ? 4 : static_cast<uint8_t>(ops[pos - 1]);
            stack.emplace_back(std::move(result), before == 4 ? 1 : before);
            result.clear();
        }
        Set leaf;
        if (pos < set_.slotCount())
            if (tea::MatchEngine* e = set_.leaf(pos)) {
                const int r = collectLeaf(*e, leaf, progress);
                if (r <= 0) return r;
            }
        const uint8_t before = pos == 0 ? 4 : static_cast<uint8_t>(ops[pos - 1]);
        if (before == 4) result = std::move(leaf);
        else result = combine(result, leaf, before);
        for (; pos < ops.size() && static_cast<uint8_t>(ops[pos]) == 5; pos++) {
            if (stack.empty()) break;
            result = combine(stack.back().first, result, stack.back().second);
            stack.pop_back();
        }
        if (pos >= ops.size() || static_cast<uint8_t>(ops[pos++]) == 3) break;
    }
    usedIndex_ = true;
    for (uint32_t off : result) emit(off, hit);
    return 1;
}

bool Search::runSequential(const ProgressFn& progress, const HitFn& hit) {
    std::unique_ptr<std::FILE, int (*)(std::FILE*)> file(std::fopen(dict_.path.c_str(), "rb"), &std::fclose);
    if (!file) return true;
    std::setvbuf(file.get(), nullptr, _IOFBF, 1 << 18);
    std::FILE* f = file.get();
    if (std::fseek(f, static_cast<long>(dict_.defPass2), SEEK_SET) != 0) return true;

    const size_t slots = set_.slotCount();
    std::vector<uint8_t> values(slots);
    tea::WordBuffer buffer;
    tea::Dictionary::Word word;
    uint32_t pos = dict_.defPass2;
    const double span = std::max<double>(1, dict_.defEnd - dict_.defPass2);
    unsigned records = 0;
    std::string head, qualifier, token;

    auto get = [&]() -> int { const int c = std::fgetc(f); if (c != EOF) pos++; return c; };
    while (pos < dict_.defEnd) {
        if ((++records & 255) == 0 && !progress(-1, 0, 0, (pos - dict_.defPass2) / span)) return false;
        const uint32_t recordOffset = pos;
        const int count = get();
        if (count == EOF) break;
        // First headword and qualifier, then skip any others.
        for (int s = 0; s < 2 * count; s++) {
            std::string* into = s == 0 ? &head : s == 1 ? &qualifier : nullptr;
            if (into) into->clear();
            for (;;) {
                const int c = get();
                if (c == EOF || c == 0xbd) break;
                if (into && into->size() < 127) into->push_back(static_cast<char>(c ^ 0xbd));
            }
        }
        // Undecided leaves stay 0; once every leaf has matched the rest of the text is skipped.
        std::fill(values.begin(), values.end(), 0);
        size_t pendingLeaves = 0;
        for (size_t i = 0; i < slots; i++) if (set_.leaf(i)) pendingLeaves++;
        int c = get();
        while (c != EOF && c != 0xbd) {
            const uint8_t b = static_cast<uint8_t>(c ^ 0xbd);
            if (dict_.letterIndex[b] == tea::kNotLetter) { c = get(); continue; }
            token.clear();
            word.letters.clear();
            while (c != EOF && c != 0xbd) {
                const uint8_t ch = static_cast<uint8_t>(c ^ 0xbd);
                if (dict_.letterIndex[ch] == tea::kNotLetter) break;
                if (word.letters.size() >= 101) break;           // an over-long run is split, as in the original
                token.push_back(static_cast<char>(ch));
                word.letters.push_back(dict_.letterIndex[ch]);
                c = get();
            }
            const int n = static_cast<int>(word.letters.size());
            word.display = token;
            buffer.set(word);
            for (size_t i = 0; i < slots && pendingLeaves != 0; i++) {
                tea::MatchEngine* e = set_.leaf(i);
                if (!e || values[i] || n < e->minLength() || n > e->maxLength()) continue;
                e->setWordLength(n);
                if (e->matchWord(buffer)) { values[i] = 1; pendingLeaves--; }
            }
            if (pendingLeaves == 0) {
                while (c != EOF && c != 0xbd) c = get();
            }
        }
        if (c == EOF) break;
        if (count > 0 && set_.evalLeaves(values)) {
            Hit h{head, qualifier, recordOffset};
            hit(h);
        }
    }
    return true;
}

} // namespace fulltext

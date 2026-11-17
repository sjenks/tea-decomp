#include "results.h"

#include <algorithm>
#include <cstring>

namespace results {

// Read from TEA.exe (0x4f50d8): Windows-1252 letters to collation codes, everything else 0.
const uint8_t kCollation[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
    'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0, 0, 0, 0, 0,
    0, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
    'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'S', 0, 0x8c, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'S', 0, 0x8c, 0, 0, 'Y',
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    'A', 'A', 'A', 'A', 'A', 'A', 0xc6, 'C', 'E', 'E', 'E', 'E', 'I', 'I', 'I', 'I',
    'D', 'N', 'O', 'O', 'O', 'O', 'O', 0, 'O', 'U', 'U', 'U', 'U', 'Y', 0xde, 0xdf,
    'A', 'A', 'A', 'A', 'A', 'A', 0xc6, 'C', 'E', 'E', 'E', 'E', 'I', 'I', 'I', 'I',
    'D', 'N', 'O', 'O', 'O', 'O', 'O', 0, 'O', 'U', 'U', 'U', 'U', 'Y', 0xde, 'Y',
};

int collate(const char* a, int na, const char* b, int nb) {
    const uint8_t* p = reinterpret_cast<const uint8_t*>(a);
    const uint8_t* q = reinterpret_cast<const uint8_t*>(b);
    for (;;) {
        while (na != 0 && kCollation[*p] == 0) { na--; p++; }
        while (nb != 0 && kCollation[*q] == 0) { nb--; q++; }
        if (na == 0 || nb == 0) break;
        if (kCollation[*p] != kCollation[*q]) return static_cast<int>(kCollation[*p]) - static_cast<int>(kCollation[*q]);
        na--; p++;
        nb--; q++;
    }
    if (na != 0) return 1;
    return nb == 0 ? 0 : -1;
}

int collatedLength(const char* s, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (kCollation[static_cast<uint8_t>(s[i])] != 0) count++;
    return count;
}

std::string collationKey(const char* s, int n) {
    std::string key;
    for (int i = 0; i < n; i++) {
        const uint8_t c = kCollation[static_cast<uint8_t>(s[i])];
        if (c != 0) key.push_back(static_cast<char>(c));
    }
    return key;
}

int sortModeFor(bool alphabetical, bool ascending, bool groupByLength, int lengthOrder, int smartSign) {
    if (!alphabetical) return 0;
    int mode;
    if (!groupByLength) mode = 1;
    else if (lengthOrder == 1 || (lengthOrder == 0 && smartSign == 1)) mode = 3;
    else mode = 5;
    if (!ascending) mode++;
    return mode;
}

void ResultSet::clear() {
    arena_.clear();
    items_.clear();
    pending_.clear();
    arena_.shrink_to_fit();
    items_.shrink_to_fit();
}

void ResultSet::add(const std::vector<std::string>& texts, const std::vector<uint8_t>& wordLengths, const std::vector<uint32_t>& aux) {
    for (size_t i = 0; i < texts.size(); i++) {
        const std::string& t = texts[i];
        Item it{};
        it.offset = static_cast<uint32_t>(arena_.size());
        it.length = static_cast<uint16_t>(std::min<size_t>(t.size(), 0xffff));
        it.wordLength = static_cast<uint8_t>(std::min<size_t>(wordLengths[i], std::min<size_t>(255, it.length)));
        it.aux = i < aux.size() ? aux[i] : 0;
        arena_.insert(arena_.end(), t.data(), t.data() + it.length);
        pending_.push_back(it);
    }
}

bool ResultSet::less(const Item& a, const Item& b) const {
    // MatchListWindows::CompareEntries in the original.
    const char* ta = text(a);
    const char* tb = text(b);
    if (sortMode_ > 2) {
        const int la = collatedLength(ta, a.wordLength), lb = collatedLength(tb, b.wordLength);
        if (la != lb) return sortMode_ < 5 ? la < lb : lb < la;
    }
    const int c = collate(ta, a.wordLength, tb, b.wordLength);
    return (sortMode_ & 1) ? c < 0 : c > 0;
}

bool ResultSet::flush() {
    if (pending_.empty()) return false;
    if (sortMode_ == 0) {
        items_.insert(items_.end(), pending_.begin(), pending_.end());
    } else {
        // Each new entry goes after any equal ones (stable sort, then a stable merge with old first).
        auto cmp = [this](const Item& a, const Item& b) { return less(a, b); };
        std::stable_sort(pending_.begin(), pending_.end(), cmp);
        std::vector<Item> merged;
        merged.reserve(items_.size() + pending_.size());
        std::merge(items_.begin(), items_.end(), pending_.begin(), pending_.end(), std::back_inserter(merged), cmp);
        items_.swap(merged);
    }
    pending_.clear();
    return true;
}

} // namespace results

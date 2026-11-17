// Result lists: storage, the original's collation, and its sort orders.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace results {

// The fixed collation the original uses to sort results and to find duplicates across dictionaries:
// letters fold to upper-case unaccented ASCII (a few to their own code), everything else is ignored.
extern const uint8_t kCollation[256];

int collate(const char* a, int na, const char* b, int nb);   // <0, 0, >0
int collatedLength(const char* s, int n);                     // letters that collation keeps
std::string collationKey(const char* s, int n);

// Sort modes, as the original numbers them: 0 unsorted; 1/2 alphabetical ascending/descending;
// 3/4 by length ascending then alphabetical ascending/descending; 5/6 by length descending then
// alphabetical ascending/descending.
int sortModeFor(bool alphabetical, bool ascending, bool groupByLength, int lengthOrder, int smartSign);

struct Item {
    uint32_t offset;       // text in the arena
    uint16_t length;       // whole text: word + annotation + balance
    uint8_t wordLength;    // bytes of the word itself (the rest is drawn in the annotation font)
    uint8_t selected;
    uint32_t aux;          // full-text search: definition offset; otherwise 0
};

class ResultSet {
public:
    void clear();
    void setSortMode(int mode) { sortMode_ = mode; }
    int sortMode() const { return sortMode_; }

    // Adds entries in arrival order. Sorted modes place each after any equal entries already there.
    void add(const std::vector<std::string>& texts, const std::vector<uint8_t>& wordLengths, const std::vector<uint32_t>& aux);
    // Inserts what add() has buffered; returns true if anything changed.
    bool flush();
    size_t pendingCount() const { return pending_.size(); }

    size_t size() const { return items_.size(); }
    const Item& item(size_t i) const { return items_[i]; }
    Item& item(size_t i) { return items_[i]; }
    const char* text(const Item& it) const { return arena_.data() + it.offset; }
    std::string textOf(size_t i) const { return std::string(text(items_[i]), items_[i].length); }
    std::string wordOf(size_t i) const { return std::string(text(items_[i]), items_[i].wordLength); }

private:
    bool less(const Item& a, const Item& b) const;
    std::vector<char> arena_;
    std::vector<Item> items_;
    std::vector<Item> pending_;
    int sortMode_ = 0;
};

} // namespace results

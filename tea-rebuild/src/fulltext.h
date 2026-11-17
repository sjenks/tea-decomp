// Full Text Search: definitions that contain words matching the pattern.
//
// Like the original (TSDictionaryDefinitionSearchIndexed / ...Sequential in TEA.exe), there are two
// ways of answering, and they can differ:
//  - indexed, when the pattern has no NOT and every part but the last matches one length only
//    (so any single pattern): every dictionary entry, and every word found only inside definitions,
//    that matches a part contributes the definitions it heads and the ones the full-text index lists
//    it in. Parts combine strictly left to right as sets.
//  - sequential otherwise (or when a matching word was too common to be indexed): every headword
//    definition is read and its raw text split into runs of letters, RTF markup included; the parts
//    combine as in word search.
// Either way a result is one definition, shown as its first headword followed by its qualifier.
#pragma once
#include <cstdint>
#include <functional>
#include <string>

#include "engine.h"
#include "tsd.h"

namespace fulltext {

struct Hit {
    std::string headword;
    std::string qualifier;
    uint32_t offset;
};

// progress(length or -1, first, last, fraction) returns false to cancel.
using ProgressFn = std::function<bool(int, int, int, double)>;
using HitFn = std::function<void(const Hit&)>;

class Search {
public:
    Search(const tea::Dictionary& dict, const std::string& query, int shortest, int longest, bool ignoreUnused, bool exclusive);
    int status() const { return status_; }
    bool run(const ProgressFn& progress, const HitFn& hit);   // false if cancelled
    bool usedIndex() const { return usedIndex_; }

private:
    // 1 = done, 0 = index unusable (fall back), -1 = cancelled
    int runIndexed(const ProgressFn& progress, const HitFn& hit);
    int collectLeaf(tea::MatchEngine& e, std::vector<uint32_t>& out, const ProgressFn& progress);
    bool runSequential(const ProgressFn& progress, const HitFn& hit);
    bool emit(uint32_t offset, const HitFn& hit);

    const tea::Dictionary& dict_;
    tea::MatchEngineSet set_;
    int status_ = 0;
    bool usedIndex_ = false;
};

} // namespace fulltext

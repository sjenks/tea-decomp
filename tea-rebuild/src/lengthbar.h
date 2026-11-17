// The length ruler under the pattern box (the original's progress bar, control 4420).
//
// It shows the word lengths a pattern can match in one dictionary as a ruler, each length given
// space in proportion to that length's share of the dictionary's data, so a sweep across it while
// searching moves at a steady speed. During a search a bar along the top shows how far the
// dictionary being searched has got.
#pragma once
#include <memory>

#include "tsd.h"
#include "util.h"

namespace lengthbar {

void registerClass(HINSTANCE inst);
HWND create(HWND parent, int id);

struct State {
    std::shared_ptr<const tea::Dictionary> dict;   // null: empty ruler
    uint64_t fileSize = 0;
    int first = 1, last = 0;                       // lengths the pattern can match; empty if first > last
    bool searching = false;
    int length = 0;                                // being searched
    double fraction = 0;                           // through that length
    double overall = -1;                           // full-text scan: fraction of the whole file, else -1
};

void set(HWND h, const State& s);

} // namespace lengthbar

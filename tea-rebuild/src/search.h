// The search, run on a worker thread.
//
// It follows the original's search loop (TEAViewWindows, 0x454b40 in TEA.exe): dictionaries are
// searched one after another in list order; within a dictionary, lengths are visited in the order the
// length grouping asks for; entries are filtered by type; with duplicate suppression an entry is
// dropped if an earlier dictionary's list already shows one that collates equal.
#pragma once
#include <windows.h>

#include <atomic>
#include <condition_variable>
#include <cstdint>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#include "engine.h"
#include "tsd.h"

namespace search {

using DictPtr = std::shared_ptr<const tea::Dictionary>;

struct Params {
    std::vector<DictPtr> dicts;          // one per pane, in pane order
    std::vector<int> panes;              // panes to search, ascending
    std::string query;                   // macros already expanded, Windows-1252
    int shortest = 1, longest = 100;
    bool ignoreUnused = true, exclusive = true;
    bool annotations = true, balances = true;
    bool show[4] = {true, true, true, true};
    int multiMode = 0;                   // 0 suppress duplicates, 1 independent, 2 active only
    bool groupByLength = true;
    int lengthOrder = 0;
    bool fullText = false;
};

// Messages posted to the window given to start(). lParam is a heap object the receiver deletes.
constexpr UINT WM_SEARCH_BATCH = WM_APP + 10;      // Batch*
constexpr UINT WM_SEARCH_PROGRESS = WM_APP + 11;   // Progress*
constexpr UINT WM_SEARCH_DONE = WM_APP + 12;       // Done*

struct Batch {
    unsigned generation;
    int pane;
    std::vector<std::string> texts;
    std::vector<uint8_t> wordLengths;
    std::vector<uint32_t> aux;
};
struct Progress {
    unsigned generation;
    int pane;
    int length;                          // length being searched
    int first, last;                     // lengths this pane's search covers
    double fraction;                     // 0..1 through this length
};
struct Done {
    unsigned generation;
    bool cancelled;
    int status;                          // pattern error from the engine, 0 if none
};

// Classifies a word for the result filters: 0 only lower-case letters, 1 some upper case,
// 2 punctuation inside the word, 3 a phrase (a space inside). Mirrors the original exactly.
int classify(const tea::Dictionary& dict, const std::string& word, int length);

class Worker {
public:
    ~Worker() { cancel(); }
    // Starts a new search, cancelling any running one. Returns its generation number.
    unsigned start(HWND notify, Params params);
    void cancel();                       // waits for the thread to finish
    void pause(bool paused);
    bool running() const { return running_; }
    bool paused() const { return paused_; }
    unsigned generation() const { return generation_; }

private:
    void run(HWND notify, Params p, unsigned generation);
    void runFullText(HWND notify, const Params& p, unsigned generation);
    bool checkpoint();                   // false if cancelled; blocks while paused

    std::thread thread_;
    std::atomic<bool> cancel_{false};
    std::atomic<bool> paused_{false};
    std::atomic<bool> running_{false};
    std::mutex mutex_;
    std::condition_variable cv_;
    unsigned generation_ = 0;
};

} // namespace search

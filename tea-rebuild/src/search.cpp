#include "search.h"

#include <algorithm>
#include <cstring>
#include <chrono>

#include "fulltext.h"
#include "results.h"

namespace search {

namespace {

// Collation keys of one finished pane, kept sorted for duplicate checks by later panes.
class KeyIndex {
public:
    void add(const std::string& key) { offsets_.push_back(static_cast<uint32_t>(arena_.size())); arena_ += key; arena_.push_back('\0'); }
    void finish() {
        std::sort(offsets_.begin(), offsets_.end(), [this](uint32_t a, uint32_t b) { return std::strcmp(arena_.c_str() + a, arena_.c_str() + b) < 0; });
    }
    bool contains(const std::string& key) const {
        auto it = std::lower_bound(offsets_.begin(), offsets_.end(), key, [this](uint32_t a, const std::string& k) { return std::strcmp(arena_.c_str() + a, k.c_str()) < 0; });
        return it != offsets_.end() && key == arena_.c_str() + *it;
    }
private:
    std::string arena_;
    std::vector<uint32_t> offsets_;
};

// Sends batches to the window often enough for the lists to fill steadily, not so often that
// posting dominates.
class Sender {
public:
    Sender(HWND w, unsigned gen, int pane) : w_(w), gen_(gen), pane_(pane) { reset(); }
    ~Sender() { send(); }
    void add(std::string text, size_t wordLength, uint32_t aux = 0) {
        b_->texts.push_back(std::move(text));
        b_->wordLengths.push_back(static_cast<uint8_t>(std::min<size_t>(wordLength, 255)));
        b_->aux.push_back(aux);
        if (b_->texts.size() >= limit_ || std::chrono::steady_clock::now() - last_ > std::chrono::milliseconds(120)) send();
    }
    void send() {
        if (b_->texts.empty()) return;
        if (!PostMessageW(w_, WM_SEARCH_BATCH, 0, reinterpret_cast<LPARAM>(b_.get()))) return;
        b_.release();
        if (limit_ < 16384) limit_ *= 2;
        reset();
    }
private:
    void reset() {
        b_.reset(new Batch);
        b_->generation = gen_;
        b_->pane = pane_;
        last_ = std::chrono::steady_clock::now();
    }
    HWND w_;
    unsigned gen_;
    int pane_;
    size_t limit_ = 64;
    std::unique_ptr<Batch> b_;
    std::chrono::steady_clock::time_point last_;
};

void postProgress(HWND w, unsigned gen, int pane, int length, int first, int last, double fraction) {
    auto* p = new Progress{gen, pane, length, first, last, fraction};
    if (!PostMessageW(w, WM_SEARCH_PROGRESS, 0, reinterpret_cast<LPARAM>(p))) delete p;
}

} // namespace

int classify(const tea::Dictionary& dict, const std::string& word, int length) {
    const int n = static_cast<int>(word.size());
    int first = 0, end = n;
    if (length != n) {
        first = -1;
        for (int i = 0; i < n; i++) {
            if (dict.letterIndex[static_cast<uint8_t>(word[i])] != tea::kNotLetter) {
                end = i + 1;
                if (first < 0) first = i;
            }
        }
    }
    if (first + length == end) {
        for (int i = first; i < end; i++)
            if (IsCharUpperA(word[i])) return 1;
        return 0;
    }
    return word.find(' ') == std::string::npos ? 2 : 3;
}

unsigned Worker::start(HWND notify, Params params) {
    cancel();
    cancel_ = false;
    paused_ = false;
    running_ = true;
    const unsigned gen = ++generation_;
    thread_ = std::thread([this, notify, params = std::move(params), gen]() mutable { run(notify, std::move(params), gen); });
    return gen;
}

void Worker::cancel() {
    if (thread_.joinable()) {
        cancel_ = true;
        {
            std::lock_guard<std::mutex> lock(mutex_);
            paused_ = false;
        }
        cv_.notify_all();
        thread_.join();
    }
    running_ = false;
}

void Worker::pause(bool paused) {
    {
        std::lock_guard<std::mutex> lock(mutex_);
        paused_ = paused;
    }
    cv_.notify_all();
}

bool Worker::checkpoint() {
    if (cancel_) return false;
    if (paused_) {
        std::unique_lock<std::mutex> lock(mutex_);
        cv_.wait(lock, [this] { return !paused_ || cancel_; });
    }
    return !cancel_;
}

void Worker::run(HWND notify, Params p, unsigned gen) {
    if (p.fullText) {
        runFullText(notify, p, gen);
        return;
    }
    int status = 0;
    bool cancelled = false;
    bool filtering = false;
    for (bool s : p.show) filtering |= !s;
    std::vector<KeyIndex> previous(p.dicts.size());
    tea::WordBuffer buffer;
    tea::Dictionary::Word word;

    for (size_t k = 0; k < p.panes.size() && !cancelled; k++) {
        const int pane = p.panes[k];
        const tea::Dictionary& dict = *p.dicts[pane];
        tea::MatchEngineSet set;
        const int st = set.compile(dict, p.query, p.shortest, p.longest, p.ignoreUnused, p.exclusive);
        if (st != 0) {
            if (status == 0) status = st;
            continue;
        }
        int step = 1;
        if (p.groupByLength) step = p.lengthOrder != 0 ? p.lengthOrder : (set.lengthKindSum() < 0 ? -1 : 1);
        int first, last;
        set.lengthRange(first, last);
        // Keys are needed only if a later pane will check against this one.
        const bool keepKeys = p.multiMode == 0 && k + 1 < p.panes.size();
        KeyIndex& keys = previous[pane];

        Sender sender(notify, gen, pane);
        for (int length = step > 0 ? first : last; length >= first && length <= last && !cancelled; length += step) {
            if (!dict.hasLength(length)) continue;
            tea::Dictionary::Reader reader(dict, length);
            if (!reader.ok()) continue;
            set.setWordLength(length);
            const double total = std::max<uint32_t>(1, dict.wordCount[length]);
            postProgress(notify, gen, pane, length, first, last, 0.0);
            unsigned seen = 0;
            auto lastProgress = std::chrono::steady_clock::now();
            while (reader.next(word)) {
                if ((++seen & 1023) == 0) {
                    if (!checkpoint()) { cancelled = true; break; }
                    const auto now = std::chrono::steady_clock::now();
                    if (now - lastProgress > std::chrono::milliseconds(100)) {
                        lastProgress = now;
                        sender.send();
                        postProgress(notify, gen, pane, length, first, last, seen / total);
                    }
                }
                buffer.set(word);
                if (!set.matches(buffer, length)) continue;
                if (filtering && !p.show[classify(dict, word.display, length)]) continue;
                if (p.multiMode == 0 && k > 0) {
                    const std::string key = results::collationKey(word.display.data(), static_cast<int>(word.display.size()));
                    bool duplicate = false;
                    for (size_t j = 0; j < k && !duplicate; j++) duplicate = previous[p.panes[j]].contains(key);
                    if (duplicate) continue;
                    if (keepKeys) keys.add(key);
                } else if (keepKeys) {
                    keys.add(results::collationKey(word.display.data(), static_cast<int>(word.display.size())));
                }
                std::string text = word.display;
                if (p.annotations) text += word.annotation;   // the annotation carries its own leading space
                if (p.balances) text += set.balanceText();
                sender.add(std::move(text), word.display.size());
            }
        }
        sender.send();
        if (keepKeys) keys.finish();
    }
    running_ = false;
    auto* d = new Done{gen, cancelled, status};
    if (!PostMessageW(notify, WM_SEARCH_DONE, 0, reinterpret_cast<LPARAM>(d))) delete d;
}

void Worker::runFullText(HWND notify, const Params& p, unsigned gen) {
    int status = 0;
    bool cancelled = false;
    for (size_t k = 0; k < p.panes.size() && !cancelled; k++) {
        const int pane = p.panes[k];
        Sender sender(notify, gen, pane);
        fulltext::Search fts(*p.dicts[pane], p.query, p.shortest, p.longest, p.ignoreUnused, p.exclusive);
        if (fts.status() != 0) {
            if (status == 0) status = fts.status();
            continue;
        }
        auto progress = [&](int length, int first, int last, double fraction) {
            sender.send();
            postProgress(notify, gen, pane, length, first, last, fraction);
            return checkpoint();
        };
        if (!fts.run(progress, [&](const fulltext::Hit& h) { sender.add(h.headword + h.qualifier, h.headword.size(), h.offset); })) cancelled = true;
    }
    running_ = false;
    auto* d = new Done{gen, cancelled, status};
    if (!PostMessageW(notify, WM_SEARCH_DONE, 0, reinterpret_cast<LPARAM>(d))) delete d;
}

} // namespace search

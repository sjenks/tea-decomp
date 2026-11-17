// Saving a results list as a TEA&Sympathy dictionary (TSD1), words only: like the original, the
// new dictionary has no definitions, annotations or full-text index.
//
// The layout follows the .tsd specification supplied with this project (header, Huffman code table,
// letter-position calibration matrix, per-length word streams with a "has links" bit after each
// word). The alphabet is the one of the dictionary the results came from.
#include "util.h"

#include <richedit.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>
#include <queue>
#include <set>

#include "app.h"
#include "dialogs.h"
#include "mainwin.h"
#include "resource.h"
#include "results.h"

namespace savetsd {

namespace {

struct BitWriter {
    std::vector<uint8_t>& out;
    uint16_t acc = 0;
    int n = 0;
    explicit BitWriter(std::vector<uint8_t>& o) : out(o) {}
    void bit(int b) {
        acc |= static_cast<uint16_t>((b & 1) << n);
        if (++n == 16) flush();
    }
    void flush() {
        if (n == 0) return;
        out.push_back(static_cast<uint8_t>(acc & 0xff));
        out.push_back(static_cast<uint8_t>(acc >> 8));
        acc = 0;
        n = 0;
    }
};

void put16(std::vector<uint8_t>& b, size_t at, uint16_t v) { b[at] = v & 0xff; b[at + 1] = v >> 8; }
void put32(std::vector<uint8_t>& b, size_t at, uint32_t v) { for (int i = 0; i < 4; i++) b[at + i] = (v >> (8 * i)) & 0xff; }

// Code lengths for the symbols with a non-zero count (standard Huffman).
std::vector<int> huffmanLengths(const uint64_t freq[256]) {
    struct Node { uint64_t f; int left, right, symbol; };
    std::vector<Node> nodes;
    using Item = std::pair<uint64_t, int>;
    std::priority_queue<Item, std::vector<Item>, std::greater<Item>> q;
    for (int s = 0; s < 256; s++)
        if (freq[s]) {
            nodes.push_back({freq[s], -1, -1, s});
            q.push({freq[s], static_cast<int>(nodes.size()) - 1});
        }
    std::vector<int> len(256, 0);
    if (nodes.size() == 1) { len[nodes[0].symbol] = 1; return len; }
    while (q.size() > 1) {
        const Item a = q.top(); q.pop();
        const Item b = q.top(); q.pop();
        nodes.push_back({a.first + b.first, a.second, b.second, -1});
        q.push({a.first + b.first, static_cast<int>(nodes.size()) - 1});
    }
    // Depth of each leaf.
    std::vector<std::pair<int, int>> stack{{q.top().second, 0}};
    while (!stack.empty()) {
        const auto [i, d] = stack.back();
        stack.pop_back();
        if (nodes[i].symbol >= 0) len[nodes[i].symbol] = std::max(1, d);
        else {
            stack.push_back({nodes[i].left, d + 1});
            stack.push_back({nodes[i].right, d + 1});
        }
    }
    return len;
}

} // namespace

std::wstring write(const std::wstring& path, const std::vector<std::string>& words, const std::string& description, const tea::Dictionary& alphabet) {
    // Alphabet: byte -> canonical letter byte (0 if not a letter).
    uint8_t mapped[256];
    for (int b = 0; b < 256; b++) {
        const uint8_t li = alphabet.letterIndex[b];
        mapped[b] = li == tea::kNotLetter ? 0 : alphabet.canonical[li];
    }
    mapped[0] = mapped['\n'] = mapped['\r'] = 0;

    // Unique words by length.
    std::vector<std::vector<std::string>> byLength(101);
    std::set<std::string> seen;
    uint64_t freq[256] = {};
    for (const std::string& w : words) {
        int letters = 0;
        for (unsigned char c : w) letters += mapped[c] != 0;
        if (letters < 1 || letters > 100 || w.empty() || !seen.insert(w).second) continue;
        byLength[letters].push_back(w);
        for (unsigned char c : w) freq[c]++;
        freq[0]++;
    }
    int maxLength = 0;
    for (int n = 1; n <= 100; n++)
        if (!byLength[n].empty()) maxLength = n;
    if (maxLength == 0) return L"There are no words to save.";
    for (auto& list : byLength)
        std::sort(list.begin(), list.end(), [](const std::string& a, const std::string& b) {
            const int c = results::collate(a.data(), static_cast<int>(a.size()), b.data(), static_cast<int>(b.size()));
            if (c != 0) return c < 0;
            return a < b;
        });
    const int numLengths = maxLength + 1;

    // Letter classes: used ones first, each group in byte order.
    std::vector<uint8_t> classes;
    for (int b = 1; b < 256; b++)
        if (mapped[b] && std::find(classes.begin(), classes.end(), mapped[b]) == classes.end()) classes.push_back(mapped[b]);
    std::sort(classes.begin(), classes.end());
    std::map<uint8_t, uint64_t> classFreq;
    for (int b = 1; b < 256; b++)
        if (mapped[b]) classFreq[mapped[b]] += freq[b];
    std::map<uint8_t, int> classIndex;
    int used = 0;
    for (uint8_t c : classes)
        if (classFreq[c]) classIndex[c] = used++;
    int next = used;
    for (uint8_t c : classes)
        if (!classFreq[c]) classIndex[c] = next++;
    const int total = static_cast<int>(classes.size());

    // Huffman codes (canonical), or plain 8-bit codes if any would be longer than 32 bits.
    std::vector<int> len = huffmanLengths(freq);
    uint32_t code[256] = {};
    if (*std::max_element(len.begin(), len.end()) > 32) {
        for (int s = 0; s < 256; s++) { len[s] = 8; code[s] = static_cast<uint32_t>(s); }
    } else {
        std::vector<int> order;
        for (int s = 0; s < 256; s++)
            if (len[s]) order.push_back(s);
        std::sort(order.begin(), order.end(), [&](int a, int b) { return len[a] != len[b] ? len[a] < len[b] : a < b; });
        uint64_t c = 0;
        int prev = len[order[0]];
        for (size_t i = 0; i < order.size(); i++) {
            if (i) { c++; c <<= (len[order[i]] - prev); prev = len[order[i]]; }
            code[order[i]] = static_cast<uint32_t>(c);
        }
    }

    // Header.
    const int calRows = (numLengths - 1) * numLengths / 2;
    const size_t headerSize = 3072 + 20 * static_cast<size_t>(numLengths) + static_cast<size_t>(calRows) * used;
    std::vector<uint8_t> file(headerSize, 0);
    std::memcpy(file.data(), "TSD1", 4);
    put16(file, 4, static_cast<uint16_t>(numLengths));
    for (int i = 0; i < 3; i++) put32(file, 6 + 4 * i, static_cast<uint32_t>(headerSize));
    const size_t occAt = 18, linkAt = occAt + 4 * numLengths, countAt = linkAt + 4 * numLengths, streamAt = countAt + 4 * numLengths,
                 wordsAt = streamAt + 4 * numLengths, descAt = wordsAt + 4 * numLengths;
    for (int n = 1; n < numLengths; n++) put32(file, wordsAt + 4 * n, static_cast<uint32_t>(byLength[n].size()));
    std::memcpy(file.data() + descAt, description.data(), std::min<size_t>(description.size(), 999));
    const size_t lettersAt = descAt + 1000;
    put16(file, lettersAt, static_cast<uint16_t>(used));
    put16(file, lettersAt + 2, static_cast<uint16_t>(total));
    const size_t tableAt = lettersAt + 4;
    for (int b = 0; b < 256; b++) {
        const size_t e = tableAt + 8 * b;
        file[e] = mapped[b];
        file[e + 1] = static_cast<uint8_t>(len[b]);
        put16(file, e + 2, mapped[b] ? static_cast<uint16_t>(classIndex[mapped[b]]) : 0xffff);
        put32(file, e + 4, code[b]);
    }
    const size_t calAt = tableAt + 2048;
    put16(file, calAt, static_cast<uint16_t>(calRows));
    for (int n = 1; n < numLengths; n++) {
        const auto& list = byLength[n];
        for (int pos = 0; pos < n; pos++) {
            std::vector<uint64_t> counts(used, 0);
            for (const std::string& w : list) {
                int k = 0;
                for (unsigned char c : w) {
                    if (!mapped[c]) continue;
                    if (k++ == pos) { counts[classIndex[mapped[c]]]++; break; }
                }
            }
            int distinct = 0;
            for (uint64_t c : counts) distinct += c > 0;
            const size_t row = calAt + 2 + static_cast<size_t>(n * (n - 1) / 2 + pos) * used;
            for (int li = 0; li < used; li++) {
                int8_t v = -128;
                if (counts[li] && !list.empty()) {
                    const double x = std::log2(static_cast<double>(counts[li]) * distinct / list.size());
                    const double r = x >= 0 ? std::floor(x + 0.5) : std::ceil(x - 0.5);
                    v = static_cast<int8_t>(std::max(-128.0, std::min(127.0, r)));
                }
                file[row + li] = static_cast<uint8_t>(v);
            }
        }
    }

    // Word streams.
    std::vector<uint32_t> streamOffset(numLengths, 0);
    auto emit = [&](BitWriter& bw, unsigned char c) {
        for (int i = len[c] - 1; i >= 0; i--) bw.bit((code[c] >> i) & 1);
    };
    for (int n = 1; n < numLengths; n++) {
        if (byLength[n].empty()) continue;
        streamOffset[n] = static_cast<uint32_t>(file.size());
        BitWriter bw(file);
        for (const std::string& w : byLength[n]) {
            for (unsigned char c : w) emit(bw, c);
            emit(bw, 0);
            bw.bit(0);   // no definitions or full-text links
        }
        emit(bw, 0);     // end of the dictionary words
        emit(bw, 0);     // no words found only in definitions
        bw.flush();
    }
    for (int n = numLengths - 2; n >= 1; n--)
        if (streamOffset[n] == 0) streamOffset[n] = streamOffset[n + 1];
    for (int n = 0; n < numLengths; n++) put32(file, streamAt + 4 * n, streamOffset[n]);

    // Write beside the target, then replace it, so a dictionary in use survives a failure.
    const std::wstring temp = path + L".tmp";
    FILE* f = _wfopen(temp.c_str(), L"wb");
    if (!f) return L"Could not create " + temp;
    const bool ok = std::fwrite(file.data(), 1, file.size(), f) == file.size();
    std::fclose(f);
    if (!ok) {
        DeleteFileW(temp.c_str());
        return L"Could not write " + temp;
    }
    if (!MoveFileExW(temp.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING)) {
        DeleteFileW(temp.c_str());
        return L"Could not replace " + path;
    }
    return {};
}

namespace {

struct Args {
    std::wstring path;
    const std::vector<std::string>* words;
    std::wstring description;
    const tea::Dictionary* alphabet;
};

INT_PTR CALLBACK proc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    Args* a = reinterpret_cast<Args*>(GetWindowLongPtrW(h, DWLP_USER));
    switch (msg) {
    case WM_INITDIALOG:
        SetWindowLongPtrW(h, DWLP_USER, lp);
        a = reinterpret_cast<Args*>(lp);
        SetDlgItemTextW(h, 2270, a->path.c_str());
        SetDlgItemTextW(h, IDC_SAVE_DESCRIPTION, a->description.c_str());
        ui::centreWindow(h, GetParent(h));
        return TRUE;
    case WM_COMMAND:
        switch (LOWORD(wp)) {
        case IDOK: {
            SetDlgItemTextW(h, IDC_SAVE_MESSAGE, ui::format(L" Saving %u words...", static_cast<unsigned>(a->words->size())).c_str());
            UpdateWindow(h);
            std::wstring desc = ui::windowText(GetDlgItem(h, IDC_SAVE_DESCRIPTION));
            const std::wstring err = write(a->path, *a->words, ui::narrow(desc), *a->alphabet);
            if (err.empty()) EndDialog(h, IDOK);
            else SetDlgItemTextW(h, IDC_SAVE_MESSAGE, (L" " + err).c_str());
            return TRUE;
        }
        case IDCANCEL: EndDialog(h, IDCANCEL); return TRUE;
        case IDC_HELP_BUTTON: app::showHelp(h, L"html/dlg_save_tsd.htm"); return TRUE;
        }
    }
    return FALSE;
}

} // namespace

bool run(HWND owner, const std::wstring& path, const std::vector<std::string>& words, const std::wstring& description, const tea::Dictionary& alphabet) {
    Args a{path, &words, description, &alphabet};
    return DialogBoxParamW(app::instance(), MAKEINTRESOURCEW(IDD_SAVE_TSD), owner, proc, reinterpret_cast<LPARAM>(&a)) == IDOK;
}

} // namespace savetsd

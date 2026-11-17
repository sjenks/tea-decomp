#include "lengthbar.h"

#include <algorithm>
#include <climits>

namespace lengthbar {

namespace {

const wchar_t* kClass = L"TEALengthBar";

struct Bar {
    State s;
};

Bar* bar(HWND h) { return reinterpret_cast<Bar*>(GetWindowLongPtrW(h, GWLP_USERDATA)); }

// Where in the file length L's data starts and ends.
uint64_t startOf(const State& s, int length) { return s.dict->wordStreamOffset[length]; }
uint64_t endOf(const State& s, int length) {
    const tea::Dictionary& d = *s.dict;
    for (int n = length + 1; n < d.numLengths; n++)
        if (d.wordStreamOffset[n] > d.wordStreamOffset[length]) return d.wordStreamOffset[n];
    return std::max<uint64_t>(s.fileSize, d.wordStreamOffset[length] + 1);
}

void paint(HWND h, HDC dc) {
    RECT r;
    GetClientRect(h, &r);
    FillRect(dc, &r, GetSysColorBrush(COLOR_BTNFACE));
    DrawEdge(dc, &r, EDGE_SUNKEN, BF_RECT);
    Bar* b = bar(h);
    if (!b) return;
    const State& s = b->s;
    const int dpi = ui::dpiOf(h);
    const int inset = ui::scale(4, dpi);
    RECT inner{r.left + inset, r.top + ui::scale(3, dpi), r.right - inset, r.bottom - ui::scale(2, dpi)};
    const int width = inner.right - inner.left;
    if (width <= 0) return;

    if (s.searching && s.overall >= 0) {
        RECT fill{inner.left, inner.top, inner.left + static_cast<int>(width * std::min(1.0, s.overall)), inner.top + ui::scale(5, dpi)};
        FillRect(dc, &fill, GetSysColorBrush(COLOR_HIGHLIGHT));
        return;
    }
    if (!s.dict || s.first > s.last) return;
    // Lengths in range that this dictionary has.
    int lo = -1, hi = -1;
    for (int n = std::max(1, s.first); n <= s.last && n < s.dict->numLengths; n++)
        if (s.dict->hasLength(n)) { if (lo < 0) lo = n; hi = n; }
    if (lo < 0) return;
    const uint64_t start = startOf(s, lo), end = endOf(s, hi);
    const double span = static_cast<double>(std::max<uint64_t>(1, end - start));
    auto xOf = [&](uint64_t offset) { return inner.left + static_cast<int>((offset - start) * (width - 1) / span); };

    if (s.searching && s.length >= lo && s.length <= hi) {
        const uint64_t a = startOf(s, s.length), z = endOf(s, s.length);
        const uint64_t at = a + static_cast<uint64_t>((z - a) * std::max(0.0, std::min(1.0, s.fraction)));
        RECT fill{inner.left, inner.top, xOf(at) + 1, inner.top + ui::scale(5, dpi)};
        FillRect(dc, &fill, GetSysColorBrush(COLOR_HIGHLIGHT));
    }

    HFONT font = reinterpret_cast<HFONT>(SendMessageW(GetParent(h), WM_GETFONT, 0, 0));
    HGDIOBJ oldFont = SelectObject(dc, font ? font : GetStockObject(DEFAULT_GUI_FONT));
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, GetSysColor(COLOR_BTNTEXT));
    HPEN pen = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNTEXT));
    HGDIOBJ oldPen = SelectObject(dc, pen);
    const int tickTop = inner.top + ui::scale(7, dpi), tickBottom = tickTop + ui::scale(4, dpi);
    int labelRight = INT_MIN;
    for (int n = lo; n <= hi; n++) {
        if (!s.dict->hasLength(n)) continue;
        const int x = xOf(startOf(s, n));
        MoveToEx(dc, x, tickTop, nullptr);
        LineTo(dc, x, tickBottom);
        const std::wstring label = std::to_wstring(n);
        SIZE sz;
        GetTextExtentPoint32W(dc, label.c_str(), static_cast<int>(label.size()), &sz);
        const int lx = x + 1;
        if (lx > labelRight + ui::scale(3, dpi) && lx + sz.cx <= inner.right + inset) {
            TextOutW(dc, lx, tickTop, label.c_str(), static_cast<int>(label.size()));
            labelRight = lx + sz.cx;
        }
    }
    // The end of the last length.
    const int xe = inner.right - 1;
    MoveToEx(dc, xe, tickTop, nullptr);
    LineTo(dc, xe, tickBottom);
    SelectObject(dc, oldPen);
    DeleteObject(pen);
    SelectObject(dc, oldFont);
}

LRESULT CALLBACK wndProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_NCCREATE:
        SetWindowLongPtrW(h, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(new Bar));
        break;
    case WM_NCDESTROY:
        delete bar(h);
        SetWindowLongPtrW(h, GWLP_USERDATA, 0);
        break;
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(h, &ps);
        RECT r;
        GetClientRect(h, &r);
        HDC mem = CreateCompatibleDC(dc);
        HBITMAP bmp = CreateCompatibleBitmap(dc, std::max<LONG>(1, r.right), std::max<LONG>(1, r.bottom));
        HGDIOBJ old = SelectObject(mem, bmp);
        paint(h, mem);
        BitBlt(dc, 0, 0, r.right, r.bottom, mem, 0, 0, SRCCOPY);
        SelectObject(mem, old);
        DeleteObject(bmp);
        DeleteDC(mem);
        EndPaint(h, &ps);
        return 0;
    }
    case WM_SIZE:
        InvalidateRect(h, nullptr, FALSE);
        return 0;
    }
    return DefWindowProcW(h, msg, wp, lp);
}

} // namespace

void registerClass(HINSTANCE inst) {
    WNDCLASSW wc{};
    wc.lpfnWndProc = wndProc;
    wc.hInstance = inst;
    wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    wc.lpszClassName = kClass;
    RegisterClassW(&wc);
}

HWND create(HWND parent, int id) {
    return CreateWindowExW(0, kClass, L"", WS_CHILD | WS_VISIBLE, 0, 0, 10, 10, parent, reinterpret_cast<HMENU>(static_cast<INT_PTR>(id)),
                           GetModuleHandleW(nullptr), nullptr);
}

void set(HWND h, const State& s) {
    if (Bar* b = bar(h)) {
        b->s = s;
        InvalidateRect(h, nullptr, FALSE);
    }
}

} // namespace lengthbar

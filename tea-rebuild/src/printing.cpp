// Printing results: File|Print Results, Print Preview and Page Setup.
//
// Pages carry a heading (dictionary and pattern) and a page number; entries run down the page in
// as many columns as fit, word in the printout font and annotations in its italic.
#include "util.h"

#include <commctrl.h>
#include <commdlg.h>
#include <windowsx.h>

#include <algorithm>
#include <climits>

#include "app.h"
#include "dialogs.h"
#include "resource.h"
#include "settings.h"

namespace printing {

namespace {

HGLOBAL g_devMode = nullptr;
HGLOBAL g_devNames = nullptr;

struct Layout {
    int pageW, pageH;            // device units
    RECT body;                   // printable area inside the margins
    int lineH, headH, columns, colW, rows;
    size_t perPage;
};

struct Fonts {
    HFONT word = nullptr, rest = nullptr, head = nullptr;
    ~Fonts() {
        for (HFONT f : {word, rest, head})
            if (f) DeleteObject(f);
    }
};

void makeFonts(HDC dc, Fonts& f) {
    const int dpi = GetDeviceCaps(dc, LOGPIXELSY);
    f.word = ui::createFont(g_settings.printFont, dpi);
    ui::FontSpec italic = g_settings.printFont;
    italic.lf.lfItalic = TRUE;
    f.rest = ui::createFont(italic, dpi);
    ui::FontSpec bold = g_settings.printFont;
    bold.lf.lfWeight = FW_BOLD;
    f.head = ui::createFont(bold, dpi);
}

Layout layoutFor(HDC dc, const Fonts& f, const std::vector<std::wstring>& lines) {
    Layout l{};
    l.pageW = GetDeviceCaps(dc, PHYSICALWIDTH);
    l.pageH = GetDeviceCaps(dc, PHYSICALHEIGHT);
    const int offX = GetDeviceCaps(dc, PHYSICALOFFSETX), offY = GetDeviceCaps(dc, PHYSICALOFFSETY);
    const int dx = GetDeviceCaps(dc, LOGPIXELSX), dy = GetDeviceCaps(dc, LOGPIXELSY);
    const RECT& m = g_settings.margins;   // thousandths of an inch
    l.body = {MulDiv(m.left, dx, 1000) - offX, MulDiv(m.top, dy, 1000) - offY, l.pageW - MulDiv(m.right, dx, 1000) - offX,
              l.pageH - MulDiv(m.bottom, dy, 1000) - offY};
    TEXTMETRICW tm;
    HGDIOBJ old = SelectObject(dc, f.word);
    GetTextMetricsW(dc, &tm);
    l.lineH = tm.tmHeight + tm.tmExternalLeading;
    int widest = 0;
    for (const auto& s : lines) {
        SIZE sz;
        GetTextExtentPoint32W(dc, s.c_str(), static_cast<int>(s.size()), &sz);
        widest = std::max<int>(widest, sz.cx);
    }
    SelectObject(dc, f.head);
    GetTextMetricsW(dc, &tm);
    l.headH = (tm.tmHeight + tm.tmExternalLeading) * 2;
    SelectObject(dc, old);
    const int gap = l.lineH * 2;
    const int width = std::max<int>(1, l.body.right - l.body.left);
    l.colW = std::min(width, widest + gap);
    l.columns = std::max(1, (width + gap) / std::max(1, l.colW));
    l.rows = std::max(1, static_cast<int>((l.body.bottom - l.body.top - l.headH) / std::max(1, l.lineH)));
    l.perPage = static_cast<size_t>(l.rows) * l.columns;
    return l;
}

void drawPage(HDC dc, const Fonts& f, const Layout& l, const Job& job, const std::vector<std::wstring>& lines, const std::vector<size_t>& wordLengths,
              int page, int pages) {
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, g_settings.printFont.color);
    HGDIOBJ old = SelectObject(dc, f.head);
    const std::wstring head = job.title;
    const std::wstring num = ui::format(L"Page %d of %d", page + 1, pages);
    RECT hr{l.body.left, l.body.top, l.body.right, l.body.top + l.headH};
    DrawTextW(dc, head.c_str(), -1, &hr, DT_LEFT | DT_TOP | DT_SINGLELINE | DT_NOPREFIX | DT_END_ELLIPSIS);
    DrawTextW(dc, num.c_str(), -1, &hr, DT_RIGHT | DT_TOP | DT_SINGLELINE | DT_NOPREFIX);
    const size_t first = static_cast<size_t>(page) * l.perPage;
    for (size_t k = 0; k < l.perPage && first + k < lines.size(); k++) {
        const int col = static_cast<int>(k) / l.rows, row = static_cast<int>(k) % l.rows;
        const int x = l.body.left + col * l.colW, y = l.body.top + l.headH + row * l.lineH;
        const std::wstring& s = lines[first + k];
        const size_t wl = std::min(wordLengths[first + k], s.size());
        SelectObject(dc, f.word);
        TextOutW(dc, x, y, s.c_str(), static_cast<int>(wl));
        if (wl < s.size()) {
            SIZE sz;
            GetTextExtentPoint32W(dc, s.c_str(), static_cast<int>(wl), &sz);
            SelectObject(dc, f.rest);
            TextOutW(dc, x + sz.cx, y, s.c_str() + wl, static_cast<int>(s.size() - wl));
        }
    }
    SelectObject(dc, old);
}

HDC printerDC() {
    PRINTDLGW pd{sizeof pd};
    pd.hDevMode = g_devMode;
    pd.hDevNames = g_devNames;
    pd.Flags = PD_RETURNDEFAULT | PD_RETURNDC;
    if (g_devNames) {
        // Use the chosen printer rather than the default.
        DEVNAMES* dn = static_cast<DEVNAMES*>(GlobalLock(g_devNames));
        DEVMODEW* dm = g_devMode ? static_cast<DEVMODEW*>(GlobalLock(g_devMode)) : nullptr;
        HDC dc = CreateDCW(reinterpret_cast<wchar_t*>(dn) + dn->wDriverOffset, reinterpret_cast<wchar_t*>(dn) + dn->wDeviceOffset, nullptr, dm);
        if (dm) GlobalUnlock(g_devMode);
        GlobalUnlock(g_devNames);
        if (dc) return dc;
    }
    pd.hDevMode = nullptr;
    pd.hDevNames = nullptr;
    if (!PrintDlgW(&pd)) return nullptr;
    g_devMode = pd.hDevMode;
    g_devNames = pd.hDevNames;
    return pd.hDC;
}

bool printLines(HWND owner, HDC dc, const Job& job, const std::vector<std::wstring>& lines, const std::vector<size_t>& wl, int fromPage, int toPage) {
    Fonts f;
    makeFonts(dc, f);
    const Layout l = layoutFor(dc, f, lines);
    const int pages = std::max(1, static_cast<int>((lines.size() + l.perPage - 1) / l.perPage));
    DOCINFOW di{sizeof di};
    const std::wstring name = L"TEA - " + job.title;
    di.lpszDocName = name.c_str();
    if (StartDocW(dc, &di) <= 0) {
        ui::message(owner, L"Printing could not start.", MB_OK | MB_ICONEXCLAMATION);
        return false;
    }
    for (int p = std::max(0, fromPage); p < pages && p <= toPage; p++) {
        StartPage(dc);
        drawPage(dc, f, l, job, lines, wl, p, pages);
        EndPage(dc);
    }
    EndDoc(dc);
    return true;
}

// --- Preview window ---

struct Preview {
    Job job;
    bool selectedOnly = false;
    int page = 0;
    HWND frame = nullptr, toolbar = nullptr;
};

const std::vector<std::wstring>& linesOf(const Preview& p) { return p.selectedOnly ? p.job.selected : p.job.all; }
const std::vector<size_t>& lengthsOf(const Preview& p) { return p.selectedOnly ? p.job.selectedWordLengths : p.job.wordLengths; }

enum { kAll = 9840, kSelected = 9850, kPrev = 5720, kNext = 5730, kPrintPage = 5690 };

int pageCount(Preview& p, HDC printer) {
    Fonts f;
    makeFonts(printer, f);
    const Layout l = layoutFor(printer, f, linesOf(p));
    return std::max(1, static_cast<int>((linesOf(p).size() + l.perPage - 1) / l.perPage));
}

LRESULT CALLBACK previewProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    Preview* p = reinterpret_cast<Preview*>(GetWindowLongPtrW(h, GWLP_USERDATA));
    switch (msg) {
    case WM_NCCREATE:
        p = reinterpret_cast<Preview*>(reinterpret_cast<CREATESTRUCTW*>(lp)->lpCreateParams);
        SetWindowLongPtrW(h, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(p));
        break;
    case WM_SIZE:
        if (p && p->toolbar) SendMessageW(p->toolbar, TB_AUTOSIZE, 0, 0);
        InvalidateRect(h, nullptr, TRUE);
        return 0;
    case WM_KEYDOWN:
        if (wp == VK_LEFT) SendMessageW(h, WM_COMMAND, kPrev, 0);
        else if (wp == VK_RIGHT) SendMessageW(h, WM_COMMAND, kNext, 0);
        else if (wp == VK_ESCAPE) DestroyWindow(h);
        return 0;
    case WM_COMMAND: {
        if (!p) return 0;
        HDC printer = printerDC();
        if (!printer) return 0;
        const int pages = pageCount(*p, printer);
        switch (LOWORD(wp)) {
        case kAll: p->selectedOnly = false; p->page = 0; break;
        case kSelected: if (!p->job.selected.empty()) { p->selectedOnly = true; p->page = 0; } break;
        case kPrev: if (p->page > 0) p->page--; break;
        case kNext: if (p->page + 1 < pages) p->page++; break;
        case kPrintPage: printLines(h, printer, p->job, linesOf(*p), lengthsOf(*p), p->page, p->page); break;
        }
        DeleteDC(printer);
        InvalidateRect(h, nullptr, TRUE);
        return 0;
    }
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(h, &ps);
        RECT c;
        GetClientRect(h, &c);
        RECT tb{};
        if (p && p->toolbar) GetWindowRect(p->toolbar, &tb);
        const int top = tb.bottom - tb.top;
        RECT area{0, top, c.right, c.bottom};
        FillRect(dc, &area, GetSysColorBrush(COLOR_APPWORKSPACE));
        HDC printer = p ? printerDC() : nullptr;
        if (printer) {
            Fonts f;
            makeFonts(printer, f);
            const Layout l = layoutFor(printer, f, linesOf(*p));
            const int pages = std::max(1, static_cast<int>((linesOf(*p).size() + l.perPage - 1) / l.perPage));
            if (p->page >= pages) p->page = pages - 1;
            // Fit the page in the window keeping its proportions.
            const int m = 12, availW = std::max(1, static_cast<int>(c.right) - 2 * m), availH = std::max(1, static_cast<int>(c.bottom - top) - 2 * m);
            int w = availW, hgt = MulDiv(w, l.pageH, l.pageW);
            if (hgt > availH) { hgt = availH; w = MulDiv(hgt, l.pageW, l.pageH); }
            const int x = (c.right - w) / 2, y = top + (c.bottom - top - hgt) / 2;
            RECT shadow{x + 4, y + 4, x + w + 4, y + hgt + 4};
            FillRect(dc, &shadow, GetSysColorBrush(COLOR_3DDKSHADOW));
            RECT paper{x, y, x + w, y + hgt};
            FillRect(dc, &paper, static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH)));
            // Draw in printer units, mapped onto the paper rectangle.
            const int saved = SaveDC(dc);
            SetMapMode(dc, MM_ANISOTROPIC);
            SetWindowExtEx(dc, l.pageW, l.pageH, nullptr);
            SetViewportExtEx(dc, w, hgt, nullptr);
            SetViewportOrgEx(dc, x, y, nullptr);
            Fonts screenFonts;
            makeFonts(printer, screenFonts);
            drawPage(dc, screenFonts, l, p->job, linesOf(*p), lengthsOf(*p), p->page, pages);
            RestoreDC(dc, saved);
            SetWindowTextW(h, ui::format(L"Print Preview - Page %d of %d", p->page + 1, pages).c_str());
            DeleteDC(printer);
        }
        EndPaint(h, &ps);
        return 0;
    }
    case WM_DESTROY:
        app::removeModeless(h);
        return 0;
    case WM_NCDESTROY:
        delete p;
        SetWindowLongPtrW(h, GWLP_USERDATA, 0);
        return 0;
    }
    return DefWindowProcW(h, msg, wp, lp);
}

} // namespace

void print(HWND owner, const Job& job) {
    PRINTDLGW pd{sizeof pd};
    pd.hwndOwner = owner;
    pd.hDevMode = g_devMode;
    pd.hDevNames = g_devNames;
    pd.Flags = PD_RETURNDC | PD_NOPAGENUMS | (job.selected.empty() ? PD_NOSELECTION : PD_SELECTION);
    pd.nCopies = 1;
    if (!PrintDlgW(&pd)) return;
    g_devMode = pd.hDevMode;
    g_devNames = pd.hDevNames;
    const bool sel = (pd.Flags & PD_SELECTION) != 0;
    printLines(owner, pd.hDC, job, sel ? job.selected : job.all, sel ? job.selectedWordLengths : job.wordLengths, 0, INT_MAX);
    DeleteDC(pd.hDC);
}

void preview(HWND owner, const Job& job) {
    static bool registered = false;
    if (!registered) {
        WNDCLASSW wc{};
        wc.lpfnWndProc = previewProc;
        wc.hInstance = app::instance();
        wc.hIcon = LoadIconW(app::instance(), MAKEINTRESOURCEW(IDI_TEA));
        wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
        wc.lpszClassName = L"TEAPrintPreview";
        RegisterClassW(&wc);
        registered = true;
    }
    auto* p = new Preview;
    p->job = job;
    p->selectedOnly = !job.selected.empty() && job.selected.size() < job.all.size();
    const int dpi = ui::dpiOf(owner);
    HWND h = CreateWindowExW(0, L"TEAPrintPreview", L"Print Preview", WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, CW_USEDEFAULT, CW_USEDEFAULT, ui::scale(560, dpi),
                             ui::scale(700, dpi), owner, nullptr, app::instance(), p);
    if (!h) return;
    p->frame = h;
    p->toolbar = CreateWindowExW(0, TOOLBARCLASSNAMEW, nullptr, WS_CHILD | WS_VISIBLE | TBSTYLE_FLAT | TBSTYLE_LIST | CCS_TOP, 0, 0, 0, 0, h, nullptr,
                                 app::instance(), nullptr);
    SendMessageW(p->toolbar, TB_BUTTONSTRUCTSIZE, sizeof(TBBUTTON), 0);
    SendMessageW(p->toolbar, TB_SETEXTENDEDSTYLE, 0, TBSTYLE_EX_MIXEDBUTTONS);
    const wchar_t* labels[] = {L"All Results", L"Selected Results", L"Previous Page", L"Next Page", L"Print Page"};
    const int ids[] = {kAll, kSelected, kPrev, kNext, kPrintPage};
    TBBUTTON b[5] = {};
    for (int i = 0; i < 5; i++) {
        b[i].iBitmap = I_IMAGENONE;
        b[i].idCommand = ids[i];
        b[i].fsState = TBSTATE_ENABLED;
        b[i].fsStyle = BTNS_BUTTON | BTNS_AUTOSIZE | BTNS_SHOWTEXT;
        b[i].iString = reinterpret_cast<INT_PTR>(labels[i]);
    }
    if (job.selected.empty()) b[1].fsState = 0;
    SendMessageW(p->toolbar, TB_ADDBUTTONSW, 5, reinterpret_cast<LPARAM>(b));
    SendMessageW(p->toolbar, TB_AUTOSIZE, 0, 0);
    app::addModeless(h);
    ShowWindow(h, SW_SHOW);
}

void pageSetup(HWND owner) {
    PAGESETUPDLGW ps{sizeof ps};
    ps.hwndOwner = owner;
    ps.hDevMode = g_devMode;
    ps.hDevNames = g_devNames;
    ps.Flags = PSD_INTHOUSANDTHSOFINCHES | PSD_MARGINS;
    ps.rtMargin = g_settings.margins;
    if (!PageSetupDlgW(&ps)) return;
    g_devMode = ps.hDevMode;
    g_devNames = ps.hDevNames;
    g_settings.margins = ps.rtMargin;
}

} // namespace printing

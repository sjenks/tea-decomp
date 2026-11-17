#include "mainwin.h"

#include <commctrl.h>
#include <commdlg.h>
#include <shellapi.h>
#include <windowsx.h>

#include <algorithm>
#include <map>

#include "app.h"
#include "dialogs.h"
#include "engine.h"
#include "lengthbar.h"
#include "resource.h"
#include "resultlist.h"
#include "results.h"
#include "search.h"
#include "settings.h"

namespace mainwin {

namespace {

constexpr int kMaxPanes = 10;
const wchar_t* kFrameClass = L"TEAMainWindow";
const wchar_t* kHeaderClass = L"TEAListHeader";

struct Pane {
    std::wstring path;
    std::shared_ptr<const tea::Dictionary> dict;
    uint64_t fileSize = 0;
    HWND header = nullptr;
    HWND list = nullptr;
    HWND tip = nullptr;
    results::ResultSet results;
    bool searched = false;
    double weight = 1.0;
};

enum class State { Invalid, Ready, Searching, Paused };

class Main {
public:
    HWND frame = nullptr, view = nullptr, status = nullptr;
    HWND combo = nullptr, comboEdit = nullptr, searchButton = nullptr, searchMenu = nullptr;
    HWND shortest = nullptr, longest = nullptr, shortestSpin = nullptr, longestSpin = nullptr, bar = nullptr;
    HACCEL accel = nullptr;
    std::vector<std::unique_ptr<Pane>> panes;
    int active = 0;
    search::Worker worker;
    unsigned generation = 0;
    State state = State::Invalid;
    HFONT patternFont = nullptr, resultFont = nullptr, annotationFont = nullptr;
    int dpi = 96;
    std::wstring statusText;
    std::wstring searchedPattern;
    bool menuActive = false;
    int dragSplit = -1;          // index of the pane before the splitter being dragged
    int dragOrigin = 0;
    std::vector<int> paneStart, paneSize;   // along the tiling axis, from the last layout
    lengthbar::State barState;
    bool suppressValidate = false;

    // --- setup ---
    bool createWindows(int show, const std::vector<std::wstring>& files);
    void makeFonts();
    void layout();
    void updateTitle();
    void fillHistory();

    // --- dictionaries ---
    bool addPane(const std::wstring& path, bool report);
    void closePane(int i);
    void movePane(int i, int to);
    void renumber();
    void setActive(int i, bool focusList);
    void updateHeader(int i);
    Pane* activePane() { return active >= 0 && active < static_cast<int>(panes.size()) ? panes[active].get() : nullptr; }

    // --- searching ---
    std::string query() const;
    int readLength(HWND edit, int def) const;
    void validate();
    void setState(State s);
    void onSearchButton();
    void startSearch();
    void stopSearch();
    void onBatch(search::Batch* b);
    void onProgress(search::Progress* p);
    void onDone(search::Done* d);
    void updateBarForActive();

    // --- commands ---
    void command(int id, int code, HWND ctl);
    void copy();
    void selectAll();
    std::wstring lookupWord(uint32_t* definition = nullptr);
    void saveResults();
    printing::Job printJob();
    void showMenu(int menuId, POINT pt, HWND owner);
    void initMenu(HMENU menu);
    void openFiles();
    void setStatus(const std::wstring& s, bool persist = true);
    resultlist::List* focusedList(int* paneIndex = nullptr);
    std::wstring dictionaryTitle(int i) const { return ui::fileTitle(panes[i]->path); }
    std::wstring dictionaryListText() const;

    // --- splitters ---
    int splitterAt(POINT pt);
};

Main* g = nullptr;
std::map<std::wstring, std::weak_ptr<const tea::Dictionary>> g_dictionaryCache;

// ---------------------------------------------------------------------------------------------
// Dictionary list headers

LRESULT CALLBACK headerProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    const int index = GetDlgCtrlID(h) - IDC_LIST_HEADER_FIRST;
    switch (msg) {
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(h, &ps);
        RECT r;
        GetClientRect(h, &r);
        const bool isActive = g && index == g->active;
        const bool foreground = g && GetForegroundWindow() == g->frame;
        const int bg = isActive ? (foreground ? COLOR_ACTIVECAPTION : COLOR_INACTIVECAPTION) : COLOR_BTNFACE;
        FillRect(dc, &r, GetSysColorBrush(bg));
        RECT line = r;
        line.top = line.bottom - 1;
        FillRect(dc, &line, GetSysColorBrush(COLOR_BTNSHADOW));
        const std::wstring text = ui::windowText(h);
        HGDIOBJ old = SelectObject(dc, reinterpret_cast<HFONT>(SendMessageW(GetParent(h), WM_GETFONT, 0, 0)));
        SetBkMode(dc, TRANSPARENT);
        SetTextColor(dc, GetSysColor(isActive ? (foreground ? COLOR_CAPTIONTEXT : COLOR_INACTIVECAPTIONTEXT) : COLOR_BTNTEXT));
        if (isActive && foreground && GetSysColor(COLOR_ACTIVECAPTION) == RGB(153, 180, 209)) SetTextColor(dc, RGB(0, 0, 0));
        RECT tr = r;
        tr.left += ui::scale(3, g ? g->dpi : 96);
        DrawTextW(dc, text.c_str(), -1, &tr, DT_SINGLELINE | DT_VCENTER | DT_END_ELLIPSIS);
        SelectObject(dc, old);
        EndPaint(h, &ps);
        return 0;
    }
    case WM_SETTEXT: {
        const LRESULT r = DefWindowProcW(h, msg, wp, lp);
        InvalidateRect(h, nullptr, FALSE);
        return r;
    }
    case WM_LBUTTONDOWN:
        if (g) g->setActive(index, true);
        return 0;
    case WM_LBUTTONDBLCLK:
        if (g) { g->setActive(index, true); g->command(CM_PROPERTIES, 0, nullptr); }
        return 0;
    case WM_RBUTTONDOWN:
        if (g) g->setActive(index, true);
        return 0;
    case WM_RBUTTONUP: {
        if (!g) return 0;
        POINT pt{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        ClientToScreen(h, &pt);
        g->showMenu(IDM_DICTIONARY_CONTEXT, pt, g->frame);
        return 0;
    }
    }
    return DefWindowProcW(h, msg, wp, lp);
}

// ---------------------------------------------------------------------------------------------
// The view: a child dialog holding the pattern controls and the result lists.

INT_PTR CALLBACK viewProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    if (!g) return FALSE;
    switch (msg) {
    case WM_INITDIALOG:
        return FALSE;
    case WM_COMMAND:
        g->command(LOWORD(wp), HIWORD(wp), reinterpret_cast<HWND>(lp));
        return TRUE;
    case WM_NOTIFY: {
        const NMHDR* n = reinterpret_cast<const NMHDR*>(lp);
        if (n->code == UDN_DELTAPOS) {
            // Keep the arrows within 1..100 and let the edit's change notification revalidate.
            return FALSE;
        }
        return FALSE;
    }
    case WM_CONTEXTMENU: {
        HWND from = reinterpret_cast<HWND>(wp);
        POINT pt{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        for (size_t i = 0; i < g->panes.size(); i++) {
            if (from != g->panes[i]->list) continue;
            g->setActive(static_cast<int>(i), false);
            resultlist::List* list = resultlist::from(from);
            if (pt.x == -1 && pt.y == -1) {
                RECT r;
                GetWindowRect(from, &r);
                pt = {r.left + 10, r.top + 10};
            }
            // With no entry selected the keyboard brings up the dictionary menu, as in the original.
            g->showMenu(list && list->hasSelection() ? IDM_RESULT_CONTEXT : IDM_DICTIONARY_CONTEXT, pt, g->frame);
            return TRUE;
        }
        if (from == g->searchButton || from == g->searchMenu) {
            if (pt.x == -1 && pt.y == -1) {
                RECT r;
                GetWindowRect(from, &r);
                pt = {r.left, r.bottom};
            }
            g->showMenu(IDM_SEARCH_CONTEXT, pt, g->frame);
            return TRUE;
        }
        return FALSE;
    }
    case WM_DRAWITEM: {
        const DRAWITEMSTRUCT* d = reinterpret_cast<const DRAWITEMSTRUCT*>(lp);
        if (d->CtlID == IDC_SEARCH_MENU) {
            // The little down arrow beside the search button.
            RECT r = d->rcItem;
            const bool enabled = IsWindowEnabled(d->hwndItem) != FALSE;
            DrawFrameControl(d->hDC, &r, DFC_BUTTON, DFCS_BUTTONPUSH | ((d->itemState & ODS_SELECTED) ? DFCS_PUSHED : 0));
            const int cx = (r.left + r.right) / 2, cy = (r.top + r.bottom) / 2;
            const int s = std::max(2, ui::scale(3, g->dpi));
            POINT tri[3] = {{cx - s, cy - s / 2}, {cx + s + 1, cy - s / 2}, {cx, cy + s / 2 + 1}};
            HBRUSH br = GetSysColorBrush(enabled ? COLOR_BTNTEXT : COLOR_GRAYTEXT);
            HGDIOBJ ob = SelectObject(d->hDC, br);
            HGDIOBJ op = SelectObject(d->hDC, GetStockObject(NULL_PEN));
            Polygon(d->hDC, tri, 3);
            SelectObject(d->hDC, ob);
            SelectObject(d->hDC, op);
            return TRUE;
        }
        return FALSE;
    }
    case WM_SETCURSOR: {
        POINT pt;
        GetCursorPos(&pt);
        ScreenToClient(h, &pt);
        if (reinterpret_cast<HWND>(wp) == h && g->splitterAt(pt) >= 0) {
            SetCursor(LoadCursorW(nullptr, g_settings.orientation == 0 ? IDC_SIZENS : IDC_SIZEWE));
            SetWindowLongPtrW(h, DWLP_MSGRESULT, TRUE);
            return TRUE;
        }
        return FALSE;
    }
    case WM_LBUTTONDOWN: {
        POINT pt{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        g->dragSplit = g->splitterAt(pt);
        if (g->dragSplit >= 0) {
            g->dragOrigin = g_settings.orientation == 0 ? pt.y : pt.x;
            SetCapture(h);
        }
        return TRUE;
    }
    case WM_MOUSEMOVE:
        if (g->dragSplit >= 0 && GetCapture() == h) {
            const int i = g->dragSplit;
            const int pos = g_settings.orientation == 0 ? GET_Y_LPARAM(lp) : GET_X_LPARAM(lp);
            Pane& a = *g->panes[i];
            Pane& b = *g->panes[i + 1];
            const int start = g->paneStart[i], end = g->paneStart[i + 1] + g->paneSize[i + 1];
            const int gap = g->paneStart[i + 1] - (g->paneStart[i] + g->paneSize[i]);
            const int minimum = ui::scale(40, g->dpi);
            const int total = end - start - gap;
            int first = std::max(minimum, std::min(total - minimum, pos - start - gap / 2));
            if (total > 2 * minimum) {
                const double w = a.weight + b.weight;
                a.weight = w * first / total;
                b.weight = w - a.weight;
                g->layout();
            }
        }
        return TRUE;
    case WM_LBUTTONUP:
        if (g->dragSplit >= 0) {
            g->dragSplit = -1;
            ReleaseCapture();
        }
        return TRUE;
    case WM_CTLCOLORDLG:
        return reinterpret_cast<INT_PTR>(GetSysColorBrush(COLOR_BTNFACE));
    case WM_CTLCOLORSTATIC:
    case WM_CTLCOLORBTN:
        // A child dialog would otherwise take the themed (white) background.
        SetBkColor(reinterpret_cast<HDC>(wp), GetSysColor(COLOR_BTNFACE));
        return reinterpret_cast<INT_PTR>(GetSysColorBrush(COLOR_BTNFACE));
    case search::WM_SEARCH_BATCH:
        g->onBatch(reinterpret_cast<search::Batch*>(lp));
        return TRUE;
    case search::WM_SEARCH_PROGRESS:
        g->onProgress(reinterpret_cast<search::Progress*>(lp));
        return TRUE;
    case search::WM_SEARCH_DONE:
        g->onDone(reinterpret_cast<search::Done*>(lp));
        return TRUE;
    }
    return FALSE;
}

// Subclass of the pattern edit: F1 opens help on patterns.
WNDPROC g_editProc = nullptr;
LRESULT CALLBACK patternEditProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    if (msg == WM_KEYDOWN && wp == VK_F1) {
        app::showHelp(GetAncestor(h, GA_ROOT), L"html/overview_patterns.htm");
        return 0;
    }
    // Return starts (or pauses, resumes) the search. The pattern box is in a child dialog of a plain
    // window, where the dialog manager has no default button to give Return to, so do it here.
    const bool dropped = g && SendMessageW(g->combo, CB_GETDROPPEDSTATE, 0, 0);
    if (msg == WM_GETDLGCODE && lp) {
        const MSG* m = reinterpret_cast<const MSG*>(lp);
        if (m->message == WM_KEYDOWN && m->wParam == VK_RETURN && !dropped) return CallWindowProcW(g_editProc, h, msg, wp, lp) | DLGC_WANTALLKEYS;
    }
    if (msg == WM_KEYDOWN && wp == VK_RETURN && !dropped && GetKeyState(VK_CONTROL) >= 0) {
        if (g) g->command(IDOK, 0, nullptr);
        return 0;
    }
    if (msg == WM_CHAR && (wp == L'\r' || wp == L'\n')) return 0;
    return CallWindowProcW(g_editProc, h, msg, wp, lp);
}

LRESULT CALLBACK frameProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    if (!g) return DefWindowProcW(h, msg, wp, lp);
    switch (msg) {
    case WM_SIZE:
        if (g->status) SendMessageW(g->status, WM_SIZE, 0, 0);
        g->layout();
        return 0;
    case WM_ACTIVATE:
        for (auto& p : g->panes) InvalidateRect(p->header, nullptr, FALSE);
        if (LOWORD(wp) != WA_INACTIVE && g->combo && !IsIconic(h)) {
            // Return the focus to where it was; the pattern box by default.
            HWND f = GetFocus();
            if (!f || !IsChild(h, f)) SetFocus(g->comboEdit);
        }
        return 0;
    case WM_COMMAND:
        g->command(LOWORD(wp), HIWORD(wp), reinterpret_cast<HWND>(lp));
        return 0;
    case WM_INITMENUPOPUP:
        g->initMenu(reinterpret_cast<HMENU>(wp));
        return 0;
    case WM_MENUSELECT: {
        const UINT item = LOWORD(wp), flags = HIWORD(wp);
        if (flags == 0xffff && !lp) {
            g->menuActive = false;
            SendMessageW(g->status, SB_SETTEXTW, 0, reinterpret_cast<LPARAM>(g->statusText.c_str()));
        } else {
            g->menuActive = true;
            std::wstring help;
            if (!(flags & MF_POPUP) && !(flags & MF_SEPARATOR)) {
                help = ui::loadString(item >= CM_EXTERNAL_FIRST && item < CM_EXTERNAL_FIRST + 12 ? CM_EXTERNAL_DEFAULT : item);
                const size_t nl = help.find(L'\n');
                if (nl != std::wstring::npos) help.resize(nl);
            }
            SendMessageW(g->status, SB_SETTEXTW, 0, reinterpret_cast<LPARAM>(help.c_str()));
        }
        return 0;
    }
    case WM_DROPFILES: {
        HDROP drop = reinterpret_cast<HDROP>(wp);
        const UINT n = DragQueryFileW(drop, 0xffffffff, nullptr, 0);
        for (UINT i = 0; i < n; i++) {
            wchar_t file[MAX_PATH];
            DragQueryFileW(drop, i, file, MAX_PATH);
            g->addPane(file, true);
        }
        DragFinish(drop);
        g->validate();
        return 0;
    }
    case WM_SETTINGCHANGE:
    case WM_SYSCOLORCHANGE:
        InvalidateRect(h, nullptr, TRUE);
        break;
    case WM_CLOSE:
        g->worker.cancel();
        g_settings.mainPlacement = ui::savePlacement(h);
        g_settings.maximized = IsZoomed(h) != FALSE;
        g_settings.openDictionaries.clear();
        for (auto& p : g->panes) g_settings.openDictionaries.push_back(p->path);
        g_settings.shortest = g->readLength(g->shortest, 1);
        g_settings.longest = g->readLength(g->longest, 100);
        g_settings.saveSession();
        definitions::closeAll();
        DestroyWindow(h);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcW(h, msg, wp, lp);
}

// ---------------------------------------------------------------------------------------------

bool Main::createWindows(int show, const std::vector<std::wstring>& files) {
    HINSTANCE inst = app::instance();
    WNDCLASSW wc{};
    wc.lpfnWndProc = frameProc;
    wc.hInstance = inst;
    wc.hIcon = LoadIconW(inst, MAKEINTRESOURCEW(IDI_TEA));
    wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_BTNFACE + 1);
    wc.lpszClassName = kFrameClass;
    wc.lpszMenuName = MAKEINTRESOURCEW(IDM_MAIN);
    if (!RegisterClassW(&wc)) return false;
    WNDCLASSW hc{};
    hc.style = CS_DBLCLKS;
    hc.lpfnWndProc = headerProc;
    hc.hInstance = inst;
    hc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    hc.lpszClassName = kHeaderClass;
    RegisterClassW(&hc);
    resultlist::registerClass(inst);
    lengthbar::registerClass(inst);

    frame = CreateWindowExW(WS_EX_ACCEPTFILES, kFrameClass, L"TEA", WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, CW_USEDEFAULT, CW_USEDEFAULT,
                            ui::scale(426, ui::dpiOf(nullptr)), ui::scale(630, ui::dpiOf(nullptr)), nullptr, nullptr, inst, nullptr);
    if (!frame) return false;
    dpi = ui::dpiOf(frame);
    accel = LoadAcceleratorsW(inst, MAKEINTRESOURCEW(IDA_MAIN));
    status = CreateWindowExW(0, STATUSCLASSNAMEW, L"", WS_CHILD | WS_VISIBLE | SBARS_SIZEGRIP, 0, 0, 0, 0, frame,
                             reinterpret_cast<HMENU>(static_cast<INT_PTR>(IDC_STATUS)), inst, nullptr);
    view = CreateDialogParamW(inst, MAKEINTRESOURCEW(IDD_PATTERN), frame, viewProc, 0);
    if (!view) return false;
    SetWindowLongPtrW(view, GWL_STYLE, GetWindowLongPtrW(view, GWL_STYLE) | WS_CLIPCHILDREN);
    combo = GetDlgItem(view, IDC_PATTERN);
    searchButton = GetDlgItem(view, IDC_SEARCH);
    searchMenu = GetDlgItem(view, IDC_SEARCH_MENU);
    shortest = GetDlgItem(view, IDC_SHORTEST);
    longest = GetDlgItem(view, IDC_LONGEST);
    shortestSpin = GetDlgItem(view, IDC_SHORTEST_SPIN);
    longestSpin = GetDlgItem(view, IDC_LONGEST_SPIN);
    COMBOBOXINFO ci{sizeof ci};
    GetComboBoxInfo(combo, &ci);
    comboEdit = ci.hwndItem;
    SendMessageW(comboEdit, EM_LIMITTEXT, 999, 0);
    g_editProc = reinterpret_cast<WNDPROC>(SetWindowLongPtrW(comboEdit, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(patternEditProc)));
    // The ruler replaces the template's placeholder control.
    if (HWND placeholder = GetDlgItem(view, IDC_PROGRESS)) DestroyWindow(placeholder);
    bar = lengthbar::create(view, IDC_PROGRESS);
    SetWindowPos(bar, GetDlgItem(view, IDC_LONGEST_SPIN), 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    SendMessageW(shortestSpin, UDM_SETRANGE32, 1, 100);
    SendMessageW(longestSpin, UDM_SETRANGE32, 1, 100);
    suppressValidate = true;
    SetDlgItemInt(view, IDC_SHORTEST, g_settings.shortest, FALSE);
    SetDlgItemInt(view, IDC_LONGEST, g_settings.longest, FALSE);
    SetWindowTextW(searchButton, g_settings.fullText ? L"Full Text &Search" : L"Word &Search");
    suppressValidate = false;
    makeFonts();
    fillHistory();

    if (!g_settings.mainPlacement.empty()) ui::restorePlacement(frame, g_settings.mainPlacement);
    if (g_settings.topMost) SetWindowPos(frame, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);

    const std::vector<std::wstring>& open = files.empty() ? g_settings.openDictionaries : files;
    for (const std::wstring& f : open) {
        if (static_cast<int>(panes.size()) >= kMaxPanes) break;
        addPane(f, !files.empty());
    }
    updateTitle();
    layout();
    ShowWindow(frame, g_settings.maximized && show == SW_SHOWNORMAL ? SW_SHOWMAXIMIZED : show);
    UpdateWindow(frame);
    validate();
    SetFocus(comboEdit);
    return true;
}

void Main::makeFonts() {
    for (HFONT* f : {&patternFont, &resultFont, &annotationFont})
        if (*f) DeleteObject(*f);
    patternFont = ui::createFont(g_settings.patternFont, dpi);
    resultFont = ui::createFont(g_settings.resultFont, dpi);
    annotationFont = ui::createFont(g_settings.annotationFont, dpi);
    SendMessageW(combo, WM_SETFONT, reinterpret_cast<WPARAM>(patternFont), TRUE);
    for (auto& p : panes)
        if (auto* l = resultlist::from(p->list)) l->setFonts(resultFont, annotationFont, g_settings.resultFont.color, g_settings.annotationFont.color);
    layout();
}

void Main::fillHistory() {
    const std::wstring text = ui::windowText(comboEdit);
    suppressValidate = true;
    SendMessageW(combo, CB_RESETCONTENT, 0, 0);
    for (const std::wstring& p : g_settings.patternHistory) SendMessageW(combo, CB_ADDSTRING, 0, reinterpret_cast<LPARAM>(p.c_str()));
    SetWindowTextW(comboEdit, text.c_str());
    suppressValidate = false;
}

void Main::layout() {
    if (!view) return;
    RECT client;
    GetClientRect(frame, &client);
    RECT sr{};
    if (status) GetWindowRect(status, &sr);
    const int statusH = sr.bottom - sr.top;
    MoveWindow(view, 0, 0, client.right, std::max<LONG>(0, client.bottom - statusH), TRUE);
    RECT vr;
    GetClientRect(view, &vr);
    const int W = vr.right, H = vr.bottom;
    auto s = [&](int px) { return ui::scale(px, dpi); };

    // Pattern group.
    HDWP dw = BeginDeferWindowPos(16 + 2 * static_cast<int>(panes.size()));
    auto place = [&](HWND w, int x, int y, int cx, int cy) {
        if (w) dw = DeferWindowPos(dw, w, nullptr, x, y, std::max(0, cx), std::max(0, cy), SWP_NOZORDER | SWP_NOACTIVATE);
    };
    const int m = s(2), pad = s(6);
    RECT cr;
    GetWindowRect(combo, &cr);
    const int comboH = std::max<int>(s(20), cr.bottom - cr.top);
    const int top = s(16);
    const int buttonW = s(90), arrowW = s(12);
    const int comboW = W - 2 * m - 2 * pad - buttonW - arrowW;
    // The drop-down list height is part of a combo box's window height.
    if (combo) dw = DeferWindowPos(dw, combo, nullptr, m + pad, top, comboW, s(300), SWP_NOZORDER | SWP_NOACTIVATE);
    place(searchButton, m + pad + comboW, top, buttonW, comboH);
    place(searchMenu, m + pad + comboW + buttonW, top, arrowW, comboH);
    const int row = top + comboH + s(6);
    const int editW = s(32), editH = s(20), labelH = s(16);
    HWND sl = GetDlgItem(view, IDC_SHORTEST_LABEL), ll = GetDlgItem(view, IDC_LONGEST_LABEL);
    HDC dc = GetDC(view);
    HGDIOBJ of = SelectObject(dc, reinterpret_cast<HFONT>(SendMessageW(view, WM_GETFONT, 0, 0)));
    SIZE s1, s2;
    std::wstring t1 = ui::windowText(sl), t2 = ui::windowText(ll);
    t1.erase(std::remove(t1.begin(), t1.end(), L'&'), t1.end());
    t2.erase(std::remove(t2.begin(), t2.end(), L'&'), t2.end());
    GetTextExtentPoint32W(dc, t1.c_str(), static_cast<int>(t1.size()), &s1);
    GetTextExtentPoint32W(dc, t2.c_str(), static_cast<int>(t2.size()), &s2);
    SelectObject(dc, of);
    ReleaseDC(view, dc);
    const int spinW = s(18);
    place(sl, m + pad, row + (editH - labelH) / 2 + s(1), s1.cx + s(2), labelH);
    place(shortest, m + pad + s1.cx + s(4), row, editW + spinW, editH);
    place(ll, W - m - pad - (editW + spinW) - s(4) - s2.cx - s(2), row + (editH - labelH) / 2 + s(1), s2.cx + s(2), labelH);
    place(longest, W - m - pad - (editW + spinW), row, editW + spinW, editH);
    const int barTop = row + editH + s(5), barH = s(26);
    place(bar, m + pad, barTop, W - 2 * m - 2 * pad, barH);
    const int groupH = barTop + barH + s(6);
    place(GetDlgItem(view, IDC_PATTERN_GROUP), m, 0, W - 2 * m, groupH);
    EndDeferWindowPos(dw);
    // The spin buttons follow their edits.
    SendMessageW(shortestSpin, UDM_SETBUDDY, reinterpret_cast<WPARAM>(shortest), 0);
    SendMessageW(longestSpin, UDM_SETBUDDY, reinterpret_cast<WPARAM>(longest), 0);

    // Result panes.
    const int n = static_cast<int>(panes.size());
    paneStart.assign(n, 0);
    paneSize.assign(n, 0);
    if (n == 0) {
        InvalidateRect(view, nullptr, TRUE);
        return;
    }
    const int y0 = groupH + s(5), gap = s(5);
    int headerH;
    {
        HDC hdc = GetDC(view);
        HGDIOBJ o = SelectObject(hdc, reinterpret_cast<HFONT>(SendMessageW(view, WM_GETFONT, 0, 0)));
        TEXTMETRICW tm;
        GetTextMetricsW(hdc, &tm);
        SelectObject(hdc, o);
        ReleaseDC(view, hdc);
        headerH = tm.tmHeight + s(4);
    }
    const bool stacked = g_settings.orientation == 0;
    const int x0 = m, areaW = W - 2 * m, areaH = std::max(0, H - y0 - m);
    const int span = (stacked ? areaH : areaW) - gap * (n - 1);
    double totalWeight = 0;
    for (auto& p : panes) totalWeight += p->weight;
    dw = BeginDeferWindowPos(2 * n);
    int pos = stacked ? y0 : x0;
    for (int i = 0; i < n; i++) {
        int size = i == n - 1 ? (stacked ? y0 + areaH : x0 + areaW) - pos : static_cast<int>(span * panes[i]->weight / totalWeight);
        size = std::max(0, size);
        paneStart[i] = pos;
        paneSize[i] = size;
        Pane& p = *panes[i];
        if (stacked) {
            dw = DeferWindowPos(dw, p.header, nullptr, x0, pos, areaW, headerH, SWP_NOZORDER | SWP_NOACTIVATE);
            dw = DeferWindowPos(dw, p.list, nullptr, x0, pos + headerH, areaW, std::max(0, size - headerH), SWP_NOZORDER | SWP_NOACTIVATE);
        } else {
            dw = DeferWindowPos(dw, p.header, nullptr, pos, y0, size, headerH, SWP_NOZORDER | SWP_NOACTIVATE);
            dw = DeferWindowPos(dw, p.list, nullptr, pos, y0 + headerH, size, std::max(0, areaH - headerH), SWP_NOZORDER | SWP_NOACTIVATE);
        }
        pos += size + gap;
    }
    EndDeferWindowPos(dw);
    InvalidateRect(view, nullptr, TRUE);
}

int Main::splitterAt(POINT pt) {
    const bool stacked = g_settings.orientation == 0;
    const int v = stacked ? pt.y : pt.x;
    for (size_t i = 0; i + 1 < paneStart.size(); i++) {
        const int a = paneStart[i] + paneSize[i], b = paneStart[i + 1];
        if (v >= a && v < b) return static_cast<int>(i);
    }
    return -1;
}

std::wstring Main::dictionaryListText() const {
    std::wstring s;
    for (size_t i = 0; i < panes.size(); i++) {
        if (i) s += ui::loadString(11850);   // ", "
        s += ui::fileTitle(panes[i]->path);
    }
    return s;
}

void Main::updateTitle() {
    const std::wstring list = dictionaryListText();
    SetWindowTextW(frame, list.empty() ? L"TEA" : (list + ui::loadString(4460)).c_str());
}

// ---------------------------------------------------------------------------------------------
// Dictionaries

bool Main::addPane(const std::wstring& path, bool report) {
    for (auto& p : panes)
        if (CompareStringOrdinal(p->path.c_str(), -1, path.c_str(), -1, TRUE) == CSTR_EQUAL) return false;
    if (static_cast<int>(panes.size()) >= kMaxPanes) return false;
    auto dict = loadDictionary(path);
    if (!dict) {
        if (report) ui::message(frame, L"\"" + path + L"\" is not a valid TEA&&Sympathy Dictionary File.", MB_OK | MB_ICONEXCLAMATION);
        return false;
    }
    if (state == State::Searching || state == State::Paused) stopSearch();
    auto p = std::make_unique<Pane>();
    p->path = path;
    p->dict = dict;
    WIN32_FILE_ATTRIBUTE_DATA fa;
    if (GetFileAttributesExW(path.c_str(), GetFileExInfoStandard, &fa)) p->fileSize = (static_cast<uint64_t>(fa.nFileSizeHigh) << 32) | fa.nFileSizeLow;
    const int index = static_cast<int>(panes.size());
    p->header = CreateWindowExW(0, kHeaderClass, L"", WS_CHILD | WS_VISIBLE, 0, 0, 10, 10, view,
                                reinterpret_cast<HMENU>(static_cast<INT_PTR>(IDC_LIST_HEADER_FIRST + index)), app::instance(), nullptr);
    p->list = resultlist::create(view, IDC_LIST_FIRST + index);
    if (auto* l = resultlist::from(p->list)) {
        l->setFonts(resultFont, annotationFont, g_settings.resultFont.color, g_settings.annotationFont.color);
        l->setData(&p->results);
    }
    // The header's tooltip is the dictionary's description.
    p->tip = CreateWindowExW(WS_EX_TOPMOST, TOOLTIPS_CLASSW, nullptr, WS_POPUP | TTS_ALWAYSTIP | TTS_NOPREFIX, 0, 0, 0, 0, view, nullptr, app::instance(), nullptr);
    std::wstring desc = ui::widen(dict->description);
    TOOLINFOW ti{sizeof ti};
    ti.uFlags = TTF_SUBCLASS | TTF_IDISHWND;
    ti.hwnd = view;
    ti.uId = reinterpret_cast<UINT_PTR>(p->header);
    ti.lpszText = const_cast<wchar_t*>(desc.c_str());
    SendMessageW(p->tip, TTM_ADDTOOLW, 0, reinterpret_cast<LPARAM>(&ti));
    SendMessageW(p->tip, TTM_SETMAXTIPWIDTH, 0, ui::scale(400, dpi));
    panes.push_back(std::move(p));
    g_settings.addRecent(path);
    updateHeader(index);
    if (panes.size() == 1) active = 0;
    updateTitle();
    layout();
    return true;
}

void Main::closePane(int i) {
    if (i < 0 || i >= static_cast<int>(panes.size())) return;
    if (state == State::Searching || state == State::Paused) stopSearch();
    DestroyWindow(panes[i]->header);
    DestroyWindow(panes[i]->list);
    DestroyWindow(panes[i]->tip);
    panes.erase(panes.begin() + i);
    renumber();
    if (active >= static_cast<int>(panes.size())) active = static_cast<int>(panes.size()) - 1;
    if (active < 0) active = 0;
    for (size_t k = 0; k < panes.size(); k++) updateHeader(static_cast<int>(k));
    updateTitle();
    layout();
    validate();
}

void Main::movePane(int i, int to) {
    if (i < 0 || to < 0 || i >= static_cast<int>(panes.size()) || to >= static_cast<int>(panes.size()) || i == to) return;
    if (state == State::Searching || state == State::Paused) stopSearch();
    std::swap(panes[i], panes[to]);
    renumber();
    // Keep tab order the same as the display order.
    HWND after = GetDlgItem(view, IDC_PROGRESS);
    for (auto& p : panes) {
        SetWindowPos(p->header, after, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
        SetWindowPos(p->list, p->header, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
        after = p->list;
    }
    active = to;
    for (size_t k = 0; k < panes.size(); k++) updateHeader(static_cast<int>(k));
    updateTitle();
    layout();
    validate();
}

void Main::renumber() {
    for (size_t k = 0; k < panes.size(); k++) {
        SetWindowLongPtrW(panes[k]->header, GWLP_ID, IDC_LIST_HEADER_FIRST + static_cast<int>(k));
        SetWindowLongPtrW(panes[k]->list, GWLP_ID, IDC_LIST_FIRST + static_cast<int>(k));
    }
}

void Main::updateHeader(int i) {
    Pane& p = *panes[i];
    // " &1 Core English.tsd (4)": the number is the Alt+digit shortcut.
    std::wstring text = ui::format(L" &%d %ls", (i + 1) % 10, ui::fileTitle(p.path).c_str());
    if (p.searched) text += ui::format(L" (%u)", static_cast<unsigned>(p.results.size() + p.results.pendingCount()));
    ui::setWindowText(p.header, text);
    InvalidateRect(p.header, nullptr, FALSE);
}

void Main::setActive(int i, bool focusList) {
    if (i < 0 || i >= static_cast<int>(panes.size())) return;
    const int old = active;
    active = i;
    if (old != i) {
        if (old >= 0 && old < static_cast<int>(panes.size())) InvalidateRect(panes[old]->header, nullptr, FALSE);
        InvalidateRect(panes[i]->header, nullptr, FALSE);
        if (state != State::Searching && state != State::Paused) updateBarForActive();
    }
    if (focusList) SetFocus(panes[i]->list);
}

std::shared_ptr<const tea::Dictionary> loadDictionaryImpl(const std::wstring& path) {
    auto it = g_dictionaryCache.find(path);
    if (it != g_dictionaryCache.end())
        if (auto d = it->second.lock()) return d;
    auto d = std::make_shared<tea::Dictionary>();
    // The reader opens files by narrow name; use the short (8.3) name if the path is not ANSI-safe.
    std::string narrowPath = ui::narrow(path, CP_ACP);
    if (ui::widen(narrowPath, CP_ACP) != path) {
        wchar_t shortPath[MAX_PATH];
        if (GetShortPathNameW(path.c_str(), shortPath, MAX_PATH)) narrowPath = ui::narrow(shortPath, CP_ACP);
    }
    if (!d->load(narrowPath)) return nullptr;
    g_dictionaryCache[path] = d;
    return d;
}

// ---------------------------------------------------------------------------------------------
// Searching

std::string Main::query() const {
    const std::string pattern = ui::narrow(ui::windowText(comboEdit));
    return tea::expandMacros(pattern, ui::narrow(g_settings.at), ui::narrow(g_settings.hash));
}

int Main::readLength(HWND edit, int def) const {
    BOOL ok = FALSE;
    const UINT v = GetDlgItemInt(view, GetDlgCtrlID(edit), &ok, FALSE);
    if (!ok) return def;
    return static_cast<int>(std::max(1u, std::min(100u, v)));
}

// FUN_00452bdc in the original: 0 = fine, 1 = the single pattern can match no length,
// 2 = the combined patterns can match no length, 3 = Shortest/Longest exclude every length.
// -1 if the pattern does not compile (its length range cannot be worked out).
int lengthCheck(const tea::Dictionary& d, const std::string& q, int shortest, int longest, int& first, int& last) {
    first = 1;
    last = 0;
    tea::MatchEngineSet set;
    if (set.compile(d, q, 1, 100, g_settings.ignoreUnused, g_settings.exclusive) != 0) return -1;
    set.lengthRange(first, last);
    int code = 0;
    if (last < first) code = set.slotCount() == 1 ? 1 : 2;
    tea::MatchEngineSet limited;
    if (limited.compile(d, q, shortest, longest, g_settings.ignoreUnused, g_settings.exclusive) != 0) return -1;
    limited.lengthRange(first, last);
    if (last < first && code == 0) code = 3;
    return code;
}

void Main::validate() {
    if (suppressValidate || !view) return;
    if (state == State::Searching) return;
    if (state == State::Paused) stopSearch();
    if (panes.empty()) {
        setStatus(ui::loadString(IDS_NO_DICTIONARY));
        setState(State::Invalid);
        updateBarForActive();
        return;
    }
    const std::string q = query();
    const int lo = readLength(shortest, 1), hi = readLength(longest, 100);
    bool valid = true, anyWords = false;
    // Every open dictionary is checked, whichever ones the search will use (as in the original).
    for (int i = 0; i < static_cast<int>(panes.size()); i++) {
        const tea::Dictionary& d = *panes[i]->dict;
        tea::MatchEngineSet set;
        const int st = set.compile(d, q, lo, hi, g_settings.ignoreUnused, g_settings.exclusive);
        if (st != 0) {
            std::wstring msg = ui::loadString(13080 + st);
            if (st != 1) msg = dictionaryTitle(i) + L": " + msg;
            setStatus(msg);
            valid = false;
            break;
        }
        // Full Text Search matches words inside definitions: the original checks no lengths then.
        if (g_settings.fullText) continue;
        int first, last;
        const int code = lengthCheck(d, q, lo, hi, first, last);
        if (code == 0) {
            for (int n = first; n <= last && n < d.numLengths; n++)
                if (n > 0 && d.wordCount[n] > 0) anyWords = true;
        } else if (code != 1) {
            setStatus(ui::loadString(code == 2 ? 13010 : 13000));
            valid = false;
            break;
        }
    }
    if (valid && !g_settings.fullText && !anyWords) {
        setStatus(ui::loadString(14030));
        valid = false;
    }
    if (valid) setStatus(ui::loadString(13080));
    setState(valid ? State::Ready : State::Invalid);
    updateBarForActive();
}

void Main::updateBarForActive() {
    lengthbar::State s;
    Pane* p = activePane();
    if (p && !ui::windowText(comboEdit).empty()) {
        s.dict = p->dict;
        s.fileSize = p->fileSize;
        int first, last;
        if (lengthCheck(*p->dict, query(), readLength(shortest, 1), readLength(longest, 100), first, last) == 0) {
            s.first = first;
            s.last = last;
        }
    }
    barState = s;
    lengthbar::set(bar, s);
}

void Main::setState(State s) {
    state = s;
    const bool busy = s == State::Searching;
    const wchar_t* label = s == State::Searching ? L"&Stop" : s == State::Paused ? L"Re&sume" : (g_settings.fullText ? L"Full Text &Search" : L"Word &Search");
    ui::setWindowText(searchButton, label);
    EnableWindow(searchButton, s != State::Invalid);
    EnableWindow(combo, !busy);
    EnableWindow(shortest, !busy);
    EnableWindow(longest, !busy);
    EnableWindow(shortestSpin, !busy);
    EnableWindow(longestSpin, !busy);
    EnableWindow(GetDlgItem(view, IDC_SHORTEST_LABEL), !busy);
    EnableWindow(GetDlgItem(view, IDC_LONGEST_LABEL), !busy);
    EnableWindow(searchMenu, !busy);
}

void Main::onSearchButton() {
    switch (state) {
    case State::Ready: startSearch(); break;
    case State::Searching:
        worker.pause(true);
        setState(State::Paused);
        setStatus(ui::loadString(4970));
        break;
    case State::Paused:
        worker.pause(false);
        setState(State::Searching);
        setStatus(ui::loadString(4960));
        SetFocus(searchButton);
        break;
    case State::Invalid: MessageBeep(MB_OK); break;
    }
}

void Main::stopSearch() {
    worker.cancel();
    generation = 0;   // results still queued from that search are dropped (the worker never uses 0)
    for (auto& p : panes) {
        p->results.flush();
        if (auto* l = resultlist::from(p->list)) l->dataChanged();
    }
    state = State::Ready;
    setState(State::Ready);
}

void Main::startSearch() {
    const std::wstring pattern = ui::windowText(comboEdit);
    g_settings.addPattern(pattern);
    fillHistory();
    searchedPattern = pattern;
    search::Params p;
    for (auto& pane : panes) p.dicts.push_back(pane->dict);
    if (g_settings.multiMode == 2) p.panes.push_back(active);
    else for (size_t i = 0; i < panes.size(); i++) p.panes.push_back(static_cast<int>(i));
    p.query = query();
    p.shortest = readLength(shortest, 1);
    p.longest = readLength(longest, 100);
    p.ignoreUnused = g_settings.ignoreUnused;
    p.exclusive = g_settings.exclusive;
    p.annotations = g_settings.showAnnotations;
    p.balances = g_settings.showBalances;
    for (int i = 0; i < 4; i++) p.show[i] = g_settings.show[i];
    p.multiMode = g_settings.multiMode;
    p.groupByLength = g_settings.groupByLength;
    p.lengthOrder = g_settings.lengthOrder;
    p.fullText = g_settings.fullText;

    // The sort order is fixed for the whole search; Smart looks at the first dictionary's pattern.
    int smart = 1;
    if (!panes.empty()) {
        tea::MatchEngineSet set;
        set.compile(*panes[0]->dict, p.query, 1, 100, p.ignoreUnused, p.exclusive);
        smart = set.lengthKindSum() < 0 ? -1 : 1;
    }
    const int mode = p.fullText ? 0 : results::sortModeFor(g_settings.sortAlphabetically, g_settings.sortAscending, g_settings.groupByLength, g_settings.lengthOrder, smart);
    for (int i : p.panes) {
        Pane& pane = *panes[i];
        pane.results.clear();
        pane.results.setSortMode(mode);
        pane.searched = true;
        if (auto* l = resultlist::from(pane.list)) l->setData(&pane.results);
        updateHeader(i);
    }
    generation = worker.start(view, std::move(p));
    setState(State::Searching);
    setStatus(ui::loadString(4960));
    SetFocus(searchButton);
}

void Main::onBatch(search::Batch* b) {
    std::unique_ptr<search::Batch> owned(b);
    if (b->generation != generation || b->pane < 0 || b->pane >= static_cast<int>(panes.size())) return;
    Pane& p = *panes[b->pane];
    p.results.add(b->texts, b->wordLengths, b->aux);
    // Merging into a sorted list costs its whole length, so large lists take new entries in bulk.
    const size_t n = p.results.size(), pending = p.results.pendingCount();
    if (n < 20000 || pending >= std::max<size_t>(4096, n / 8)) {
        p.results.flush();
        if (auto* l = resultlist::from(p.list)) l->dataChanged();
    }
    updateHeader(b->pane);
}

void Main::onProgress(search::Progress* pr) {
    std::unique_ptr<search::Progress> owned(pr);
    if (pr->generation != generation || pr->pane < 0 || pr->pane >= static_cast<int>(panes.size())) return;
    Pane& p = *panes[pr->pane];
    lengthbar::State s;
    s.dict = p.dict;
    s.fileSize = p.fileSize;
    s.searching = true;
    if (pr->length < 0) {
        s.overall = pr->fraction;
    } else {
        s.first = pr->first;
        s.last = pr->last;
        s.length = pr->length;
        s.fraction = pr->fraction;
    }
    lengthbar::set(bar, s);
}

void Main::onDone(search::Done* d) {
    std::unique_ptr<search::Done> owned(d);
    if (d->generation != generation) return;
    worker.cancel();   // joins the finished thread
    size_t total = 0;
    for (size_t i = 0; i < panes.size(); i++) {
        Pane& p = *panes[i];
        if (p.results.flush())
            if (auto* l = resultlist::from(p.list)) l->dataChanged();
        if (p.searched) updateHeader(static_cast<int>(i));
        total += p.results.size();
    }
    setState(State::Ready);
    updateBarForActive();
    if (d->status != 0) {
        setStatus(ui::loadString(13080 + d->status));
    } else {
        setStatus(ui::format(L"%u result%ls found", static_cast<unsigned>(total), total == 1 ? L"" : L"s"));
    }
    SetFocus(comboEdit);
    SendMessageW(comboEdit, EM_SETSEL, 0, -1);
}

// ---------------------------------------------------------------------------------------------
// Commands

void Main::setStatus(const std::wstring& s, bool persist) {
    if (persist) statusText = s;
    if (!menuActive) SendMessageW(status, SB_SETTEXTW, 0, reinterpret_cast<LPARAM>(s.c_str()));
}

resultlist::List* Main::focusedList(int* paneIndex) {
    HWND f = GetFocus();
    for (size_t i = 0; i < panes.size(); i++)
        if (panes[i]->list == f) {
            if (paneIndex) *paneIndex = static_cast<int>(i);
            return resultlist::from(f);
        }
    return nullptr;
}

void Main::copy() {
    if (GetFocus() == comboEdit) {
        SendMessageW(comboEdit, WM_COPY, 0, 0);
        return;
    }
    int i = active;
    resultlist::List* l = focusedList(&i);
    if (!l) {
        if (Pane* p = activePane()) l = resultlist::from(p->list);
    }
    if (!l || i < 0) return;
    const Pane& p = *panes[i];
    // As in the original, a line break follows each entry only when there is more than one.
    const std::vector<size_t> sel = l->selection();
    std::wstring text;
    for (size_t k : sel) text += ui::widen(p.results.textOf(k)) + (sel.size() > 1 ? L"\r\n" : L"");
    if (!sel.empty()) ui::setClipboardText(frame, text);
}

void Main::selectAll() {
    if (GetFocus() == comboEdit) {
        SendMessageW(comboEdit, EM_SETSEL, 0, -1);
        return;
    }
    resultlist::List* l = focusedList();
    if (!l)
        if (Pane* p = activePane()) l = resultlist::from(p->list);
    if (l) l->selectAll();
}

std::wstring Main::lookupWord(uint32_t* definition) {
    if (definition) *definition = 0;
    if (GetFocus() == comboEdit || GetFocus() == combo) {
        DWORD a = 0, b = 0;
        SendMessageW(comboEdit, EM_GETSEL, reinterpret_cast<WPARAM>(&a), reinterpret_cast<LPARAM>(&b));
        const std::wstring t = ui::windowText(comboEdit);
        if (b > a) return t.substr(a, b - a);
        return t;
    }
    int i = active;
    resultlist::List* l = focusedList(&i);
    if (!l)
        if (Pane* p = activePane()) l = resultlist::from(p->list);
    if (!l || i < 0) return {};
    const Pane& p = *panes[i];
    int f = l->focus();
    if (f < 0 || f >= static_cast<int>(p.results.size()) || !p.results.item(f).selected) {
        const auto sel = l->selection();
        if (sel.empty()) return {};
        f = static_cast<int>(sel.front());
    }
    if (definition) *definition = p.results.item(f).aux;   // full-text search: the definition that matched
    return ui::widen(p.results.wordOf(f));
}

void Main::saveResults() {
    Pane* p = activePane();
    if (!p) return;
    wchar_t file[MAX_PATH] = L"";
    std::wstring title = ui::format(L"Save Results from %ls As", ui::fileTitle(p->path).c_str());
    OPENFILENAMEW of{sizeof of};
    of.hwndOwner = frame;
    of.lpstrFilter = L"Text Document (*.txt)\0*.txt\0TEA&Sympathy Dictionary (*.tsd)\0*.tsd\0";
    of.lpstrFile = file;
    of.nMaxFile = MAX_PATH;
    of.lpstrTitle = title.c_str();
    of.lpstrDefExt = L"txt";
    of.Flags = OFN_OVERWRITEPROMPT | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY;
    if (!GetSaveFileNameW(&of)) return;
    const bool tsd = of.nFilterIndex == 2 || (wcslen(file) > 4 && _wcsicmp(file + wcslen(file) - 4, L".tsd") == 0);
    if (tsd) {
        std::vector<std::string> words;
        for (size_t i = 0; i < p->results.size(); i++) words.push_back(p->results.wordOf(i));
        const std::wstring desc = ui::fileTitle(p->path) + ui::loadString(5900) + searchedPattern;
        savetsd::run(frame, file, words, desc, *p->dict);
        return;
    }
    HANDLE h = CreateFileW(file, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (h == INVALID_HANDLE_VALUE) {
        ui::message(frame, L"Could not create " + std::wstring(file), MB_OK | MB_ICONEXCLAMATION);
        return;
    }
    // The text is written in the dictionaries' own code page, one entry per line.
    std::string out;
    for (size_t i = 0; i < p->results.size(); i++) out += p->results.textOf(i) + "\r\n";
    DWORD written = 0;
    WriteFile(h, out.data(), static_cast<DWORD>(out.size()), &written, nullptr);
    CloseHandle(h);
}

printing::Job Main::printJob() {
    printing::Job job;
    Pane* p = activePane();
    if (!p) return job;
    job.title = ui::fileTitle(p->path) + ui::loadString(5900) + searchedPattern;
    for (size_t i = 0; i < p->results.size(); i++) {
        job.all.push_back(ui::widen(p->results.textOf(i)));
        job.wordLengths.push_back(ui::widen(p->results.wordOf(i)).size());
        if (p->results.item(i).selected) {
            job.selected.push_back(job.all.back());
            job.selectedWordLengths.push_back(job.wordLengths.back());
        }
    }
    return job;
}

void Main::openFiles() {
    std::vector<wchar_t> buf(32768, 0);
    OPENFILENAMEW of{sizeof of};
    of.hwndOwner = frame;
    of.lpstrFilter = L"TEA&Sympathy Dictionary (*.tsd)\0*.tsd\0All Files (*.*)\0*.*\0";
    of.lpstrFile = buf.data();
    of.nMaxFile = static_cast<DWORD>(buf.size());
    of.lpstrTitle = L"Open Dictionary";
    std::wstring dir = g_settings.openFolder;
    if (dir.empty() && !panes.empty()) dir = ui::directoryOf(panes.back()->path);
    of.lpstrInitialDir = dir.empty() ? nullptr : dir.c_str();
    of.Flags = OFN_ALLOWMULTISELECT | OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
    if (!GetOpenFileNameW(&of)) return;
    std::vector<std::wstring> files;
    const std::wstring first = buf.data();
    const wchar_t* p = buf.data() + first.size() + 1;
    if (*p == 0) {
        files.push_back(first);
    } else {
        for (; *p; p += wcslen(p) + 1) files.push_back(first + L"\\" + p);
    }
    g_settings.openFolder = ui::directoryOf(files.front());
    for (const auto& f : files) addPane(f, true);
    if (!panes.empty()) setActive(static_cast<int>(panes.size()) - 1, false);
    validate();
}

void Main::showMenu(int menuId, POINT pt, HWND owner) {
    HMENU bar = LoadMenuW(app::instance(), MAKEINTRESOURCEW(menuId));
    if (!bar) return;
    HMENU popup = menuId == IDM_DEFINITION_CONTEXT ? bar : GetSubMenu(bar, 0);
    // The context menus are stored as one-level menus; wrap so TrackPopupMenu gets a popup.
    HMENU shown = CreatePopupMenu();
    const int n = GetMenuItemCount(bar);
    for (int i = 0; i < n; i++) {
        wchar_t text[256] = L"";
        MENUITEMINFOW mi{sizeof mi};
        mi.fMask = MIIM_ID | MIIM_FTYPE | MIIM_STRING | MIIM_SUBMENU;
        mi.dwTypeData = text;
        mi.cch = 255;
        GetMenuItemInfoW(bar, i, TRUE, &mi);
        if (mi.hSubMenu) {
            HMENU sub = CreatePopupMenu();
            lookup::fillMenu(sub);
            AppendMenuW(shown, MF_POPUP, reinterpret_cast<UINT_PTR>(sub), text);
        } else if (mi.fType & MFT_SEPARATOR) {
            AppendMenuW(shown, MF_SEPARATOR, 0, nullptr);
        } else {
            AppendMenuW(shown, MF_STRING, mi.wID, text);
        }
    }
    (void)popup;
    DestroyMenu(bar);
    initMenu(shown);
    TrackPopupMenu(shown, TPM_LEFTALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, 0, owner, nullptr);
    DestroyMenu(shown);
}

void Main::initMenu(HMENU menu) {
    const int n = GetMenuItemCount(menu);
    const Pane* p = activePane();
    const std::wstring title = p ? ui::fileTitle(p->path) : L"";
    const bool busy = state == State::Searching || state == State::Paused;
    const bool editFocus = GetFocus() == comboEdit;
    resultlist::List* list = p ? resultlist::from(p->list) : nullptr;
    const bool hasResults = list && list->count() > 0;
    for (int i = 0; i < n; i++) {
        MENUITEMINFOW mi{sizeof mi};
        wchar_t text[512] = L"";
        mi.fMask = MIIM_ID | MIIM_STRING | MIIM_SUBMENU | MIIM_FTYPE | MIIM_DATA;
        mi.dwTypeData = text;
        mi.cch = 511;
        GetMenuItemInfoW(menu, i, TRUE, &mi);
        if (mi.hSubMenu) {
            // The External Lookup submenu is rebuilt from the current methods.
            std::wstring t = text;
            if (t.find(L"External") != std::wstring::npos) lookup::fillMenu(mi.hSubMenu);
            continue;
        }
        const UINT id = mi.wID;
        // Item text templates: "*" stands for the active dictionary. The template is kept in the item
        // data the first time so that it can be refilled when the active dictionary changes.
        std::wstring tmpl = text;
        if (mi.dwItemData) tmpl = reinterpret_cast<const wchar_t*>(mi.dwItemData);
        else if (tmpl.find(L'*') != std::wstring::npos) {
            wchar_t* copyText = _wcsdup(tmpl.c_str());
            MENUITEMINFOW d{sizeof d};
            d.fMask = MIIM_DATA;
            d.dwItemData = reinterpret_cast<ULONG_PTR>(copyText);
            SetMenuItemInfoW(menu, i, TRUE, &d);
        }
        if (tmpl.find(L'*') != std::wstring::npos) {
            std::wstring t = tmpl;
            const size_t star = t.find(L'*');
            t.replace(star, 1, title.empty() ? L"" : title);
            MENUITEMINFOW s{sizeof s};
            s.fMask = MIIM_STRING;
            s.dwTypeData = const_cast<wchar_t*>(t.c_str());
            SetMenuItemInfoW(menu, i, TRUE, &s);
        }
        bool enabled = true;
        switch (id) {
        case CM_FILE_OPEN: enabled = panes.size() < static_cast<size_t>(kMaxPanes); break;
        case CM_FILE_CLOSE: case CM_PROPERTIES: enabled = p != nullptr; break;
        case CM_SAVE_RESULTS: case CM_PRINT: case CM_PRINT_PREVIEW: enabled = hasResults && !busy; break;
        case CM_DEMOTE: enabled = p && active + 1 < static_cast<int>(panes.size()); break;
        case CM_PROMOTE: enabled = p && active > 0; break;
        case CM_CUT: case CM_PASTE: enabled = editFocus; break;
        case CM_COPY: enabled = editFocus || (list && list->hasSelection()); break;
        case CM_SELECT_ALL: enabled = editFocus || hasResults; break;
        case CM_LOOKUP: case CM_LOOKUP_NEW: enabled = !lookupWord().empty(); break;
        case CM_DICTIONARY_BUILDER: enabled = !app::findCompanionFile(L"TSBuild.exe").empty(); break;
        case CM_WORD_LIST_MERGE: enabled = !app::findCompanionFile(L"TSMerge.exe").empty(); break;
        case CM_HELP_CONTENTS: enabled = !app::findCompanionFile(L"TEA.chm").empty(); break;
        case CM_TOPMOST: CheckMenuItem(menu, id, MF_BYCOMMAND | (g_settings.topMost ? MF_CHECKED : MF_UNCHECKED)); break;
        case CM_TILE_HORIZONTAL: case CM_TILE_VERTICAL:
            CheckMenuRadioItem(menu, CM_TILE_HORIZONTAL, CM_TILE_VERTICAL, g_settings.orientation == 0 ? CM_TILE_HORIZONTAL : CM_TILE_VERTICAL, MF_BYCOMMAND);
            break;
        case CM_WORD_SEARCH: case CM_FULL_TEXT_SEARCH:
            CheckMenuRadioItem(menu, CM_WORD_SEARCH, CM_FULL_TEXT_SEARCH, g_settings.fullText ? CM_FULL_TEXT_SEARCH : CM_WORD_SEARCH, MF_BYCOMMAND);
            break;
        }
        if (id >= CM_MRU_FIRST && id < CM_MRU_FIRST + 10) continue;
        EnableMenuItem(menu, i, MF_BYPOSITION | (enabled ? MF_ENABLED : MF_GRAYED));
    }
    // Recent files: the placeholder item 4840 becomes the list (or disappears if there is none).
    int at = -1;
    for (int i = 0; i < GetMenuItemCount(menu); i++) {
        const UINT id = GetMenuItemID(menu, i);
        if (id >= CM_MRU_FIRST && id < CM_MRU_FIRST + 10) {
            if (at < 0) at = i;
            DeleteMenu(menu, i, MF_BYPOSITION);
            i--;
        }
    }
    if (at >= 0) {
        int k = 0;
        for (const std::wstring& f : g_settings.recentFiles) {
            std::wstring label = ui::format(L"&%d %ls", (k + 1) % 10, ui::fileTitle(f).c_str());
            InsertMenuW(menu, at + k, MF_BYPOSITION | MF_STRING, CM_MRU_FIRST + k, label.c_str());
            if (++k == 10) break;
        }
        if (k == 0) {
            // Keep one disabled placeholder so the menu's separators stay where they are.
            InsertMenuW(menu, at, MF_BYPOSITION | MF_STRING | MF_GRAYED, CM_MRU_FIRST, L"(no recent files)");
        }
    }
}

void launchTool(HWND owner, const wchar_t* exe) {
    const std::wstring path = app::findCompanionFile(exe);
    if (path.empty()) return;
    ShellExecuteW(owner, L"open", path.c_str(), nullptr, ui::directoryOf(path).c_str(), SW_SHOWNORMAL);
}

void Main::command(int id, int code, HWND ctl) {
    // Controls in the view.
    if (ctl && ctl != frame) {
        if (id == IDC_PATTERN) {
            if (code == CBN_EDITCHANGE) validate();
            else if (code == CBN_SELCHANGE) {
                const int sel = static_cast<int>(SendMessageW(combo, CB_GETCURSEL, 0, 0));
                if (sel >= 0) {
                    const int len = static_cast<int>(SendMessageW(combo, CB_GETLBTEXTLEN, sel, 0));
                    std::wstring t(len + 1, L'\0');
                    SendMessageW(combo, CB_GETLBTEXT, sel, reinterpret_cast<LPARAM>(&t[0]));
                    t.resize(len);
                    SetWindowTextW(comboEdit, t.c_str());
                }
                validate();
            }
            return;
        }
        if ((id == IDC_SHORTEST || id == IDC_LONGEST) && code == EN_CHANGE) {
            validate();
            return;
        }
        if (id == IDC_SEARCH && code == BN_CLICKED) {
            onSearchButton();
            return;
        }
        if (id == IDC_SEARCH_MENU && (code == BN_CLICKED || code == STN_CLICKED)) {
            RECT r;
            GetWindowRect(searchButton, &r);
            showMenu(IDM_SEARCH_CONTEXT, POINT{r.left, r.bottom}, frame);
            return;
        }
        if (id >= IDC_LIST_FIRST && id < IDC_LIST_FIRST + kMaxPanes) {
            const int i = id - IDC_LIST_FIRST;
            if (code == resultlist::LN_ACTIVATE) setActive(i, false);
            else if (code == resultlist::LN_DBLCLK) {
                setActive(i, false);
                if (g_settings.doubleClick == 1) command(CM_EXTERNAL_DEFAULT, 0, nullptr);
                else command(GetKeyState(VK_SHIFT) < 0 ? CM_LOOKUP_NEW : CM_LOOKUP, 0, nullptr);
            }
            return;
        }
        if (id == IDOK) {   // Enter in the pattern box
            if (state == State::Ready || state == State::Paused || state == State::Searching) onSearchButton();
            else MessageBeep(MB_OK);
            return;
        }
        if (id == IDCANCEL) return;
    }
    if (id == IDOK) {
        if (state != State::Invalid) onSearchButton();
        return;
    }
    if (id >= CM_MRU_FIRST && id < CM_MRU_FIRST + 10) {
        const size_t k = id - CM_MRU_FIRST;
        if (k < g_settings.recentFiles.size()) {
            const std::wstring f = g_settings.recentFiles[k];
            if (addPane(f, true)) setActive(static_cast<int>(panes.size()) - 1, false);
            validate();
        }
        return;
    }
    if (id >= CM_EXTERNAL_FIRST && id < CM_EXTERNAL_FIRST + 12) {
        const std::wstring w = lookupWord();
        if (!w.empty()) lookup::run(frame, w, id - CM_EXTERNAL_FIRST);
        return;
    }
    if (id >= CM_SELECT_DICTIONARY && id < CM_SELECT_DICTIONARY + 10) {
        setActive(id - CM_SELECT_DICTIONARY, true);
        return;
    }
    switch (id) {
    case CM_FILE_OPEN: openFiles(); break;
    case CM_FILE_CLOSE: closePane(active); break;
    case CM_SAVE_RESULTS: saveResults(); break;
    case CM_DEMOTE: movePane(active, active + 1); break;
    case CM_PROMOTE: movePane(active, active - 1); break;
    case CM_PROPERTIES:
        if (Pane* p = activePane()) dialogs::showProperties(frame, p->path, *p->dict);
        break;
    case CM_PRINT: printing::print(frame, printJob()); break;
    case CM_PRINT_PREVIEW: printing::preview(frame, printJob()); break;
    case CM_PAGE_SETUP: printing::pageSetup(frame); break;
    case CM_EXIT: SendMessageW(frame, WM_CLOSE, 0, 0); break;
    case CM_CUT: if (GetFocus() == comboEdit) SendMessageW(comboEdit, WM_CUT, 0, 0); break;
    case CM_PASTE: if (GetFocus() == comboEdit) SendMessageW(comboEdit, WM_PASTE, 0, 0); break;
    case CM_COPY: copy(); break;
    case CM_SELECT_ALL: selectAll(); break;
    case CM_LOOKUP:
    case CM_LOOKUP_NEW: {
        uint32_t definition = 0;
        const std::wstring w = lookupWord(&definition);
        if (!w.empty()) definitions::lookup(frame, w, id == CM_LOOKUP_NEW, definition);
        break;
    }
    case CM_EXTERNAL_DEFAULT: {
        const std::wstring w = lookupWord();
        if (!w.empty()) lookup::run(frame, w, -1);
        break;
    }
    case CM_EXTERNAL_SETUP: lookup::showSetup(frame); break;
    case CM_DICTIONARY_BUILDER: launchTool(frame, L"TSBuild.exe"); break;
    case CM_WORD_LIST_MERGE: launchTool(frame, L"TSMerge.exe"); break;
    case CM_OPTIONS: dialogs::showOptions(frame); break;
    case CM_TOPMOST:
        g_settings.topMost = !g_settings.topMost;
        SetWindowPos(frame, g_settings.topMost ? HWND_TOPMOST : HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
        break;
    case CM_TILE_HORIZONTAL:
    case CM_TILE_VERTICAL:
        g_settings.orientation = id == CM_TILE_VERTICAL ? 1 : 0;
        for (auto& p : panes) p->weight = 1.0;
        layout();
        break;
    case CM_QUICK_REFERENCE: dialogs::showQuickReference(frame); break;
    case CM_STARTUP_TIPS: dialogs::showTips(frame); break;
    case CM_HELP_CONTENTS: app::showHelp(frame); break;
    case CM_ABOUT: dialogs::showAbout(frame); break;
    case CM_WORD_SEARCH:
    case CM_FULL_TEXT_SEARCH:
        if (state == State::Searching) break;
        g_settings.fullText = id == CM_FULL_TEXT_SEARCH;
        if (state == State::Paused) stopSearch();
        setState(state);
        validate();
        break;
    case CM_FOCUS_PATTERN:
        SetForegroundWindow(frame);
        SetFocus(comboEdit);
        SendMessageW(comboEdit, EM_SETSEL, 0, -1);
        break;
    }
}

} // namespace

// ---------------------------------------------------------------------------------------------

bool create(int show, const std::vector<std::wstring>& files) {
    g = new Main;
    return g->createWindows(show, files);
}

HWND window() { return g ? g->frame : nullptr; }

bool translate(MSG& msg) {
    if (!g || !g->frame) return false;
    if (msg.hwnd != g->frame && !IsChild(g->frame, msg.hwnd)) return false;
    if (g->accel && TranslateAcceleratorW(g->frame, g->accel, &msg)) return true;
    return g->view && IsDialogMessageW(g->view, &msg);
}

std::vector<std::shared_ptr<const tea::Dictionary>> openDictionaries() {
    std::vector<std::shared_ptr<const tea::Dictionary>> out;
    if (g)
        for (auto& p : g->panes) out.push_back(p->dict);
    return out;
}

std::shared_ptr<const tea::Dictionary> loadDictionary(const std::wstring& path) { return loadDictionaryImpl(path); }

void settingsChanged() {
    if (!g) return;
    g->makeFonts();
    if (g->state != State::Searching) g->validate();
}

void tryPattern(const std::wstring& pattern) {
    if (!g) return;
    if (g->state == State::Searching || g->state == State::Paused) g->stopSearch();
    SetWindowTextW(g->comboEdit, pattern.c_str());
    g->validate();
    if (g->state == State::Ready) g->startSearch();
}

std::wstring stepResult(int delta) {
    if (!g) return {};
    Pane* p = g->activePane();
    if (!p) return {};
    resultlist::List* l = resultlist::from(p->list);
    if (!l || l->count() == 0) return {};
    int f = l->focus();
    if (f < 0) {
        const auto sel = l->selection();
        f = sel.empty() ? (delta > 0 ? -1 : static_cast<int>(l->count())) : static_cast<int>(sel.front());
    }
    const int to = f + delta;
    if (to < 0 || to >= static_cast<int>(l->count())) return {};
    l->selectOnly(to);
    return ui::widen(p->results.wordOf(to));
}

void setStatus(const std::wstring& text) {
    if (g) g->setStatus(text);
}

} // namespace mainwin

#include "resultlist.h"

#include <commctrl.h>
#include <windowsx.h>

#include <algorithm>

namespace resultlist {

namespace {

const wchar_t* kClass = L"MATCHLIST";
constexpr UINT_PTR kScrollTimer = 1;

LRESULT CALLBACK wndProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    List* list = from(h);
    if (msg == WM_NCCREATE) {
        list = new List(h);
        SetWindowLongPtrW(h, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(list));
    }
    if (!list) return DefWindowProcW(h, msg, wp, lp);
    const LRESULT r = list->proc(msg, wp, lp);
    if (msg == WM_NCDESTROY) {
        SetWindowLongPtrW(h, GWLP_USERDATA, 0);
        delete list;
    }
    return r;
}

} // namespace

void registerClass(HINSTANCE inst) {
    WNDCLASSW wc{};
    wc.style = CS_DBLCLKS;
    wc.lpfnWndProc = wndProc;
    wc.hInstance = inst;
    wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    wc.lpszClassName = kClass;
    RegisterClassW(&wc);
}

HWND create(HWND parent, int id) {
    return CreateWindowExW(WS_EX_CLIENTEDGE, kClass, L"MatchList", WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_VSCROLL, 0, 0, 10, 10, parent,
                           reinterpret_cast<HMENU>(static_cast<INT_PTR>(id)), GetModuleHandleW(nullptr), nullptr);
}

List* from(HWND h) { return reinterpret_cast<List*>(GetWindowLongPtrW(h, GWLP_USERDATA)); }

void List::setData(results::ResultSet* data) {
    data_ = data;
    reset();
}

void List::reset() {
    hideTip();
    top_ = 0;
    focus_ = -1;
    anchor_ = -1;
    updateScroll();
    InvalidateRect(hwnd_, nullptr, TRUE);
}

void List::dataChanged() {
    updateScroll();
    InvalidateRect(hwnd_, nullptr, FALSE);
}

void List::setFonts(HFONT word, HFONT annotation, COLORREF wordColor, COLORREF annotationColor) {
    wordFont_ = word;
    annotationFont_ = annotation;
    wordColor_ = wordColor;
    annotationColor_ = annotationColor;
    rowHeight_ = 0;
    updateScroll();
    InvalidateRect(hwnd_, nullptr, TRUE);
}

int List::rowHeight() {
    if (rowHeight_ == 0) {
        HDC dc = GetDC(hwnd_);
        int h = 0;
        for (HFONT f : {wordFont_, annotationFont_}) {
            HGDIOBJ old = SelectObject(dc, f ? f : GetStockObject(DEFAULT_GUI_FONT));
            TEXTMETRICW tm;
            GetTextMetricsW(dc, &tm);
            h = std::max<int>(h, tm.tmHeight);
            SelectObject(dc, old);
        }
        ReleaseDC(hwnd_, dc);
        rowHeight_ = std::max(h, 4);
    }
    return rowHeight_;
}

int List::visibleRows() {
    RECT r;
    GetClientRect(hwnd_, &r);
    return std::max<int>(1, (r.bottom - r.top) / rowHeight());
}

void List::updateScroll() {
    const int n = static_cast<int>(count());
    const int page = visibleRows();
    if (top_ > n - page) top_ = std::max(0, n - page);
    SCROLLINFO si{sizeof si};
    si.fMask = SIF_RANGE | SIF_PAGE | SIF_POS | SIF_DISABLENOSCROLL;
    si.nMin = 0;
    si.nMax = std::max(0, n - 1);
    si.nPage = static_cast<UINT>(page);
    si.nPos = top_;
    // The scroll bar appears only when the entries do not fit.
    ShowScrollBar(hwnd_, SB_VERT, n > page);
    SetScrollInfo(hwnd_, SB_VERT, &si, TRUE);
}

void List::scrollTo(int top) {
    hideTip();
    const int n = static_cast<int>(count());
    top = std::max(0, std::min(top, n - visibleRows()));
    if (top == top_) return;
    top_ = top;
    SetScrollPos(hwnd_, SB_VERT, top_, TRUE);
    InvalidateRect(hwnd_, nullptr, FALSE);
}

void List::ensureVisible(int index) {
    if (index < 0) return;
    const int page = visibleRows();
    if (index < top_) scrollTo(index);
    else if (index >= top_ + page) scrollTo(index - page + 1);
}

int List::hit(int y) {
    const int i = top_ + y / rowHeight();
    return (y >= 0 && i < static_cast<int>(count())) ? i : -1;
}

void List::invalidateRow(int index) {
    if (index < top_ || index > top_ + visibleRows() + 1) return;
    RECT r;
    GetClientRect(hwnd_, &r);
    r.top = (index - top_) * rowHeight();
    r.bottom = r.top + rowHeight();
    InvalidateRect(hwnd_, &r, FALSE);
}

std::vector<size_t> List::selection() const {
    std::vector<size_t> out;
    for (size_t i = 0; i < count(); i++)
        if (data_->item(i).selected) out.push_back(i);
    return out;
}

bool List::hasSelection() const {
    for (size_t i = 0; i < count(); i++)
        if (data_->item(i).selected) return true;
    return false;
}

void List::clearSelection() {
    for (size_t i = 0; i < count(); i++) data_->item(i).selected = 0;
}

void List::setRange(int a, int b, bool on) {
    if (a > b) std::swap(a, b);
    for (int i = std::max(0, a); i <= b && i < static_cast<int>(count()); i++) data_->item(i).selected = on ? 1 : 0;
}

void List::selectAll() {
    if (!count()) return;
    setRange(0, static_cast<int>(count()) - 1, true);
    if (focus_ < 0) focus_ = 0;
    anchor_ = 0;
    InvalidateRect(hwnd_, nullptr, FALSE);
    notify(LN_SELCHANGE);
}

void List::selectOnly(int index) {
    if (index < 0 || index >= static_cast<int>(count())) return;
    clearSelection();
    data_->item(index).selected = 1;
    focus_ = anchor_ = index;
    ensureVisible(index);
    InvalidateRect(hwnd_, nullptr, FALSE);
    notify(LN_SELCHANGE);
}

void List::moveFocus(int to, bool shift, bool ctrl) {
    const int n = static_cast<int>(count());
    if (n == 0) return;
    to = std::max(0, std::min(to, n - 1));
    if (shift) {
        if (anchor_ < 0) anchor_ = focus_ < 0 ? to : focus_;
        if (!ctrl) clearSelection();
        setRange(anchor_, to, true);
    } else if (!ctrl) {
        clearSelection();
        data_->item(to).selected = 1;
        anchor_ = to;
    }
    focus_ = to;
    ensureVisible(to);
    InvalidateRect(hwnd_, nullptr, FALSE);
    notify(LN_SELCHANGE);
}

// A tooltip shows the whole of an entry that is cut off at the right, over the entry itself.
void List::showTip(int index) {
    if (!tracking_) {
        TRACKMOUSEEVENT tme{sizeof tme, TME_LEAVE, hwnd_, 0};
        TrackMouseEvent(&tme);
        tracking_ = true;
    }
    if (index == tipIndex_) return;
    hideTip();
    if (index < 0 || index >= static_cast<int>(count())) return;
    const results::Item& it = data_->item(index);
    const std::wstring word = ui::widen(std::string(data_->text(it), it.wordLength));
    const std::wstring rest = ui::widen(std::string(data_->text(it) + it.wordLength, it.length - it.wordLength));
    HDC dc = GetDC(hwnd_);
    SIZE a{}, b{};
    HGDIOBJ old = SelectObject(dc, wordFont_ ? wordFont_ : GetStockObject(DEFAULT_GUI_FONT));
    GetTextExtentPoint32W(dc, word.c_str(), static_cast<int>(word.size()), &a);
    SelectObject(dc, annotationFont_ ? annotationFont_ : GetStockObject(DEFAULT_GUI_FONT));
    GetTextExtentPoint32W(dc, rest.c_str(), static_cast<int>(rest.size()), &b);
    SelectObject(dc, old);
    ReleaseDC(hwnd_, dc);
    RECT client;
    GetClientRect(hwnd_, &client);
    const int pad = MulDiv(3, ui::dpiOf(hwnd_), 96);
    if (pad + a.cx + b.cx <= client.right) return;
    if (!tip_) {
        tip_ = CreateWindowExW(WS_EX_TOPMOST, TOOLTIPS_CLASSW, nullptr, WS_POPUP | TTS_NOPREFIX | TTS_ALWAYSTIP, 0, 0, 0, 0, hwnd_, nullptr,
                               GetModuleHandleW(nullptr), nullptr);
        TOOLINFOW ti{sizeof ti};
        ti.uFlags = TTF_TRACK | TTF_ABSOLUTE | TTF_IDISHWND;
        ti.hwnd = hwnd_;
        ti.uId = reinterpret_cast<UINT_PTR>(hwnd_);
        ti.lpszText = const_cast<wchar_t*>(L"");
        SendMessageW(tip_, TTM_ADDTOOLW, 0, reinterpret_cast<LPARAM>(&ti));
    }
    SendMessageW(tip_, WM_SETFONT, reinterpret_cast<WPARAM>(wordFont_), FALSE);
    tipText_ = word + rest;
    TOOLINFOW ti{sizeof ti};
    ti.hwnd = hwnd_;
    ti.uId = reinterpret_cast<UINT_PTR>(hwnd_);
    ti.lpszText = const_cast<wchar_t*>(tipText_.c_str());
    SendMessageW(tip_, TTM_UPDATETIPTEXTW, 0, reinterpret_cast<LPARAM>(&ti));
    POINT pt{0, (index - top_) * rowHeight()};
    ClientToScreen(hwnd_, &pt);
    SendMessageW(tip_, TTM_TRACKPOSITION, 0, MAKELPARAM(pt.x, pt.y));
    SendMessageW(tip_, TTM_TRACKACTIVATE, TRUE, reinterpret_cast<LPARAM>(&ti));
    tipIndex_ = index;
}

void List::hideTip() {
    if (tip_ && tipIndex_ >= 0) {
        TOOLINFOW ti{sizeof ti};
        ti.hwnd = hwnd_;
        ti.uId = reinterpret_cast<UINT_PTR>(hwnd_);
        SendMessageW(tip_, TTM_TRACKACTIVATE, FALSE, reinterpret_cast<LPARAM>(&ti));
    }
    tipIndex_ = -1;
}

void List::notify(WORD code) {
    SendMessageW(GetParent(hwnd_), WM_COMMAND, MAKEWPARAM(GetDlgCtrlID(hwnd_), code), reinterpret_cast<LPARAM>(hwnd_));
}

void List::paint(HDC dc) {
    RECT client;
    GetClientRect(hwnd_, &client);
    const int rh = rowHeight();
    const bool focused = GetFocus() == hwnd_;
    const int pad = MulDiv(3, ui::dpiOf(hwnd_), 96);
    SetBkMode(dc, TRANSPARENT);
    const int n = static_cast<int>(count());
    int y = 0;
    for (int i = top_; y < client.bottom; i++, y += rh) {
        RECT row{0, y, client.right, y + rh};
        if (i >= n) {
            RECT rest{0, y, client.right, client.bottom};
            FillRect(dc, &rest, GetSysColorBrush(COLOR_WINDOW));
            break;
        }
        const results::Item& it = data_->item(i);
        const bool sel = it.selected != 0;
        const int bg = sel ? (focused ? COLOR_HIGHLIGHT : COLOR_BTNFACE) : COLOR_WINDOW;
        FillRect(dc, &row, GetSysColorBrush(bg));
        const std::wstring word = ui::widen(std::string(data_->text(it), it.wordLength));
        const std::wstring rest = ui::widen(std::string(data_->text(it) + it.wordLength, it.length - it.wordLength));
        HGDIOBJ old = SelectObject(dc, wordFont_ ? wordFont_ : GetStockObject(DEFAULT_GUI_FONT));
        SetTextColor(dc, sel && focused ? GetSysColor(COLOR_HIGHLIGHTTEXT) : wordColor_);
        TEXTMETRICW tm;
        GetTextMetricsW(dc, &tm);
        RECT tr{pad, y, client.right, y + rh};
        SIZE sz{};
        GetTextExtentPoint32W(dc, word.c_str(), static_cast<int>(word.size()), &sz);
        DrawTextW(dc, word.c_str(), static_cast<int>(word.size()), &tr, DT_SINGLELINE | DT_NOPREFIX | DT_BOTTOM);
        if (!rest.empty()) {
            SelectObject(dc, annotationFont_ ? annotationFont_ : GetStockObject(DEFAULT_GUI_FONT));
            SetTextColor(dc, sel && focused ? GetSysColor(COLOR_HIGHLIGHTTEXT) : annotationColor_);
            RECT ar{pad + sz.cx, y, client.right, y + rh};
            DrawTextW(dc, rest.c_str(), static_cast<int>(rest.size()), &ar, DT_SINGLELINE | DT_NOPREFIX | DT_BOTTOM);
        }
        SelectObject(dc, old);
        if (focused && i == focus_) DrawFocusRect(dc, &row);
    }
}

LRESULT List::proc(UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_GETDLGCODE:
        return DLGC_WANTARROWS | DLGC_WANTCHARS;
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(hwnd_, &ps);
        RECT r;
        GetClientRect(hwnd_, &r);
        // Paint through a memory bitmap so scrolling and filling do not flicker.
        HDC mem = CreateCompatibleDC(dc);
        HBITMAP bmp = CreateCompatibleBitmap(dc, std::max<LONG>(1, r.right), std::max<LONG>(1, r.bottom));
        HGDIOBJ oldBmp = SelectObject(mem, bmp);
        paint(mem);
        BitBlt(dc, 0, 0, r.right, r.bottom, mem, 0, 0, SRCCOPY);
        SelectObject(mem, oldBmp);
        DeleteObject(bmp);
        DeleteDC(mem);
        EndPaint(hwnd_, &ps);
        return 0;
    }
    case WM_SIZE:
        updateScroll();
        InvalidateRect(hwnd_, nullptr, FALSE);
        return 0;
    case WM_SETFOCUS:
    case WM_KILLFOCUS:
        InvalidateRect(hwnd_, nullptr, FALSE);
        if (msg == WM_SETFOCUS) notify(LN_ACTIVATE);
        return 0;
    case WM_VSCROLL: {
        SCROLLINFO si{sizeof si};
        si.fMask = SIF_ALL;
        GetScrollInfo(hwnd_, SB_VERT, &si);
        int top = top_;
        switch (LOWORD(wp)) {
        case SB_LINEUP: top--; break;
        case SB_LINEDOWN: top++; break;
        case SB_PAGEUP: top -= visibleRows(); break;
        case SB_PAGEDOWN: top += visibleRows(); break;
        case SB_TOP: top = 0; break;
        case SB_BOTTOM: top = static_cast<int>(count()); break;
        case SB_THUMBTRACK:
        case SB_THUMBPOSITION: top = si.nTrackPos; break;
        }
        scrollTo(top);
        return 0;
    }
    case WM_MOUSEWHEEL: {
        UINT lines = 3;
        SystemParametersInfoW(SPI_GETWHEELSCROLLLINES, 0, &lines, 0);
        wheelRemainder_ += GET_WHEEL_DELTA_WPARAM(wp);
        const int steps = wheelRemainder_ / WHEEL_DELTA;
        wheelRemainder_ -= steps * WHEEL_DELTA;
        if (lines == WHEEL_PAGESCROLL) scrollTo(top_ - steps * visibleRows());
        else scrollTo(top_ - steps * static_cast<int>(lines));
        return 0;
    }
    case WM_KEYDOWN: {
        const bool shift = GetKeyState(VK_SHIFT) < 0, ctrl = GetKeyState(VK_CONTROL) < 0;
        const int f = focus_ < 0 ? 0 : focus_;
        switch (wp) {
        case VK_UP: moveFocus(focus_ < 0 ? 0 : f - 1, shift, ctrl); return 0;
        case VK_DOWN: moveFocus(focus_ < 0 ? 0 : f + 1, shift, ctrl); return 0;
        case VK_PRIOR: moveFocus(f - (visibleRows() - 1), shift, ctrl); return 0;
        case VK_NEXT: moveFocus(f + (visibleRows() - 1), shift, ctrl); return 0;
        case VK_HOME: moveFocus(0, shift, ctrl); return 0;
        case VK_END: moveFocus(static_cast<int>(count()) - 1, shift, ctrl); return 0;
        case VK_SPACE:
            if (focus_ >= 0 && focus_ < static_cast<int>(count())) {
                if (ctrl) data_->item(focus_).selected ^= 1;
                else { clearSelection(); data_->item(focus_).selected = 1; }
                anchor_ = focus_;
                invalidateRow(focus_);
                InvalidateRect(hwnd_, nullptr, FALSE);
                notify(LN_SELCHANGE);
            }
            return 0;
        }
        break;
    }
    case WM_CHAR:
        if (wp == L' ') return 0;
        break;
    case WM_LBUTTONDOWN:
    case WM_RBUTTONDOWN: {
        SetFocus(hwnd_);
        const int i = hit(GET_Y_LPARAM(lp));
        const bool shift = (wp & MK_SHIFT) != 0, ctrl = (wp & MK_CONTROL) != 0;
        if (i < 0) return 0;
        if (msg == WM_RBUTTONDOWN) {
            if (!data_->item(i).selected) { clearSelection(); data_->item(i).selected = 1; anchor_ = i; }
            focus_ = i;
            InvalidateRect(hwnd_, nullptr, FALSE);
            notify(LN_SELCHANGE);
            return 0;
        }
        if (ctrl && !shift) {
            data_->item(i).selected ^= 1;
            anchor_ = i;
        } else if (shift) {
            if (anchor_ < 0) anchor_ = i;
            if (!ctrl) clearSelection();
            setRange(anchor_, i, true);
        } else {
            clearSelection();
            data_->item(i).selected = 1;
            anchor_ = i;
        }
        focus_ = i;
        dragging_ = true;
        dragCtrl_ = ctrl;
        SetCapture(hwnd_);
        InvalidateRect(hwnd_, nullptr, FALSE);
        notify(LN_SELCHANGE);
        return 0;
    }
    case WM_MOUSEMOVE:
        if (dragging_) {
            dragY_ = GET_Y_LPARAM(lp);
            hideTip();
            RECT r;
            GetClientRect(hwnd_, &r);
            if (dragY_ < 0 || dragY_ >= r.bottom) {
                SetTimer(hwnd_, kScrollTimer, 60, nullptr);
            } else {
                KillTimer(hwnd_, kScrollTimer);
                const int i = hit(dragY_);
                if (i >= 0 && i != focus_) {
                    if (!dragCtrl_) clearSelection();
                    setRange(anchor_, i, true);
                    focus_ = i;
                    InvalidateRect(hwnd_, nullptr, FALSE);
                    notify(LN_SELCHANGE);
                }
            }
        } else {
            showTip(hit(GET_Y_LPARAM(lp)));
        }
        return 0;
    case WM_MOUSELEAVE:
        tracking_ = false;
        hideTip();
        return 0;
    case WM_TIMER:
        if (wp == kScrollTimer && dragging_) {
            const int to = dragY_ < 0 ? top_ - 1 : top_ + visibleRows();
            scrollTo(dragY_ < 0 ? top_ - 1 : top_ + 1);
            const int i = std::max(0, std::min(to, static_cast<int>(count()) - 1));
            if (count()) {
                if (!dragCtrl_) clearSelection();
                setRange(anchor_, i, true);
                focus_ = i;
                InvalidateRect(hwnd_, nullptr, FALSE);
            }
        }
        return 0;
    case WM_LBUTTONUP:
    case WM_CAPTURECHANGED:
        if (dragging_) {
            dragging_ = false;
            KillTimer(hwnd_, kScrollTimer);
            if (msg == WM_LBUTTONUP) ReleaseCapture();
        }
        return 0;
    case WM_LBUTTONDBLCLK:
        if (hit(GET_Y_LPARAM(lp)) >= 0) notify(LN_DBLCLK);
        return 0;
    case WM_CONTEXTMENU:
        // Let the parent show the result menu (lParam is the screen point, or -1 for the keyboard).
        SendMessageW(GetParent(hwnd_), WM_CONTEXTMENU, reinterpret_cast<WPARAM>(hwnd_), lp);
        return 0;
    }
    return DefWindowProcW(hwnd_, msg, wp, lp);
}

} // namespace resultlist

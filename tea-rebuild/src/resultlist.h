// The results list control (window class "MATCHLIST", as in the original).
//
// A virtual list over a results::ResultSet: each entry's word is drawn in the results font and the
// rest (annotation, anagram balance) in the annotation font. Supports the original's selection
// gestures: click, Shift/Ctrl-click, drag, arrow keys with Shift/Ctrl, Ctrl+Space.
#pragma once
#include "results.h"
#include "util.h"

namespace resultlist {

// Notifications sent to the parent as WM_COMMAND(MAKEWPARAM(id, code), hwnd).
constexpr WORD LN_ACTIVATE = 1;      // clicked or focused: make this list's dictionary active
constexpr WORD LN_DBLCLK = 2;        // double-click on an entry (Shift state in GetKeyState)
constexpr WORD LN_SELCHANGE = 3;

void registerClass(HINSTANCE inst);
HWND create(HWND parent, int id);

class List;
List* from(HWND h);

class List {
public:
    explicit List(HWND h) : hwnd_(h) {}
    HWND hwnd() const { return hwnd_; }

    void setData(results::ResultSet* data);     // not owned; null for an empty list
    void dataChanged();                         // entries were added; keeps the view where it was
    void reset();                               // a new search: back to the top, no selection
    void setFonts(HFONT word, HFONT annotation, COLORREF wordColor, COLORREF annotationColor);

    size_t count() const { return data_ ? data_->size() : 0; }
    int focus() const { return focus_; }
    std::vector<size_t> selection() const;
    bool hasSelection() const;
    void selectAll();
    void selectOnly(int index);                 // also moves the focus and scrolls to it
    void ensureVisible(int index);

    LRESULT proc(UINT msg, WPARAM wp, LPARAM lp);

private:
    void paint(HDC dc);
    void updateScroll();
    int rowHeight();
    int visibleRows();
    int hit(int y);
    void scrollTo(int top);
    void moveFocus(int to, bool shift, bool ctrl);
    void setRange(int a, int b, bool on);
    void clearSelection();
    void notify(WORD code);
    void invalidateRow(int index);
    void showTip(int index);
    void hideTip();

    HWND hwnd_;
    results::ResultSet* data_ = nullptr;
    HFONT wordFont_ = nullptr, annotationFont_ = nullptr;
    COLORREF wordColor_ = 0, annotationColor_ = 0;
    int rowHeight_ = 0;
    int top_ = 0;
    int focus_ = -1;
    int anchor_ = -1;
    bool dragging_ = false;
    bool dragCtrl_ = false;
    int dragY_ = 0;
    int wheelRemainder_ = 0;
    HWND tip_ = nullptr;
    int tipIndex_ = -1;
    bool tracking_ = false;
    std::wstring tipText_;
};

} // namespace resultlist

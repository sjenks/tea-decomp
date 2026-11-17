// Definition windows: Edit|Lookup and the windows it opens.
//
// Lookup follows the original (TSDictionaryList, 0x409594 in TEA.exe): in each open dictionary, then
// each definition dictionary not already open, the word's letters are made into a pattern with
// punctuation significant, every matching entry that has definitions contributes its direct
// definitions (not its full-text occurrences), and repeated definitions are listed once.
#include "util.h"

#include <commctrl.h>
#include <richedit.h>
#include <windowsx.h>

#include <algorithm>
#include <memory>

#include "app.h"
#include "dialogs.h"
#include "engine.h"
#include "mainwin.h"
#include "resource.h"
#include "settings.h"

namespace definitions {

namespace {

const wchar_t* kClass = L"TEADefinitionWindow";

struct Entry {
    size_t dict;                 // index into Window::dicts_
    tea::Definition def;
    std::wstring label;
    std::string entry;           // the dictionary entry that led here (shown for stubs, which have no headword)
};

struct DictInfo {
    std::shared_ptr<const tea::Dictionary> dict;
    std::wstring title;
};

std::vector<Entry> collect(const std::wstring& word, std::vector<DictInfo>& dicts) {
    std::vector<Entry> out;
    std::vector<std::shared_ptr<const tea::Dictionary>> list = mainwin::openDictionaries();
    for (const std::wstring& path : g_settings.definitionDictionaries()) {
        auto d = mainwin::loadDictionary(path);
        if (d && std::find(list.begin(), list.end(), d) == list.end()) list.push_back(d);
    }
    const std::string narrowWord = ui::narrow(word);
    for (const auto& dp : list) {
        const tea::Dictionary& d = *dp;
        if (!d.hasDefinitions()) continue;
        std::string pattern, key;
        for (unsigned char c : narrowWord) {
            const uint8_t li = d.letterIndex[c];
            if (li == tea::kNotLetter) continue;
            pattern.push_back(static_cast<char>(d.canonical[li]));
            key.push_back(static_cast<char>(li));
        }
        const int length = static_cast<int>(key.size());
        if (length == 0 || !d.hasLength(length)) continue;
        tea::MatchEngineSet set;
        if (set.compile(d, pattern, 1, 100, false, true) != 0) continue;
        set.setWordLength(length);
        tea::Dictionary::Reader reader(d, length);
        if (!reader.ok()) continue;
        tea::Dictionary::Word w;
        tea::WordBuffer buffer;
        std::vector<uint32_t> offsets;
        std::vector<std::string> entryOf;   // parallel to offsets
        int linked = 0;
        while (reader.next(w)) {
            if (!w.hasLinks) continue;
            const int k = linked++;
            buffer.set(w);
            if (!set.matches(buffer, length)) continue;
            for (uint32_t off : d.linkGroup(length, k))
                if (off >= d.defStart && off < d.defEnd && std::find(offsets.begin(), offsets.end(), off) == offsets.end()) {
                    offsets.push_back(off);
                    entryOf.push_back(w.display);
                }
        }
        if (offsets.empty()) continue;
        const size_t di = dicts.size();
        dicts.push_back({dp, ui::fileTitle(ui::widen(d.path, CP_ACP))});
        std::vector<Entry> mine;
        for (size_t oi = 0; oi < offsets.size(); oi++) {
            const uint32_t off = offsets[oi];
            Entry e{di, {}, {}, entryOf[oi]};
            if (!d.readDefinition(off, e.def)) continue;
            // Label: the headword that is the looked-up word, with its qualifier.
            size_t pick = std::string::npos;
            for (size_t i = 0; i < e.def.headwords.size() && pick == std::string::npos; i++) {
                std::string k2;
                for (unsigned char c : e.def.headwords[i])
                    if (d.letterIndex[c] != tea::kNotLetter) k2.push_back(static_cast<char>(d.letterIndex[c]));
                if (k2 == key) pick = i;
            }
            if (pick == std::string::npos && !e.def.headwords.empty()) pick = 0;
            e.label = pick == std::string::npos ? ui::widen(e.entry) : ui::widen(e.def.headwords[pick] + e.def.qualifiers[pick]);
            mine.push_back(std::move(e));
        }
        std::stable_sort(mine.begin(), mine.end(), [](const Entry& a, const Entry& b) {
            return CompareStringW(LOCALE_USER_DEFAULT, NORM_IGNORECASE | SORT_DIGITSASNUMBERS, a.label.c_str(), -1, b.label.c_str(), -1) == CSTR_LESS_THAN;
        });
        for (auto& e : mine) out.push_back(std::move(e));
    }
    return out;
}

std::string rtfEscape(const std::string& s) {
    std::string out;
    for (char c : s) {
        if (c == '\\' || c == '{' || c == '}') out += '\\';
        out += c;
    }
    return out;
}

// ---------------------------------------------------------------------------------------------

class Window;
std::vector<Window*> g_windows;
Window* g_last = nullptr;

HIMAGELIST makeToolbarImages(int dpi);
HIMAGELIST makeTreeImages(int dpi);

class Window {
public:
    HWND frame = nullptr, view = nullptr, toolbar = nullptr, status = nullptr, tree = nullptr, text = nullptr;
    HACCEL accel = nullptr;
    int number = 1;
    std::wstring word;
    std::vector<std::wstring> history;
    int historyPos = -1;
    std::vector<DictInfo> dicts;
    std::vector<Entry> entries;
    std::vector<HTREEITEM> items;   // per entry
    int current = -1;
    HIMAGELIST toolImages = nullptr, treeImages = nullptr;

    bool create(HWND owner);
    void layout();
    void show(const std::wstring& w, bool addToHistory);
    void showEntry(int i);
    void applyFormat();
    void command(int id);
    std::wstring selectedText(bool wholePhrase);
    void contextMenu(POINT pt);
    void updateButtons();
};

LRESULT CALLBACK frameProc(HWND h, UINT msg, WPARAM wp, LPARAM lp);

INT_PTR CALLBACK viewProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    Window* w = reinterpret_cast<Window*>(GetWindowLongPtrW(GetParent(h), GWLP_USERDATA));
    if (!w) return FALSE;
    switch (msg) {
    case WM_NOTIFY: {
        const NMHDR* n = reinterpret_cast<const NMHDR*>(lp);
        if (n->idFrom == IDC_DEF_TREE && n->code == TVN_SELCHANGEDW) {
            const NMTREEVIEWW* tv = reinterpret_cast<const NMTREEVIEWW*>(lp);
            const LPARAM v = tv->itemNew.lParam;
            if (v >= 0) w->showEntry(static_cast<int>(v));
            else {
                // A dictionary: show its description.
                const size_t di = static_cast<size_t>(-v - 1);
                if (di < w->dicts.size()) {
                    SETTEXTEX st{ST_DEFAULT, 1252};
                    SendMessageW(w->text, EM_SETTEXTEX, reinterpret_cast<WPARAM>(&st), reinterpret_cast<LPARAM>(w->dicts[di].dict->description.c_str()));
                    w->applyFormat();
                }
            }
            return TRUE;
        }
        if (n->idFrom == IDC_DEF_TEXT && n->code == EN_MSGFILTER) {
            const MSGFILTER* mf = reinterpret_cast<const MSGFILTER*>(lp);
            if (mf->msg == WM_LBUTTONDBLCLK) {
                // Let the control select the word first, then look it up.
                PostMessageW(w->frame, WM_COMMAND, CM_LOOKUP | (1u << 16), 0);
            } else if (mf->msg == WM_RBUTTONUP) {
                POINT pt{GET_X_LPARAM(mf->lParam), GET_Y_LPARAM(mf->lParam)};
                ClientToScreen(w->text, &pt);
                w->contextMenu(pt);
                SetWindowLongPtrW(h, DWLP_MSGRESULT, 1);
                return TRUE;
            }
        }
        return FALSE;
    }
    case WM_CONTEXTMENU: {
        POINT pt{GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        if (pt.x == -1) {
            RECT r;
            GetWindowRect(w->text, &r);
            pt = {r.left + 20, r.top + 20};
        }
        w->contextMenu(pt);
        return TRUE;
    }
    case WM_COMMAND:
        SendMessageW(w->frame, WM_COMMAND, wp, lp);
        return TRUE;
    }
    return FALSE;
}

bool Window::create(HWND owner) {
    static bool registered = false;
    HINSTANCE inst = app::instance();
    if (!registered) {
        WNDCLASSW wc{};
        wc.lpfnWndProc = frameProc;
        wc.hInstance = inst;
        wc.hIcon = LoadIconW(inst, MAKEINTRESOURCEW(IDI_TEA));
        wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
        wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_BTNFACE + 1);
        wc.lpszClassName = kClass;
        RegisterClassW(&wc);
        registered = true;
    }
    // Number windows as the original does: the lowest number not in use.
    for (number = 1;; number++) {
        bool used = false;
        for (Window* o : g_windows) used |= o->number == number;
        if (!used) break;
    }
    const int dpi = ui::dpiOf(owner);
    frame = CreateWindowExW(0, kClass, L"Definition", WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, CW_USEDEFAULT, CW_USEDEFAULT, ui::scale(854, dpi), ui::scale(315, dpi),
                            owner, nullptr, inst, this);
    if (!frame) return false;
    accel = LoadAcceleratorsW(inst, MAKEINTRESOURCEW(IDA_DEFINITION));
    SetPropW(frame, L"TEA.accel", accel);
    toolbar = CreateWindowExW(0, TOOLBARCLASSNAMEW, nullptr, WS_CHILD | WS_VISIBLE | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS | CCS_TOP, 0, 0, 0, 0, frame,
                              nullptr, inst, nullptr);
    SendMessageW(toolbar, TB_BUTTONSTRUCTSIZE, sizeof(TBBUTTON), 0);
    toolImages = makeToolbarImages(dpi);
    SendMessageW(toolbar, TB_SETIMAGELIST, 0, reinterpret_cast<LPARAM>(toolImages));
    TBBUTTON b[8] = {};
    const int cmds[8] = {CM_PREV_RESULT, CM_NEXT_RESULT, 0, CM_LOOKUP, CM_EXTERNAL_DEFAULT, 0, CM_BACK, CM_FORWARD};
    int image = 0;
    for (int i = 0; i < 8; i++) {
        if (!cmds[i]) {
            b[i].fsStyle = BTNS_SEP;
            continue;
        }
        b[i].iBitmap = image++;
        b[i].idCommand = cmds[i];
        b[i].fsState = TBSTATE_ENABLED;
        b[i].fsStyle = BTNS_BUTTON;
    }
    SendMessageW(toolbar, TB_ADDBUTTONSW, 8, reinterpret_cast<LPARAM>(b));
    SendMessageW(toolbar, TB_AUTOSIZE, 0, 0);
    status = CreateWindowExW(0, STATUSCLASSNAMEW, L"", WS_CHILD | WS_VISIBLE | SBARS_SIZEGRIP, 0, 0, 0, 0, frame,
                             reinterpret_cast<HMENU>(static_cast<INT_PTR>(IDC_STATUS)), inst, nullptr);
    view = CreateDialogParamW(inst, MAKEINTRESOURCEW(IDD_DEFINITION_VIEW), frame, viewProc, 0);
    tree = GetDlgItem(view, IDC_DEF_TREE);
    text = GetDlgItem(view, IDC_DEF_TEXT);
    treeImages = makeTreeImages(dpi);
    TreeView_SetImageList(tree, treeImages, TVSIL_NORMAL);
    SendMessageW(text, EM_SETEVENTMASK, 0, ENM_MOUSEEVENTS);
    SendMessageW(text, EM_SETTARGETDEVICE, 0, 0);   // wrap to the window
    SetPropW(frame, L"TEA.dialogChild", view);
    app::addModeless(frame);
    g_windows.push_back(this);
    // Place it beside the main window, or where the last one was.
    if (!ui::restorePlacement(frame, g_settings.definitionPlacement) || g_windows.size() > 1) {
        RECT r;
        GetWindowRect(owner, &r);
        const int offset = ui::scale(24, dpi) * static_cast<int>(g_windows.size() - 1);
        SetWindowPos(frame, nullptr, r.right + offset, r.top + offset, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
    }
    applyFormat();
    layout();
    ShowWindow(frame, SW_SHOW);
    return true;
}

void Window::layout() {
    if (!view) return;
    RECT c, tb, sb;
    GetClientRect(frame, &c);
    SendMessageW(toolbar, TB_AUTOSIZE, 0, 0);
    GetWindowRect(toolbar, &tb);
    GetWindowRect(status, &sb);
    SendMessageW(status, WM_SIZE, 0, 0);
    const int top = tb.bottom - tb.top, bottom = c.bottom - (sb.bottom - sb.top);
    MoveWindow(view, 0, top, c.right, std::max(0, bottom - top), TRUE);
    RECT v;
    GetClientRect(view, &v);
    const int dpi = ui::dpiOf(frame), m = ui::scale(6, dpi), treeW = ui::scale(150, dpi);
    MoveWindow(tree, m, m, treeW, std::max<int>(0, v.bottom - 2 * m), TRUE);
    MoveWindow(text, 2 * m + treeW, m, std::max<int>(0, v.right - 3 * m - treeW), std::max<int>(0, v.bottom - 2 * m), TRUE);
}

void Window::applyFormat() {
    SendMessageW(text, EM_SETBKGNDCOLOR, 0, g_settings.definitionBackground);
    CHARFORMAT2W cf{};
    cf.cbSize = sizeof cf;
    cf.dwMask = CFM_FACE | CFM_SIZE | CFM_COLOR | CFM_BOLD | CFM_ITALIC | CFM_CHARSET;
    const LOGFONTW& lf = g_settings.definitionFont.lf;
    wcsncpy(cf.szFaceName, lf.lfFaceName, LF_FACESIZE - 1);
    cf.yHeight = std::abs(lf.lfHeight) * 1440 / 96;   // twips
    cf.crTextColor = g_settings.definitionFont.color;
    cf.dwEffects = (lf.lfWeight >= FW_BOLD ? CFE_BOLD : 0) | (lf.lfItalic ? CFE_ITALIC : 0);
    cf.bCharSet = DEFAULT_CHARSET;
    SendMessageW(text, EM_SETCHARFORMAT, SCF_DEFAULT, reinterpret_cast<LPARAM>(&cf));
}

void Window::show(const std::wstring& w, bool addToHistory) {
    word = w;
    if (addToHistory) {
        if (historyPos >= 0 && historyPos + 1 < static_cast<int>(history.size())) history.resize(historyPos + 1);
        if (history.empty() || history.back() != w) history.push_back(w);
        historyPos = static_cast<int>(history.size()) - 1;
    }
    dicts.clear();
    HCURSOR old = SetCursor(LoadCursorW(nullptr, IDC_WAIT));
    entries = collect(w, dicts);
    SetCursor(old);
    SetWindowTextW(frame, ui::format(L"%ls - Definition [%d]", w.c_str(), number).c_str());
    SendMessageW(tree, WM_SETREDRAW, FALSE, 0);
    TreeView_DeleteAllItems(tree);
    items.assign(entries.size(), nullptr);
    HTREEITEM parent = nullptr;
    size_t lastDict = static_cast<size_t>(-1);
    for (size_t i = 0; i < entries.size(); i++) {
        if (entries[i].dict != lastDict) {
            lastDict = entries[i].dict;
            TVINSERTSTRUCTW ins{};
            ins.hParent = TVI_ROOT;
            ins.hInsertAfter = TVI_LAST;
            ins.item.mask = TVIF_TEXT | TVIF_PARAM | TVIF_IMAGE | TVIF_SELECTEDIMAGE | TVIF_STATE;
            ins.item.pszText = const_cast<wchar_t*>(dicts[lastDict].title.c_str());
            ins.item.lParam = -static_cast<LPARAM>(lastDict) - 1;
            ins.item.iImage = ins.item.iSelectedImage = 0;
            ins.item.state = ins.item.stateMask = TVIS_EXPANDED;
            parent = TreeView_InsertItem(tree, &ins);
        }
        TVINSERTSTRUCTW ins{};
        ins.hParent = parent;
        ins.hInsertAfter = TVI_LAST;
        ins.item.mask = TVIF_TEXT | TVIF_PARAM | TVIF_IMAGE | TVIF_SELECTEDIMAGE;
        ins.item.pszText = const_cast<wchar_t*>(entries[i].label.c_str());
        ins.item.lParam = static_cast<LPARAM>(i);
        ins.item.iImage = ins.item.iSelectedImage = 1;
        items[i] = TreeView_InsertItem(tree, &ins);
    }
    for (HTREEITEM root = TreeView_GetRoot(tree); root; root = TreeView_GetNextSibling(tree, root)) TreeView_Expand(tree, root, TVE_EXPAND);
    SendMessageW(tree, WM_SETREDRAW, TRUE, 0);
    current = -1;
    if (entries.empty()) {
        SetWindowTextW(text, L"");
        SendMessageW(status, SB_SETTEXTW, 0, reinterpret_cast<LPARAM>(L"No definitions"));
    } else {
        TreeView_SelectItem(tree, items[0]);
        showEntry(0);
    }
    updateButtons();
}

void Window::showEntry(int i) {
    if (i < 0 || i >= static_cast<int>(entries.size())) return;
    current = i;
    const Entry& e = entries[i];
    applyFormat();
    SETTEXTEX st{ST_DEFAULT, 1252};
    if (e.def.text.compare(0, 6, "{\\rtf1") == 0 || e.def.text.compare(0, 5, "{\\rtf") == 0) {
        std::string rtf = e.def.text;
        if (e.def.headwords.empty()) {
            // A cross-reference stub ("{\rtf1\li180  {\i famous person}\par}") leaves room after its
            // first control words for the entry it belongs to, which the original fills in.
            const size_t space = rtf.find(' ');
            if (space != std::string::npos) rtf.insert(space + 1, "{\\b\\ul " + rtfEscape(e.entry) + "}");
        }
        SendMessageW(text, EM_SETTEXTEX, reinterpret_cast<WPARAM>(&st), reinterpret_cast<LPARAM>(rtf.c_str()));
    } else {
        // Plain text: the headword(s) first, then the definition, as the original lays it out.
        std::string head;
        for (size_t k = 0; k < e.def.headwords.size(); k++) head += (k ? ", " : "") + e.def.headwords[k] + e.def.qualifiers[k];
        const std::string body = head.empty() ? e.def.text : head + "\r\n\r\n" + e.def.text;
        std::wstring wbody = ui::widen(body);
        SETTEXTEX su{ST_DEFAULT, 1200};
        SendMessageW(text, EM_SETTEXTEX, reinterpret_cast<WPARAM>(&su), reinterpret_cast<LPARAM>(wbody.c_str()));
    }
    // Highlight the looked-up word wherever it appears as a whole word.
    CHARFORMAT2W hi{};
    hi.cbSize = sizeof hi;
    hi.dwMask = CFM_FACE | CFM_SIZE | CFM_COLOR | CFM_ITALIC | CFM_BOLD;
    const LOGFONTW& lf = g_settings.highlightFont.lf;
    wcsncpy(hi.szFaceName, lf.lfFaceName, LF_FACESIZE - 1);
    hi.yHeight = std::abs(lf.lfHeight) * 1440 / 96;
    hi.crTextColor = g_settings.highlightFont.color;
    hi.dwEffects = (lf.lfItalic ? CFE_ITALIC : 0) | (lf.lfWeight >= FW_BOLD ? CFE_BOLD : 0);
    // Bold from the definition itself (headwords are bold) is kept.
    hi.dwMask &= ~CFM_BOLD;
    FINDTEXTEXW ft{};
    ft.lpstrText = word.c_str();
    ft.chrg.cpMin = 0;
    ft.chrg.cpMax = -1;
    // Not a whole-word search: a sense number in superscript follows the word directly ("canter1"),
    // and the original highlights those. A letter either side does rule a match out.
    const LONG length = GetWindowTextLengthW(text);
    auto letterAt = [&](LONG at) {
        if (at < 0 || at >= length) return false;
        wchar_t c[2] = {};
        TEXTRANGEW tr{{at, at + 1}, c};
        SendMessageW(text, EM_GETTEXTRANGE, 0, reinterpret_cast<LPARAM>(&tr));
        return IsCharAlphaW(c[0]) != FALSE;
    };
    for (;;) {
        const LRESULT at = SendMessageW(text, EM_FINDTEXTEXW, FR_DOWN, reinterpret_cast<LPARAM>(&ft));
        if (at < 0) break;
        if (!letterAt(ft.chrgText.cpMin - 1) && !letterAt(ft.chrgText.cpMax)) {
            SendMessageW(text, EM_EXSETSEL, 0, reinterpret_cast<LPARAM>(&ft.chrgText));
            SendMessageW(text, EM_SETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&hi));
        }
        ft.chrg.cpMin = ft.chrgText.cpMax;
    }
    CHARRANGE none{0, 0};
    SendMessageW(text, EM_EXSETSEL, 0, reinterpret_cast<LPARAM>(&none));
    SendMessageW(text, WM_VSCROLL, SB_TOP, 0);
    const std::wstring s = ui::format(L"Definition %d of %d", i + 1, static_cast<int>(entries.size()));
    SendMessageW(status, SB_SETTEXTW, 0, reinterpret_cast<LPARAM>(s.c_str()));
    if (items[i] && TreeView_GetSelection(tree) != items[i]) TreeView_SelectItem(tree, items[i]);
    updateButtons();
}

void Window::updateButtons() {
    SendMessageW(toolbar, TB_ENABLEBUTTON, CM_BACK, historyPos > 0);
    SendMessageW(toolbar, TB_ENABLEBUTTON, CM_FORWARD, historyPos >= 0 && historyPos + 1 < static_cast<int>(history.size()));
}

std::wstring Window::selectedText(bool wholePhrase) {
    CHARRANGE r;
    SendMessageW(text, EM_EXGETSEL, 0, reinterpret_cast<LPARAM>(&r));
    if (r.cpMax <= r.cpMin) {
        // No selection: the word at the caret.
        r.cpMin = static_cast<LONG>(SendMessageW(text, EM_FINDWORDBREAK, WB_MOVEWORDLEFT, r.cpMin + 1));
        r.cpMax = static_cast<LONG>(SendMessageW(text, EM_FINDWORDBREAK, WB_RIGHTBREAK, r.cpMin));
    }
    if (wholePhrase) {
        // Within an underlined cross-reference, take the whole underlined phrase.
        auto underlined = [&](LONG at) {
            CHARRANGE one{at, at + 1};
            SendMessageW(text, EM_EXSETSEL, 0, reinterpret_cast<LPARAM>(&one));
            CHARFORMAT2W cf{};
            cf.cbSize = sizeof cf;
            SendMessageW(text, EM_GETCHARFORMAT, SCF_SELECTION, reinterpret_cast<LPARAM>(&cf));
            return (cf.dwMask & CFM_UNDERLINE) && (cf.dwEffects & CFE_UNDERLINE);
        };
        const LONG len = GetWindowTextLengthW(text);
        if (r.cpMin < len && underlined(r.cpMin)) {
            LONG a = r.cpMin, z = r.cpMax;
            while (a > 0 && underlined(a - 1)) a--;
            while (z < len && underlined(z)) z++;
            r.cpMin = a;
            r.cpMax = z;
        }
        SendMessageW(text, EM_EXSETSEL, 0, reinterpret_cast<LPARAM>(&r));
    }
    if (r.cpMax <= r.cpMin) return {};
    std::wstring s(static_cast<size_t>(r.cpMax - r.cpMin) + 1, L'\0');
    TEXTRANGEW tr{r, &s[0]};
    const LRESULT n = SendMessageW(text, EM_GETTEXTRANGE, 0, reinterpret_cast<LPARAM>(&tr));
    s.resize(static_cast<size_t>(n));
    // Trim spaces and punctuation that the word break left at the ends.
    auto edge = [](wchar_t c) { return iswspace(c) || c == L',' || c == L';' || c == L'.' || c == L':' || c == L'"' || c == L'(' || c == L')'; };
    while (!s.empty() && edge(s.back())) s.pop_back();
    size_t b = 0;
    while (b < s.size() && edge(s[b])) b++;
    return s.substr(b);
}

void Window::contextMenu(POINT pt) {
    HMENU m = LoadMenuW(app::instance(), MAKEINTRESOURCEW(IDM_DEFINITION_CONTEXT));
    HMENU bar = CreatePopupMenu();
    // Copy the resource menu into a popup, filling the dynamic parts.
    const std::wstring sel = selectedText(false);
    const int n = GetMenuItemCount(m);
    for (int i = 0; i < n; i++) {
        wchar_t label[256] = L"";
        MENUITEMINFOW mi{sizeof mi};
        mi.fMask = MIIM_ID | MIIM_FTYPE | MIIM_STRING | MIIM_SUBMENU;
        mi.dwTypeData = label;
        mi.cch = 255;
        GetMenuItemInfoW(m, i, TRUE, &mi);
        std::wstring t = label;
        const size_t star = t.find(L'*');
        if (star != std::wstring::npos) t.replace(star, 1, sel.empty() ? L"" : L"\"" + sel + L"\"");
        if (mi.hSubMenu && t.find(L"External") != std::wstring::npos) {
            HMENU sub = CreatePopupMenu();
            ::lookup::fillMenu(sub);
            AppendMenuW(bar, MF_POPUP, reinterpret_cast<UINT_PTR>(sub), t.c_str());
        } else if (mi.hSubMenu) {
            // Go To: the fixed items, then the last ten words viewed.
            HMENU sub = CreatePopupMenu();
            const int k = GetMenuItemCount(mi.hSubMenu);
            for (int j = 0; j < k; j++) {
                wchar_t l2[256] = L"";
                MENUITEMINFOW s2{sizeof s2};
                s2.fMask = MIIM_ID | MIIM_FTYPE | MIIM_STRING;
                s2.dwTypeData = l2;
                s2.cch = 255;
                GetMenuItemInfoW(mi.hSubMenu, j, TRUE, &s2);
                if (s2.fType & MFT_SEPARATOR) AppendMenuW(sub, MF_SEPARATOR, 0, nullptr);
                else AppendMenuW(sub, MF_STRING, s2.wID, l2);
            }
            const int first = std::max(0, static_cast<int>(history.size()) - 10);
            for (int j = first; j < static_cast<int>(history.size()); j++) {
                AppendMenuW(sub, MF_STRING | (j == historyPos ? MF_CHECKED : 0), CM_GOTO_WORD_FIRST + (j - first), history[j].c_str());
            }
            EnableMenuItem(sub, CM_BACK, MF_BYCOMMAND | (historyPos > 0 ? MF_ENABLED : MF_GRAYED));
            EnableMenuItem(sub, CM_FORWARD, MF_BYCOMMAND | (historyPos + 1 < static_cast<int>(history.size()) ? MF_ENABLED : MF_GRAYED));
            EnableMenuItem(sub, CM_PREV_DEFINITION, MF_BYCOMMAND | (current > 0 ? MF_ENABLED : MF_GRAYED));
            EnableMenuItem(sub, CM_NEXT_DEFINITION, MF_BYCOMMAND | (current + 1 < static_cast<int>(entries.size()) ? MF_ENABLED : MF_GRAYED));
            AppendMenuW(bar, MF_POPUP, reinterpret_cast<UINT_PTR>(sub), t.c_str());
        } else if (mi.fType & MFT_SEPARATOR) {
            AppendMenuW(bar, MF_SEPARATOR, 0, nullptr);
        } else {
            AppendMenuW(bar, MF_STRING | ((mi.wID == CM_LOOKUP || mi.wID == CM_LOOKUP_NEW) && sel.empty() ? MF_GRAYED : 0), mi.wID, t.c_str());
        }
    }
    DestroyMenu(m);
    TrackPopupMenu(bar, TPM_LEFTALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, 0, frame, nullptr);
    DestroyMenu(bar);
}

void Window::command(int id) {
    if (id >= CM_GOTO_WORD_FIRST && id < CM_GOTO_WORD_FIRST + 10) {
        const int first = std::max(0, static_cast<int>(history.size()) - 10);
        const int k = first + (id - CM_GOTO_WORD_FIRST);
        if (k < static_cast<int>(history.size())) {
            historyPos = k;
            show(history[k], false);
        }
        return;
    }
    if (id >= CM_EXTERNAL_FIRST && id < CM_EXTERNAL_FIRST + 12) {
        const std::wstring s = selectedText(true);
        ::lookup::run(frame, s.empty() ? word : s, id - CM_EXTERNAL_FIRST);
        return;
    }
    switch (id) {
    case CM_PREV_RESULT:
    case CM_NEXT_RESULT: {
        const std::wstring w = mainwin::stepResult(id == CM_NEXT_RESULT ? 1 : -1);
        if (!w.empty()) show(w, true);
        else MessageBeep(MB_OK);
        break;
    }
    case CM_LOOKUP:
    case CM_LOOKUP_NEW: {
        const std::wstring s = selectedText(true);
        if (s.empty()) break;
        if (id == CM_LOOKUP_NEW || GetKeyState(VK_SHIFT) < 0) definitions::lookup(frame, s, true);
        else {
            show(s, true);
            if (entries.empty()) ::lookup::offer(frame, s, true);
        }
        break;
    }
    case CM_EXTERNAL_DEFAULT: {
        const std::wstring s = selectedText(true);
        ::lookup::run(frame, s.empty() ? word : s, -1);
        break;
    }
    case CM_EXTERNAL_SETUP: ::lookup::showSetup(frame); break;
    case CM_BACK:
        if (historyPos > 0) show(history[--historyPos], false);
        break;
    case CM_FORWARD:
        if (historyPos + 1 < static_cast<int>(history.size())) show(history[++historyPos], false);
        break;
    case CM_PREV_DEFINITION:
        if (current > 0) showEntry(current - 1);
        break;
    case CM_NEXT_DEFINITION:
        if (current + 1 < static_cast<int>(entries.size())) showEntry(current + 1);
        break;
    case CM_COPY: SendMessageW(text, WM_COPY, 0, 0); break;
    case CM_SELECT_ALL: {
        CHARRANGE all{0, -1};
        SendMessageW(text, EM_EXSETSEL, 0, reinterpret_cast<LPARAM>(&all));
        break;
    }
    }
}

LRESULT CALLBACK frameProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    Window* w = reinterpret_cast<Window*>(GetWindowLongPtrW(h, GWLP_USERDATA));
    if (msg == WM_NCCREATE) {
        w = reinterpret_cast<Window*>(reinterpret_cast<CREATESTRUCTW*>(lp)->lpCreateParams);
        SetWindowLongPtrW(h, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(w));
        w->frame = h;
    }
    if (!w) return DefWindowProcW(h, msg, wp, lp);
    switch (msg) {
    case WM_SIZE:
        w->layout();
        return 0;
    case WM_ACTIVATE:
        if (LOWORD(wp) != WA_INACTIVE) g_last = w;
        break;
    case WM_COMMAND:
        if (HIWORD(wp) == 1 && LOWORD(wp) == CM_LOOKUP && lp == 0) {
            // A double-click (posted from the text control) looks up the word or phrase clicked.
            const std::wstring s = w->selectedText(true);
            if (!s.empty()) {
                if (GetKeyState(VK_SHIFT) < 0) lookup(h, s, true);
                else {
                    w->show(s, true);
                    if (w->entries.empty()) ::lookup::offer(h, s, true);
                }
            }
            return 0;
        }
        w->command(LOWORD(wp));
        return 0;
    case WM_NOTIFY: {
        NMHDR* n = reinterpret_cast<NMHDR*>(lp);
        if (n->code == TTN_GETDISPINFOW) {
            NMTTDISPINFOW* d = reinterpret_cast<NMTTDISPINFOW*>(lp);
            static std::wstring tip;
            tip = ui::loadString(static_cast<UINT>(n->idFrom));
            const size_t nl = tip.find(L'\n');
            if (nl != std::wstring::npos) tip = tip.substr(nl + 1);
            d->lpszText = const_cast<wchar_t*>(tip.c_str());
            return 0;
        }
        break;
    }
    case WM_MENUSELECT: {
        const UINT item = LOWORD(wp), flags = HIWORD(wp);
        std::wstring help;
        if (!(flags == 0xffff && !lp) && !(flags & MF_POPUP)) {
            help = ui::loadString(item);
            const size_t nl = help.find(L'\n');
            if (nl != std::wstring::npos) help.resize(nl);
        }
        if (flags == 0xffff && !lp) help = w->current >= 0 ? ui::format(L"Definition %d of %d", w->current + 1, static_cast<int>(w->entries.size())) : L"";
        SendMessageW(w->status, SB_SETTEXTW, 0, reinterpret_cast<LPARAM>(help.c_str()));
        return 0;
    }
    case WM_CLOSE:
        g_settings.definitionPlacement = ui::savePlacement(h);
        DestroyWindow(h);
        return 0;
    case WM_DESTROY:
        app::removeModeless(h);
        g_windows.erase(std::remove(g_windows.begin(), g_windows.end(), w), g_windows.end());
        if (g_last == w) g_last = g_windows.empty() ? nullptr : g_windows.back();
        if (w->toolImages) ImageList_Destroy(w->toolImages);
        if (w->treeImages) ImageList_Destroy(w->treeImages);
        return 0;
    case WM_NCDESTROY:
        SetWindowLongPtrW(h, GWLP_USERDATA, 0);
        delete w;
        return 0;
    }
    return DefWindowProcW(h, msg, wp, lp);
}

// Toolbar and tree images are drawn from symbol fonts so that they scale with the display.
HBITMAP glyphStrip(int size, const wchar_t* glyphs, int count, const wchar_t* face, COLORREF colour, const std::vector<COLORREF>* colours = nullptr) {
    BITMAPINFO bi{};
    bi.bmiHeader.biSize = sizeof bi.bmiHeader;
    bi.bmiHeader.biWidth = size * count;
    bi.bmiHeader.biHeight = -size;
    bi.bmiHeader.biPlanes = 1;
    bi.bmiHeader.biBitCount = 32;
    void* bits = nullptr;
    HDC dc = CreateCompatibleDC(nullptr);
    HBITMAP bmp = CreateDIBSection(dc, &bi, DIB_RGB_COLORS, &bits, nullptr, 0);
    HGDIOBJ old = SelectObject(dc, bmp);
    RECT all{0, 0, size * count, size};
    FillRect(dc, &all, static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH)));
    HFONT font = CreateFontW(-size * 7 / 8, 0, 0, 0, FW_NORMAL, 0, 0, 0, DEFAULT_CHARSET, 0, 0, ANTIALIASED_QUALITY, 0, face);
    HGDIOBJ of = SelectObject(dc, font);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, RGB(0, 0, 0));
    for (int i = 0; i < count; i++) {
        RECT r{i * size, 0, (i + 1) * size, size};
        DrawTextW(dc, &glyphs[i], 1, &r, DT_SINGLELINE | DT_CENTER | DT_VCENTER | DT_NOPREFIX);
    }
    SelectObject(dc, of);
    DeleteObject(font);
    GdiFlush();
    // Darkness becomes opacity in the requested colour.
    uint32_t* p = static_cast<uint32_t*>(bits);
    for (int y = 0; y < size; y++)
        for (int x = 0; x < size * count; x++) {
            uint32_t& px = p[y * size * count + x];
            const int lum = ((px >> 16) & 255) * 3 + ((px >> 8) & 255) * 6 + (px & 255);
            const int a = 255 - lum / 10;
            const COLORREF c = colours ? (*colours)[x / size] : colour;
            px = (static_cast<uint32_t>(a) << 24) | (static_cast<uint32_t>(GetRValue(c) * a / 255) << 16) | (static_cast<uint32_t>(GetGValue(c) * a / 255) << 8) |
                 static_cast<uint32_t>(GetBValue(c) * a / 255);
        }
    SelectObject(dc, old);
    DeleteDC(dc);
    return bmp;
}

int CALLBACK fontFound(const LOGFONTW*, const TEXTMETRICW*, DWORD, LPARAM l) {
    *reinterpret_cast<bool*>(l) = true;
    return 0;
}

const wchar_t* symbolFont() {
    // Segoe Fluent Icons (Windows 11) or Segoe MDL2 Assets (Windows 10) share these code points.
    static const wchar_t* face = [] {
        HDC dc = GetDC(nullptr);
        LOGFONTW lf{};
        lf.lfCharSet = DEFAULT_CHARSET;
        const wchar_t* found = L"Segoe MDL2 Assets";
        wcscpy(lf.lfFaceName, L"Segoe Fluent Icons");
        bool fluent = false;
        EnumFontFamiliesExW(dc, &lf, fontFound, reinterpret_cast<LPARAM>(&fluent), 0);
        ReleaseDC(nullptr, dc);
        if (fluent) found = L"Segoe Fluent Icons";
        return found;
    }();
    return face;
}

HIMAGELIST makeToolbarImages(int dpi) {
    const int size = ui::scale(20, dpi);
    // Previous result, next result, lookup, external lookup, back, forward.
    const wchar_t glyphs[6] = {0xE74A, 0xE74B, 0xE721, 0xE774, 0xE72B, 0xE72A};
    std::vector<COLORREF> colours{RGB(0, 70, 160), RGB(0, 70, 160), RGB(40, 40, 40), RGB(0, 110, 60), RGB(40, 40, 40), RGB(40, 40, 40)};
    HBITMAP strip = glyphStrip(size, glyphs, 6, symbolFont(), 0, &colours);
    HIMAGELIST il = ImageList_Create(size, size, ILC_COLOR32, 6, 0);
    ImageList_Add(il, strip, nullptr);
    DeleteObject(strip);
    return il;
}

HIMAGELIST makeTreeImages(int dpi) {
    const int size = ui::scale(16, dpi);
    const wchar_t glyphs[2] = {0xE82D, 0xE8A5};   // book, page
    std::vector<COLORREF> colours{RGB(170, 30, 30), RGB(60, 60, 60)};
    HBITMAP strip = glyphStrip(size, glyphs, 2, symbolFont(), 0, &colours);
    HIMAGELIST il = ImageList_Create(size, size, ILC_COLOR32, 2, 0);
    ImageList_Add(il, strip, nullptr);
    DeleteObject(strip);
    return il;
}

} // namespace

void lookup(HWND owner, const std::wstring& word, bool newWindow, uint32_t definition) {
    Window* w = newWindow ? nullptr : g_last;
    if (w && !IsWindow(w->frame)) w = nullptr;
    // Look first, so that a word with no definitions opens no window.
    std::vector<DictInfo> dicts;
    if (collect(word, dicts).empty()) {
        ::lookup::offer(owner, word, true);
        return;
    }
    if (!w) {
        w = new Window;
        if (!w->create(mainwin::window())) {
            delete w;
            return;
        }
    }
    g_last = w;
    w->show(word, true);
    for (size_t i = 0; definition && i < w->entries.size(); i++)
        if (w->entries[i].def.offset == definition) {
            w->showEntry(static_cast<int>(i));
            break;
        }
    ShowWindow(w->frame, SW_SHOWNORMAL);
    SetForegroundWindow(w->frame);
}

void settingsChanged() {
    for (Window* w : g_windows) {
        w->applyFormat();
        if (w->current >= 0) w->showEntry(w->current);
    }
}

void closeAll() {
    const std::vector<Window*> all = g_windows;
    for (Window* w : all) SendMessageW(w->frame, WM_CLOSE, 0, 0);
}

} // namespace definitions

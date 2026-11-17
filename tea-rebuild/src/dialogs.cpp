#include "dialogs.h"

#include <commctrl.h>
#include <commdlg.h>
#include <richedit.h>
#include <shlobj.h>
#include <uxtheme.h>
#include <windowsx.h>

#include <algorithm>
#include <fstream>

#include "app.h"
#include "mainwin.h"
#include "resource.h"
#include "settings.h"

namespace dialogs {

namespace {

std::wstring withThousands(uint64_t v) {
    std::wstring s = std::to_wstring(v);
    for (int i = static_cast<int>(s.size()) - 3; i > 0; i -= 3) s.insert(i, L",");
    return s;
}

std::wstring crlf(const std::string& s) {
    std::wstring w = ui::widen(s), out;
    for (size_t i = 0; i < w.size(); i++) {
        if (w[i] == L'\n' && (i == 0 || w[i - 1] != L'\r')) out += L'\r';
        out += w[i];
    }
    return out;
}

// ---------------------------------------------------------------------------------------------
// Options

HWND g_options = nullptr;
int g_optionsTab = 0;
bool g_loadingOptions = false;   // filling the controls: their change notifications are not edits

const int kTabControls[5][24] = {
    {IDC_OPT_AT_LABEL, IDC_OPT_AT, IDC_OPT_HASH_LABEL, IDC_OPT_HASH, IDC_OPT_EXCLUSIVE, IDC_OPT_IGNORE_UNUSED, 0},
    {IDC_OPT_ANNOTATIONS, IDC_OPT_BALANCES, IDC_OPT_FILTER_GROUP, IDC_OPT_SHOW_LOWER, IDC_OPT_SHOW_UPPER, IDC_OPT_SHOW_PUNCT, IDC_OPT_SHOW_PHRASES,
     IDC_OPT_DBLCLICK_GROUP, IDC_OPT_DBLCLICK_LOOKUP, IDC_OPT_DBLCLICK_EXTERN, 0},
    {IDC_OPT_SORT_GROUP, IDC_OPT_SORT_ALPHA, IDC_OPT_SORT_ASCENDING, IDC_OPT_LENGTH_GROUP, IDC_OPT_GROUP_BY_LENGTH, IDC_OPT_LENGTH_ASC, IDC_OPT_LENGTH_SMART,
     IDC_OPT_LENGTH_DESC, 0},
    {IDC_OPT_MULTI_GROUP, IDC_OPT_MULTI_INDEPENDENT, IDC_OPT_MULTI_SUPPRESS, IDC_OPT_MULTI_ACTIVE, IDC_OPT_DEFDICT_GROUP, IDC_OPT_DEFDICTS,
     IDC_OPT_DEFDICTS_CHANGE, 0},
    {IDC_OPT_MAIN_GROUP, IDC_OPT_PATTERN_FONT_L, IDC_OPT_PATTERN_FONT, IDC_OPT_RESULT_FONT_L, IDC_OPT_RESULT_FONT, IDC_OPT_ANNOT_FONT_L, IDC_OPT_ANNOT_FONT,
     IDC_OPT_PRINT_FONT_L, IDC_OPT_PRINT_FONT, IDC_OPT_DEF_GROUP, IDC_OPT_DEF_BG_L, IDC_OPT_DEF_BG, IDC_OPT_DEF_FONT_L, IDC_OPT_DEF_FONT,
     IDC_OPT_DEF_HIGHLIGHT_L, IDC_OPT_DEF_HIGHLIGHT, 0},
};
const wchar_t* kTabNames[5] = {L"Pattern", L"Result", L"Sorting", L"Dictionary", L"Appearance"};
const wchar_t* kTabHelp[5] = {L"html/tab_options_pattern.htm", L"html/tab_options_result.htm", L"html/tab_options_sorting.htm",
                              L"html/tab_options_dictionary.htm", L"html/tab_options_appearance.htm"};

void showTab(HWND h, int tab) {
    g_optionsTab = tab;
    for (int t = 0; t < 5; t++)
        for (const int* id = kTabControls[t]; *id; id++) ShowWindow(GetDlgItem(h, *id), t == tab ? SW_SHOW : SW_HIDE);
}

std::wstring listTitle(const std::wstring& list) {
    std::wstring out;
    size_t start = 0;
    while (start < list.size()) {
        size_t end = list.find(L';', start);
        if (end == std::wstring::npos) end = list.size();
        if (!out.empty()) out += L';';
        out += ui::fileTitle(list.substr(start, end - start));
        start = end + 1;
    }
    return out;
}

void fillDefinitionLists(HWND h) {
    HWND c = GetDlgItem(h, IDC_OPT_DEFDICTS);
    SendMessageW(c, CB_RESETCONTENT, 0, 0);
    for (const std::wstring& l : g_settings.definitionLists) SendMessageW(c, CB_ADDSTRING, 0, reinterpret_cast<LPARAM>(listTitle(l).c_str()));
    SendMessageW(c, CB_SETCURSEL, 0, 0);
}

void loadOptions(HWND h) {
    g_loadingOptions = true;
    SetDlgItemTextW(h, IDC_OPT_AT, g_settings.at.c_str());
    SetDlgItemTextW(h, IDC_OPT_HASH, g_settings.hash.c_str());
    CheckDlgButton(h, IDC_OPT_EXCLUSIVE, g_settings.exclusive);
    CheckDlgButton(h, IDC_OPT_IGNORE_UNUSED, g_settings.ignoreUnused);
    CheckDlgButton(h, IDC_OPT_ANNOTATIONS, g_settings.showAnnotations);
    CheckDlgButton(h, IDC_OPT_BALANCES, g_settings.showBalances);
    CheckDlgButton(h, IDC_OPT_SHOW_LOWER, g_settings.show[0]);
    CheckDlgButton(h, IDC_OPT_SHOW_UPPER, g_settings.show[1]);
    CheckDlgButton(h, IDC_OPT_SHOW_PUNCT, g_settings.show[2]);
    CheckDlgButton(h, IDC_OPT_SHOW_PHRASES, g_settings.show[3]);
    CheckRadioButton(h, IDC_OPT_DBLCLICK_LOOKUP, IDC_OPT_DBLCLICK_EXTERN, g_settings.doubleClick ? IDC_OPT_DBLCLICK_EXTERN : IDC_OPT_DBLCLICK_LOOKUP);
    CheckDlgButton(h, IDC_OPT_SORT_ALPHA, g_settings.sortAlphabetically);
    CheckDlgButton(h, IDC_OPT_SORT_ASCENDING, g_settings.sortAscending);
    CheckDlgButton(h, IDC_OPT_GROUP_BY_LENGTH, g_settings.groupByLength);
    const int lengthId = g_settings.lengthOrder > 0 ? IDC_OPT_LENGTH_ASC : g_settings.lengthOrder < 0 ? IDC_OPT_LENGTH_DESC : IDC_OPT_LENGTH_SMART;
    CheckDlgButton(h, IDC_OPT_LENGTH_ASC, lengthId == IDC_OPT_LENGTH_ASC);
    CheckDlgButton(h, IDC_OPT_LENGTH_SMART, lengthId == IDC_OPT_LENGTH_SMART);
    CheckDlgButton(h, IDC_OPT_LENGTH_DESC, lengthId == IDC_OPT_LENGTH_DESC);
    const int multiId = g_settings.multiMode == 1 ? IDC_OPT_MULTI_INDEPENDENT : g_settings.multiMode == 2 ? IDC_OPT_MULTI_ACTIVE : IDC_OPT_MULTI_SUPPRESS;
    for (int id : {IDC_OPT_MULTI_INDEPENDENT, IDC_OPT_MULTI_SUPPRESS, IDC_OPT_MULTI_ACTIVE}) CheckDlgButton(h, id, id == multiId);
    fillDefinitionLists(h);
    EnableWindow(GetDlgItem(h, IDC_OPT_SORT_ASCENDING), g_settings.sortAlphabetically);
    for (int id : {IDC_OPT_LENGTH_ASC, IDC_OPT_LENGTH_SMART, IDC_OPT_LENGTH_DESC}) EnableWindow(GetDlgItem(h, id), g_settings.groupByLength);
    g_loadingOptions = false;
}

bool chooseFont(HWND owner, ui::FontSpec& f) {
    CHOOSEFONTW cf{sizeof cf};
    LOGFONTW lf = f.lf;
    lf.lfHeight = MulDiv(lf.lfHeight, ui::dpiOf(owner), 96);
    cf.hwndOwner = owner;
    cf.lpLogFont = &lf;
    cf.rgbColors = f.color;
    cf.Flags = CF_SCREENFONTS | CF_EFFECTS | CF_INITTOLOGFONTSTRUCT;
    if (!ChooseFontW(&cf)) return false;
    lf.lfHeight = MulDiv(lf.lfHeight, 96, ui::dpiOf(owner));
    f.lf = lf;
    f.color = cf.rgbColors;
    return true;
}

ui::FontSpec* fontFor(int id) {
    switch (id) {
    case IDC_OPT_PATTERN_FONT: return &g_settings.patternFont;
    case IDC_OPT_RESULT_FONT: return &g_settings.resultFont;
    case IDC_OPT_ANNOT_FONT: return &g_settings.annotationFont;
    case IDC_OPT_PRINT_FONT: return &g_settings.printFont;
    case IDC_OPT_DEF_FONT: return &g_settings.definitionFont;
    case IDC_OPT_DEF_HIGHLIGHT: return &g_settings.highlightFont;
    }
    return nullptr;
}

const wchar_t* sampleFor(int id) {
    switch (id) {
    case IDC_OPT_PATTERN_FONT: return L".l.ea.y";
    case IDC_OPT_ANNOT_FONT: return L"1 n.";
    case IDC_OPT_DEF_FONT: case IDC_OPT_DEF_HIGHLIGHT: return L"An early dictionary";
    }
    return L"alveary";
}

void drawSample(const DRAWITEMSTRUCT* d) {
    RECT r = d->rcItem;
    DrawFrameControl(d->hDC, &r, DFC_BUTTON, DFCS_BUTTONPUSH | ((d->itemState & ODS_SELECTED) ? DFCS_PUSHED : 0));
    InflateRect(&r, -3, -3);
    if (d->CtlID == IDC_OPT_DEF_BG) {
        HBRUSH b = CreateSolidBrush(g_settings.definitionBackground);
        FillRect(d->hDC, &r, b);
        DeleteObject(b);
    } else if (ui::FontSpec* f = fontFor(d->CtlID)) {
        if (d->CtlID == IDC_OPT_DEF_FONT || d->CtlID == IDC_OPT_DEF_HIGHLIGHT) {
            HBRUSH b = CreateSolidBrush(g_settings.definitionBackground);
            FillRect(d->hDC, &r, b);
            DeleteObject(b);
        }
        HFONT font = ui::createFont(*f, ui::dpiOf(d->hwndItem));
        HGDIOBJ old = SelectObject(d->hDC, font);
        SetBkMode(d->hDC, TRANSPARENT);
        SetTextColor(d->hDC, f->color);
        DrawTextW(d->hDC, sampleFor(d->CtlID), -1, &r, DT_SINGLELINE | DT_CENTER | DT_VCENTER | DT_NOPREFIX);
        SelectObject(d->hDC, old);
        DeleteObject(font);
    }
    if (d->itemState & ODS_FOCUS) {
        RECT fr = d->rcItem;
        InflateRect(&fr, -2, -2);
        DrawFocusRect(d->hDC, &fr);
    }
}

INT_PTR CALLBACK optionsProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_INITDIALOG: {
        HWND tabs = GetDlgItem(h, IDC_OPT_TABS);
        for (int i = 0; i < 5; i++) {
            TCITEMW ti{};
            ti.mask = TCIF_TEXT;
            ti.pszText = const_cast<wchar_t*>(kTabNames[i]);
            SendMessageW(tabs, TCM_INSERTITEMW, i, reinterpret_cast<LPARAM>(&ti));
        }
        SetWindowPos(tabs, HWND_BOTTOM, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        // The pages are controls on the dialog itself, which paint on grey; a themed tab control
        // would show a white page behind them.
        SetWindowTheme(tabs, L"", L"");
        loadOptions(h);
        TabCtrl_SetCurSel(tabs, g_optionsTab);
        showTab(h, g_optionsTab);
        ui::centreWindow(h, GetParent(h));
        return TRUE;
    }
    case WM_NOTIFY: {
        const NMHDR* n = reinterpret_cast<const NMHDR*>(lp);
        if (n->idFrom == IDC_OPT_TABS && n->code == TCN_SELCHANGE) showTab(h, TabCtrl_GetCurSel(n->hwndFrom));
        return FALSE;
    }
    case WM_DRAWITEM:
        drawSample(reinterpret_cast<const DRAWITEMSTRUCT*>(lp));
        return TRUE;
    case WM_COMMAND: {
        const int id = LOWORD(wp), code = HIWORD(wp);
        if (g_loadingOptions) return TRUE;
        bool changed = true;
        switch (id) {
        case IDCANCEL: DestroyWindow(h); return TRUE;
        case IDC_HELP_BUTTON: app::showHelp(h, kTabHelp[g_optionsTab]); return TRUE;
        case IDC_SAVE_DEFAULTS: g_settings.saveTab(g_optionsTab); return TRUE;
        case IDC_OPT_AT:
        case IDC_OPT_HASH:
            if (code != EN_CHANGE) return TRUE;
            g_settings.at = ui::windowText(GetDlgItem(h, IDC_OPT_AT));
            g_settings.hash = ui::windowText(GetDlgItem(h, IDC_OPT_HASH));
            break;
        case IDC_OPT_EXCLUSIVE: g_settings.exclusive = IsDlgButtonChecked(h, id) != 0; break;
        case IDC_OPT_IGNORE_UNUSED: g_settings.ignoreUnused = IsDlgButtonChecked(h, id) != 0; break;
        case IDC_OPT_ANNOTATIONS: g_settings.showAnnotations = IsDlgButtonChecked(h, id) != 0; break;
        case IDC_OPT_BALANCES: g_settings.showBalances = IsDlgButtonChecked(h, id) != 0; break;
        case IDC_OPT_SHOW_LOWER: case IDC_OPT_SHOW_UPPER: case IDC_OPT_SHOW_PUNCT: case IDC_OPT_SHOW_PHRASES:
            g_settings.show[id - IDC_OPT_SHOW_LOWER] = IsDlgButtonChecked(h, id) != 0;
            break;
        case IDC_OPT_DBLCLICK_LOOKUP: case IDC_OPT_DBLCLICK_EXTERN: g_settings.doubleClick = id == IDC_OPT_DBLCLICK_EXTERN ? 1 : 0; break;
        case IDC_OPT_SORT_ALPHA:
            g_settings.sortAlphabetically = IsDlgButtonChecked(h, id) != 0;
            EnableWindow(GetDlgItem(h, IDC_OPT_SORT_ASCENDING), g_settings.sortAlphabetically);
            break;
        case IDC_OPT_SORT_ASCENDING: g_settings.sortAscending = IsDlgButtonChecked(h, id) != 0; break;
        case IDC_OPT_GROUP_BY_LENGTH:
            g_settings.groupByLength = IsDlgButtonChecked(h, id) != 0;
            for (int r : {IDC_OPT_LENGTH_ASC, IDC_OPT_LENGTH_SMART, IDC_OPT_LENGTH_DESC}) EnableWindow(GetDlgItem(h, r), g_settings.groupByLength);
            break;
        case IDC_OPT_LENGTH_ASC: g_settings.lengthOrder = 1; break;
        case IDC_OPT_LENGTH_SMART: g_settings.lengthOrder = 0; break;
        case IDC_OPT_LENGTH_DESC: g_settings.lengthOrder = -1; break;
        case IDC_OPT_MULTI_INDEPENDENT: g_settings.multiMode = 1; break;
        case IDC_OPT_MULTI_SUPPRESS: g_settings.multiMode = 0; break;
        case IDC_OPT_MULTI_ACTIVE: g_settings.multiMode = 2; break;
        case IDC_OPT_DEFDICTS:
            if (code == CBN_SELCHANGE) {
                const int sel = static_cast<int>(SendDlgItemMessageW(h, id, CB_GETCURSEL, 0, 0));
                if (sel > 0 && sel < static_cast<int>(g_settings.definitionLists.size())) {
                    std::rotate(g_settings.definitionLists.begin(), g_settings.definitionLists.begin() + sel, g_settings.definitionLists.begin() + sel + 1);
                    fillDefinitionLists(h);
                }
            }
            changed = false;
            break;
        case IDC_OPT_DEFDICTS_CHANGE: {
            std::vector<std::wstring> paths = g_settings.definitionDictionaries();
            if (editDictionaryList(h, paths)) {
                std::wstring joined;
                for (const auto& p : paths) joined += (joined.empty() ? L"" : L";") + p;
                auto& lists = g_settings.definitionLists;
                lists.erase(std::remove(lists.begin(), lists.end(), joined), lists.end());
                lists.insert(lists.begin(), joined);
                if (lists.size() > 10) lists.resize(10);
                fillDefinitionLists(h);
            }
            changed = false;
            break;
        }
        case IDC_OPT_PATTERN_FONT: case IDC_OPT_RESULT_FONT: case IDC_OPT_ANNOT_FONT: case IDC_OPT_PRINT_FONT:
        case IDC_OPT_DEF_FONT: case IDC_OPT_DEF_HIGHLIGHT:
            if (!chooseFont(h, *fontFor(id))) return TRUE;
            InvalidateRect(GetDlgItem(h, id), nullptr, TRUE);
            if (id == IDC_OPT_DEF_FONT || id == IDC_OPT_DEF_HIGHLIGHT) definitions::settingsChanged();
            break;
        case IDC_OPT_DEF_BG: {
            static COLORREF custom[16];
            CHOOSECOLORW cc{sizeof cc};
            cc.hwndOwner = h;
            cc.rgbResult = g_settings.definitionBackground;
            cc.lpCustColors = custom;
            cc.Flags = CC_RGBINIT | CC_FULLOPEN;
            if (!ChooseColorW(&cc)) return TRUE;
            g_settings.definitionBackground = cc.rgbResult;
            for (int r : {IDC_OPT_DEF_BG, IDC_OPT_DEF_FONT, IDC_OPT_DEF_HIGHLIGHT}) InvalidateRect(GetDlgItem(h, r), nullptr, TRUE);
            definitions::settingsChanged();
            break;
        }
        default: changed = false;
        }
        if (changed) mainwin::settingsChanged();
        return TRUE;
    }
    case WM_CLOSE:
        DestroyWindow(h);
        return TRUE;
    case WM_DESTROY:
        app::removeModeless(h);
        g_options = nullptr;
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------
// Properties

struct PropertiesArgs {
    std::wstring path;
    const tea::Dictionary* dict;
};

INT_PTR CALLBACK propertiesProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_INITDIALOG: {
        const auto* a = reinterpret_cast<const PropertiesArgs*>(lp);
        const tea::Dictionary& d = *a->dict;
        SetWindowTextW(h, (ui::fileTitle(a->path) + L" Properties").c_str());
        SetDlgItemTextW(h, IDC_PROP_LOCATION, a->path.c_str());
        WIN32_FILE_ATTRIBUTE_DATA fa;
        if (GetFileAttributesExW(a->path.c_str(), GetFileExInfoStandard, &fa)) {
            FILETIME local;
            SYSTEMTIME st;
            FileTimeToLocalFileTime(&fa.ftLastWriteTime, &local);
            FileTimeToSystemTime(&local, &st);
            wchar_t date[128], time[64];
            GetDateFormatW(LOCALE_USER_DEFAULT, DATE_LONGDATE, &st, nullptr, date, 128);
            GetTimeFormatW(LOCALE_USER_DEFAULT, 0, &st, nullptr, time, 64);
            SetDlgItemTextW(h, IDC_PROP_DATE, (std::wstring(date) + L" " + time).c_str());
        }
        SetDlgItemTextW(h, IDC_PROP_DESCRIPTION, crlf(d.description).c_str());
        uint64_t entries = 0;
        int lo = 0, hi = 0;
        for (int n = 1; n < d.numLengths; n++)
            if (d.wordCount[n]) {
                entries += d.wordCount[n];
                if (!lo) lo = n;
                hi = n;
            }
        SetDlgItemTextW(h, IDC_PROP_ENTRIES, withThousands(entries).c_str());
        SetDlgItemTextW(h, IDC_PROP_DEFINITIONS, withThousands(static_cast<uint64_t>(d.definitionCount())).c_str());
        SetDlgItemInt(h, IDC_PROP_SHORTEST, lo, FALSE);
        SetDlgItemInt(h, IDC_PROP_LONGEST, hi, FALSE);
        ui::centreWindow(h, GetParent(h));
        SetFocus(GetDlgItem(h, IDOK));
        return FALSE;
    }
    case WM_COMMAND:
        if (LOWORD(wp) == IDOK || LOWORD(wp) == IDCANCEL) EndDialog(h, 0);
        else if (LOWORD(wp) == IDC_HELP_BUTTON) app::showHelp(h, L"html/dlg_dictionary_properties.htm");
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------
// Quick reference

HWND g_quickReference = nullptr;
HFONT g_linkFont = nullptr, g_exampleFont = nullptr, g_boldFont = nullptr;

const wchar_t* kFeatureHelp[10] = {L"templates", L"anagrams", L"wildcards", L"choice_lists", L"templates_with_anagrams",
                                   L"letter_variables", L"punctuation_matching", L"logical_operations", L"macros", L"subpatterns"};

INT_PTR CALLBACK quickReferenceProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_INITDIALOG: {
        HFONT base = reinterpret_cast<HFONT>(SendMessageW(h, WM_GETFONT, 0, 0));
        LOGFONTW lf;
        GetObjectW(base, sizeof lf, &lf);
        if (!g_linkFont) {
            LOGFONTW u = lf;
            u.lfUnderline = TRUE;
            g_linkFont = CreateFontIndirectW(&u);
            LOGFONTW b = lf;
            b.lfWeight = FW_BOLD;
            g_boldFont = CreateFontIndirectW(&b);
            LOGFONTW c = lf;
            wcscpy(c.lfFaceName, L"Courier New");
            c.lfHeight = lf.lfHeight * 12 / 10;
            g_exampleFont = CreateFontIndirectW(&c);
        }
        for (int i = 0; i < 10; i++) {
            SendDlgItemMessageW(h, IDC_QR_FEATURE_FIRST + i, WM_SETFONT, reinterpret_cast<WPARAM>(g_linkFont), FALSE);
            SendDlgItemMessageW(h, IDC_QR_EXAMPLE_FIRST + i, WM_SETFONT, reinterpret_cast<WPARAM>(g_exampleFont), FALSE);
            SendDlgItemMessageW(h, IDC_QR_FINDS_FIRST + i, WM_SETFONT, reinterpret_cast<WPARAM>(g_boldFont), FALSE);
        }
        CheckDlgButton(h, IDC_QR_SHOW_AT_START, g_settings.showQuickReference);
        if (!ui::restorePlacement(h, g_settings.quickReferencePlacement)) {
            RECT r;
            GetWindowRect(GetParent(h), &r);
            SetWindowPos(h, nullptr, r.right, r.top, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
        }
        return FALSE;
    }
    case WM_CTLCOLORSTATIC: {
        const int id = GetDlgCtrlID(reinterpret_cast<HWND>(lp));
        HDC dc = reinterpret_cast<HDC>(wp);
        if ((id >= IDC_QR_FEATURE_FIRST && id < IDC_QR_FEATURE_FIRST + 10) || (id >= IDC_QR_EXAMPLE_FIRST && id < IDC_QR_EXAMPLE_FIRST + 10)) {
            SetTextColor(dc, GetSysColor(COLOR_HOTLIGHT));
            SetBkMode(dc, TRANSPARENT);
            return reinterpret_cast<INT_PTR>(GetSysColorBrush(COLOR_BTNFACE));
        }
        return FALSE;
    }
    case WM_SETCURSOR: {
        const int id = GetDlgCtrlID(reinterpret_cast<HWND>(wp));
        if ((id >= IDC_QR_FEATURE_FIRST && id < IDC_QR_FEATURE_FIRST + 10) || (id >= IDC_QR_EXAMPLE_FIRST && id < IDC_QR_EXAMPLE_FIRST + 10)) {
            SetCursor(LoadCursorW(nullptr, IDC_HAND));
            SetWindowLongPtrW(h, DWLP_MSGRESULT, TRUE);
            return TRUE;
        }
        return FALSE;
    }
    case WM_COMMAND: {
        const int id = LOWORD(wp);
        if (id >= IDC_QR_FEATURE_FIRST && id < IDC_QR_FEATURE_FIRST + 10) {
            app::showHelp(h, std::wstring(L"html/") + kFeatureHelp[id - IDC_QR_FEATURE_FIRST] + L".htm");
        } else if (id >= IDC_QR_EXAMPLE_FIRST && id < IDC_QR_EXAMPLE_FIRST + 10) {
            mainwin::tryPattern(ui::windowText(GetDlgItem(h, id)));
        } else if (id == IDC_QR_SHOW_AT_START) {
            g_settings.showQuickReference = IsDlgButtonChecked(h, id) != 0;
            g_settings.saveStartupWindows();
        } else if (id == IDC_HELP_BUTTON) {
            app::showHelp(h, L"html/window_quick_reference.htm");
        } else if (id == IDCANCEL || id == IDOK) {
            DestroyWindow(h);
        }
        return TRUE;
    }
    case WM_CLOSE:
        DestroyWindow(h);
        return TRUE;
    case WM_DESTROY:
        g_settings.quickReferencePlacement = ui::savePlacement(h);
        g_settings.saveStartupWindows();
        app::removeModeless(h);
        g_quickReference = nullptr;
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------
// Startup tips

HWND g_tips = nullptr;
std::vector<std::pair<unsigned, std::string>> g_tipList;
size_t g_tipShown = 0;

void loadTips() {
    if (!g_tipList.empty()) return;
    const std::wstring path = app::findCompanionFile(L"Tips.txt");
    if (path.empty()) return;
    std::ifstream in(path.c_str(), std::ios::binary);
    std::string line;
    while (std::getline(in, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        const size_t sp = line.find(' ');
        if (sp == std::string::npos) continue;
        g_tipList.emplace_back(static_cast<unsigned>(std::strtoul(line.c_str(), nullptr, 10)), line.substr(sp + 1));
    }
}

void showTip(HWND h) {
    HWND text = GetDlgItem(h, IDC_TIP_TEXT);
    if (g_tipList.empty()) {
        SetWindowTextW(text, L"Tips.txt, from the original TEA release, was not found. Put it next to tea.exe to see tips here.");
        EnableWindow(GetDlgItem(h, IDC_TIP_NEXT), FALSE);
        EnableWindow(GetDlgItem(h, IDC_TIP_MORE), FALSE);
        return;
    }
    g_tipShown = static_cast<size_t>(std::max(0, g_settings.nextTip)) % g_tipList.size();
    SETTEXTEX st{ST_DEFAULT, CP_ACP};
    SendMessageW(text, EM_SETTEXTEX, reinterpret_cast<WPARAM>(&st), reinterpret_cast<LPARAM>(g_tipList[g_tipShown].second.c_str()));
    // The next start shows the following tip.
    g_settings.nextTip = static_cast<int>((g_tipShown + 1) % g_tipList.size());
    g_settings.saveStartupWindows();
}

INT_PTR CALLBACK tipsProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_INITDIALOG:
        loadTips();
        SendDlgItemMessageW(h, IDC_TIP_TEXT, EM_SETBKGNDCOLOR, 0, GetSysColor(COLOR_WINDOW));
        CheckDlgButton(h, IDC_QR_SHOW_AT_START, g_settings.showTips);
        showTip(h);
        if (!ui::restorePlacement(h, g_settings.tipsPlacement)) {
            RECT r;
            GetWindowRect(GetParent(h), &r);
            SetWindowPos(h, nullptr, r.right, r.top + (r.bottom - r.top) / 3, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
        }
        return TRUE;
    case WM_COMMAND:
        switch (LOWORD(wp)) {
        case IDC_TIP_NEXT: showTip(h); break;
        case IDC_TIP_MORE:
            if (!g_tipList.empty()) app::showHelpContext(h, g_tipList[g_tipShown].first);
            break;
        case IDC_QR_SHOW_AT_START:
            g_settings.showTips = IsDlgButtonChecked(h, IDC_QR_SHOW_AT_START) != 0;
            g_settings.saveStartupWindows();
            break;
        case IDC_HELP_BUTTON: app::showHelp(h, L"html/window_tips.htm"); break;
        case IDCANCEL: case IDOK: DestroyWindow(h); break;
        }
        return TRUE;
    case WM_CLOSE:
        DestroyWindow(h);
        return TRUE;
    case WM_DESTROY:
        g_settings.tipsPlacement = ui::savePlacement(h);
        g_settings.saveStartupWindows();
        app::removeModeless(h);
        g_tips = nullptr;
        return TRUE;
    }
    return FALSE;
}

// ---------------------------------------------------------------------------------------------
// Dictionary list

struct ListState {
    std::vector<std::wstring>* paths;
    std::vector<std::wstring> selected;
    std::wstring folder;
};

void fillLists(HWND h, ListState& s) {
    HWND sel = GetDlgItem(h, IDC_DL_SELECTED), other = GetDlgItem(h, IDC_DL_OTHER);
    const int cur = static_cast<int>(SendMessageW(sel, LB_GETCURSEL, 0, 0));
    SendMessageW(sel, LB_RESETCONTENT, 0, 0);
    for (const auto& p : s.selected) SendMessageW(sel, LB_ADDSTRING, 0, reinterpret_cast<LPARAM>(ui::fileTitle(p).c_str()));
    if (cur >= 0) SendMessageW(sel, LB_SETCURSEL, std::min<int>(cur, static_cast<int>(s.selected.size()) - 1), 0);
    SendMessageW(other, LB_RESETCONTENT, 0, 0);
    SetDlgItemTextW(h, IDC_DL_FOLDER, s.folder.c_str());
    if (s.folder.empty()) return;
    WIN32_FIND_DATAW fd;
    HANDLE f = FindFirstFileW((s.folder + L"\\*.tsd").c_str(), &fd);
    if (f == INVALID_HANDLE_VALUE) return;
    do {
        const std::wstring path = s.folder + L"\\" + fd.cFileName;
        bool used = false;
        for (const auto& p : s.selected) used |= CompareStringOrdinal(p.c_str(), -1, path.c_str(), -1, TRUE) == CSTR_EQUAL;
        if (!used) SendMessageW(other, LB_ADDSTRING, 0, reinterpret_cast<LPARAM>(fd.cFileName));
    } while (FindNextFileW(f, &fd));
    FindClose(f);
}

INT_PTR CALLBACK listProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    ListState* s = reinterpret_cast<ListState*>(GetWindowLongPtrW(h, DWLP_USER));
    switch (msg) {
    case WM_INITDIALOG:
        s = reinterpret_cast<ListState*>(lp);
        SetWindowLongPtrW(h, DWLP_USER, lp);
        if (s->folder.empty() && !s->selected.empty()) s->folder = ui::directoryOf(s->selected.front());
        if (s->folder.empty()) {
            auto open = mainwin::openDictionaries();
            if (!open.empty()) s->folder = ui::directoryOf(ui::widen(open.front()->path, CP_ACP));
        }
        fillLists(h, *s);
        ui::centreWindow(h, GetParent(h));
        return TRUE;
    case WM_COMMAND: {
        HWND sel = GetDlgItem(h, IDC_DL_SELECTED), other = GetDlgItem(h, IDC_DL_OTHER);
        const int i = static_cast<int>(SendMessageW(sel, LB_GETCURSEL, 0, 0));
        switch (LOWORD(wp)) {
        case IDC_DL_PROMOTE:
            if (i > 0) { std::swap(s->selected[i], s->selected[i - 1]); fillLists(h, *s); SendMessageW(sel, LB_SETCURSEL, i - 1, 0); }
            break;
        case IDC_DL_DEMOTE:
            if (i >= 0 && i + 1 < static_cast<int>(s->selected.size())) { std::swap(s->selected[i], s->selected[i + 1]); fillLists(h, *s); SendMessageW(sel, LB_SETCURSEL, i + 1, 0); }
            break;
        case IDC_DL_ADD: {
            const int o = static_cast<int>(SendMessageW(other, LB_GETCURSEL, 0, 0));
            if (o < 0) break;
            const int len = static_cast<int>(SendMessageW(other, LB_GETTEXTLEN, o, 0));
            std::wstring name(len + 1, L'\0');
            SendMessageW(other, LB_GETTEXT, o, reinterpret_cast<LPARAM>(&name[0]));
            name.resize(len);
            s->selected.push_back(s->folder + L"\\" + name);
            fillLists(h, *s);
            SendMessageW(sel, LB_SETCURSEL, s->selected.size() - 1, 0);
            break;
        }
        case IDC_DL_OTHER:
            if (HIWORD(wp) == LBN_DBLCLK) SendMessageW(h, WM_COMMAND, IDC_DL_ADD, 0);
            break;
        case IDC_DL_REMOVE:
            if (i >= 0) { s->selected.erase(s->selected.begin() + i); fillLists(h, *s); }
            break;
        case IDC_DL_SELECTED:
            if (HIWORD(wp) == LBN_DBLCLK) SendMessageW(h, WM_COMMAND, IDC_DL_PROPERTIES, 0);
            break;
        case IDC_DL_PROPERTIES:
            if (i >= 0)
                if (auto d = mainwin::loadDictionary(s->selected[i])) showProperties(h, s->selected[i], *d);
            break;
        case IDC_DL_BROWSE: {
            BROWSEINFOW bi{};
            bi.hwndOwner = h;
            bi.lpszTitle = L"Folder of dictionary files";
            bi.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE;
            if (LPITEMIDLIST id = SHBrowseForFolderW(&bi)) {
                wchar_t path[MAX_PATH];
                if (SHGetPathFromIDListW(id, path)) {
                    s->folder = path;
                    fillLists(h, *s);
                }
                CoTaskMemFree(id);
            }
            break;
        }
        case IDC_HELP_BUTTON: app::showHelp(h, L"html/dlg_dictionary_list.htm"); break;
        case IDOK:
            *s->paths = s->selected;
            EndDialog(h, IDOK);
            break;
        case IDCANCEL: EndDialog(h, IDCANCEL); break;
        }
        return TRUE;
    }
    }
    return FALSE;
}

} // namespace

void showOptions(HWND owner) {
    if (g_options) {
        ShowWindow(g_options, SW_RESTORE);
        SetForegroundWindow(g_options);
        return;
    }
    g_options = CreateDialogParamW(app::instance(), MAKEINTRESOURCEW(IDD_OPTIONS), owner, optionsProc, 0);
    if (!g_options) return;
    SetPropW(g_options, L"TEA.dialog", reinterpret_cast<HANDLE>(1));
    app::addModeless(g_options);
    ShowWindow(g_options, SW_SHOW);
}

void showProperties(HWND owner, const std::wstring& path, const tea::Dictionary& dict) {
    PropertiesArgs a{path, &dict};
    DialogBoxParamW(app::instance(), MAKEINTRESOURCEW(IDD_PROPERTIES), owner, propertiesProc, reinterpret_cast<LPARAM>(&a));
}

namespace {
INT_PTR CALLBACK aboutProc(HWND h, UINT msg, WPARAM wp, LPARAM) {
    if (msg == WM_INITDIALOG) {
        SetDlgItemTextW(h, 11160, (L"Settings: " + Settings::settingsPath()).c_str());
        ui::centreWindow(h, GetParent(h));
        return TRUE;
    }
    if (msg == WM_COMMAND && (LOWORD(wp) == IDOK || LOWORD(wp) == IDCANCEL)) EndDialog(h, 0);
    return FALSE;
}
} // namespace

void showAbout(HWND owner) {
    DialogBoxParamW(app::instance(), MAKEINTRESOURCEW(IDD_ABOUT), owner, aboutProc, 0);
}

void showQuickReference(HWND owner) {
    if (g_quickReference) {
        ShowWindow(g_quickReference, SW_RESTORE);
        SetForegroundWindow(g_quickReference);
        return;
    }
    g_quickReference = CreateDialogParamW(app::instance(), MAKEINTRESOURCEW(IDD_QUICK_REFERENCE), owner, quickReferenceProc, 0);
    if (!g_quickReference) return;
    SetPropW(g_quickReference, L"TEA.dialog", reinterpret_cast<HANDLE>(1));
    app::addModeless(g_quickReference);
    ShowWindow(g_quickReference, SW_SHOWNOACTIVATE);
}

void showTips(HWND owner) {
    if (g_tips) {
        ShowWindow(g_tips, SW_RESTORE);
        SetForegroundWindow(g_tips);
        return;
    }
    g_tips = CreateDialogParamW(app::instance(), MAKEINTRESOURCEW(IDD_TIPS), owner, tipsProc, 0);
    if (!g_tips) return;
    SetPropW(g_tips, L"TEA.dialog", reinterpret_cast<HANDLE>(1));
    app::addModeless(g_tips);
    ShowWindow(g_tips, SW_SHOWNOACTIVATE);
}

bool editDictionaryList(HWND owner, std::vector<std::wstring>& paths) {
    ListState s{&paths, paths, L""};
    return DialogBoxParamW(app::instance(), MAKEINTRESOURCEW(IDD_DICTIONARY_LIST), owner, listProc, reinterpret_cast<LPARAM>(&s)) == IDOK;
}

} // namespace dialogs

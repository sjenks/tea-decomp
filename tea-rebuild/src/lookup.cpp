// External lookup: web searches and the original's three ways of driving other dictionary programs.
#include "util.h"

#include <commdlg.h>
#include <ddeml.h>
#include <shellapi.h>

#include <algorithm>

#include "app.h"
#include "dialogs.h"
#include "resource.h"
#include "settings.h"

namespace lookup {

namespace {

struct Row {
    int check, name, a, b;   // b is the encoding combo for program rows
};
const Row kRows[12] = {
    {13200, 13210, 13220, 0},   {13230, 13240, 13250, 0},   {13260, 13270, 13280, 0},   {13290, 13310, 13320, 0},
    {5350, 13140, 5390, 5430},  {5360, 13150, 5400, 5440},  {5370, 13160, 5410, 5450},  {5380, 13170, 5420, 5460},
    {5470, 13180, 5510, 5550},  {5480, 13190, 5520, 5560},
    {5160, 13100, 5200, 11200}, {5170, 13110, 5210, 5290},
};
const int kBrowse[2] = {5240, 5250};

std::wstring urlEncode(const std::wstring& text) {
    static const char* hex = "0123456789ABCDEF";
    std::wstring out;
    for (unsigned char c : ui::utf8(text)) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '-' || c == '_' || c == '.' || c == '~') {
            out += static_cast<wchar_t>(c);
        } else {
            out += L'%';
            out += static_cast<wchar_t>(hex[c >> 4]);
            out += static_cast<wchar_t>(hex[c & 15]);
        }
    }
    return out;
}

HDDEDATA CALLBACK ddeCallback(UINT, UINT, HCONV, HSZ, HSZ, HDDEDATA, ULONG_PTR, ULONG_PTR) { return nullptr; }

bool ddeLookup(const LookupMethod& m, const std::wstring& text) {
    DWORD inst = 0;
    if (DdeInitializeW(&inst, ddeCallback, APPCMD_CLIENTONLY, 0) != DMLERR_NO_ERROR)
        return false;
    bool ok = false;
    HSZ service = DdeCreateStringHandleW(inst, m.a.c_str(), CP_WINUNICODE);
    HSZ topic = DdeCreateStringHandleW(inst, m.b.c_str(), CP_WINUNICODE);
    if (HCONV conv = DdeConnect(inst, service, topic, nullptr)) {
        // The word is sent as the execute string, which is how those programs took lookups.
        const std::string word = ui::narrow(text, CP_ACP);
        HDDEDATA r = DdeClientTransaction(reinterpret_cast<LPBYTE>(const_cast<char*>(word.c_str())), static_cast<DWORD>(word.size() + 1), conv, nullptr, CF_TEXT,
                                          XTYP_EXECUTE, 5000, nullptr);
        ok = r != nullptr;
        DdeDisconnect(conv);
    }
    DdeFreeStringHandle(inst, service);
    DdeFreeStringHandle(inst, topic);
    DdeUninitialize(inst);
    return ok;
}

bool messageLookup(HWND owner, const LookupMethod& m, const std::wstring& text) {
    HWND target = FindWindowW(nullptr, m.a.c_str());
    if (!target) return false;
    // The word goes on the clipboard and the program is told to look it up.
    ui::setClipboardText(owner, text);
    return PostMessageW(target, WM_COMMAND, static_cast<WPARAM>(_wtoi(m.b.c_str())), 0) != FALSE;
}

bool programLookup(const LookupMethod& m, const std::wstring& text) {
    if (m.a.empty()) return false;
    std::wstring arg;
    if (m.encoding == 1) {
        for (unsigned char c : ui::narrow(text, CP_ACP)) arg += ui::format(L"%02X", c);
    } else {
        arg = L"\"" + text + L"\"";
    }
    return reinterpret_cast<INT_PTR>(ShellExecuteW(nullptr, L"open", m.a.c_str(), arg.c_str(), nullptr, SW_SHOWNORMAL)) > 32;
}

bool perform(HWND owner, const LookupMethod& m, const std::wstring& text) {
    switch (m.kind) {
    case LookupMethod::Web: {
        if (m.a.empty()) return false;
        std::wstring url = m.a;
        const std::wstring enc = urlEncode(text);
        for (size_t p; (p = url.find(L"{entry}")) != std::wstring::npos;) url.replace(p, 7, enc);
        return reinterpret_cast<INT_PTR>(ShellExecuteW(owner, L"open", url.c_str(), nullptr, nullptr, SW_SHOWNORMAL)) > 32;
    }
    case LookupMethod::Dde: return ddeLookup(m, text);
    case LookupMethod::Message: return messageLookup(owner, m, text);
    case LookupMethod::Program: return programLookup(m, text);
    }
    return false;
}

// --- Lookup Methods dialog ---

std::vector<LookupMethod> g_editing;
int g_editingDefault = 0;

void loadRows(HWND h) {
    for (int i = 0; i < 12; i++) {
        const LookupMethod& m = g_editing[i];
        const Row& r = kRows[i];
        CheckDlgButton(h, r.check, !m.enabled ? BST_UNCHECKED : (i == g_editingDefault ? BST_CHECKED : BST_INDETERMINATE));
        SetDlgItemTextW(h, r.name, m.name.c_str());
        SetDlgItemTextW(h, r.a, m.a.c_str());
        if (m.kind == LookupMethod::Program) {
            HWND c = GetDlgItem(h, r.b);
            SendMessageW(c, CB_RESETCONTENT, 0, 0);
            SendMessageW(c, CB_ADDSTRING, 0, reinterpret_cast<LPARAM>(L"No Encoding"));
            SendMessageW(c, CB_ADDSTRING, 0, reinterpret_cast<LPARAM>(L"Hex Encoding"));
            SendMessageW(c, CB_SETCURSEL, m.encoding, 0);
        } else if (r.b) {
            SetDlgItemTextW(h, r.b, m.b.c_str());
        }
    }
}

void readRows(HWND h) {
    for (int i = 0; i < 12; i++) {
        LookupMethod& m = g_editing[i];
        const Row& r = kRows[i];
        m.name = ui::windowText(GetDlgItem(h, r.name));
        m.a = ui::windowText(GetDlgItem(h, r.a));
        if (m.kind == LookupMethod::Program) m.encoding = static_cast<int>(SendDlgItemMessageW(h, r.b, CB_GETCURSEL, 0, 0));
        else if (r.b) m.b = ui::windowText(GetDlgItem(h, r.b));
        const UINT state = IsDlgButtonChecked(h, r.check);
        m.enabled = state != BST_UNCHECKED;
        if (state == BST_CHECKED) g_editingDefault = i;
    }
}

INT_PTR CALLBACK setupProc(HWND h, UINT msg, WPARAM wp, LPARAM) {
    switch (msg) {
    case WM_INITDIALOG:
        g_editing = g_settings.lookups;
        g_editingDefault = g_settings.defaultLookup;
        loadRows(h);
        SetDlgItemTextW(h, IDC_LM_TEST_WORD, g_settings.lookupTestWord.c_str());
        ui::centreWindow(h, GetParent(h));
        return TRUE;
    case WM_COMMAND: {
        const int id = LOWORD(wp);
        for (int i = 0; i < 12; i++) {
            if (id != kRows[i].check || HIWORD(wp) != BN_CLICKED) continue;
            // A black check marks the default; the other enabled methods turn grey.
            if (IsDlgButtonChecked(h, id) == BST_CHECKED) {
                for (int k = 0; k < 12; k++)
                    if (k != i && IsDlgButtonChecked(h, kRows[k].check) == BST_CHECKED) CheckDlgButton(h, kRows[k].check, BST_INDETERMINATE);
            }
            return TRUE;
        }
        for (int k = 0; k < 2; k++) {
            if (id != kBrowse[k]) continue;
            wchar_t file[MAX_PATH] = L"";
            OPENFILENAMEW of{sizeof of};
            of.hwndOwner = h;
            of.lpstrFilter = L"Programs (*.exe)\0*.exe\0All Files (*.*)\0*.*\0";
            of.lpstrFile = file;
            of.nMaxFile = MAX_PATH;
            of.Flags = OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
            if (GetOpenFileNameW(&of)) SetDlgItemTextW(h, kRows[10 + k].a, file);
            return TRUE;
        }
        switch (id) {
        case IDC_LM_TEST: {
            readRows(h);
            const std::wstring word = ui::windowText(GetDlgItem(h, IDC_LM_TEST_WORD));
            const LookupMethod& m = g_editing[g_editingDefault];
            if (!m.enabled || !perform(h, m, word)) ui::message(h, ui::loadString(6380), MB_OK | MB_ICONEXCLAMATION);
            return TRUE;
        }
        case IDC_SAVE_DEFAULTS:
            readRows(h);
            g_settings.lookups = g_editing;
            g_settings.defaultLookup = g_editingDefault;
            g_settings.lookupTestWord = ui::windowText(GetDlgItem(h, IDC_LM_TEST_WORD));
            g_settings.saveLookups();
            return TRUE;
        case IDC_HELP_BUTTON: app::showHelp(h, L"html/dlg_lookup_methods.htm"); return TRUE;
        case IDCANCEL:
        case IDOK:
            // Closing keeps the changes for this session, as in the original.
            readRows(h);
            g_settings.lookups = g_editing;
            g_settings.defaultLookup = g_editingDefault;
            g_settings.lookupTestWord = ui::windowText(GetDlgItem(h, IDC_LM_TEST_WORD));
            EndDialog(h, IDOK);
            return TRUE;
        }
        return FALSE;
    }
    }
    return FALSE;
}

struct OfferArgs {
    std::wstring text;
    bool anyEnabled;
};

INT_PTR CALLBACK offerProc(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_INITDIALOG: {
        const auto* a = reinterpret_cast<const OfferArgs*>(lp);
        SetDlgItemTextW(h, IDC_EXT_MESSAGE, a->text.c_str());
        EnableWindow(GetDlgItem(h, IDOK), a->anyEnabled);
        ui::centreWindow(h, GetParent(h));
        return TRUE;
    }
    case WM_COMMAND:
        switch (LOWORD(wp)) {
        case IDOK: EndDialog(h, IDOK); return TRUE;
        case IDCANCEL: EndDialog(h, IDCANCEL); return TRUE;
        case IDC_EXT_SETUP: EndDialog(h, IDC_EXT_SETUP); return TRUE;
        case IDC_HELP_BUTTON: app::showHelp(h, L"html/msg_external_lookup.htm"); return TRUE;
        }
    }
    return FALSE;
}

bool anyEnabled() {
    for (const auto& m : g_settings.lookups)
        if (m.enabled) return true;
    return false;
}

// The original's messages have the word between a pair of quotes ("" in the string table).
std::wstring withWord(UINT id, const std::wstring& word) {
    std::wstring s = ui::loadString(id);
    const size_t q = s.find(L"\"\"");
    if (q != std::wstring::npos) s.insert(q + 1, word);
    return s;
}

} // namespace

void fillMenu(HMENU sub) {
    while (GetMenuItemCount(sub) > 0) DeleteMenu(sub, 0, MF_BYPOSITION);
    for (size_t i = 0; i < g_settings.lookups.size(); i++) {
        const LookupMethod& m = g_settings.lookups[i];
        if (!m.enabled || m.name.empty()) continue;
        std::wstring label = m.name;
        if (static_cast<int>(i) == g_settings.defaultLookup) label += L"\tCtrl+Alt+Enter";
        AppendMenuW(sub, MF_STRING, CM_EXTERNAL_FIRST + i, label.c_str());
        if (static_cast<int>(i) == g_settings.defaultLookup) {
            MENUITEMINFOW mi{sizeof mi};
            mi.fMask = MIIM_FTYPE | MIIM_STATE;
            mi.fType = MFT_RADIOCHECK;
            mi.fState = MFS_CHECKED;
            SetMenuItemInfoW(sub, CM_EXTERNAL_FIRST + static_cast<UINT>(i), FALSE, &mi);
        }
    }
    AppendMenuW(sub, MF_SEPARATOR, 0, nullptr);
    AppendMenuW(sub, MF_STRING, CM_EXTERNAL_SETUP, L"&Setup...");
}

bool run(HWND owner, const std::wstring& text, int method) {
    if (method < 0) {
        method = g_settings.defaultLookup;
        if (method < 0 || method >= static_cast<int>(g_settings.lookups.size()) || !g_settings.lookups[method].enabled) {
            offer(owner, text, false);
            return false;
        }
    }
    if (method >= static_cast<int>(g_settings.lookups.size())) return false;
    if (!perform(owner, g_settings.lookups[method], text)) {
        ui::message(owner, ui::loadString(6380), MB_OK | MB_ICONEXCLAMATION);
        return false;
    }
    return true;
}

void showSetup(HWND owner) {
    DialogBoxParamW(app::instance(), MAKEINTRESOURCEW(IDD_LOOKUP_METHODS), owner, setupProc, 0);
}

void offer(HWND owner, const std::wstring& word, bool afterLookup) {
    for (;;) {
        const bool any = anyEnabled() && g_settings.lookups[g_settings.defaultLookup].enabled;
        OfferArgs a{withWord(afterLookup ? (any ? 12892 : 12893) : (any ? 12890 : 12891), word), any};
        const INT_PTR r = DialogBoxParamW(app::instance(), MAKEINTRESOURCEW(IDD_EXTERNAL_LOOKUP), owner, offerProc, reinterpret_cast<LPARAM>(&a));
        if (r == IDC_EXT_SETUP) {
            showSetup(owner);
            continue;
        }
        if (r == IDOK) run(owner, word, -1);
        return;
    }
}

} // namespace lookup

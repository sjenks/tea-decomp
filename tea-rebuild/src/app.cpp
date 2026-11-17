// tea — the TEA Crossword Helper main program, rebuilt.
#include "app.h"

#include <commctrl.h>
#include <shellapi.h>

#include <algorithm>
#include <vector>

#include "dialogs.h"
#include "mainwin.h"
#include "resource.h"
#include "settings.h"

namespace app {

namespace {
HINSTANCE g_instance = nullptr;
std::vector<HWND> g_modeless;
}

HINSTANCE instance() { return g_instance; }

void addModeless(HWND h) {
    if (std::find(g_modeless.begin(), g_modeless.end(), h) == g_modeless.end()) g_modeless.push_back(h);
}

void removeModeless(HWND h) { g_modeless.erase(std::remove(g_modeless.begin(), g_modeless.end(), h), g_modeless.end()); }

std::wstring findCompanionFile(const std::wstring& name) {
    std::vector<std::wstring> dirs{ui::moduleDirectory()};
    // The original installs its tools and help beside the Dictionaries folder.
    std::vector<std::wstring> dictPaths = g_settings.openDictionaries;
    for (const auto& d : mainwin::openDictionaries())
        if (d) dictPaths.push_back(ui::widen(d->path, CP_ACP));
    for (const std::wstring& p : dictPaths) {
        const std::wstring dir = ui::directoryOf(p);
        dirs.push_back(dir);
        dirs.push_back(ui::directoryOf(dir));
    }
    for (const std::wstring& dir : dirs) {
        if (dir.empty()) continue;
        const std::wstring path = dir + L"\\" + name;
        if (ui::fileExists(path)) return path;
    }
    return {};
}

namespace {

using HtmlHelpFn = HWND(WINAPI*)(HWND, LPCWSTR, UINT, DWORD_PTR);

HtmlHelpFn htmlHelp() {
    static HtmlHelpFn fn = [] {
        HMODULE m = LoadLibraryW(L"hhctrl.ocx");
        return m ? reinterpret_cast<HtmlHelpFn>(reinterpret_cast<void*>(GetProcAddress(m, "HtmlHelpW"))) : nullptr;
    }();
    return fn;
}

std::wstring helpFile(HWND owner) {
    const std::wstring chm = findCompanionFile(L"TEA.chm");
    if (chm.empty())
        ui::message(owner, L"The help file TEA.chm was not found. It is part of the original TEA release; put it next to tea.exe.", MB_OK | MB_ICONINFORMATION);
    return chm;
}

} // namespace

void showHelp(HWND owner, const std::wstring& page) {
    const std::wstring chm = helpFile(owner);
    if (chm.empty()) return;
    const std::wstring target = chm + (page.empty() ? L"" : L"::/" + page);
    if (HtmlHelpFn hh = htmlHelp()) {
        if (hh(owner, target.c_str(), 0 /* HH_DISPLAY_TOPIC */, 0)) return;
    }
    ShellExecuteW(owner, L"open", L"hh.exe", (L"\"" + target + L"\"").c_str(), nullptr, SW_SHOWNORMAL);
}

void showHelpContext(HWND owner, unsigned contextId) {
    const std::wstring chm = helpFile(owner);
    if (chm.empty()) return;
    if (HtmlHelpFn hh = htmlHelp()) {
        if (hh(owner, chm.c_str(), 0x000F /* HH_HELP_CONTEXT */, contextId)) return;
        if (hh(owner, chm.c_str(), 0, 0)) return;
    }
    ShellExecuteW(owner, L"open", L"hh.exe", (L"\"" + chm + L"\"").c_str(), nullptr, SW_SHOWNORMAL);
}

} // namespace app

int WINAPI wWinMain(HINSTANCE inst, HINSTANCE, LPWSTR, int show) {
    app::g_instance = inst;
    INITCOMMONCONTROLSEX icc{sizeof icc, ICC_WIN95_CLASSES | ICC_UPDOWN_CLASS | ICC_TAB_CLASSES | ICC_TREEVIEW_CLASSES | ICC_BAR_CLASSES};
    InitCommonControlsEx(&icc);
    LoadLibraryW(L"Msftedit.dll");   // RichEdit for definitions

    g_settings.load();
    // Dictionaries named on the command line (or dropped on the program) replace the saved list.
    std::vector<std::wstring> files;
    int argc = 0;
    if (LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc)) {
        for (int i = 1; i < argc; i++) files.push_back(argv[i]);
        LocalFree(argv);
    }
    if (!mainwin::create(show, files)) return 1;
    if (g_settings.showQuickReference) dialogs::showQuickReference(mainwin::window());
    if (g_settings.showTips) dialogs::showTips(mainwin::window());

    MSG msg;
    while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
        // F4 returns to the pattern box from any TEA window, as in the original.
        if (msg.message == WM_KEYDOWN && msg.wParam == VK_F4 && GetKeyState(VK_MENU) >= 0) {
            SendMessageW(mainwin::window(), WM_COMMAND, CM_FOCUS_PATTERN, 0);
            continue;
        }
        if (mainwin::translate(msg)) continue;
        bool handled = false;
        for (HWND h : app::g_modeless) {
            if (IsWindow(h) && (msg.hwnd == h || IsChild(h, msg.hwnd))) {
                // A window may register an accelerator table as a property.
                if (HACCEL a = static_cast<HACCEL>(GetPropW(h, L"TEA.accel")))
                    if (TranslateAcceleratorW(h, a, &msg)) { handled = true; break; }
                if (GetPropW(h, L"TEA.dialog") && IsDialogMessageW(h, &msg)) { handled = true; break; }
                if (HWND d = static_cast<HWND>(GetPropW(h, L"TEA.dialogChild")))
                    if (IsDialogMessageW(d, &msg)) { handled = true; break; }
            }
        }
        if (handled) continue;
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    return 0;
}

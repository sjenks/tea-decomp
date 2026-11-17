// Program-wide plumbing: the message loop's list of modeless windows and where the original
// program's companion files are.
#pragma once
#include <string>

#include "util.h"

namespace app {

HINSTANCE instance();

// Modeless dialogs and frames that need keyboard navigation from the message loop.
void addModeless(HWND h);
void removeModeless(HWND h);

// A file shipped with the original program (TEA.chm, Tips.txt, TSBuild.exe, ...): looked for next to
// tea.exe, then beside the folders of the open dictionaries and the folder above them. Empty if not
// found.
std::wstring findCompanionFile(const std::wstring& name);

// Opens a page of TEA.chm (e.g. L"html/quick_start.htm"), or its contents if page is empty.
void showHelp(HWND owner, const std::wstring& page = L"");
// Opens the help topic for a help context number (the numbers Tips.txt uses).
void showHelpContext(HWND owner, unsigned contextId);

} // namespace app

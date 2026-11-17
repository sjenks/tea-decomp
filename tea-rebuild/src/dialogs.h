// The main window's dialogs and helper windows.
#pragma once
#include <string>
#include <vector>

#include "tsd.h"
#include "util.h"

namespace dialogs {

void showOptions(HWND owner);                     // modeless; brought to the front if already open
void showProperties(HWND owner, const std::wstring& path, const tea::Dictionary& dict);
void showAbout(HWND owner);
void showQuickReference(HWND owner);              // modeless
void showTips(HWND owner);                        // modeless
// The Dictionary List dialog: edits an ordered list of dictionary files. True if OK was pressed.
bool editDictionaryList(HWND owner, std::vector<std::wstring>& paths);

} // namespace dialogs

namespace lookup {

// Rebuilds an External Lookup submenu: the enabled methods (the default one with a radio mark),
// a separator, and Setup....
void fillMenu(HMENU submenu);
// Looks text up with one method (index into the settings' list), or the default one if -1.
// Returns false (after telling the user) if that failed.
bool run(HWND owner, const std::wstring& text, int method = -1);
void showSetup(HWND owner);
// The original's External Lookup message box. afterLookup: definitions were not found.
void offer(HWND owner, const std::wstring& word, bool afterLookup);

} // namespace lookup

namespace definitions {

// Shows the definitions of word, in the most recent definition window or a new one. If definition is
// not 0 (a full-text search result), that definition is shown first.
void lookup(HWND owner, const std::wstring& word, bool newWindow, uint32_t definition = 0);
void settingsChanged();
void closeAll();

} // namespace definitions

namespace printing {

struct Job {
    std::wstring title;                           // dictionary and pattern, for the page heading
    std::vector<std::wstring> all, selected;      // entry text
    std::vector<size_t> wordLengths, selectedWordLengths;   // characters drawn in the main font
};
void print(HWND owner, const Job& job);
void preview(HWND owner, const Job& job);
void pageSetup(HWND owner);

} // namespace printing

namespace savetsd {

// Writes a dictionary file containing the given words (Windows-1252), with a description, using the
// letters of `alphabet` (the dictionary the words came from).
// Returns an empty string on success, else the error text.
std::wstring write(const std::wstring& path, const std::vector<std::string>& words, const std::string& description, const tea::Dictionary& alphabet);
// The Save TEA&Sympathy Dictionary dialog: asks for the description, then writes. True if saved.
bool run(HWND owner, const std::wstring& path, const std::vector<std::string>& words, const std::wstring& defaultDescription, const tea::Dictionary& alphabet);

} // namespace savetsd

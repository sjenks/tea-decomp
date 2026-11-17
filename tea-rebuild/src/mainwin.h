// The main window: pattern box, length ruler, one results list per open dictionary, status bar.
#pragma once
#include <memory>
#include <string>
#include <vector>

#include "tsd.h"
#include "util.h"

namespace mainwin {

bool create(int show, const std::vector<std::wstring>& files);
HWND window();
bool translate(MSG& msg);                       // accelerators and dialog keys; true if handled

// For other windows.
std::vector<std::shared_ptr<const tea::Dictionary>> openDictionaries();
std::shared_ptr<const tea::Dictionary> loadDictionary(const std::wstring& path);   // shared cache
void settingsChanged();                         // fonts, options: refresh what depends on them
void tryPattern(const std::wstring& pattern);   // put a pattern in the box and search
// Moves the active list's selection by delta (Next/Previous Result). Returns the word now selected,
// or empty if there is none.
std::wstring stepResult(int delta);
void setStatus(const std::wstring& text);

} // namespace mainwin

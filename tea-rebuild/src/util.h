// Small helpers shared by the GUI: text conversion, paths, fonts, dialog layout, INI files.
#pragma once
#ifndef UNICODE
#define UNICODE
#endif
#ifndef _UNICODE
#define _UNICODE
#endif
#include <windows.h>

#include <string>
#include <vector>

namespace ui {

// Dictionary text is single-byte Windows-1252, as the original program used it (its ANSI code page).
constexpr UINT kDictionaryCodePage = 1252;

std::wstring widen(const std::string& s, UINT codePage = kDictionaryCodePage);
std::string narrow(const std::wstring& s, UINT codePage = kDictionaryCodePage);   // unmappable -> DEL
std::string utf8(const std::wstring& s);
std::wstring fromUtf8(const std::string& s);

std::wstring format(const wchar_t* fmt, ...);
std::wstring loadString(UINT id);

std::wstring fileTitle(const std::wstring& path);        // "C:\x\Core English.tsd" -> "Core English.tsd"
std::wstring directoryOf(const std::wstring& path);      // without the trailing backslash
std::wstring moduleDirectory();
bool fileExists(const std::wstring& path);

std::wstring windowText(HWND h);
void setWindowText(HWND h, const std::wstring& s);

// Fonts are kept as LOGFONT plus a text colour, at 96 DPI (heights are scaled when the font is made).
struct FontSpec {
    LOGFONTW lf{};
    COLORREF color = RGB(0, 0, 0);
};
FontSpec makeFontSpec(const wchar_t* face, int height96, bool italic = false, COLORREF color = RGB(0, 0, 0), BYTE pitchFamily = FIXED_PITCH | FF_MODERN);
HFONT createFont(const FontSpec& f, int dpi);
std::wstring fontToString(const FontSpec& f);            // same field order as the original's settings
bool fontFromString(const std::wstring& s, FontSpec& f);

int dpiOf(HWND h);
int scale(int px96, int dpi);

// Clipboard
bool setClipboardText(HWND owner, const std::wstring& text);

// INI-style settings file (UTF-16, so file names in any script survive).
class Ini {
public:
    explicit Ini(std::wstring path) : path_(std::move(path)) {}
    const std::wstring& path() const { return path_; }
    std::wstring get(const wchar_t* section, const std::wstring& key, const std::wstring& def = L"") const;
    int getInt(const wchar_t* section, const std::wstring& key, int def) const;
    bool has(const wchar_t* section, const std::wstring& key) const;
    void set(const wchar_t* section, const std::wstring& key, const std::wstring& value) const;
    void setInt(const wchar_t* section, const std::wstring& key, int value) const;
    void clearSection(const wchar_t* section) const;
private:
    void ensureFile() const;
    std::wstring path_;
};

// Shows a message box owned by `owner` with the program's title.
int message(HWND owner, const std::wstring& text, UINT flags = MB_OK | MB_ICONINFORMATION);

// Centre `h` on `over` (or the work area) and keep it on screen.
void centreWindow(HWND h, HWND over);
// Moves a window to a saved "x,y,w,h" position if that is on a monitor; returns true if it did.
bool restorePlacement(HWND h, const std::wstring& saved);
std::wstring savePlacement(HWND h);

} // namespace ui

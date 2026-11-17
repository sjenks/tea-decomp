#include "util.h"

#include <cstdarg>
#include <cwchar>

namespace ui {

std::wstring widen(const std::string& s, UINT codePage) {
    if (s.empty()) return {};
    const int n = MultiByteToWideChar(codePage, 0, s.data(), static_cast<int>(s.size()), nullptr, 0);
    std::wstring w(n, L'\0');
    MultiByteToWideChar(codePage, 0, s.data(), static_cast<int>(s.size()), &w[0], n);
    return w;
}

std::string narrow(const std::wstring& w, UINT codePage) {
    if (w.empty()) return {};
    // A character the dictionaries cannot contain becomes DEL: punctuation that matches nothing,
    // rather than '?', which a pattern would read as "any letter".
    const char unmappable = '\x7f';
    const int n = WideCharToMultiByte(codePage, WC_NO_BEST_FIT_CHARS, w.data(), static_cast<int>(w.size()), nullptr, 0, &unmappable, nullptr);
    std::string s(n, '\0');
    WideCharToMultiByte(codePage, WC_NO_BEST_FIT_CHARS, w.data(), static_cast<int>(w.size()), &s[0], n, &unmappable, nullptr);
    return s;
}

std::string utf8(const std::wstring& w) {
    if (w.empty()) return {};
    const int n = WideCharToMultiByte(CP_UTF8, 0, w.data(), static_cast<int>(w.size()), nullptr, 0, nullptr, nullptr);
    std::string s(n, '\0');
    WideCharToMultiByte(CP_UTF8, 0, w.data(), static_cast<int>(w.size()), &s[0], n, nullptr, nullptr);
    return s;
}

std::wstring fromUtf8(const std::string& s) { return widen(s, CP_UTF8); }

std::wstring format(const wchar_t* fmt, ...) {
    wchar_t buf[2048];
    va_list ap;
    va_start(ap, fmt);
    _vsnwprintf(buf, 2047, fmt, ap);
    va_end(ap);
    buf[2047] = 0;
    return buf;
}

std::wstring loadString(UINT id) {
    const wchar_t* p = nullptr;
    const int n = LoadStringW(GetModuleHandleW(nullptr), id, reinterpret_cast<LPWSTR>(&p), 0);
    return n > 0 ? std::wstring(p, n) : std::wstring();
}

std::wstring fileTitle(const std::wstring& path) {
    const size_t p = path.find_last_of(L"\\/");
    return p == std::wstring::npos ? path : path.substr(p + 1);
}

std::wstring directoryOf(const std::wstring& path) {
    const size_t p = path.find_last_of(L"\\/");
    return p == std::wstring::npos ? std::wstring() : path.substr(0, p);
}

std::wstring moduleDirectory() {
    wchar_t buf[MAX_PATH];
    const DWORD n = GetModuleFileNameW(nullptr, buf, MAX_PATH);
    return directoryOf(std::wstring(buf, n));
}

bool fileExists(const std::wstring& path) {
    const DWORD a = GetFileAttributesW(path.c_str());
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
}

std::wstring windowText(HWND h) {
    const int n = GetWindowTextLengthW(h);
    std::wstring s(n + 1, L'\0');
    GetWindowTextW(h, &s[0], n + 1);
    s.resize(n);
    return s;
}

void setWindowText(HWND h, const std::wstring& s) {
    if (windowText(h) != s) SetWindowTextW(h, s.c_str());
}

FontSpec makeFontSpec(const wchar_t* face, int height96, bool italic, COLORREF color, BYTE pitchFamily) {
    FontSpec f;
    f.lf.lfHeight = -height96;
    f.lf.lfWeight = FW_NORMAL;
    f.lf.lfItalic = italic ? 1 : 0;
    f.lf.lfCharSet = DEFAULT_CHARSET;
    f.lf.lfOutPrecision = OUT_DEFAULT_PRECIS;
    f.lf.lfClipPrecision = CLIP_DEFAULT_PRECIS;
    f.lf.lfQuality = DEFAULT_QUALITY;
    f.lf.lfPitchAndFamily = pitchFamily;
    wcsncpy(f.lf.lfFaceName, face, LF_FACESIZE - 1);
    f.color = color;
    return f;
}

HFONT createFont(const FontSpec& f, int dpi) {
    LOGFONTW lf = f.lf;
    lf.lfHeight = MulDiv(lf.lfHeight, dpi, 96);
    lf.lfWidth = MulDiv(lf.lfWidth, dpi, 96);
    return CreateFontIndirectW(&lf);
}

// "R,G,B,height,width,escapement,orientation,weight,italic,underline,strikeout,charset,
//  outprecision,clipprecision,quality,pitchfamily,face" -- the layout of the original's font settings.
std::wstring fontToString(const FontSpec& f) {
    const LOGFONTW& l = f.lf;
    return format(L"%d,%d,%d,%ld,%ld,%ld,%ld,%ld,%d,%d,%d,%d,%d,%d,%d,%d,%ls", GetRValue(f.color), GetGValue(f.color), GetBValue(f.color),
                  l.lfHeight, l.lfWidth, l.lfEscapement, l.lfOrientation, l.lfWeight, l.lfItalic, l.lfUnderline, l.lfStrikeOut,
                  l.lfCharSet, l.lfOutPrecision, l.lfClipPrecision, l.lfQuality, l.lfPitchAndFamily, l.lfFaceName);
}

bool fontFromString(const std::wstring& s, FontSpec& f) {
    long v[16];
    size_t pos = 0;
    for (int i = 0; i < 16; i++) {
        const size_t comma = s.find(L',', pos);
        if (comma == std::wstring::npos) return false;
        v[i] = std::wcstol(s.c_str() + pos, nullptr, 10);
        pos = comma + 1;
    }
    FontSpec r;
    r.color = RGB(v[0], v[1], v[2]);
    LOGFONTW& l = r.lf;
    l.lfHeight = v[3]; l.lfWidth = v[4]; l.lfEscapement = v[5]; l.lfOrientation = v[6]; l.lfWeight = v[7];
    l.lfItalic = static_cast<BYTE>(v[8]); l.lfUnderline = static_cast<BYTE>(v[9]); l.lfStrikeOut = static_cast<BYTE>(v[10]);
    l.lfCharSet = static_cast<BYTE>(v[11]); l.lfOutPrecision = static_cast<BYTE>(v[12]); l.lfClipPrecision = static_cast<BYTE>(v[13]);
    l.lfQuality = static_cast<BYTE>(v[14]); l.lfPitchAndFamily = static_cast<BYTE>(v[15]);
    wcsncpy(l.lfFaceName, s.c_str() + pos, LF_FACESIZE - 1);
    if (l.lfFaceName[0] == 0 || l.lfHeight == 0) return false;
    f = r;
    return true;
}

int dpiOf(HWND h) {
    HDC dc = GetDC(h);
    const int dpi = GetDeviceCaps(dc, LOGPIXELSY);
    ReleaseDC(h, dc);
    return dpi > 0 ? dpi : 96;
}

int scale(int px96, int dpi) { return MulDiv(px96, dpi, 96); }

bool setClipboardText(HWND owner, const std::wstring& text) {
    if (!OpenClipboard(owner)) return false;
    EmptyClipboard();
    const size_t bytes = (text.size() + 1) * sizeof(wchar_t);
    HGLOBAL mem = GlobalAlloc(GMEM_MOVEABLE, bytes);
    bool ok = false;
    if (mem) {
        void* p = GlobalLock(mem);
        memcpy(p, text.c_str(), bytes);
        GlobalUnlock(mem);
        ok = SetClipboardData(CF_UNICODETEXT, mem) != nullptr;
        if (!ok) GlobalFree(mem);
    }
    CloseClipboard();
    return ok;
}

void Ini::ensureFile() const {
    if (fileExists(path_)) return;
    CreateDirectoryW(directoryOf(path_).c_str(), nullptr);
    HANDLE h = CreateFileW(path_.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (h != INVALID_HANDLE_VALUE) {
        const unsigned char bom[2] = {0xff, 0xfe};   // UTF-16LE: the profile API then keeps Unicode text
        DWORD written;
        WriteFile(h, bom, 2, &written, nullptr);
        CloseHandle(h);
    }
}

std::wstring Ini::get(const wchar_t* section, const std::wstring& key, const std::wstring& def) const {
    std::vector<wchar_t> buf(4096);
    for (;;) {
        const DWORD n = GetPrivateProfileStringW(section, key.c_str(), def.c_str(), buf.data(), static_cast<DWORD>(buf.size()), path_.c_str());
        if (n < buf.size() - 2) return std::wstring(buf.data(), n);
        buf.resize(buf.size() * 4);
    }
}

bool Ini::has(const wchar_t* section, const std::wstring& key) const {
    return get(section, key, L"\x01") != L"\x01";
}

int Ini::getInt(const wchar_t* section, const std::wstring& key, int def) const {
    const std::wstring s = get(section, key);
    if (s.empty()) return def;
    return static_cast<int>(std::wcstol(s.c_str(), nullptr, 10));
}

void Ini::set(const wchar_t* section, const std::wstring& key, const std::wstring& value) const {
    ensureFile();
    // A value with leading or trailing spaces would be trimmed by the profile API; quote it.
    std::wstring v = value;
    if (!v.empty() && (v.front() == L' ' || v.back() == L' ' || v.front() == L'"')) v = L"\"" + v + L"\"";
    WritePrivateProfileStringW(section, key.c_str(), v.c_str(), path_.c_str());
}

void Ini::setInt(const wchar_t* section, const std::wstring& key, int value) const { set(section, key, std::to_wstring(value)); }

void Ini::clearSection(const wchar_t* section) const {
    ensureFile();
    WritePrivateProfileStringW(section, nullptr, nullptr, path_.c_str());
}

int message(HWND owner, const std::wstring& text, UINT flags) {
    return MessageBoxW(owner, text.c_str(), L"TEA", flags);
}

void centreWindow(HWND h, HWND over) {
    RECT r, o;
    GetWindowRect(h, &r);
    if (over && IsWindowVisible(over) && !IsIconic(over)) {
        GetWindowRect(over, &o);
    } else {
        SystemParametersInfoW(SPI_GETWORKAREA, 0, &o, 0);
    }
    const int w = r.right - r.left, hgt = r.bottom - r.top;
    int x = o.left + ((o.right - o.left) - w) / 2, y = o.top + ((o.bottom - o.top) - hgt) / 2;
    MONITORINFO mi{sizeof mi};
    GetMonitorInfoW(MonitorFromRect(&o, MONITOR_DEFAULTTONEAREST), &mi);
    if (x + w > mi.rcWork.right) x = mi.rcWork.right - w;
    if (y + hgt > mi.rcWork.bottom) y = mi.rcWork.bottom - hgt;
    if (x < mi.rcWork.left) x = mi.rcWork.left;
    if (y < mi.rcWork.top) y = mi.rcWork.top;
    SetWindowPos(h, nullptr, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
}

bool restorePlacement(HWND h, const std::wstring& saved) {
    int x, y, w, hh;
    if (swscanf(saved.c_str(), L"%d,%d,%d,%d", &x, &y, &w, &hh) != 4 || w < 50 || hh < 50) return false;
    RECT r{x, y, x + w, y + hh};
    if (!MonitorFromRect(&r, MONITOR_DEFAULTTONULL)) return false;
    SetWindowPos(h, nullptr, x, y, w, hh, SWP_NOZORDER | SWP_NOACTIVATE);
    return true;
}

std::wstring savePlacement(HWND h) {
    WINDOWPLACEMENT wp{sizeof wp};
    GetWindowPlacement(h, &wp);
    const RECT& r = wp.rcNormalPosition;
    return format(L"%d,%d,%d,%d", r.left, r.top, r.right - r.left, r.bottom - r.top);
}

} // namespace ui

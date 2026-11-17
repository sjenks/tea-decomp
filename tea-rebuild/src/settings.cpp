#include "settings.h"

#include <shlobj.h>

#include <algorithm>

Settings g_settings;

namespace {

const wchar_t* kPattern = L"Pattern";
const wchar_t* kResult = L"Result";
const wchar_t* kSorting = L"Sorting";
const wchar_t* kDictionary = L"Dictionary";
const wchar_t* kAppearance = L"Appearance";
const wchar_t* kSession = L"Session";
const wchar_t* kOpen = L"OpenDictionaries";
const wchar_t* kRecent = L"RecentFiles";
const wchar_t* kHistory = L"PatternHistory";
const wchar_t* kDefLists = L"DefinitionDictionaries";
const wchar_t* kLookup = L"Lookup";
const wchar_t* kWindows = L"Windows";
const wchar_t* kPrinting = L"Printing";

constexpr size_t kMaxRecent = 10;
constexpr size_t kMaxHistory = 20;
constexpr size_t kMaxDefLists = 10;

ui::Ini ini() { return ui::Ini(Settings::settingsPath()); }

void loadList(const ui::Ini& f, const wchar_t* section, std::vector<std::wstring>& out) {
    if (!f.has(section, L"Count")) return;
    out.clear();
    const int n = f.getInt(section, L"Count", 0);
    for (int i = 0; i < n; i++) {
        std::wstring v = f.get(section, L"Item" + std::to_wstring(i));
        if (!v.empty()) out.push_back(v);
    }
}

void saveList(const ui::Ini& f, const wchar_t* section, const std::vector<std::wstring>& list) {
    f.clearSection(section);
    f.setInt(section, L"Count", static_cast<int>(list.size()));
    for (size_t i = 0; i < list.size(); i++) f.set(section, L"Item" + std::to_wstring(i), list[i]);
}

void loadFont(const ui::Ini& f, const wchar_t* key, ui::FontSpec& font) {
    ui::FontSpec v;
    if (ui::fontFromString(f.get(kAppearance, key), v)) font = v;
}

std::wstring lookupKey(size_t i, const wchar_t* field) { return L"Method" + std::to_wstring(i) + field; }

} // namespace

Settings::Settings() {
    // The original's defaults: Courier New for the pattern and results (annotations in italic),
    // Times New Roman for definitions, the lookup word highlighted in red italic.
    patternFont = ui::makeFontSpec(L"Courier New", 16);
    resultFont = ui::makeFontSpec(L"Courier New", 16);
    annotationFont = ui::makeFontSpec(L"Courier New", 16, true);
    printFont = ui::makeFontSpec(L"Courier New", 13);
    definitionFont = ui::makeFontSpec(L"Times New Roman", 16, false, RGB(0, 0, 0), VARIABLE_PITCH | FF_ROMAN);
    highlightFont = ui::makeFontSpec(L"Times New Roman", 16, true, RGB(255, 0, 0), VARIABLE_PITCH | FF_ROMAN);

    // External lookups: the three web searches the original enables by default (Google the default).
    // Its other defaults name old dictionary programs over DDE and messages; those rows start empty here.
    auto add = [&](LookupMethod::Kind k, bool on, const wchar_t* name, const wchar_t* a, const wchar_t* b) {
        LookupMethod m;
        m.kind = k; m.enabled = on; m.name = name; m.a = a; m.b = b;
        lookups.push_back(m);
    };
    add(LookupMethod::Web, true, L"&Google", L"https://www.google.com/search?q=%22{entry}%22", L"");
    add(LookupMethod::Web, true, L"&OneLook", L"https://www.onelook.com/?w={entry}&ls=a", L"");
    add(LookupMethod::Web, true, L"&Wikipedia", L"https://en.wikipedia.org/wiki/{entry}", L"");
    add(LookupMethod::Web, false, L"", L"", L"");
    for (int i = 0; i < 4; i++) add(LookupMethod::Dde, false, L"", L"", L"");
    for (int i = 0; i < 2; i++) add(LookupMethod::Message, false, L"", L"", L"");
    for (int i = 0; i < 2; i++) add(LookupMethod::Program, false, L"", L"", L"");
}

std::wstring Settings::settingsPath() {
    static std::wstring path;
    if (!path.empty()) return path;
    // Tests point TEA_SETTINGS at a file of their own.
    wchar_t env[MAX_PATH];
    if (GetEnvironmentVariableW(L"TEA_SETTINGS", env, MAX_PATH) > 0) return path = env;
    const std::wstring portable = ui::moduleDirectory() + L"\\tea.ini";
    if (ui::fileExists(portable)) return path = portable;
    wchar_t appData[MAX_PATH];
    if (SUCCEEDED(SHGetFolderPathW(nullptr, CSIDL_APPDATA, nullptr, 0, appData))) {
        path = std::wstring(appData) + L"\\TEA Rebuild\\tea.ini";
    } else {
        path = portable;
    }
    return path;
}

void Settings::load() {
    const ui::Ini f = ini();
    // Pattern
    at = f.get(kPattern, L"ExpansionAt", at);
    hash = f.get(kPattern, L"ExpansionHash", hash);
    exclusive = f.getInt(kPattern, L"VariablesExclusive", exclusive) != 0;
    ignoreUnused = f.getInt(kPattern, L"IgnoreUnusedPunctuation", ignoreUnused) != 0;
    // Result
    showAnnotations = f.getInt(kResult, L"ShowAnnotations", showAnnotations) != 0;
    showBalances = f.getInt(kResult, L"ShowBalances", showBalances) != 0;
    for (int i = 0; i < 4; i++) show[i] = f.getInt(kResult, L"Show" + std::to_wstring(i), show[i]) != 0;
    doubleClick = f.getInt(kResult, L"DoubleClick", doubleClick);
    // Sorting
    sortAlphabetically = f.getInt(kSorting, L"Alphabetical", sortAlphabetically) != 0;
    sortAscending = f.getInt(kSorting, L"Ascending", sortAscending) != 0;
    groupByLength = f.getInt(kSorting, L"GroupByLength", groupByLength) != 0;
    lengthOrder = std::max(-1, std::min(1, f.getInt(kSorting, L"LengthOrder", lengthOrder)));
    // Dictionary
    multiMode = std::max(0, std::min(2, f.getInt(kDictionary, L"MultipleDictionaries", multiMode)));
    loadList(f, kDefLists, definitionLists);
    // Appearance
    loadFont(f, L"FontPattern", patternFont);
    loadFont(f, L"FontOutput", resultFont);
    loadFont(f, L"FontOutputAnnotation", annotationFont);
    loadFont(f, L"FontPrinting", printFont);
    loadFont(f, L"DefinitionDefaultFont", definitionFont);
    loadFont(f, L"DefinitionHighlightFont", highlightFont);
    definitionBackground = static_cast<COLORREF>(f.getInt(kAppearance, L"DefinitionBackgroundColor", static_cast<int>(definitionBackground)));
    // Session
    mainPlacement = f.get(kSession, L"MainWindow");
    maximized = f.getInt(kSession, L"Maximized", 0) != 0;
    topMost = f.getInt(kSession, L"TopMost", 0) != 0;
    orientation = f.getInt(kSession, L"PaneOrientation", 0) != 0 ? 1 : 0;
    shortest = std::max(1, std::min(100, f.getInt(kSession, L"Shortest", 1)));
    longest = std::max(1, std::min(100, f.getInt(kSession, L"Longest", 100)));
    fullText = f.getInt(kSession, L"FullTextSearch", 0) != 0;
    openFolder = f.get(kSession, L"OpenFolder");
    loadList(f, kOpen, openDictionaries);
    loadList(f, kRecent, recentFiles);
    loadList(f, kHistory, patternHistory);
    // Startup windows
    showQuickReference = f.getInt(kWindows, L"QuickReference", showQuickReference) != 0;
    showTips = f.getInt(kWindows, L"StartupTips", showTips) != 0;
    nextTip = f.getInt(kWindows, L"NextTip", 0);
    quickReferencePlacement = f.get(kWindows, L"QuickReferencePosition");
    tipsPlacement = f.get(kWindows, L"StartupTipsPosition");
    definitionPlacement = f.get(kWindows, L"DefinitionPosition");
    // Lookup
    if (f.has(kLookup, L"Default")) {
        defaultLookup = f.getInt(kLookup, L"Default", 0);
        for (size_t i = 0; i < lookups.size(); i++) {
            LookupMethod& m = lookups[i];
            m.enabled = f.getInt(kLookup, lookupKey(i, L"Enabled"), 0) != 0;
            m.name = f.get(kLookup, lookupKey(i, L"Name"));
            m.a = f.get(kLookup, lookupKey(i, L"A"));
            m.b = f.get(kLookup, lookupKey(i, L"B"));
            m.encoding = f.getInt(kLookup, lookupKey(i, L"Encoding"), 0);
        }
        lookupTestWord = f.get(kLookup, L"TestWord", lookupTestWord);
    }
    if (defaultLookup < 0 || defaultLookup >= static_cast<int>(lookups.size())) defaultLookup = 0;
    // Printing
    margins.left = f.getInt(kPrinting, L"LeftMargin", margins.left);
    margins.right = f.getInt(kPrinting, L"RightMargin", margins.right);
    margins.top = f.getInt(kPrinting, L"TopMargin", margins.top);
    margins.bottom = f.getInt(kPrinting, L"BottomMargin", margins.bottom);
    printerName = f.get(kPrinting, L"Printer");
}

void Settings::saveSession() const {
    const ui::Ini f = ini();
    f.set(kSession, L"MainWindow", mainPlacement);
    f.setInt(kSession, L"Maximized", maximized);
    f.setInt(kSession, L"TopMost", topMost);
    f.setInt(kSession, L"PaneOrientation", orientation);
    f.setInt(kSession, L"Shortest", shortest);
    f.setInt(kSession, L"Longest", longest);
    f.setInt(kSession, L"FullTextSearch", fullText);
    f.set(kSession, L"OpenFolder", openFolder);
    saveList(f, kOpen, openDictionaries);
    saveList(f, kRecent, recentFiles);
    saveList(f, kHistory, patternHistory);
    saveStartupWindows();
    f.setInt(kPrinting, L"LeftMargin", margins.left);
    f.setInt(kPrinting, L"RightMargin", margins.right);
    f.setInt(kPrinting, L"TopMargin", margins.top);
    f.setInt(kPrinting, L"BottomMargin", margins.bottom);
    f.set(kPrinting, L"Printer", printerName);
}

void Settings::saveStartupWindows() const {
    const ui::Ini f = ini();
    f.setInt(kWindows, L"QuickReference", showQuickReference);
    f.setInt(kWindows, L"StartupTips", showTips);
    f.setInt(kWindows, L"NextTip", nextTip);
    f.set(kWindows, L"QuickReferencePosition", quickReferencePlacement);
    f.set(kWindows, L"StartupTipsPosition", tipsPlacement);
    f.set(kWindows, L"DefinitionPosition", definitionPlacement);
}

void Settings::saveTab(int tab) const {
    const ui::Ini f = ini();
    switch (tab) {
    case 0:
        f.set(kPattern, L"ExpansionAt", at);
        f.set(kPattern, L"ExpansionHash", hash);
        f.setInt(kPattern, L"VariablesExclusive", exclusive);
        f.setInt(kPattern, L"IgnoreUnusedPunctuation", ignoreUnused);
        break;
    case 1:
        f.setInt(kResult, L"ShowAnnotations", showAnnotations);
        f.setInt(kResult, L"ShowBalances", showBalances);
        for (int i = 0; i < 4; i++) f.setInt(kResult, L"Show" + std::to_wstring(i), show[i]);
        f.setInt(kResult, L"DoubleClick", doubleClick);
        break;
    case 2:
        f.setInt(kSorting, L"Alphabetical", sortAlphabetically);
        f.setInt(kSorting, L"Ascending", sortAscending);
        f.setInt(kSorting, L"GroupByLength", groupByLength);
        f.setInt(kSorting, L"LengthOrder", lengthOrder);
        break;
    case 3:
        f.setInt(kDictionary, L"MultipleDictionaries", multiMode);
        saveList(f, kDefLists, definitionLists);
        break;
    case 4:
        f.set(kAppearance, L"FontPattern", ui::fontToString(patternFont));
        f.set(kAppearance, L"FontOutput", ui::fontToString(resultFont));
        f.set(kAppearance, L"FontOutputAnnotation", ui::fontToString(annotationFont));
        f.set(kAppearance, L"FontPrinting", ui::fontToString(printFont));
        f.set(kAppearance, L"DefinitionDefaultFont", ui::fontToString(definitionFont));
        f.set(kAppearance, L"DefinitionHighlightFont", ui::fontToString(highlightFont));
        f.setInt(kAppearance, L"DefinitionBackgroundColor", static_cast<int>(definitionBackground));
        break;
    }
}

void Settings::saveLookups() const {
    const ui::Ini f = ini();
    f.setInt(kLookup, L"Default", defaultLookup);
    f.set(kLookup, L"TestWord", lookupTestWord);
    for (size_t i = 0; i < lookups.size(); i++) {
        const LookupMethod& m = lookups[i];
        f.setInt(kLookup, lookupKey(i, L"Enabled"), m.enabled);
        f.set(kLookup, lookupKey(i, L"Name"), m.name);
        f.set(kLookup, lookupKey(i, L"A"), m.a);
        f.set(kLookup, lookupKey(i, L"B"), m.b);
        f.setInt(kLookup, lookupKey(i, L"Encoding"), m.encoding);
    }
}

namespace {
bool samePath(const std::wstring& a, const std::wstring& b) { return CompareStringOrdinal(a.c_str(), -1, b.c_str(), -1, TRUE) == CSTR_EQUAL; }
}

void Settings::addRecent(const std::wstring& path) {
    recentFiles.erase(std::remove_if(recentFiles.begin(), recentFiles.end(), [&](const std::wstring& p) { return samePath(p, path); }), recentFiles.end());
    recentFiles.insert(recentFiles.begin(), path);
    if (recentFiles.size() > kMaxRecent) recentFiles.resize(kMaxRecent);
}

void Settings::addPattern(const std::wstring& pattern) {
    if (pattern.empty()) return;
    patternHistory.erase(std::remove(patternHistory.begin(), patternHistory.end(), pattern), patternHistory.end());
    patternHistory.insert(patternHistory.begin(), pattern);
    if (patternHistory.size() > kMaxHistory) patternHistory.resize(kMaxHistory);
}

std::vector<std::wstring> Settings::definitionDictionaries() const {
    std::vector<std::wstring> out;
    if (definitionLists.empty()) return out;
    const std::wstring& s = definitionLists.front();
    size_t start = 0;
    while (start < s.size()) {
        size_t end = s.find(L';', start);
        if (end == std::wstring::npos) end = s.size();
        if (end > start) out.push_back(s.substr(start, end - start));
        start = end + 1;
    }
    return out;
}

// Program settings and where they are kept.
//
// The original keeps its settings in the registry under its own key. This program uses an INI file
// instead and never touches the original's key: the file named by the TEA_SETTINGS environment
// variable if set (the tests use this), else tea.ini next to tea.exe if that file exists (portable
// use), otherwise %APPDATA%\TEA Rebuild\tea.ini.
//
// As in the original, the Options dialog changes the settings for the current session only; its
// "Save as defaults" button stores the settings on the visible tab. Window positions, open
// dictionaries, recent files and the pattern history are stored automatically on exit.
#pragma once
#include <string>
#include <vector>

#include "util.h"

struct LookupMethod {
    enum Kind { Web, Dde, Message, Program };
    Kind kind = Web;
    bool enabled = false;
    std::wstring name;     // menu caption, & marks the access key
    std::wstring a, b;     // web: address; DDE: service, topic; message: window, command; program: path
    int encoding = 0;      // program only: 0 = as typed, 1 = hex
};

struct Settings {
    // Pattern tab
    std::wstring at = L"[aeiou]";
    std::wstring hash = L"[^aeiou]";
    bool exclusive = true;
    bool ignoreUnused = true;
    // Result tab
    bool showAnnotations = true;
    bool showBalances = true;
    bool show[4] = {true, true, true, true};   // lower case only, some upper case, punctuation, phrases
    int doubleClick = 0;                       // 0 = Lookup, 1 = External lookup
    // Sorting tab
    bool sortAlphabetically = false;
    bool sortAscending = true;
    bool groupByLength = true;
    int lengthOrder = 0;                       // 1 = ascending, 0 = smart, -1 = descending
    // Dictionary tab
    int multiMode = 0;                         // 0 = suppress duplicates, 1 = independent, 2 = active only
    std::vector<std::wstring> definitionLists; // most recent first; each is ';'-separated full paths
    // Appearance tab
    ui::FontSpec patternFont, resultFont, annotationFont, printFont, definitionFont, highlightFont;
    COLORREF definitionBackground = RGB(255, 255, 255);

    // Main window and session state
    std::wstring mainPlacement;
    bool maximized = false;
    bool topMost = false;
    int orientation = 0;                       // 0 = lists one above the other, 1 = side by side
    std::vector<std::wstring> openDictionaries;
    std::vector<std::wstring> recentFiles;     // File menu 1..0
    std::vector<std::wstring> patternHistory;
    std::wstring openFolder;                   // last folder used by File|Open
    int shortest = 1, longest = 100;
    bool fullText = false;
    bool showQuickReference = true;
    bool showTips = true;
    int nextTip = 0;
    std::wstring quickReferencePlacement, tipsPlacement, definitionPlacement;

    // External lookup
    std::vector<LookupMethod> lookups;         // 4 web, 4 DDE, 2 message, 2 program, in that order
    int defaultLookup = 0;                     // index into lookups
    std::wstring lookupTestWord = L"example";

    // Printing
    RECT margins{1000, 1000, 1000, 1000};      // thousandths of an inch
    std::wstring printerName;

    Settings();

    static std::wstring settingsPath();
    void load();
    void saveSession() const;                  // window state, dictionaries, history
    // Save-as-defaults for one Options tab: 0 Pattern, 1 Result, 2 Sorting, 3 Dictionary, 4 Appearance.
    void saveTab(int tab) const;
    void saveLookups() const;
    void saveStartupWindows() const;
    void addRecent(const std::wstring& path);
    void addPattern(const std::wstring& pattern);
    std::vector<std::wstring> definitionDictionaries() const;   // current list as paths
};

extern Settings g_settings;

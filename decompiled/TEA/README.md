# TEA.exe — main GUI program (OWL)

SHA-256 `d83da2a8dc455b244bf6914112374c0ebdfddfb0d64371dd33a3238dde9c8136`

| | |
|---|---|
| Functions decompiled | 4489 (+4 that Ghidra could not decompile, listed below) |
| Application functions (`src/`) | 1385, of which 639 have a recovered name (46.1%) |
| Runtime / library functions (`lib/`) | 3104 |
| **Compiles** | **275 files, 0 errors** — 275 object files produced |
| Mechanical repairs needed for C++ | 360 in 72 files |
| Links into a program | no — 1645 symbols undefined (e.g. `DAT_00513d58`, `DAT_0051aeb4`, `DefinitionRichEdit::__entries`) |
| Globals declared in `decomp.h` | 1569 |
| Classes recovered from RTTI | 356 (83 application classes) |
| OWL response tables (message maps) | 53, 48 tied to their class |
| Code section covered by functions | 89.2% of 954368 bytes (the remainder is RTTI/exception tables and padding stored in the code section, plus any code never referenced) |
| Functions the default analysis missed, recovered here | 150 from RTTI/vtable/response tables, 22 from the prologue scan |
| Signatures committed in Ghidra | 4118; 174 recovered as `void` were given a 4-byte result because a caller uses it |
| Library code starts at | 0x00486aa8 |

## Repairs made so the pseudocode is valid C++

Each was applied at a location the compiler reported, in a fixed way; see ../README.md.

| repair | count |
|---|---|
| explicit pointer cast added — `(T *)expr` | 286 |
| call through a data-typed pointer — `((code *)p)(…)` | 50 |
| value assigned to an array-typed local — `GH_SET(…)` | 11 |
| cast to an array type removed | 10 |
| write through a `const` pointer — `GH_WRITABLE(…)` | 2 |
| call whose declared result is `void` but whose value is used — `((code *)f)(…)` | 1 |

## Name sources

| source tag | functions |
|---|---|
| unnamed | 2877 |
| rtti:vtable | 882 |
| owl:response-table | 325 |
| rtti:dtor | 302 |
| analysis (matched TEACON.exe) | 26 |
| analysis (usage pattern) (matched TEACON.exe) | 13 |
| notes+analysis | 9 |
| notes+analysis (matched TEACON.exe) | 8 |
| notes | 6 |
| notes (matched TEACON.exe) | 6 |
| analysis (position-matched TEACON.exe) | 5 |
| analysis | 5 |
| analysis (usage pattern) (position-matched TEACON.exe) | 5 |
| analysis (matched TEACON.exe by position and size) | 4 |
| notes+analysis (matched TEACON.exe by position and size) | 3 |
| analysis (usage pattern) | 3 |
| notes (inferred) (position-matched TEACON.exe) | 2 |
| notes (position-matched TEACON.exe) | 2 |
| analysis (usage pattern, less certain) (matched TEACON.exe) | 2 |
| analysis (inferred) | 1 |
| notes (structure checked) (position-matched TEACON.exe) | 1 |
| notes+analysis (position-matched TEACON.exe) | 1 |
| analysis (usage pattern, less certain) (position-matched TEACON.exe) | 1 |

## Application modules (`src/`)

| file | functions | named | address range |
|---|---|---|---|
| [src/TEADictionaryPropertiesWindows.cpp](src/TEADictionaryPropertiesWindows.cpp) | 18 | 11 | 0x00401000 – 0x00402f68 |
| [src/PrintoutFeeder.cpp](src/PrintoutFeeder.cpp) | 6 | 3 | 0x00402f80 – 0x00404870 |
| [src/TEAPrintout.cpp](src/TEAPrintout.cpp) | 16 | 9 | 0x004030f4 – 0x004044dc |
| [src/PrintPreviewPrintout.cpp](src/PrintPreviewPrintout.cpp) | 1 | 1 | 0x00404548 – 0x00404548 |
| [src/TEAPropertiesViewWindows.cpp](src/TEAPropertiesViewWindows.cpp) | 17 | 11 | 0x00404f80 – 0x004075e4 |
| [src/TSDictionaryList.cpp](src/TSDictionaryList.cpp) | 63 | 18 | 0x004076a8 – 0x0040c800 |
| [src/TSDictionaryDefinitionRetriever.cpp](src/TSDictionaryDefinitionRetriever.cpp) | 11 | 3 | 0x0040c84c – 0x0040e240 |
| [src/TSDictionaryDefinitionSearchIndexed.cpp](src/TSDictionaryDefinitionSearchIndexed.cpp) | 20 | 7 | 0x0040e5e0 – 0x00410750 |
| [src/TSDictionaryDefinitionSearchSequential.cpp](src/TSDictionaryDefinitionSearchSequential.cpp) | 5 | 3 | 0x00410788 – 0x00410da0 |
| [src/Definition.cpp](src/Definition.cpp) | 1 | 1 | 0x00410f40 – 0x00410f40 |
| [src/MatchEngine.cpp](src/MatchEngine.cpp) | 38 | 34 | 0x00411264 – 0x00460050 |
| [src/InputEngine.cpp](src/InputEngine.cpp) | 16 | 9 | 0x00411680 – 0x00412cf0 |
| [src/FileHistory.cpp](src/FileHistory.cpp) | 1 | 1 | 0x004131f8 – 0x004131f8 |
| [src/IntroductionViewWindows.cpp](src/IntroductionViewWindows.cpp) | 8 | 6 | 0x00413260 – 0x00413990 |
| [src/PropertiesViewWindows.cpp](src/PropertiesViewWindows.cpp) | 75 | 49 | 0x00413c7c – 0x004178ac |
| [src/PVWBrush.cpp](src/PVWBrush.cpp) | 1 | 1 | 0x0041794c – 0x0041794c |
| [src/PVWPushButton.cpp](src/PVWPushButton.cpp) | 6 | 5 | 0x004179a8 – 0x00417d50 |
| [src/PVWRadioButton.cpp](src/PVWRadioButton.cpp) | 9 | 8 | 0x00417dec – 0x004182b4 |
| [src/PVWCheckBox.cpp](src/PVWCheckBox.cpp) | 5 | 4 | 0x00418350 – 0x004186c0 |
| [src/PVWColourButton.cpp](src/PVWColourButton.cpp) | 10 | 8 | 0x0041875c – 0x00418e14 |
| [src/PVWFontButton.cpp](src/PVWFontButton.cpp) | 10 | 8 | 0x004190f0 – 0x00419874 |
| [src/PVWRichEdit.cpp](src/PVWRichEdit.cpp) | 18 | 11 | 0x00419bb8 – 0x0041ae3c |
| [src/PVWEdit.cpp](src/PVWEdit.cpp) | 14 | 6 | 0x0041aef0 – 0x0041b600 |
| [src/PVWStatic.cpp](src/PVWStatic.cpp) | 6 | 3 | 0x0041b638 – 0x0041bad8 |
| [src/PVWUpDown.cpp](src/PVWUpDown.cpp) | 5 | 4 | 0x0041bafc – 0x0041bdf0 |
| [src/PVWEnumeration.cpp](src/PVWEnumeration.cpp) | 6 | 4 | 0x0041be30 – 0x0041c1e4 |
| [src/PVWCombo.cpp](src/PVWCombo.cpp) | 11 | 4 | 0x0041c210 – 0x0041ca1c |
| [src/PVWURL.cpp](src/PVWURL.cpp) | 14 | 11 | 0x0041d510 – 0x0041e888 |
| [src/PVWFontMaintainer.cpp](src/PVWFontMaintainer.cpp) | 4 | 1 | 0x0041e8d8 – 0x0041ea74 |
| [src/PVWTabs.cpp](src/PVWTabs.cpp) | 5 | 4 | 0x0041ea80 – 0x0041ee00 |
| [src/PVWPathListBox.cpp](src/PVWPathListBox.cpp) | 10 | 4 | 0x0041ee74 – 0x0041fedc |
| [src/PVWPathList.cpp](src/PVWPathList.cpp) | 78 | 55 | 0x00420274 – 0x004258e8 |
| [src/LookupConfiguration.cpp](src/LookupConfiguration.cpp) | 4 | 3 | 0x00425984 – 0x004263ec |
| [src/PrintPreviewWindow.cpp](src/PrintPreviewWindow.cpp) | 25 | 21 | 0x00426498 – 0x004283a8 |
| [src/MyScroller.cpp](src/MyScroller.cpp) | 26 | 21 | 0x004283f4 – 0x0044fb08 |
| [src/MatchListLabelWindows.cpp](src/MatchListLabelWindows.cpp) | 4 | 1 | 0x00428eb4 – 0x0042909c |
| [src/MatchListWindows.cpp](src/MatchListWindows.cpp) | 109 | 30 | 0x004292c0 – 0x00431458 |
| [src/Pattern.cpp](src/Pattern.cpp) | 6 | 3 | 0x00434b30 – 0x00434cd0 |
| [src/GridAboutBoxViewWindows.cpp](src/GridAboutBoxViewWindows.cpp) | 20 | 4 | 0x004350d4 – 0x00437fc4 |
| [src/TEAViewProfileWindows.cpp](src/TEAViewProfileWindows.cpp) | 2 | 1 | 0x00439ea0 – 0x0043a064 |
| [src/main.cpp](src/main.cpp) | 2 | 2 | 0x0043b544 – 0x0043b7a8 |
| [src/PrintPreviewWindowTEA.cpp](src/PrintPreviewWindowTEA.cpp) | 6 | 4 | 0x0043bbb4 – 0x0043c330 |
| [src/TEAPrintoutFeeder.cpp](src/TEAPrintoutFeeder.cpp) | 10 | 6 | 0x0043c3a8 – 0x0043c6fc |
| [src/TSDictionarySaveTEADialog.cpp](src/TSDictionarySaveTEADialog.cpp) | 3 | 3 | 0x0043c8a4 – 0x0043ca6c |
| [src/TSDictionarySaveDialog.cpp](src/TSDictionarySaveDialog.cpp) | 31 | 10 | 0x0043cdcc – 0x0043fd98 |
| [src/DictionaryMaintainer.cpp](src/DictionaryMaintainer.cpp) | 16 | 9 | 0x0043fdec – 0x0044e810 |
| [src/OccurrenceListCache.cpp](src/OccurrenceListCache.cpp) | 68 | 2 | 0x0043fe0c – 0x0044d44c |
| [src/Persist.cpp](src/Persist.cpp) | 21 | 4 | 0x0044e83c – 0x0044f260 |
| [src/TEAProgressBar.cpp](src/TEAProgressBar.cpp) | 7 | 3 | 0x0044fc80 – 0x00450940 |
| [src/SearchModeButton.cpp](src/SearchModeButton.cpp) | 8 | 7 | 0x00450a78 – 0x0045f0c4 |
| [src/TEAViewWindows.cpp](src/TEAViewWindows.cpp) | 110 | 38 | 0x00450af4 – 0x0045e8c4 |
| [src/VariableValues.cpp](src/VariableValues.cpp) | 64 | 37 | 0x004601e8 – 0x00469f48 |
| [src/LookupPropertiesViewWindows.cpp](src/LookupPropertiesViewWindows.cpp) | 16 | 10 | 0x00460e4c – 0x00462d9c |
| [src/GridViewWindows.cpp](src/GridViewWindows.cpp) | 36 | 1 | 0x00463058 – 0x004671dc |
| [src/TEAQuickReferenceViewWindows.cpp](src/TEAQuickReferenceViewWindows.cpp) | 6 | 4 | 0x00467594 – 0x00467ae8 |
| [src/TabbyPropertiesViewWindows.cpp](src/TabbyPropertiesViewWindows.cpp) | 15 | 12 | 0x00467d40 – 0x00468548 |
| [src/DefinitionRichEdit.cpp](src/DefinitionRichEdit.cpp) | 5 | 4 | 0x0046a010 – 0x0046a360 |
| [src/DefinitionViewWindows.cpp](src/DefinitionViewWindows.cpp) | 42 | 16 | 0x0046a3c4 – 0x004723b0 |
| [src/DefinitionViewFrame.cpp](src/DefinitionViewFrame.cpp) | 8 | 4 | 0x00472edc – 0x00473650 |
| [src/GripBar.cpp](src/GripBar.cpp) | 3 | 2 | 0x00473ba8 – 0x00473df0 |
| [src/TEAFrameWindow.cpp](src/TEAFrameWindow.cpp) | 31 | 29 | 0x00473f30 – 0x00474e1c |
| [src/TEAAppWindows.cpp](src/TEAAppWindows.cpp) | 8 | 5 | 0x00474ef0 – 0x00475a74 |
| [src/ExternalLookupViewWindows.cpp](src/ExternalLookupViewWindows.cpp) | 5 | 4 | 0x00475d20 – 0x004760d8 |
| [src/DictionaryListViewWindows.cpp](src/DictionaryListViewWindows.cpp) | 16 | 13 | 0x004765a0 – 0x00477ca0 |
| [src/MatchEngineSet.cpp](src/MatchEngineSet.cpp) | 28 | 2 | 0x00477d64 – 0x0047ab54 |
| [src/TEAStartupTipsViewWindows.cpp](src/TEAStartupTipsViewWindows.cpp) | 63 | 9 | 0x0047ad78 – 0x00481c1c |
| [src/FormattedTextSegment.cpp](src/FormattedTextSegment.cpp) | 2 | 1 | 0x00481ebc – 0x00481f7c |
| [src/FormattedTextParagraph.cpp](src/FormattedTextParagraph.cpp) | 33 | 3 | 0x0048209c – 0x00485a4c |
| [src/Help.cpp](src/Help.cpp) | 2 | 1 | 0x00485b70 – 0x00485bb8 |
| [src/Common.cpp](src/Common.cpp) | 7 | 1 | 0x00485ee0 – 0x004862b0 |
| [src/LicenseViewWindows.cpp](src/LicenseViewWindows.cpp) | 9 | 2 | 0x00486488 – 0x0048698c |

## Application classes (83)

Members, vtables and message maps for every class are in [classes.md](classes.md).

| class | size | bases | vtable slots | message-map entries |
|---|---|---|---|---|
| `Common` | 16 | — | — | — |
| `Definition` | 128 | — | — | — |
| `DefinitionRichEdit` | 264 | PVWRichEdit | 33 | 1 |
| `DefinitionViewFrame` | 384 | OWL::TDecoratedFrame | 16 | — |
| `DefinitionViewWindows` | 696 | PropertiesViewWindows | 51 | 31 |
| `DictionaryListViewWindows` | 2144 | PropertiesViewWindows | 48 | 9 |
| `DictionaryMaintainer` | 4 | — | 5 | — |
| `ExternalLookupViewWindows` | 824 | PropertiesViewWindows | 48 | — |
| `FileHistory` | 168 | — | — | — |
| `FormattedTextParagraph` | 336 | — | — | — |
| `FormattedTextSegment` | 88 | — | — | — |
| `GridAboutBoxViewWindows` | 888 | PropertiesViewWindows | 48 | — |
| `GridViewWindows` | 368 | — | — | — |
| `GripBar` | 257 | OWL::TStatusBar | 28 | — |
| `Help` | 12 | — | — | — |
| `InputEngine` | 18444 | — | — | — |
| `IntroductionViewWindows` | 472 | PropertiesViewWindows | 48 | 4 |
| `LicenseViewWindows` | 616 | PropertiesViewWindows | 48 | — |
| `LookupConfiguration` | 56 | — | — | — |
| `LookupConfiguration::LookupEntry` | 56 | — | — | — |
| `LookupConfiguration::LookupStyleEntries` | 288 | — | — | — |
| `LookupPropertiesViewWindows` | 912 | PropertiesViewWindows | 48 | — |
| `LookupPropertiesViewWindows::DDEControls` | 776 | — | — | — |
| `LookupPropertiesViewWindows::MessageControls` | 776 | — | — | — |
| `LookupPropertiesViewWindows::ProgramControls` | 976 | — | — | — |
| `LookupPropertiesViewWindows::URLControls` | 584 | — | — | — |
| `MatchEngine` | 4432 | — | — | — |
| `MatchEngineSet` | 56 | — | — | — |
| `MatchListLabelWindows` | 208 | OWL::TStatic | 12 | — |
| `MatchListWindows` | 448 | OWL::TControl | 14 | 13 |
| `MatchListWindows::EntryHead` | 12 | — | — | — |
| `MatchListWindows::Selection` | 8 | — | — | — |
| `MatchListWindows::SelectionIterator` | 32 | — | — | — |
| `MyScroller` | 63 | OWL::TScroller | 22 | — |
| `OccurrenceListCache` | 32 | — | — | — |
| `Pattern` | 4104 | — | — | — |
| `Persist` | 8 | — | — | — |
| `PrintoutFeeder` | 4 | — | 7 | — |
| `PrintPreviewPrintout` | 22 | OWL::TPrintout | 10 | — |
| `PrintPreviewWindow` | 400 | OWL::TDecoratedFrame | 22 | 8 |
| `PrintPreviewWindowTEA` | 408 | PrintPreviewWindow | 22 | 3 |
| `PropertiesViewWindows` | 248 | OWL::TDialog | 48 | 22 |
| `PropertiesViewWindows::MoveableControl` | 20 | — | — | — |
| `PVWBrush` | 16 | — | — | — |
| `PVWCheckBox` | 200 | OWL::TCheckBox | 12 | 2 |
| `PVWColourButton` | 196 | OWL::TButton | 12 | 2 |
| `PVWCombo` | 184 | OWL::TComboBox | 36 | 1 |
| `PVWEdit` | 188 | OWL::TEdit | 23 | 3 |
| `PVWEnumeration` | 188 | OWL::TComboBox | 35 | 1 |
| `PVWFontButton` | 288 | OWL::TButton | 12 | 2 |
| `PVWFontMaintainer` | 68 | — | — | — |
| `PVWPathList` | 1472 | — | — | — |
| `PVWPathListBox` | 176 | OWL::TListBox | 32 | 1 |
| `PVWPushButton` | 200 | OWL::TButton | 12 | 2 |
| `PVWRadioButton` | 208 | OWL::TRadioButton | 14 | 3 |
| `PVWRichEdit` | 264 | OWL::TRichEdit | 33 | 3 |
| `PVWStatic` | 180 | OWL::TStatic | 12 | 1 |
| `PVWTabs` | 176 | OWL::TTabControl | 11 | 2 |
| `PVWUpDown` | 196 | OWL::TUpDown | 12 | 1 |
| `PVWURL` | 216 | OWL::TEdit | 26 | 4 |
| `SearchModeButton` | 174 | OWL::TStatic | 13 | — |
| `TabbyPropertiesViewWindows` | 440 | PropertiesViewWindows | 49 | 1 |
| `TEAAppWindows` | 132 | OWL::TApplication | 19 | — |
| `TEADictionaryPropertiesWindows` | 2784 | PropertiesViewWindows | 48 | — |
| `TEAFrameWindow` | 308 | OWL::TDecoratedFrame | 17 | 43 |
| `TEAPrintout` | 248 | PrintPreviewPrintout | 10 | — |
| `TEAPrintout::PageInfo` | 8 | — | — | — |
| `TEAPrintoutFeeder` | 16 | PrintoutFeeder | 6 | — |
| `TEAProgressBar` | 220 | OWL::TButton | 12 | — |
| `TEAPropertiesViewWindows` | 8440 | TabbyPropertiesViewWindows | 49 | — |
| `TEAQuickReferenceViewWindows` | 520 | PropertiesViewWindows | 48 | — |
| `TEAStartupTipsViewWindows` | 872 | PropertiesViewWindows | 48 | — |
| `TEAViewProfileWindows` | 496 | — | — | — |
| `TEAViewWindows` | 3424 | PropertiesViewWindows | 56 | 37 |
| `TEAViewWindows::OutputGroup` | 112 | — | — | — |
| `TSDictionaryDefinitionRetriever` | 32 | — | — | — |
| `TSDictionaryDefinitionSearchIndexed` | 48 | — | — | — |
| `TSDictionaryDefinitionSearchSequential` | 280 | — | — | — |
| `TSDictionaryList` | 40 | — | — | — |
| `TSDictionaryList::Dictionary` | 12200 | — | 11 | — |
| `TSDictionarySaveDialog` | 2024 | PropertiesViewWindows, DictionaryMaintainer | 52 | 1 |
| `TSDictionarySaveTEADialog` | 2032 | TSDictionarySaveDialog | 52 | — |
| `VariableValues` | 16 | — | — | — |

## Functions Ghidra could not decompile

They are declared in `decomp.h` (so calls to them compile) but have no body in the tree.

- `0x488b50` (0x488ae5–0x488ae6, 0x488b50–0x488b5a): Low-level Error: Cannot properly adjust input varnodes
- `0x49b0e8` (0x49b0e8–0x49b0f3): Low-level Error: Cannot properly adjust input varnodes
- `0x4ba5d8` (0x4ba5d8–0x4ba5df): Low-level Error: Cannot properly adjust input varnodes
- `0x4ba6cc` (0x4ba6cc–0x4ba6d6): Low-level Error: Cannot properly adjust input varnodes

Other files: [decomp.h](decomp.h) (every prototype and global), [symbols.tsv](symbols.tsv) (address → name → name in code → file), [resources/](resources/) (menus, dialogs, strings, version info as a compilable `.rc`), `summary.json`, `compile-report.json`, `repairs.json`.

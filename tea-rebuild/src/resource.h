// Resource, control and command identifiers.
//
// Where the original program has an equivalent, the number is the same as in TEA.exe, so that one
// automation script (tests/guitest.js) can drive either program.
#pragma once

// Menus and accelerators
#define IDM_MAIN                100
#define IDM_DICTIONARY_CONTEXT  6640
#define IDM_RESULT_CONTEXT      6660
#define IDM_SEARCH_CONTEXT      12750
#define IDM_DEFINITION_CONTEXT  12930
#define IDA_MAIN                6660
#define IDA_DEFINITION          12930
#define IDI_TEA                 1

// Dialogs
#define IDD_PATTERN             4250
#define IDD_OPTIONS             4310
#define IDD_PROPERTIES          4850
#define IDD_LOOKUP_METHODS      5150
#define IDD_SAVE_TSD            5810
#define IDD_DICTIONARY_LIST     7820
#define IDD_QUICK_REFERENCE     11880
#define IDD_DEFINITION_VIEW     12560
#define IDD_EXTERNAL_LOOKUP     12830
#define IDD_TIPS                13380
#define IDD_ABOUT               4010

// File menu
#define CM_FILE_OPEN            7550
#define CM_FILE_CLOSE           7580
#define CM_SAVE_RESULTS         7480
#define CM_DEMOTE               7600
#define CM_PROMOTE              7590
#define CM_PROPERTIES           7540
#define CM_PRINT                7520
#define CM_PRINT_PREVIEW        7530
#define CM_PAGE_SETUP           3780
#define CM_MRU_FIRST            4840     // 4840..4849
#define CM_EXIT                 24310
// Edit menu
#define CM_CUT                  7620
#define CM_COPY                 7500
#define CM_PASTE                7610
#define CM_SELECT_ALL           7510
#define CM_LOOKUP               7490
#define CM_LOOKUP_NEW           12640
#define CM_EXTERNAL_DEFAULT     12710
#define CM_EXTERNAL_SETUP       5140
#define CM_EXTERNAL_FIRST       15000    // 15000..15011, one per configured method
// Tools menu
#define CM_DICTIONARY_BUILDER   4980
#define CM_WORD_LIST_MERGE      5120
#define CM_OPTIONS              7560
// Window menu
#define CM_TOPMOST              14870
#define CM_TILE_HORIZONTAL      11860
#define CM_TILE_VERTICAL        11870
// Help menu
#define CM_QUICK_REFERENCE      4820
#define CM_STARTUP_TIPS         13390
#define CM_HELP_CONTENTS        3770
#define CM_ABOUT                1770
// Search mode
#define CM_WORD_SEARCH          12760
#define CM_FULL_TEXT_SEARCH     12770
// Definition window
#define CM_PREV_DEFINITION      13900
#define CM_NEXT_DEFINITION      13890
#define CM_PREV_RESULT          12740
#define CM_NEXT_RESULT          12730
#define CM_BACK                 12650
#define CM_FORWARD              12660
#define CM_GOTO_WORD_FIRST      12670    // 12670..12679
// Internal
#define CM_FOCUS_PATTERN        16001
#define CM_SELECT_DICTIONARY    16010    // 16010..16019 (Alt+1..Alt+0)

// Pattern pane controls
#define IDC_PATTERN_GROUP       9000
#define IDC_PATTERN             4270
#define IDC_SEARCH              4280
#define IDC_SHORTEST_LABEL      6680
#define IDC_SHORTEST            4380
#define IDC_SHORTEST_SPIN       4360
#define IDC_LONGEST_LABEL       6690
#define IDC_LONGEST             4370
#define IDC_LONGEST_SPIN        4350
#define IDC_PROGRESS            4420
#define IDC_SEARCH_MENU         12690
#define IDC_LIST_HEADER_FIRST   6590     // + pane index
#define IDC_LIST_FIRST          4260     // + pane index
#define IDC_STATUS              32040

// Common dialog buttons
#define IDC_HELP_BUTTON         1530
#define IDC_SAVE_DEFAULTS       4340

// Options dialog
#define IDC_OPT_TABS            8030
#define IDC_OPT_AT_LABEL        11960
#define IDC_OPT_AT              4320
#define IDC_OPT_HASH_LABEL      11970
#define IDC_OPT_HASH            4330
#define IDC_OPT_EXCLUSIVE       10830
#define IDC_OPT_IGNORE_UNUSED   14880
#define IDC_OPT_ANNOTATIONS     13850
#define IDC_OPT_BALANCES        5780
#define IDC_OPT_FILTER_GROUP    12060
#define IDC_OPT_SHOW_LOWER      12070
#define IDC_OPT_SHOW_UPPER      12071
#define IDC_OPT_SHOW_PUNCT      12072
#define IDC_OPT_SHOW_PHRASES    12073
#define IDC_OPT_DBLCLICK_GROUP  13340
#define IDC_OPT_DBLCLICK_LOOKUP 13350
#define IDC_OPT_DBLCLICK_EXTERN 13360
#define IDC_OPT_SORT_GROUP      14000
#define IDC_OPT_SORT_ALPHA      14010
#define IDC_OPT_SORT_ASCENDING  14020
#define IDC_OPT_LENGTH_GROUP    13970
#define IDC_OPT_GROUP_BY_LENGTH 13980
#define IDC_OPT_LENGTH_ASC      13992
#define IDC_OPT_LENGTH_SMART    13991
#define IDC_OPT_LENGTH_DESC     13990
#define IDC_OPT_MULTI_GROUP     12990
#define IDC_OPT_MULTI_INDEPENDENT 6710
#define IDC_OPT_MULTI_SUPPRESS  6700
#define IDC_OPT_MULTI_ACTIVE    6720
#define IDC_OPT_DEFDICT_GROUP   11430
#define IDC_OPT_DEFDICTS        2270
#define IDC_OPT_DEFDICTS_CHANGE 2260
#define IDC_OPT_MAIN_GROUP      12810
#define IDC_OPT_PATTERN_FONT_L  4810
#define IDC_OPT_PATTERN_FONT    4790
#define IDC_OPT_RESULT_FONT_L   4800
#define IDC_OPT_RESULT_FONT     4780
#define IDC_OPT_ANNOT_FONT_L    12860
#define IDC_OPT_ANNOT_FONT      12850
#define IDC_OPT_PRINT_FONT_L    5710
#define IDC_OPT_PRINT_FONT      5700
#define IDC_OPT_DEF_GROUP       12820
#define IDC_OPT_DEF_BG_L        12620
#define IDC_OPT_DEF_BG          12590
#define IDC_OPT_DEF_FONT_L      12610
#define IDC_OPT_DEF_FONT        12580
#define IDC_OPT_DEF_HIGHLIGHT_L 12630
#define IDC_OPT_DEF_HIGHLIGHT   12600

// Properties dialog
#define IDC_PROP_LOCATION       2270
#define IDC_PROP_DATE           13370
#define IDC_PROP_DESCRIPTION    4400
#define IDC_PROP_ENTRIES        4410
#define IDC_PROP_SHORTEST       4610
#define IDC_PROP_DEFINITIONS    13950
#define IDC_PROP_LONGEST        4620

// Dictionary list dialog
#define IDC_DL_SELECTED         7830
#define IDC_DL_OTHER            7840
#define IDC_DL_FOLDER           7850
#define IDC_DL_BROWSE           7860
#define IDC_DL_PROMOTE          7870
#define IDC_DL_DEMOTE           7880
#define IDC_DL_ADD              7890
#define IDC_DL_REMOVE           7900
#define IDC_DL_PROPERTIES       7910

// Save TSD dialog
#define IDC_SAVE_DESCRIPTION    4400
#define IDC_SAVE_MESSAGE        5890

// Quick reference and tips
#define IDC_QR_SHOW_AT_START    11950
#define IDC_QR_FEATURE_FIRST    11910    // 11910..11919
#define IDC_QR_EXAMPLE_FIRST    11890    // 11890..11899
#define IDC_QR_FINDS_FIRST      11930    // 11930..11939
#define IDC_TIP_NEXT            4510
#define IDC_TIP_MORE            13400
#define IDC_TIP_TEXT            13410

// About box
#define IDC_ABOUT_HOME          29990

// External lookup message box
#define IDC_EXT_MESSAGE         12840
#define IDC_EXT_SETUP           3340

// Lookup methods dialog
#define IDC_LM_TEST_WORD        5590
#define IDC_LM_TEST             5600
// check box, name, then one to three fields, per method row (see lookup.cpp)

// Definition window
#define IDC_DEF_TREE            13860
#define IDC_DEF_TEXT            9230
#define IDC_DEF_RULE            13880

// String table
#define IDS_STATUS_READY        13081
#define IDS_NO_DICTIONARY       6670

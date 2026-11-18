// TEACON.exe — application module "main"
// 23 functions, 0x00401000..0x00411910. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **startupTable;
  
  _DAT_0042a16f = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00416344();
  FUN_004156e0();
  FUN_00416348();
  FUN_0041fd38((undefined4 *)0x0);
  startupTable = &PTR_DAT_0042a114;
  _DAT_0042a173 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0042785c((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  __startup   (71 bytes)   [analysis]
//   C runtime start: records the TLS index, initialises the RTL and calls the program's main through the startup table
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall __startup(void)

{
  undefined **startupTable;
  
  _DAT_0042a16f = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00416344();
  FUN_004156e0();
  FUN_00416348();
  FUN_0041fd38((undefined4 *)0x0);
  startupTable = &PTR_DAT_0042a114;
  _DAT_0042a173 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0042785c((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *info)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00431f88 = __getTlsBlock();
  _DAT_00431f88 = _DAT_00431f88 + 0x1c;
  *info = 0x82727349;
  info[1] = &DAT_00431f74;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  __getTlsBlock   (15 bytes)   [analysis]
//   this thread's TLS block (FS:[0x2c][tls index])
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall __getTlsBlock(void)

{
  int *tlsArray;
  undefined2 in_FS;
  
  tlsArray = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*tlsArray + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  InitRegistryPaths   (85 bytes)   [analysis]
//   static initialiser of g_registryKeyPath and g_appDataSubdir
//   file placement: inferred (precedes first anchor)
void __stdcall InitRegistryPaths(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42a830);
  std::string::string_from_cstr(0x434260,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  std::string::string_from_cstr(0x434270,(uint *)"\\Crossword Man\\TEA Crossword Helper 2.11");
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004011a8  DestroyRegistryPaths   (290 bytes)   [analysis]
//   static destructor of g_registryKeyPath and g_appDataSubdir
//   file placement: inferred (precedes first anchor)
void __stdcall DestroyRegistryPaths(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42a844);
  if (g_appDataSubdirData != 0) {
    if (*(int *)(g_appDataSubdirData + -0xc) != -1) {
      strRep = (int *)(g_appDataSubdirData + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0040123b;
    }
    operator_delete();
    g_appDataSubdirData = 0;
  }
LAB_0040123b:
  if (g_registryKeyPathData != 0) {
    if (*(int *)(g_registryKeyPathData + -0xc) != -1) {
      strRep = (int *)(g_registryKeyPathData + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004012ba;
    }
    operator_delete();
    g_registryKeyPathData = 0;
  }
LAB_004012ba:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004012cc  main   (12873 bytes)   [analysis]
//   console entry: licence check against common.ini, profile and dictionary list from the registry (OpenDictionary%d), options /D /H /A /S /L /N /B /X /U /O /Q, then for each pattern (arguments, or lines of standard input) and each dictionary: compile, walk the length range and print every match
//   written in code as main_
/* WARNING: Removing unreachable block (ram,0x00402c4e) */
/* WARNING: Removing unreachable block (ram,0x004016eb) */
/* WARNING: Removing unreachable block (ram,0x0040139e) */
/* WARNING: Removing unreachable block (ram,0x004013ee) */
/* WARNING: Removing unreachable block (ram,0x0040179d) */
/* WARNING: Removing unreachable block (ram,0x00403144) */
/* WARNING: Removing unreachable block (ram,0x0040133d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffb474 : 0x0040134b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __stdcall main_(int argc,int argv)

{
  bool started;
  undefined4 exitCode;
  int scratch;
  int cmp;
  undefined3 regHigh;
  char outputMode;
  int *intOut;
  undefined4 *sehChainHead;
  uint local_5734 [252];
  undefined1 *unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 unused6;
  undefined4 unused7;
  undefined4 unused8;
  undefined4 unused9;
  undefined4 unused10;
  undefined4 unused11;
  undefined4 unused12;
  undefined4 unused13;
  undefined4 unused14;
  undefined4 unused15;
  uint *pathsData2;
  uint *unused16;
  undefined4 unused17;
  undefined4 unused18;
  undefined4 unused19;
  undefined4 unused20;
  undefined4 unused21;
  undefined1 *unused22;
  uint valueNameBuf [15];
  undefined1 *unused23;
  uint moduleDir [68];
  undefined4 unused24;
  undefined4 unused25;
  undefined1 *unused26;
  undefined1 *unused27;
  int unused28;
  undefined1 *unused29;
  undefined4 unused30;
  byte *unused31;
  byte *unused32;
  byte *strRep;
  undefined1 *unused33;
  undefined4 unused34;
  char *unused35;
  char *unused36;
  int *strRep2;
  undefined1 *unused37;
  undefined4 unused38;
  uint *unused39;
  uint *unused40;
  uint *strRep3;
  undefined1 *unused41;
  undefined4 unused42;
  uint *unused43;
  uint *unused44;
  uint *strRep4;
  undefined1 *unused45;
  undefined4 unused46;
  int unused47;
  int unused48;
  int *strRep5;
  undefined1 *unused49;
  undefined4 unused50;
  undefined1 *unused51;
  undefined1 *unused52;
  int *strRep6;
  undefined1 *unused53;
  undefined4 unused54;
  uint *unused55;
  uint *unused56;
  uint *strRep7;
  undefined1 *unused57;
  undefined4 unused58;
  uint *unused59;
  uint *unused60;
  uint *strRep8;
  undefined1 *unused61;
  undefined4 unused62;
  uint *unused63;
  uint *unused64;
  uint *strRep9;
  int unused65;
  undefined1 *unused66;
  undefined4 unused67;
  byte *unused68;
  byte *unused69;
  byte *strRep10;
  undefined1 *unused70;
  undefined4 unused71;
  char *unused72;
  char *unused73;
  int *strRep11;
  undefined1 *unused74;
  undefined4 unused75;
  uint *unused76;
  uint *unused77;
  uint *strRep12;
  undefined1 *unused78;
  undefined4 unused79;
  uint *unused80;
  uint *unused81;
  uint *strRep13;
  undefined1 *unused82;
  undefined4 unused83;
  int unused84;
  int unused85;
  int *strRep14;
  undefined1 *unused86;
  undefined4 unused87;
  undefined1 *unused88;
  undefined1 *unused89;
  int *strRep15;
  undefined1 *unused90;
  undefined4 unused91;
  uint *unused92;
  uint *unused93;
  uint *strRep16;
  undefined1 *unused94;
  undefined4 unused95;
  uint *unused96;
  uint *unused97;
  uint *strRep17;
  undefined1 *unused98;
  undefined4 unused99;
  int unused100;
  int unused101;
  int *strRep18;
  char *annotationLen;
  uint wordLen;
  uint *annotationArg;
  uint *annotation;
  char *wordLetters;
  undefined4 unused102;
  int lastLength;
  int length2;
  char status;
  int dictIndex;
  undefined1 *unused103;
  undefined4 unused104;
  int unused105;
  int unused106;
  int *strRep19;
  uint *strRep20;
  char firstChar;
  int lineLen;
  uint unused107;
  undefined1 *unused108;
  undefined1 *unused109;
  undefined4 unused110;
  int unused111;
  undefined1 *unused112;
  undefined4 unused113;
  byte *unused114;
  byte *unused115;
  byte *strRep21;
  undefined1 *unused116;
  undefined4 unused117;
  char *unused118;
  char *unused119;
  int *strRep22;
  undefined1 *unused120;
  undefined4 unused121;
  uint *unused122;
  uint *unused123;
  uint *strRep23;
  undefined1 *unused124;
  undefined4 unused125;
  uint *unused126;
  uint *unused127;
  uint *strRep24;
  undefined1 *unused128;
  undefined4 unused129;
  int unused130;
  int unused131;
  int *strRep25;
  undefined1 *unused132;
  undefined4 unused133;
  undefined1 *unused134;
  undefined1 *unused135;
  uint patternIndex;
  undefined4 hadError;
  undefined1 *unused136;
  undefined1 *unused137;
  undefined4 unused138;
  int unused139;
  undefined1 *unused140;
  undefined4 unused141;
  byte *unused142;
  byte *unused143;
  byte *strRep26;
  undefined1 *unused144;
  undefined4 unused145;
  char *unused146;
  char *unused147;
  int *strRep27;
  undefined1 *unused148;
  undefined4 unused149;
  uint *unused150;
  uint *unused151;
  uint *strRep28;
  undefined1 *unused152;
  undefined4 unused153;
  uint *unused154;
  uint *unused155;
  uint *strRep29;
  undefined1 *unused156;
  undefined4 unused157;
  int unused158;
  int unused159;
  int *strRep30;
  int firstMissingPath;
  undefined4 *dictList;
  undefined1 *unused160;
  undefined4 unused161;
  int unused162;
  int unused163;
  int *strRep31;
  undefined4 *dest;
  undefined4 *src;
  uint unused164;
  int unused165;
  int *newRep;
  int *newData;
  uint len;
  int *strRep32;
  int unused166;
  undefined4 local_4d5c;
  undefined4 unused167;
  int unused168;
  int patternArg;
  int unused169;
  undefined1 *unused170;
  undefined4 unused171;
  byte *unused172;
  byte *unused173;
  byte *strRep33;
  undefined1 *unused174;
  undefined4 unused175;
  char *unused176;
  char *unused177;
  int *strRep34;
  undefined1 *unused178;
  undefined4 unused179;
  uint *unused180;
  uint *unused181;
  uint *strRep35;
  undefined1 *unused182;
  undefined4 unused183;
  uint *unused184;
  uint *unused185;
  uint *strRep36;
  undefined1 *unused186;
  undefined4 unused187;
  int unused188;
  int unused189;
  char *outputArg;
  char *ignoredArg;
  char *variablesArg;
  char *balancesArg;
  char *annotationsArg;
  char *longestArg;
  char *shortestArg;
  int argIndex;
  int quiet;
  int longest2;
  int shortest2;
  uint *unused190;
  uint *unused191;
  uint unused192;
  undefined1 *unused193;
  int *newRep2;
  uint *unused194;
  uint len2;
  uint *strRep37;
  undefined1 *unused195;
  uint *unused196;
  undefined4 unused197;
  undefined1 *unused198;
  undefined4 unused199;
  int unused200;
  int unused201;
  int *strRep38;
  undefined1 *unused202;
  undefined4 unused203;
  int unused204;
  int unused205;
  int *strRep39;
  undefined1 *unused206;
  undefined4 unused207;
  undefined1 *unused208;
  undefined1 *unused209;
  int *strRep40;
  undefined1 *unused210;
  undefined4 unused211;
  undefined1 *unused212;
  undefined1 *unused213;
  int *strRep41;
  undefined1 *unused214;
  undefined4 unused215;
  int unused216;
  int unused217;
  int *strRep42;
  undefined1 *unused218;
  undefined1 *unused219;
  undefined4 unused220;
  int dictNumber;
  undefined1 unused221;
  int longestSetting;
  int shortestSetting;
  undefined1 *unused222;
  undefined1 *unused223;
  undefined4 unused224;
  uint *lastSep;
  DWORD moduleLen;
  int unused225;
  undefined1 *unused226;
  undefined4 unused227;
  byte *unused228;
  byte *unused229;
  byte *strRep43;
  undefined1 *unused230;
  undefined4 unused231;
  char *unused232;
  char *unused233;
  int *strRep44;
  undefined1 *unused234;
  undefined1 *unused235;
  undefined4 unused236;
  undefined1 *unused237;
  undefined1 *unused238;
  undefined4 unused239;
  undefined4 unused240;
  undefined4 unused241;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 filtered [8];
  int filteredData;
  undefined1 word_ [8];
  uint *wordData;
  undefined4 matchSet [14];
  undefined4 inputEngine [258];
  uint inputEngineRawWord [2940];
  undefined4 uStackY_1914;
  undefined1 *out;
  undefined1 expanded [8];
  int expandedData;
  undefined1 query [8];
  uint *queryData;
  int slot;
  undefined1 patternStr [8];
  int patternStrData;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueText [8];
  undefined1 *valueTextData;
  char persist [8];
  undefined1 common [16];
  undefined1 balanceText [8];
  undefined1 *balanceTextData;
  undefined1 balancePrefix [8];
  int balancePrefixData;
  undefined1 dictionaryPaths [8];
  uint *dictionaryPathsData;
  undefined1 openDictionaries [8];
  uint *openDictionariesData;
  undefined1 profile [16];
  undefined1 profileExpansionHash [16];
  int ignoreUnusedPunctuation;
  int showAnnotations;
  int showBalances;
  undefined1 key [8];
  char *keyData;
  undefined1 owner [8];
  byte *ownerData;
  undefined4 patterns2;
  int patternsBegin;
  int patternsEnd;
  int patternsCapacityEnd;
  int probe;
  
  scratch = 5;
  do {
    probe = scratch;
    scratch = probe + -1;
  } while (probe + -1 != 0);
  __InitExceptBlockLDTC(0x42ae08);
  patternsBegin = 0;
  patternsEnd = 0;
  patternsCapacityEnd = 0;
  unused241 = 0x40;
  unused240 = 1;
  patterns2 = 0x40;
  unused239 = 0;
  unused238 = &g_emptyStringData;
  unused237 = owner;
  ownerData = &g_emptyStringData;
  unused27 = &g_emptyStringData;
  unused236 = 0;
  unused235 = &g_emptyStringData;
  unused234 = key;
  keyData = &g_emptyStringData;
  unused26 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x5c;
  GetCommonIniPath((int)common,0x434270);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x68;
  exitCode = Common::ReadLicense((int)common,(int)owner,(int)key);
  if (((char)exitCode == '\x02') && (scratch = CheckLicenseKey2(ownerData,keyData), scratch != 0)) {
    ehDtorCount = ehDtorCount + -2;
    Common::_dtor((int)common,2);
    ehContext = 0x20;
    moduleLen = GetModuleFileNameA((HMODULE)0x0,(LPSTR)moduleDir,0x104);
    ehContext = 0x20;
    *(undefined1 *)((int)moduleDir + moduleLen) = 0;
    lastSep = thunk_strrchr(moduleDir,'\\');
    if (lastSep == (uint *)0x0) {
      GH_PIECE(moduleDir[0], 0, undefined1) = 0;
    }
    else {
      *(undefined1 *)((int)lastSep + 1) = 0;
    }
    ehContext = 0x98;
    TEAViewProfileWindows::TEAViewProfileWindows((int)profile,0x434260);
    unused224 = 0;
    unused223 = &g_emptyStringData;
    unused222 = openDictionaries;
    openDictionariesData = (uint *)&g_emptyStringData;
    unused23 = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 5;
    shortestSetting = 1;
    longestSetting = 100;
    unused221 = 0;
    ehContext = 0xbc;
    Persist::Persist(persist,0x434260,'\0','\0');
    ehDtorCount = ehDtorCount + 1;
    dictNumber = 0;
    do {
      ehContext = 200;
      sprintf((undefined1 *)valueNameBuf,(byte *)"OpenDictionary%d");
      unused220 = 0;
      unused219 = &g_emptyStringData;
      valueTextData = &g_emptyStringData;
      unused22 = &g_emptyStringData;
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0xf8;
      unused218 = valueText;
      out = valueText;
      std::string::string_from_cstr((int)valueName3,valueNameBuf);
      ehDtorCount = ehDtorCount + 1;
      Persist::QueryString((int)persist,(int)valueName3,(int)out);
      ehDtorCount = ehDtorCount + -1;
      if (str3 != 0) {
        if (*(int *)(str3 + -0xc) != -1) {
          strRep42 = (int *)(str3 + -0xc);
          if (strRep42 == &g_nullStringRep) {
            scratch = 1;
          }
          else if (strRep42 == &g_nullStringRep) {
            scratch = 1;
          }
          else {
            *strRep42 = *strRep42 + -1;
            scratch = *strRep42 + 1;
          }
          if (scratch != 0) goto LAB_0040189f;
        }
        unused217 = str3 + -0xc;
        unused216 = str3 + -0xc;
        operator_delete();
        unused215 = 0;
        unused214 = valueName3;
        str3 = 0;
        unused21 = 0;
      }
LAB_0040189f:
      ehContext = 0xec;
      if (*(int *)(valueTextData + -4) == 0) goto code_r0x004018b2;
      if (openDictionariesData[-1] != 0) {
        std::string::replace_fill((int)openDictionaries,openDictionariesData[-1],0,1,0x3b);
      }
      std::string::append((int)openDictionaries,(int)valueText);
      ehDtorCount = ehDtorCount + -1;
      if (valueTextData != (undefined1 *)0x0) {
        if (*(int *)(valueTextData + -0xc) != -1) {
          strRep40 = (int *)(valueTextData + -0xc);
          if (strRep40 == &g_nullStringRep) {
            scratch = 1;
          }
          else if (strRep40 == &g_nullStringRep) {
            scratch = 1;
          }
          else {
            *strRep40 = *strRep40 + -1;
            scratch = *strRep40 + 1;
          }
          if (scratch != 0) goto LAB_00401a3a;
        }
        unused209 = valueTextData + -0xc;
        unused208 = valueTextData + -0xc;
        operator_delete();
        unused207 = 0;
        valueTextData = (undefined1 *)0x0;
        unused19 = 0;
        unused206 = valueText;
      }
LAB_00401a3a:
      dictNumber = dictNumber + 1;
    } while( true );
  }
  fprintf(&g_stderr,(byte *)"Please run the Windows version of TEA first");
  exitCode = 1;
  ehDtorCount = ehDtorCount + -2;
  Common::_dtor((int)common,2);
  ehDtorCount = ehDtorCount + -1;
  if (keyData != (char *)0x0) {
    if (*(int *)(keyData + -0xc) != -1) {
      strRep44 = (int *)(keyData + -0xc);
      if (strRep44 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep44 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep44 = *strRep44 + -1;
        scratch = *strRep44 + 1;
      }
      if (scratch != 0) goto LAB_00401522;
    }
    unused233 = keyData + -0xc;
    unused232 = keyData + -0xc;
    operator_delete();
    unused231 = 0;
    unused230 = key;
    keyData = (char *)0x0;
    unused25 = 0;
  }
LAB_00401522:
  ehDtorCount = ehDtorCount + -1;
  if (ownerData != (byte *)0x0) {
    if (*(int *)(ownerData + -0xc) != -1) {
      strRep43 = ownerData + -0xc;
      if (strRep43 == (byte *)&g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep43 == (byte *)&g_nullStringRep) {
        scratch = 1;
      }
      else {
        *(int *)strRep43 = *(int *)strRep43 + -1;
        scratch = *(int *)strRep43 + 1;
      }
      if (scratch != 0) goto LAB_004015c7;
    }
    unused229 = ownerData + -0xc;
    unused228 = ownerData + -0xc;
    operator_delete();
    unused227 = 0;
    unused226 = owner;
    ownerData = (byte *)0x0;
    unused24 = 0;
  }
LAB_004015c7:
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_string(&patterns2,patternsBegin,patternsEnd);
  unused225 = patternsBegin;
  operator_delete();
  *sehChainHead = sehPrevFrame;
  return exitCode;
code_r0x004018b2:
  ehDtorCount = ehDtorCount + -1;
  if (valueTextData != (undefined1 *)0x0) {
    if (*(int *)(valueTextData + -0xc) != -1) {
      strRep41 = (int *)(valueTextData + -0xc);
      if (strRep41 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep41 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep41 = *strRep41 + -1;
        scratch = *strRep41 + 1;
      }
      if (scratch != 0) goto LAB_00401a4b;
    }
    unused213 = valueTextData + -0xc;
    unused212 = valueTextData + -0xc;
    operator_delete();
    unused211 = 0;
    valueTextData = (undefined1 *)0x0;
    unused20 = 0;
    unused210 = valueText;
  }
LAB_00401a4b:
  intOut = &shortestSetting;
  ehContext = 0x128;
  std::string::string_from_cstr((int)valueName2,(uint *)"RangeShortest");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName2,intOut);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep39 = (int *)(str2 + -0xc);
      if (strRep39 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep39 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep39 = *strRep39 + -1;
        scratch = *strRep39 + 1;
      }
      if (scratch != 0) goto LAB_00401b46;
    }
    unused205 = str2 + -0xc;
    unused204 = str2 + -0xc;
    operator_delete();
    unused203 = 0;
    unused202 = valueName2;
    str2 = 0;
    unused18 = 0;
  }
LAB_00401b46:
  intOut = &longestSetting;
  ehContext = 0x140;
  std::string::string_from_cstr((int)valueName,(uint *)"RangeLongest");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName,intOut);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep38 = (int *)(str + -0xc);
      if (strRep38 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep38 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep38 = *strRep38 + -1;
        scratch = *strRep38 + 1;
      }
      if (scratch != 0) goto LAB_00401c47;
    }
    unused201 = str + -0xc;
    unused200 = str + -0xc;
    operator_delete();
    unused199 = 0;
    unused198 = valueName;
    str = 0;
    unused17 = 0;
  }
LAB_00401c47:
  ehContext = 200;
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  ehContext = 0x158;
  unused197 = 0;
  dictionaryPathsData = (uint *)0x0;
  if (openDictionariesData[-3] == 0xffffffff || (int)(openDictionariesData[-3] + 1) < 0) {
    len2 = openDictionariesData[-1];
    newRep2 = std::string::__getRep(dictionaryPaths,len2,len2);
    unused193 = dictionaryPaths;
    pathsData2 = (uint *)(newRep2 + 3);
    unused192 = len2;
    unused191 = openDictionariesData;
    unused190 = pathsData2;
    unused194 = pathsData2;
    dictionaryPathsData = pathsData2;
    memcpy(pathsData2,openDictionariesData,len2);
  }
  else {
    unused195 = dictionaryPaths;
    unused196 = openDictionariesData;
    dictionaryPathsData = openDictionariesData;
    unused16 = openDictionariesData;
    strRep37 = openDictionariesData + -3;
    if (strRep37 != &g_nullStringRep) {
      *strRep37 = *strRep37 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  scratch = 0;
  outputMode = '\0';
  shortest2 = shortestSetting;
  longest2 = longestSetting;
  quiet = 0;
  ehContext = 0x170;
  std::string::string_from_cstr((int)balancePrefix,(uint *)&DAT_0042ab76);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  argIndex = 1;
  if (1 < argc) {
    do {
      cmp = strncmp(&DAT_0042ab78 /* "/D:" */,*(char **)(argv + argIndex * 4),3);
      if (cmp == 0) {
        std::string::assign_cstr((int)dictionaryPaths,(uint *)(*(int *)(argv + argIndex * 4) + 3));
      }
      else {
        cmp = strncmp(&DAT_0042ab7c /* "/H:" */,*(char **)(argv + argIndex * 4),3);
        if (cmp == 0) {
          std::string::assign_cstr((int)profileExpansionHash,(uint *)(*(int *)(argv + argIndex * 4) + 3));
        }
        else {
          cmp = strncmp(&DAT_0042ab80 /* "/A:" */,*(char **)(argv + argIndex * 4),3);
          if (cmp == 0) {
            std::string::assign_cstr((int)profile,(uint *)(*(int *)(argv + argIndex * 4) + 3));
          }
          else {
            cmp = strncmp(&DAT_0042ab84 /* "/S:" */,*(char **)(argv + argIndex * 4),3);
            if (cmp == 0) {
              shortestArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
              shortest2 = atoi(shortestArg);
            }
            else {
              cmp = strncmp(&DAT_0042ab88 /* "/L:" */,*(char **)(argv + argIndex * 4),3);
              if (cmp == 0) {
                longestArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
                longest2 = atoi(longestArg);
              }
              else {
                cmp = strncmp(&DAT_0042ab8c /* "/N:" */,*(char **)(argv + argIndex * 4),3);
                if (cmp == 0) {
                  annotationsArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
                  showAnnotations = atoi(annotationsArg);
                }
                else {
                  cmp = strncmp(&DAT_0042ab90 /* "/B:" */,*(char **)(argv + argIndex * 4),3);
                  if (cmp == 0) {
                    balancesArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
                    showBalances = atoi(balancesArg);
                  }
                  else {
                    cmp = strncmp(&DAT_0042ab94 /* "/X:" */,*(char **)(argv + argIndex * 4),3);
                    if (cmp == 0) {
                      variablesArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
                      g_exclusiveVariables = atoi(variablesArg);
                    }
                    else {
                      cmp = strncmp(&DAT_0042ab98 /* "/U:" */,*(char **)(argv + argIndex * 4),3);
                      if (cmp == 0) {
                        ignoredArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
                        ignoreUnusedPunctuation = atoi(ignoredArg);
                      }
                      else {
                        cmp = strncmp(&DAT_0042ab9c /* "/O:" */,*(char **)(argv + argIndex * 4),3);
                        if (cmp == 0) {
                          outputArg = (char *)(*(int *)(argv + argIndex * 4) + 3);
                          scratch = atoi(outputArg);
                          scratch = scratch % 5;
                        }
                        else {
                          cmp = strcmp(&DAT_0042aba0,*(char **)(argv + argIndex * 4));
                          if (cmp == 0) {
                            quiet = 1;
                          }
                          else {
                            if (**(char **)(argv + argIndex * 4) == '/') {
                              uStackY_1914 = 0x402171;
                              fprintf(&g_stderr,
                                           (byte *)"TEA Crossword Helper console version 2.11.0, 1 Oct 2011\nCopyright (c) 2011 Crossword Man. All Rights Reserved.\nLicensed to: %s\n\nTEACON [/D:dictionaries] [/H:hash] [/A:at] [/S:shortest] [/L:longest]\n       [/N:annotations] [/B:balances] [/X:variables] [/O:output]\n       [pattern ...]\n\n  /D:dictionaries  Semicolon-separated file list       (default=%s)\n  /H:hash          Hash (#) macro expansion            (default=%s)\n  /A:at            At (@) macro expansion              (default=%s)\n  /S:shortest      Minimum length of result            (default=%d)\n  /L:longest       Maximum length of result            (default=%d)\n  /N:annotations   0 = dictionary annotations omitted  (default=%d)\n                   1 = dictionary annotations shown\n  /B:balances      0 = anagram balances omitted        (default=%d)\n                   1 = anagram balances shown\n  /X:variables     0 = non-exclusive letter variables  (default=%d)\n                   1 = exclusive letter variables\n  /U:ignored       0 = unused punctuation significant  (default=%d)\n                   1 = unused punctuation ignored\n  /O:output        0 = exactly as in dictionary        (default=%d)\n                   1 = as ASCII\n                   2 = as ASCII letters\n                   3 = as ASCII lower case letters\n                   4 = as ASCII upper case letters\n  /Q               Quiet mode (no pattern/comment echoing)\n  pattern ...      TEA patterns to be matched\n\n                   If there are no patterns on the command line,\n                   each line of standard input is assumed to be\n                   a pattern to be matched.\n");
                              exitCode = 1;
                              ehDtorCount = ehDtorCount + -1;
                              if (balancePrefixData != 0) {
                                if (*(int *)(balancePrefixData + -0xc) != -1) {
                                  intOut = (int *)(balancePrefixData + -0xc);
                                  if (intOut == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else if (intOut == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else {
                                    *intOut = *intOut + -1;
                                    scratch = *intOut + 1;
                                  }
                                  if (scratch != 0) goto LAB_0040221a;
                                }
                                unused189 = balancePrefixData + -0xc;
                                unused188 = balancePrefixData + -0xc;
                                operator_delete();
                                unused187 = 0;
                                unused186 = balancePrefix;
                                balancePrefixData = 0;
                                unused15 = 0;
                              }
LAB_0040221a:
                              ehContext = 0x20;
                              ehDtorCount = ehDtorCount + -1;
                              if (dictionaryPathsData != (uint *)0x0) {
                                if (dictionaryPathsData[-3] != 0xffffffff) {
                                  strRep36 = dictionaryPathsData + -3;
                                  if (strRep36 == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else if (strRep36 == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else {
                                    *strRep36 = *strRep36 - 1;
                                    scratch = *strRep36 + 1;
                                  }
                                  if (scratch != 0) goto LAB_004022da;
                                }
                                unused185 = dictionaryPathsData + -3;
                                unused184 = dictionaryPathsData + -3;
                                operator_delete();
                                unused183 = 0;
                                unused182 = dictionaryPaths;
                                dictionaryPathsData = (uint *)0x0;
                                unused14 = 0;
                              }
LAB_004022da:
                              ehDtorCount = ehDtorCount + -1;
                              if (openDictionariesData != (uint *)0x0) {
                                if (openDictionariesData[-3] != 0xffffffff) {
                                  strRep35 = openDictionariesData + -3;
                                  if (strRep35 == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else if (strRep35 == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else {
                                    *strRep35 = *strRep35 - 1;
                                    scratch = *strRep35 + 1;
                                  }
                                  if (scratch != 0) goto LAB_00402394;
                                }
                                unused181 = openDictionariesData + -3;
                                unused180 = openDictionariesData + -3;
                                operator_delete();
                                unused179 = 0;
                                unused178 = openDictionaries;
                                openDictionariesData = (uint *)0x0;
                                unused13 = 0;
                              }
LAB_00402394:
                              ehDtorCount = ehDtorCount + -4;
                              TEAViewProfileWindows::_dtor((int)profile,2);
                              ehDtorCount = ehDtorCount + -1;
                              if (keyData != (char *)0x0) {
                                if (*(int *)(keyData + -0xc) != -1) {
                                  strRep34 = (int *)(keyData + -0xc);
                                  if (strRep34 == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else if (strRep34 == &g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else {
                                    *strRep34 = *strRep34 + -1;
                                    scratch = *strRep34 + 1;
                                  }
                                  if (scratch != 0) goto LAB_0040244e;
                                }
                                unused177 = keyData + -0xc;
                                unused176 = keyData + -0xc;
                                operator_delete();
                                unused175 = 0;
                                unused174 = key;
                                keyData = (char *)0x0;
                                unused12 = 0;
                              }
LAB_0040244e:
                              ehDtorCount = ehDtorCount + -1;
                              if (ownerData != (byte *)0x0) {
                                if (*(int *)(ownerData + -0xc) != -1) {
                                  strRep33 = ownerData + -0xc;
                                  if (strRep33 == (byte *)&g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else if (strRep33 == (byte *)&g_nullStringRep) {
                                    scratch = 1;
                                  }
                                  else {
                                    *(int *)strRep33 = *(int *)strRep33 + -1;
                                    scratch = *(int *)strRep33 + 1;
                                  }
                                  if (scratch != 0) goto LAB_004024f3;
                                }
                                unused173 = ownerData + -0xc;
                                unused172 = ownerData + -0xc;
                                operator_delete();
                                unused171 = 0;
                                unused170 = owner;
                                ownerData = (byte *)0x0;
                                unused11 = 0;
                              }
LAB_004024f3:
                              ehDtorCount = ehDtorCount + -1;
                              std::_Destroy_range_string(&patterns2,patternsBegin,patternsEnd);
                              unused169 = patternsBegin;
                              operator_delete();
                              *sehChainHead = sehPrevFrame;
                              return exitCode;
                            }
                            ehContext = 0x1c4;
                            patternArg = std::string::string_from_cstr((int)patternStr,
                                                      *(uint **)(argv + argIndex * 4));
                            ehDtorCount = ehDtorCount + 1;
                            if (patternsEnd == patternsCapacityEnd) {
                              std::vector_string::insert_aux((int)&patterns2,patternsEnd,patternArg);
                            }
                            else {
                              unused168 = patternsEnd;
                              slot = patternsEnd;
                              if (patternsEnd != 0) {
                                ehContext = 0x1d0;
                                unused167 = 0;
                                *(undefined4 *)(patternsEnd + 8) = 0;
                                cmp = *(int *)(*(int *)(patternArg + 8) + -0xc);
                                if (cmp == -1 || cmp + 1 < 0) {
                                  len = *(uint *)(*(int *)(patternArg + 8) + -4);
                                  newRep = std::string::__getRep(patternsEnd,len,len);
                                  newData = newRep + 3;
                                  *(int **)(slot + 8) = newData;
                                  unused165 = slot;
                                  unused9 = *(undefined4 *)(slot + 8);
                                  unused164 = len;
                                  src = *(undefined4 **)(patternArg + 8);
                                  dest = *(undefined4 **)(slot + 8);
                                  memcpy(dest,src,len);
                                }
                                else {
                                  local_4d5c = *(undefined4 *)(patternArg + 8);
                                  *(undefined4 *)(patternsEnd + 8) = local_4d5c;
                                  unused166 = patternsEnd;
                                  unused10 = *(undefined4 *)(patternsEnd + 8);
                                  strRep32 = (int *)(*(int *)(patternsEnd + 8) + -0xc);
                                  if (strRep32 != &g_nullStringRep) {
                                    *strRep32 = *strRep32 + 1;
                                  }
                                }
                                ehContext = 0x1c4;
                              }
                              patternsEnd = patternsEnd + 0x10;
                            }
                            ehDtorCount = ehDtorCount + -1;
                            if (patternStrData != 0) {
                              if (*(int *)(patternStrData + -0xc) != -1) {
                                strRep31 = (int *)(patternStrData + -0xc);
                                if (strRep31 == &g_nullStringRep) {
                                  cmp = 1;
                                }
                                else if (strRep31 == &g_nullStringRep) {
                                  cmp = 1;
                                }
                                else {
                                  *strRep31 = *strRep31 + -1;
                                  cmp = *strRep31 + 1;
                                }
                                if (cmp != 0) goto LAB_004027ae;
                              }
                              unused163 = patternStrData + -0xc;
                              unused162 = patternStrData + -0xc;
                              operator_delete();
                              unused161 = 0;
                              unused160 = patternStr;
                              patternStrData = 0;
                              unused8 = 0;
                            }
LAB_004027ae:
                            ehContext = 0x20;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      outputMode = (char)scratch;
      argIndex = argIndex + 1;
    } while (argIndex < argc);
  }
  dictList = TSDictionaryList::Open(dictionaryPathsData);
  firstMissingPath = TSDictionaryList::GetFirstMissingPath((int)dictList);
  if ((firstMissingPath == 0) && (scratch = TSDictionaryList::GetCount((int)dictList), scratch != 0)) {
    unused138 = 0;
    unused137 = &g_emptyStringData;
    unused136 = balanceText;
    balanceTextData = &g_emptyStringData;
    unused2 = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    hadError = 0;
    patternIndex = 0;
    while (scratch = CheckLicenseKey(ownerData,keyData), scratch != 0) {
      unused110 = 0;
      unused109 = &g_emptyStringData;
      unused108 = query;
      queryData = (uint *)&g_emptyStringData;
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x2c0;
      scratch = patternsEnd - patternsBegin;
      if (scratch < 0) {
        scratch = scratch + 0xf;
      }
      if ((uint)(scratch >> 4) <= patternIndex) {
        scratch = patternsEnd - patternsBegin;
        if (scratch < 0) {
          scratch = scratch + 0xf;
        }
        if (scratch >> 4 == 0) {
          intOut = FUN_0041a86c(&DAT_00434788,(undefined1 *)local_5734,1000,'\n');
          lineLen = *intOut;
          if ((*(byte *)(lineLen + 0x30) & 5) == 0) {
            std::string::assign_cstr((int)query,local_5734);
            goto LAB_004032d0;
          }
        }
        ehDtorCount = ehDtorCount + -1;
        if (queryData != (uint *)0x0) {
          if (queryData[-3] != 0xffffffff) {
            strRep8 = queryData + -3;
            if (strRep8 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep8 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep8 = *strRep8 - 1;
              scratch = *strRep8 + 1;
            }
            if (scratch != 0) goto LAB_00404076;
          }
          unused60 = queryData + -3;
          unused59 = queryData + -3;
          operator_delete();
          unused58 = 0;
          unused57 = query;
          queryData = (uint *)0x0;
        }
LAB_00404076:
        TSDictionaryList::ReleaseDictionaries((int)dictList);
        ehDtorCount = ehDtorCount + -1;
        exitCode = hadError;
        if (balanceTextData != (undefined1 *)0x0) {
          if (*(int *)(balanceTextData + -0xc) != -1) {
            strRep6 = (int *)(balanceTextData + -0xc);
            if (strRep6 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep6 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep6 = *strRep6 + -1;
              scratch = *strRep6 + 1;
            }
            if (scratch != 0) goto LAB_00404144;
          }
          unused52 = balanceTextData + -0xc;
          unused51 = balanceTextData + -0xc;
          operator_delete();
          unused50 = 0;
          unused49 = balanceText;
          balanceTextData = (undefined1 *)0x0;
        }
LAB_00404144:
        ehContext = 0x20;
        ehDtorCount = ehDtorCount + -1;
        if (balancePrefixData != 0) {
          if (*(int *)(balancePrefixData + -0xc) != -1) {
            strRep5 = (int *)(balancePrefixData + -0xc);
            if (strRep5 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep5 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep5 = *strRep5 + -1;
              scratch = *strRep5 + 1;
            }
            if (scratch != 0) goto LAB_00404204;
          }
          unused48 = balancePrefixData + -0xc;
          unused47 = balancePrefixData + -0xc;
          operator_delete();
          unused46 = 0;
          unused45 = balancePrefix;
          balancePrefixData = 0;
        }
LAB_00404204:
        ehDtorCount = ehDtorCount + -1;
        if (dictionaryPathsData != (uint *)0x0) {
          if (dictionaryPathsData[-3] != 0xffffffff) {
            strRep4 = dictionaryPathsData + -3;
            if (strRep4 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep4 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep4 = *strRep4 - 1;
              scratch = *strRep4 + 1;
            }
            if (scratch != 0) goto LAB_004042be;
          }
          unused44 = dictionaryPathsData + -3;
          unused43 = dictionaryPathsData + -3;
          operator_delete();
          unused42 = 0;
          unused41 = dictionaryPaths;
          dictionaryPathsData = (uint *)0x0;
        }
LAB_004042be:
        ehDtorCount = ehDtorCount + -1;
        if (openDictionariesData != (uint *)0x0) {
          if (openDictionariesData[-3] != 0xffffffff) {
            strRep3 = openDictionariesData + -3;
            if (strRep3 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep3 = *strRep3 - 1;
              scratch = *strRep3 + 1;
            }
            if (scratch != 0) goto LAB_00404378;
          }
          unused40 = openDictionariesData + -3;
          unused39 = openDictionariesData + -3;
          operator_delete();
          unused38 = 0;
          unused37 = openDictionaries;
          openDictionariesData = (uint *)0x0;
        }
LAB_00404378:
        ehDtorCount = ehDtorCount + -4;
        TEAViewProfileWindows::_dtor((int)profile,2);
        ehDtorCount = ehDtorCount + -1;
        if (keyData != (char *)0x0) {
          if (*(int *)(keyData + -0xc) != -1) {
            strRep2 = (int *)(keyData + -0xc);
            if (strRep2 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep2 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep2 = *strRep2 + -1;
              scratch = *strRep2 + 1;
            }
            if (scratch != 0) goto LAB_00404432;
          }
          unused36 = keyData + -0xc;
          unused35 = keyData + -0xc;
          operator_delete();
          unused34 = 0;
          unused33 = key;
          keyData = (char *)0x0;
        }
LAB_00404432:
        ehDtorCount = ehDtorCount + -1;
        if (ownerData != (byte *)0x0) {
          if (*(int *)(ownerData + -0xc) != -1) {
            strRep = ownerData + -0xc;
            if (strRep == (byte *)&g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep == (byte *)&g_nullStringRep) {
              scratch = 1;
            }
            else {
              *(int *)strRep = *(int *)strRep + -1;
              scratch = *(int *)strRep + 1;
            }
            if (scratch != 0) goto LAB_004044d7;
          }
          unused32 = ownerData + -0xc;
          unused31 = ownerData + -0xc;
          operator_delete();
          unused30 = 0;
          unused29 = owner;
          ownerData = (byte *)0x0;
        }
LAB_004044d7:
        ehDtorCount = ehDtorCount + -1;
        std::_Destroy_range_string(&patterns2,patternsBegin,patternsEnd);
        unused28 = patternsBegin;
        operator_delete();
        *sehChainHead = sehPrevFrame;
        return exitCode;
      }
      unused107 = patternIndex;
      scratch = patternIndex * 0x10;
      patternIndex = patternIndex + 1;
      std::string::operator_assign((int)query,scratch + patternsBegin);
LAB_004032d0:
      if (queryData[-1] == 0) {
        firstChar = '\0';
      }
      else {
        if (1 < (int)(queryData[-3] + 1)) {
          std::string::__unshare((int)query);
        }
        strRep20 = queryData + -3;
        if (strRep20 != &g_nullStringRep) {
          *strRep20 = 0xffffffff;
        }
        firstChar = (char)*queryData;
      }
      if ((firstChar == ' ') || (firstChar == '\t')) {
        if (quiet == 0) {
          puts(queryData);
        }
        ehDtorCount = ehDtorCount + -1;
        if (queryData != (uint *)0x0) {
          if (queryData[-3] != 0xffffffff) {
            strRep9 = queryData + -3;
            if (strRep9 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep9 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep9 = *strRep9 - 1;
              scratch = *strRep9 + 1;
            }
            if (scratch != 0) goto LAB_00403417;
          }
          unused64 = queryData + -3;
          unused63 = queryData + -3;
          operator_delete();
          unused62 = 0;
          unused61 = query;
          queryData = (uint *)0x0;
        }
LAB_00403417:
        ehContext = 0x2c0;
      }
      else {
        if (quiet == 0) {
          g_stdoutLevel = g_stdoutLevel + 1;
          if (g_stdoutLevel < 0) {
            out = g_stdoutPtr + 1;
            *g_stdoutPtr = 0x20;
            g_stdoutPtr = out;
          }
          else {
            _flsbuf(0x20,(int *)&g_stdoutPtr);
          }
          puts(queryData);
        }
        ehContext = 0x2cc;
        ExpandQueryMacros((int)expanded,(int)profile,(int)query);
        ehDtorCount = ehDtorCount + 1;
        std::string::operator_assign((int)query,(int)expanded);
        ehDtorCount = ehDtorCount + -1;
        if (expandedData != 0) {
          if (*(int *)(expandedData + -0xc) != -1) {
            strRep19 = (int *)(expandedData + -0xc);
            if (strRep19 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep19 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep19 = *strRep19 + -1;
              scratch = *strRep19 + 1;
            }
            if (scratch != 0) goto LAB_00403555;
          }
          unused106 = expandedData + -0xc;
          unused105 = expandedData + -0xc;
          operator_delete();
          unused104 = 0;
          unused103 = expanded;
          expandedData = 0;
        }
LAB_00403555:
        dictIndex = 0;
        while( true ) {
          ehContext = 0x2c0;
          scratch = TSDictionaryList::GetCount((int)dictList);
          if (scratch <= dictIndex) break;
          ehContext = 0x2e4;
          InputEngine::InputEngine(inputEngine,(int)dictList,dictIndex);
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0x2fc;
          MatchEngineSet::MatchEngineSet(matchSet);
          ehDtorCount = ehDtorCount + 3;
          ehContext = 0x2f0;
          status = MatchEngineSet::Compile((int)matchSet,(int)dictList,dictIndex,(int)query,
                                    shortest2,longest2,ignoreUnusedPunctuation);
          if (status != '\0') {
            if (('\0' < status) && (status < '\x0f')) {
              fprintf(&g_stderr,(byte *)"Pattern error: %s\n");
            }
            hadError = 1;
            ehDtorCount = ehDtorCount + -3;
            MatchEngineSet::_dtor((int)matchSet,2);
            ehDtorCount = ehDtorCount + -1;
            InputEngine::_dtor((int)inputEngine,2);
            break;
          }
          length2 = 0x65;
          lastLength = 0;
          MatchEngineSet::GetLengthRange((int)matchSet,&length2,&lastLength);
          if (length2 <= lastLength) {
            do {
              started = InputEngine::StartLength((int)inputEngine,length2);
              if (CONCAT31(regHigh,started) != 0) {
                unused102 = MatchEngineSet::SetWordLength((int)matchSet,length2);
                ehContext = 0x2f0;
                while( true ) {
                  do {
                    wordLetters = InputEngine::NextMatch((int)inputEngine,(int)matchSet);
                  } while (wordLetters == (char *)0x0);
                  if (*wordLetters == -1) break;
                  ehContext = 0x314;
                  std::string::string_from_cstr((int)word_,inputEngineRawWord);
                  ehDtorCount = ehDtorCount + 1;
                  ehContext = 0x308;
                  if ((showAnnotations != 0) &&
                     (annotation = (uint *)InputEngine::GetAnnotation((int)inputEngine), annotation != (uint *)0x0)
                     ) {
                    wordLen = wordData[-1];
                    annotationArg = annotation;
                    annotationLen = strlen(annotation);
                    std::string::replace((int)word_,wordLen,0,(uint)annotationArg,(uint)annotationLen,0,
                                 (uint)annotationLen);
                  }
                  ehContext = 800;
                  FilterWordByCaseMode((int)filtered,(int)word_,outputMode);
                  ehDtorCount = ehDtorCount + 1;
                  std::string::operator_assign((int)word_,(int)filtered);
                  ehDtorCount = ehDtorCount + -1;
                  if (filteredData != 0) {
                    if (*(int *)(filteredData + -0xc) != -1) {
                      strRep18 = (int *)(filteredData + -0xc);
                      if (strRep18 == &g_nullStringRep) {
                        scratch = 1;
                      }
                      else if (strRep18 == &g_nullStringRep) {
                        scratch = 1;
                      }
                      else {
                        *strRep18 = *strRep18 + -1;
                        scratch = *strRep18 + 1;
                      }
                      if (scratch != 0) goto LAB_00403843;
                    }
                    unused101 = filteredData + -0xc;
                    unused100 = filteredData + -0xc;
                    operator_delete();
                    unused99 = 0;
                    unused98 = filtered;
                    filteredData = 0;
                  }
LAB_00403843:
                  ehContext = 0x308;
                  if (showBalances != 0) {
                    MatchEngineSet::GetBalanceText((int)matchSet,(int)balancePrefix,(int)balanceText);
                    std::string::append((int)word_,(int)balanceText);
                  }
                  puts(wordData);
                  ehDtorCount = ehDtorCount + -1;
                  if (wordData != (uint *)0x0) {
                    if (wordData[-3] != 0xffffffff) {
                      strRep17 = wordData + -3;
                      if (strRep17 == &g_nullStringRep) {
                        scratch = 1;
                      }
                      else if (strRep17 == &g_nullStringRep) {
                        scratch = 1;
                      }
                      else {
                        *strRep17 = *strRep17 - 1;
                        scratch = *strRep17 + 1;
                      }
                      if (scratch != 0) goto LAB_00403949;
                    }
                    unused97 = wordData + -3;
                    unused96 = wordData + -3;
                    operator_delete();
                    unused95 = 0;
                    unused94 = word_;
                    wordData = (uint *)0x0;
                  }
LAB_00403949:
                  ehContext = 0x2f0;
                }
              }
              length2 = length2 + 1;
            } while (length2 <= lastLength);
          }
          scratch = CheckLicenseKey3(ownerData,keyData);
          if (scratch == 0) {
            exitCode = 1;
            ehDtorCount = ehDtorCount + -3;
            MatchEngineSet::_dtor((int)matchSet,2);
            ehDtorCount = ehDtorCount + -1;
            InputEngine::_dtor((int)inputEngine,2);
            ehDtorCount = ehDtorCount + -1;
            if (queryData != (uint *)0x0) {
              if (queryData[-3] != 0xffffffff) {
                strRep16 = queryData + -3;
                if (strRep16 == &g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep16 == &g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *strRep16 = *strRep16 - 1;
                  scratch = *strRep16 + 1;
                }
                if (scratch != 0) goto LAB_00403ada;
              }
              unused93 = queryData + -3;
              unused92 = queryData + -3;
              operator_delete();
              unused91 = 0;
              unused90 = query;
              queryData = (uint *)0x0;
            }
LAB_00403ada:
            ehContext = 0x2f0;
            ehDtorCount = ehDtorCount + -1;
            if (balanceTextData != (undefined1 *)0x0) {
              if (*(int *)(balanceTextData + -0xc) != -1) {
                strRep15 = (int *)(balanceTextData + -0xc);
                if (strRep15 == &g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep15 == &g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *strRep15 = *strRep15 + -1;
                  scratch = *strRep15 + 1;
                }
                if (scratch != 0) goto LAB_00403b9a;
              }
              unused89 = balanceTextData + -0xc;
              unused88 = balanceTextData + -0xc;
              operator_delete();
              unused87 = 0;
              unused86 = balanceText;
              balanceTextData = (undefined1 *)0x0;
            }
LAB_00403b9a:
            ehDtorCount = ehDtorCount + -1;
            if (balancePrefixData != 0) {
              if (*(int *)(balancePrefixData + -0xc) != -1) {
                strRep14 = (int *)(balancePrefixData + -0xc);
                if (strRep14 == &g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep14 == &g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *strRep14 = *strRep14 + -1;
                  scratch = *strRep14 + 1;
                }
                if (scratch != 0) goto LAB_00403c54;
              }
              unused85 = balancePrefixData + -0xc;
              unused84 = balancePrefixData + -0xc;
              operator_delete();
              unused83 = 0;
              unused82 = balancePrefix;
              balancePrefixData = 0;
            }
LAB_00403c54:
            ehDtorCount = ehDtorCount + -1;
            if (dictionaryPathsData != (uint *)0x0) {
              if (dictionaryPathsData[-3] != 0xffffffff) {
                strRep13 = dictionaryPathsData + -3;
                if (strRep13 == &g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep13 == &g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *strRep13 = *strRep13 - 1;
                  scratch = *strRep13 + 1;
                }
                if (scratch != 0) goto LAB_00403d0e;
              }
              unused81 = dictionaryPathsData + -3;
              unused80 = dictionaryPathsData + -3;
              operator_delete();
              unused79 = 0;
              unused78 = dictionaryPaths;
              dictionaryPathsData = (uint *)0x0;
            }
LAB_00403d0e:
            ehDtorCount = ehDtorCount + -1;
            if (openDictionariesData != (uint *)0x0) {
              if (openDictionariesData[-3] != 0xffffffff) {
                strRep12 = openDictionariesData + -3;
                if (strRep12 == &g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep12 == &g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *strRep12 = *strRep12 - 1;
                  scratch = *strRep12 + 1;
                }
                if (scratch != 0) goto LAB_00403dc8;
              }
              unused77 = openDictionariesData + -3;
              unused76 = openDictionariesData + -3;
              operator_delete();
              unused75 = 0;
              unused74 = openDictionaries;
              openDictionariesData = (uint *)0x0;
            }
LAB_00403dc8:
            ehDtorCount = ehDtorCount + -4;
            TEAViewProfileWindows::_dtor((int)profile,2);
            ehDtorCount = ehDtorCount + -1;
            if (keyData != (char *)0x0) {
              if (*(int *)(keyData + -0xc) != -1) {
                strRep11 = (int *)(keyData + -0xc);
                if (strRep11 == &g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep11 == &g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *strRep11 = *strRep11 + -1;
                  scratch = *strRep11 + 1;
                }
                if (scratch != 0) goto LAB_00403e82;
              }
              unused73 = keyData + -0xc;
              unused72 = keyData + -0xc;
              operator_delete();
              unused71 = 0;
              unused70 = key;
              keyData = (char *)0x0;
            }
LAB_00403e82:
            ehDtorCount = ehDtorCount + -1;
            if (ownerData != (byte *)0x0) {
              if (*(int *)(ownerData + -0xc) != -1) {
                strRep10 = ownerData + -0xc;
                if (strRep10 == (byte *)&g_nullStringRep) {
                  scratch = 1;
                }
                else if (strRep10 == (byte *)&g_nullStringRep) {
                  scratch = 1;
                }
                else {
                  *(int *)strRep10 = *(int *)strRep10 + -1;
                  scratch = *(int *)strRep10 + 1;
                }
                if (scratch != 0) goto LAB_00403f27;
              }
              unused69 = ownerData + -0xc;
              unused68 = ownerData + -0xc;
              operator_delete();
              unused67 = 0;
              unused66 = owner;
              ownerData = (byte *)0x0;
            }
LAB_00403f27:
            ehDtorCount = ehDtorCount + -1;
            std::_Destroy_range_string(&patterns2,patternsBegin,patternsEnd);
            unused65 = patternsBegin;
            operator_delete();
            *sehChainHead = sehPrevFrame;
            return exitCode;
          }
          ehDtorCount = ehDtorCount + -3;
          MatchEngineSet::_dtor((int)matchSet,2);
          ehDtorCount = ehDtorCount + -1;
          InputEngine::_dtor((int)inputEngine,2);
          dictIndex = dictIndex + 1;
        }
        ehDtorCount = ehDtorCount + -1;
        if (queryData != (uint *)0x0) {
          if (queryData[-3] != 0xffffffff) {
            strRep7 = queryData + -3;
            if (strRep7 == &g_nullStringRep) {
              scratch = 1;
            }
            else if (strRep7 == &g_nullStringRep) {
              scratch = 1;
            }
            else {
              *strRep7 = *strRep7 - 1;
              scratch = *strRep7 + 1;
            }
            if (scratch != 0) goto LAB_0040406b;
          }
          unused56 = queryData + -3;
          unused55 = queryData + -3;
          operator_delete();
          unused54 = 0;
          unused53 = query;
          queryData = (uint *)0x0;
        }
LAB_0040406b:
        ehContext = 0x20;
      }
    }
    exitCode = 1;
    ehDtorCount = ehDtorCount + -1;
    if (balanceTextData != (undefined1 *)0x0) {
      if (*(int *)(balanceTextData + -0xc) != -1) {
        intOut = (int *)(balanceTextData + -0xc);
        if (intOut == &g_nullStringRep) {
          scratch = 1;
        }
        else if (intOut == &g_nullStringRep) {
          scratch = 1;
        }
        else {
          *intOut = *intOut + -1;
          scratch = *intOut + 1;
        }
        if (scratch != 0) goto LAB_00402d27;
      }
      unused135 = balanceTextData + -0xc;
      unused134 = balanceTextData + -0xc;
      operator_delete();
      unused133 = 0;
      unused132 = balanceText;
      balanceTextData = (undefined1 *)0x0;
    }
LAB_00402d27:
    ehContext = 0x20;
    ehDtorCount = ehDtorCount + -1;
    if (balancePrefixData != 0) {
      if (*(int *)(balancePrefixData + -0xc) != -1) {
        strRep25 = (int *)(balancePrefixData + -0xc);
        if (strRep25 == &g_nullStringRep) {
          scratch = 1;
        }
        else if (strRep25 == &g_nullStringRep) {
          scratch = 1;
        }
        else {
          *strRep25 = *strRep25 + -1;
          scratch = *strRep25 + 1;
        }
        if (scratch != 0) goto LAB_00402de7;
      }
      unused131 = balancePrefixData + -0xc;
      unused130 = balancePrefixData + -0xc;
      operator_delete();
      unused129 = 0;
      unused128 = balancePrefix;
      balancePrefixData = 0;
    }
LAB_00402de7:
    ehDtorCount = ehDtorCount + -1;
    if (dictionaryPathsData != (uint *)0x0) {
      if (dictionaryPathsData[-3] != 0xffffffff) {
        strRep24 = dictionaryPathsData + -3;
        if (strRep24 == &g_nullStringRep) {
          scratch = 1;
        }
        else if (strRep24 == &g_nullStringRep) {
          scratch = 1;
        }
        else {
          *strRep24 = *strRep24 - 1;
          scratch = *strRep24 + 1;
        }
        if (scratch != 0) goto LAB_00402ea1;
      }
      unused127 = dictionaryPathsData + -3;
      unused126 = dictionaryPathsData + -3;
      operator_delete();
      unused125 = 0;
      unused124 = dictionaryPaths;
      dictionaryPathsData = (uint *)0x0;
    }
LAB_00402ea1:
    ehDtorCount = ehDtorCount + -1;
    if (openDictionariesData != (uint *)0x0) {
      if (openDictionariesData[-3] != 0xffffffff) {
        strRep23 = openDictionariesData + -3;
        if (strRep23 == &g_nullStringRep) {
          scratch = 1;
        }
        else if (strRep23 == &g_nullStringRep) {
          scratch = 1;
        }
        else {
          *strRep23 = *strRep23 - 1;
          scratch = *strRep23 + 1;
        }
        if (scratch != 0) goto LAB_00402f5b;
      }
      unused123 = openDictionariesData + -3;
      unused122 = openDictionariesData + -3;
      operator_delete();
      unused121 = 0;
      unused120 = openDictionaries;
      openDictionariesData = (uint *)0x0;
    }
LAB_00402f5b:
    ehDtorCount = ehDtorCount + -4;
    TEAViewProfileWindows::_dtor((int)profile,2);
    ehDtorCount = ehDtorCount + -1;
    if (keyData != (char *)0x0) {
      if (*(int *)(keyData + -0xc) != -1) {
        strRep22 = (int *)(keyData + -0xc);
        if (strRep22 == &g_nullStringRep) {
          scratch = 1;
        }
        else if (strRep22 == &g_nullStringRep) {
          scratch = 1;
        }
        else {
          *strRep22 = *strRep22 + -1;
          scratch = *strRep22 + 1;
        }
        if (scratch != 0) goto LAB_00403015;
      }
      unused119 = keyData + -0xc;
      unused118 = keyData + -0xc;
      operator_delete();
      unused117 = 0;
      unused116 = key;
      keyData = (char *)0x0;
    }
LAB_00403015:
    ehDtorCount = ehDtorCount + -1;
    if (ownerData != (byte *)0x0) {
      if (*(int *)(ownerData + -0xc) != -1) {
        strRep21 = ownerData + -0xc;
        if (strRep21 == (byte *)&g_nullStringRep) {
          scratch = 1;
        }
        else if (strRep21 == (byte *)&g_nullStringRep) {
          scratch = 1;
        }
        else {
          *(int *)strRep21 = *(int *)strRep21 + -1;
          scratch = *(int *)strRep21 + 1;
        }
        if (scratch != 0) goto LAB_004030ba;
      }
      unused115 = ownerData + -0xc;
      unused114 = ownerData + -0xc;
      operator_delete();
      unused113 = 0;
      unused112 = owner;
      ownerData = (byte *)0x0;
    }
LAB_004030ba:
    ehDtorCount = ehDtorCount + -1;
    std::_Destroy_range_string(&patterns2,patternsBegin,patternsEnd);
    unused111 = patternsBegin;
    operator_delete();
    *sehChainHead = sehPrevFrame;
    return exitCode;
  }
  fprintf(&g_stderr,(byte *)"\"%s\" is not a valid dictionary\n");
  exitCode = 1;
  ehDtorCount = ehDtorCount + -1;
  if (balancePrefixData != 0) {
    if (*(int *)(balancePrefixData + -0xc) != -1) {
      strRep30 = (int *)(balancePrefixData + -0xc);
      if (strRep30 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep30 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep30 = *strRep30 + -1;
        scratch = *strRep30 + 1;
      }
      if (scratch != 0) goto LAB_004028f1;
    }
    unused159 = balancePrefixData + -0xc;
    unused158 = balancePrefixData + -0xc;
    operator_delete();
    unused157 = 0;
    unused156 = balancePrefix;
    balancePrefixData = 0;
    unused7 = 0;
  }
LAB_004028f1:
  ehDtorCount = ehDtorCount + -1;
  if (dictionaryPathsData != (uint *)0x0) {
    if (dictionaryPathsData[-3] != 0xffffffff) {
      strRep29 = dictionaryPathsData + -3;
      if (strRep29 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep29 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep29 = *strRep29 - 1;
        scratch = *strRep29 + 1;
      }
      if (scratch != 0) goto LAB_004029ab;
    }
    unused155 = dictionaryPathsData + -3;
    unused154 = dictionaryPathsData + -3;
    operator_delete();
    unused153 = 0;
    unused152 = dictionaryPaths;
    dictionaryPathsData = (uint *)0x0;
    unused6 = 0;
  }
LAB_004029ab:
  ehDtorCount = ehDtorCount + -1;
  if (openDictionariesData != (uint *)0x0) {
    if (openDictionariesData[-3] != 0xffffffff) {
      strRep28 = openDictionariesData + -3;
      if (strRep28 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep28 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep28 = *strRep28 - 1;
        scratch = *strRep28 + 1;
      }
      if (scratch != 0) goto LAB_00402a65;
    }
    unused151 = openDictionariesData + -3;
    unused150 = openDictionariesData + -3;
    operator_delete();
    unused149 = 0;
    unused148 = openDictionaries;
    openDictionariesData = (uint *)0x0;
    unused5 = 0;
  }
LAB_00402a65:
  ehDtorCount = ehDtorCount + -4;
  TEAViewProfileWindows::_dtor((int)profile,2);
  ehDtorCount = ehDtorCount + -1;
  if (keyData != (char *)0x0) {
    if (*(int *)(keyData + -0xc) != -1) {
      strRep27 = (int *)(keyData + -0xc);
      if (strRep27 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep27 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep27 = *strRep27 + -1;
        scratch = *strRep27 + 1;
      }
      if (scratch != 0) goto LAB_00402b1f;
    }
    unused147 = keyData + -0xc;
    unused146 = keyData + -0xc;
    operator_delete();
    unused145 = 0;
    unused144 = key;
    keyData = (char *)0x0;
    unused4 = 0;
  }
LAB_00402b1f:
  ehDtorCount = ehDtorCount + -1;
  if (ownerData != (byte *)0x0) {
    if (*(int *)(ownerData + -0xc) != -1) {
      strRep26 = ownerData + -0xc;
      if (strRep26 == (byte *)&g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep26 == (byte *)&g_nullStringRep) {
        scratch = 1;
      }
      else {
        *(int *)strRep26 = *(int *)strRep26 + -1;
        scratch = *(int *)strRep26 + 1;
      }
      if (scratch != 0) goto LAB_00402bc4;
    }
    unused143 = ownerData + -0xc;
    unused142 = ownerData + -0xc;
    operator_delete();
    unused141 = 0;
    unused140 = owner;
    ownerData = (byte *)0x0;
    unused3 = 0;
  }
LAB_00402bc4:
  ehDtorCount = ehDtorCount + -1;
  std::_Destroy_range_string(&patterns2,patternsBegin,patternsEnd);
  unused139 = patternsBegin;
  operator_delete();
  *sehChainHead = sehPrevFrame;
  return exitCode;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040483c  std::_Destroy_range_string   (182 bytes)   [analysis]
//   destroys the std::string objects in [first, last)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_string(undefined4 vec,int first,int last)

{
  int str;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b224);
joined_r0x00404855:
  do {
    str = first;
    if (str == last) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    first = str + 0x10;
  } while ((str == 0) || (*(int *)(str + 8) == 0));
  if (*(int *)(*(int *)(str + 8) + -0xc) != -1) goto code_r0x00404878;
  goto LAB_004048a5;
code_r0x00404878:
  strRep = (int *)(*(int *)(str + 8) + -0xc);
  if (strRep == &g_nullStringRep) {
    prevRefs = 1;
  }
  else if (strRep == &g_nullStringRep) {
    prevRefs = 1;
  }
  else {
    *strRep = *strRep + -1;
    prevRefs = *strRep + 1;
  }
  if (prevRefs == 0) {
LAB_004048a5:
    operator_delete();
    *(undefined4 *)(str + 8) = 0;
  }
  goto joined_r0x00404855;
}

// ----------------------------------------------------------------------------------------------------
// 0x004048f4  std::vector_string::insert_aux   (893 bytes, 2 ranges)   [analysis]
//   std::vector<std::string> insert at a position, growing the storage (doubling, at least 64) when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_string::insert_aux(int vec,int pos,int value)

{
  uint len;
  int refs;
  int newCapacity;
  int storage;
  int slot;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  int end;
  
  __InitExceptBlockLDTC(0x42b288);
  newCapacity = *(int *)(vec + 8);
  if (newCapacity == *(int *)(vec + 0x18)) {
    newCapacity = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (newCapacity < 0) {
      newCapacity = newCapacity + 0xf;
    }
    if (newCapacity >> 4 == 0) {
      newCapacity = 0x40;
    }
    else {
      newCapacity = (newCapacity >> 4) * 2;
    }
    storage = operator_new();
    if (storage == 0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_00404c94,(undefined4*)&badAlloc,0,&LAB_00404cec,1,0,0,0);
    }
    std::uninitialized_copy_string(*(int *)(vec + 4),pos,storage);
    slot = pos - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    slot = (slot >> 4) * 0x10 + storage;
    if (slot != 0) {
      *(undefined4 *)(slot + 8) = 0;
      refs = *(int *)(*(int *)(value + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        rep = std::string::__getRep(slot,len,len);
        *(int **)(slot + 8) = rep + 3;
        memcpy(*(undefined4 **)(slot + 8),*(undefined4 **)(value + 8),len);
      }
      else {
        *(undefined4 *)(slot + 8) = *(undefined4 *)(value + 8);
        rep = (int *)(*(int *)(slot + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    slot = pos - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    std::uninitialized_copy_string(pos,*(int *)(vec + 8),(slot >> 4) * 0x10 + storage + 0x10);
    slot = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (slot < 0) {
      slot = slot + 0xf;
    }
    std::_Destroy_range_string(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(int *)(vec + 0x18) = newCapacity * 0x10 + storage;
    *(int *)(vec + 8) = (slot >> 4) * 0x10 + storage + 0x10;
    *(int *)(vec + 4) = storage;
  }
  else {
    end = newCapacity;
    if (newCapacity != 0) {
      *(undefined4 *)(newCapacity + 8) = 0;
      storage = *(int *)(*(int *)(newCapacity + -8) + -0xc);
      if (storage == -1 || storage + 1 < 0) {
        len = *(uint *)(*(int *)(newCapacity + -8) + -4);
        rep = std::string::__getRep(newCapacity,len,len);
        *(int **)(end + 8) = rep + 3;
        memcpy(*(undefined4 **)(end + 8),*(undefined4 **)(newCapacity + -8),len);
      }
      else {
        *(undefined4 *)(newCapacity + 8) = *(undefined4 *)(newCapacity + -8);
        rep = (int *)(*(int *)(newCapacity + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
    std::copy_backward_string(pos,*(int *)(vec + 8) + -0x10,*(int *)(vec + 8));
    std::string::operator_assign(pos,value);
    *(int *)(vec + 8) = *(int *)(vec + 8) + 0x10;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404d2c  std::copy_backward_string   (46 bytes)   [analysis]
//   copy_backward over std::string objects (16 bytes each)
//   file placement: inferred (address adjacency)
int __cdecl std::copy_backward_string(int first,int last,int destEnd)

{
  while (last != first) {
    last = last + -0x10;
    destEnd = destEnd + -0x10;
    std::string::operator_assign(destEnd,last);
  }
  return destEnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404d5c  std::uninitialized_copy_string   (293 bytes, 2 ranges)   [analysis]
//   copy-constructs std::string objects from [first, last) into raw storage
//   file placement: inferred (address adjacency)
int __cdecl std::uninitialized_copy_string(int first,int last,int dest)

{
  int refs;
  uint len;
  int src;
  int dst;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b320);
  while (dst = dest, src = first, src != last) {
    dest = dst + 0x10;
    first = src + 0x10;
    if (dst != 0) {
      *(undefined4 *)(dst + 8) = 0;
      refs = *(int *)(*(int *)(src + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(src + 8) + -4);
        rep = std::string::__getRep(dst,len,len);
        *(int **)(dst + 8) = rep + 3;
        memcpy(*(undefined4 **)(dst + 8),*(undefined4 **)(src + 8),len);
      }
      else {
        *(undefined4 *)(dst + 8) = *(undefined4 *)(src + 8);
        rep = (int *)(*(int *)(dst + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return dst;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404ea8  std::_Destroy_range_16   (22 bytes)   [analysis]
//   destroys a range of 16-byte objects with trivial destructors (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_16(int first,int last)

{
  for (; last != first; first = first + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404f9c  std::exception::vf1   (10 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::exception::vf1(void)

{
  return PTR_s_no_named_exception_thrown_00431934;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404fa8  std::bad_alloc::vf1   (10 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::bad_alloc::vf1(void)

{
  return PTR_s_bad_alloc_exception_thrown_0043193c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404fb4  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
//   written in code as std::string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::string::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  
  if (self == 0) {
    return;
  }
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0040502f;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0040502f:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405044  std::vector<std::string>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_std_string::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_string(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040507c  std::vector<MatchEngine *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_MatchEngine_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004050b4  std::_Destroy_range_ptr   (22 bytes)   [analysis]
//   destroys a range of pointers (nothing to do; the loop is left in)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_ptr(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004050cc  InitDictionaryCache   (151 bytes)   [analysis]
//   static initialiser: empty g_dictionaryCache (256 reserved) and two length limits of 0x7fffffff
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405118) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00405120 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __stdcall InitDictionaryCache(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b3b4);
  if (g_dictionaryCacheInitialised == '\0') {
    (*(undefined4 *)&g_dictionaryCacheBegin) = 0;
    (*(undefined4 *)&g_dictionaryCacheEnd) = 0;
    g_dictionaryCacheCapacityEnd = 0;
    _DAT_0042b5e4 = 0x100;
    g_dictionaryCacheInitialised = '\x01';
  }
  if (g_lengthLimitsInitialised == '\0') {
    _DAT_0042b608 = 0x7fffffff;
    _DAT_0042b60c = 0x7fffffff;
    g_lengthLimitsInitialised = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405164  DestroyDictionaryCache   (88 bytes)   [analysis]
//   static destructor of g_dictionaryCache
//   file placement: inferred (address adjacency)
void __stdcall DestroyDictionaryCache(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42b3d4);
  if (g_dictionaryCacheInitialised != '\0') {
    std::_Destroy_range_ptr_4052f4(&g_dictionaryCache,g_dictionaryCacheBegin,g_dictionaryCacheEnd);
    operator_delete();
    g_dictionaryCacheInitialised = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041130c  ExpandQueryMacros   (612 bytes)   [notes+analysis]
//   replaces unescaped @ and # with the configured expansions; \x pairs are copied verbatim
/* WARNING: Removing unreachable block (ram,0x0041134d) */
int __cdecl ExpandQueryMacros(int result,int expansions,int query)

{
  uint len;
  char ch;
  int queryLen;
  int i;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 out [8];
  undefined4 *outData;
  
  __InitExceptBlockLDTC(0x42ddb0);
  outData = (undefined4 *)&g_emptyStringData;
  queryLen = *(int *)(*(int *)(query + 8) + -4);
  i = 0;
  if (0 < queryLen) {
    do {
      ch = *(char *)(*(int *)(query + 8) + i);
      if ((ch == '@') && (*(int *)(*(int *)(expansions + 8) + -4) != 0)) {
        std::string::append((int)out,expansions);
      }
      else if ((ch == '#') && (*(int *)(*(int *)(expansions + 0x18) + -4) != 0)) {
        std::string::append((int)out,expansions + 0x10);
      }
      else {
        if ((ch == '\\') && (i + 1 < queryLen)) {
          std::string::replace_fill((int)out,outData[-1],0,1,0x5c);
          i = i + 1;
          ch = *(char *)(*(int *)(query + 8) + i);
        }
        std::string::replace_fill((int)out,outData[-1],0,1,ch);
      }
      i = i + 1;
    } while (i < queryLen);
  }
  *(undefined4 *)(result + 8) = 0;
  if (outData[-3] == -1 || outData[-3] + 1 < 0) {
    len = outData[-1];
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),outData,len);
  }
  else {
    *(undefined4 **)(result + 8) = outData;
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (outData != (undefined4 *)0x0) {
    if (outData[-3] != -1) {
      rep = outData + -3;
      if (rep == &g_nullStringRep) {
        queryLen = 1;
      }
      else if (rep == &g_nullStringRep) {
        queryLen = 1;
      }
      else {
        *rep = *rep + -1;
        queryLen = *rep + 1;
      }
      if (queryLen != 0) goto LAB_00411555;
    }
    operator_delete();
  }
LAB_00411555:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411570  LoadPatternOptions   (926 bytes)   [analysis]
//   reads ExpansionAt, ExpansionHash, VariablesExclusive, IgnoreUnusedPunctuation from the registry profile
//   file placement: inferred (address adjacency)
void __cdecl LoadPatternOptions(int options,int keyPath)

{
  uint found;
  int out;
  int *strRep;
  undefined4 *sehChainHead;
  char missing;
  undefined4 *out2;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  char persist [8];
  
  __InitExceptBlockLDTC(0x42de6c);
  Persist::Persist(persist,keyPath,'\0','\0');
  out = options;
  std::string::string_from_cstr((int)valueName4,(uint *)"ExpansionAt");
  found = Persist::QueryString((int)persist,(int)valueName4,out);
  missing = (found & 0xff) == 0;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_0041165b;
    }
    operator_delete();
    str4 = 0;
  }
LAB_0041165b:
  if (missing != '\0') {
    std::string::assign_cstr(options,(uint *)"[aeiou]");
  }
  out = options + 0x10;
  std::string::string_from_cstr((int)valueName3,(uint *)"ExpansionHash");
  found = Persist::QueryString((int)persist,(int)valueName3,out);
  missing = (found & 0xff) == 0;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_00411732;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00411732:
  if (missing != '\0') {
    std::string::assign_cstr(options + 0x10,(uint *)"[^aeiou]");
  }
  out2 = &g_exclusiveVariables;
  std::string::string_from_cstr((int)valueName2,(uint *)"VariablesExclusive");
  found = Persist::QueryDword((int)persist,(int)valueName2,out2);
  missing = (found & 0xff) == 0;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_0041180d;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0041180d:
  if (missing != '\0') {
    g_exclusiveVariables = 1;
  }
  out2 = (undefined4 *)(options + 0x20);
  std::string::string_from_cstr((int)valueName,(uint *)"IgnoreUnusedPunctuation");
  found = Persist::QueryDword((int)persist,(int)valueName,out2);
  missing = (found & 0xff) == 0;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else if (strRep == &g_nullStringRep) {
        out = 1;
      }
      else {
        *strRep = *strRep + -1;
        out = *strRep + 1;
      }
      if (out != 0) goto LAB_004118e0;
    }
    operator_delete();
    str = 0;
  }
LAB_004118e0:
  if (missing != '\0') {
    *(undefined4 *)(options + 0x20) = 1;
  }
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411910  NextTokenInt   (41 bytes)   [analysis]
//   atoi of the next strtok token (0 when there is none)
//   file placement: inferred (address adjacency)
int __stdcall NextTokenInt(void)

{
  char *token;
  int value;
  
  token = strtok((char *)0x0,g_fieldSeparators);
  if (token != (char *)0x0) {
    value = atoi(token);
    return value;
  }
  return 0;
}

} // namespace tea

// TEACON.exe — application module "TEAViewProfileWindows"
// 2 functions, 0x0040f26c..0x00411148. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040f26c  TEAViewProfileWindows::TEAViewProfileWindows   (7863 bytes)   [analysis]
//   constructor: sets every setting to its default, then reads the pattern options, fonts, colours, view settings and the dictionary list from the registry profile at keyPath; the dictionary list defaults to every bundled dictionary that exists
/* WARNING: Removing unreachable block (ram,0x0040f2dc) */
/* WARNING: Removing unreachable block (ram,0x0040f331) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl TEAViewProfileWindows::TEAViewProfileWindows(int self,int keyPath)

{
  undefined *extension;
  int scratch;
  undefined4 *dst;
  undefined4 found;
  uint found2;
  char *len;
  uint *p;
  int keyPathCopy;
  int *intOut;
  undefined **nameSrc;
  uint i;
  undefined4 *sehChainHead;
  char invalid;
  byte backwards;
  undefined1 *listArg;
  undefined **nameAt;
  undefined4 dictionaryNames [12];
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  int *strRep;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  int unused8;
  undefined1 *unused9;
  undefined4 unused10;
  int unused11;
  int unused12;
  int *strRep2;
  int groupingSense;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep3;
  undefined1 *unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int *strRep4;
  undefined1 *unused21;
  undefined4 unused22;
  int unused23;
  int unused24;
  int *strRep5;
  undefined1 *unused25;
  undefined4 unused26;
  int unused27;
  int unused28;
  int *strRep6;
  undefined1 *unused29;
  undefined4 unused30;
  int unused31;
  int unused32;
  int *strRep7;
  undefined1 *unused33;
  undefined4 unused34;
  int unused35;
  int unused36;
  int *strRep8;
  undefined1 *unused37;
  undefined4 unused38;
  int unused39;
  int unused40;
  int *strRep9;
  undefined1 *unused41;
  undefined4 unused42;
  int unused43;
  int unused44;
  int *strRep10;
  undefined1 *unused45;
  undefined4 unused46;
  int unused47;
  int unused48;
  int *strRep11;
  undefined1 *unused49;
  undefined4 unused50;
  int unused51;
  int unused52;
  int *strRep12;
  undefined1 *unused53;
  undefined4 unused54;
  int unused55;
  int unused56;
  int *strRep13;
  undefined1 *unused57;
  undefined4 unused58;
  int unused59;
  int unused60;
  int *strRep14;
  undefined1 *unused61;
  undefined4 unused62;
  int unused63;
  int unused64;
  int *strRep15;
  undefined1 *unused65;
  undefined4 unused66;
  int unused67;
  int unused68;
  int *strRep16;
  undefined1 *unused69;
  undefined4 unused70;
  int unused71;
  int unused72;
  int *strRep17;
  undefined1 *unused73;
  undefined4 unused74;
  int unused75;
  int unused76;
  int *strRep18;
  undefined1 *unused77;
  undefined4 unused78;
  int unused79;
  int unused80;
  int *strRep19;
  undefined1 *unused81;
  undefined4 unused82;
  int unused83;
  int unused84;
  int *strRep20;
  undefined1 *unused85;
  undefined4 unused86;
  int unused87;
  int unused88;
  int *strRep21;
  undefined1 *unused89;
  undefined4 unused90;
  int unused91;
  int unused92;
  undefined4 *dest;
  undefined4 *src;
  uint unused93;
  int unused94;
  int *newRep;
  int *newData;
  uint len2;
  int *strRep22;
  int unused95;
  undefined4 keyPathData;
  undefined4 unused96;
  int unused97;
  undefined1 *unused98;
  undefined4 unused99;
  int unused100;
  undefined1 *unused101;
  undefined4 unused102;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 resolved [8];
  int resolvedData;
  undefined1 valueName [8];
  int str7;
  undefined1 candidateResolved [8];
  int candidateResolvedData;
  undefined1 candidate [8];
  LPCSTR candidateData;
  undefined1 defaultPath [8];
  int defaultPathData;
  undefined1 valueName2 [8];
  int str8;
  undefined1 valueName3 [8];
  int str9;
  undefined1 valueName4 [8];
  int str10;
  undefined1 valueName5 [8];
  int str11;
  undefined1 valueName6 [8];
  int str12;
  undefined1 valueName7 [8];
  int str13;
  undefined1 valueName8 [8];
  int str14;
  undefined1 valueName9 [8];
  int str15;
  undefined1 valueName10 [8];
  int str16;
  undefined1 valueName11 [8];
  int str17;
  undefined1 str [8];
  int str18;
  undefined1 valueName12 [8];
  int str19;
  undefined1 str2 [8];
  int str20;
  undefined1 valueName13 [8];
  int str21;
  undefined1 valueName14 [8];
  int str22;
  undefined1 str3 [8];
  int str23;
  undefined1 valueName15 [8];
  int str24;
  undefined1 str4 [8];
  int str25;
  undefined1 valueName16 [8];
  int str26;
  undefined1 str5 [8];
  int str27;
  undefined1 valueName17 [8];
  int str28;
  undefined1 str6 [8];
  int str29;
  undefined1 dictionaryList [8];
  uint *dictionaryListData;
  char persist [8];
  
  backwards = 0;
  __InitExceptBlockLDTC(0x42da74);
  unused102 = 0;
  *(undefined4 *)(self + 8) = 0;
  unused101 = &g_emptyStringData;
  *(undefined1 **)(self + 8) = &g_emptyStringData;
  unused100 = self;
  unused99 = 0;
  unused97 = self + 0x10;
  *(undefined4 *)(self + 0x18) = 0;
  unused98 = &g_emptyStringData;
  *(undefined1 **)(self + 0x18) = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  *(undefined4 *)(self + 0x24) = 0;
  *(undefined4 *)(self + 0x2c) = 0xffffff;
  *(undefined4 *)(self + 0x1b0) = 0;
  *(undefined4 *)(self + 0x1b4) = 1;
  *(undefined4 *)(self + 0x1b8) = 1;
  *(undefined1 *)(self + 0x1bc) = 0;
  *(undefined4 *)(self + 0x1c0) = 1;
  *(undefined4 *)(self + 0x1c4) = 1;
  *(undefined4 *)(self + 0x1c8) = 0;
  keyPathCopy = self + 0x1e0;
  unused96 = 0;
  *(undefined4 *)(self + 0x1e8) = 0;
  ehContext = 0x2c;
  scratch = *(int *)(*(int *)(keyPath + 8) + -0xc);
  if (scratch == -1 || scratch + 1 < 0) {
    len2 = *(uint *)(*(int *)(keyPath + 8) + -4);
    newRep = std::string::__getRep(keyPathCopy,len2,len2);
    newData = newRep + 3;
    *(int **)(self + 0x1e8) = newData;
    unused93 = len2;
    src = *(undefined4 **)(keyPath + 8);
    dest = *(undefined4 **)(self + 0x1e8);
    unused94 = keyPathCopy;
    memcpy(dest,src,len2);
  }
  else {
    keyPathData = *(undefined4 *)(keyPath + 8);
    *(undefined4 *)(self + 0x1e8) = keyPathData;
    strRep22 = (int *)(*(int *)(self + 0x1e8) + -0xc);
    unused95 = keyPathCopy;
    if (strRep22 != &g_nullStringRep) {
      *strRep22 = *strRep22 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  LoadPatternOptions(self,keyPath);
  ehContext = 0x44;
  Persist::Persist(persist,keyPath,'\0','\0');
  ehDtorCount = ehDtorCount + 1;
  p = (uint *)(self + 0x30);
  ehContext = 0x5c;
  scratch = std::string::string_from_cstr((int)str6,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName17,(uint *)"FontPattern");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName17,scratch,p);
  ehDtorCount = ehDtorCount + -1;
  if (str28 != 0) {
    if (*(int *)(str28 + -0xc) != -1) {
      intOut = (int *)(str28 + -0xc);
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
      if (scratch != 0) goto LAB_0040f5d3;
    }
    unused92 = str28 + -0xc;
    unused91 = str28 + -0xc;
    operator_delete();
    unused90 = 0;
    unused89 = valueName17;
    str28 = 0;
  }
LAB_0040f5d3:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str29 != 0) {
    if (*(int *)(str29 + -0xc) != -1) {
      strRep21 = (int *)(str29 + -0xc);
      if (strRep21 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep21 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep21 = *strRep21 + -1;
        scratch = *strRep21 + 1;
      }
      if (scratch != 0) goto LAB_0040f688;
    }
    unused88 = str29 + -0xc;
    unused87 = str29 + -0xc;
    operator_delete();
    unused86 = 0;
    unused85 = str6;
    str29 = 0;
  }
LAB_0040f688:
  p = (uint *)(self + 0x70);
  ehContext = 0x80;
  scratch = std::string::string_from_cstr((int)str5,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName16,(uint *)"FontOutput");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName16,scratch,p);
  ehDtorCount = ehDtorCount + -1;
  if (str26 != 0) {
    if (*(int *)(str26 + -0xc) != -1) {
      strRep20 = (int *)(str26 + -0xc);
      if (strRep20 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep20 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep20 = *strRep20 + -1;
        scratch = *strRep20 + 1;
      }
      if (scratch != 0) goto LAB_0040f78b;
    }
    unused84 = str26 + -0xc;
    unused83 = str26 + -0xc;
    operator_delete();
    unused82 = 0;
    unused81 = valueName16;
    str26 = 0;
  }
LAB_0040f78b:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str27 != 0) {
    if (*(int *)(str27 + -0xc) != -1) {
      strRep19 = (int *)(str27 + -0xc);
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
      if (scratch != 0) goto LAB_0040f840;
    }
    unused80 = str27 + -0xc;
    unused79 = str27 + -0xc;
    operator_delete();
    unused78 = 0;
    unused77 = str5;
    str27 = 0;
  }
LAB_0040f840:
  p = (uint *)(self + 0xb0);
  ehContext = 0xa4;
  scratch = std::string::string_from_cstr((int)str4,(uint *)"0,0,0,-16,0,0,0,400,255,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName15,(uint *)"FontOutputAnnotation");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName15,scratch,p);
  ehDtorCount = ehDtorCount + -1;
  if (str24 != 0) {
    if (*(int *)(str24 + -0xc) != -1) {
      strRep18 = (int *)(str24 + -0xc);
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
      if (scratch != 0) goto LAB_0040f945;
    }
    unused76 = str24 + -0xc;
    unused75 = str24 + -0xc;
    operator_delete();
    unused74 = 0;
    unused73 = valueName15;
    str24 = 0;
  }
LAB_0040f945:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str25 != 0) {
    if (*(int *)(str25 + -0xc) != -1) {
      strRep17 = (int *)(str25 + -0xc);
      if (strRep17 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep17 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep17 = *strRep17 + -1;
        scratch = *strRep17 + 1;
      }
      if (scratch != 0) goto LAB_0040f9fa;
    }
    unused72 = str25 + -0xc;
    unused71 = str25 + -0xc;
    operator_delete();
    unused70 = 0;
    unused69 = str4;
    str25 = 0;
  }
LAB_0040f9fa:
  p = (uint *)(self + 0xf0);
  ehContext = 200;
  scratch = std::string::string_from_cstr((int)str3,(uint *)"0,0,0,-13,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName14,(uint *)"FontPrinting");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName14,scratch,p);
  ehDtorCount = ehDtorCount + -1;
  if (str22 != 0) {
    if (*(int *)(str22 + -0xc) != -1) {
      strRep16 = (int *)(str22 + -0xc);
      if (strRep16 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep16 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep16 = *strRep16 + -1;
        scratch = *strRep16 + 1;
      }
      if (scratch != 0) goto LAB_0040fb1d;
    }
    unused68 = str22 + -0xc;
    unused67 = str22 + -0xc;
    operator_delete();
    unused66 = 0;
    unused65 = valueName14;
    str22 = 0;
  }
LAB_0040fb1d:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str23 != 0) {
    if (*(int *)(str23 + -0xc) != -1) {
      strRep15 = (int *)(str23 + -0xc);
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
      if (scratch != 0) goto LAB_0040fbd5;
    }
    unused64 = str23 + -0xc;
    unused63 = str23 + -0xc;
    operator_delete();
    unused62 = 0;
    unused61 = str3;
    str23 = 0;
  }
LAB_0040fbd5:
  p = (uint *)(self + 0x2c);
  ehContext = 0xec;
  std::string::string_from_cstr((int)valueName13,(uint *)"DefinitionBackgroundColor");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryColour((int)persist,(int)valueName13,p);
  ehDtorCount = ehDtorCount + -1;
  if (str21 != 0) {
    if (*(int *)(str21 + -0xc) != -1) {
      strRep14 = (int *)(str21 + -0xc);
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
      if (scratch != 0) goto LAB_0040fcd7;
    }
    unused60 = str21 + -0xc;
    unused59 = str21 + -0xc;
    operator_delete();
    unused58 = 0;
    unused57 = valueName13;
    str21 = 0;
  }
LAB_0040fcd7:
  p = (uint *)(self + 0x170);
  ehContext = 0x104;
  std::string::string_from_cstr((int)str2,(uint *)"255,0,0,-16,0,0,0,400,255,0,0,0,3,2,1,18,Times New Roman");
  listArg = str2;
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName12,(uint *)"DefinitionHighlightFont");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName12,(int)listArg,p);
  ehDtorCount = ehDtorCount + -1;
  if (str19 != 0) {
    if (*(int *)(str19 + -0xc) != -1) {
      strRep13 = (int *)(str19 + -0xc);
      if (strRep13 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep13 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep13 = *strRep13 + -1;
        scratch = *strRep13 + 1;
      }
      if (scratch != 0) goto LAB_0040fe06;
    }
    unused56 = str19 + -0xc;
    unused55 = str19 + -0xc;
    operator_delete();
    unused54 = 0;
    unused53 = valueName12;
    str19 = 0;
  }
LAB_0040fe06:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str20 != 0) {
    if (*(int *)(str20 + -0xc) != -1) {
      strRep12 = (int *)(str20 + -0xc);
      if (strRep12 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep12 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep12 = *strRep12 + -1;
        scratch = *strRep12 + 1;
      }
      if (scratch != 0) goto LAB_0040fed0;
    }
    unused52 = str20 + -0xc;
    unused51 = str20 + -0xc;
    operator_delete();
    unused50 = 0;
    unused49 = str2;
    str20 = 0;
  }
LAB_0040fed0:
  p = (uint *)(self + 0x130);
  ehContext = 0x128;
  std::string::string_from_cstr((int)str,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,3,2,1,18,Times New Roman");
  listArg = str;
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName11,(uint *)"DefinitionDefaultFont");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName11,(int)listArg,p);
  ehDtorCount = ehDtorCount + -1;
  if (str17 != 0) {
    if (*(int *)(str17 + -0xc) != -1) {
      strRep11 = (int *)(str17 + -0xc);
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
      if (scratch != 0) goto LAB_0040fff9;
    }
    unused48 = str17 + -0xc;
    unused47 = str17 + -0xc;
    operator_delete();
    unused46 = 0;
    unused45 = valueName11;
    str17 = 0;
  }
LAB_0040fff9:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str18 != 0) {
    if (*(int *)(str18 + -0xc) != -1) {
      strRep10 = (int *)(str18 + -0xc);
      if (strRep10 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep10 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep10 = *strRep10 + -1;
        scratch = *strRep10 + 1;
      }
      if (scratch != 0) goto LAB_004100c3;
    }
    unused44 = str18 + -0xc;
    unused43 = str18 + -0xc;
    operator_delete();
    unused42 = 0;
    unused41 = str;
    str18 = 0;
  }
LAB_004100c3:
  dst = (undefined4 *)(self + 0x24);
  ehContext = 0x14c;
  std::string::string_from_cstr((int)valueName10,(uint *)"ViewMultipleDictionaries");
  ehDtorCount = ehDtorCount + 1;
  found = Persist::QueryDword((int)persist,(int)valueName10,dst);
  if (((char)found == '\0') || ((-1 < *(int *)(self + 0x24) && (*(int *)(self + 0x24) < 3))))
  {
    invalid = '\0';
  }
  else {
    invalid = '\x01';
  }
  ehDtorCount = ehDtorCount + -1;
  if (str16 != 0) {
    if (*(int *)(str16 + -0xc) != -1) {
      strRep9 = (int *)(str16 + -0xc);
      if (strRep9 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep9 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep9 = *strRep9 + -1;
        scratch = *strRep9 + 1;
      }
      if (scratch != 0) goto LAB_004101e5;
    }
    unused40 = str16 + -0xc;
    unused39 = str16 + -0xc;
    operator_delete();
    unused38 = 0;
    unused37 = valueName10;
    str16 = 0;
  }
LAB_004101e5:
  if (invalid != '\0') {
    *(undefined4 *)(self + 0x24) = 0;
  }
  dst = (undefined4 *)(self + 0x1b0);
  ehContext = 0x164;
  std::string::string_from_cstr((int)valueName9,(uint *)"ViewSorting");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName9,dst);
  ehDtorCount = ehDtorCount + -1;
  if (str15 != 0) {
    if (*(int *)(str15 + -0xc) != -1) {
      strRep8 = (int *)(str15 + -0xc);
      if (strRep8 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep8 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep8 = *strRep8 + -1;
        scratch = *strRep8 + 1;
      }
      if (scratch != 0) goto LAB_004102f6;
    }
    unused36 = str15 + -0xc;
    unused35 = str15 + -0xc;
    operator_delete();
    unused34 = 0;
    unused33 = valueName9;
    str15 = 0;
  }
LAB_004102f6:
  dst = (undefined4 *)(self + 0x1b4);
  ehContext = 0x17c;
  std::string::string_from_cstr((int)valueName8,(uint *)"ViewSortingAscending");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName8,dst);
  ehDtorCount = ehDtorCount + -1;
  if (str14 != 0) {
    if (*(int *)(str14 + -0xc) != -1) {
      strRep7 = (int *)(str14 + -0xc);
      if (strRep7 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep7 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep7 = *strRep7 + -1;
        scratch = *strRep7 + 1;
      }
      if (scratch != 0) goto LAB_00410400;
    }
    unused32 = str14 + -0xc;
    unused31 = str14 + -0xc;
    operator_delete();
    unused30 = 0;
    unused29 = valueName8;
    str14 = 0;
  }
LAB_00410400:
  dst = (undefined4 *)(self + 0x1b8);
  ehContext = 0x194;
  std::string::string_from_cstr((int)valueName7,(uint *)"ViewLengthGrouping");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName7,dst);
  ehDtorCount = ehDtorCount + -1;
  if (str13 != 0) {
    if (*(int *)(str13 + -0xc) != -1) {
      strRep6 = (int *)(str13 + -0xc);
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
      if (scratch != 0) goto LAB_0041050a;
    }
    unused28 = str13 + -0xc;
    unused27 = str13 + -0xc;
    operator_delete();
    unused26 = 0;
    unused25 = valueName7;
    str13 = 0;
  }
LAB_0041050a:
  dst = (undefined4 *)(self + 0x1c0);
  ehContext = 0x1ac;
  std::string::string_from_cstr((int)valueName6,(uint *)"ViewShowAnnotations");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName6,dst);
  ehDtorCount = ehDtorCount + -1;
  if (str12 != 0) {
    if (*(int *)(str12 + -0xc) != -1) {
      strRep5 = (int *)(str12 + -0xc);
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
      if (scratch != 0) goto LAB_00410614;
    }
    unused24 = str12 + -0xc;
    unused23 = str12 + -0xc;
    operator_delete();
    unused22 = 0;
    unused21 = valueName6;
    str12 = 0;
  }
LAB_00410614:
  dst = (undefined4 *)(self + 0x1c4);
  ehContext = 0x1c4;
  std::string::string_from_cstr((int)valueName5,(uint *)"ViewShowBalances");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName5,dst);
  ehDtorCount = ehDtorCount + -1;
  if (str11 != 0) {
    if (*(int *)(str11 + -0xc) != -1) {
      strRep4 = (int *)(str11 + -0xc);
      if (strRep4 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep4 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep4 = *strRep4 + -1;
        scratch = *strRep4 + 1;
      }
      if (scratch != 0) goto LAB_0041071e;
    }
    unused20 = str11 + -0xc;
    unused19 = str11 + -0xc;
    operator_delete();
    unused18 = 0;
    unused17 = valueName5;
    str11 = 0;
  }
LAB_0041071e:
  dst = (undefined4 *)(self + 0x1c8);
  ehContext = 0x1dc;
  std::string::string_from_cstr((int)valueName4,(uint *)"ViewDoubleClick");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName4,dst);
  ehDtorCount = ehDtorCount + -1;
  if (str10 != 0) {
    if (*(int *)(str10 + -0xc) != -1) {
      strRep3 = (int *)(str10 + -0xc);
      if (strRep3 == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        scratch = *strRep3 + 1;
      }
      if (scratch != 0) goto LAB_00410828;
    }
    unused16 = str10 + -0xc;
    unused15 = str10 + -0xc;
    operator_delete();
    unused14 = 0;
    unused13 = valueName4;
    str10 = 0;
  }
LAB_00410828:
  intOut = &groupingSense;
  ehContext = 500;
  std::string::string_from_cstr((int)valueName3,(uint *)"ViewLengthGroupingSense");
  ehDtorCount = ehDtorCount + 1;
  found = Persist::QueryDword((int)persist,(int)valueName3,intOut);
  if ((((char)found == '\0') || (groupingSense < -1)) || (1 < groupingSense)) {
    invalid = '\0';
  }
  else {
    invalid = '\x01';
  }
  ehDtorCount = ehDtorCount + -1;
  if (str9 != 0) {
    if (*(int *)(str9 + -0xc) != -1) {
      strRep2 = (int *)(str9 + -0xc);
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
      if (scratch != 0) goto LAB_00410950;
    }
    unused12 = str9 + -0xc;
    unused11 = str9 + -0xc;
    operator_delete();
    unused10 = 0;
    unused9 = valueName3;
    str9 = 0;
  }
LAB_00410950:
  if (invalid != '\0') {
    *(undefined1 *)(self + 0x1bc) = (undefined1)groupingSense;
  }
  nameAt = &PTR_s_OutputLower_0042d554;
  i = 0;
  do {
    dst = (undefined4 *)(i * 4 + self + 0x1cc);
    ehContext = 0x20c;
    std::string::string_from_cstr((int)valueName2,(uint *)*nameAt);
    ehDtorCount = ehDtorCount + 1;
    found2 = Persist::QueryDword((int)persist,(int)valueName2,dst);
    invalid = (found2 & 0xff) == 0;
    ehDtorCount = ehDtorCount + -1;
    if (str8 != 0) {
      if (*(int *)(str8 + -0xc) != -1) {
        intOut = (int *)(str8 + -0xc);
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
        if (scratch != 0) goto LAB_00410a73;
      }
      unused8 = str8 + -0xc;
      unused7 = str8 + -0xc;
      operator_delete();
      unused6 = 0;
      unused5 = valueName2;
      str8 = 0;
    }
LAB_00410a73:
    if (invalid != '\0') {
      *(undefined4 *)(self + 0x1cc + i * 4) = 1;
    }
    i = i + 1;
    nameAt = nameAt + 1;
  } while (i < 4);
  ehContext = 0x224;
  std::string::string_from_cstr((int)defaultPath,(uint *)"Dictionaries\\Unedited English.tsd");
  ehDtorCount = ehDtorCount + 1;
  ResolveRelativePaths((int)dictionaryList,(int)defaultPath);
  if (defaultPathData != 0) {
    if (*(int *)(defaultPathData + -0xc) != -1) {
      strRep = (int *)(defaultPathData + -0xc);
      if (strRep == &g_nullStringRep) {
        scratch = 1;
      }
      else if (strRep == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *strRep = *strRep + -1;
        scratch = *strRep + 1;
      }
      if (scratch != 0) goto LAB_00410b95;
    }
    unused4 = defaultPathData + -0xc;
    unused3 = defaultPathData + -0xc;
    operator_delete();
    unused2 = 0;
    unused = defaultPath;
    defaultPathData = 0;
  }
LAB_00410b95:
  nameSrc = &PTR_s_1913_Webster_s_Unabridged_0042d698;
  dst = dictionaryNames;
  for (scratch = 0xc; scratch != 0; scratch = scratch + -1) {
    *dst = *nameSrc;
    nameSrc = nameSrc + (uint)backwards * -2 + 1;
    dst = dst + (uint)backwards * -2 + 1;
  }
  i = 0;
  nameAt = (undefined **)dictionaryNames;
  do {
    ehContext = 0x23c;
    std::string::string_from_cstr((int)candidate,(uint *)"Dictionaries\\");
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x248;
    p = (uint *)*nameAt;
    found2 = *(uint *)(candidateData + -4);
    len = strlen(p);
    std::string::replace((int)candidate,found2,0,(uint)p,(uint)len,0,(uint)len);
    extension = PTR_DAT_0042bc44;
    found2 = *(uint *)(candidateData + -4);
    len = strlen((uint *)PTR_DAT_0042bc44);
    std::string::replace((int)candidate,found2,0,(uint)extension,(uint)len,0,(uint)len);
    ehContext = 0x254;
    ResolveRelativePaths((int)candidateResolved,(int)candidate);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)candidate,(int)candidateResolved);
    ehDtorCount = ehDtorCount + -1;
    if (candidateResolvedData != 0) {
      if (*(int *)(candidateResolvedData + -0xc) != -1) {
        intOut = (int *)(candidateResolvedData + -0xc);
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
        if (scratch != 0) goto LAB_00410d36;
      }
      operator_delete();
      candidateResolvedData = 0;
    }
LAB_00410d36:
    ehContext = 0x248;
    scratch = thunk_access(candidateData,0);
    if (scratch == 0) {
      std::string::replace_fill((int)dictionaryList,dictionaryListData[-1],0,1,0x3b);
      std::string::append((int)dictionaryList,(int)candidate);
    }
    ehDtorCount = ehDtorCount + -1;
    if (candidateData != (LPCSTR)0x0) {
      if (*(int *)(candidateData + -0xc) != -1) {
        intOut = (int *)(candidateData + -0xc);
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
        if (scratch != 0) goto LAB_00410e25;
      }
      operator_delete();
      candidateData = (LPCSTR)0x0;
    }
LAB_00410e25:
    i = i + 1;
    nameAt = nameAt + 1;
  } while (i < 0xc);
  listArg = dictionaryList;
  ehContext = 0x278;
  std::string::string_from_cstr((int)valueName,(uint *)"ViewDefinitionDictionary");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName,(int)listArg);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      intOut = (int *)(str7 + -0xc);
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
      if (scratch != 0) goto LAB_00410f3b;
    }
    operator_delete();
    str7 = 0;
  }
LAB_00410f3b:
  ehContext = 0x290;
  ResolveRelativePaths((int)resolved,(int)dictionaryList);
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign((int)dictionaryList,(int)resolved);
  ehDtorCount = ehDtorCount + -1;
  if (resolvedData != 0) {
    if (*(int *)(resolvedData + -0xc) != -1) {
      intOut = (int *)(resolvedData + -0xc);
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
      if (scratch != 0) goto LAB_00411034;
    }
    operator_delete();
    resolvedData = 0;
  }
LAB_00411034:
  ehContext = 0x50;
  dst = TSDictionaryList::Open(dictionaryListData);
  *(undefined4 **)(self + 0x28) = dst;
  ehDtorCount = ehDtorCount + -1;
  if (dictionaryListData != (uint *)0x0) {
    if (dictionaryListData[-3] != 0xffffffff) {
      p = dictionaryListData + -3;
      if (p == &g_nullStringRep) {
        scratch = 1;
      }
      else if (p == &g_nullStringRep) {
        scratch = 1;
      }
      else {
        *p = *p - 1;
        scratch = *p + 1;
      }
      if (scratch != 0) goto LAB_004110f9;
    }
    operator_delete();
    dictionaryListData = (uint *)0x0;
  }
LAB_004110f9:
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411148  TEAViewProfileWindows::~TEAViewProfileWindows   (449 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewProfileWindows::_dtor
void __cdecl TEAViewProfileWindows::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42dd38);
  if (self == 0) goto LAB_004112f9;
  TSDictionaryList::ReleaseDictionaries(*(int *)(self + 0x28));
  if (*(int *)(self + 0x1e8) != 0) {
    if (*(int *)(*(int *)(self + 0x1e8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x1e8) + -0xc);
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
      if (prevRefs != 0) goto LAB_004111f6;
    }
    operator_delete();
    *(undefined4 *)(self + 0x1e8) = 0;
  }
LAB_004111f6:
  if (*(int *)(self + 0x18) != 0) {
    if (*(int *)(*(int *)(self + 0x18) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x18) + -0xc);
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
      if (prevRefs != 0) goto LAB_0041126a;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_0041126a:
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
      if (prevRefs != 0) goto LAB_004112e9;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_004112e9:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004112f9:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

// TEA.exe — application module "TEAViewProfileWindows"
// 3 functions, 0x00437fc4..0x0043a064. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00437fc4  TEAViewProfileWindows::TEAViewProfileWindows   (7864 bytes)   [analysis]
//   constructor: defaults, then the pattern options, fonts, colours, view settings and dictionary list from the registry profile (TEA.exe version)
/* WARNING: Removing unreachable block (ram,0x00438034) */
/* WARNING: Removing unreachable block (ram,0x00438089) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl TEAViewProfileWindows::TEAViewProfileWindows(int self,int keyPath)

{
  undefined *s;
  int defaultText;
  undefined4 *out;
  undefined4 uVar4;
  uint uVar5;
  char *len;
  uint *logFont;
  int iVar8;
  int *out2;
  undefined **ppuVar10;
  uint uVar11;
  undefined4 *sehChainHead;
  char cVar12;
  byte bVar13;
  undefined1 *defaultText2;
  undefined **local_55c;
  undefined4 local_4e4 [12];
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
  int local_464;
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
  undefined4 local_210;
  undefined4 unused96;
  int unused97;
  undefined *unused98;
  undefined4 unused99;
  int unused100;
  undefined *unused101;
  undefined4 unused102;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str7;
  undefined1 valueName [8];
  int str8;
  undefined1 result2 [8];
  int str9;
  undefined1 paths2 [8];
  LPCSTR fileName;
  undefined1 paths3 [8];
  int str10;
  undefined1 valueName2 [8];
  int str11;
  undefined1 valueName3 [8];
  int str12;
  undefined1 valueName4 [8];
  int str13;
  undefined1 valueName5 [8];
  int str14;
  undefined1 valueName6 [8];
  int str15;
  undefined1 valueName7 [8];
  int str16;
  undefined1 valueName8 [8];
  int str17;
  undefined1 valueName9 [8];
  int str18;
  undefined1 valueName10 [8];
  int str19;
  undefined1 valueName11 [8];
  int str20;
  undefined1 str [8];
  int str21;
  undefined1 valueName12 [8];
  int str22;
  undefined1 str2 [8];
  int str23;
  undefined1 valueName13 [8];
  int str24;
  undefined1 valueName14 [8];
  int str25;
  undefined1 str3 [8];
  int str26;
  undefined1 valueName15 [8];
  int str27;
  undefined1 str4 [8];
  int str28;
  undefined1 valueName16 [8];
  int str29;
  undefined1 str5 [8];
  int str30;
  undefined1 valueName17 [8];
  int str31;
  undefined1 str6 [8];
  int str32;
  undefined1 local_1c [8];
  uint *paths;
  int persist [2];
  
  bVar13 = 0;
  __InitExceptBlockLDTC(0x4f43e0);
  unused102 = 0;
  *(undefined4 *)(self + 8) = 0;
  unused101 = &g_emptyStringData;
  *(undefined **)(self + 8) = &g_emptyStringData;
  unused100 = self;
  unused99 = 0;
  unused97 = self + 0x10;
  *(undefined4 *)(self + 0x18) = 0;
  unused98 = &g_emptyStringData;
  *(undefined **)(self + 0x18) = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  *(undefined4 *)(self + 0x24) = 0;
  *(undefined4 *)(self + 0x2c) = 0xffffff;
  *(undefined4 *)(self + 0x1b0) = 0;
  *(undefined4 *)(self + 0x1b4) = 1;
  *(undefined4 *)(self + 0x1b8) = 1;
  *(undefined4 *)(self + 0x1bc) = 0;
  *(undefined4 *)(self + 0x1c0) = 1;
  *(undefined4 *)(self + 0x1c4) = 1;
  *(undefined4 *)(self + 0x1c8) = 0;
  iVar8 = self + 0x1e0;
  unused96 = 0;
  *(undefined4 *)(self + 0x1e8) = 0;
  ehContext = 0x2c;
  defaultText = *(int *)(*(int *)(keyPath + 8) + -0xc);
  if (defaultText == -1 || defaultText + 1 < 0) {
    len2 = *(uint *)(*(int *)(keyPath + 8) + -4);
    newRep = std::string::__getRep(iVar8,len2,len2);
    newData = newRep + 3;
    *(int **)(self + 0x1e8) = newData;
    unused93 = len2;
    src = *(undefined4 **)(keyPath + 8);
    dest = *(undefined4 **)(self + 0x1e8);
    unused94 = iVar8;
    memcpy(dest,src,len2);
  }
  else {
    local_210 = *(undefined4 *)(keyPath + 8);
    *(undefined4 *)(self + 0x1e8) = local_210;
    strRep22 = (int *)(*(int *)(self + 0x1e8) + -0xc);
    unused95 = iVar8;
    if (strRep22 != &g_nullStringRep) {
      *strRep22 = *strRep22 + 1;
    }
  }
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  LoadPatternOptions(self,keyPath);
  ehContext = 0x44;
  Persist::Persist(persist,keyPath,0,0);
  ehDtorCount = ehDtorCount + 1;
  logFont = (uint *)(self + 0x30);
  ehContext = 0x5c;
  defaultText = std::string::string_from_cstr((int)str6,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName17,(uint *)"FontPattern");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName17,defaultText,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str31 != 0) {
    if (*(int *)(str31 + -0xc) != -1) {
      out2 = (int *)(str31 + -0xc);
      if (out2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (out2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *out2 = *out2 + -1;
        defaultText = *out2 + 1;
      }
      if (defaultText != 0) goto LAB_0043832c;
    }
    unused92 = str31 + -0xc;
    unused91 = str31 + -0xc;
    operator_delete();
    unused90 = 0;
    unused89 = valueName17;
    str31 = 0;
  }
LAB_0043832c:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str32 != 0) {
    if (*(int *)(str32 + -0xc) != -1) {
      strRep21 = (int *)(str32 + -0xc);
      if (strRep21 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep21 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep21 = *strRep21 + -1;
        defaultText = *strRep21 + 1;
      }
      if (defaultText != 0) goto LAB_004383e1;
    }
    unused88 = str32 + -0xc;
    unused87 = str32 + -0xc;
    operator_delete();
    unused86 = 0;
    unused85 = str6;
    str32 = 0;
  }
LAB_004383e1:
  logFont = (uint *)(self + 0x70);
  ehContext = 0x80;
  defaultText = std::string::string_from_cstr((int)str5,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName16,(uint *)"FontOutput");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName16,defaultText,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str29 != 0) {
    if (*(int *)(str29 + -0xc) != -1) {
      strRep20 = (int *)(str29 + -0xc);
      if (strRep20 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep20 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep20 = *strRep20 + -1;
        defaultText = *strRep20 + 1;
      }
      if (defaultText != 0) goto LAB_004384e4;
    }
    unused84 = str29 + -0xc;
    unused83 = str29 + -0xc;
    operator_delete();
    unused82 = 0;
    unused81 = valueName16;
    str29 = 0;
  }
LAB_004384e4:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str30 != 0) {
    if (*(int *)(str30 + -0xc) != -1) {
      strRep19 = (int *)(str30 + -0xc);
      if (strRep19 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep19 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep19 = *strRep19 + -1;
        defaultText = *strRep19 + 1;
      }
      if (defaultText != 0) goto LAB_00438599;
    }
    unused80 = str30 + -0xc;
    unused79 = str30 + -0xc;
    operator_delete();
    unused78 = 0;
    unused77 = str5;
    str30 = 0;
  }
LAB_00438599:
  logFont = (uint *)(self + 0xb0);
  ehContext = 0xa4;
  defaultText = std::string::string_from_cstr((int)str4,(uint *)"0,0,0,-16,0,0,0,400,255,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName15,(uint *)"FontOutputAnnotation");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName15,defaultText,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str27 != 0) {
    if (*(int *)(str27 + -0xc) != -1) {
      strRep18 = (int *)(str27 + -0xc);
      if (strRep18 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep18 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep18 = *strRep18 + -1;
        defaultText = *strRep18 + 1;
      }
      if (defaultText != 0) goto LAB_0043869e;
    }
    unused76 = str27 + -0xc;
    unused75 = str27 + -0xc;
    operator_delete();
    unused74 = 0;
    unused73 = valueName15;
    str27 = 0;
  }
LAB_0043869e:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str28 != 0) {
    if (*(int *)(str28 + -0xc) != -1) {
      strRep17 = (int *)(str28 + -0xc);
      if (strRep17 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep17 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep17 = *strRep17 + -1;
        defaultText = *strRep17 + 1;
      }
      if (defaultText != 0) goto LAB_00438753;
    }
    unused72 = str28 + -0xc;
    unused71 = str28 + -0xc;
    operator_delete();
    unused70 = 0;
    unused69 = str4;
    str28 = 0;
  }
LAB_00438753:
  logFont = (uint *)(self + 0xf0);
  ehContext = 200;
  defaultText = std::string::string_from_cstr((int)str3,(uint *)"0,0,0,-13,0,0,0,400,0,0,0,0,0,0,0,49,Courier New");
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName14,(uint *)"FontPrinting");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName14,defaultText,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str25 != 0) {
    if (*(int *)(str25 + -0xc) != -1) {
      strRep16 = (int *)(str25 + -0xc);
      if (strRep16 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep16 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep16 = *strRep16 + -1;
        defaultText = *strRep16 + 1;
      }
      if (defaultText != 0) goto LAB_00438876;
    }
    unused68 = str25 + -0xc;
    unused67 = str25 + -0xc;
    operator_delete();
    unused66 = 0;
    unused65 = valueName14;
    str25 = 0;
  }
LAB_00438876:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str26 != 0) {
    if (*(int *)(str26 + -0xc) != -1) {
      strRep15 = (int *)(str26 + -0xc);
      if (strRep15 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep15 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep15 = *strRep15 + -1;
        defaultText = *strRep15 + 1;
      }
      if (defaultText != 0) goto LAB_0043892e;
    }
    unused64 = str26 + -0xc;
    unused63 = str26 + -0xc;
    operator_delete();
    unused62 = 0;
    unused61 = str3;
    str26 = 0;
  }
LAB_0043892e:
  logFont = (uint *)(self + 0x2c);
  ehContext = 0xec;
  std::string::string_from_cstr((int)valueName13,(uint *)"DefinitionBackgroundColor");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryColour((int)persist,(int)valueName13,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str24 != 0) {
    if (*(int *)(str24 + -0xc) != -1) {
      strRep14 = (int *)(str24 + -0xc);
      if (strRep14 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep14 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep14 = *strRep14 + -1;
        defaultText = *strRep14 + 1;
      }
      if (defaultText != 0) goto LAB_00438a30;
    }
    unused60 = str24 + -0xc;
    unused59 = str24 + -0xc;
    operator_delete();
    unused58 = 0;
    unused57 = valueName13;
    str24 = 0;
  }
LAB_00438a30:
  logFont = (uint *)(self + 0x170);
  ehContext = 0x104;
  std::string::string_from_cstr((int)str2,(uint *)"255,0,0,-16,0,0,0,400,255,0,0,0,3,2,1,18,Times New Roman");
  defaultText2 = str2;
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName12,(uint *)"DefinitionHighlightFont");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName12,(int)defaultText2,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str22 != 0) {
    if (*(int *)(str22 + -0xc) != -1) {
      strRep13 = (int *)(str22 + -0xc);
      if (strRep13 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep13 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep13 = *strRep13 + -1;
        defaultText = *strRep13 + 1;
      }
      if (defaultText != 0) goto LAB_00438b5f;
    }
    unused56 = str22 + -0xc;
    unused55 = str22 + -0xc;
    operator_delete();
    unused54 = 0;
    unused53 = valueName12;
    str22 = 0;
  }
LAB_00438b5f:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str23 != 0) {
    if (*(int *)(str23 + -0xc) != -1) {
      strRep12 = (int *)(str23 + -0xc);
      if (strRep12 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep12 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep12 = *strRep12 + -1;
        defaultText = *strRep12 + 1;
      }
      if (defaultText != 0) goto LAB_00438c29;
    }
    unused52 = str23 + -0xc;
    unused51 = str23 + -0xc;
    operator_delete();
    unused50 = 0;
    unused49 = str2;
    str23 = 0;
  }
LAB_00438c29:
  logFont = (uint *)(self + 0x130);
  ehContext = 0x128;
  std::string::string_from_cstr((int)str,(uint *)"0,0,0,-16,0,0,0,400,0,0,0,0,3,2,1,18,Times New Roman");
  defaultText2 = str;
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName11,(uint *)"DefinitionDefaultFont");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryFont((int)persist,(int)valueName11,(int)defaultText2,logFont);
  ehDtorCount = ehDtorCount + -1;
  if (str20 != 0) {
    if (*(int *)(str20 + -0xc) != -1) {
      strRep11 = (int *)(str20 + -0xc);
      if (strRep11 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep11 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep11 = *strRep11 + -1;
        defaultText = *strRep11 + 1;
      }
      if (defaultText != 0) goto LAB_00438d52;
    }
    unused48 = str20 + -0xc;
    unused47 = str20 + -0xc;
    operator_delete();
    unused46 = 0;
    unused45 = valueName11;
    str20 = 0;
  }
LAB_00438d52:
  ehContext = 0x50;
  ehDtorCount = ehDtorCount + -1;
  if (str21 != 0) {
    if (*(int *)(str21 + -0xc) != -1) {
      strRep10 = (int *)(str21 + -0xc);
      if (strRep10 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep10 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep10 = *strRep10 + -1;
        defaultText = *strRep10 + 1;
      }
      if (defaultText != 0) goto LAB_00438e1c;
    }
    unused44 = str21 + -0xc;
    unused43 = str21 + -0xc;
    operator_delete();
    unused42 = 0;
    unused41 = str;
    str21 = 0;
  }
LAB_00438e1c:
  out = (undefined4 *)(self + 0x24);
  ehContext = 0x14c;
  std::string::string_from_cstr((int)valueName10,(uint *)"ViewMultipleDictionaries");
  ehDtorCount = ehDtorCount + 1;
  uVar4 = Persist::QueryDword((int)persist,(int)valueName10,out);
  if (((char)uVar4 == '\0') || ((-1 < *(int *)(self + 0x24) && (*(int *)(self + 0x24) < 3))))
  {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  ehDtorCount = ehDtorCount + -1;
  if (str19 != 0) {
    if (*(int *)(str19 + -0xc) != -1) {
      strRep9 = (int *)(str19 + -0xc);
      if (strRep9 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep9 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep9 = *strRep9 + -1;
        defaultText = *strRep9 + 1;
      }
      if (defaultText != 0) goto LAB_00438f3e;
    }
    unused40 = str19 + -0xc;
    unused39 = str19 + -0xc;
    operator_delete();
    unused38 = 0;
    unused37 = valueName10;
    str19 = 0;
  }
LAB_00438f3e:
  if (cVar12 != '\0') {
    *(undefined4 *)(self + 0x24) = 0;
  }
  out = (undefined4 *)(self + 0x1b0);
  ehContext = 0x164;
  std::string::string_from_cstr((int)valueName9,(uint *)"ViewSorting");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName9,out);
  ehDtorCount = ehDtorCount + -1;
  if (str18 != 0) {
    if (*(int *)(str18 + -0xc) != -1) {
      strRep8 = (int *)(str18 + -0xc);
      if (strRep8 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep8 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep8 = *strRep8 + -1;
        defaultText = *strRep8 + 1;
      }
      if (defaultText != 0) goto LAB_0043904f;
    }
    unused36 = str18 + -0xc;
    unused35 = str18 + -0xc;
    operator_delete();
    unused34 = 0;
    unused33 = valueName9;
    str18 = 0;
  }
LAB_0043904f:
  out = (undefined4 *)(self + 0x1b4);
  ehContext = 0x17c;
  std::string::string_from_cstr((int)valueName8,(uint *)"ViewSortingAscending");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName8,out);
  ehDtorCount = ehDtorCount + -1;
  if (str17 != 0) {
    if (*(int *)(str17 + -0xc) != -1) {
      strRep7 = (int *)(str17 + -0xc);
      if (strRep7 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep7 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep7 = *strRep7 + -1;
        defaultText = *strRep7 + 1;
      }
      if (defaultText != 0) goto LAB_00439159;
    }
    unused32 = str17 + -0xc;
    unused31 = str17 + -0xc;
    operator_delete();
    unused30 = 0;
    unused29 = valueName8;
    str17 = 0;
  }
LAB_00439159:
  out = (undefined4 *)(self + 0x1b8);
  ehContext = 0x194;
  std::string::string_from_cstr((int)valueName7,(uint *)"ViewLengthGrouping");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName7,out);
  ehDtorCount = ehDtorCount + -1;
  if (str16 != 0) {
    if (*(int *)(str16 + -0xc) != -1) {
      strRep6 = (int *)(str16 + -0xc);
      if (strRep6 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep6 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep6 = *strRep6 + -1;
        defaultText = *strRep6 + 1;
      }
      if (defaultText != 0) goto LAB_00439263;
    }
    unused28 = str16 + -0xc;
    unused27 = str16 + -0xc;
    operator_delete();
    unused26 = 0;
    unused25 = valueName7;
    str16 = 0;
  }
LAB_00439263:
  out = (undefined4 *)(self + 0x1c0);
  ehContext = 0x1ac;
  std::string::string_from_cstr((int)valueName6,(uint *)"ViewShowAnnotations");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName6,out);
  ehDtorCount = ehDtorCount + -1;
  if (str15 != 0) {
    if (*(int *)(str15 + -0xc) != -1) {
      strRep5 = (int *)(str15 + -0xc);
      if (strRep5 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep5 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep5 = *strRep5 + -1;
        defaultText = *strRep5 + 1;
      }
      if (defaultText != 0) goto LAB_0043936d;
    }
    unused24 = str15 + -0xc;
    unused23 = str15 + -0xc;
    operator_delete();
    unused22 = 0;
    unused21 = valueName6;
    str15 = 0;
  }
LAB_0043936d:
  out = (undefined4 *)(self + 0x1c4);
  ehContext = 0x1c4;
  std::string::string_from_cstr((int)valueName5,(uint *)"ViewShowBalances");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName5,out);
  ehDtorCount = ehDtorCount + -1;
  if (str14 != 0) {
    if (*(int *)(str14 + -0xc) != -1) {
      strRep4 = (int *)(str14 + -0xc);
      if (strRep4 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep4 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep4 = *strRep4 + -1;
        defaultText = *strRep4 + 1;
      }
      if (defaultText != 0) goto LAB_00439477;
    }
    unused20 = str14 + -0xc;
    unused19 = str14 + -0xc;
    operator_delete();
    unused18 = 0;
    unused17 = valueName5;
    str14 = 0;
  }
LAB_00439477:
  out = (undefined4 *)(self + 0x1c8);
  ehContext = 0x1dc;
  std::string::string_from_cstr((int)valueName4,(uint *)"ViewDoubleClick");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName4,out);
  ehDtorCount = ehDtorCount + -1;
  if (str13 != 0) {
    if (*(int *)(str13 + -0xc) != -1) {
      strRep3 = (int *)(str13 + -0xc);
      if (strRep3 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        defaultText = *strRep3 + 1;
      }
      if (defaultText != 0) goto LAB_00439581;
    }
    unused16 = str13 + -0xc;
    unused15 = str13 + -0xc;
    operator_delete();
    unused14 = 0;
    unused13 = valueName4;
    str13 = 0;
  }
LAB_00439581:
  out2 = &local_464;
  ehContext = 500;
  std::string::string_from_cstr((int)valueName3,(uint *)"ViewLengthGroupingSense");
  ehDtorCount = ehDtorCount + 1;
  uVar4 = Persist::QueryDword((int)persist,(int)valueName3,out2);
  if ((((char)uVar4 == '\0') || (local_464 < -1)) || (1 < local_464)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  ehDtorCount = ehDtorCount + -1;
  if (str12 != 0) {
    if (*(int *)(str12 + -0xc) != -1) {
      strRep2 = (int *)(str12 + -0xc);
      if (strRep2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        defaultText = *strRep2 + 1;
      }
      if (defaultText != 0) goto LAB_004396a9;
    }
    unused12 = str12 + -0xc;
    unused11 = str12 + -0xc;
    operator_delete();
    unused10 = 0;
    unused9 = valueName3;
    str12 = 0;
  }
LAB_004396a9:
  if (cVar12 != '\0') {
    *(int *)(self + 0x1bc) = local_464;
  }
  local_55c = &PTR_s_OutputLower_004f3d78;
  uVar11 = 0;
  do {
    out = (undefined4 *)(uVar11 * 4 + self + 0x1cc);
    ehContext = 0x20c;
    std::string::string_from_cstr((int)valueName2,(uint *)*local_55c);
    ehDtorCount = ehDtorCount + 1;
    uVar5 = Persist::QueryDword((int)persist,(int)valueName2,out);
    cVar12 = (uVar5 & 0xff) == 0;
    ehDtorCount = ehDtorCount + -1;
    if (str11 != 0) {
      if (*(int *)(str11 + -0xc) != -1) {
        out2 = (int *)(str11 + -0xc);
        if (out2 == &g_nullStringRep) {
          defaultText = 1;
        }
        else if (out2 == &g_nullStringRep) {
          defaultText = 1;
        }
        else {
          *out2 = *out2 + -1;
          defaultText = *out2 + 1;
        }
        if (defaultText != 0) goto LAB_004397cc;
      }
      unused8 = str11 + -0xc;
      unused7 = str11 + -0xc;
      operator_delete();
      unused6 = 0;
      unused5 = valueName2;
      str11 = 0;
    }
LAB_004397cc:
    if (cVar12 != '\0') {
      *(undefined4 *)(self + 0x1cc + uVar11 * 4) = 1;
    }
    uVar11 = uVar11 + 1;
    local_55c = local_55c + 1;
  } while (uVar11 < 4);
  ehContext = 0x224;
  std::string::string_from_cstr((int)paths3,(uint *)"Dictionaries\\Unedited English.tsd");
  ehDtorCount = ehDtorCount + 1;
  ResolveRelativePaths((int)local_1c,(int)paths3);
  if (str10 != 0) {
    if (*(int *)(str10 + -0xc) != -1) {
      strRep = (int *)(str10 + -0xc);
      if (strRep == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (strRep == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *strRep = *strRep + -1;
        defaultText = *strRep + 1;
      }
      if (defaultText != 0) goto LAB_004398ee;
    }
    unused4 = str10 + -0xc;
    unused3 = str10 + -0xc;
    operator_delete();
    unused2 = 0;
    unused = paths3;
    str10 = 0;
  }
LAB_004398ee:
  ppuVar10 = &PTR_s_1913_Webster_s_Unabridged_004f3d88;
  out = local_4e4;
  for (defaultText = 0xc; defaultText != 0; defaultText = defaultText + -1) {
    *out = *ppuVar10;
    ppuVar10 = ppuVar10 + (uint)bVar13 * -2 + 1;
    out = out + (uint)bVar13 * -2 + 1;
  }
  uVar11 = 0;
  local_55c = (undefined **)local_4e4;
  do {
    ehContext = 0x23c;
    std::string::string_from_cstr((int)paths2,(uint *)"Dictionaries\\");
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x248;
    logFont = (uint *)*local_55c;
    uVar5 = *(uint *)(fileName + -4);
    len = strlen(logFont);
    std::string::replace((int)paths2,uVar5,0,(uint)logFont,(uint)len,0,(uint)len);
    s = PTR_DAT_004f33b8;
    uVar5 = *(uint *)(fileName + -4);
    len = strlen((uint *)PTR_DAT_004f33b8);
    std::string::replace((int)paths2,uVar5,0,(uint)s,(uint)len,0,(uint)len);
    ehContext = 0x254;
    ResolveRelativePaths((int)result2,(int)paths2);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)paths2,(int)result2);
    ehDtorCount = ehDtorCount + -1;
    if (str9 != 0) {
      if (*(int *)(str9 + -0xc) != -1) {
        out2 = (int *)(str9 + -0xc);
        if (out2 == &g_nullStringRep) {
          defaultText = 1;
        }
        else if (out2 == &g_nullStringRep) {
          defaultText = 1;
        }
        else {
          *out2 = *out2 + -1;
          defaultText = *out2 + 1;
        }
        if (defaultText != 0) goto LAB_00439a8f;
      }
      operator_delete();
      str9 = 0;
    }
LAB_00439a8f:
    ehContext = 0x248;
    defaultText = thunk_access(fileName,0);
    if (defaultText == 0) {
      std::string::replace_fill((int)local_1c,paths[-1],0,1,0x3b);
      std::string::append((int)local_1c,(int)paths2);
    }
    ehDtorCount = ehDtorCount + -1;
    if (fileName != (LPCSTR)0x0) {
      if (*(int *)(fileName + -0xc) != -1) {
        out2 = (int *)(fileName + -0xc);
        if (out2 == &g_nullStringRep) {
          defaultText = 1;
        }
        else if (out2 == &g_nullStringRep) {
          defaultText = 1;
        }
        else {
          *out2 = *out2 + -1;
          defaultText = *out2 + 1;
        }
        if (defaultText != 0) goto LAB_00439b7e;
      }
      operator_delete();
      fileName = (LPCSTR)0x0;
    }
LAB_00439b7e:
    uVar11 = uVar11 + 1;
    local_55c = local_55c + 1;
  } while (uVar11 < 0xc);
  defaultText2 = local_1c;
  ehContext = 0x278;
  std::string::string_from_cstr((int)valueName,(uint *)"ViewDefinitionDictionary");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName,(int)defaultText2);
  ehDtorCount = ehDtorCount + -1;
  if (str8 != 0) {
    if (*(int *)(str8 + -0xc) != -1) {
      out2 = (int *)(str8 + -0xc);
      if (out2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (out2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *out2 = *out2 + -1;
        defaultText = *out2 + 1;
      }
      if (defaultText != 0) goto LAB_00439c94;
    }
    operator_delete();
    str8 = 0;
  }
LAB_00439c94:
  ehContext = 0x290;
  ResolveRelativePaths((int)result,(int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  std::string::operator_assign((int)local_1c,(int)result);
  ehDtorCount = ehDtorCount + -1;
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      out2 = (int *)(str7 + -0xc);
      if (out2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (out2 == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *out2 = *out2 + -1;
        defaultText = *out2 + 1;
      }
      if (defaultText != 0) goto LAB_00439d8d;
    }
    operator_delete();
    str7 = 0;
  }
LAB_00439d8d:
  ehContext = 0x50;
  out = TSDictionaryList::Open(paths);
  *(undefined4 **)(self + 0x28) = out;
  ehDtorCount = ehDtorCount + -1;
  if (paths != (uint *)0x0) {
    if (paths[-3] != 0xffffffff) {
      logFont = paths + -3;
      if (logFont == &g_nullStringRep) {
        defaultText = 1;
      }
      else if (logFont == &g_nullStringRep) {
        defaultText = 1;
      }
      else {
        *logFont = *logFont - 1;
        defaultText = *logFont + 1;
      }
      if (defaultText != 0) goto LAB_00439e52;
    }
    operator_delete();
    paths = (uint *)0x0;
  }
LAB_00439e52:
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439ea0  TEAViewProfileWindows::~TEAViewProfileWindows   (449 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewProfileWindows::_dtor
void __cdecl TEAViewProfileWindows::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f46a4);
  if (self == 0) goto LAB_0043a051;
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
      if (prevRefs != 0) goto LAB_00439f4e;
    }
    operator_delete();
    *(undefined4 *)(self + 0x1e8) = 0;
  }
LAB_00439f4e:
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
      if (prevRefs != 0) goto LAB_00439fc2;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_00439fc2:
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
      if (prevRefs != 0) goto LAB_0043a041;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0043a041:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0043a051:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a064  TEAViewProfileWindows::Save   (5323 bytes, 2 ranges)   [analysis]
//   writes every setting (view options, dictionary list, fonts, colours) to the registry profile
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewProfileWindows::Save(int self,undefined4 keyPath)

{
  uint *pathList;
  int logFont;
  int *strRep;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined1 *value;
  undefined **local_3c0;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str2;
  undefined1 valueName2 [8];
  int str3;
  undefined1 valueName3 [8];
  int str4;
  undefined1 valueName4 [8];
  int str5;
  undefined1 valueName5 [8];
  int str6;
  undefined1 valueName6 [8];
  int str7;
  undefined1 valueName7 [8];
  int str8;
  undefined1 valueName8 [8];
  int str9;
  undefined1 str [8];
  int str10;
  undefined1 valueName9 [8];
  int str11;
  undefined1 valueName10 [8];
  int str12;
  undefined1 valueName11 [8];
  int str13;
  undefined1 valueName12 [8];
  int str14;
  undefined1 valueName13 [8];
  int str15;
  undefined1 valueName14 [8];
  int str16;
  undefined1 valueName15 [8];
  int str17;
  undefined1 valueName16 [8];
  int str18;
  undefined1 valueName17 [8];
  int str19;
  undefined1 valueName18 [8];
  int str20;
  undefined1 valueName19 [8];
  int str21;
  undefined1 valueName20 [8];
  int str22;
  undefined1 valueName21 [8];
  int str23;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4f4858);
  Persist::Persist(persist,self + 0x1e0,1,0);
  switch(keyPath) {
  case 0:
    break;
  case 1:
    std::string::string_from_cstr((int)valueName17,(uint *)"ViewShowAnnotations");
    Persist::SetDword((int)persist,(int)valueName17);
    if (str19 != 0) {
      if (*(int *)(str19 + -0xc) != -1) {
        strRep = (int *)(str19 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043a4d7;
      }
      operator_delete();
      str19 = 0;
    }
LAB_0043a4d7:
    std::string::string_from_cstr((int)valueName16,(uint *)"ViewShowBalances");
    Persist::SetDword((int)persist,(int)valueName16);
    if (str18 != 0) {
      if (*(int *)(str18 + -0xc) != -1) {
        strRep = (int *)(str18 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043a5a8;
      }
      operator_delete();
      str18 = 0;
    }
LAB_0043a5a8:
    std::string::string_from_cstr((int)valueName15,(uint *)"ViewDoubleClick");
    Persist::SetDword((int)persist,(int)valueName15);
    if (str17 != 0) {
      if (*(int *)(str17 + -0xc) != -1) {
        strRep = (int *)(str17 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043a679;
      }
      operator_delete();
      str17 = 0;
    }
LAB_0043a679:
    uVar4 = 0;
    local_3c0 = &PTR_s_OutputLower_004f3d78;
    do {
      std::string::string_from_cstr((int)valueName14,(uint *)*local_3c0);
      Persist::SetDword((int)persist,(int)valueName14);
      if (str16 != 0) {
        if (*(int *)(str16 + -0xc) != -1) {
          strRep = (int *)(str16 + -0xc);
          if (strRep == &g_nullStringRep) {
            logFont = 1;
          }
          else if (strRep == &g_nullStringRep) {
            logFont = 1;
          }
          else {
            *strRep = *strRep + -1;
            logFont = *strRep + 1;
          }
          if (logFont != 0) goto LAB_0043a771;
        }
        operator_delete();
        str16 = 0;
      }
LAB_0043a771:
      uVar4 = uVar4 + 1;
      local_3c0 = local_3c0 + 1;
    } while (uVar4 < 4);
    goto switchD_0043a0b5_default;
  case 2:
    std::string::string_from_cstr((int)valueName13,(uint *)"ViewSorting");
    Persist::SetDword((int)persist,(int)valueName13);
    if (str15 != 0) {
      if (*(int *)(str15 + -0xc) != -1) {
        strRep = (int *)(str15 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043a87a;
      }
      operator_delete();
      str15 = 0;
    }
LAB_0043a87a:
    std::string::string_from_cstr((int)valueName12,(uint *)"ViewSortingAscending");
    Persist::SetDword((int)persist,(int)valueName12);
    if (str14 != 0) {
      if (*(int *)(str14 + -0xc) != -1) {
        strRep = (int *)(str14 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043a966;
      }
      operator_delete();
      str14 = 0;
    }
LAB_0043a966:
    std::string::string_from_cstr((int)valueName11,(uint *)"ViewLengthGrouping");
    Persist::SetDword((int)persist,(int)valueName11);
    if (str13 != 0) {
      if (*(int *)(str13 + -0xc) != -1) {
        strRep = (int *)(str13 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043aa52;
      }
      operator_delete();
      str13 = 0;
    }
LAB_0043aa52:
    std::string::string_from_cstr((int)valueName10,(uint *)"ViewLengthGroupingSense");
    Persist::SetDword((int)persist,(int)valueName10);
    if (str12 != 0) {
      if (*(int *)(str12 + -0xc) != -1) {
        strRep = (int *)(str12 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto switchD_0043a0b5_default;
      }
      operator_delete();
      str12 = 0;
    }
    goto switchD_0043a0b5_default;
  case 3:
    std::string::string_from_cstr((int)valueName9,(uint *)"ViewMultipleDictionaries");
    Persist::SetDword((int)persist,(int)valueName9);
    if (str11 != 0) {
      if (*(int *)(str11 + -0xc) != -1) {
        strRep = (int *)(str11 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043ac2c;
      }
      operator_delete();
      str11 = 0;
    }
LAB_0043ac2c:
    pathList = (uint *)TSDictionaryList::GetPathList(*(undefined4 **)(self + 0x28));
    std::string::string_from_cstr((int)str,pathList);
    value = str;
    std::string::string_from_cstr((int)valueName8,(uint *)"ViewDefinitionDictionary");
    Persist::SetString((int)persist,(int)valueName8,(int)value);
    if (str9 != 0) {
      if (*(int *)(str9 + -0xc) != -1) {
        strRep = (int *)(str9 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043ad3c;
      }
      operator_delete();
      str9 = 0;
    }
LAB_0043ad3c:
    if (str10 != 0) {
      if (*(int *)(str10 + -0xc) != -1) {
        strRep = (int *)(str10 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto switchD_0043a0b5_default;
      }
      operator_delete();
      str10 = 0;
    }
    goto switchD_0043a0b5_default;
  case 4:
    logFont = self + 0x30;
    std::string::string_from_cstr((int)valueName7,(uint *)"FontPattern");
    Persist::SetFont((int)persist,(int)valueName7,logFont);
    if (str8 != 0) {
      if (*(int *)(str8 + -0xc) != -1) {
        strRep = (int *)(str8 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043aef2;
      }
      operator_delete();
      str8 = 0;
    }
LAB_0043aef2:
    logFont = self + 0x70;
    std::string::string_from_cstr((int)valueName6,(uint *)"FontOutput");
    Persist::SetFont((int)persist,(int)valueName6,logFont);
    if (str7 != 0) {
      if (*(int *)(str7 + -0xc) != -1) {
        strRep = (int *)(str7 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043aff7;
      }
      operator_delete();
      str7 = 0;
    }
LAB_0043aff7:
    logFont = self + 0xb0;
    std::string::string_from_cstr((int)valueName5,(uint *)"FontOutputAnnotation");
    Persist::SetFont((int)persist,(int)valueName5,logFont);
    if (str6 != 0) {
      if (*(int *)(str6 + -0xc) != -1) {
        strRep = (int *)(str6 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043b0ff;
      }
      operator_delete();
      str6 = 0;
    }
LAB_0043b0ff:
    logFont = self + 0xf0;
    std::string::string_from_cstr((int)valueName4,(uint *)"FontPrinting");
    Persist::SetFont((int)persist,(int)valueName4,logFont);
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep = (int *)(str5 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043b207;
      }
      operator_delete();
      str5 = 0;
    }
LAB_0043b207:
    logFont = self + 0x2c;
    std::string::string_from_cstr((int)valueName3,(uint *)"DefinitionBackgroundColor");
    Persist::SetColour((int)persist,(int)valueName3,logFont);
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043b30c;
      }
      operator_delete();
      str4 = 0;
    }
LAB_0043b30c:
    logFont = self + 0x130;
    std::string::string_from_cstr((int)valueName2,(uint *)"DefinitionDefaultFont");
    Persist::SetFont((int)persist,(int)valueName2,logFont);
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        strRep = (int *)(str3 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto LAB_0043b414;
      }
      operator_delete();
      str3 = 0;
    }
LAB_0043b414:
    logFont = self + 0x170;
    std::string::string_from_cstr((int)valueName,(uint *)"DefinitionHighlightFont");
    Persist::SetFont((int)persist,(int)valueName,logFont);
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
        if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else if (strRep == &g_nullStringRep) {
          logFont = 1;
        }
        else {
          *strRep = *strRep + -1;
          logFont = *strRep + 1;
        }
        if (logFont != 0) goto switchD_0043a0b5_default;
      }
      operator_delete();
      str2 = 0;
    }
  default:
    goto switchD_0043a0b5_default;
  }
  logFont = self;
  std::string::string_from_cstr((int)valueName21,(uint *)"ExpansionAt");
  Persist::SetString((int)persist,(int)valueName21,logFont);
  if (str23 != 0) {
    if (*(int *)(str23 + -0xc) != -1) {
      strRep = (int *)(str23 + -0xc);
      if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else {
        *strRep = *strRep + -1;
        logFont = *strRep + 1;
      }
      if (logFont != 0) goto LAB_0043a195;
    }
    operator_delete();
    str23 = 0;
  }
LAB_0043a195:
  logFont = self + 0x10;
  std::string::string_from_cstr((int)valueName20,(uint *)"ExpansionHash");
  Persist::SetString((int)persist,(int)valueName20,logFont);
  if (str22 != 0) {
    if (*(int *)(str22 + -0xc) != -1) {
      strRep = (int *)(str22 + -0xc);
      if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else {
        *strRep = *strRep + -1;
        logFont = *strRep + 1;
      }
      if (logFont != 0) goto LAB_0043a263;
    }
    operator_delete();
    str22 = 0;
  }
LAB_0043a263:
  std::string::string_from_cstr((int)valueName19,(uint *)"VariablesExclusive");
  Persist::SetDword((int)persist,(int)valueName19);
  if (str21 != 0) {
    if (*(int *)(str21 + -0xc) != -1) {
      strRep = (int *)(str21 + -0xc);
      if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else {
        *strRep = *strRep + -1;
        logFont = *strRep + 1;
      }
      if (logFont != 0) goto LAB_0043a333;
    }
    operator_delete();
    str21 = 0;
  }
LAB_0043a333:
  std::string::string_from_cstr((int)valueName18,(uint *)"IgnoreUnusedPunctuation");
  Persist::SetDword((int)persist,(int)valueName18);
  if (str20 != 0) {
    if (*(int *)(str20 + -0xc) != -1) {
      strRep = (int *)(str20 + -0xc);
      if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else if (strRep == &g_nullStringRep) {
        logFont = 1;
      }
      else {
        *strRep = *strRep + -1;
        logFont = *strRep + 1;
      }
      if (logFont != 0) goto switchD_0043a0b5_default;
    }
    operator_delete();
    str20 = 0;
  }
switchD_0043a0b5_default:
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

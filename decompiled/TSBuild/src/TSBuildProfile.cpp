// TSBuild.exe — application module "TSBuildProfile"
// 5 functions, 0x00415fb8..0x00416c8c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00415fb8  TSBuildProfile::TSBuildProfile   (222 bytes)   [analysis]
//   constructor: empty file names, default lengths, frequency and sort options
/* WARNING: Removing unreachable block (ram,0x00416036) */
/* WARNING: Removing unreachable block (ram,0x00415ff2) */
/* WARNING: Removing unreachable block (ram,0x00416014) */
/* WARNING: Removing unreachable block (ram,0x00416058) */
int __cdecl TSBuildProfile::TSBuildProfile(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476c58);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *(undefined4 *)(self + 0x18) = 0;
  *(undefined **)(self + 0x18) = &g_emptyStringData;
  *(undefined4 *)(self + 0x28) = 0;
  *(undefined **)(self + 0x28) = &g_emptyStringData;
  *(undefined4 *)(self + 0x38) = 0;
  *(undefined **)(self + 0x38) = &g_emptyStringData;
  *(undefined4 *)(self + 0x40) = 1;
  *(undefined4 *)(self + 0x44) = 100;
  *(undefined4 *)(self + 0x48) = 10;
  *(undefined4 *)(self + 0x4c) = 1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004160b8  TSBuildProfile::~TSBuildProfile   (555 bytes)   [rtti:dtor destructor]
//   written in code as TSBuildProfile::_dtor
void __cdecl TSBuildProfile::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476cac);
  if (self == 0) goto LAB_004162d3;
  if (*(int *)(self + 0x38) != 0) {
    if (*(int *)(*(int *)(self + 0x38) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x38) + -0xc);
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
      if (prevRefs != 0) goto LAB_00416159;
    }
    operator_delete();
    *(undefined4 *)(self + 0x38) = 0;
  }
LAB_00416159:
  if (*(int *)(self + 0x28) != 0) {
    if (*(int *)(*(int *)(self + 0x28) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x28) + -0xc);
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
      if (prevRefs != 0) goto LAB_004161cd;
    }
    operator_delete();
    *(undefined4 *)(self + 0x28) = 0;
  }
LAB_004161cd:
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
      if (prevRefs != 0) goto LAB_00416241;
    }
    operator_delete();
    *(undefined4 *)(self + 0x18) = 0;
  }
LAB_00416241:
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
      if (prevRefs != 0) goto LAB_004162c3;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_004162c3:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004162d3:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004162e4  TSBuildProfile::Load   (1518 bytes)   [analysis]
//   reads BuilderMapping (default.tsm), BuilderWordList, BuilderShortest, BuilderLongest, BuilderFrequency and BuilderSort
void __cdecl TSBuildProfile::Load(int self,int keyPath)

{
  int out;
  undefined4 *out2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  undefined1 valueName5 [8];
  int str5;
  undefined1 valueName6 [8];
  int str6;
  undefined1 result [8];
  int str7;
  int persist [2];
  
  __InitExceptBlockLDTC(0x476d80);
  Persist::Persist(persist,0x48c354,0,0);
  ResolveDataPath((int)result,keyPath,(uint *)"default.tsm");
  std::string::operator_assign(self + 0x20,(int)result);
  if (str7 != 0) {
    if (*(int *)(str7 + -0xc) != -1) {
      strRep = (int *)(str7 + -0xc);
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
      if (out != 0) goto LAB_004163e8;
    }
    operator_delete();
    str7 = 0;
  }
LAB_004163e8:
  out = self + 0x20;
  std::string::string_from_cstr((int)valueName6,(uint *)"BuilderMapping");
  Persist::QueryString((int)persist,(int)valueName6,out);
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep = (int *)(str6 + -0xc);
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
      if (out != 0) goto LAB_004164b6;
    }
    operator_delete();
    str6 = 0;
  }
LAB_004164b6:
  out = self + 0x30;
  std::string::string_from_cstr((int)valueName5,(uint *)"BuilderWordList");
  Persist::QueryString((int)persist,(int)valueName5,out);
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      strRep = (int *)(str5 + -0xc);
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
      if (out != 0) goto LAB_00416584;
    }
    operator_delete();
    str5 = 0;
  }
LAB_00416584:
  out2 = (undefined4 *)(self + 0x40);
  std::string::string_from_cstr((int)valueName4,(uint *)"BuilderShortest");
  Persist::QueryDword((int)persist,(int)valueName4,out2);
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
      if (out != 0) goto LAB_00416652;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00416652:
  out2 = (undefined4 *)(self + 0x44);
  std::string::string_from_cstr((int)valueName3,(uint *)"BuilderLongest");
  Persist::QueryDword((int)persist,(int)valueName3,out2);
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
      if (out != 0) goto LAB_00416720;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00416720:
  out2 = (undefined4 *)(self + 0x48);
  std::string::string_from_cstr((int)valueName2,(uint *)"BuilderFrequency");
  Persist::QueryDword((int)persist,(int)valueName2,out2);
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
      if (out != 0) goto LAB_004167ee;
    }
    operator_delete();
    str2 = 0;
  }
LAB_004167ee:
  out2 = (undefined4 *)(self + 0x4c);
  std::string::string_from_cstr((int)valueName,(uint *)"BuilderSort");
  Persist::QueryDword((int)persist,(int)valueName,out2);
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
      if (out != 0) goto LAB_004168ac;
    }
    operator_delete();
    str = 0;
  }
LAB_004168ac:
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416918  ResolveDataPath   (881 bytes)   [analysis]
//   full path of a file in the program's data folder
//   file placement: inferred (address adjacency)
int __cdecl ResolveDataPath(int result,int dir,uint *fileName)

{
  uint len;
  int iVar2;
  int *rep;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int *str3;
  undefined1 str2 [8];
  int str4;
  
  __InitExceptBlockLDTC(0x476e80);
  iVar2 = std::string::string_from_cstr((int)str2,fileName);
  str3 = (int *)0x0;
  iVar4 = *(int *)(*(int *)(dir + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    len = *(uint *)(*(int *)(dir + 8) + -4);
    str3 = std::string::__getRep(str,len,len);
    str3 = str3 + 3;
    memcpy(str3,*(undefined4 **)(dir + 8),len);
  }
  else {
    str3 = *(int **)(dir + 8);
    rep = str3 + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  iVar2 = std::string::append((int)str,iVar2);
  *(undefined4 *)(result + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    len = *(uint *)(*(int *)(iVar2 + 8) + -4);
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(iVar2 + 8),len);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(iVar2 + 8);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      rep = (int *)(str4 + -0xc);
      if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar4 = *rep + 1;
      }
      if (iVar4 != 0) goto LAB_00416bbf;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00416bbf:
  if (str3 != (int *)0x0) {
    if (str3[-3] != -1) {
      rep = str3 + -3;
      if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar4 = *rep + 1;
      }
      if (iVar4 != 0) goto LAB_00416c6e;
    }
    operator_delete();
  }
LAB_00416c6e:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c8c  TSBuildProfile::Save   (1319 bytes)   [analysis]
//   writes BuilderMapping, BuilderWordList, BuilderShortest, BuilderLongest, BuilderFrequency and BuilderSort
void __cdecl TSBuildProfile::Save(int self)

{
  int value;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 valueName [8];
  int str;
  undefined1 valueName2 [8];
  int str2;
  undefined1 valueName3 [8];
  int str3;
  undefined1 valueName4 [8];
  int str4;
  undefined1 valueName5 [8];
  int str5;
  undefined1 valueName6 [8];
  int str6;
  int persist [2];
  
  __InitExceptBlockLDTC(0x476f50);
  Persist::Persist(persist,0x48c354,1,0);
  value = self + 0x20;
  std::string::string_from_cstr((int)valueName6,(uint *)"BuilderMapping");
  Persist::SetString((int)persist,(int)valueName6,value);
  if (str6 != 0) {
    if (*(int *)(str6 + -0xc) != -1) {
      strRep = (int *)(str6 + -0xc);
      if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *strRep = *strRep + -1;
        value = *strRep + 1;
      }
      if (value != 0) goto LAB_00416d97;
    }
    operator_delete();
    str6 = 0;
  }
LAB_00416d97:
  value = self + 0x30;
  std::string::string_from_cstr((int)valueName5,(uint *)"BuilderWordList");
  Persist::SetString((int)persist,(int)valueName5,value);
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      strRep = (int *)(str5 + -0xc);
      if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *strRep = *strRep + -1;
        value = *strRep + 1;
      }
      if (value != 0) goto LAB_00416e65;
    }
    operator_delete();
    str5 = 0;
  }
LAB_00416e65:
  std::string::string_from_cstr((int)valueName4,(uint *)"BuilderShortest");
  Persist::SetDword((int)persist,(int)valueName4);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *strRep = *strRep + -1;
        value = *strRep + 1;
      }
      if (value != 0) goto LAB_00416f33;
    }
    operator_delete();
    str4 = 0;
  }
LAB_00416f33:
  std::string::string_from_cstr((int)valueName3,(uint *)"BuilderLongest");
  Persist::SetDword((int)persist,(int)valueName3);
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *strRep = *strRep + -1;
        value = *strRep + 1;
      }
      if (value != 0) goto LAB_00417001;
    }
    operator_delete();
    str3 = 0;
  }
LAB_00417001:
  std::string::string_from_cstr((int)valueName2,(uint *)"BuilderFrequency");
  Persist::SetDword((int)persist,(int)valueName2);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *strRep = *strRep + -1;
        value = *strRep + 1;
      }
      if (value != 0) goto LAB_004170cf;
    }
    operator_delete();
    str2 = 0;
  }
LAB_004170cf:
  std::string::string_from_cstr((int)valueName,(uint *)"BuilderSort");
  Persist::SetDword((int)persist,(int)valueName);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else if (strRep == &g_nullStringRep) {
        value = 1;
      }
      else {
        *strRep = *strRep + -1;
        value = *strRep + 1;
      }
      if (value != 0) goto LAB_0041718d;
    }
    operator_delete();
    str = 0;
  }
LAB_0041718d:
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

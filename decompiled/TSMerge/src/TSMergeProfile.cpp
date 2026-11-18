// TSMerge.exe — application module "TSMergeProfile"
// 12 functions, 0x0040be50..0x0040e7b8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040be50  TSMergeProfile::TSMergeProfile   (182 bytes)   [analysis]
//   constructor: empty input/output file names, default operation and conversion
/* WARNING: Removing unreachable block (ram,0x0040bece) */
/* WARNING: Removing unreachable block (ram,0x0040be8a) */
/* WARNING: Removing unreachable block (ram,0x0040beac) */
/* WARNING: Removing unreachable block (ram,0x0040bef0) */
int __cdecl TSMergeProfile::TSMergeProfile(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x463464);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *(undefined4 *)(self + 0x20) = 0;
  *(undefined **)(self + 0x20) = &g_emptyStringData;
  *(undefined4 *)(self + 0x30) = 0;
  *(undefined **)(self + 0x30) = &g_emptyStringData;
  *(undefined4 *)(self + 0x40) = 0;
  *(undefined **)(self + 0x40) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040bf28  TSMergeProfile::~TSMergeProfile   (555 bytes)   [rtti:dtor destructor]
//   written in code as TSMergeProfile::_dtor
void __cdecl TSMergeProfile::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4634b8);
  if (self == 0) goto LAB_0040c143;
  if (*(int *)(self + 0x40) != 0) {
    if (*(int *)(*(int *)(self + 0x40) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x40) + -0xc);
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
      if (prevRefs != 0) goto LAB_0040bfc9;
    }
    operator_delete();
    *(undefined4 *)(self + 0x40) = 0;
  }
LAB_0040bfc9:
  if (*(int *)(self + 0x30) != 0) {
    if (*(int *)(*(int *)(self + 0x30) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x30) + -0xc);
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
      if (prevRefs != 0) goto LAB_0040c03d;
    }
    operator_delete();
    *(undefined4 *)(self + 0x30) = 0;
  }
LAB_0040c03d:
  if (*(int *)(self + 0x20) != 0) {
    if (*(int *)(*(int *)(self + 0x20) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x20) + -0xc);
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
      if (prevRefs != 0) goto LAB_0040c0b1;
    }
    operator_delete();
    *(undefined4 *)(self + 0x20) = 0;
  }
LAB_0040c0b1:
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
      if (prevRefs != 0) goto LAB_0040c133;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0040c133:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0040c143:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c154  TSMergeProfile::Load   (1183 bytes)   [analysis]
//   reads MergePrimaryInput, MergeSecondaryInput, MergeOutput, MergeOperation and MergeConversion
void __cdecl TSMergeProfile::Load(int self)

{
  int out;
  int *out2;
  undefined4 *sehChainHead;
  int local_cc;
  undefined1 *unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  int unused8;
  undefined1 *unused9;
  undefined4 unused10;
  int unused11;
  int unused12;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
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
  int persist [2];
  
  __InitExceptBlockLDTC(0x46356c);
  ehContext = 8;
  Persist::Persist(persist,0x4768ac,0,0);
  out = self + 0x18;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  std::string::string_from_cstr((int)valueName5,(uint *)"MergePrimaryInput");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName5,out);
  ehDtorCount = ehDtorCount + -1;
  if (str5 != 0) {
    if (*(int *)(str5 + -0xc) != -1) {
      out2 = (int *)(str5 + -0xc);
      if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else {
        *out2 = *out2 + -1;
        out = *out2 + 1;
      }
      if (out != 0) goto LAB_0040c25c;
    }
    unused12 = str5 + -0xc;
    unused11 = str5 + -0xc;
    operator_delete();
    unused10 = 0;
    unused9 = valueName5;
    str5 = 0;
  }
LAB_0040c25c:
  out = self + 0x28;
  ehContext = 0x38;
  std::string::string_from_cstr((int)valueName4,(uint *)"MergeSecondaryInput");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName4,out);
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      out2 = (int *)(str4 + -0xc);
      if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else {
        *out2 = *out2 + -1;
        out = *out2 + 1;
      }
      if (out != 0) goto LAB_0040c32a;
    }
    unused8 = str4 + -0xc;
    unused7 = str4 + -0xc;
    operator_delete();
    unused6 = 0;
    unused5 = valueName4;
    str4 = 0;
  }
LAB_0040c32a:
  out = self + 0x38;
  ehContext = 0x50;
  std::string::string_from_cstr((int)valueName3,(uint *)"MergeOutput");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName3,out);
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      out2 = (int *)(str3 + -0xc);
      if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else {
        *out2 = *out2 + -1;
        out = *out2 + 1;
      }
      if (out != 0) goto LAB_0040c3f8;
    }
    unused4 = str3 + -0xc;
    unused3 = str3 + -0xc;
    operator_delete();
    unused2 = 0;
    unused = valueName3;
    str3 = 0;
  }
LAB_0040c3f8:
  out2 = &local_cc;
  local_cc = 0;
  ehContext = 0x68;
  std::string::string_from_cstr((int)valueName2,(uint *)"MergeOperation");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName2,out2);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      out2 = (int *)(str2 + -0xc);
      if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else {
        *out2 = *out2 + -1;
        out = *out2 + 1;
      }
      if (out != 0) goto LAB_0040c4d1;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0040c4d1:
  *(int *)(self + 0x10) = local_cc % 5;
  local_cc = 0;
  out2 = &local_cc;
  ehContext = 0x80;
  std::string::string_from_cstr((int)valueName,(uint *)"MergeConversion");
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryDword((int)persist,(int)valueName,out2);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      out2 = (int *)(str + -0xc);
      if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else if (out2 == &g_nullStringRep) {
        out = 1;
      }
      else {
        *out2 = *out2 + -1;
        out = *out2 + 1;
      }
      if (out != 0) goto LAB_0040c5bb;
    }
    operator_delete();
    str = 0;
  }
LAB_0040c5bb:
  ehContext = 0x14;
  *(int *)(self + 0x14) = local_cc % 5;
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c638  TSMergeProfile::Save   (1110 bytes)   [analysis]
//   writes MergePrimaryInput, MergeSecondaryInput, MergeOutput, MergeOperation and MergeConversion
void __cdecl TSMergeProfile::Save(int self)

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
  int persist [2];
  
  __InitExceptBlockLDTC(0x463674);
  Persist::Persist(persist,0x4768ac,1,0);
  value = self + 0x18;
  std::string::string_from_cstr((int)valueName5,(uint *)"MergePrimaryInput");
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
      if (value != 0) goto LAB_0040c740;
    }
    operator_delete();
    str5 = 0;
  }
LAB_0040c740:
  value = self + 0x28;
  std::string::string_from_cstr((int)valueName4,(uint *)"MergeSecondaryInput");
  Persist::SetString((int)persist,(int)valueName4,value);
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
      if (value != 0) goto LAB_0040c80e;
    }
    operator_delete();
    str4 = 0;
  }
LAB_0040c80e:
  value = self + 0x38;
  std::string::string_from_cstr((int)valueName3,(uint *)"MergeOutput");
  Persist::SetString((int)persist,(int)valueName3,value);
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
      if (value != 0) goto LAB_0040c8dc;
    }
    operator_delete();
    str3 = 0;
  }
LAB_0040c8dc:
  std::string::string_from_cstr((int)valueName2,(uint *)"MergeOperation");
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
      if (value != 0) goto LAB_0040c9aa;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0040c9aa:
  std::string::string_from_cstr((int)valueName,(uint *)"MergeConversion");
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
      if (value != 0) goto LAB_0040ca68;
    }
    operator_delete();
    str = 0;
  }
LAB_0040ca68:
  Persist::_dtor((int)persist,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ca90  ExpandLongPathName   (3505 bytes)   [analysis]
//   rebuilds a path component by component from the end, replacing each with the name FindFirstFileA reports (long name, on-disk case)
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040cc2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl ExpandLongPathName(int result,int path)

{
  char *len;
  HANDLE hFindFile;
  int lhs;
  int *strRep;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 *rhs;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  int *unused2;
  undefined1 exceptMsg2 [264];
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  _WIN32_FIND_DATAA findData;
  undefined *unused6;
  int *newData2;
  int *local_250;
  int *unused7;
  int *unused8;
  int *strRep2;
  undefined1 *unused9;
  undefined4 unused10;
  undefined *unused11;
  undefined *unused12;
  int *strRep3;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  int *strRep4;
  uint local_20c;
  undefined1 s;
  uint local_204;
  undefined1 *unused17;
  undefined4 unused18;
  int *unused19;
  int *unused20;
  int *strRep5;
  int *newData3;
  int *unused21;
  uint unused22;
  undefined1 *unused23;
  int *newRep;
  int *unused24;
  uint len2;
  int *strRep6;
  undefined1 *unused25;
  int *unused26;
  undefined4 unused27;
  uint *msgText;
  uint local_1b4;
  undefined1 *unused28;
  undefined4 unused29;
  int *unused30;
  int *unused31;
  int *strRep7;
  int *unused32;
  int *unused33;
  uint unused34;
  undefined1 *unused35;
  int *newRep2;
  int *unused36;
  uint len3;
  int *strRep8;
  undefined1 *unused37;
  int *unused38;
  undefined4 unused39;
  uint *msgText2;
  int *unused40;
  int *unused41;
  int *strRep9;
  undefined1 *unused42;
  undefined4 unused43;
  undefined *unused44;
  undefined *unused45;
  undefined1 *unused46;
  undefined4 unused47;
  int unused48;
  int unused49;
  int *strRep10;
  undefined1 *unused50;
  undefined4 unused51;
  int unused52;
  int unused53;
  int *strRep11;
  char *local_110;
  int local_10c;
  uint local_108;
  undefined1 *unused54;
  undefined *unused55;
  undefined4 unused56;
  int *unused57;
  undefined4 *src;
  uint unused58;
  undefined1 *unused59;
  int *newRep3;
  int *unused60;
  uint len4;
  int *strRep12;
  undefined1 *unused61;
  int *unused62;
  undefined4 unused63;
  int path2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_a4 [8];
  int str4;
  undefined1 str [8];
  int *str5;
  undefined1 str2 [8];
  int *str6;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused64;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused65;
  undefined1 result2 [8];
  int str7;
  undefined1 str3 [8];
  int str8;
  undefined1 rhs2 [8];
  undefined *local_1c;
  undefined1 lhs2 [8];
  int *fileName;
  
  __InitExceptBlockLDTC(0x463a50);
  ehContext = 0x14;
  path2 = path;
  unused63 = 0;
  fileName = (int *)0x0;
  lhs = *(int *)(*(int *)(path + 8) + -0xc);
  if (lhs == -1 || lhs + 1 < 0) {
    len4 = *(uint *)(*(int *)(path + 8) + -4);
    newRep3 = std::string::__getRep(lhs2,len4,len4);
    newData2 = newRep3 + 3;
    unused58 = len4;
    src = *(undefined4 **)(path2 + 8);
    unused57 = newData2;
    unused59 = lhs2;
    unused60 = newData2;
    fileName = newData2;
    memcpy(newData2,src,len4);
  }
  else {
    local_250 = *(int **)(path + 8);
    strRep12 = local_250 + -3;
    unused61 = lhs2;
    unused62 = local_250;
    fileName = local_250;
    if (strRep12 != &g_nullStringRep) {
      *strRep12 = *strRep12 + 1;
    }
  }
  unused56 = 0;
  unused54 = rhs2;
  unused55 = &g_emptyStringData;
  local_1c = &g_emptyStringData;
  unused6 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 2;
  ehContext = 8;
  local_10c = 0;
  while( true ) {
    uVar4 = (*(uint *)&g_stringNpos);
    if ((uint)fileName[-1] < (*(uint *)&g_stringNpos)) {
      uVar4 = fileName[-1];
    }
    local_110 = memrchr((char *)fileName,'\\',uVar4);
    local_108 = (*(uint *)&g_stringNpos);
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)fileName;
    }
    if (local_108 == 0xffffffff) break;
    if (local_108 < fileName[-1] - 1U) {
      if (local_10c != 0) {
        len = strlen((uint *)&DAT_004638d7);
        std::string::replace((int)rhs2,0,0,0x4638d7,(uint)len,0,(uint)len);
      }
      hFindFile = FindFirstFileA((LPCSTR)fileName,&findData);
      ehContext = 8;
      if (hFindFile == (HANDLE)0xffffffff) {
        ehContext = 0x68;
        std::operator_plus(result,(int)lhs2,(int)rhs2);
        ehContext = 0x74;
        ehDtorCount = ehDtorCount + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            strRep = (int *)(local_1c + -0xc);
            if (strRep == &g_nullStringRep) {
              lhs = 1;
            }
            else if (strRep == &g_nullStringRep) {
              lhs = 1;
            }
            else {
              *strRep = *strRep + -1;
              lhs = *strRep + 1;
            }
            if (lhs != 0) goto LAB_0040cf15;
          }
          unused45 = local_1c + -0xc;
          unused44 = local_1c + -0xc;
          operator_delete();
          unused43 = 0;
          unused42 = rhs2;
          local_1c = (undefined *)0x0;
          unused3 = 0;
        }
LAB_0040cf15:
        ehDtorCount = ehDtorCount + -1;
        if (fileName != (int *)0x0) {
          if (fileName[-3] != -1) {
            strRep9 = fileName + -3;
            if (strRep9 == &g_nullStringRep) {
              lhs = 1;
            }
            else if (strRep9 == &g_nullStringRep) {
              lhs = 1;
            }
            else {
              *strRep9 = *strRep9 + -1;
              lhs = *strRep9 + 1;
            }
            if (lhs != 0) goto LAB_0040cfc1;
          }
          unused41 = fileName + -3;
          unused40 = fileName + -3;
          operator_delete();
        }
LAB_0040cfc1:
        *sehChainHead = sehPrevFrame;
        return result;
      }
      FindClose(hFindFile);
      ehContext = 0x44;
      rhs = rhs2;
      lhs = std::string::string_from_cstr((int)str3,(uint *)findData.cFileName);
      ehDtorCount = ehDtorCount + 1;
      std::operator_plus((int)result2,lhs,(int)rhs);
      ehDtorCount = ehDtorCount + 1;
      std::string::operator_assign((int)rhs2,(int)result2);
      ehDtorCount = ehDtorCount + -1;
      if (str7 != 0) {
        if (*(int *)(str7 + -0xc) != -1) {
          strRep11 = (int *)(str7 + -0xc);
          if (strRep11 == &g_nullStringRep) {
            lhs = 1;
          }
          else if (strRep11 == &g_nullStringRep) {
            lhs = 1;
          }
          else {
            *strRep11 = *strRep11 + -1;
            lhs = *strRep11 + 1;
          }
          if (lhs != 0) goto LAB_0040cda3;
        }
        unused53 = str7 + -0xc;
        unused52 = str7 + -0xc;
        operator_delete();
        unused51 = 0;
        unused50 = result2;
        str7 = 0;
        unused5 = 0;
      }
LAB_0040cda3:
      ehContext = 8;
      ehDtorCount = ehDtorCount + -1;
      if (str8 != 0) {
        if (*(int *)(str8 + -0xc) != -1) {
          strRep10 = (int *)(str8 + -0xc);
          if (strRep10 == &g_nullStringRep) {
            lhs = 1;
          }
          else if (strRep10 == &g_nullStringRep) {
            lhs = 1;
          }
          else {
            *strRep10 = *strRep10 + -1;
            lhs = *strRep10 + 1;
          }
          if (lhs != 0) goto LAB_0040cfd9;
        }
        unused49 = str8 + -0xc;
        unused48 = str8 + -0xc;
        operator_delete();
        unused47 = 0;
        unused46 = str3;
        str8 = 0;
        unused4 = 0;
      }
    }
LAB_0040cfd9:
    uVar4 = local_108;
    if ((*(uint *)&g_stringNpos) - 0xe < local_108) {
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      copyCtorMask = 1;
      copyCtor = &LAB_00402ee0;
      objectDtor = 0;
      ehContext = 0xa4;
      msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,PTR_s_invalid_string_size_parameter_in_00474068);
      std::string::string_from_cstr((int)str2,msgText2);
      ehDtorCount = ehDtorCount + 2;
      lengthError[0] = &std::logic_error::vftable;
      unused39 = 0;
      unused65 = (int *)0x0;
      ehContext = 0xb0;
      if (str6[-3] == -1 || str6[-3] + 1 < 0) {
        len3 = str6[-1];
        newRep2 = std::string::__getRep(newStr2,len3,len3);
        unused35 = newStr2;
        newData = newRep2 + 3;
        unused34 = len3;
        unused33 = str6;
        unused32 = newData;
        unused36 = newData;
        unused65 = newData;
        memcpy(newData,str6,len3);
      }
      else {
        unused37 = newStr2;
        unused38 = str6;
        unused65 = str6;
        unused2 = str6;
        strRep8 = str6 + -3;
        if (strRep8 != &g_nullStringRep) {
          *strRep8 = *strRep8 + 1;
        }
      }
      ehContext = 0xa4;
      lengthError[0] = &std::length_error::vftable;
      ehDtorCount = ehDtorCount + 2;
      if (str6 != (int *)0x0) {
        if (str6[-3] != -1) {
          strRep7 = str6 + -3;
          if (strRep7 == &g_nullStringRep) {
            lhs = 1;
          }
          else if (strRep7 == &g_nullStringRep) {
            lhs = 1;
          }
          else {
            *strRep7 = *strRep7 + -1;
            lhs = *strRep7 + 1;
          }
          if (lhs != 0) goto LAB_0040d233;
        }
        unused31 = str6 + -3;
        unused30 = str6 + -3;
        operator_delete();
        unused29 = 0;
        unused28 = str2;
        str6 = (int *)0x0;
        unused = 0;
      }
LAB_0040d233:
      ehContext = 0x98;
      _ThrowExceptionLDTC((uint *)&DAT_00402e84,(undefined4*)lengthError,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
    }
    if (uVar4 < (uint)fileName[-1]) {
      local_1b4 = fileName[-1] - uVar4;
      if ((uint)fileName[-1] < uVar4) {
        throwLine = 0;
        throwFile = 0;
        throwFlags = 0;
        copyCtorMask = 1;
        copyCtor = &LAB_00403038;
        objectDtor = 0;
        ehContext = 0xd4;
        msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00474074);
        std::string::string_from_cstr((int)str,msgText);
        ehDtorCount = ehDtorCount + 2;
        outOfRange[0] = &std::logic_error::vftable;
        unused27 = 0;
        unused64 = (int *)0x0;
        ehContext = 0xe0;
        if (str5[-3] == -1 || str5[-3] + 1 < 0) {
          len2 = str5[-1];
          newRep = std::string::__getRep(newStr,len2,len2);
          unused23 = newStr;
          newData3 = newRep + 3;
          unused22 = len2;
          unused21 = str5;
          unused24 = newData3;
          unused64 = newData3;
          memcpy(newData3,str5,len2);
        }
        else {
          unused25 = newStr;
          unused26 = str5;
          unused64 = str5;
          strRep6 = str5 + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = *strRep6 + 1;
          }
        }
        ehContext = 0xd4;
        outOfRange[0] = &std::out_of_range::vftable;
        ehDtorCount = ehDtorCount + 2;
        if (str5 != (int *)0x0) {
          if (str5[-3] != -1) {
            strRep5 = str5 + -3;
            if (strRep5 == &g_nullStringRep) {
              lhs = 1;
            }
            else if (strRep5 == &g_nullStringRep) {
              lhs = 1;
            }
            else {
              *strRep5 = *strRep5 + -1;
              lhs = *strRep5 + 1;
            }
            if (lhs != 0) goto LAB_0040d4d6;
          }
          unused20 = str5 + -3;
          unused19 = str5 + -3;
          operator_delete();
          unused18 = 0;
          unused17 = str;
          str5 = (int *)0x0;
        }
LAB_0040d4d6:
        ehContext = 0x98;
        _ThrowExceptionLDTC((uint *)&DAT_00402fdc,(undefined4*)outOfRange,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
      }
      local_204 = fileName[-1] - uVar4;
      s = 0;
      local_20c = local_204;
      if (local_1b4 < local_204) {
        local_20c = local_1b4;
      }
      std::string::replace((int)lhs2,uVar4,local_20c,(uint)&s,0,0,0);
    }
    else {
      std::string::replace_fill((int)lhs2,fileName[-1],0,uVar4 - fileName[-1],0);
    }
    if (fileName + -3 != &g_nullStringRep) {
      fileName[-3] = 0;
    }
    local_10c = 1;
  }
  ehContext = 0x104;
  rhs = rhs2;
  AppendChar((int)local_a4,(int)lhs2);
  ehDtorCount = ehDtorCount + 1;
  std::operator_plus(result,(int)local_a4,(int)rhs);
  ehContext = 0x110;
  ehDtorCount = ehDtorCount + -1;
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep4 = (int *)(str4 + -0xc);
      if (strRep4 == &g_nullStringRep) {
        lhs = 1;
      }
      else if (strRep4 == &g_nullStringRep) {
        lhs = 1;
      }
      else {
        *strRep4 = *strRep4 + -1;
        lhs = *strRep4 + 1;
      }
      if (lhs != 0) goto LAB_0040d6cc;
    }
    unused16 = str4 + -0xc;
    unused15 = str4 + -0xc;
    operator_delete();
    unused14 = 0;
    unused13 = local_a4;
    str4 = 0;
  }
LAB_0040d6cc:
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      strRep3 = (int *)(local_1c + -0xc);
      if (strRep3 == &g_nullStringRep) {
        lhs = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        lhs = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        lhs = *strRep3 + 1;
      }
      if (lhs != 0) goto LAB_0040d77b;
    }
    unused12 = local_1c + -0xc;
    unused11 = local_1c + -0xc;
    operator_delete();
    unused10 = 0;
    unused9 = rhs2;
    local_1c = (undefined *)0x0;
  }
LAB_0040d77b:
  ehDtorCount = ehDtorCount + -1;
  if (fileName != (int *)0x0) {
    if (fileName[-3] != -1) {
      strRep2 = fileName + -3;
      if (strRep2 == &g_nullStringRep) {
        lhs = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        lhs = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        lhs = *strRep2 + 1;
      }
      if (lhs != 0) goto LAB_0040d827;
    }
    unused8 = fileName + -3;
    unused7 = fileName + -3;
    operator_delete();
  }
LAB_0040d827:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d844  std::operator_plus   (638 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004088c0. result = lhs + rhs for two std::string
//   file placement: inferred (address adjacency)
int __cdecl std::operator_plus(int result,int lhs,int rhs)

{
  uint len;
  int sum;
  int refs;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 tmp [8];
  int *tmpData;
  
  __InitExceptBlockLDTC(0x463bbc);
  tmpData = (int *)0x0;
  refs = *(int *)(*(int *)(lhs + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(lhs + 8) + -4);
    tmpData = std::string::__getRep(tmp,len,len);
    tmpData = tmpData + 3;
    memcpy(tmpData,*(undefined4 **)(lhs + 8),len);
  }
  else {
    tmpData = *(int **)(lhs + 8);
    rep = tmpData + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  sum = std::string::append((int)tmp,rhs);
  *(undefined4 *)(result + 8) = 0;
  refs = *(int *)(*(int *)(sum + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(sum + 8) + -4);
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(sum + 8),len);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(sum + 8);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (tmpData != (int *)0x0) {
    if (tmpData[-3] != -1) {
      rep = tmpData + -3;
      if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *rep = *rep + -1;
        refs = *rep + 1;
      }
      if (refs != 0) goto LAB_0040daa7;
    }
    operator_delete();
  }
LAB_0040daa7:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dac4  AppendChar   (899 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00408b40. result = str + std::string(1, c) (the character is not visible in the decompiled call to the fill constructor)
//   file placement: inferred (address adjacency)
int __cdecl AppendChar(int result,int str)

{
  uint len;
  int sum;
  int *rep;
  int refs;
  undefined4 *sehChainHead;
  undefined1 *suffixArg;
  undefined4 sehPrevFrame;
  undefined1 tmp [8];
  int *tmpData;
  undefined1 suffix [8];
  int suffixData;
  
  __InitExceptBlockLDTC(0x463c38);
  suffixData = 0;
  std::string::string_fill((int)suffix,1);
  suffixArg = suffix;
  tmpData = (int *)0x0;
  refs = *(int *)(*(int *)(str + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(str + 8) + -4);
    tmpData = std::string::__getRep(tmp,len,len);
    tmpData = tmpData + 3;
    memcpy(tmpData,*(undefined4 **)(str + 8),len);
  }
  else {
    tmpData = *(int **)(str + 8);
    rep = tmpData + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  sum = std::string::append((int)tmp,(int)suffixArg);
  *(undefined4 *)(result + 8) = 0;
  refs = *(int *)(*(int *)(sum + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(sum + 8) + -4);
    rep = std::string::__getRep(result,len,len);
    *(int **)(result + 8) = rep + 3;
    memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(sum + 8),len);
  }
  else {
    *(undefined4 *)(result + 8) = *(undefined4 *)(sum + 8);
    rep = (int *)(*(int *)(result + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (suffixData != 0) {
    if (*(int *)(suffixData + -0xc) != -1) {
      rep = (int *)(suffixData + -0xc);
      if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *rep = *rep + -1;
        refs = *rep + 1;
      }
      if (refs != 0) goto LAB_0040dd7d;
    }
    operator_delete();
    suffixData = 0;
  }
LAB_0040dd7d:
  if (tmpData != (int *)0x0) {
    if (tmpData[-3] != -1) {
      rep = tmpData + -3;
      if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else if (rep == &g_nullStringRep) {
        refs = 1;
      }
      else {
        *rep = *rep + -1;
        refs = *rep + 1;
      }
      if (refs != 0) goto LAB_0040de2c;
    }
    operator_delete();
  }
LAB_0040de2c:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040de48  IsRelativePath   (153 bytes)   [analysis]
//   true unless the path starts with '\' or has a drive colon followed by '\'
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040de5f) */
bool __cdecl IsRelativePath(int path)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_memchr(*(char **)(path + 8),':',*(int *)(*(int *)(path + 8) + -4));
  iVar2 = g_stringNpos;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(path + 8);
  }
  if (iVar2 == -1) {
    if ((*(int *)(*(char **)(path + 8) + -4) == 0) || (**(char **)(path + 8) != '\\')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = *(char *)(*(int *)(path + 8) + iVar2 + 1) != '\\';
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dee4  GetProgramDirectory   (362 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040909c. GetModuleFileNameA, truncated after the last backslash
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040e02e) */
int __cdecl GetProgramDirectory(int result)

{
  DWORD len;
  uint *lastSep;
  int dir;
  int *strRep;
  undefined4 *sehChainHead;
  uint filename [68];
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 dirStr [8];
  int dirData;
  
  __InitExceptBlockLDTC(0x463cd0);
  len = GetModuleFileNameA((HMODULE)0x0,(LPSTR)filename,0x104);
  *(undefined1 *)((int)filename + len) = 0;
  lastSep = thunk_strrchr(filename,'\\');
  if (lastSep == (uint *)0x0) {
    *(undefined4 *)(result + 8) = 0;
    *(undefined **)(result + 8) = &g_emptyStringData;
    *sehChainHead = sehPrevFrame;
    return result;
  }
  ehContext = 8;
  dir = std::string::string_from_buf((int)dirStr,filename,(int)lastSep + (1 - (int)filename));
  ehDtorCount = ehDtorCount + 1;
  ExpandLongPathName(result,dir);
  ehContext = 0x14;
  ehDtorCount = ehDtorCount + -1;
  if (dirData != 0) {
    if (*(int *)(dirData + -0xc) != -1) {
      strRep = (int *)(dirData + -0xc);
      if (strRep == &g_nullStringRep) {
        dir = 1;
      }
      else if (strRep == &g_nullStringRep) {
        dir = 1;
      }
      else {
        *strRep = *strRep + -1;
        dir = *strRep + 1;
      }
      if (dir != 0) goto LAB_0040dfe5;
    }
    unused = dirData + -0xc;
    operator_delete();
  }
LAB_0040dfe5:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e050  GetMyDocumentsDirectory   (791 bytes)   [analysis]
//   the user's documents folder (SHGetSpecialFolderLocation), or the program directory
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040e091) */
int __cdecl GetMyDocumentsDirectory(int result)

{
  uint len;
  HRESULT hr;
  IMalloc *This;
  BOOL ok;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  uint path [67];
  undefined *unused;
  undefined4 *unused2;
  undefined4 *unused3;
  undefined4 *dest;
  undefined4 *unused4;
  uint unused5;
  int unused6;
  int *newRep;
  int *newData;
  int unused7;
  undefined4 *unused8;
  undefined4 unused9;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  LPCITEMIDLIST local_50;
  IMalloc *ppMalloc;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result2 [8];
  int str2;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x463d64);
  local_c = (undefined4 *)&g_emptyStringData;
  unused = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  hr = SHGetMalloc(&ppMalloc);
  if (hr == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      ok = SHGetPathFromIDListA(local_50,(LPSTR)path);
      if (ok != 0) {
        std::string::assign_cstr((int)str,path);
      }
      This = (IMalloc *)((code *)ppMalloc->lpVtbl->Free)((IMalloc *)ppMalloc->lpVtbl,local_50);
    }
    (*ppMalloc->lpVtbl->Release)(This);
  }
  iVar4 = local_c[-1];
  if (iVar4 == 0) {
    ehContext = 0x2c;
    GetProgramDirectory((int)result2);
    ehDtorCount = ehDtorCount + 1;
    std::string::operator_assign((int)str,(int)result2);
    ehDtorCount = ehDtorCount + -1;
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar4 = *strRep + 1;
        }
        if (iVar4 != 0) goto LAB_0040e1f9;
      }
      unused12 = str2 + -0xc;
      operator_delete();
      unused11 = 0;
      unused10 = result2;
      str2 = 0;
    }
  }
  else {
    if (1 < local_c[-3] + 1) {
      std::string::__unshare((int)str);
    }
    if (local_c + -3 != &g_nullStringRep) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      std::string::replace_fill((int)str,local_c[-1],0,1,0x5c);
    }
  }
LAB_0040e1f9:
  ehContext = 0x44;
  unused9 = 0;
  *(undefined4 *)(result + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    newRep = std::string::__getRep(result,len,len);
    newData = newRep + 3;
    *(int **)(result + 8) = newData;
    unused6 = result;
    unused4 = local_c;
    dest = *(undefined4 **)(result + 8);
    unused5 = len;
    memcpy(dest,local_c,len);
  }
  else {
    unused8 = local_c;
    *(undefined4 **)(result + 8) = local_c;
    unused7 = result;
    strRep = (int *)(*(int *)(result + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_0040e34c;
    }
    unused3 = local_c + -3;
    unused2 = local_c + -3;
    operator_delete();
  }
LAB_0040e34c:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e368  ResolveRelativePath   (1103 bytes)   [analysis]
//   prefixes the program directory to a relative path
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl ResolveRelativePath(int result,int path)

{
  bool bVar1;
  undefined3 regHigh;
  int prevRefs;
  char *pcVar3;
  int iVar4;
  int *rep;
  uint uVar6;
  undefined4 *sehChainHead;
  undefined1 *rhs;
  undefined4 sehPrevFrame;
  undefined1 local_34 [8];
  int str2;
  undefined1 result2 [8];
  int str3;
  undefined1 str [8];
  int *str4;
  
  __InitExceptBlockLDTC(0x463e44);
  if ((*(int *)(*(int *)(path + 8) + -4) == 0) ||
     (bVar1 = IsRelativePath(path), CONCAT31(regHigh,bVar1) == 0)) {
    *(undefined4 *)(result + 8) = 0;
    iVar4 = *(int *)(*(int *)(path + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(path + 8) + -4);
      rep = std::string::__getRep(result,uVar6,uVar6);
      *(int **)(result + 8) = rep + 3;
      memcpy(*(undefined4 **)(result + 8),*(undefined4 **)(path + 8),uVar6);
    }
    else {
      *(undefined4 *)(result + 8) = *(undefined4 *)(path + 8);
      rep = (int *)(*(int *)(result + 8) + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
    *sehChainHead = sehPrevFrame;
    return result;
  }
  str4 = (int *)0x0;
  iVar4 = *(int *)(*(int *)(path + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(path + 8) + -4);
    str4 = std::string::__getRep(str,uVar6,uVar6);
    str4 = str4 + 3;
    memcpy(str4,*(undefined4 **)(path + 8),uVar6);
  }
  else {
    str4 = *(int **)(path + 8);
    rep = str4 + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  iVar4 = str4[-1];
LAB_0040e615:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)str4[-1] < uVar6) {
      uVar6 = str4[-1];
    }
    pcVar3 = memrchr((char *)str4,';',uVar6);
    iVar4 = g_stringNpos;
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)str4;
    }
    if (iVar4 == -1) break;
    GetProgramDirectory((int)result2);
    std::string::insert((int)str,iVar4 + 1,(int)result2);
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        rep = (int *)(str3 + -0xc);
        if (rep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (rep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *rep = *rep + -1;
          prevRefs = *rep + 1;
        }
        if (prevRefs != 0) goto LAB_0040e615;
      }
      operator_delete();
      str3 = 0;
    }
  } while( true );
  rhs = str;
  GetProgramDirectory((int)local_34);
  std::operator_plus(result,(int)local_34,(int)rhs);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      rep = (int *)(str2 + -0xc);
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
      if (iVar4 != 0) goto LAB_0040e709;
    }
    operator_delete();
    str2 = 0;
  }
LAB_0040e709:
  if (str4 != (int *)0x0) {
    if (str4[-3] != -1) {
      rep = str4 + -3;
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
      if (iVar4 != 0) goto LAB_0040e79c;
    }
    operator_delete();
  }
LAB_0040e79c:
  *sehChainHead = sehPrevFrame;
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e7b8  IsAnsiTextFile   (359 bytes)   [analysis]
//   reads the start of a file and rejects it when IsTextUnicode says it is Unicode
//   file placement: inferred (address adjacency)
undefined4 __cdecl IsAnsiTextFile(LPCSTR fileName)

{
  uint iSize;
  undefined4 *sehChainHead;
  undefined4 uVar1;
  char lpv;
  char local_4b3;
  char local_4b2;
  uint lpiResult;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int basicIfstream [34];
  
  __InitExceptBlockLDTC(0x463ef0);
  ehContext = 8;
  std::basic_ifstream_char::basic_ifstream(basicIfstream,0,fileName,6,0x1b6);
  ehDtorCount = ehDtorCount + 8;
  ehContext = 0x14;
  if (*(int *)(basicIfstream[0] + 0x30) == 0) {
    FUN_00451098(basicIfstream,&lpv,0x400);
    iSize = FUN_00451050((int)basicIfstream);
    if (iSize == 0) {
      uVar1 = 1;
      ehDtorCount = ehDtorCount + -8;
      std::basic_ifstream_char::_dtor(basicIfstream,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      lpiResult = 0x1088;
      IsTextUnicode(&lpv,iSize,(LPINT)&lpiResult);
      if (((lpiResult & 0x1088) == 0) &&
         ((((iSize < 3 || (lpv != -0x11)) || (local_4b3 != -0x45)) || (local_4b2 != -0x41))))
      {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      ehDtorCount = ehDtorCount + -8;
      std::basic_ifstream_char::_dtor(basicIfstream,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    uVar1 = 0;
    std::basic_ifstream_char::_dtor(basicIfstream,2);
    *sehChainHead = sehPrevFrame;
  }
  return uVar1;
}

} // namespace tea

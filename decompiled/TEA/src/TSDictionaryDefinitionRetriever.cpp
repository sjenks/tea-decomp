// TEA.exe — application module "TSDictionaryDefinitionRetriever"
// 11 functions, 0x0040c84c..0x0040e240. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040c84c  TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever   (185 bytes)   [notes+analysis]
//   constructor(list, dictionaryIndex, FILETIME* out): opens the dictionary file for reading and reports its timestamp
int * __cdecl TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(int *param_1,int tsDictionaryList,int index,undefined4 *param_4)

{
  uint *path;
  LPCSTR fileName;
  int iVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec06c);
  *param_1 = *(int *)(index * 4 + *(int *)(tsDictionaryList + 0xc));
  path = (uint *)TSDictionaryList::GetPath(tsDictionaryList,index);
  std::string::string_from_cstr((int)(param_1 + 2),path);
  param_1[6] = 0;
  fileName = (LPCSTR)(**(code **)(*(int *)*param_1 + 0x18))();
  iVar3 = (**(code **)(*(int *)*param_1 + 0xc))();
  if (iVar3 != 0) {
    piVar4 = fopen(fileName,&DAT_004eb416);
    param_1[6] = (int)piVar4;
  }
  if (param_4 != (undefined4 *)0x0) {
    iVar3 = *param_1;
    *param_4 = *(undefined4 *)(iVar3 + 0x2008);
    param_4[1] = *(undefined4 *)(iVar3 + 0x200c);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c938  TSDictionaryDefinitionRetriever::~TSDictionaryDefinitionRetriever   (204 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryDefinitionRetriever::_dtor
void __cdecl TSDictionaryDefinitionRetriever::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec0a8);
  if (self == 0) goto LAB_0040c9f3;
  FUN_004de7cc(*(int **)(self + 0x18));
  if (*(int *)(self + 0x10) != 0) {
    if (*(int *)(*(int *)(self + 0x10) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 0x10) + -0xc);
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
      if (prevRefs != 0) goto LAB_0040c9e3;
    }
    operator_delete();
    *(undefined4 *)(self + 0x10) = 0;
  }
LAB_0040c9e3:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0040c9f3:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ca04  TSDictionaryDefinitionRetriever::ReadDefinition   (4373 bytes)   [notes]
//   reads and decodes one definition record at a file offset (XOR 0xBD per your notes). Entry checked; body not read
/* WARNING: Removing unreachable block (ram,0x0040cd8b) */
/* WARNING: Removing unreachable block (ram,0x0040ce6e) */
/* WARNING: Removing unreachable block (ram,0x0040ce1d) */
/* WARNING: Removing unreachable block (ram,0x0040ce64) */
/* WARNING: Removing unreachable block (ram,0x0040ceed) */
/* WARNING: Removing unreachable block (ram,0x0040cf11) */
/* WARNING: Removing unreachable block (ram,0x0040cf1c) */
/* WARNING: Removing unreachable block (ram,0x0040cf40) */
/* WARNING: Removing unreachable block (ram,0x0040cf2a) */
/* WARNING: Removing unreachable block (ram,0x0040cf39) */
/* WARNING: Removing unreachable block (ram,0x0040cf32) */
/* WARNING: Removing unreachable block (ram,0x0040cf45) */
/* WARNING: Removing unreachable block (ram,0x0040cf49) */
/* WARNING: Removing unreachable block (ram,0x0040cf97) */
/* WARNING: Removing unreachable block (ram,0x0040cb17) */
/* WARNING: Removing unreachable block (ram,0x0040cb43) */
/* WARNING: Removing unreachable block (ram,0x0040cc25) */
/* WARNING: Removing unreachable block (ram,0x0040cbd4) */
/* WARNING: Removing unreachable block (ram,0x0040cc1b) */
/* WARNING: Removing unreachable block (ram,0x0040cca4) */
/* WARNING: Removing unreachable block (ram,0x0040ccc8) */
/* WARNING: Removing unreachable block (ram,0x0040ccd3) */
/* WARNING: Removing unreachable block (ram,0x0040ccf7) */
/* WARNING: Removing unreachable block (ram,0x0040cce1) */
/* WARNING: Removing unreachable block (ram,0x0040ccf0) */
/* WARNING: Removing unreachable block (ram,0x0040cce9) */
/* WARNING: Removing unreachable block (ram,0x0040ccfc) */
/* WARNING: Removing unreachable block (ram,0x0040cd00) */
/* WARNING: Removing unreachable block (ram,0x0040cd4e) */
/* WARNING: Removing unreachable block (ram,0x0040d1ee) */
/* WARNING: Removing unreachable block (ram,0x0040d2dd) */
/* WARNING: Removing unreachable block (ram,0x0040d286) */
/* WARNING: Removing unreachable block (ram,0x0040d2d0) */
/* WARNING: Removing unreachable block (ram,0x0040d362) */
/* WARNING: Removing unreachable block (ram,0x0040d389) */
/* WARNING: Removing unreachable block (ram,0x0040d397) */
/* WARNING: Removing unreachable block (ram,0x0040d3be) */
/* WARNING: Removing unreachable block (ram,0x0040d3a8) */
/* WARNING: Removing unreachable block (ram,0x0040d3b7) */
/* WARNING: Removing unreachable block (ram,0x0040d3b0) */
/* WARNING: Removing unreachable block (ram,0x0040d3c3) */
/* WARNING: Removing unreachable block (ram,0x0040d3c7) */
/* WARNING: Removing unreachable block (ram,0x0040d421) */
/* WARNING: Removing unreachable block (ram,0x0040d45e) */
/* WARNING: Removing unreachable block (ram,0x0040d55f) */
/* WARNING: Removing unreachable block (ram,0x0040d4ff) */
/* WARNING: Removing unreachable block (ram,0x0040d552) */
/* WARNING: Removing unreachable block (ram,0x0040d5f0) */
/* WARNING: Removing unreachable block (ram,0x0040d61a) */
/* WARNING: Removing unreachable block (ram,0x0040d628) */
/* WARNING: Removing unreachable block (ram,0x0040d64f) */
/* WARNING: Removing unreachable block (ram,0x0040d639) */
/* WARNING: Removing unreachable block (ram,0x0040d648) */
/* WARNING: Removing unreachable block (ram,0x0040d641) */
/* WARNING: Removing unreachable block (ram,0x0040d654) */
/* WARNING: Removing unreachable block (ram,0x0040d658) */
/* WARNING: Removing unreachable block (ram,0x0040d6b2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionaryDefinitionRetriever::ReadDefinition(int param_1,LONG lDistanceToMove,int str)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  int prevRefs;
  uint uVar6;
  undefined4 *sehChainHead;
  uint local_97c [131];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined *unused5;
  undefined4 *unused6;
  undefined4 *unused7;
  int *strRep;
  char *len;
  uint pos;
  int str2;
  int local_288;
  uint local_284;
  uint local_280;
  undefined4 *dest;
  undefined4 *unused8;
  uint unused9;
  int unused10;
  int *newRep;
  int *newData;
  uint len2;
  int *strRep2;
  int unused11;
  undefined4 *unused12;
  undefined4 unused13;
  int local_250;
  uint local_24c;
  undefined1 s;
  uint local_244;
  uint local_1fc;
  undefined4 *dest2;
  undefined4 *unused14;
  uint unused15;
  int unused16;
  int *newRep2;
  int *newData2;
  int *strRep3;
  int unused17;
  undefined4 *unused18;
  undefined4 unused19;
  int local_18c;
  uint local_188;
  undefined1 s2;
  uint local_180;
  uint local_138;
  undefined1 *unused20;
  undefined *unused21;
  undefined4 unused22;
  uint local_e4;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int local_bc;
  int local_68;
  undefined1 value [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ec1b0);
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (prevRefs = fseek(*(int **)(param_1 + 0x18),lDistanceToMove,0), prevRefs == 0)) {
    std::string::operator_assign(str,param_1 + 8);
    *(LONG *)(str + 0x78) = lDistanceToMove;
    std::vector_string::resize(str + 0x18,0);
    std::vector_string::resize(str + 0x38,0);
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_e4 = FUN_004df398(*(int **)(param_1 + 0x18));
    }
    else {
      piVar1 = *(int **)(param_1 + 0x18);
      pbVar3 = (byte *)*piVar1;
      *piVar1 = *piVar1 + 1;
      local_e4 = (uint)*pbVar3;
    }
    if (local_e4 == 0xffffffff) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    unused22 = 0;
    unused20 = value;
    unused21 = &g_emptyStringData;
    local_c = (undefined4 *)&g_emptyStringData;
    unused5 = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    uVar6 = 0xbd;
    while ((uVar2 = local_e4 - 1, bVar4 = 0 < (int)local_e4, local_e4 = uVar2, bVar4 &&
           (uVar6 != 0xffffffff))) {
      if (local_c[-1] == 0) {
        std::string::replace_fill((int)value,local_c[-1],0,-local_c[-1],0);
      }
      else {
        local_138 = local_c[-1];
        local_180 = local_c[-1];
        s2 = 0;
        local_188 = local_180;
        if (local_138 < local_180) {
          local_188 = local_138;
        }
        std::string::replace((int)value,0,local_188,(uint)&s2,0,0,0);
      }
      if (local_c + -3 != &g_nullStringRep) {
        local_c[-3] = 0;
      }
      while( true ) {
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar6 = FUN_004df398(*(int **)(param_1 + 0x18));
        }
        else {
          piVar1 = *(int **)(param_1 + 0x18);
          pbVar3 = (byte *)*piVar1;
          *piVar1 = *piVar1 + 1;
          uVar6 = (uint)*pbVar3;
        }
        if ((uVar6 == 0xffffffff) || (uVar6 == 0xbd)) break;
        std::string::replace_fill((int)value,local_c[-1],0,1,(byte)uVar6 ^ 0xbd);
      }
      if (*(int *)(str + 0x20) == *(int *)(str + 0x30)) {
        std::vector_string::insert_aux(str + 0x18,*(int *)(str + 0x20),(int)value);
      }
      else {
        local_18c = *(int *)(str + 0x20);
        local_68 = local_18c;
        if (local_18c != 0) {
          ehContext = 0xa4;
          unused19 = 0;
          *(undefined4 *)(local_18c + 8) = 0;
          if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
            uVar6 = local_c[-1];
            newRep2 = std::string::__getRep(local_18c,uVar6,uVar6);
            newData2 = newRep2 + 3;
            *(int **)(local_68 + 8) = newData2;
            unused16 = local_68;
            unused3 = *(undefined4 *)(local_68 + 8);
            unused14 = local_c;
            dest2 = *(undefined4 **)(local_68 + 8);
            unused15 = uVar6;
            memcpy(dest2,local_c,uVar6);
          }
          else {
            unused18 = local_c;
            *(undefined4 **)(local_18c + 8) = local_c;
            unused4 = *(undefined4 *)(local_18c + 8);
            strRep3 = (int *)(*(int *)(local_18c + 8) + -0xc);
            unused17 = local_18c;
            if (strRep3 != &g_nullStringRep) {
              *strRep3 = *strRep3 + 1;
            }
          }
          ehContext = 0x98;
        }
        *(int *)(str + 0x20) = *(int *)(str + 0x20) + 0x10;
      }
      if (local_c[-1] == 0) {
        std::string::replace_fill((int)value,local_c[-1],0,-local_c[-1],0);
      }
      else {
        local_1fc = local_c[-1];
        local_244 = local_c[-1];
        s = 0;
        local_24c = local_244;
        if (local_1fc < local_244) {
          local_24c = local_1fc;
        }
        std::string::replace((int)value,0,local_24c,(uint)&s,0,0,0);
      }
      if (local_c + -3 != &g_nullStringRep) {
        local_c[-3] = 0;
      }
      while( true ) {
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar6 = FUN_004df398(*(int **)(param_1 + 0x18));
        }
        else {
          piVar1 = *(int **)(param_1 + 0x18);
          pbVar3 = (byte *)*piVar1;
          *piVar1 = *piVar1 + 1;
          uVar6 = (uint)*pbVar3;
        }
        if ((uVar6 == 0xffffffff) || (uVar6 == 0xbd)) break;
        std::string::replace_fill((int)value,local_c[-1],0,1,(byte)uVar6 ^ 0xbd);
      }
      if (*(int *)(str + 0x40) == *(int *)(str + 0x50)) {
        std::vector_string::insert_aux(str + 0x38,*(int *)(str + 0x40),(int)value);
      }
      else {
        local_250 = *(int *)(str + 0x40);
        local_bc = local_250;
        if (local_250 != 0) {
          ehContext = 0x134;
          unused13 = 0;
          *(undefined4 *)(local_250 + 8) = 0;
          if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
            len2 = local_c[-1];
            newRep = std::string::__getRep(local_250,len2,len2);
            newData = newRep + 3;
            *(int **)(local_bc + 8) = newData;
            unused10 = local_bc;
            unused = *(undefined4 *)(local_bc + 8);
            unused9 = len2;
            unused8 = local_c;
            dest = *(undefined4 **)(local_bc + 8);
            memcpy(dest,local_c,len2);
          }
          else {
            unused12 = local_c;
            *(undefined4 **)(local_250 + 8) = local_c;
            unused2 = *(undefined4 *)(local_250 + 8);
            strRep2 = (int *)(*(int *)(local_250 + 8) + -0xc);
            unused11 = local_250;
            if (strRep2 != &g_nullStringRep) {
              *strRep2 = *strRep2 + 1;
            }
          }
          ehContext = 0x128;
        }
        *(int *)(str + 0x40) = *(int *)(str + 0x40) + 0x10;
      }
    }
    do {
      local_280 = FUN_004ded48((char *)local_97c,1,0x200,*(int **)(param_1 + 0x18));
      if (local_280 == 0) break;
      local_284 = 0;
      ehContext = 0x20;
      if (local_280 != 0) {
        do {
          *(byte *)((int)local_97c + local_284) = *(byte *)((int)local_97c + local_284) ^ 0xbd;
          local_284 = local_284 + 1;
        } while (local_284 < local_280);
      }
      *(undefined1 *)((int)local_97c + local_280) = 0;
      local_288 = *(int *)(*(int *)(str + 0x70) + -4);
      ehContext = 0x20;
      str2 = str + 0x68;
      pos = *(uint *)(*(int *)(str + 0x70) + -4);
      len = strlen(local_97c);
      std::string::replace(str2,pos,0,(uint)local_97c,(uint)len,0,(uint)len);
    } while (local_280 <= (uint)(*(int *)(*(int *)(str + 0x70) + -4) - local_288));
    ehDtorCount = ehDtorCount + -1;
    if (local_c != (undefined4 *)0x0) {
      if (local_c[-3] != -1) {
        strRep = local_c + -3;
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
        if (prevRefs != 0) goto LAB_0040db0a;
      }
      unused7 = local_c + -3;
      unused6 = local_c + -3;
      operator_delete();
    }
  }
LAB_0040db0a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040db1c  std::vector_string::resize   (352 bytes)   [analysis]
//   resize(n) of a vector of strings
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040db83) */
void __cdecl std::vector_string::resize(int vec,uint n)

{
  int first;
  int last;
  int iVar3;
  int *strRep;
  int dest;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 value [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4ec318);
  iVar3 = *(int *)(vec + 8) - *(int *)(vec + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  if ((uint)(iVar3 >> 4) < n) {
    local_c = &g_emptyStringData;
    iVar3 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    std::vector_string::insert_fill(vec,*(int *)(vec + 8),n - (iVar3 >> 4),(int)value);
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        strRep = (int *)(local_c + -0xc);
        if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (strRep == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *strRep = *strRep + -1;
          iVar3 = *strRep + 1;
        }
        if (iVar3 != 0) goto LAB_0040dc6c;
      }
      operator_delete();
    }
  }
  else {
    iVar3 = *(int *)(vec + 8);
    last = iVar3 - *(int *)(vec + 4);
    if (last < 0) {
      last = last + 0xf;
    }
    if (n < (uint)(last >> 4)) {
      dest = n * 0x10 + *(int *)(vec + 4);
      first = std::copy_string_40e20c(iVar3,iVar3,dest);
      last = *(int *)(vec + 8);
      iVar3 = iVar3 - dest;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      *(int *)(vec + 8) = *(int *)(vec + 8) + (iVar3 >> 4) * -0x10;
      std::_Destroy_range_string(vec,first,last);
    }
  }
LAB_0040dc6c:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dc7c  std::vector_string::insert_fill   (646 bytes, 2 ranges)   [analysis]
//   inserts n copies of a string at a position
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::vector_string::insert_fill(int vec,int pos,uint n,int value)

{
  int iVar1;
  int n2;
  uint *puVar3;
  undefined4 *sehChainHead;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 ehContext;
  int ehDtorCount;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x4ec374);
  if (n == 0) {
    *sehChainHead = local_2c;
  }
  else {
    iVar1 = *(int *)(vec + 8);
    n2 = *(int *)(vec + 0x18) - iVar1;
    if (n2 < 0) {
      n2 = n2 + 0xf;
    }
    if ((uint)(n2 >> 4) < n) {
      iVar1 = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      local_3c = iVar1 >> 4;
      if (n < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &n;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = operator_new();
      if (iVar1 == 0) {
        ehContext = 8;
        badAlloc = &std::bad_alloc::vftable;
        ehDtorCount = ehDtorCount + 2;
        _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
      }
      ehContext = 0x14;
      std::uninitialized_copy_string_40df24(*(int *)(vec + 4),pos,iVar1);
      n2 = pos - *(int *)(vec + 4);
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      std::uninitialized_fill_n_string((n2 >> 4) * 0x10 + iVar1,n,value);
      n2 = pos - *(int *)(vec + 4);
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      std::uninitialized_copy_string_40df24(pos,*(int *)(vec + 8),((n2 >> 4) + n) * 0x10 + iVar1);
      ehContext = 0;
      n2 = *(int *)(vec + 8) - *(int *)(vec + 4);
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      std::_Destroy_range_string(vec,*(int *)(vec + 4),*(int *)(vec + 8));
      operator_delete();
      *(int *)(vec + 0x18) = local_38 * 0x10 + iVar1;
      *(uint *)(vec + 8) = (n2 >> 4) * 0x10 + iVar1 + n * 0x10;
      *(int *)(vec + 4) = iVar1;
    }
    else {
      n2 = iVar1 - pos;
      if (n2 < 0) {
        n2 = n2 + 0xf;
      }
      if (n < (uint)(n2 >> 4)) {
        std::uninitialized_copy_string_40df24(iVar1 + n * -0x10,iVar1,iVar1);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n * 0x10;
        std::copy_backward_string(pos,iVar1 + n * -0x10,iVar1);
        std::fill_string(pos,n * 0x10 + pos,value);
      }
      else {
        n2 = iVar1 - pos;
        if (n2 < 0) {
          n2 = n2 + 0xf;
        }
        n2 = n - (n2 >> 4);
        std::uninitialized_fill_n_string(iVar1,n2,value);
        *(int *)(vec + 8) = *(int *)(vec + 8) + n2 * 0x10;
        std::uninitialized_copy_string_40df24(pos,iVar1,n * 0x10 + pos);
        *(int *)(vec + 8) = *(int *)(vec + 8) + (n - n2) * 0x10;
        std::fill_string(pos,iVar1,value);
      }
    }
    *sehChainHead = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040df24  std::uninitialized_copy_string_40df24   (293 bytes, 2 ranges)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00404d5c (293 bytes; the code occurs several times, e.g. one template instance per type). copy-constructs std::string objects from [first, last) into raw storage
//   file placement: inferred (address adjacency)
int __cdecl std::uninitialized_copy_string_40df24(int first,int last,int dest)

{
  int refs;
  uint len;
  int src;
  int dst;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec3c4);
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
// 0x0040e070  std::copy_backward_string   (46 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00404d2c. copy_backward over std::string objects (16 bytes each)
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
// 0x0040e0a0  std::fill_string   (43 bytes)   [analysis]
//   assigns a string to every element of a range
//   file placement: inferred (address adjacency)
void __cdecl std::fill_string(int first,int last,int value)

{
  for (; last != first; first = first + 0x10) {
    std::string::operator_assign(first,value);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e0cc  std::uninitialized_fill_n_string   (279 bytes, 2 ranges)   [analysis]
//   copy-constructs n strings
//   file placement: inferred (address adjacency)
void __cdecl std::uninitialized_fill_n_string(int dest,int n,int value)

{
  int iVar1;
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ec42c);
  iVar1 = dest;
  while (dest = iVar1, refs = n + -1, n != 0) {
    iVar1 = dest + 0x10;
    n = refs;
    if (dest != 0) {
      *(undefined4 *)(dest + 8) = 0;
      refs = *(int *)(*(int *)(value + 8) + -0xc);
      if (refs == -1 || refs + 1 < 0) {
        len = *(uint *)(*(int *)(value + 8) + -4);
        rep = std::string::__getRep(dest,len,len);
        *(int **)(dest + 8) = rep + 3;
        memcpy(*(undefined4 **)(dest + 8),*(undefined4 **)(value + 8),len);
      }
      else {
        *(undefined4 *)(dest + 8) = *(undefined4 *)(value + 8);
        rep = (int *)(*(int *)(dest + 8) + -0xc);
        if (rep != &g_nullStringRep) {
          *rep = *rep + 1;
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e20c  std::copy_string_40e20c   (50 bytes)   [analysis]
//   assigns strings over a range
//   file placement: inferred (address adjacency)
int __cdecl std::copy_string_40e20c(int first,int last,int dest)

{
  for (; last != first; first = first + 0x10) {
    std::string::operator_assign(dest,first);
    dest = dest + 0x10;
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e240  std::vector_string::insert_aux   (893 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004048f4. std::vector<std::string> insert at a position, growing the storage (doubling, at least 64) when full
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
  
  __InitExceptBlockLDTC(0x4ec4b4);
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
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::uninitialized_copy_string_40df24(*(int *)(vec + 4),pos,storage);
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
    std::uninitialized_copy_string_40df24(pos,*(int *)(vec + 8),(slot >> 4) * 0x10 + storage + 0x10);
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

} // namespace tea

// TEA.exe — runtime / library code "code_0x004d8000"
// 60 functions, 0x004d8000..0x004dbfc4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d8000  FUN_004d8000   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_004d8000(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_004cf2b4(param_1 + 0x10);
  if (param_2 < uVar1) {
    puVar2 = (undefined4 *)FUN_004cf2c0((int *)(param_1 + 0x10),param_2);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8030  FUN_004d8030   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d8030(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5157d8);
  *param_1 = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d80dc  FUN_004d80dc   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004d80dc(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8174  FUN_004d8174   (11 bytes)   [unnamed]
void __cdecl FUN_004d8174(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8200  FUN_004d8200   (245 bytes)   [unnamed]
int __cdecl FUN_004d8200(int param_1,char *param_2)

{
  undefined4 *sehChainHead;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x51585c);
  ehContext = 8;
  std::allocator::allocator_4ceae8(local_30);
  FUN_004d0348(param_1 + 0x10);
  ehDtorCount = ehDtorCount + 2;
  std::allocator::allocator_4ceae8(local_38);
  FUN_004d0348(param_1 + 0x20);
  ehDtorCount = ehDtorCount + 1;
  std::allocator::allocator_4ceae8(local_40);
  FUN_004d0348(param_1 + 0x30);
  ehDtorCount = ehDtorCount + 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 8) = 0x2e;
    *(undefined1 *)(param_1 + 9) = 0x2c;
  }
  else {
    *(char *)(param_1 + 8) = param_2[1];
    *(char *)(param_1 + 9) = param_2[2];
    std::string::assign_cstr(param_1 + 0x10,*(uint **)(param_2 + 4));
    std::string::assign_cstr(param_1 + 0x20,*(uint **)(param_2 + 8));
    std::string::assign_cstr(param_1 + 0x30,*(uint **)(param_2 + 0xc));
    if (*param_2 != '\0') {
      operator_delete_array();
    }
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d89e4  FUN_004d89e4   (113 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004d89e4(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515a60);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 0x30,2);
    std::string::_dtor(param_1 + 0x20,2);
    std::string::_dtor(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8ac8  FUN_004d8ac8   (110 bytes)   [unnamed]
void __cdecl FUN_004d8ac8(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515a68);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 0x30,2);
    std::string::_dtor(param_1 + 0x20,2);
    std::string::_dtor(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d8d78  FUN_004d8d78   (140 bytes)   [unnamed]
undefined4 __cdecl FUN_004d8d78(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515be4);
  DAT_0051bbec = DAT_0051bbec + 1;
  if (DAT_0051bbec == 1) {
    FUN_004d562c(DAT_0051bae0,&DAT_0051bb24);
    FUN_004d562c(DAT_0051bb64,&DAT_0051bb24);
    FUN_004d562c(DAT_0051bba4,&DAT_0051bb24);
    *(uint *)(DAT_0051bb64 + 4) = *(uint *)(DAT_0051bb64 + 4) | 0x2000;
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9030  FUN_004d9030   (203 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_004d9030(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515ce8);
  std::basic_filebuf_char::basic_filebuf_4d072c((undefined4 *)&DAT_0051ba14,0);
  std::basic_filebuf_char::basic_filebuf_4d072c((undefined4 *)&DAT_0051ba58,1);
  std::basic_filebuf_char::basic_filebuf_4d072c((undefined4 *)&DAT_0051ba9c,2);
  std::basic_istream_char::basic_istream_4d13a0(&DAT_0051bae0,0,0x51ba14);
  std::basic_ostream_char::basic_ostream_4d145c((int *)&DAT_0051bb24,0,0x51ba58);
  std::basic_ostream_char::basic_ostream_4d145c(&DAT_0051bb64,0,0x51ba9c);
  std::basic_ostream_char::basic_ostream_4d145c(&DAT_0051bba4,0,0x51ba9c);
  FUN_004d8d78(&DAT_0051bbe4);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d90fc  FUN_004d90fc   (181 bytes)   [unnamed]
void __stdcall FUN_004d90fc(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515cfc);
  std::ios_base::Init::_dtor(0x51bbe4,2);
  std::basic_ostream_char::_dtor(&DAT_0051bba4,2);
  std::basic_ostream_char::_dtor(&DAT_0051bb64,2);
  std::basic_ostream_char::_dtor((undefined4 *)&DAT_0051bb24,2);
  std::basic_istream_char::_dtor(&DAT_0051bae0,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0051ba9c,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0051ba58,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_0051ba14,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d91b4  FUN_004d91b4   (7 bytes)   [unnamed]
void __stdcall FUN_004d91b4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d91bc  FUN_004d91bc   (741 bytes)   [unnamed]
undefined1 * __cdecl FUN_004d91bc(uint *param_1)

{
  char cVar1;
  int prevRefs;
  undefined **ppuVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *strRep;
  char *pcVar10;
  uint *puVar11;
  undefined4 *sehChainHead;
  byte bVar12;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar15;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  char local_188 [240];
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *s;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str2;
  undefined **domainError [2];
  undefined1 newStr [8];
  int *unused12;
  int use_ClibLocale;
  int local_8;
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x515d6c);
  ehContext = 8;
  FUN_004dae38(&use_ClibLocale,param_1,0x10);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  if (local_8 != 0) goto LAB_004d93c2;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar15 = 1;
  copyCtor = &LAB_004d9500;
  objectDtor = 0;
  ehContext = 0x2c;
  s = (uint *)FUN_004dc358(local_188,5);
  std::string::string_from_cstr((int)str,s);
  ehDtorCount = ehDtorCount + 2;
  domainError[0] = &std::logic_error::vftable;
  unused11 = 0;
  unused12 = (int *)0x0;
  ehContext = 0x38;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    uVar6 = str2[-1];
    newRep = std::string::__getRep(newStr,uVar6,uVar6);
    unused7 = newStr;
    newData = newRep + 3;
    unused5 = str2;
    unused6 = uVar6;
    unused8 = newData;
    unused12 = newData;
    memcpy(newData,str2,uVar6);
  }
  else {
    unused9 = newStr;
    unused10 = str2;
    unused12 = str2;
    strRep = str2 + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x2c;
  domainError[0] = &std::domain_error::vftable;
  ehDtorCount = ehDtorCount + 2;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
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
      if (prevRefs != 0) goto LAB_004d93ab;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_004d93ab:
  ehContext = 0x20;
  _ThrowExceptionLDTC((uint *)&DAT_004d94a4,(undefined4*)domainError,objectDtor,copyCtor,uVar15,throwFlags,throwFile,throwLine);
LAB_004d93c2:
  ppuVar3 = FUN_004e0ff0();
  ehContext = 0x14;
  strlen((uint *)ppuVar3[2]);
  strlen((uint *)&DAT_00515d08 /* "true" */);
  strlen((uint *)"false");
  puVar4 = (undefined1 *)operator_new_array();
  *puVar4 = 1;
  puVar8 = (uint *)(puVar4 + 0x10);
  puVar4[1] = **ppuVar3;
  puVar4[2] = *ppuVar3[1];
  uVar15 = 0xffffffff;
  pcVar5 = ppuVar3[2];
  do {
    pcVar10 = pcVar5;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar10 = pcVar5 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar15 = ~uVar15;
  puVar7 = (uint *)(pcVar10 + -uVar15);
  puVar11 = puVar8;
  for (uVar6 = uVar15 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(char *)puVar11 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + (uint)bVar12 * -2 + 1);
    puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
  }
  *(uint **)(puVar4 + 4) = puVar8;
  pcVar5 = strlen(puVar8);
  puVar8 = (uint *)((int)puVar8 + (int)(pcVar5 + 1));
  *puVar8 = DAT_00515d13;
  *(undefined1 *)(puVar8 + (uint)bVar12 * -2 + 1) = (&DAT_00515d17)[(uint)bVar12 * -8];
  *(uint **)(puVar4 + 8) = puVar8;
  pcVar5 = strlen(puVar8);
  pcVar5 = (char *)((int)puVar8 + (int)(pcVar5 + 1));
  *(undefined4 *)pcVar5 = GH_PIECE("false", 0, undefined4);
  *(undefined2 *)(pcVar5 + (uint)bVar12 * -8 + 4) =
       *(undefined2 *)("false" + (uint)bVar12 * -8 + 4);
  *(char **)(puVar4 + 0xc) = pcVar5;
  ehDtorCount = ehDtorCount + -1;
  __rwstd::use_Clib_locale::_dtor(&use_ClibLocale,2);
  *sehChainHead = sehPrevFrame;
  return puVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d984c  FUN_004d984c   (476 bytes)   [unnamed]
void __cdecl FUN_004d984c(int param_1,int *param_2)

{
  uint uVar1;
  uint *strRep;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *sehChainHead;
  int iVar5;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *local_14;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x516254);
  iVar5 = 2;
  FUN_004db488((int)str,param_2);
  FUN_004dae38(use_ClibLocale,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      strRep = local_14 + -3;
      if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar5 = 1;
      }
      else {
        *strRep = *strRep - 1;
        iVar5 = *strRep + 1;
      }
      if (iVar5 != 0) goto LAB_004d9904;
    }
    operator_delete();
    local_14 = (uint *)0x0;
  }
LAB_004d9904:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_004d992e;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004d994f;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004d9979:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d999a;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004d992e:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d994f:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9979;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_004d999a:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = toupper(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = tolower(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(use_ClibLocale,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9a28  FUN_004d9a28   (145 bytes)   [unnamed]
void __cdecl FUN_004d9a28(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516290);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_005162c0;
    if (*(char *)(refCounted + 9) != '\0') {
      operator_delete_array();
    }
    operator_delete_array();
    operator_delete_array();
    __rwstd::ref_counted::_dtor(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9abc  FUN_004d9abc   (51 bytes)   [unnamed]
uint __cdecl FUN_004d9abc(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 0x10) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x38) + ((param_2 & 0xff) - *(int *)(param_1 + 0x28))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9af0  FUN_004d9af0   (59 bytes)   [unnamed]
void __cdecl FUN_004d9af0(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 0x10) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x38) + ((uint)*param_2 - *(int *)(param_1 + 0x28)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9b2c  FUN_004d9b2c   (51 bytes)   [unnamed]
uint __cdecl FUN_004d9b2c(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 8) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x3c) + ((param_2 & 0xff) - *(int *)(param_1 + 0x30))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9b60  FUN_004d9b60   (59 bytes)   [unnamed]
void __cdecl FUN_004d9b60(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9b9c  FUN_004d9b9c   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_004d9b9c(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9ba4  FUN_004d9ba4   (33 bytes)   [unnamed]
int __cdecl FUN_004d9ba4(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *dest)

{
  memcpy(dest,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9bc8  FUN_004d9bc8   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_004d9bc8(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9bd0  FUN_004d9bd0   (33 bytes)   [unnamed]
int __cdecl FUN_004d9bd0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *dest)

{
  memcpy(dest,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9bf4  FUN_004d9bf4   (93 bytes)   [unnamed]
undefined4 __cdecl FUN_004d9bf4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = &DAT_005162e8;
  pcVar2 = param_1;
  do {
    bVar4 = *pcVar2 == *pcVar3;
    if (!bVar4) break;
    if (*pcVar2 == '\0') {
      return 1;
    }
    pcVar1 = pcVar2 + 1;
    bVar4 = *pcVar1 == pcVar3[1];
    if (!bVar4) break;
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (!bVar4) {
    pcVar2 = "POSIX";
    do {
      bVar4 = *param_1 == *pcVar2;
      if (!bVar4) break;
      if (*param_1 == '\0') {
        return 1;
      }
      pcVar3 = param_1 + 1;
      bVar4 = *pcVar3 == pcVar2[1];
      if (!bVar4) break;
      param_1 = param_1 + 2;
      pcVar2 = pcVar2 + 2;
      bVar4 = *pcVar3 == '\0';
    } while (!bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9c54  FUN_004d9c54   (447 bytes)   [unnamed]
undefined4 * __cdecl FUN_004d9c54(undefined4 *facet2,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *sehChainHead;
  undefined1 uVar5;
  undefined4 sehPrevFrame;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x516320);
  uVar5 = 0;
  puVar1 = FUN_004d9e74(param_2);
  std::locale::facet::facet_4d9614(facet2,puVar1,uVar5,param_3);
  *facet2 = &PTR_FUN_005163bc;
  if ((undefined *)facet2[8] == &DAT_00515e04) goto LAB_004d9e00;
  *(undefined1 *)(facet2 + 9) = 1;
  FUN_004dae38(use_ClibLocale,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(facet2[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9cf3;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004d9d16;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_004d9d46:
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_004d9d69;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_004d9cf3:
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004d9d16:
  facet2[10] = uVar3;
  uVar3 = 0;
  facet2[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(facet2[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_004d9d46;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_004d9d69:
  facet2[0xc] = uVar3;
  facet2[0xd] = uVar2;
  puVar4 = (undefined1 *)facet2[0xe];
  for (uVar2 = facet2[10]; uVar2 <= (uint)facet2[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = toupper(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)facet2[0xf];
  for (uVar2 = facet2[0xc]; uVar2 <= (uint)facet2[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = tolower(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(use_ClibLocale,2);
LAB_004d9e00:
  *sehChainHead = sehPrevFrame;
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9e14  FUN_004d9e14   (93 bytes)   [unnamed]
void __cdecl FUN_004d9e14(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51635c);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_005163bc;
    FUN_004d9a28(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9e74  FUN_004d9e74   (332 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_004d9e74(uint *param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint ch;
  uint uVar6;
  undefined4 *sehChainHead;
  uint *local_38;
  undefined4 sehPrevFrame;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x516390);
  uVar1 = FUN_004d9bf4((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_004dae38(use_ClibLocale,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      ch = (uint)bVar4;
      iVar3 = FUN_004e13d4(ch);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_004e13a8(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_004e1354(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_004e13e8(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_004e1394(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = isalpha(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_004e1368(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_004e13c0(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_004e13fc(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_004e137c(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x200;
      }
      *local_38 = uVar6;
      bVar4 = bVar4 + 1;
      local_38 = local_38 + 1;
    } while (bVar4 != 0xff);
    __rwstd::use_Clib_locale::_dtor(use_ClibLocale,2);
    *sehChainHead = sehPrevFrame;
  }
  else {
    puVar2 = (uint *)&DAT_00515e04;
    *sehChainHead = sehPrevFrame;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d9fc8  FUN_004d9fc8   (59 bytes)   [unnamed]
void __stdcall FUN_004d9fc8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5163f8);
  FUN_004cf1ac(&DAT_0051bbf0,2,(undefined4 *)&DAT_005163e4);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da004  FUN_004da004   (49 bytes)   [unnamed]
void __stdcall FUN_004da004(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51640c);
  if (DAT_0051bbf0 != 0) {
    operator_delete_array();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da038  FUN_004da038   (261 bytes)   [unnamed]
undefined4 * __cdecl FUN_004da038(undefined4 *param_1,LPCSTR libFileName)

{
  HMODULE hModule;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516430);
  piVar2 = param_1 + 2;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = local_30;
  param_1[0xf] = local_2c;
  *piVar2 = 1;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  puVar3 = (undefined4 *)param_1[8];
  if (param_1[8] == 0) {
    if (param_1[9] == param_1[10]) {
      FUN_004d2384(piVar2);
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
  }
  else {
    param_1[8] = *(undefined4 *)(param_1[8] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  param_1[0xb] = puVar3;
  puVar3[1] = 0;
  puVar3[2] = puVar3;
  puVar3[3] = puVar3;
  *piVar2 = 0x2a;
  if (libFileName == (LPCSTR)0x0) {
    hModule = GetModuleHandleA((LPCSTR)0x0);
    *param_1 = hModule;
  }
  else {
    hModule = LoadLibraryA(libFileName);
    *param_1 = hModule;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da204  FUN_004da204   (698 bytes)   [unnamed]
undefined4 __cdecl FUN_004da204(undefined4 *param_1,undefined4 param_2,UINT id,undefined4 param_4)

{
  undefined4 uVar1;
  uint len;
  int iVar3;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 local_2020 [2];
  int local_2018;
  char local_2010;
  uint buffer [995];
  undefined4 uStackY_107c;
  undefined4 local_a0 [2];
  int local_98;
  int unused;
  undefined1 *unused2;
  int *unused3;
  int *newData;
  undefined4 *src;
  uint unused4;
  undefined1 *unused5;
  int *newRep;
  int *unused6;
  int *strRep2;
  undefined1 *unused7;
  int *local_60;
  undefined4 unused8;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  UINT local_2c [2];
  undefined1 newStr [8];
  int *str2;
  undefined1 str [8];
  int str3;
  int local_8;
  
  iVar3 = 2;
  do {
    local_8 = iVar3;
    iVar3 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x5164a8);
  uStackY_107c = 0x4da241;
  FUN_004d2ad0(local_a0,param_1 + 2,(int *)&id);
  if (param_1[0xb] != local_98) {
    uVar1 = *(undefined4 *)(local_98 + 0x20);
    *sehChainHead = sehPrevFrame;
    return uVar1;
  }
  iVar3 = LoadStringA((HINSTANCE)*param_1,id,(LPSTR)buffer,0x1f58);
  if (iVar3 == 0) goto LAB_004da4aa;
  ehContext = 0x14;
  iVar4 = std::string::string_from_cstr((int)str,buffer);
  ehDtorCount = ehDtorCount + 1;
  local_2c[0] = id;
  unused8 = 0;
  str2 = (int *)0x0;
  ehContext = 0x20;
  iVar3 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    len = *(uint *)(*(int *)(iVar4 + 8) + -4);
    newRep = std::string::__getRep(newStr,len,len);
    unused5 = newStr;
    newData = newRep + 3;
    src = *(undefined4 **)(iVar4 + 8);
    unused4 = len;
    unused6 = newData;
    str2 = newData;
    memcpy(newData,src,len);
  }
  else {
    local_60 = *(int **)(iVar4 + 8);
    unused7 = newStr;
    strRep2 = local_60 + -3;
    str2 = local_60;
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x14;
  ehDtorCount = ehDtorCount + 2;
  FUN_004d7854(local_2020,param_1 + 2,local_2c);
  ehDtorCount = ehDtorCount + -2;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
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
      if (iVar3 != 0) goto LAB_004da407;
    }
    unused3 = str2 + -3;
    operator_delete();
    unused2 = newStr;
    str2 = (int *)0x0;
  }
LAB_004da407:
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
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
      if (iVar3 != 0) goto LAB_004da480;
    }
    unused = str3 + -0xc;
    operator_delete();
  }
LAB_004da480:
  if (local_2010 != '\0') {
    uVar1 = *(undefined4 *)(local_2018 + 0x20);
    *sehChainHead = sehPrevFrame;
    return uVar1;
  }
LAB_004da4aa:
  *sehChainHead = sehPrevFrame;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da4c0  FUN_004da4c0   (55 bytes)   [unnamed]
uint __cdecl FUN_004da4c0(int param_1)

{
  int *i;
  uint uVar2;
  
  uVar2 = 0;
  for (i = (*(int * *)&DAT_0051bbf0); ((uVar2 < DAT_0051bbf4 && (*i != 0)) && (param_1 != *i));
      i = i + 1) {
    uVar2 = uVar2 + 1;
  }
  if ((*(int * *)&DAT_0051bbf0)[uVar2] == 0) {
    return DAT_0051bbf4;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da4f8  FUN_004da4f8   (256 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004da4f8(LPCSTR libFileName)

{
  int *rwcat;
  int *i;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516538);
  rwcat = (int *)operator_new();
  if ((rwcat == (int *)0x0) || (FUN_004da038(rwcat,libFileName), *rwcat == 0)) {
    if (rwcat != (int *)0x0) {
      __rwstd::__rwcat::_dtor(rwcat,3);
    }
    rwcat = (int *)0xffffffff;
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar3 = 0;
    for (i = (*(int * *)&DAT_0051bbf0); *i != 0; i = i + 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == (*(int *)&DAT_0051bbf4)) {
      FUN_004d2bd0((int *)&(*(int * *)&DAT_0051bbf0),(*(int *)&DAT_0051bbf4) * 2,0);
    }
    (*(int * *)&DAT_0051bbf0)[iVar3] = (int)rwcat;
    *sehChainHead = sehPrevFrame;
  }
  return rwcat;
}

// ----------------------------------------------------------------------------------------------------
// 0x004da604  FUN_004da604   (114 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004da604(int param_1,undefined4 param_2,UINT id,undefined4 param_4)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51659c);
  uVar1 = FUN_004da4c0(param_1);
  if (uVar1 < DAT_0051bbf4) {
    param_4 = FUN_004da204(*(undefined4 **)(DAT_0051bbf0 + uVar1 * 4),param_2,id,param_4);
    *sehChainHead = sehPrevFrame;
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004daa54  FUN_004daa54   (111 bytes)   [unnamed]
void __stdcall FUN_004daa54(void)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516660);
  puVar1 = DAT_0051bbf8;
  if (DAT_0051664c != '\0') {
    DAT_0051bbf8[1] = DAT_0051bbf8[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_0051664c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004daac4  std::string::string_4daac4   (87 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040da88 (87 bytes; the code occurs several times, e.g. one template instance per type). default constructor: data = the shared empty rep
/* WARNING: Removing unreachable block (ram,0x004dab02) */
int __cdecl std::string::string_4daac4(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516680);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dab3c  FUN_004dab3c   (32 bytes)   [unnamed]
int * __cdecl FUN_004dab3c(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0051bbfc = DAT_0051bbfc + 1;
    *param_1 = DAT_0051bbfc;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dae04  FUN_004dae04   (50 bytes)   [unnamed]
undefined * __cdecl FUN_004dae04(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  uVar1 = 0;
  do {
    if ((uVar2 & param_2) != 0) {
      return *(undefined **)(*(int *)(param_1 + 8) + 8 + uVar1 * 0x10);
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 * 2;
  } while (uVar1 < 6);
  return &DAT_00516766;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dae38  FUN_004dae38   (352 bytes)   [unnamed]
int * __cdecl FUN_004dae38(int *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  int i;
  uint uVar6;
  uint j;
  char *pcVar8;
  undefined4 *sehChainHead;
  byte bVar9;
  char newStr [16];
  char newStr2 [16];
  char newStr3 [16];
  char newStr4 [16];
  char newStr5 [32];
  char newStr6 [16];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x516884);
  ehContext = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_004e3578((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_004daf77;
  strlen(puVar2);
  pcVar3 = (char *)operator_new_array();
  pcVar4 = "LC_COLLATE";
  pcVar8 = newStr;
  for (i = 0x1c; i != 0; i = i + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (param_3 < 5) {
    if (param_3 == 4) {
      pcVar4 = newStr3;
    }
    else if (param_3 == 1) {
      pcVar4 = newStr;
    }
    else {
      if (param_3 != 2) goto LAB_004daeda;
      pcVar4 = newStr2;
    }
  }
  else if (param_3 == 0x10) {
    pcVar4 = newStr4;
  }
  else if (param_3 == 0x20) {
    pcVar4 = newStr5;
  }
  else {
LAB_004daeda:
    pcVar4 = newStr6;
  }
  pcVar4 = thunk_FUN_004dcd18((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_strchr((char *)param_1[1],'=');
  if (pcVar4 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar4 = (char *)param_1[1];
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (j = uVar6 >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar4 = pcVar4 + 1;
    do {
      pcVar8 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar8 + -uVar6;
    pcVar8 = pcVar3;
    for (j = uVar6 >> 2; j != 0; j = j - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -8 + 4;
      pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
  }
  pcVar4 = thunk_strchr(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_004daf77:
  FUN_004e3578((ushort)param_3,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004daff8  FUN_004daff8   (713 bytes)   [unnamed]
void __stdcall FUN_004daff8(void)

{
  uint len;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  uint uVar6;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 *unused;
  undefined4 unused2;
  int *unused3;
  int *unused4;
  int *newData;
  int *unused5;
  uint unused6;
  undefined1 *unused7;
  int *newRep;
  int *unused8;
  int *strRep2;
  undefined1 *unused9;
  int *unused10;
  undefined4 unused11;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *localeImp;
  undefined4 *localeImp2;
  undefined1 str [8];
  int *str2;
  undefined **logicError [2];
  undefined1 newStr [8];
  int *unused12;
  
  __InitExceptBlockLDTC(0x5168e4);
  if ((*(undefined4 * *)&DAT_0051bc08) == (undefined4 *)0x0) goto LAB_004db1ec;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar6 = 1;
  copyCtor = std::logic_error::logic_error_copy;
  objectDtor = 0;
  ehContext = 0x14;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_locale_initid_called_twice_005165c8);
  std::string::string_from_cstr((int)str,msgText);
  ehDtorCount = ehDtorCount + 2;
  logicError[0] = &std::logic_error::vftable;
  unused11 = 0;
  unused12 = (int *)0x0;
  ehContext = 0x20;
  if (str2[-3] == -1 || str2[-3] + 1 < 0) {
    len = str2[-1];
    newRep = std::string::__getRep(newStr,len,len);
    unused7 = newStr;
    newData = newRep + 3;
    unused5 = str2;
    unused6 = len;
    unused8 = newData;
    unused12 = newData;
    memcpy(newData,str2,len);
  }
  else {
    unused9 = newStr;
    unused10 = str2;
    unused12 = str2;
    strRep2 = str2 + -3;
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x14;
  ehDtorCount = ehDtorCount + 1;
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004db1d5;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_004db1d5:
  ehContext = 8;
  _ThrowExceptionLDTC((uint *)&DAT_004113dc,(undefined4*)logicError,objectDtor,(undefined*)copyCtor,uVar6,throwFlags,throwFile,throwLine);
LAB_004db1ec:
  localeImp2 = (undefined4 *)operator_new();
  if (localeImp2 != (undefined4 *)0x0) {
    ehContext = 0x50;
    __rwstd::locale_imp::locale_imp(localeImp2,10,1);
    ehContext = 0x44;
  }
  DAT_0051bc00 = localeImp2;
  *(undefined1 *)(localeImp2 + 0xc) = 1;
  std::string::assign_cstr((int)(localeImp2 + 8),(uint *)&DAT_00516767);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    std::string::operator_assign(DAT_0051bc00[2] + iVar2 * 0x10,(int)(DAT_0051bc00 + 8));
    iVar2 = iVar2 + 1;
  }
  localeImp = (undefined4 *)operator_new();
  if (localeImp != (undefined4 *)0x0) {
    ehContext = 0x68;
    __rwstd::locale_imp::locale_imp(localeImp,10,2);
  }
  DAT_0051bc04 = localeImp;
  localeImp[6] = 0x3f0;
  *(undefined1 *)(localeImp + 0xc) = 1;
  (*(undefined4 * *)&DAT_0051bc08) = DAT_0051bc00;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db414  FUN_004db414   (113 bytes)   [unnamed]
int * __cdecl FUN_004db414(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516968);
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)*param_2) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
    iVar3 = *param_2;
    *param_1 = iVar3;
    piVar1 = (int *)(iVar3 + 4);
    *piVar1 = *piVar1 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db488  FUN_004db488   (877 bytes)   [unnamed]
int __cdecl FUN_004db488(int str,int *param_2)

{
  uint len;
  int refs;
  undefined4 uVar3;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined4 *dest;
  undefined4 *src;
  uint unused;
  int unused2;
  int *newRep;
  int *newData;
  undefined4 unused3;
  undefined1 *unused4;
  undefined4 unused5;
  int *unused6;
  int *unused7;
  int *newData2;
  int *unused8;
  uint unused9;
  undefined1 *unused10;
  int *newRep2;
  int *unused11;
  int *strRep2;
  undefined1 *unused12;
  int *unused13;
  undefined4 unused14;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str2 [8];
  int *str3;
  undefined **runtimeError [2];
  undefined1 newStr [8];
  int *unused15;
  
  __InitExceptBlockLDTC(0x5169d4);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    ehContext = 8;
    std::string::string_from_cstr(str,(uint *)&DAT_00516775);
    *sehChainHead = sehPrevFrame;
    return str;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_004dbc60(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_004db6d2;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar7 = 1;
  copyCtor = &LAB_004db328;
  uVar3 = 0;
  ehContext = 0x20;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_Error_constructing_locale_name_005165d4);
  std::string::string_from_cstr((int)str2,msgText);
  ehDtorCount = ehDtorCount + 2;
  runtimeError[0] = &std::runtime_error::vftable;
  unused14 = 0;
  unused15 = (int *)0x0;
  ehContext = 0x2c;
  if (str3[-3] == -1 || str3[-3] + 1 < 0) {
    len = str3[-1];
    newRep2 = std::string::__getRep(newStr,len,len);
    unused10 = newStr;
    newData2 = newRep2 + 3;
    unused8 = str3;
    unused9 = len;
    unused11 = newData2;
    unused15 = newData2;
    memcpy(newData2,str3,len);
  }
  else {
    unused12 = newStr;
    unused13 = str3;
    unused15 = str3;
    strRep2 = str3 + -3;
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x20;
  ehDtorCount = ehDtorCount + 1;
  if (str3 != (int *)0x0) {
    if (str3[-3] != -1) {
      strRep = str3 + -3;
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
      if (iVar4 != 0) goto LAB_004db6bb;
    }
    unused7 = str3 + -3;
    unused6 = str3 + -3;
    operator_delete();
    unused5 = 0;
    unused4 = str2;
    str3 = (int *)0x0;
  }
LAB_004db6bb:
  ehContext = 0x14;
  _ThrowExceptionLDTC((uint *)&DAT_004db2c4,(undefined4*)runtimeError,uVar3,copyCtor,uVar7,throwFlags,throwFile,throwLine);
LAB_004db6d2:
  ehContext = 0x50;
  iVar4 = *param_2;
  unused3 = 0;
  *(undefined4 *)(str + 8) = 0;
  refs = *(int *)(*(int *)(iVar4 + 0x28) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    uVar7 = *(uint *)(*(int *)(iVar4 + 0x28) + -4);
    newRep = std::string::__getRep(str,uVar7,uVar7);
    newData = newRep + 3;
    *(int **)(str + 8) = newData;
    unused2 = str;
    src = *(undefined4 **)(iVar4 + 0x28);
    dest = *(undefined4 **)(str + 8);
    unused = uVar7;
    memcpy(dest,src,uVar7);
  }
  else {
    *(undefined4 *)(str + 8) = *(undefined4 *)(iVar4 + 0x28);
    strRep = (int *)(*(int *)(str + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db7f8  FUN_004db7f8   (415 bytes)   [unnamed]
int * __cdecl FUN_004db7f8(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  int *piVar4;
  uint *puVar5;
  undefined4 object [2];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *local_10;
  undefined4 unused;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x516a5c);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_0051bc00;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_0051bc04;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_004d2c54(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      _ThrowExceptionLDTC((uint *)&DAT_004a9aac,object,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_004d2c54(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_004dae04(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        ehContext = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_0051bc08 == 0) {
          FUN_004daff8();
        }
        local_8[1] = local_8[1] + 1;
        ehDtorCount = ehDtorCount + 1;
        FUN_004db998((int *)&local_8,piVar4,puVar5);
        ehDtorCount = ehDtorCount + -1;
        local_8[1] = local_8[1] + -1;
        if ((local_8[1] == 0) && (local_10 = local_8, local_8 != (undefined4 *)0x0)) {
          unused = *local_8;
          ehContext = 0x20;
          (**(code **)*local_8)();
          ehContext = 0x14;
        }
      }
    }
  }
  FUN_004db998(param_1,piVar3,param_2);
  *sehChainHead = sehPrevFrame;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004db998  FUN_004db998   (192 bytes)   [unnamed]
void __cdecl FUN_004db998(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  uint *puVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516a98);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_004dab3c((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_004d2c54((int *)(*param_1 + 0x10),uVar1 + 1,0);
  }
  puVar2 = *(undefined4 **)(*(int *)(*param_1 + 0x10) + uVar1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  *(int **)(*(int *)(*param_1 + 0x10) + uVar1 * 4) = param_2;
  param_2[1] = param_2[1] + 1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dba58  FUN_004dba58   (98 bytes)   [unnamed]
void __cdecl FUN_004dba58(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516ad0);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_005158a0;
    __rwstd::ref_counted::_dtor(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbabc  FUN_004dbabc   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004dbabc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbad8  FUN_004dbad8   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004dbad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbaf4  FUN_004dbaf4   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004dbaf4(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb00  FUN_004dbb00   (7 bytes)   [unnamed]
undefined1 __stdcall FUN_004dbb00(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb08  FUN_004dbb08   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004dbb08(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb14  FUN_004dbb14   (20 bytes)   [unnamed]
uint __cdecl FUN_004dbb14(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (uint)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb28  FUN_004dbb28   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004dbb28(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbb34  FUN_004dbb34   (172 bytes)   [unnamed]
int __cdecl FUN_004dbb34(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516aec);
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(int *)(param_1 + 0x2c) = param_1 + 0x38;
  *(int *)(param_1 + 0x30) = param_1 + 0x38;
  uVar1 = *(uint *)(param_1 + 0xc) & 0x4a;
  if (uVar1 == 8) {
    *(undefined4 *)(param_1 + 0x18) = 0x10;
  }
  else if (uVar1 == 0x40) {
    *(undefined4 *)(param_1 + 0x18) = 8;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 10;
  }
  uVar1 = *(uint *)(param_1 + 0xc) & 0xb0;
  if (uVar1 == 0x20) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else if (uVar1 == 0x10) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbc60  FUN_004dbc60   (324 bytes)   [unnamed]
undefined4 __cdecl FUN_004dbc60(int str,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str2 [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x516b84);
  puVar1 = (uint *)FUN_004e3578(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)str2,puVar1);
  FUN_004e3578(1,*(uint **)(*param_2 + 8));
  FUN_004e3578(2,*(uint **)(*param_2 + 0x18));
  FUN_004e3578(4,*(uint **)(*param_2 + 0x28));
  FUN_004e3578(0x10,*(uint **)(*param_2 + 0x38));
  FUN_004e3578(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_004e3578(0xff,(uint *)0x0);
  std::string::assign_cstr(str,puVar1);
  uVar2 = FUN_004e3578(0xff,strRep);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (strRep != (uint *)0x0) {
    if (strRep[-3] != 0xffffffff) {
      strRep = strRep + -3;
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep - 1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004dbd92;
    }
    operator_delete();
  }
LAB_004dbd92:
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbda4  FUN_004dbda4   (38 bytes)   [unnamed]
void __cdecl FUN_004dbda4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  iVar2 = sprintf(puVar1,&DAT_00516b51);
  *(undefined1 **)(param_1 + 0x30) = puVar1 + iVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbdcc  FUN_004dbdcc   (120 bytes)   [unnamed]
void __cdecl FUN_004dbdcc(int param_1,undefined1 *param_2,char *param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) & 2) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *pcVar1 = '.';
    pcVar1[1] = '*';
    pcVar1 = pcVar1 + 2;
  }
  for (; *param_3 != '\0'; param_3 = param_3 + 1) {
    *pcVar1 = *param_3;
    pcVar1 = pcVar1 + 1;
  }
  if (*(int *)(param_1 + 0x18) == 8) {
    *pcVar1 = 'o';
  }
  else if (*(int *)(param_1 + 0x18) == 0x10) {
    if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
      cVar2 = 'x';
    }
    else {
      cVar2 = 'X';
    }
    *pcVar1 = cVar2;
  }
  else {
    if (param_4 == '\0') {
      cVar2 = 'u';
    }
    else {
      cVar2 = 'd';
    }
    *pcVar1 = cVar2;
  }
  pcVar1[1] = '\0';
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbe44  FUN_004dbe44   (98 bytes)   [unnamed]
void __cdecl FUN_004dbe44(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b54,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbea8  FUN_004dbea8   (98 bytes)   [unnamed]
void __cdecl FUN_004dbea8(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b56,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbf0c  FUN_004dbf0c   (92 bytes)   [unnamed]
void __cdecl FUN_004dbf0c(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b58,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbf68  FUN_004dbf68   (92 bytes)   [unnamed]
void __cdecl FUN_004dbf68(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b59,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dbfc4  FUN_004dbfc4   (92 bytes)   [unnamed]
void __cdecl FUN_004dbfc4(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b5a,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

} // namespace tea

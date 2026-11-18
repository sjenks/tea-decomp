// TEACON.exe — runtime / library code "code_0x0041c000"
// 94 functions, 0x0041c158..0x0041ffdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c158  FUN_0041c158   (11 bytes)   [unnamed]
void __cdecl FUN_0041c158(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c970  FUN_0041c970   (140 bytes)   [unnamed]
undefined4 __cdecl FUN_0041c970(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430c90);
  DAT_00434894 = DAT_00434894 + 1;
  if (DAT_00434894 == 1) {
    FUN_0041aa58(DAT_00434788,&DAT_004347cc);
    FUN_0041aa58(DAT_0043480c,&DAT_004347cc);
    FUN_0041aa58(DAT_0043484c,&DAT_004347cc);
    *(uint *)(DAT_0043480c + 4) = *(uint *)(DAT_0043480c + 4) | 0x2000;
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cc28  FUN_0041cc28   (203 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_0041cc28(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430d94);
  std::basic_filebuf_char::basic_filebuf((undefined4 *)&DAT_004346bc,0);
  std::basic_filebuf_char::basic_filebuf((undefined4 *)&DAT_00434700,1);
  std::basic_filebuf_char::basic_filebuf((undefined4 *)&DAT_00434744,2);
  std::basic_istream_char::basic_istream(&DAT_00434788,0,0x4346bc);
  std::basic_ostream_char::basic_ostream((int *)&DAT_004347cc,0,0x434700);
  std::basic_ostream_char::basic_ostream(&DAT_0043480c,0,0x434744);
  std::basic_ostream_char::basic_ostream(&DAT_0043484c,0,0x434744);
  FUN_0041c970(&DAT_0043488c);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ccf4  FUN_0041ccf4   (181 bytes)   [unnamed]
void __stdcall FUN_0041ccf4(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430da8);
  std::ios_base::Init::_dtor(0x43488c,2);
  std::basic_ostream_char::_dtor(&DAT_0043484c,2);
  std::basic_ostream_char::_dtor(&DAT_0043480c,2);
  std::basic_ostream_char::_dtor((undefined4 *)&DAT_004347cc,2);
  std::basic_istream_char::_dtor(&DAT_00434788,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_00434744,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_00434700,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_004346bc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cffc  FUN_0041cffc   (476 bytes)   [unnamed]
void __cdecl FUN_0041cffc(int param_1,int *param_2)

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
  
  __InitExceptBlockLDTC(0x431208);
  iVar5 = 2;
  FUN_0041e1dc((int)str,param_2);
  FUN_0041db8c(use_ClibLocale,local_14,iVar5);
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
      if (iVar5 != 0) goto LAB_0041d0b4;
    }
    operator_delete();
    local_14 = (uint *)0x0;
  }
LAB_0041d0b4:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d0de;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_0041d0ff;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_0041d129:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041d14a;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_0041d0de:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041d0ff:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d129;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0041d14a:
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
// 0x0041d1d8  FUN_0041d1d8   (145 bytes)   [unnamed]
void __cdecl FUN_0041d1d8(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431244);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_00431264;
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
// 0x0041d26c  FUN_0041d26c   (51 bytes)   [unnamed]
uint __cdecl FUN_0041d26c(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 0x10) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x38) + ((param_2 & 0xff) - *(int *)(param_1 + 0x28))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d2a0  FUN_0041d2a0   (59 bytes)   [unnamed]
void __cdecl FUN_0041d2a0(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 0x10) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x38) + ((uint)*param_2 - *(int *)(param_1 + 0x28)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d2dc  FUN_0041d2dc   (51 bytes)   [unnamed]
uint __cdecl FUN_0041d2dc(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 8) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x3c) + ((param_2 & 0xff) - *(int *)(param_1 + 0x30))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d310  FUN_0041d310   (59 bytes)   [unnamed]
void __cdecl FUN_0041d310(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d34c  FUN_0041d34c   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_0041d34c(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d354  FUN_0041d354   (33 bytes)   [unnamed]
int __cdecl FUN_0041d354(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *dest)

{
  memcpy(dest,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d378  FUN_0041d378   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_0041d378(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d380  FUN_0041d380   (33 bytes)   [unnamed]
int __cdecl FUN_0041d380(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *dest)

{
  memcpy(dest,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d3a4  FUN_0041d3a4   (93 bytes)   [unnamed]
undefined4 __cdecl FUN_0041d3a4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = &DAT_0043128c;
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
// 0x0041d404  FUN_0041d404   (447 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041d404(undefined4 *facet2,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *sehChainHead;
  undefined1 uVar5;
  undefined4 sehPrevFrame;
  int use_ClibLocale [2];
  
  __InitExceptBlockLDTC(0x4312c4);
  uVar5 = 0;
  puVar1 = FUN_0041d624(param_2);
  std::locale::facet::facet_41cdc4(facet2,puVar1,uVar5,param_3);
  *facet2 = &PTR_FUN_00431360;
  if ((undefined *)facet2[8] == &DAT_00430db8) goto LAB_0041d5b0;
  *(undefined1 *)(facet2 + 9) = 1;
  FUN_0041db8c(use_ClibLocale,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(facet2[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d4a3;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_0041d4c6;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_0041d4f6:
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041d519;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_0041d4a3:
    if ((*(byte *)(facet2[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041d4c6:
  facet2[10] = uVar3;
  uVar3 = 0;
  facet2[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(facet2[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d4f6;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0041d519:
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
LAB_0041d5b0:
  *sehChainHead = sehPrevFrame;
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d5c4  FUN_0041d5c4   (93 bytes)   [unnamed]
void __cdecl FUN_0041d5c4(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431300);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_00431360;
    FUN_0041d1d8(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d624  FUN_0041d624   (332 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_0041d624(uint *param_1)

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
  
  __InitExceptBlockLDTC(0x431334);
  uVar1 = FUN_0041d3a4((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_0041db8c(use_ClibLocale,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      ch = (uint)bVar4;
      iVar3 = FUN_0042260c(ch);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_004225e0(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_0042258c(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_00422620(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = islower(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = isalpha(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = isdigit(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_004225f8(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_00422634(ch);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_004225b4(ch);
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
    puVar2 = (uint *)&DAT_00430db8;
    *sehChainHead = sehPrevFrame;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d7a8  FUN_0041d7a8   (111 bytes)   [unnamed]
void __stdcall FUN_0041d7a8(void)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431424);
  puVar1 = DAT_00434898;
  if (DAT_00431410 != '\0') {
    DAT_00434898[1] = DAT_00434898[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00431410 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d818  std::string::string_41d818   (87 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040da88 (87 bytes; the code occurs several times, e.g. one template instance per type). default constructor: data = the shared empty rep
/* WARNING: Removing unreachable block (ram,0x0041d856) */
int __cdecl std::string::string_41d818(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431444);
  *(undefined4 *)(self + 8) = 0;
  *(undefined1 **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d890  FUN_0041d890   (32 bytes)   [unnamed]
int * __cdecl FUN_0041d890(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0043489c = DAT_0043489c + 1;
    *param_1 = DAT_0043489c;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041db58  FUN_0041db58   (50 bytes)   [unnamed]
undefined * __cdecl FUN_0041db58(int param_1,uint param_2)

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
  return &DAT_0043152a;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041db8c  FUN_0041db8c   (352 bytes)   [unnamed]
int * __cdecl FUN_0041db8c(int *param_1,uint *param_2,int param_3)

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
  __InitExceptBlockLDTC(0x431648);
  ehContext = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_004247b0((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_0041dccb;
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
      if (param_3 != 2) goto LAB_0041dc2e;
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
LAB_0041dc2e:
    pcVar4 = newStr6;
  }
  pcVar4 = thunk_FUN_0041f2b0((char *)param_1[1],pcVar4);
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
LAB_0041dccb:
  FUN_004247b0((ushort)param_3,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dd4c  FUN_0041dd4c   (713 bytes)   [unnamed]
void __stdcall FUN_0041dd4c(void)

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
  
  __InitExceptBlockLDTC(0x4316a8);
  if ((*(undefined4 * *)&DAT_004348a8) == (undefined4 *)0x0) goto LAB_0041df40;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar6 = 1;
  copyCtor = std::logic_error::logic_error_copy;
  objectDtor = 0;
  ehContext = 0x14;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_locale_initid_called_twice_0043138c);
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
      if (iVar2 != 0) goto LAB_0041df29;
    }
    unused4 = str2 + -3;
    unused3 = str2 + -3;
    operator_delete();
    unused2 = 0;
    unused = str;
    str2 = (int *)0x0;
  }
LAB_0041df29:
  ehContext = 8;
  _ThrowExceptionLDTC((uint *)&DAT_004079c4,(undefined4*)logicError,objectDtor,(undefined*)copyCtor,uVar6,throwFlags,throwFile,throwLine);
LAB_0041df40:
  localeImp2 = (undefined4 *)operator_new();
  if (localeImp2 != (undefined4 *)0x0) {
    ehContext = 0x50;
    __rwstd::locale_imp::locale_imp(localeImp2,10,1);
    ehContext = 0x44;
  }
  DAT_004348a0 = localeImp2;
  *(undefined1 *)(localeImp2 + 0xc) = 1;
  std::string::assign_cstr((int)(localeImp2 + 8),(uint *)&DAT_0043152b);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    std::string::operator_assign(DAT_004348a0[2] + iVar2 * 0x10,(int)(DAT_004348a0 + 8));
    iVar2 = iVar2 + 1;
  }
  localeImp = (undefined4 *)operator_new();
  if (localeImp != (undefined4 *)0x0) {
    ehContext = 0x68;
    __rwstd::locale_imp::locale_imp(localeImp,10,2);
  }
  DAT_004348a4 = localeImp;
  localeImp[6] = 0x3f0;
  *(undefined1 *)(localeImp + 0xc) = 1;
  (*(undefined4 * *)&DAT_004348a8) = DAT_004348a0;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e168  FUN_0041e168   (113 bytes)   [unnamed]
int * __cdecl FUN_0041e168(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x43172c);
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
// 0x0041e1dc  FUN_0041e1dc   (877 bytes)   [unnamed]
int __cdecl FUN_0041e1dc(int str,int *param_2)

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
  
  __InitExceptBlockLDTC(0x431798);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    ehContext = 8;
    std::string::string_from_cstr(str,(uint *)&DAT_00431539);
    *sehChainHead = sehPrevFrame;
    return str;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_0041e908(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_0041e426;
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  uVar7 = 1;
  copyCtor = &LAB_0041e07c;
  uVar3 = 0;
  ehContext = 0x20;
  msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_Error_constructing_locale_name_00431398);
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
      if (iVar4 != 0) goto LAB_0041e40f;
    }
    unused7 = str3 + -3;
    unused6 = str3 + -3;
    operator_delete();
    unused5 = 0;
    unused4 = str2;
    str3 = (int *)0x0;
  }
LAB_0041e40f:
  ehContext = 0x14;
  _ThrowExceptionLDTC((uint *)&DAT_0041e018,(undefined4*)runtimeError,uVar3,copyCtor,uVar7,throwFlags,throwFile,throwLine);
LAB_0041e426:
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
// 0x0041e54c  FUN_0041e54c   (415 bytes)   [unnamed]
int * __cdecl FUN_0041e54c(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

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
  
  __InitExceptBlockLDTC(0x431820);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_004348a0;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_004348a4;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_004190ec(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      _ThrowExceptionLDTC((uint *)&DAT_0041634c,object,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_004190ec(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_0041db58(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        ehContext = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_004348a8 == 0) {
          FUN_0041dd4c();
        }
        local_8[1] = local_8[1] + 1;
        ehDtorCount = ehDtorCount + 1;
        FUN_0041e6ec((int *)&local_8,piVar4,puVar5);
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
  FUN_0041e6ec(param_1,piVar3,param_2);
  *sehChainHead = sehPrevFrame;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e6ec  FUN_0041e6ec   (192 bytes)   [unnamed]
void __cdecl FUN_0041e6ec(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  uint *puVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x43185c);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_0041d890((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_004190ec((int *)(*param_1 + 0x10),uVar1 + 1,0);
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
// 0x0041e7ac  FUN_0041e7ac   (98 bytes)   [unnamed]
void __cdecl FUN_0041e7ac(undefined4 *refCounted,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431894);
  if (refCounted != (undefined4 *)0x0) {
    *refCounted = &PTR_FUN_00430a8c;
    __rwstd::ref_counted::_dtor(refCounted,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e810  FUN_0041e810   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0041e810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e82c  FUN_0041e82c   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0041e82c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e848  FUN_0041e848   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0041e848(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e854  FUN_0041e854   (7 bytes)   [unnamed]
undefined1 __stdcall FUN_0041e854(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e85c  FUN_0041e85c   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0041e85c(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e868  FUN_0041e868   (20 bytes)   [unnamed]
uint __cdecl FUN_0041e868(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (uint)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e87c  FUN_0041e87c   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0041e87c(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e908  FUN_0041e908   (324 bytes)   [unnamed]
undefined4 __cdecl FUN_0041e908(int str,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str2 [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x431908);
  puVar1 = (uint *)FUN_004247b0(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)str2,puVar1);
  FUN_004247b0(1,*(uint **)(*param_2 + 8));
  FUN_004247b0(2,*(uint **)(*param_2 + 0x18));
  FUN_004247b0(4,*(uint **)(*param_2 + 0x28));
  FUN_004247b0(0x10,*(uint **)(*param_2 + 0x38));
  FUN_004247b0(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_004247b0(0xff,(uint *)0x0);
  std::string::assign_cstr(str,puVar1);
  uVar2 = FUN_004247b0(0xff,strRep);
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
      if (prevRefs != 0) goto LAB_0041ea3a;
    }
    operator_delete();
  }
LAB_0041ea3a:
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ea4c  __rwstd::except_msg_string::format   (54 bytes)   [analysis]
//   formats a library exception message (printf-style) into a buffer; the result is used to build the exception's what() string
undefined1 * __cdecl __rwstd::except_msg_string::format(undefined1 *exceptMsg,byte *format2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4319a4);
  FUN_00421688(exceptMsg,format2,(uint *)&GHIDRA_STACK(0x0000000c));
  *sehChainHead = sehPrevFrame;
  return exceptMsg;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ed9c  memchr   (30 bytes)   [analysis (usage pattern, less certain)]
char * __cdecl memchr(char *s,char ch,int n)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (n != 0) {
    do {
      pcVar1 = s;
      if (n == 0) break;
      n = n + -1;
      pcVar1 = s + 1;
      in_ZF = ch == *s;
      s = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041edbc  FUN_0041edbc   (32 bytes)   [unnamed]
short * __cdecl FUN_0041edbc(short *param_1,short param_2,int param_3)

{
  short *psVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      psVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      psVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = psVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return psVar1 + -1;
    }
  }
  return (short *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eddc  memcpy   (36 bytes)   [analysis (usage pattern)]
undefined4 * __cdecl memcpy(undefined4 *dest,undefined4 *src,uint n)

{
  uint i;
  undefined4 *puVar2;
  
  puVar2 = dest;
  for (i = n >> 2; i != 0; i = i - 1) {
    *puVar2 = *src;
    src = src + 1;
    puVar2 = puVar2 + 1;
  }
  for (i = n & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)src;
    src = (undefined4 *)((int)src + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee00  FUN_0041ee00   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041ee00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 < param_2) {
    puVar3 = param_1;
    for (i = param_3 >> 2; i != 0; i = i - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (i = param_3 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (param_1 != param_2) {
    puVar2 = (undefined1 *)((int)param_2 + (param_3 - 1));
    puVar4 = (undefined1 *)((int)param_1 + (param_3 - 1));
    for (i = param_3 & 3; i != 0; i = i - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (i = param_3 >> 2; i != 0; i = i - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee4c  memset   (138 bytes)   [analysis (usage pattern)]
undefined4 * __cdecl memset(undefined4 *dest,undefined1 ch,uint n)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = CONCAT11(ch,ch);
  if ((n & 0xfffffffc) == 0) {
    if ((n & 3) != 0) {
      *(undefined1 *)dest = ch;
      bVar4 = (char)(n & 3) - 1;
      if (bVar4 != 0) {
        *(undefined2 *)((int)dest + (bVar4 - 1)) = uVar3;
      }
    }
    return dest;
  }
  *(undefined2 *)dest = uVar3;
  puVar1 = (undefined4 *)((int)dest + (n - 4));
  *(undefined2 *)((int)dest + 2) = uVar3;
  uVar2 = *dest;
  uVar5 = n >> 3;
  puVar6 = dest;
  if (uVar5 == 0) {
    *puVar1 = uVar2;
    return dest;
  }
  do {
    *puVar6 = uVar2;
    puVar6[1] = uVar2;
    if (uVar5 == 1) break;
    puVar6[2] = uVar2;
    puVar6[3] = uVar2;
    if (uVar5 == 2) break;
    puVar6[4] = uVar2;
    puVar6[5] = uVar2;
    if (uVar5 == 3) break;
    puVar6[6] = uVar2;
    puVar6[7] = uVar2;
    if (uVar5 == 4) break;
    puVar6[8] = uVar2;
    puVar6[9] = uVar2;
    if (uVar5 == 5) break;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar2;
    puVar6 = puVar6 + 0xc;
    uVar5 = uVar5 - 6;
  } while (uVar5 != 0);
  *puVar1 = uVar2;
  puVar1[-1] = uVar2;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eed8  FUN_0041eed8   (24 bytes)   [unnamed]
undefined2 * __cdecl FUN_0041eed8(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eef0  FUN_0041eef0   (60 bytes)   [unnamed]
char * __cdecl FUN_0041eef0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint i;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (i = uVar3 >> 2; i != 0; i = i - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ef2c  strchr   (83 bytes)   [analysis]
char * __cdecl strchr(char *s,char ch)

{
  char *pcVar1;
  
  do {
    if (ch == *s) {
      return s;
    }
    if (*s == '\0') {
      return (char *)0x0;
    }
    if (ch == s[1]) {
      return s + 1;
    }
    if (s[1] == '\0') {
      return (char *)0x0;
    }
    if (ch == s[2]) {
      return s + 2;
    }
    if (s[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = s + 3;
    if (ch == *pcVar1) {
      return s + 3;
    }
    s = s + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ef80  strlen   (90 bytes)   [analysis (usage pattern)]
char * __cdecl strlen(uint *s)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = s;
  if (((uint)s & 3) == 0) {
LAB_0041ef88:
    do {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar1 + 0xfefefeff & 0x80808080;
      } while (uVar3 == 0);
      uVar3 = uVar3 & ~uVar1;
    } while (uVar3 == 0);
    if ((char)uVar3 == '\0') {
      if ((char)(uVar3 >> 8) == '\0') {
        if ((uVar3 & 0xff0000) == 0) goto LAB_0041efd2;
        goto LAB_0041efd1;
      }
    }
    else {
LAB_0041efcf:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_0041efd0:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = s + 1;
    if ((char)*s == '\0') goto LAB_0041efcf;
    if (*(char *)((int)s + 1) == '\0') goto LAB_0041efd0;
    if (*(char *)((int)s + 2) != '\0') {
      puVar2 = (uint *)((int)s + 3U & 0xfffffffc);
      goto LAB_0041ef88;
    }
  }
LAB_0041efd1:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_0041efd2:
  return (char *)((int)puVar2 + (-1 - (int)s));
}

// ----------------------------------------------------------------------------------------------------
// 0x0041efdc  FUN_0041efdc   (110 bytes)   [unnamed]
char * __cdecl FUN_0041efdc(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar3 = param_3 >> 2;
  while( true ) {
    if (uVar3 == 0) {
      *pcVar4 = '\0';
      return param_1;
    }
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[1];
    pcVar4[1] = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[2];
    pcVar4[2] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    pcVar4[3] = cVar1;
    pcVar4 = pcVar4 + 4;
    if (cVar1 == '\0') {
      return param_1;
    }
    uVar3 = uVar3 - 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f04c  FUN_0041f04c   (39 bytes)   [unnamed]
uint __cdecl FUN_0041f04c(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 0;
    }
    bVar1 = *param_1;
    if (bVar1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *param_2) | 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f074  thunk → memchr   (5 bytes)   [unnamed]
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f079  thunk → memchr   (5 bytes)   [unnamed]
char * __cdecl thunk_memchr_41f079(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f088  thunk → strchr   (5 bytes)   [unnamed]
char * __cdecl thunk_strchr(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f08d  thunk → strchr   (5 bytes)   [unnamed]
char * __cdecl thunk_strchr_41f08d(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f099  thunk → strrchr   (5 bytes)   [unnamed]
uint * __cdecl thunk_strrchr(uint *param_1,char param_2)

{
  char *len;
  uint *puVar2;
  
  len = strlen(param_1);
  puVar2 = (uint *)(len + (int)param_1);
  while( true ) {
    if (param_2 == (char)*puVar2) {
      return puVar2;
    }
    if (param_1 == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f0a5  thunk → FUN_0041f2b0   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_0041f2b0(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f0ac  FUN_0041f0ac   (108 bytes)   [unnamed]
int __cdecl FUN_0041f0ac(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while (3 < param_3) {
    if ((((*param_2 != *param_1) || (param_2[1] != param_1[1])) || (param_2[2] != param_1[2])) ||
       (param_2[3] != param_1[3])) break;
    param_3 = param_3 + -4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    if (param_3 < 4) break;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      if (bVar2 != bVar1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar3 = (uint)bVar1 - (uint)bVar2;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f118  strcspn   (43 bytes)   [analysis]
int __cdecl strcspn(char *s,char *reject)

{
  char *reject2;
  int iVar2;
  
  iVar2 = 0;
  do {
    reject2 = reject;
    if (*s == '\0') {
      return iVar2;
    }
    for (; *reject2 != '\0'; reject2 = reject2 + 1) {
      if (*reject2 == *s) {
        return iVar2;
      }
    }
    s = s + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f144  FUN_0041f144   (50 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f144(uint *param_1)

{
  char *len;
  undefined4 *mem;
  
  len = strlen(param_1);
  mem = (undefined4 *)malloc();
  if (mem != (undefined4 *)0x0) {
    memcpy(mem,param_1,(uint)(len + 1));
  }
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f178  strcmp   (71 bytes)   [analysis]
int __cdecl strcmp(char *s1,char *s2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = toupper((int)*s1);
    uVar2 = toupper((int)*s2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    s1 = s1 + 1;
    s2 = s2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f1c0  strncpy   (79 bytes)   [analysis]
undefined4 * __cdecl strncpy(undefined4 *dest,uint *src,char *n)

{
  char *len;
  
  len = strlen(src);
  if (n < len) {
    memcpy(dest,src,(uint)n);
  }
  else {
    memcpy(dest,src,(uint)len);
    memset((undefined4 *)(len + (int)dest),0,(int)n - (int)len);
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f210  strncmp   (116 bytes)   [analysis]
int __cdecl strncmp(char *s1,char *s2,int n)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  for (; (n != 0 && (*s1 != '\0')); s1 = s1 + 1) {
    uVar1 = toupper((int)*s1);
    uVar2 = toupper((int)*s2);
    if (uVar1 != uVar2) break;
    n = n + -1;
    s2 = s2 + 1;
  }
  if (n == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = toupper((int)*s1);
    uVar2 = toupper((int)*s2);
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f284  strrchr   (41 bytes)   [analysis (usage pattern)]
uint * __cdecl strrchr(uint *s,char ch)

{
  char *len;
  uint *puVar2;
  
  len = strlen(s);
  puVar2 = (uint *)(len + (int)s);
  while( true ) {
    if (ch == (char)*puVar2) {
      return puVar2;
    }
    if (s == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f2b0  FUN_0041f2b0   (84 bytes)   [unnamed]
char * __cdecl FUN_0041f2b0(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f304  strtok   (103 bytes)   [analysis]
char * __cdecl strtok(char *s,char *delimiters)

{
  char *pcVar1;
  char *pcVar2;
  
  if (s == (char *)0x0) {
    s = DAT_004348ac;
  }
  for (; pcVar1 = delimiters, *s != '\0'; s = s + 1) {
    for (; (*pcVar1 != '\0' && (*pcVar1 != *s)); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 == '\0') break;
  }
  DAT_004348ac = s;
  if (*s == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    for (; pcVar1 = delimiters, pcVar2 = s, *DAT_004348ac != '\0';
        DAT_004348ac = DAT_004348ac + 1) {
      for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
        if (*pcVar1 == *DAT_004348ac) {
          *DAT_004348ac = '\0';
          DAT_004348ac = DAT_004348ac + 1;
          return s;
        }
      }
    }
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f36c  FUN_0041f36c   (55 bytes)   [unnamed]
char * __cdecl FUN_0041f36c(char *param_1,char *param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[1];
    param_1[1] = cVar1;
    if (cVar1 == '\0') {
      return param_1 + 1;
    }
    cVar1 = param_2[2];
    param_1[2] = cVar1;
    if (cVar1 == '\0') {
      return param_1 + 2;
    }
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    param_1[3] = cVar1;
    if (cVar1 == '\0') break;
    param_1 = param_1 + 4;
  }
  return param_1 + 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f3a4  FUN_0041f3a4   (24 bytes)   [unnamed]
int __cdecl FUN_0041f3a4(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f3bc  FUN_0041f3bc   (63 bytes)   [unnamed]
short * __cdecl FUN_0041f3bc(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_0041f3a4(param_2);
  uVar2 = 0;
  psVar3 = param_1;
  if (uVar1 != 0) {
    do {
      *psVar3 = *param_2;
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar1);
  }
  param_1[uVar1] = 0;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f3fc  __InitExceptBlockLDTC   (57 bytes)   [analysis (usage pattern)]
//   Borland exception-frame setup; first call in most functions, argument is that function's exception table
void __InitExceptBlockLDTC(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar2 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar2[2] = param_1;
  puVar2[3] = &GHIDRA_STACK(0x00000004);
  puVar2[1] = &LAB_0041f443;
  *(undefined2 *)(puVar2 + 4) = 0;
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  puVar2[7] = 0;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar2 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f46c  FUN_0041f46c   (343 bytes)   [unnamed]
undefined4 __cdecl FUN_0041f46c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_00426830("IS_STRUC(base->tpMask)","xxtype.cpp",0x13b);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_00426830("IS_STRUC(derv->tpMask)","xxtype.cpp",0x13c);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    FUN_00426830("derv->tpClass.tpcFlags & CF_HAS_BASES","xxtype.cpp",0x13e);
  }
  puVar4 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x12) + param_1);
  do {
    piVar1 = (int *)*puVar4;
    if (piVar1 == (int *)0x0) {
      puVar4 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x10) + param_1);
      while( true ) {
        piVar1 = (int *)*puVar4;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if ((param_4 == 0) || ((puVar4[2] & 3) != 3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        iVar2 = FUN_0041f958(param_2,piVar1);
        if ((iVar2 != 0) && (iVar3 != 0)) break;
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (iVar3 = FUN_0041f46c((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
          return 1;
        }
        puVar4 = puVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(puVar4 + 2) & 8) == 0) {
      if ((param_4 == 0) || ((puVar4[2] & 3) != 3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      iVar2 = FUN_0041f958(param_2,piVar1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        return 1;
      }
      if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
         (iVar3 = FUN_0041f46c((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
        return 1;
      }
    }
    puVar4 = puVar4 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f5c3  FUN_0041f5c3   (83 bytes)   [unnamed]
void __stdcall FUN_0041f5c3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431c18);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_004348b8)[iVar3];
    if ((undefined4 *)(&DAT_004348b8)[iVar3] != (undefined4 *)0x0) {
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[3];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f616  FUN_0041f616   (613 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0041f616(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  if ((param_2 == (int *)0x0) || ((*(byte *)(param_2 + 1) & 1) == 0)) {
    FUN_00426830("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)","xxtype.cpp",0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_00426830("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)","xxtype.cpp",0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_00426830("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)","xxtype.cpp",0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_0041f958(param_6,param_4);
    if (iVar3 != 0) {
      FUN_00426830("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x355);
    }
    iVar3 = FUN_0041f958(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_0041f958(param_2,param_4), iVar3 != 0)) {
    FUN_00426830("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x35b);
  }
  if ((*(byte *)(param_2 + 3) & 4) == 0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  puVar5 = (undefined4 *)((uint)*(ushort *)((int)param_2 + 0x12) + (int)param_2);
  do {
    while (piVar1 = (int *)*puVar5, piVar1 == (int *)0x0) {
      if (bVar2) {
        *param_7 = local_c;
        if (local_14 == 1) {
          return local_10;
        }
        return (undefined4 *)0x0;
      }
      bVar2 = true;
      puVar5 = (undefined4 *)((uint)*(ushort *)(param_2 + 4) + (int)param_2);
    }
    if ((*(byte *)(puVar5 + 2) & 8) == 0) {
      if ((param_8 == 0) || ((puVar5[2] & 3) != 3)) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
      puVar6 = (undefined4 *)(param_1 + puVar5[1]);
      if ((*(byte *)(puVar5 + 2) & 4) != 0) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar3 = FUN_0041f958(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_0041f616((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_0041f821;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_00426830("srcTypPtr","xxtype.cpp",0x3d0);
          }
          puVar4 = FUN_0041f616((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0041f840;
        }
LAB_0041f821:
        if ((local_14 == 0) || (puVar6 != local_10)) {
          local_14 = local_14 + 1;
          local_c = local_18;
          local_10 = puVar6;
        }
        else {
          local_c = local_c | local_18;
        }
      }
      else if (puVar6 == param_3) {
        return puVar6;
      }
    }
LAB_0041f840:
    puVar5 = puVar5 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f87d  FUN_0041f87d   (162 bytes)   [unnamed]
undefined4 __cdecl FUN_0041f87d(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_8;
  
  if (*param_4 == 0) {
    FUN_00426830(&DAT_00431ea9 /* "addr" */,"xxtype.cpp",0x515);
  }
  while( true ) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_8 = (undefined4 *)(*param_4 + param_1[1]);
    if (param_2 != 0) {
      local_8 = (undefined4 *)*local_8;
    }
    iVar2 = FUN_0041f958(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (undefined4 *)0x0)) &&
       (iVar2 = FUN_0041f87d((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
                             (int *)&local_8), iVar2 != 0)) {
      *param_4 = (int)local_8;
      return 1;
    }
    param_1 = param_1 + 3;
  }
  *param_4 = (int)local_8;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f920  FUN_0041f920   (55 bytes)   [unnamed]
char * __cdecl FUN_0041f920(int param_1)

{
  if (param_1 == 0) {
    return "<notype>";
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_00426830("id->tpName","xxtype.cpp",0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f958  FUN_0041f958   (219 bytes)   [unnamed]
undefined4 __cdecl FUN_0041f958(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_00426830(&DAT_00431c3f /* "tp1" */,"xxtype.cpp",0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_00426830(&DAT_00431c4e /* "tp2" */,"xxtype.cpp",0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_00426830("tp1->tpName","xxtype.cpp",0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_00426830("tp2->tpName","xxtype.cpp",0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fa34  FUN_0041fa34   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_0041fa34(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    while( true ) {
      if (param_2 == param_1) {
        return 1;
      }
      uVar2 = *(ushort *)(param_1 + 1);
      uVar3 = *(ushort *)(param_2 + 1);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((param_3 != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      param_3 = 1;
      param_1 = (int *)param_1[2];
      param_2 = (int *)param_2[2];
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((param_1[3] != param_2[3]) && ((param_3 != 0 || (param_1[3] != 0 || param_2[3] != 0)))) {
      return 0;
    }
    param_3 = 1;
    param_1 = (int *)param_1[2];
    param_2 = (int *)param_2[2];
  }
  iVar4 = FUN_0041f958(param_1,param_2);
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(param_1 + 3) & 4) != 0)) {
    uVar5 = FUN_0041f46c((int)param_1,param_2,param_4,1);
    return uVar5;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fb44  FUN_0041fb44   (122 bytes)   [unnamed]
int __cdecl FUN_0041fb44(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_0041f87d((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_0041f87d((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_00426830("!\"Can't adjust class address (no base class entry found)\"","xxtype.cpp",0x57e);
    param_1 = 0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fbc0  FUN_0041fbc0   (39 bytes)   [unnamed]
void __stdcall FUN_0041fbc0(void)

{
  if (DAT_00431f38 == (code *)0x0) {
    DAT_00431f38 = (undefined*)FUN_0041fbe8;
  }
  if ((*(undefined1 * *)&DAT_00431f3c) == (undefined1 *)0x0) {
    (*(undefined1 * *)&DAT_00431f3c) = &LAB_0041fc38;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fbe8  FUN_0041fbe8   (74 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_0041fbe8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x431f60);
  if (DAT_00431f38 != FUN_0041fbe8) {
    ((code *)DAT_00431f38)();
  }
  FUN_00426b84();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fc8c  FUN_0041fc8c   (108 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_0041fc8c(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x432044);
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_00434cc4 == 2) {
    FUN_00427ce5(4,1);
  }
  FUN_0042064c();
  ((code *)DAT_00431f38)();
  FUN_00426b84();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd00  FUN_0041fd00   (53 bytes)   [unnamed]
void __stdcall FUN_0041fd00(void)

{
  int iVar1;
  
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_00434cc4 == 2) {
    FUN_00427ce5(5,1);
  }
  ((code *)DAT_00431f3c)();
  FUN_00426b84();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd38  FUN_0041fd38   (75 bytes)   [unnamed]
void __cdecl FUN_0041fd38(undefined4 *param_1)

{
  undefined4 *dest;
  uint n;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0041fd84(&local_c);
    param_1 = local_8;
  }
  n = 0x9c;
  dest = (undefined4 *)__getTlsBlock();
  memcpy(dest,param_1,n);
  FUN_0041fbc0();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd84  FUN_0041fd84   (39 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0041fd84(undefined4 *param_1)

{
  _DAT_00431f88 = __getTlsBlock();
  _DAT_00431f88 = _DAT_00431f88 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00431f74;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fdac  FUN_0041fdac   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0041fdac(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fdb8  FUN_0041fdb8   (237 bytes)   [unnamed]
LONG __cdecl FUN_0041fdb8(PEXCEPTION_RECORD exceptionRecord,PVOID targetFrame,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS exceptionPointers;
  
  if (exceptionRecord->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((exceptionRecord->ExceptionCode == 0xeefface) || (exceptionRecord->ExceptionCode == 0xeedface)) {
      FUN_0041ff82(targetFrame,exceptionRecord);
      FUN_0041fc8c();
    }
    if ((exceptionRecord->ExceptionCode == 0xc00000fd) && (DAT_00432058 != 0)) {
      FUN_00426acc((uint *)"Stack Overflow!");
    }
    if ((DAT_00434ccc != (code *)0x0) && (iVar2 = ((code *)DAT_00434ccc)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_00434cc8 != (code *)0x0) && (iVar2 = ((code *)DAT_00434cc8)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_00435108 != (int *)0x0) && ((*DAT_00435108 == 1 || (*DAT_00435108 == 2)))) &&
       ((exceptionRecord->ExceptionCode < 0xeedface || (0xeefface < exceptionRecord->ExceptionCode)))) {
      FUN_00427ce5(2,3);
    }
    exceptionPointers.ExceptionRecord = exceptionRecord;
    exceptionPointers.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&exceptionPointers);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fea8  FUN_0041fea8   (26 bytes)   [unnamed]
void __cdecl FUN_0041fea8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = FUN_0041fdb8;
  FUN_0041ff34(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fec4  FUN_0041fec4   (15 bytes)   [unnamed]
void __cdecl FUN_0041fec4(undefined4 *param_1)

{
  FUN_0041ff49(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fed4  FUN_0041fed4   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_0041fed4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_00434ccc);
  (*(undefined4 *)&DAT_00434ccc) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ff20  FUN_0041ff20   (17 bytes)   [unnamed]
void __stdcall FUN_0041ff20(void)

{
  if ((*(undefined4 * *)&DAT_004350e4) != (undefined4 *)0x0) {
    FUN_0041fea8((*(undefined4 * *)&DAT_004350e4));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ff34  FUN_0041ff34   (21 bytes)   [unnamed]
void __cdecl FUN_0041ff34(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *param_1 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ff49  FUN_0041ff49   (44 bytes)   [unnamed]
void __cdecl FUN_0041ff49(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 in_FS;
  
  piVar2 = (int *)segment(in_FS,0);
  piVar2 = (int *)*piVar2;
  if (param_1 == piVar2) {
    puVar1 = (undefined4 *)segment(in_FS,0);
    *puVar1 = *param_1;
  }
  else {
    for (; piVar2 != (int *)0xffffffff; piVar2 = (int *)*piVar2) {
      if ((undefined4 *)*piVar2 == param_1) {
        *piVar2 = *param_1;
        return;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ff82  FUN_0041ff82   (21 bytes)   [unnamed]
void FUN_0041ff82(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord)

{
  RtlUnwind(targetFrame,(PVOID)0x41ff93,exceptionRecord,(PVOID)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ff97  FUN_0041ff97   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_0041ff97(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  uVar1 = (*(code *)*unaff_EBX)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ffa0  access   (60 bytes)   [analysis]
//   C runtime access(path, mode): 0 when the path exists
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl access(LPCSTR path,byte mode)

{
  DWORD attributes;
  undefined4 uVar2;
  
  attributes = GetFileAttributesA(path);
  if (attributes == 0xffffffff) {
    uVar2 = FUN_00421230();
    return uVar2;
  }
  if (((mode & 2) != 0) && ((attributes & 1) != 0)) {
    _DAT_004337d4 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ffdc  FUN_0041ffdc   (96 bytes)   [unnamed]
undefined4 __cdecl FUN_0041ffdc(uint param_1)

{
  undefined4 uVar1;
  BOOL ok;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 2) & 1) == 0) &&
     (ok = CloseHandle(*(HANDLE *)(&DAT_00434d98 + param_1 * 4)), ok != 1)) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  (&DAT_0043252c)[param_1] = 0;
  *(undefined4 *)(&DAT_00434d98 + param_1 * 4) = 0xffffffff;
  return 0;
}

} // namespace tea

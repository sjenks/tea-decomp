// TEACON.exe — runtime / library code "code_0x0041c000"
// 102 functions, 0x0041c020..0x0041ffdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c020  FUN_0041c020   (84 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c020(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4309dc);
  FUN_0041c164(param_1,param_2);
  *param_1 = &__rwstd::facet_imp::vftable;
  param_1[2] = 0;
  param_1[3] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c098  FUN_0041c098   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c098(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430a00);
  *param_1 = &std::exception::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c0e8  FUN_0041c0e8   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c0e8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430a24);
  *param_1 = &std::exception::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c158  FUN_0041c158   (11 bytes)   [unnamed]
void __cdecl FUN_0041c158(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c164  FUN_0041c164   (58 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c164(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430a48);
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c778  FUN_0041c778   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c778(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430c24);
  *param_1 = &std::exception::vftable;
  *param_1 = &std::ios_base::failure::vftable;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar3 = std::string::__getRep(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    memcpy((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 8),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 8);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_0042fab4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c970  FUN_0041c970   (140 bytes)   [unnamed]
undefined4 __cdecl FUN_0041c970(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430c90);
  DAT_00434894 = DAT_00434894 + 1;
  if (DAT_00434894 == 1) {
    FUN_0041aa58(DAT_00434788,&DAT_004347cc);
    FUN_0041aa58(DAT_0043480c,&DAT_004347cc);
    FUN_0041aa58(DAT_0043484c,&DAT_004347cc);
    *(uint *)(DAT_0043480c + 4) = *(uint *)(DAT_0043480c + 4) | 0x2000;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ca64  FUN_0041ca64   (115 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041ca64(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430cb4);
  *param_1 = &std::ios_base::vftable;
  if (DAT_004348a8 == 0) {
    FUN_0041dd4c();
  }
  iVar1 = DAT_004348a8;
  param_1[4] = DAT_004348a8;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cc28  FUN_0041cc28   (203 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_0041cc28(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430d94);
  FUN_00417ee8((undefined4 *)&DAT_004346bc,0);
  FUN_00417ee8((undefined4 *)&DAT_00434700,1);
  FUN_00417ee8((undefined4 *)&DAT_00434744,2);
  FUN_004188cc(&DAT_00434788,0,0x4346bc);
  FUN_00418988((int *)&DAT_004347cc,0,0x434700);
  FUN_00418988(&DAT_0043480c,0,0x434744);
  FUN_00418988(&DAT_0043484c,0,0x434744);
  FUN_0041c970(&DAT_0043488c);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ccf4  FUN_0041ccf4   (181 bytes)   [unnamed]
void __stdcall FUN_0041ccf4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x430da8);
  std::ios_base::Init::_dtor(0x43488c,2);
  std::basic_ostream_char::_dtor(&DAT_0043484c,2);
  std::basic_ostream_char::_dtor(&DAT_0043480c,2);
  std::basic_ostream_char::_dtor((undefined4 *)&DAT_004347cc,2);
  std::basic_istream_char::_dtor(&DAT_00434788,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_00434744,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_00434700,2);
  std::basic_filebuf_char::_dtor((int *)&DAT_004346bc,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cdc4  FUN_0041cdc4   (566 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041cdc4(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4311c8);
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_4;
  *param_1 = &__rwstd::facet_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = &std::locale::facet::vftable;
  *param_1 = &PTR_FUN_00431264;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  if (param_1[8] == 0) {
    param_1[8] = &DAT_00430db8;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_0041ce7c;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_0041cea2;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_0041cf45:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041cf6b;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_0041ce7c:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041cea2:
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar1 = operator_new_array();
  param_1[0xe] = uVar1;
  puVar2 = (undefined1 *)param_1[0xe];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if ((((0x60 < uVar4) && (uVar4 < 0x7b)) &&
        ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0)) &&
       ((*(byte *)(param_1[8] + (uVar4 - 0x20 & 0xff) * 4) & 8) != 0)) {
      uVar3 = uVar4 - 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0) {
      if (uVar4 < 0xff) goto LAB_0041cf45;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_0041cf6b:
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  uVar1 = operator_new_array();
  param_1[0xf] = uVar1;
  puVar2 = (undefined1 *)param_1[0xf];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if (((0x40 < uVar4) && (uVar4 < 0x5b)) &&
       (((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 8) != 0 &&
        ((*(byte *)(param_1[8] + (uVar4 + 0x20 & 0xff) * 4) & 0x10) != 0)))) {
      uVar3 = uVar4 + 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cffc  FUN_0041cffc   (476 bytes)   [unnamed]
void __cdecl FUN_0041cffc(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 local_40;
  undefined1 local_1c [8];
  uint *local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x431208);
  iVar5 = 2;
  FUN_0041e1dc((int)local_1c,param_2);
  FUN_0041db8c(local_c,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar2 = local_14 + -3;
      if (puVar2 == &DAT_0042fab4) {
        iVar5 = 1;
      }
      else if (puVar2 == &DAT_0042fab4) {
        iVar5 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar5 = *puVar2 + 1;
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
      uVar3 = FUN_0042428c(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_00424238(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(local_c,2);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d1d8  FUN_0041d1d8   (145 bytes)   [unnamed]
void __cdecl FUN_0041d1d8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x431244);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00431264;
    if (*(char *)(param_1 + 9) != '\0') {
      operator_delete_array();
    }
    operator_delete_array();
    operator_delete_array();
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
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
int __cdecl FUN_0041d354(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  memcpy(param_4,param_2,param_3 - (int)param_2);
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
int __cdecl FUN_0041d380(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *param_5)

{
  memcpy(param_5,param_2,param_3 - (int)param_2);
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
undefined4 * __cdecl FUN_0041d404(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4312c4);
  uVar5 = 0;
  puVar1 = FUN_0041d624(param_2);
  FUN_0041cdc4(param_1,puVar1,uVar5,param_3);
  *param_1 = &PTR_FUN_00431360;
  if ((undefined *)param_1[8] == &DAT_00430db8) goto LAB_0041d5b0;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_0041db8c(local_c,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d4a3;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_0041d4c6;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_0041d4f6:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_0041d519;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_0041d4a3:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0041d4c6:
  param_1[10] = uVar3;
  uVar3 = 0;
  param_1[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_0041d4f6;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_0041d519:
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  puVar4 = (undefined1 *)param_1[0xe];
  for (uVar2 = param_1[10]; uVar2 <= (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0042428c(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)param_1[0xf];
  for (uVar2 = param_1[0xc]; uVar2 <= (uint)param_1[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_00424238(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(local_c,2);
LAB_0041d5b0:
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d5c4  FUN_0041d5c4   (93 bytes)   [unnamed]
void __cdecl FUN_0041d5c4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x431300);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00431360;
    FUN_0041d1d8(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
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
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint *local_38;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x431334);
  uVar1 = FUN_0041d3a4((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_0041db8c(local_c,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      uVar5 = (uint)bVar4;
      iVar3 = FUN_0042260c(uVar5);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_004225e0(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_0042258c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_00422620(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_004225cc(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = FUN_00422574(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_004225a0(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_004225f8(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_00422634(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_004225b4(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x200;
      }
      *local_38 = uVar6;
      bVar4 = bVar4 + 1;
      local_38 = local_38 + 1;
    } while (bVar4 != 0xff);
    __rwstd::use_Clib_locale::_dtor(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  else {
    puVar2 = (uint *)&DAT_00430db8;
    *in_FS_OFFSET = local_30;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d7a8  FUN_0041d7a8   (111 bytes)   [unnamed]
void __stdcall FUN_0041d7a8(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x431424);
  puVar1 = DAT_00434898;
  if (DAT_00431410 != '\0') {
    DAT_00434898[1] = DAT_00434898[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00431410 = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d818  FUN_0041d818   (87 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0041d856) */
int __cdecl FUN_0041d818(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x431444);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 8) = &DAT_0042fac0;
  *in_FS_OFFSET = local_28;
  return param_1;
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
// 0x0041d8b0  FUN_0041d8b0   (252 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0041d94f) */
undefined4 * __cdecl FUN_0041d8b0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x43155c);
  local_18 = 8;
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_3;
  *param_1 = &__rwstd::locale_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x41d911;
  FUN_00416b20(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_0042fac0;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  std::string::string_from_cstr((int)&local_54,(uint *)&DAT_00431529);
  local_18 = 0x2c;
  FUN_0041b234(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
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
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  char local_98 [16];
  char local_88 [16];
  char local_78 [16];
  char local_68 [16];
  char local_58 [32];
  char local_38 [16];
  undefined4 local_28;
  undefined2 local_18;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x431648);
  local_18 = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_004247b0((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_0041dccb;
  strlen(puVar2);
  pcVar3 = (char *)operator_new_array();
  pcVar4 = "LC_COLLATE";
  pcVar8 = local_98;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (param_3 < 5) {
    if (param_3 == 4) {
      pcVar4 = local_78;
    }
    else if (param_3 == 1) {
      pcVar4 = local_98;
    }
    else {
      if (param_3 != 2) goto LAB_0041dc2e;
      pcVar4 = local_88;
    }
  }
  else if (param_3 == 0x10) {
    pcVar4 = local_68;
  }
  else if (param_3 == 0x20) {
    pcVar4 = local_58;
  }
  else {
LAB_0041dc2e:
    pcVar4 = local_38;
  }
  pcVar4 = thunk_FUN_0041f2b0((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_FUN_0041ef2c((char *)param_1[1],'=');
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
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
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
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
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
  pcVar4 = thunk_FUN_0041ef2c(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_0041dccb:
  FUN_004247b0((ushort)param_3,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dd4c  FUN_0041dd4c   (713 bytes)   [unnamed]
void __stdcall FUN_0041dd4c(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_18c [240];
  undefined1 *local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4316a8);
  if ((*(undefined4 * *)&DAT_004348a8) == (undefined4 *)0x0) goto LAB_0041df40;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  pcVar5 = FUN_004133f0;
  uVar4 = 0;
  local_48 = 0x14;
  local_5c = (uint *)FUN_0041ea4c(local_18c,PTR_s_locale_initid_called_twice_0043138c);
  std::string::string_from_cstr((int)local_2c,local_5c);
  local_3c = local_3c + 2;
  local_1c[0] = &std::logic_error::vftable;
  local_68 = 0;
  local_c = (int *)0x0;
  local_48 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = std::string::__getRep(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    memcpy(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_0042fab4) {
      *local_74 = *local_74 + 1;
    }
  }
  local_48 = 0x14;
  local_3c = local_3c + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041df29;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_0041df29:
  local_48 = 8;
  FUN_004280a0((uint *)&DAT_004079c4,(undefined4*)local_1c,uVar4,(undefined*)pcVar5,uVar6,uVar7,uVar8,uVar9);
LAB_0041df40:
  local_30 = (undefined4 *)operator_new();
  if (local_30 != (undefined4 *)0x0) {
    local_48 = 0x50;
    FUN_0041d8b0(local_30,10,1);
    local_48 = 0x44;
  }
  DAT_004348a0 = local_30;
  *(undefined1 *)(local_30 + 0xc) = 1;
  FUN_00416c68((int)(local_30 + 8),(uint *)&DAT_0043152b);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    FUN_00416bd0(DAT_004348a0[2] + iVar2 * 0x10,(int)(DAT_004348a0 + 8));
    iVar2 = iVar2 + 1;
  }
  local_34 = (undefined4 *)operator_new();
  if (local_34 != (undefined4 *)0x0) {
    local_48 = 0x68;
    FUN_0041d8b0(local_34,10,2);
  }
  DAT_004348a4 = local_34;
  local_34[6] = 0x3f0;
  *(undefined1 *)(local_34 + 0xc) = 1;
  (*(undefined4 * *)&DAT_004348a8) = DAT_004348a0;
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e168  FUN_0041e168   (113 bytes)   [unnamed]
int * __cdecl FUN_0041e168(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
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
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e1dc  FUN_0041e1dc   (877 bytes)   [unnamed]
int __cdecl FUN_0041e1dc(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1b4 [240];
  undefined4 *local_c4;
  undefined4 *local_c0;
  uint local_bc;
  int local_b8;
  int *local_b4;
  int *local_b0;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x431798);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    local_40 = 8;
    std::string::string_from_cstr(param_1,(uint *)&DAT_00431539);
    *in_FS_OFFSET = local_50;
    return param_1;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_0041e908(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_0041e426;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  puVar6 = &LAB_0041e07c;
  uVar3 = 0;
  local_40 = 0x20;
  local_5c = (uint *)FUN_0041ea4c(local_1b4,PTR_s_Error_constructing_locale_name_00431398);
  std::string::string_from_cstr((int)local_2c,local_5c);
  local_34 = local_34 + 2;
  local_1c[0] = &std::runtime_error::vftable;
  local_68 = 0;
  local_c = (int *)0x0;
  local_40 = 0x2c;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = std::string::__getRep(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    memcpy(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_0042fab4) {
      *local_74 = *local_74 + 1;
    }
  }
  local_40 = 0x20;
  local_34 = local_34 + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
      if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0041e40f;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_0041e40f:
  local_40 = 0x14;
  FUN_004280a0((uint *)&DAT_0041e018,(undefined4*)local_1c,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
LAB_0041e426:
  local_40 = 0x50;
  iVar4 = *param_2;
  local_a0 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x28) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    uVar7 = *(uint *)(*(int *)(iVar4 + 0x28) + -4);
    local_b4 = std::string::__getRep(param_1,uVar7,uVar7);
    local_b0 = local_b4 + 3;
    *(int **)(param_1 + 8) = local_b0;
    local_b8 = param_1;
    local_c0 = *(undefined4 **)(iVar4 + 0x28);
    local_c4 = *(undefined4 **)(param_1 + 8);
    local_bc = uVar7;
    memcpy(local_c4,local_c0,uVar7);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar4 + 0x28);
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_0042fab4) {
      *piVar5 = *piVar5 + 1;
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e54c  FUN_0041e54c   (415 bytes)   [unnamed]
int * __cdecl FUN_0041e54c(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  uint *puVar5;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 *local_10;
  undefined4 local_c;
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
      FUN_004280a0((uint *)&DAT_0041634c,local_3c,0,(undefined *)0x0,0,0,0,0);
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
        local_24 = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_004348a8 == 0) {
          FUN_0041dd4c();
        }
        local_8[1] = local_8[1] + 1;
        local_18 = local_18 + 1;
        FUN_0041e6ec((int *)&local_8,piVar4,puVar5);
        local_18 = local_18 + -1;
        local_8[1] = local_8[1] + -1;
        if ((local_8[1] == 0) && (local_10 = local_8, local_8 != (undefined4 *)0x0)) {
          local_c = *local_8;
          local_24 = 0x20;
          (**(code **)*local_8)();
          local_24 = 0x14;
        }
      }
    }
  }
  FUN_0041e6ec(param_1,piVar3,param_2);
  *in_FS_OFFSET = local_34;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e6ec  FUN_0041e6ec   (192 bytes)   [unnamed]
void __cdecl FUN_0041e6ec(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_30;
  
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
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e7ac  FUN_0041e7ac   (98 bytes)   [unnamed]
void __cdecl FUN_0041e7ac(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x431894);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00430a8c;
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
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
undefined4 __cdecl FUN_0041e908(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x431908);
  puVar1 = (uint *)FUN_004247b0(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)local_14,puVar1);
  FUN_004247b0(1,*(uint **)(*param_2 + 8));
  FUN_004247b0(2,*(uint **)(*param_2 + 0x18));
  FUN_004247b0(4,*(uint **)(*param_2 + 0x28));
  FUN_004247b0(0x10,*(uint **)(*param_2 + 0x38));
  FUN_004247b0(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_004247b0(0xff,(uint *)0x0);
  FUN_00416c68(param_1,puVar1);
  uVar2 = FUN_004247b0(0xff,local_c);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_0041ea3a;
    }
    operator_delete();
  }
LAB_0041ea3a:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ea4c  FUN_0041ea4c   (54 bytes)   [unnamed]
undefined1 * __cdecl FUN_0041ea4c(undefined1 *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4319a4);
  FUN_00421688(param_1,param_2,(uint *)&GHIDRA_STACK(0x0000000c));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ed9c  memchr   (30 bytes)   [analysis (usage pattern, less certain)]
char * __cdecl memchr(char *param_1,char param_2,int param_3)

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
undefined4 * __cdecl memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee00  FUN_0041ee00   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041ee00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 < param_2) {
    puVar3 = param_1;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (param_1 != param_2) {
    puVar2 = (undefined1 *)((int)param_2 + (param_3 - 1));
    puVar4 = (undefined1 *)((int)param_1 + (param_3 - 1));
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee4c  memset   (138 bytes)   [analysis (usage pattern)]
undefined4 * __cdecl memset(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = CONCAT11(param_2,param_2);
  if ((param_3 & 0xfffffffc) == 0) {
    if ((param_3 & 3) != 0) {
      *(undefined1 *)param_1 = param_2;
      bVar4 = (char)(param_3 & 3) - 1;
      if (bVar4 != 0) {
        *(undefined2 *)((int)param_1 + (bVar4 - 1)) = uVar3;
      }
    }
    return param_1;
  }
  *(undefined2 *)param_1 = uVar3;
  puVar1 = (undefined4 *)((int)param_1 + (param_3 - 4));
  *(undefined2 *)((int)param_1 + 2) = uVar3;
  uVar2 = *param_1;
  uVar5 = param_3 >> 3;
  puVar6 = param_1;
  if (uVar5 == 0) {
    *puVar1 = uVar2;
    return param_1;
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
  return param_1;
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
  uint uVar4;
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
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
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
// 0x0041ef2c  FUN_0041ef2c   (83 bytes)   [unnamed]
char * __cdecl FUN_0041ef2c(char *param_1,char param_2)

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
// 0x0041ef80  strlen   (90 bytes)   [analysis (usage pattern)]
char * __cdecl strlen(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
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
    puVar2 = param_1 + 1;
    if ((char)*param_1 == '\0') goto LAB_0041efcf;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_0041efd0;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_0041ef88;
    }
  }
LAB_0041efd1:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_0041efd2:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
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
// 0x0041f088  thunk → FUN_0041ef2c   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_0041ef2c(char *param_1,char param_2)

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
// 0x0041f08d  thunk → FUN_0041ef2c   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_0041ef2c_41f08d(char *param_1,char param_2)

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
  char *pcVar1;
  uint *puVar2;
  
  pcVar1 = strlen(param_1);
  puVar2 = (uint *)(pcVar1 + (int)param_1);
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
// 0x0041f118  FUN_0041f118   (43 bytes)   [unnamed]
int __cdecl FUN_0041f118(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return iVar2;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return iVar2;
      }
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f144  FUN_0041f144   (50 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f144(uint *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = strlen(param_1);
  puVar2 = (undefined4 *)malloc();
  if (puVar2 != (undefined4 *)0x0) {
    memcpy(puVar2,param_1,(uint)(pcVar1 + 1));
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f178  FUN_0041f178   (71 bytes)   [unnamed]
int __cdecl FUN_0041f178(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = FUN_0042428c((int)*param_1);
    uVar2 = FUN_0042428c((int)*param_2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f1c0  FUN_0041f1c0   (79 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f1c0(undefined4 *param_1,uint *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = strlen(param_2);
  if (param_3 < pcVar1) {
    memcpy(param_1,param_2,(uint)param_3);
  }
  else {
    memcpy(param_1,param_2,(uint)pcVar1);
    memset((undefined4 *)(pcVar1 + (int)param_1),0,(int)param_3 - (int)pcVar1);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f210  FUN_0041f210   (116 bytes)   [unnamed]
int __cdecl FUN_0041f210(char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  for (; (param_3 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    uVar1 = FUN_0042428c((int)*param_1);
    uVar2 = FUN_0042428c((int)*param_2);
    if (uVar1 != uVar2) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_0042428c((int)*param_1);
    uVar2 = FUN_0042428c((int)*param_2);
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f284  strrchr   (41 bytes)   [analysis (usage pattern)]
uint * __cdecl strrchr(uint *param_1,char param_2)

{
  char *pcVar1;
  uint *puVar2;
  
  pcVar1 = strlen(param_1);
  puVar2 = (uint *)(pcVar1 + (int)param_1);
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
// 0x0041f304  FUN_0041f304   (103 bytes)   [unnamed]
char * __cdecl FUN_0041f304(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = DAT_004348ac;
  }
  for (; pcVar1 = param_2, *param_1 != '\0'; param_1 = param_1 + 1) {
    for (; (*pcVar1 != '\0' && (*pcVar1 != *param_1)); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 == '\0') break;
  }
  DAT_004348ac = param_1;
  if (*param_1 == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    for (; pcVar1 = param_2, pcVar2 = param_1, *DAT_004348ac != '\0';
        DAT_004348ac = DAT_004348ac + 1) {
      for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
        if (*pcVar1 == *DAT_004348ac) {
          *DAT_004348ac = '\0';
          DAT_004348ac = DAT_004348ac + 1;
          return param_1;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
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
  *in_FS_OFFSET = local_28;
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x431f60);
  if (DAT_00431f38 != FUN_0041fbe8) {
    ((code *)DAT_00431f38)();
  }
  FUN_00426b84();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fc8c  FUN_0041fc8c   (108 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_0041fc8c(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x432044);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_00434cc4 == 2) {
    FUN_00427ce5(4,1);
  }
  FUN_0042064c();
  ((code *)DAT_00431f38)();
  FUN_00426b84();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd00  FUN_0041fd00   (53 bytes)   [unnamed]
void __stdcall FUN_0041fd00(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
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
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_0041fd84(&local_c);
    param_1 = local_8;
  }
  uVar2 = 0x9c;
  puVar1 = (undefined4 *)FUN_00401140();
  memcpy(puVar1,param_1,uVar2);
  FUN_0041fbc0();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd84  FUN_0041fd84   (39 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0041fd84(undefined4 *param_1)

{
  _DAT_00431f88 = FUN_00401140();
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
LONG __cdecl FUN_0041fdb8(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_0041ff82(param_2,param_1);
      FUN_0041fc8c();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00432058 != 0)) {
      FUN_00426acc((uint *)"Stack Overflow!");
    }
    if ((DAT_00434ccc != (code *)0x0) && (iVar2 = ((code *)DAT_00434ccc)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_00434cc8 != (code *)0x0) && (iVar2 = ((code *)DAT_00434cc8)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_00435108 != (int *)0x0) && ((*DAT_00435108 == 1 || (*DAT_00435108 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_00427ce5(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
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
void FUN_0041ff82(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x41ff93,param_2,(PVOID)0x0);
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
// 0x0041ffa0  FUN_0041ffa0   (60 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0041ffa0(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00421230();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
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
  BOOL BVar2;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00434d98 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  (&DAT_0043252c)[param_1] = 0;
  *(undefined4 *)(&DAT_00434d98 + param_1 * 4) = 0xffffffff;
  return 0;
}

} // namespace tea

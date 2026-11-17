// TSBuild.exe — runtime / library code "code_0x00464000"
// 96 functions, 0x004643c0..0x00467dc2. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004643c0  FUN_004643c0   (566 bytes)   [unnamed]
undefined4 * __cdecl FUN_004643c0(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487f48);
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_4;
  *param_1 = &__rwstd::facet_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0x20;
  *param_1 = &std::locale::facet::vftable;
  *param_1 = &PTR_FUN_00487ff4;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  if (param_1[8] == 0) {
    param_1[8] = &DAT_00487b38;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_00464478;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_0046449e;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_00464541:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00464567;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_00464478:
    if ((*(byte *)(param_1[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_0046449e:
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
      if (uVar4 < 0xff) goto LAB_00464541;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_00464567:
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
// 0x004645f8  FUN_004645f8   (476 bytes)   [unnamed]
void __cdecl FUN_004645f8(int param_1,int *param_2)

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
  
  __InitExceptBlockLDTC(0x487f88);
  iVar5 = 2;
  FUN_00466234((int)local_1c,param_2);
  FUN_00465be4(local_c,local_14,iVar5);
  if (local_14 != (uint *)0x0) {
    if (local_14[-3] != 0xffffffff) {
      puVar2 = local_14 + -3;
      if (puVar2 == &DAT_00485bcc) {
        iVar5 = 1;
      }
      else if (puVar2 == &DAT_00485bcc) {
        iVar5 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar5 = *puVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_004646b0;
    }
    operator_delete();
    local_14 = (uint *)0x0;
  }
LAB_004646b0:
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_004646da;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_004646fb;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_00464725:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00464746;
  while (uVar1 = uVar1 - 1, uVar3 < uVar1) {
LAB_004646da:
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_004646fb:
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar3 = 0;
  uVar1 = 0xff;
  do {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_00464725;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_00464746:
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x34) = uVar1;
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  for (uVar1 = *(uint *)(param_1 + 0x28); uVar1 <= *(uint *)(param_1 + 0x2c); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0046d1fc(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  for (uVar1 = *(uint *)(param_1 + 0x30); uVar1 <= *(uint *)(param_1 + 0x34); uVar1 = uVar1 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uVar1 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_0046d1a8(uVar1);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(local_c,2);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004647d4  FUN_004647d4   (145 bytes)   [unnamed]
void __cdecl FUN_004647d4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487fc4);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00487ff4;
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
// 0x00464868  FUN_00464868   (51 bytes)   [unnamed]
uint __cdecl FUN_00464868(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 0x10) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x38) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x38) + ((param_2 & 0xff) - *(int *)(param_1 + 0x28))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046489c  FUN_0046489c   (59 bytes)   [unnamed]
void __cdecl FUN_0046489c(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 0x10) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x38) + ((uint)*param_2 - *(int *)(param_1 + 0x28)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004648d8  FUN_004648d8   (51 bytes)   [unnamed]
uint __cdecl FUN_004648d8(int param_1,uint param_2)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + (param_2 & 0xff) * 4) & 8) != 0) {
    param_2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x3c) >> 8),
                       *(undefined1 *)
                        (*(int *)(param_1 + 0x3c) + ((param_2 & 0xff) - *(int *)(param_1 + 0x30))));
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046490c  FUN_0046490c   (59 bytes)   [unnamed]
void __cdecl FUN_0046490c(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464948  FUN_00464948   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_00464948(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464950  FUN_00464950   (33 bytes)   [unnamed]
int __cdecl FUN_00464950(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  memcpy(param_4,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464974  FUN_00464974   (8 bytes)   [unnamed]
undefined1 __cdecl FUN_00464974(undefined4 param_1,undefined1 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046497c  FUN_0046497c   (33 bytes)   [unnamed]
int __cdecl FUN_0046497c(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4, undefined4 *param_5)

{
  memcpy(param_5,param_2,param_3 - (int)param_2);
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004649a0  FUN_004649a0   (93 bytes)   [unnamed]
undefined4 __cdecl FUN_004649a0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = &DAT_0048801c;
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
// 0x00464a00  FUN_00464a00   (447 bytes)   [unnamed]
undefined4 * __cdecl FUN_00464a00(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 local_30;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x488054);
  uVar5 = 0;
  puVar1 = FUN_00464c20(param_2);
  FUN_004643c0(param_1,puVar1,uVar5,param_3);
  *param_1 = &PTR_FUN_004880f0;
  if ((undefined *)param_1[8] == &DAT_00487b38) goto LAB_00464bac;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_00465be4(local_c,param_2,2);
  uVar3 = 0;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 0x10) != 0) {
      if (uVar3 < 0xff) goto LAB_00464a9f;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
  goto LAB_00464ac2;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_00464af2:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00464b15;
  while (uVar2 = uVar2 - 1, uVar3 < uVar2) {
LAB_00464a9f:
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_00464ac2:
  param_1[10] = uVar3;
  uVar3 = 0;
  param_1[0xb] = uVar2;
  uVar2 = 0xff;
  do {
    if ((*(byte *)(param_1[8] + (uVar3 & 0xff) * 4) & 8) != 0) {
      if (uVar3 < 0xff) goto LAB_00464af2;
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff);
LAB_00464b15:
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar2;
  puVar4 = (undefined1 *)param_1[0xe];
  for (uVar2 = param_1[10]; uVar2 <= (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 0x10) != 0) {
      uVar3 = FUN_0046d1fc(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined1 *)param_1[0xf];
  for (uVar2 = param_1[0xc]; uVar2 <= (uint)param_1[0xd]; uVar2 = uVar2 + 1) {
    if ((*(byte *)(param_1[8] + (uVar2 & 0xff) * 4) & 8) != 0) {
      uVar3 = FUN_0046d1a8(uVar2);
      *puVar4 = (char)uVar3;
    }
    puVar4 = puVar4 + 1;
  }
  __rwstd::use_Clib_locale::_dtor(local_c,2);
LAB_00464bac:
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464bc0  FUN_00464bc0   (93 bytes)   [unnamed]
void __cdecl FUN_00464bc0(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488090);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004880f0;
    FUN_004647d4(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464c20  FUN_00464c20   (332 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_00464c20(uint *param_1)

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
  
  __InitExceptBlockLDTC(0x4880c4);
  uVar1 = FUN_004649a0((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_00465be4(local_c,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      uVar5 = (uint)bVar4;
      iVar3 = FUN_0046b57c(uVar5);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_0046b550(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_0046b4fc(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_0046b590(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_0046b53c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = FUN_0046b4e4(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_0046b510(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_0046b568(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_0046b5a4(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_0046b524(uVar5);
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
    puVar2 = (uint *)&DAT_00487b38;
    *in_FS_OFFSET = local_30;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464d74  FUN_00464d74   (59 bytes)   [unnamed]
void __stdcall FUN_00464d74(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48812c);
  FUN_004598fc(&DAT_0048d06c,2,(undefined4 *)&DAT_00488118);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464db0  FUN_00464db0   (49 bytes)   [unnamed]
void __stdcall FUN_00464db0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488140);
  if (DAT_0048d06c != 0) {
    operator_delete_array();
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464de4  FUN_00464de4   (261 bytes)   [unnamed]
undefined4 * __cdecl FUN_00464de4(undefined4 *param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488164);
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
      FUN_0045cd5c(piVar2);
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
  if (param_2 == (LPCSTR)0x0) {
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    *param_1 = pHVar1;
  }
  else {
    pHVar1 = LoadLibraryA(param_2);
    *param_1 = pHVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00464fb0  FUN_00464fb0   (698 bytes)   [unnamed]
undefined4 __cdecl FUN_00464fb0(undefined4 *param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2020 [2];
  int local_2018;
  char local_2010;
  uint local_2008 [995];
  undefined4 uStackY_107c;
  undefined4 local_a0 [2];
  int local_98;
  int local_8c;
  undefined1 *local_88;
  int *local_84;
  int *local_80;
  undefined4 *local_7c;
  uint local_78;
  undefined1 *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  undefined1 *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  UINT local_2c [2];
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  iVar3 = 2;
  do {
    local_8 = iVar3;
    iVar3 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4881dc);
  uStackY_107c = 0x464fed;
  FUN_0045d4a8(local_a0,param_1 + 2,(int *)&param_3);
  if (param_1[0xb] != local_98) {
    uVar1 = *(undefined4 *)(local_98 + 0x20);
    *in_FS_OFFSET = local_50;
    return uVar1;
  }
  iVar3 = LoadStringA((HINSTANCE)*param_1,param_3,(LPSTR)local_2008,0x1f58);
  if (iVar3 == 0) goto LAB_00465256;
  local_40 = 0x14;
  iVar4 = std::string::string_from_cstr((int)local_14,local_2008);
  local_34 = local_34 + 1;
  local_2c[0] = param_3;
  local_5c = 0;
  local_1c = (int *)0x0;
  local_40 = 0x20;
  iVar3 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    local_70 = std::string::__getRep(local_24,uVar2,uVar2);
    local_74 = local_24;
    local_80 = local_70 + 3;
    local_7c = *(undefined4 **)(iVar4 + 8);
    local_78 = uVar2;
    local_6c = local_80;
    local_1c = local_80;
    memcpy(local_80,local_7c,uVar2);
  }
  else {
    local_60 = *(int **)(iVar4 + 8);
    local_64 = local_24;
    local_68 = local_60 + -3;
    local_1c = local_60;
    if (local_68 != &DAT_00485bcc) {
      *local_68 = *local_68 + 1;
    }
  }
  local_40 = 0x14;
  local_34 = local_34 + 2;
  FUN_0046286c(local_2020,param_1 + 2,local_2c);
  local_34 = local_34 + -2;
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar5 = local_1c + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_004651b3;
    }
    local_84 = local_1c + -3;
    operator_delete();
    local_88 = local_24;
    local_1c = (int *)0x0;
  }
LAB_004651b3:
  local_34 = local_34 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0046522c;
    }
    local_8c = local_c + -0xc;
    operator_delete();
  }
LAB_0046522c:
  if (local_2010 != '\0') {
    uVar1 = *(undefined4 *)(local_2018 + 0x20);
    *in_FS_OFFSET = local_50;
    return uVar1;
  }
LAB_00465256:
  *in_FS_OFFSET = local_50;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046526c  FUN_0046526c   (55 bytes)   [unnamed]
uint __cdecl FUN_0046526c(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (piVar1 = (*(int * *)&DAT_0048d06c); ((uVar2 < DAT_0048d070 && (*piVar1 != 0)) && (param_1 != *piVar1));
      piVar1 = piVar1 + 1) {
    uVar2 = uVar2 + 1;
  }
  if ((*(int * *)&DAT_0048d06c)[uVar2] == 0) {
    return DAT_0048d070;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004652a4  FUN_004652a4   (256 bytes, 2 ranges)   [unnamed]
int * __cdecl FUN_004652a4(LPCSTR param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x48826c);
  piVar1 = (int *)operator_new();
  if ((piVar1 == (int *)0x0) || (FUN_00464de4(piVar1,param_1), *piVar1 == 0)) {
    if (piVar1 != (int *)0x0) {
      __rwstd::__rwcat::_dtor(piVar1,3);
    }
    piVar1 = (int *)0xffffffff;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = 0;
    for (piVar2 = (*(int * *)&DAT_0048d06c); *piVar2 != 0; piVar2 = piVar2 + 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == (*(int *)&DAT_0048d070)) {
      FUN_0045d5a8((int *)&(*(int * *)&DAT_0048d06c),(*(int *)&DAT_0048d070) * 2,0);
    }
    (*(int * *)&DAT_0048d06c)[iVar3] = (int)piVar1;
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004653b0  FUN_004653b0   (114 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004653b0(int param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4882d0);
  uVar1 = FUN_0046526c(param_1);
  if (uVar1 < DAT_0048d070) {
    param_4 = FUN_00464fb0(*(undefined4 **)(DAT_0048d06c + uVar1 * 4),param_2,param_3,param_4);
    *in_FS_OFFSET = local_28;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465800  FUN_00465800   (111 bytes)   [unnamed]
void __stdcall FUN_00465800(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x488394);
  puVar1 = DAT_0048d074;
  if (DAT_00488380 != '\0') {
    DAT_0048d074[1] = DAT_0048d074[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00488380 = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465870  FUN_00465870   (87 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004658ae) */
int __cdecl FUN_00465870(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4883b4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00485bd8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004658e8  FUN_004658e8   (32 bytes)   [unnamed]
int * __cdecl FUN_004658e8(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0048d078 = DAT_0048d078 + 1;
    *param_1 = DAT_0048d078;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465908  FUN_00465908   (252 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004659a7) */
undefined4 * __cdecl FUN_00465908(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x4884cc);
  local_18 = 8;
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_3;
  *param_1 = &__rwstd::locale_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x465969;
  FUN_00459a24(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_00485bd8;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  std::string::string_from_cstr((int)&local_54,(uint *)&DAT_00488499);
  local_18 = 0x2c;
  FUN_0046096c(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465bb0  FUN_00465bb0   (50 bytes)   [unnamed]
undefined * __cdecl FUN_00465bb0(int param_1,uint param_2)

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
  return &DAT_0048849a;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465be4  FUN_00465be4   (352 bytes)   [unnamed]
int * __cdecl FUN_00465be4(int *param_1,uint *param_2,int param_3)

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
  __InitExceptBlockLDTC(0x4885b8);
  local_18 = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_0046d720((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_00465d23;
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
      if (param_3 != 2) goto LAB_00465c86;
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
LAB_00465c86:
    pcVar4 = local_38;
  }
  pcVar4 = thunk_FUN_00467ac4((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_FUN_004676d0((char *)param_1[1],'=');
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
  pcVar4 = thunk_FUN_004676d0(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_00465d23:
  FUN_0046d720((ushort)param_3,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00465da4  FUN_00465da4   (713 bytes)   [unnamed]
void __stdcall FUN_00465da4(void)

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
  
  __InitExceptBlockLDTC(0x488618);
  if ((*(undefined4 * *)&DAT_0048d084) == (undefined4 *)0x0) goto LAB_00465f98;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  pcVar5 = FUN_0045642c;
  uVar4 = 0;
  local_48 = 0x14;
  local_5c = (uint *)FUN_004670cc(local_18c,PTR_s_locale_initid_called_twice_004882fc);
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
    if (local_74 != &DAT_00485bcc) {
      *local_74 = *local_74 + 1;
    }
  }
  local_48 = 0x14;
  local_3c = local_3c + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00465f81;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00465f81:
  local_48 = 8;
  FUN_00471ae8((uint *)&DAT_00403f08,(undefined4*)local_1c,uVar4,(undefined*)pcVar5,uVar6,uVar7,uVar8,uVar9);
LAB_00465f98:
  local_30 = (undefined4 *)operator_new();
  if (local_30 != (undefined4 *)0x0) {
    local_48 = 0x50;
    FUN_00465908(local_30,10,1);
    local_48 = 0x44;
  }
  DAT_0048d07c = local_30;
  *(undefined1 *)(local_30 + 0xc) = 1;
  FUN_00459b6c((int)(local_30 + 8),(uint *)&DAT_0048849b);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    FUN_00459ad4(DAT_0048d07c[2] + iVar2 * 0x10,(int)(DAT_0048d07c + 8));
    iVar2 = iVar2 + 1;
  }
  local_34 = (undefined4 *)operator_new();
  if (local_34 != (undefined4 *)0x0) {
    local_48 = 0x68;
    FUN_00465908(local_34,10,2);
  }
  DAT_0048d080 = local_34;
  local_34[6] = 0x3f0;
  *(undefined1 *)(local_34 + 0xc) = 1;
  (*(undefined4 * *)&DAT_0048d084) = DAT_0048d07c;
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004661c0  FUN_004661c0   (113 bytes)   [unnamed]
int * __cdecl FUN_004661c0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x48869c);
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
// 0x00466234  FUN_00466234   (877 bytes)   [unnamed]
int __cdecl FUN_00466234(int param_1,int *param_2)

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
  
  __InitExceptBlockLDTC(0x488708);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    local_40 = 8;
    std::string::string_from_cstr(param_1,(uint *)&DAT_004884a9);
    *in_FS_OFFSET = local_50;
    return param_1;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_00466a0c(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_0046647e;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  puVar6 = &LAB_004660d4;
  uVar3 = 0;
  local_40 = 0x20;
  local_5c = (uint *)FUN_004670cc(local_1b4,PTR_s_Error_constructing_locale_name_00488308);
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
    if (local_74 != &DAT_00485bcc) {
      *local_74 = *local_74 + 1;
    }
  }
  local_40 = 0x20;
  local_34 = local_34 + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00466467;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00466467:
  local_40 = 0x14;
  FUN_00471ae8((uint *)&DAT_00466070,(undefined4*)local_1c,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
LAB_0046647e:
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
    if (piVar5 != &DAT_00485bcc) {
      *piVar5 = *piVar5 + 1;
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004665a4  FUN_004665a4   (415 bytes)   [unnamed]
int * __cdecl FUN_004665a4(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

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
  
  __InitExceptBlockLDTC(0x488790);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_0048d07c;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_0048d080;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_0045d62c(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      FUN_00471ae8((uint *)&DAT_0043a6f8,local_3c,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_0045d62c(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_00465bb0(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        local_24 = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_0048d084 == 0) {
          FUN_00465da4();
        }
        local_8[1] = local_8[1] + 1;
        local_18 = local_18 + 1;
        FUN_00466744((int *)&local_8,piVar4,puVar5);
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
  FUN_00466744(param_1,piVar3,param_2);
  *in_FS_OFFSET = local_34;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466744  FUN_00466744   (192 bytes)   [unnamed]
void __cdecl FUN_00466744(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4887cc);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_004658e8((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_0045d62c((int *)(*param_1 + 0x10),uVar1 + 1,0);
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
// 0x00466804  FUN_00466804   (98 bytes)   [unnamed]
void __cdecl FUN_00466804(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488804);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00487578;
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466868  FUN_00466868   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00466868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466884  FUN_00466884   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00466884(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004668a0  FUN_004668a0   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004668a0(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004668ac  FUN_004668ac   (7 bytes)   [unnamed]
undefined1 __stdcall FUN_004668ac(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004668b4  FUN_004668b4   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004668b4(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004668c0  FUN_004668c0   (20 bytes)   [unnamed]
uint __cdecl FUN_004668c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (uint)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004668d4  FUN_004668d4   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004668d4(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004668e0  FUN_004668e0   (172 bytes)   [unnamed]
int __cdecl FUN_004668e0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488820);
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
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466a0c  FUN_00466a0c   (324 bytes)   [unnamed]
undefined4 __cdecl FUN_00466a0c(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4888b8);
  puVar1 = (uint *)FUN_0046d720(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)local_14,puVar1);
  FUN_0046d720(1,*(uint **)(*param_2 + 8));
  FUN_0046d720(2,*(uint **)(*param_2 + 0x18));
  FUN_0046d720(4,*(uint **)(*param_2 + 0x28));
  FUN_0046d720(0x10,*(uint **)(*param_2 + 0x38));
  FUN_0046d720(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_0046d720(0xff,(uint *)0x0);
  FUN_00459b6c(param_1,puVar1);
  uVar2 = FUN_0046d720(0xff,local_c);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_00466b3e;
    }
    operator_delete();
  }
LAB_00466b3e:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b50  FUN_00466b50   (38 bytes)   [unnamed]
void __cdecl FUN_00466b50(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x2c);
  iVar2 = FUN_0046a5c8(puVar1,&DAT_00488885);
  *(undefined1 **)(param_1 + 0x30) = puVar1 + iVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466b78  FUN_00466b78   (120 bytes)   [unnamed]
void __cdecl FUN_00466b78(int param_1,undefined1 *param_2,char *param_3,char param_4)

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
// 0x00466bf0  FUN_00466bf0   (98 bytes)   [unnamed]
void __cdecl FUN_00466bf0(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_00488888,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466c54  FUN_00466c54   (98 bytes)   [unnamed]
void __cdecl FUN_00466c54(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_0048888a,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466cb8  FUN_00466cb8   (92 bytes)   [unnamed]
void __cdecl FUN_00466cb8(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_0048888c,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466d14  FUN_00466d14   (92 bytes)   [unnamed]
void __cdecl FUN_00466d14(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_0048888d,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466d70  FUN_00466d70   (92 bytes)   [unnamed]
void __cdecl FUN_00466d70(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_0048888e,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466dcc  FUN_00466dcc   (92 bytes)   [unnamed]
void __cdecl FUN_00466dcc(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_00488890,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e28  FUN_00466e28   (97 bytes)   [unnamed]
void __cdecl FUN_00466e28(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_00488892,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466e8c  FUN_00466e8c   (97 bytes)   [unnamed]
void __cdecl FUN_00466e8c(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_00488894,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466ef0  FUN_00466ef0   (144 bytes)   [unnamed]
undefined4 __cdecl FUN_00466ef0(int param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) || ((*(byte *)(param_1 + 0xc) & 4) != 0)) {
    *pcVar1 = '.';
    uVar2 = 1;
    pcVar1[1] = '*';
    pcVar1 = pcVar1 + 2;
  }
  if (param_3 != '\0') {
    *pcVar1 = param_3;
    pcVar1 = pcVar1 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0xc) & 0x104;
  if (uVar4 == 0x100) {
    if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
      cVar3 = 'e';
    }
    else {
      cVar3 = 'E';
    }
  }
  else if (uVar4 == 4) {
    cVar3 = 'f';
  }
  else if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
    cVar3 = 'g';
  }
  else {
    cVar3 = 'G';
  }
  *pcVar1 = cVar3;
  pcVar1[1] = '\0';
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x18) = 10;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00466f80  FUN_00466f80   (126 bytes)   [unnamed]
void __cdecl FUN_00466f80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longdouble in_ST0;
  byte local_1c [24];
  
  uVar1 = FUN_00466ef0(param_1,local_1c,'\0');
  FUN_00463f60();
  if (in_ST0 == (longdouble)(double)CONCAT44(param_3,param_2)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  else {
    iVar2 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467000  FUN_00467000   (104 bytes)   [unnamed]
void __cdecl FUN_00467000(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte local_14 [16];
  
  uVar1 = FUN_00466ef0(param_1,local_14,'L');
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar2 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467068  FUN_00467068   (100 bytes)   [unnamed]
int __cdecl FUN_00467068(int param_1,int param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  
  *(int *)(param_1 + 0x34) = param_1 + 0x25e;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*param_3 != '\0') {
    uVar1 = (int)*param_3 & 0xf;
    pcVar2 = param_3 + 1;
    if ((int)uVar1 < param_2) {
      do {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        param_2 = param_2 - uVar1;
        **(undefined1 **)(param_1 + 0x34) = (char)uVar1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (param_1 + 0x1c8 == *(int *)(param_1 + 0x34)) {
          return param_2;
        }
        if (*pcVar2 == '\x7f') {
          return param_2;
        }
        if (*pcVar2 != '\0') {
          uVar1 = (int)*pcVar2 & 0xf;
          pcVar2 = pcVar2 + 1;
        }
      } while ((int)uVar1 < param_2);
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004670cc  FUN_004670cc   (54 bytes)   [unnamed]
undefined1 * __cdecl FUN_004670cc(undefined1 *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488954);
  FUN_0046a5f0(param_1,param_2,(uint *)&GHIDRA_STACK(0x0000000c));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467104  FUN_00467104   (163 bytes)   [unnamed]
char * __cdecl FUN_00467104(char *param_1,UINT param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 local_28;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x48895c);
  pcVar5 = PTR_s_Error_004888f0;
  pbVar4 = (byte *)0x0;
  if (DAT_004888f4 == (int *)0x0) {
    DAT_004888f4 = FUN_004652a4("rwstderr");
  }
  if (DAT_004888f4 != (int *)0x0) {
    pbVar4 = (byte *)FUN_004653b0((int)DAT_004888f4,1,param_2,pcVar5);
  }
  if (pbVar4 == (byte *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    FUN_0046a5f0(param_1,pbVar4,(uint *)&GHIDRA_STACK(0x0000000c));
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467540  memchr   (30 bytes)   [analysis (usage pattern, less certain) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ed9c.
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
// 0x00467560  FUN_00467560   (32 bytes)   [unnamed]
short * __cdecl FUN_00467560(short *param_1,short param_2,int param_3)

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
// 0x00467580  memcpy   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041eddc.
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
// 0x004675a4  FUN_004675a4   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004675a4(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
// 0x004675f0  memset   (138 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ee4c.
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
// 0x0046767c  FUN_0046767c   (24 bytes)   [unnamed]
undefined2 * __cdecl FUN_0046767c(undefined2 *param_1,undefined2 param_2,int param_3)

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
// 0x00467694  FUN_00467694   (60 bytes)   [unnamed]
char * __cdecl FUN_00467694(char *param_1,char *param_2)

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
// 0x004676d0  FUN_004676d0   (83 bytes)   [unnamed]
char * __cdecl FUN_004676d0(char *param_1,char param_2)

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
// 0x00467724  FUN_00467724   (75 bytes)   [unnamed]
int __cdecl FUN_00467724(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  do {
    iVar2 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if ((iVar2 != 0) || (*param_2 == 0)) {
      return iVar2;
    }
    iVar2 = (uint)(byte)param_1[1] - (uint)(byte)param_2[1];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[1] == 0) {
      return 0;
    }
    iVar2 = (uint)(byte)param_1[2] - (uint)(byte)param_2[2];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[2] == 0) {
      return 0;
    }
    pbVar1 = (byte *)(param_2 + 3);
    iVar2 = (uint)(byte)param_1[3] - (uint)*pbVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  } while (*pbVar1 != 0);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467770  FUN_00467770   (47 bytes)   [unnamed]
char * __cdecl FUN_00467770(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_1;
  for (uVar3 = ~uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = ~uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar4 = *param_2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004677a0  strlen   (90 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ef80.
char * __cdecl strlen(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_004677a8:
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
        if ((uVar3 & 0xff0000) == 0) goto LAB_004677f2;
        goto LAB_004677f1;
      }
    }
    else {
LAB_004677ef:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_004677f0:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = param_1 + 1;
    if ((char)*param_1 == '\0') goto LAB_004677ef;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_004677f0;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_004677a8;
    }
  }
LAB_004677f1:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_004677f2:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
}

// ----------------------------------------------------------------------------------------------------
// 0x004677fc  FUN_004677fc   (110 bytes)   [unnamed]
char * __cdecl FUN_004677fc(char *param_1,char *param_2,uint param_3)

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
// 0x0046786c  FUN_0046786c   (39 bytes)   [unnamed]
uint __cdecl FUN_0046786c(byte *param_1,byte *param_2,int param_3)

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
// 0x00467894  thunk → memchr   (5 bytes)   [unnamed]
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
// 0x004678a8  thunk → FUN_004676d0   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004676d0(char *param_1,char param_2)

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
// 0x004678ad  thunk → FUN_004676d0   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004676d0_4678ad(char *param_1,char param_2)

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
// 0x004678b9  thunk → FUN_00467a3c   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00467a3c(char *param_1,char *param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004678c0  thunk → strrchr   (5 bytes)   [unnamed]
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
// 0x004678c5  thunk → strrchr   (5 bytes)   [unnamed]
uint * __cdecl thunk_strrchr_4678c5(uint *param_1,char param_2)

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
// 0x004678cc  thunk → FUN_00467ac4   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00467ac4(char *param_1,char *param_2)

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
// 0x004678d1  thunk → FUN_00467ac4   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00467ac4_4678d1(char *param_1,char *param_2)

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
// 0x004678d8  FUN_004678d8   (108 bytes)   [unnamed]
int __cdecl FUN_004678d8(byte *param_1,byte *param_2,int param_3)

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
// 0x00467944  FUN_00467944   (43 bytes)   [unnamed]
int __cdecl FUN_00467944(char *param_1,char *param_2)

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
// 0x00467970  FUN_00467970   (50 bytes)   [unnamed]
undefined4 * __cdecl FUN_00467970(uint *param_1)

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
// 0x004679a4  FUN_004679a4   (71 bytes)   [unnamed]
int __cdecl FUN_004679a4(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = FUN_0046d1fc((int)*param_1);
    uVar2 = FUN_0046d1fc((int)*param_2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

// ----------------------------------------------------------------------------------------------------
// 0x004679ec  FUN_004679ec   (79 bytes)   [unnamed]
undefined4 * __cdecl FUN_004679ec(undefined4 *param_1,uint *param_2,char *param_3)

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
// 0x00467a3c  FUN_00467a3c   (43 bytes)   [unnamed]
char * __cdecl FUN_00467a3c(char *param_1,char *param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00467a68  strrchr   (41 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f284.
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
// 0x00467a94  FUN_00467a94   (48 bytes)   [unnamed]
int __cdecl FUN_00467a94(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return iVar2;
    }
    for (; (*pcVar1 != '\0' && (*pcVar1 != *param_1)); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 == '\0') break;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467ac4  FUN_00467ac4   (84 bytes)   [unnamed]
char * __cdecl FUN_00467ac4(char *param_1,char *param_2)

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
// 0x00467b18  FUN_00467b18   (55 bytes)   [unnamed]
char * __cdecl FUN_00467b18(char *param_1,char *param_2)

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
// 0x00467b50  FUN_00467b50   (24 bytes)   [unnamed]
int __cdecl FUN_00467b50(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467b68  FUN_00467b68   (63 bytes)   [unnamed]
short * __cdecl FUN_00467b68(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_00467b50(param_2);
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
// 0x00467ba8  __InitExceptBlockLDTC   (57 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f3fc. Borland exception-frame setup; first call in most functions, argument is that function's exception table
undefined4 __InitExceptBlockLDTC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar3 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar3[2] = param_1;
  puVar3[3] = &GHIDRA_STACK(0x00000004);
  puVar3[1] = &LAB_00467bef;
  *(undefined2 *)(puVar3 + 4) = 0;
  *(undefined2 *)((int)puVar3 + 0x12) = 0;
  puVar3[7] = 0;
  puVar1 = (undefined4 *)segment(in_FS,0);
  uVar2 = *puVar1;
  *puVar3 = uVar2;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar3;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467c18  FUN_00467c18   (343 bytes)   [unnamed]
undefined4 __cdecl FUN_00467c18(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_0046fe00("IS_STRUC(base->tpMask)","xxtype.cpp",0x13b);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_0046fe00("IS_STRUC(derv->tpMask)","xxtype.cpp",0x13c);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    FUN_0046fe00("derv->tpClass.tpcFlags & CF_HAS_BASES","xxtype.cpp",0x13e);
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
        iVar2 = FUN_00468104(param_2,piVar1);
        if ((iVar2 != 0) && (iVar3 != 0)) break;
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (iVar3 = FUN_00467c18((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
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
      iVar2 = FUN_00468104(param_2,piVar1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        return 1;
      }
      if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
         (iVar3 = FUN_00467c18((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
        return 1;
      }
    }
    puVar4 = puVar4 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00467d6f  FUN_00467d6f   (83 bytes)   [unnamed]
void __stdcall FUN_00467d6f(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488bf4);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_0048d090)[iVar3];
    if ((undefined4 *)(&DAT_0048d090)[iVar3] != (undefined4 *)0x0) {
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
// 0x00467dc2  FUN_00467dc2   (613 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_00467dc2(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8)

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
    FUN_0046fe00("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)","xxtype.cpp",0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_0046fe00("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)","xxtype.cpp",0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_0046fe00("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)","xxtype.cpp",0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_00468104(param_6,param_4);
    if (iVar3 != 0) {
      FUN_0046fe00("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x355);
    }
    iVar3 = FUN_00468104(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_00468104(param_2,param_4), iVar3 != 0)) {
    FUN_0046fe00("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x35b);
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
      iVar3 = FUN_00468104(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_00467dc2((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_00467fcd;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_0046fe00("srcTypPtr","xxtype.cpp",0x3d0);
          }
          puVar4 = FUN_00467dc2((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_00467fec;
        }
LAB_00467fcd:
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
LAB_00467fec:
    puVar5 = puVar5 + 3;
  } while( true );
}

} // namespace tea

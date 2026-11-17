// TSMerge.exe — runtime / library code "code_0x00454000"
// 116 functions, 0x004541b8..0x00457f1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004541b8  FUN_004541b8   (93 bytes)   [unnamed]
void __cdecl FUN_004541b8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4738f0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00473950;
    FUN_00453dcc(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454218  FUN_00454218   (332 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_00454218(uint *param_1)

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
  
  __InitExceptBlockLDTC(0x473924);
  uVar1 = FUN_00453f98((char *)param_1);
  if ((char)uVar1 == '\0') {
    puVar2 = (uint *)operator_new_array();
    FUN_00454780(local_c,param_1,2);
    bVar4 = 0;
    local_38 = puVar2;
    do {
      uVar5 = (uint)bVar4;
      iVar3 = FUN_00458e54(uVar5);
      uVar6 = (uint)(iVar3 != 0);
      iVar3 = FUN_00458e28(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 2;
      }
      iVar3 = FUN_00458dd4(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = FUN_00458e68(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 8;
      }
      iVar3 = FUN_00458e14(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x10;
      }
      iVar3 = FUN_00458dbc(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x20;
      }
      iVar3 = FUN_00458de8(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x40;
      }
      iVar3 = FUN_00458e40(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x80;
      }
      iVar3 = FUN_00458e7c(uVar5);
      if (iVar3 != 0) {
        uVar6 = uVar6 | 0x100;
      }
      iVar3 = FUN_00458dfc(uVar5);
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
    puVar2 = (uint *)&DAT_004733a8;
    *in_FS_OFFSET = local_30;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045439c  FUN_0045439c   (111 bytes)   [unnamed]
void __stdcall FUN_0045439c(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x473a14);
  puVar1 = DAT_004775c4;
  if (DAT_00473a00 != '\0') {
    DAT_004775c4[1] = DAT_004775c4[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00473a00 = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045440c  FUN_0045440c   (87 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0045444a) */
int __cdecl FUN_0045440c(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x473a34);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00471d68;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454484  FUN_00454484   (32 bytes)   [unnamed]
int * __cdecl FUN_00454484(int *param_1)

{
  if (*param_1 == 0) {
    DAT_004775c8 = DAT_004775c8 + 1;
    *param_1 = DAT_004775c8;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004544a4  FUN_004544a4   (252 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00454543) */
undefined4 * __cdecl FUN_004544a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x473b4c);
  local_18 = 8;
  *param_1 = &__rwstd::ref_counted::vftable;
  param_1[1] = param_3;
  *param_1 = &__rwstd::locale_imp::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x454505;
  FUN_0044cdc8(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_00471d68;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  std::string::string_from_cstr((int)&local_54,(uint *)&DAT_00473b19);
  local_18 = 0x2c;
  FUN_004520dc(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045474c  FUN_0045474c   (50 bytes)   [unnamed]
undefined * __cdecl FUN_0045474c(int param_1,uint param_2)

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
  return &DAT_00473b1a;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454780  FUN_00454780   (352 bytes)   [unnamed]
int * __cdecl FUN_00454780(int *param_1,uint *param_2,int param_3)

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
  __InitExceptBlockLDTC(0x473c38);
  local_18 = 8;
  *param_1 = param_3;
  puVar2 = (uint *)FUN_0045aff8((ushort)param_3,(uint *)0x0);
  param_1[1] = (int)puVar2;
  if (puVar2 == (uint *)0x0) goto LAB_004548bf;
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
      if (param_3 != 2) goto LAB_00454822;
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
LAB_00454822:
    pcVar4 = local_38;
  }
  pcVar4 = thunk_FUN_00455e58((char *)param_1[1],pcVar4);
  if (pcVar4 != (char *)0x0) {
    param_1[1] = (int)pcVar4;
  }
  pcVar4 = thunk_FUN_00455b20((char *)param_1[1],'=');
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
  pcVar4 = thunk_FUN_00455b20(pcVar3,'\n');
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
  param_1[1] = (int)pcVar3;
LAB_004548bf:
  FUN_0045aff8((ushort)param_3,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454940  FUN_00454940   (713 bytes)   [unnamed]
void __stdcall FUN_00454940(void)

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
  
  __InitExceptBlockLDTC(0x473c98);
  if ((*(undefined4 * *)&DAT_004775d4) == (undefined4 *)0x0) goto LAB_00454b34;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  pcVar5 = FUN_0044aeec;
  uVar4 = 0;
  local_48 = 0x14;
  local_5c = (uint *)FUN_00455640(local_18c,PTR_s_locale_initid_called_twice_0047397c);
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
    if (local_74 != &DAT_00471d5c) {
      *local_74 = *local_74 + 1;
    }
  }
  local_48 = 0x14;
  local_3c = local_3c + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00454b1d;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00454b1d:
  local_48 = 8;
  FUN_0045ed74((uint *)&DAT_00404790,(undefined4*)local_1c,uVar4,(undefined*)pcVar5,uVar6,uVar7,uVar8,uVar9);
LAB_00454b34:
  local_30 = (undefined4 *)operator_new();
  if (local_30 != (undefined4 *)0x0) {
    local_48 = 0x50;
    FUN_004544a4(local_30,10,1);
    local_48 = 0x44;
  }
  DAT_004775cc = local_30;
  *(undefined1 *)(local_30 + 0xc) = 1;
  FUN_0044cf10((int)(local_30 + 8),(uint *)&DAT_00473b1b);
  iVar2 = 0;
  for (uVar6 = 0x10; (uVar6 & 0x3f0) != 0; uVar6 = uVar6 * 2) {
    FUN_0044ce78(DAT_004775cc[2] + iVar2 * 0x10,(int)(DAT_004775cc + 8));
    iVar2 = iVar2 + 1;
  }
  local_34 = (undefined4 *)operator_new();
  if (local_34 != (undefined4 *)0x0) {
    local_48 = 0x68;
    FUN_004544a4(local_34,10,2);
  }
  DAT_004775d0 = local_34;
  local_34[6] = 0x3f0;
  *(undefined1 *)(local_34 + 0xc) = 1;
  (*(undefined4 * *)&DAT_004775d4) = DAT_004775cc;
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454d5c  FUN_00454d5c   (113 bytes)   [unnamed]
int * __cdecl FUN_00454d5c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x473d1c);
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
// 0x00454dd0  FUN_00454dd0   (877 bytes)   [unnamed]
int __cdecl FUN_00454dd0(int param_1,int *param_2)

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
  
  __InitExceptBlockLDTC(0x473d88);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    local_40 = 8;
    std::string::string_from_cstr(param_1,(uint *)&DAT_00473b29);
    *in_FS_OFFSET = local_50;
    return param_1;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_004554fc(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_0045501a;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  puVar6 = &LAB_00454c70;
  uVar3 = 0;
  local_40 = 0x20;
  local_5c = (uint *)FUN_00455640(local_1b4,PTR_s_Error_constructing_locale_name_00473988);
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
    if (local_74 != &DAT_00471d5c) {
      *local_74 = *local_74 + 1;
    }
  }
  local_40 = 0x20;
  local_34 = local_34 + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
      if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00455003;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    operator_delete();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00455003:
  local_40 = 0x14;
  FUN_0045ed74((uint *)&DAT_00454c0c,(undefined4*)local_1c,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
LAB_0045501a:
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
    if (piVar5 != &DAT_00471d5c) {
      *piVar5 = *piVar5 + 1;
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455140  FUN_00455140   (415 bytes)   [unnamed]
int * __cdecl FUN_00455140(int *param_1,uint *param_2,char param_3,uint param_4,undefined *param_5)

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
  
  __InitExceptBlockLDTC(0x473e10);
  piVar3 = (int *)0x0;
  if ((*(uint *)(*param_1 + 0x1c) & param_4) == 0) {
    puVar2 = DAT_004775cc;
    if ((*(uint *)(*param_1 + 0x18) & param_4) != 0) {
      puVar2 = DAT_004775d0;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    if ((uint)puVar2[5] <= uVar1) {
      FUN_0044fb48(puVar2 + 4,uVar1 + 1,0);
    }
    piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
  }
  if (piVar3 == (int *)0x0) {
    if (param_3 == '\0') {
      FUN_0045ed74((uint *)&DAT_0042f564,local_3c,0,(undefined *)0x0,0,0,0,0);
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *param_2;
      if ((uint)puVar2[5] <= uVar1) {
        FUN_0044fb48(puVar2 + 4,uVar1 + 1,0);
      }
      piVar3 = *(int **)(puVar2[4] + uVar1 * 4);
    }
    if (piVar3 == (int *)0x0) {
      if ((*(uint *)(*param_1 + 0x1c) & param_4) != 0) {
        FUN_0045474c(*param_1,param_4);
      }
      piVar3 = (int *)(*(code *)param_5)();
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)*param_1)) {
        local_24 = 8;
        piVar4 = piVar3;
        puVar5 = param_2;
        local_8 = puVar2;
        if (DAT_004775d4 == 0) {
          FUN_00454940();
        }
        local_8[1] = local_8[1] + 1;
        local_18 = local_18 + 1;
        FUN_004552e0((int *)&local_8,piVar4,puVar5);
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
  FUN_004552e0(param_1,piVar3,param_2);
  *in_FS_OFFSET = local_34;
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004552e0  FUN_004552e0   (192 bytes)   [unnamed]
void __cdecl FUN_004552e0(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x473e4c);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_00454484((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_0044fb48((int *)(*param_1 + 0x10),uVar1 + 1,0);
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
// 0x004553a0  FUN_004553a0   (98 bytes)   [unnamed]
void __cdecl FUN_004553a0(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x473e84);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00472ff0;
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455404  FUN_00455404   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00455404(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455420  FUN_00455420   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00455420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  *param_8 = param_6;
  *param_5 = param_3;
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045543c  FUN_0045543c   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0045543c(void)

{
  return 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455448  FUN_00455448   (7 bytes)   [unnamed]
undefined1 __stdcall FUN_00455448(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455450  FUN_00455450   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00455450(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045545c  FUN_0045545c   (20 bytes)   [unnamed]
uint __cdecl FUN_0045545c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_4 - param_3;
  if (param_5 <= (uint)(param_4 - param_3)) {
    uVar1 = param_5;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455470  FUN_00455470   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00455470(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004554fc  FUN_004554fc   (324 bytes)   [unnamed]
undefined4 __cdecl FUN_004554fc(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x473ef8);
  puVar1 = (uint *)FUN_0045aff8(0xff,(uint *)0x0);
  std::string::string_from_cstr((int)local_14,puVar1);
  FUN_0045aff8(1,*(uint **)(*param_2 + 8));
  FUN_0045aff8(2,*(uint **)(*param_2 + 0x18));
  FUN_0045aff8(4,*(uint **)(*param_2 + 0x28));
  FUN_0045aff8(0x10,*(uint **)(*param_2 + 0x38));
  FUN_0045aff8(0x20,*(uint **)(*param_2 + 0x48));
  puVar1 = (uint *)FUN_0045aff8(0xff,(uint *)0x0);
  FUN_0044cf10(param_1,puVar1);
  uVar2 = FUN_0045aff8(0xff,local_c);
  uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_0045562e;
    }
    operator_delete();
  }
LAB_0045562e:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455640  FUN_00455640   (54 bytes)   [unnamed]
undefined1 * __cdecl FUN_00455640(undefined1 *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x473f94);
  FUN_00457f1c(param_1,param_2,(uint *)&GHIDRA_STACK(0x0000000c));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455990  memchr   (30 bytes)   [analysis (usage pattern, less certain) (matched TEACON.exe)]
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
// 0x004559b0  FUN_004559b0   (32 bytes)   [unnamed]
short * __cdecl FUN_004559b0(short *param_1,short param_2,int param_3)

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
// 0x004559d0  memcpy   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
// 0x004559f4  FUN_004559f4   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004559f4(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
// 0x00455a40  memset   (138 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
// 0x00455acc  FUN_00455acc   (24 bytes)   [unnamed]
undefined2 * __cdecl FUN_00455acc(undefined2 *param_1,undefined2 param_2,int param_3)

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
// 0x00455ae4  FUN_00455ae4   (60 bytes)   [unnamed]
char * __cdecl FUN_00455ae4(char *param_1,char *param_2)

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
// 0x00455b20  FUN_00455b20   (83 bytes)   [unnamed]
char * __cdecl FUN_00455b20(char *param_1,char param_2)

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
// 0x00455b74  FUN_00455b74   (75 bytes)   [unnamed]
int __cdecl FUN_00455b74(char *param_1,char *param_2)

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
// 0x00455bc0  FUN_00455bc0   (47 bytes)   [unnamed]
char * __cdecl FUN_00455bc0(char *param_1,char *param_2)

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
// 0x00455bf0  strlen   (90 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ef80.
char * __cdecl strlen(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_00455bf8:
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
        if ((uVar3 & 0xff0000) == 0) goto LAB_00455c42;
        goto LAB_00455c41;
      }
    }
    else {
LAB_00455c3f:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_00455c40:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = param_1 + 1;
    if ((char)*param_1 == '\0') goto LAB_00455c3f;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_00455c40;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_00455bf8;
    }
  }
LAB_00455c41:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_00455c42:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
}

// ----------------------------------------------------------------------------------------------------
// 0x00455c4c  FUN_00455c4c   (110 bytes)   [unnamed]
char * __cdecl FUN_00455c4c(char *param_1,char *param_2,uint param_3)

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
// 0x00455cbc  thunk → memchr   (5 bytes)   [unnamed]
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
// 0x00455cd0  thunk → FUN_00455b20   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00455b20(char *param_1,char param_2)

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
// 0x00455cd5  thunk → FUN_00455b20   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00455b20_455cd5(char *param_1,char param_2)

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
// 0x00455ce1  thunk → strrchr   (5 bytes)   [unnamed]
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
// 0x00455ced  thunk → FUN_00455e58   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_00455e58(char *param_1,char *param_2)

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
// 0x00455cf4  FUN_00455cf4   (108 bytes)   [unnamed]
int __cdecl FUN_00455cf4(byte *param_1,byte *param_2,int param_3)

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
// 0x00455d60  FUN_00455d60   (50 bytes)   [unnamed]
undefined4 * __cdecl FUN_00455d60(uint *param_1)

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
// 0x00455d94  FUN_00455d94   (71 bytes)   [unnamed]
int __cdecl FUN_00455d94(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = FUN_0045aad4((int)*param_1);
    uVar2 = FUN_0045aad4((int)*param_2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ddc  FUN_00455ddc   (79 bytes)   [unnamed]
undefined4 * __cdecl FUN_00455ddc(undefined4 *param_1,uint *param_2,char *param_3)

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
// 0x00455e2c  strrchr   (41 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
// 0x00455e58  FUN_00455e58   (84 bytes)   [unnamed]
char * __cdecl FUN_00455e58(char *param_1,char *param_2)

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
// 0x00455eac  FUN_00455eac   (24 bytes)   [unnamed]
int __cdecl FUN_00455eac(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455ec4  FUN_00455ec4   (63 bytes)   [unnamed]
short * __cdecl FUN_00455ec4(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_00455eac(param_2);
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
// 0x00455f04  __InitExceptBlockLDTC   (57 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
  puVar3[1] = &LAB_00455f4b;
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
// 0x00455f74  FUN_00455f74   (343 bytes)   [unnamed]
undefined4 __cdecl FUN_00455f74(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_0045d2c4("IS_STRUC(base->tpMask)","xxtype.cpp",0x13b);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_0045d2c4("IS_STRUC(derv->tpMask)","xxtype.cpp",0x13c);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    FUN_0045d2c4("derv->tpClass.tpcFlags & CF_HAS_BASES","xxtype.cpp",0x13e);
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
        iVar2 = FUN_00456460(param_2,piVar1);
        if ((iVar2 != 0) && (iVar3 != 0)) break;
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (iVar3 = FUN_00455f74((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
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
      iVar2 = FUN_00456460(param_2,piVar1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        return 1;
      }
      if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
         (iVar3 = FUN_00455f74((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
        return 1;
      }
    }
    puVar4 = puVar4 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004560cb  FUN_004560cb   (83 bytes)   [unnamed]
void __stdcall FUN_004560cb(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474208);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_004775e0)[iVar3];
    if ((undefined4 *)(&DAT_004775e0)[iVar3] != (undefined4 *)0x0) {
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
// 0x0045611e  FUN_0045611e   (613 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_0045611e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8)

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
    FUN_0045d2c4("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)","xxtype.cpp",0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_0045d2c4("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)","xxtype.cpp",0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_0045d2c4("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)","xxtype.cpp",0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_00456460(param_6,param_4);
    if (iVar3 != 0) {
      FUN_0045d2c4("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x355);
    }
    iVar3 = FUN_00456460(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_00456460(param_2,param_4), iVar3 != 0)) {
    FUN_0045d2c4("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x35b);
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
      iVar3 = FUN_00456460(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_0045611e((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_00456329;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_0045d2c4("srcTypPtr","xxtype.cpp",0x3d0);
          }
          puVar4 = FUN_0045611e((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_00456348;
        }
LAB_00456329:
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
LAB_00456348:
    puVar5 = puVar5 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00456385  FUN_00456385   (162 bytes)   [unnamed]
undefined4 __cdecl FUN_00456385(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_8;
  
  if (*param_4 == 0) {
    FUN_0045d2c4(&DAT_00474499 /* "addr" */,"xxtype.cpp",0x515);
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
    iVar2 = FUN_00456460(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (undefined4 *)0x0)) &&
       (iVar2 = FUN_00456385((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
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
// 0x00456428  FUN_00456428   (55 bytes)   [unnamed]
char * __cdecl FUN_00456428(int param_1)

{
  if (param_1 == 0) {
    return "<notype>";
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_0045d2c4("id->tpName","xxtype.cpp",0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00456460  FUN_00456460   (219 bytes)   [unnamed]
undefined4 __cdecl FUN_00456460(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_0045d2c4(&DAT_0047422f /* "tp1" */,"xxtype.cpp",0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_0045d2c4(&DAT_0047423e /* "tp2" */,"xxtype.cpp",0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_0045d2c4("tp1->tpName","xxtype.cpp",0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_0045d2c4("tp2->tpName","xxtype.cpp",0x11f);
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
// 0x0045653c  FUN_0045653c   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_0045653c(int *param_1,int *param_2,int param_3,undefined4 param_4)

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
  iVar4 = FUN_00456460(param_1,param_2);
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(param_1 + 3) & 4) != 0)) {
    uVar5 = FUN_00455f74((int)param_1,param_2,param_4,1);
    return uVar5;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045666c  FUN_0045666c   (272 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045666c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    FUN_0045ed74((uint *)&DAT_0042f584,(undefined4 *)&DAT_004775d8,0,(undefined *)0x0,0,0,0,0);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_3 + 0xc) & 0x80) == 0) {
      param_2 = param_2 - *(int *)(param_2 + -4);
      if (*(int *)(param_2 + -4) != 0) {
        FUN_0045d2c4("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",0x29e);
      }
      param_3 = *(int *)(param_2 + -0xc);
    }
    else {
      param_3 = 0;
    }
  }
  uVar2 = param_2 + param_3 >> 4 & 0xff;
  for (puVar3 = (undefined4 *)(&DAT_004775e0)[uVar2];
      (puVar3 != (undefined4 *)0x0 && ((param_3 != puVar3[1] || (param_2 != puVar3[2]))));
      puVar3 = (undefined4 *)puVar3[3]) {
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)operator_new();
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = (&DAT_004775e0)[uVar2];
      *puVar3 = &std::type_info::vftable;
      puVar3[1] = param_3;
      *puVar3 = &type_info_hash::vftable;
      puVar3[2] = param_2;
      puVar3[3] = uVar1;
      puVar3[4] = 0;
    }
    (&DAT_004775e0)[uVar2] = puVar3;
  }
  return puVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045677c  FUN_0045677c   (103 bytes)   [unnamed]
char * __cdecl FUN_0045677c(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        pcVar2 = "<notype>";
      }
      else {
        pbVar1 = *(byte **)(*(int *)(param_1 + 8) + -0x2c);
        uVar4 = (uint)*pbVar1;
        uVar3 = operator_new_array();
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        memcpy(*(undefined4 **)(param_1 + 0x10),(undefined4 *)(pbVar1 + 1),uVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + uVar4) = 0;
        pcVar2 = *(char **)(param_1 + 0x10);
      }
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x10);
    }
  }
  else {
    pcVar2 = FUN_00456428(*(int *)(param_1 + 4));
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004567e4  FUN_004567e4   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_004567e4(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_c;
  int *local_8;
  
  local_8 = param_3;
  if (param_1 != 0) {
    puVar4 = (undefined4 *)(param_1 - *(int *)(param_2 + -8));
    iVar3 = param_2 - *(int *)(param_2 + -4);
    if (*(int *)(iVar3 + -4) != 0) {
      FUN_0045d2c4("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",1099);
    }
    piVar1 = *(int **)(iVar3 + -0xc);
    if (param_4 == (int *)0x0) {
      return puVar4;
    }
    iVar3 = FUN_00456460(param_4,piVar1);
    if (iVar3 != 0) {
      return puVar4;
    }
    iVar3 = FUN_00456460(local_8,piVar1);
    if ((iVar3 == 0) &&
       (puVar2 = FUN_0045611e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,param_1,local_8,&local_c,
                              1), puVar2 != (undefined4 *)0x0)) {
      return puVar2;
    }
    puVar4 = FUN_0045611e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,0,(int *)0x0,&local_c,1);
    if ((puVar4 != (undefined4 *)0x0) && (local_c != 0)) {
      return puVar4;
    }
  }
  if (param_5 != 0) {
    FUN_0045ed74((uint *)&DAT_0042f564,(undefined4 *)&DAT_004779e0,0,(undefined *)0x0,0,0,0,0);
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004568cc  FUN_004568cc   (122 bytes)   [unnamed]
int __cdecl FUN_004568cc(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_00456385((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_00456385((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_0045d2c4("!\"Can't adjust class address (no base class entry found)\"","xxtype.cpp",0x57e);
    param_1 = 0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456a14  FUN_00456a14   (39 bytes)   [unnamed]
void __stdcall FUN_00456a14(void)

{
  if (DAT_00474548 == (code *)0x0) {
    DAT_00474548 = (undefined*)FUN_00456a3c;
  }
  if ((*(undefined1 * *)&DAT_0047454c) == (undefined1 *)0x0) {
    (*(undefined1 * *)&DAT_0047454c) = &LAB_00456a8c;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456a3c  FUN_00456a3c   (74 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_00456a3c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474570);
  if (DAT_00474548 != FUN_00456a3c) {
    ((code *)DAT_00474548)();
  }
  FUN_0045d628();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ae0  FUN_00456ae0   (108 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_00456ae0(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x474654);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_004779ec == 2) {
    FUN_0045e9b9(4,1);
  }
  FUN_00457614();
  ((code *)DAT_00474548)();
  FUN_0045d628();
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456b54  FUN_00456b54   (53 bytes)   [unnamed]
void __stdcall FUN_00456b54(void)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_004779ec == 2) {
    FUN_0045e9b9(5,1);
  }
  ((code *)DAT_0047454c)();
  FUN_0045d628();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456b8c  FUN_00456b8c   (75 bytes)   [unnamed]
void __cdecl FUN_00456b8c(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00456bd8(&local_c);
    param_1 = local_8;
  }
  uVar2 = 0x9c;
  puVar1 = (undefined4 *)FUN_00401140();
  memcpy(puVar1,param_1,uVar2);
  FUN_00456a14();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456bd8  FUN_00456bd8   (39 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00456bd8(undefined4 *param_1)

{
  _DAT_00474598 = FUN_00401140();
  _DAT_00474598 = _DAT_00474598 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00474584;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456c00  FUN_00456c00   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00456c00(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456c0c  FUN_00456c0c   (237 bytes)   [unnamed]
LONG __cdecl FUN_00456c0c(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_00456dd6(param_2,param_1);
      FUN_00456ae0();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_00474668 != 0)) {
      FUN_0045d560((uint *)"Stack Overflow!");
    }
    if ((DAT_004779f4 != (code *)0x0) && (iVar2 = ((code *)DAT_004779f4)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_004779f0 != (code *)0x0) && (iVar2 = ((code *)DAT_004779f0)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_00477e24 != (int *)0x0) && ((*DAT_00477e24 == 1 || (*DAT_00477e24 == 2)))) &&
       ((param_1->ExceptionCode < 0xeedface || (0xeefface < param_1->ExceptionCode)))) {
      FUN_0045e9b9(2,3);
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456cfc  FUN_00456cfc   (26 bytes)   [unnamed]
void __cdecl FUN_00456cfc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = FUN_00456c0c;
  FUN_00456d88(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d18  FUN_00456d18   (15 bytes)   [unnamed]
void __cdecl FUN_00456d18(undefined4 *param_1)

{
  FUN_00456d9d(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d28  FUN_00456d28   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00456d28(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_004779f4);
  (*(undefined4 *)&DAT_004779f4) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d74  FUN_00456d74   (17 bytes)   [unnamed]
void __stdcall FUN_00456d74(void)

{
  if ((*(undefined4 * *)&DAT_00477df8) != (undefined4 *)0x0) {
    FUN_00456cfc((*(undefined4 * *)&DAT_00477df8));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d88  FUN_00456d88   (21 bytes)   [unnamed]
void __cdecl FUN_00456d88(undefined4 *param_1)

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
// 0x00456d9d  FUN_00456d9d   (44 bytes)   [unnamed]
void __cdecl FUN_00456d9d(undefined4 *param_1)

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
// 0x00456dd6  FUN_00456dd6   (21 bytes)   [unnamed]
void FUN_00456dd6(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x456de7,param_2,(PVOID)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456deb  FUN_00456deb   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_00456deb(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  uVar1 = (*(code *)*unaff_EBX)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456df4  FUN_00456df4   (60 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00456df4(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00457cd0();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    _DAT_00475dd8 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e30  FUN_00456e30   (96 bytes)   [unnamed]
undefined4 __cdecl FUN_00456e30(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  (&DAT_00474b3c)[param_1] = 0;
  *(undefined4 *)(&DAT_00477ac0 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e90  FUN_00456e90   (45 bytes)   [unnamed]
bool __cdecl FUN_00456e90(uint param_1)

{
  DWORD DVar1;
  
  if (DAT_00474b38 <= param_1) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4));
  return DVar1 == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ec0  FUN_00456ec0   (23 bytes)   [unnamed]
bool __cdecl FUN_00456ec0(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileType(param_1);
  return DVar1 == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ed8  FUN_00456ed8   (118 bytes)   [unnamed]
DWORD __cdecl FUN_00456ed8(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_00457c6c(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00457cd0();
    }
  }
  else {
    DVar1 = FUN_00457c6c(6);
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f50  FUN_00456f50   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_00456f50(LPCSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_00474c08 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00456fbb:
      DVar4 = 1;
      goto LAB_00456fdc;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00456fdc;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00456fdc;
      }
      goto LAB_00456fd7;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00456fd7:
      DVar4 = 3;
      goto LAB_00456fdc;
    }
    goto LAB_00456fbb;
  }
  DVar4 = 5;
LAB_00456fdc:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00474680 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00457c6c(1);
      return iVar2;
    }
    local_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    local_c = 0;
  }
  else if (uVar3 == 0x20) {
    local_c = 1;
  }
  else if (uVar3 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(param_1,local_8,local_c,&local_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00457c6c(uVar3);
  }
  else {
    bVar1 = FUN_00456ec0(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004579b0(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00457c6c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045714c  FUN_0045714c   (107 bytes)   [unnamed]
char * __cdecl FUN_0045714c(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = param_1 + param_2;
  pcVar4 = param_1;
  pcVar5 = param_1;
  while( true ) {
    pcVar2 = memchr(pcVar4,'\r',(int)pcVar1 - (int)pcVar4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = pcVar1;
    }
    uVar3 = (int)pcVar2 - (int)pcVar4;
    if (pcVar5 != pcVar4) {
      memcpy((undefined4 *)pcVar5,(undefined4 *)pcVar4,uVar3);
    }
    if (pcVar1 + -1 <= pcVar2) break;
    pcVar4 = pcVar2 + 1;
    pcVar5 = pcVar5 + uVar3;
  }
  return pcVar5 + (uVar3 - (int)param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004571b8  FUN_004571b8   (302 bytes)   [unnamed]
char * __cdecl FUN_004571b8(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0045764c(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_0045764c(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = memchr(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_0045764c(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_0045714c(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (param_3 <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_00457c6c(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004572e8  FUN_004572e8   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_004572e8(LPCWSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_00474c08 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00457353:
      DVar4 = 1;
      goto LAB_00457374;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00457374;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00457374;
      }
      goto LAB_0045736f;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_0045736f:
      DVar4 = 3;
      goto LAB_00457374;
    }
    goto LAB_00457353;
  }
  DVar4 = 5;
LAB_00457374:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesW(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00474680 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00457c6c(1);
      return iVar2;
    }
    local_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    local_c = 0;
  }
  else if (uVar3 == 0x20) {
    local_c = 1;
  }
  else if (uVar3 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileW(param_1,local_8,local_c,&local_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00457c6c(uVar3);
  }
  else {
    bVar1 = FUN_00456ec0(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004579b0(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00457c6c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004574e4  FUN_004574e4   (284 bytes)   [unnamed]
int __cdecl FUN_004574e4(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_20c [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 8) != 0) {
        FUN_00456ed8(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_004576e8(param_1,param_2,param_3);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = param_2;
        while ((uint)((int)pcVar4 - (int)param_2) < param_3) {
          pcVar3 = local_20c;
          while (((int)pcVar3 - (int)local_20c < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)param_2) < param_3))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              local_8 = local_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004576e8(param_1,local_20c,(int)pcVar3 - (int)local_20c);
          if (iVar2 != (int)pcVar3 - (int)local_20c) {
            if (iVar2 == -1) {
              return -1;
            }
            return (local_c - local_8) + iVar2;
          }
          local_c = local_c + iVar2;
        }
        local_c = local_c - local_8;
      }
    }
  }
  else {
    local_c = FUN_00457c6c(-6);
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457600  FUN_00457600   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_00457600(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457614  FUN_00457614   (56 bytes)   [unnamed]
int __stdcall FUN_00457614(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_00474688;
  iVar2 = (*(int *)&DAT_00474b38);
  while (iVar2 != 0) {
    if (((*(byte *)((int)piVar1 + 0x12) & 3) != 0) && (piVar1[2] != 0)) {
      FUN_004577dc(piVar1);
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045764c  FUN_0045764c   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_0045764c(uint param_1,LPVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),param_2,param_3,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457694  FUN_00457694   (25 bytes)   [unnamed]
void __cdecl FUN_00457694(uint param_1,char *param_2,char *param_3)

{
  FUN_004571b8(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576b0  FUN_004576b0   (31 bytes)   [unnamed]
void __cdecl FUN_004576b0(LPCWSTR param_1,uint param_2)

{
  uint unaff_EBP;
  
  FUN_004572e8(param_1,param_2 & 0xffff36ff | 0x8000,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576d0  FUN_004576d0   (21 bytes)   [unnamed]
void __cdecl FUN_004576d0(LPCWSTR param_1,uint param_2)

{
  uint unaff_EBP;
  
  FUN_004572e8(param_1,param_2,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576e8  FUN_004576e8   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_004576e8(uint param_1,LPCVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),param_2,param_3,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457730  FUN_00457730   (25 bytes)   [unnamed]
void __cdecl FUN_00457730(uint param_1,char *param_2,uint param_3)

{
  FUN_004574e4(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045774c  thunk → FUN_00456df4   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl thunk_FUN_00456df4(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00457cd0();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    _DAT_00475dd8 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457754  FUN_00457754   (125 bytes)   [unnamed]
undefined4 __cdecl FUN_00457754(int *param_1,int param_2,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    free();
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_00475e58 = &LAB_00458a50;
    if (param_2 == 0) {
      param_2 = malloc();
      if (param_2 == 0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004577d4  thunk → FUN_00456e30   (5 bytes)   [unnamed]
undefined4 __cdecl thunk_FUN_00456e30(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00474b38 <= param_1) {
    uVar1 = FUN_00457c6c(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00457cd0();
    return uVar1;
  }
  (&DAT_00474b3c)[param_1] = 0;
  *(undefined4 *)(&DAT_00477ac0 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004577dc  FUN_004577dc   (127 bytes)   [unnamed]
undefined4 __cdecl FUN_004577dc(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_0045785c();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      uVar3 = param_1[3] + param_1[2] + 1;
      param_1[2] = param_1[2] - uVar3;
      *param_1 = param_1[1];
      uVar2 = FUN_004574e4((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],uVar3);
      if ((uVar3 == uVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)param_1 + 0x12) & 8) != 0) || (param_1 + 5 == (int *)*param_1)) &&
         (param_1[2] = 0, param_1 + 5 == (int *)*param_1)) {
        *param_1 = param_1[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045785c  FUN_0045785c   (90 bytes)   [unnamed]
int __stdcall FUN_0045785c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00474688;
  iVar5 = (*(int *)&DAT_00474b38);
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      uVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - uVar4;
      *puVar2 = (char *)puVar2[1];
      uVar1 = FUN_004574e4((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],uVar4);
      if ((uVar4 != uVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578b8  FUN_004578b8   (13 bytes)   [unnamed]
void __cdecl FUN_004578b8(undefined *param_1)

{
  PTR_DAT_00474c08 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578c8  FUN_004578c8   (19 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004578c8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_00474684 = *param_1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578dc  FUN_004578dc   (212 bytes)   [unnamed]
char * __cdecl FUN_004578dc(char *param_1,LPCSTR param_2,uint param_3)

{
  char cVar1;
  LPSTR lpBuffer;
  DWORD DVar2;
  UINT UVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR local_c [4];
  LPSTR local_8;
  
  lpBuffer = (LPSTR)malloc();
  if (lpBuffer == (LPSTR)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    DVar2 = GetFullPathNameA(param_2,0x104,lpBuffer,&local_8);
    if ((DVar2 == 0) || (0x103 < DVar2)) {
      free();
      param_1 = (char *)0x0;
    }
    else {
      if (lpBuffer[1] == ':') {
        local_c[0] = *lpBuffer;
        local_c[1] = 0x3a;
        local_c[2] = 0x5c;
        local_c[3] = 0;
        UVar3 = GetDriveTypeA(local_c);
        if (UVar3 < 2) {
          free();
          return (char *)0x0;
        }
      }
      if (param_1 == (char *)0x0) {
        param_1 = (char *)FUN_0044b964();
      }
      else if (param_3 < DVar2 + 1) {
        free();
        param_1 = (char *)0x0;
      }
      else {
        uVar4 = 0xffffffff;
        do {
          pcVar6 = lpBuffer;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar6 + -uVar4;
        pcVar7 = param_1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        free();
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004579b0  FUN_004579b0   (64 bytes)   [unnamed]
int __cdecl FUN_004579b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_00474b3c; (iVar1 < (*(int *)&DAT_00474b38) && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == (*(int *)&DAT_00474b38)) {
    return -1;
  }
  (&DAT_00474b3c)[iVar1] = param_2;
  *(undefined4 *)(&DAT_00477ac0 + iVar1 * 4) = param_1;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004579f0  FUN_004579f0   (104 bytes)   [unnamed]
uint __cdecl FUN_004579f0(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_00474b3c; ((int)param_2 < (int)DAT_00474b38 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_00474b38) && (param_2 < DAT_00474b38)) {
    if (((&DAT_00474b3c)[param_1] != 0) && ((&DAT_00474b3c)[param_2] == 0)) {
      (&DAT_00474b3c)[param_2] = (&DAT_00474b3c)[param_1];
      *(undefined4 *)(&DAT_00477ac0 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457a58  FUN_00457a58   (25 bytes)   [unnamed]
void __cdecl FUN_00457a58(uint param_1)

{
  if (param_1 < DAT_00474b38) {
    (&DAT_00474b3c)[param_1] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457a74  FUN_00457a74   (154 bytes)   [unnamed]
int __cdecl FUN_00457a74(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint *local_c;
  int local_8;
  
  iVar2 = (*(int *)&DAT_00474b38);
  for (piVar4 = &(*(int *)&DAT_00474b38) + (*(int *)&DAT_00474b38); (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
  {
    iVar2 = iVar2 + -1;
  }
  if (param_1 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *param_1 = iVar2;
    local_8 = 0;
    pbVar5 = (byte *)(param_1 + 1);
    local_c = &DAT_00474b3c;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *pbVar5 = bVar3;
        pbVar5 = pbVar5 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    memcpy((undefined4 *)pbVar5,(undefined4 *)&DAT_00477ac0,iVar2 << 2);
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457b10  FUN_00457b10   (345 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00457b10(void)

{
  bool bVar1;
  UINT UVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA local_50;
  
  UVar2 = SetHandleCount(DAT_00474b38);
  if (UVar2 < DAT_00474b38) {
    DAT_00474b38 = UVar2;
  }
  PTR_FUN_0047467c = (undefined*)FUN_00457a74;
  bVar1 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar1 = true;
      iVar5 = 0;
      puVar9 = &DAT_00474b3c;
      if (0 < (int)uVar7) {
        do {
          uVar6 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar3 = 0;
          if ((uVar6 & 0x20) != 0) {
            uVar3 = 0x800;
          }
          if ((uVar6 & 0x40) != 0) {
            uVar3 = uVar3 | 0x2000;
          }
          if ((uVar6 & 0x80) == 0) {
            uVar3 = uVar3 | 0x8000;
          }
          else {
            uVar3 = uVar3 | 0x4000;
          }
          iVar5 = iVar5 + 1;
          *puVar9 = *puVar9 & 3 | uVar3;
          puVar9 = puVar9 + 1;
        } while (iVar5 < (int)uVar7);
      }
      puVar4 = &DAT_00474b3c + uVar7;
      for (uVar6 = uVar7; uVar6 < DAT_00474b38; uVar6 = uVar6 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_004559f4((undefined4 *)&DAT_00477ac0,puVar8,uVar7 << 2);
    }
  }
  if (!bVar1) {
    _DAT_00477ac0 = GetStdHandle(0xfffffff6);
    DAT_00477ac4 = GetStdHandle(0xfffffff5);
    _DAT_00477ac8 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_00474b3c;
    do {
      bVar1 = FUN_00456e90(uVar7);
      if ((CONCAT31(extraout_var,bVar1) == 0) && (DAT_00475ff0 == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (DAT_00475ff0 != 0) {
          *puVar8 = *puVar8 | 0x10000;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)uVar7 < 3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457c6c  FUN_00457c6c   (68 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00457c6c(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_00474dfc) {
      (*(int *)&_DAT_00475dd8) = -param_1;
      _DAT_00477b88 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_00457c82;
  param_1 = 1;
LAB_00457c82:
  _DAT_00477b88 = param_1;
  (*(int *)&_DAT_00475dd8) = (int)(char)(&DAT_00474c0c)[param_1];
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457cd0  FUN_00457cd0   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_00457cd0(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetLastError();
  uVar2 = FUN_00457c6c(DVar1 & 0xffff);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ce4  thunk → FUN_00456ed8   (5 bytes)   [unnamed]
DWORD __cdecl thunk_FUN_00456ed8(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_00457c6c(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_00477ac0 + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00457cd0();
    }
  }
  else {
    DVar1 = FUN_00457c6c(6);
  }
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457cec  thunk → FUN_00456f50   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl thunk_FUN_00456f50(LPCSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_00474c08 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00456fbb:
      DVar4 = 1;
      goto LAB_00456fdc;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00456fdc;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00456fdc;
      }
      goto LAB_00456fd7;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00456fd7:
      DVar4 = 3;
      goto LAB_00456fdc;
    }
    goto LAB_00456fbb;
  }
  DVar4 = 5;
LAB_00456fdc:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00474680 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    DStack_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_00457c6c(1);
      return iVar2;
    }
    DStack_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar3 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar3 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(param_1,DStack_8,DStack_c,&_Stack_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0)
  ;
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_00457c6c(uVar3);
  }
  else {
    bVar1 = FUN_00456ec0(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004579b0(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_00457c6c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457cfc  thunk → FUN_004571b8   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004571b8(uint param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  if (param_1 < DAT_00474b38) {
    if (param_3 + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0045764c(param_1,param_2,(DWORD)param_3);
    }
    else if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (param_3 != (char *)0x0) {
        while( true ) {
          uVar6 = (int)param_3 - (int)pcVar1;
          uVar2 = FUN_0045764c(param_1,param_2,uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = memchr(param_2,'\x1a',uVar2);
          if (pcVar3 != (char *)0x0) {
            (&DAT_00474b3c)[param_1] = (&DAT_00474b3c)[param_1] | 0x200;
            uVar2 = (int)pcVar3 - (int)param_2;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((param_2[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_0045764c(param_1,param_2 + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_0045714c(param_2,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) && ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (param_3 <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_00457c6c(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457d04  FUN_00457d04   (449 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_00457d04(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_00457d2c:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    uVar2 = (*(code *)param_1)();
    if (iVar5 == 0) {
      if (((-1 < (int)uVar2) && ((int)uVar2 < 0x80)) && (iVar3 = FUN_0045d0f4(uVar2), iVar3 != 0))
      goto LAB_00457d2c;
      iVar5 = 1;
    }
    iVar3 = param_5 + -1;
    if (iVar3 < 0) goto LAB_00457e7b;
    if ((iVar5 != 1) || ((iVar5 = 2, uVar2 != 0x2b && (uVar2 != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((uVar2 == 0x30) && ((local_18 = 1, param_4 == 0 || (param_4 == 0x10)))) {
          iVar1 = local_c + 2;
          uVar2 = (*(code *)param_1)();
          param_5 = param_5 + -2;
          if (param_5 < 0) goto LAB_00457e7b;
          if ((uVar2 == 0x78) || (uVar2 == 0x58)) {
            param_4 = 0x10;
            goto LAB_00457d2c;
          }
          iVar3 = param_5;
          if (param_4 == 0) {
            param_4 = 8;
          }
        }
        local_c = iVar1;
        param_5 = iVar3;
        iVar3 = param_5;
        iVar1 = local_c;
        if (param_4 == 0) {
          param_4 = 10;
        }
        else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_00457e7b;
      }
      local_c = iVar1;
      param_5 = iVar3;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) {
          if (((int)uVar2 < 0x61) || (0x7a < (int)uVar2)) {
            if (((int)uVar2 < 0x41) || (0x5a < (int)uVar2)) goto LAB_00457e7b;
            local_1c = uVar2 - 0x37;
          }
          else {
            local_1c = uVar2 - 0x57;
          }
        }
        else {
          local_1c = uVar2 - 0x30;
        }
        if ((int)param_4 <= local_1c) goto LAB_00457e7b;
        local_18 = local_18 + 1;
        uVar4 = local_14 * param_4 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / param_4;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          if (bVar6) {
            local_14 = 0x80000000;
          }
          else {
            local_14 = 0x7fffffff;
          }
LAB_00457e7b:
          local_c = iVar1;
          if (local_10 != 2) {
            (*(code *)param_2)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if (local_18 == 0) {
            if (uVar2 == 0xffffffff) {
              local_10 = -1;
            }
            else {
              local_10 = 0;
            }
          }
          *param_7 = local_10;
          *param_6 = *param_6 + local_c;
          return local_14;
        }
      }
      goto LAB_00457d2c;
    }
    bVar6 = uVar2 == 0x2d;
    param_5 = iVar3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ecc  FUN_00457ecc   (40 bytes)   [unnamed]
uint __cdecl FUN_00457ecc(undefined4 *param_1,uint param_2,int *param_3)

{
  memcpy((undefined4 *)*param_3,param_1,param_2);
  *param_3 = *param_3 + param_2;
  *(undefined1 *)*param_3 = 0;
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ef4  FUN_00457ef4   (40 bytes)   [unnamed]
void __cdecl FUN_00457ef4(undefined1 *param_1,byte *param_2)

{
  *param_1 = 0;
  FUN_0045810c(FUN_00457ecc,&param_1,param_2,0,0,(uint *)&GHIDRA_STACK(0x0000000c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457f1c  FUN_00457f1c   (40 bytes)   [unnamed]
void __cdecl FUN_00457f1c(undefined1 *param_1,byte *param_2,uint *param_3)

{
  *param_1 = 0;
  FUN_0045810c(FUN_00457ecc,&param_1,param_2,0,0,param_3);
  return;
}

} // namespace tea

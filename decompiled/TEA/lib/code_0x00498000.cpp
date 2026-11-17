// TEA.exe — runtime / library code "code_0x00498000"
// 89 functions, 0x00498008..0x0049bd60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00498008  FUN_00498008   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_00498008(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x507f90);
  FUN_0048ed90(param_1,param_2,DAT_00512a1c);
  *param_1 = &OWL::TXMenu::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498208  FUN_00498208   (83 bytes)   [unnamed]
void __cdecl FUN_00498208(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x508008);
  piVar1 = FUN_00498008(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004982d4  FUN_004982d4   (117 bytes)   [unnamed]
uint * __stdcall FUN_004982d4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_180 [55];
  LOGFONTA local_a4 [2];
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x508098);
  local_180[0] = 0x154;
  SystemParametersInfoA(0x29,0x154,local_180,0);
  local_8 = (uint *)operator_new();
  if (local_8 != (uint *)0x0) {
    local_1c = 0x14;
    FUN_0048f7fc(local_8,local_a4);
  }
  *in_FS_OFFSET = local_2c;
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049834c  FUN_0049834c   (443 bytes)   [unnamed]
int * __cdecl FUN_0049834c(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5080d8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x62;
    *(int *)((int)param_1 + 0x62) = (int)param_1 + 0x56;
    *(int *)((int)param_1 + 0x66) = (int)param_1 + 0x5a;
    param_1[4] = (int)param_1 + 0x56;
    param_1[5] = (int)param_1 + 0x5a;
    *(undefined4 *)((int)param_1 + 0x52) = 0;
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
    *(undefined ***)((int)param_1 + 0x56) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x5a) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x62),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -5;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -5;
  if (param_4 == (uint *)0x0) {
    param_4 = FUN_004982d4();
  }
  FUN_00491150(param_1,1,param_3,0,param_4,param_5);
  *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 5;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 5;
  param_1[6] = (int)&OWL::TMessageBar::vftable;
  param_1[1] = (int)&PTR_LAB_005081ac;
  *(undefined ***)param_1[4] = &PTR_LAB_005081cc;
  *(undefined ***)param_1[5] = &PTR_LAB_005081d8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005081e4;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0049eb84(puVar2,30000,3,0,10,(uint *)0x0,0);
  }
  *(undefined4 *)(*param_1 + 0x34) = 0x7d28;
  bVar1 = FUN_004875a8();
  *(bool *)((int)param_1 + 0x4d) = !bVar1;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 1;
  (**(code **)(param_1[6] + 0x14))();
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004987c4  FUN_004987c4   (25 bytes)   [unnamed]
void __cdecl FUN_004987c4(int param_1,uint *param_2)

{
  FUN_004987e0(param_1,30000,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004987e0  FUN_004987e0   (77 bytes)   [unnamed]
void __cdecl FUN_004987e0(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)FUN_00490dd0(param_1 + 4,param_2);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  puVar3 = FUN_004dd744((int)piVar1,iVar2,(int *)&DAT_00427ee4,(int *)&DAT_00427f30,0);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0049ed44((int)puVar3,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004989b8  FUN_004989b8   (105 bytes)   [unnamed]
undefined4 * __cdecl FUN_004989b8(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50827c);
  FUN_0049eb84(param_1,param_4,param_5,param_6,10,param_3,param_7);
  *param_1 = &OWL::TModeGadget::vftable;
  param_1[0x18] = param_2;
  FUN_0048fe6c((int)param_1,1,1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498c80  FUN_00498c80   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_00498c80(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508310);
  *param_1 = &OWL::TMsgThread::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498d7c  FUN_00498d7c   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_00498d7c(int *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  tagMSG local_20;
  
  uVar3 = 0;
  while( true ) {
    BVar2 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar2 == 0) {
      return uVar3;
    }
    uVar3 = 1;
    if (local_20.message == 0x12) break;
    uVar1 = (**(code **)(*param_1 + 8))();
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(WPARAM *)((int)param_1 + 5) = local_20.wParam;
  PostQuitMessage(local_20.wParam);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498dd8  FUN_00498dd8   (37 bytes)   [unnamed]
void __stdcall FUN_00498dd8(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  do {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,3);
    if (BVar1 == 0) {
      return;
    }
  } while (local_20.message != 0xf);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498ebc  FUN_00498ebc   (25 bytes)   [unnamed]
void __cdecl FUN_00498ebc(undefined4 param_1,int param_2)

{
  FUN_004994b4(DAT_005083e8,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498ed8  FUN_00498ed8   (25 bytes)   [unnamed]
void __cdecl FUN_00498ed8(undefined4 param_1,int param_2)

{
  FUN_004994cc(DAT_005083e8,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498ef4  FUN_00498ef4   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_00498ef4(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00499538(DAT_005083e8,param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498f10  FUN_00498f10   (88 bytes)   [unnamed]
void __stdcall FUN_00498f10(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5083fc);
  piVar1 = DAT_005083e8;
  if ((DAT_005083e8 == (int *)0x0) && (piVar1 = (int *)operator_new(), piVar1 != (int *)0x0)) {
    FUN_00499330(piVar1);
  }
  DAT_005083e8 = piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498f8c  FUN_00498f8c   (54 bytes)   [unnamed]
void __stdcall FUN_00498f8c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50841c);
  OWL::TStreamableTypes::_dtor(DAT_005083e8,3);
  DAT_005083e8 = (int *)0x0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498fc4  FUN_00498fc4   (174 bytes)   [unnamed]
int __cdecl FUN_00498fc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00499074(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar2 = FUN_004dc978(*(char **)(param_2 + 8),*(char **)(iVar1 + 8));
    if (iVar2 < 0) {
      bVar4 = true;
    }
    else if (iVar2 < 1) {
      if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(iVar1 + 0xc) == 0)) ||
         (*(int *)(param_2 + 0xc) == *(int *)(iVar1 + 0xc))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(uint *)(param_2 + 0xc) < *(uint *)(iVar1 + 0xc);
      }
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
  }
  *(int *)(*(int *)(param_1 + 9) + iVar3 * 4) = param_2;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499074  FUN_00499074   (155 bytes)   [unnamed]
void __cdecl FUN_00499074(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499110  FUN_00499110   (341 bytes)   [unnamed]
uint __cdecl FUN_00499110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 1) != 0) {
    local_8 = 0;
    local_c = *(int *)(param_1 + 1) - 1;
    while ((local_8 < local_c && (local_c != 0xffffffff))) {
      uVar3 = local_8 + local_c >> 1;
      iVar1 = *(int *)(*(int *)(param_1 + 9) + uVar3 * 4);
      iVar2 = FUN_004dc978(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 == 0) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar3;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 9) + uVar3 * 4);
      iVar2 = FUN_004dc978(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 < 0) {
        bVar4 = true;
      }
      else if (iVar2 < 1) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = false;
        }
        else {
          bVar4 = *(uint *)(iVar1 + 0xc) < *(uint *)(param_2 + 0xc);
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        local_8 = uVar3 + 1;
      }
      else {
        local_c = uVar3 - 1;
      }
    }
    if (local_8 == local_c) {
      iVar1 = *(int *)(*(int *)(param_1 + 9) + local_8 * 4);
      iVar2 = FUN_004dc978(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 == 0) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return local_8;
      }
    }
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499268  FUN_00499268   (106 bytes)   [unnamed]
undefined4 * __cdecl FUN_00499268(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508434);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = param_5;
  uVar1 = FUN_00496d48(param_2);
  param_1[2] = uVar1;
  FUN_00499d44();
  if (param_5 != 0) {
    FUN_00498ebc(param_5,(int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499330  FUN_00499330   (131 bytes)   [unnamed]
int * __cdecl FUN_00499330(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x508468);
  iVar1 = operator_new();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_00499074(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499468  FUN_00499468   (74 bytes)   [unnamed]
void __cdecl FUN_00499468(int param_1,char param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5084dc);
  if (param_2 != '\0') {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 1); iVar1 = iVar1 + 1) {
      OWL::TStreamableClass::_dtor(*(int *)(*(int *)(param_1 + 9) + iVar1 * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004994b4  FUN_004994b4   (21 bytes)   [unnamed]
void __cdecl FUN_004994b4(int *param_1,undefined4 param_2,int param_3)

{
  FUN_00498fc4(*param_1,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004994cc  FUN_004994cc   (105 bytes)   [unnamed]
void __cdecl FUN_004994cc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_00499110(iVar1,param_3);
  if (uVar2 != 0xffffffff) {
    FUN_004dc7f8((undefined4 *)(uVar2 * 4 + *(int *)(iVar1 + 9)),
                 (undefined4 *)((uVar2 + 1) * 4 + *(int *)(iVar1 + 9)),
                 ((*(int *)(iVar1 + 1) - uVar2) + -1) * 4);
    *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + -1;
  }
  if (*(int *)(*param_1 + 1) == 0) {
    FUN_00498f8c();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499538  FUN_00499538   (1151 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004995ba) */
undefined4 __cdecl FUN_00499538(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1d8 [248];
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_cc;
  uint local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  undefined1 *local_a4;
  int *local_a0;
  int *local_9c;
  uint local_98;
  int *local_94;
  undefined1 *local_90;
  int *local_8c;
  undefined4 local_88;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x508560);
  local_68 = 8;
  FUN_00499268(local_14,param_3,0,0,0);
  local_5c = local_5c + 1;
  local_68 = 0x14;
  uVar1 = FUN_00499110(*param_1,(int)local_14);
  if (uVar1 != 0xffffffff) goto LAB_0049998b;
  local_1c = &DAT_00513d64;
  local_e0 = &DAT_00513d64;
  local_5c = local_5c + 1;
  local_68 = 0x38;
  if ((*(int *)&DAT_005140ac) - 0xeU < 0x80) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00408370;
    uVar5 = 0;
    local_68 = 0x50;
    local_7c = (uint *)FUN_004dc320(local_1d8,PTR_s_invalid_string_size_parameter_in_00516d20);
    std::string::string_from_cstr((int)local_4c,local_7c);
    local_5c = local_5c + 2;
    local_3c[0] = &std::logic_error::vftable;
    local_88 = 0;
    local_2c = (int *)0x0;
    local_68 = 0x5c;
    if (local_44[-3] == -1 || local_44[-3] + 1 < 0) {
      local_98 = local_44[-1];
      local_a0 = std::string::__getRep(local_34,local_98,local_98);
      local_b0 = local_a0 + 3;
      local_a4 = local_34;
      local_a8 = local_98;
      local_ac = local_44;
      local_9c = local_b0;
      local_2c = local_b0;
      memcpy(local_b0,local_44,local_98);
    }
    else {
      local_8c = local_44;
      local_2c = local_44;
      local_90 = local_34;
      local_94 = local_44 + -3;
      if (local_94 != &DAT_00513d58) {
        *local_94 = *local_94 + 1;
      }
    }
    local_68 = 0x50;
    local_3c[0] = &std::length_error::vftable;
    local_5c = local_5c + 2;
    if (local_44 != (int *)0x0) {
      if (local_44[-3] != -1) {
        local_b4 = local_44 + -3;
        if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_00499820;
      }
      local_b8 = local_44 + -3;
      local_bc = local_44 + -3;
      operator_delete();
      local_c0 = 0;
      local_44 = (int *)0x0;
      local_c4 = local_4c;
    }
LAB_00499820:
    local_68 = 0x44;
    FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_004d6d58((int)local_24,0x80);
  }
  FUN_004cf41c((int)local_24,(uint *)"Attempt to stream unregistered type '");
  local_c8 = *(uint *)(local_1c + -4);
  pcVar2 = strlen(param_3);
  FUN_004cfad4((int)local_24,local_c8,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  uVar7 = *(uint *)(local_1c + -4);
  pcVar2 = strlen((uint *)("Attempt to stream unregistered type '" + 0x24));
  FUN_004cfad4((int)local_24,uVar7,0,0x5083e6,(uint)pcVar2,0,(uint)pcVar2);
  local_68 = 0x80;
  piVar3 = FUN_0048e860(local_54,(int)local_24);
  local_5c = local_5c + 2;
  (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + -2;
  OWL::TXBase::_dtor(local_54,2);
  local_5c = local_5c + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0049997f;
    }
    local_cc = local_1c + -0xc;
    local_d0 = local_1c + -0xc;
    operator_delete();
    local_d4 = 0;
    local_1c = (undefined *)0x0;
    local_d8 = local_24;
  }
LAB_0049997f:
  local_68 = 0x14;
LAB_0049998b:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  local_5c = local_5c + -1;
  OWL::TStreamableClass::_dtor((int)local_14,2);
  *in_FS_OFFSET = local_78;
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004999b8  FUN_004999b8   (51 bytes)   [unnamed]
void __cdecl FUN_004999b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_004999ec(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004999ec  FUN_004999ec   (155 bytes)   [unnamed]
void __cdecl FUN_004999ec(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499a88  FUN_00499a88   (30 bytes)   [unnamed]
undefined4 __cdecl FUN_00499a88(int *param_1,uint param_2)

{
  if (param_2 < *(uint *)(*param_1 + 1)) {
    return *(undefined4 *)(*(int *)(*param_1 + 9) + param_2 * 4);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499aa8  FUN_00499aa8   (155 bytes)   [unnamed]
void __cdecl FUN_00499aa8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499b44  FUN_00499b44   (42 bytes)   [unnamed]
void __cdecl FUN_00499b44(int *param_1,int param_2)

{
  uint local_c;
  int local_8;
  
  *param_1 = *param_1 + 1;
  local_8 = *param_1;
  local_c = param_2 + 1;
  FUN_00499b70(param_1[1],&local_c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499b70  FUN_00499b70   (6 bytes)   [unnamed]
int __stdcall FUN_00499b70(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  __InitExceptBlockLDTC(0x508608);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00499aa8(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  while ((iVar3 != 0 && (*param_2 < **(uint **)(*(int *)(param_1 + 9) + -4 + iVar3 * 4)))) {
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
  }
  puVar1 = (uint *)(param_1 + 0xd);
  if (*puVar1 == 0) {
    puVar2 = (uint *)FUN_0048c8fc(param_1 + 0x11,*(uint *)(param_1 + 0x22));
  }
  else {
    puVar2 = (uint *)*puVar1;
    *puVar1 = *puVar2;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
  }
  *(uint **)(*(int *)(param_1 + 9) + iVar3 * 4) = puVar2;
  *in_FS_OFFSET = uStack_2c;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499b76  FUN_00499b76   (214 bytes)   [unnamed]
int __stdcall FUN_00499b76(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x508608);
  if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
    FUN_00499aa8(iVar2,*(int *)(iVar2 + 1) + 1);
  }
  iVar5 = *(int *)(iVar2 + 1);
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
  while ((iVar5 != 0 &&
         (**(uint **)(unaff_EBP + 0xc) < **(uint **)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4)))) {
    *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) =
         *(undefined4 *)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4);
    iVar5 = iVar5 + -1;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0xc);
  piVar1 = (int *)(iVar2 + 0xd);
  if (*piVar1 == 0) {
    iVar3 = FUN_0048c8fc(iVar2 + 0x11,*(uint *)(iVar2 + 0x22));
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *piVar1;
    *piVar1 = **(int **)(unaff_EBP + -0x34);
    iVar3 = *(int *)(unaff_EBP + -0x34);
  }
  *(int *)(unaff_EBP + -0x30) = iVar3;
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    **(undefined4 **)(unaff_EBP + -4) = **(undefined4 **)(unaff_EBP + -0x2c);
    *(undefined4 *)(*(int *)(unaff_EBP + -4) + 4) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 4)
    ;
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) = uVar4;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499c78  FUN_00499c78   (65 bytes)   [unnamed]
undefined4 __cdecl FUN_00499c78(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c [2];
  
  local_c[0] = param_2 + 1;
  local_c[1] = 0;
  uVar1 = FUN_00499cbc(*(int *)(param_1 + 4),local_c);
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 9) + uVar1 * 4) + 4);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499cbc  FUN_00499cbc   (135 bytes)   [unnamed]
uint __cdecl FUN_00499cbc(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar3 = *(int *)(param_1 + 1) - 1;
    while ((uVar1 < uVar3 && (uVar3 != 0xffffffff))) {
      uVar2 = uVar3 + uVar1 >> 1;
      if (**(uint **)(*(int *)(param_1 + 9) + uVar2 * 4) == *param_2) {
        return uVar2;
      }
      if (**(uint **)(*(int *)(param_1 + 9) + uVar2 * 4) < *param_2) {
        uVar1 = uVar2 + 1;
      }
      else {
        uVar3 = uVar2 - 1;
      }
    }
    if ((uVar3 != uVar1) || (**(uint **)(*(int *)(param_1 + 9) + uVar1 * 4) != *param_2)) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499d44  FUN_00499d44   (6 bytes)   [unnamed]
void __stdcall FUN_00499d44(void)

{
  FUN_00498f10();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499d4c  FUN_00499d4c   (83 bytes)   [unnamed]
uint __cdecl FUN_00499d4c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[3] < (uint)piVar1[4]) {
      uVar2 = (uint)*(byte *)piVar1[3];
      piVar1[3] = piVar1[3] + 1;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x20))();
    }
    if (uVar2 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499da0  FUN_00499da0   (75 bytes)   [unnamed]
void __cdecl FUN_00499da0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499dec  FUN_00499dec   (173 bytes)   [unnamed]
void __cdecl FUN_00499dec(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 *local_c [2];
  
  __InitExceptBlockLDTC(0x508648);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_00497298((int *)local_c,param_3);
    uVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (uVar1 == param_3) {
      memcpy(param_2,local_c[0],param_3);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499e9c  FUN_00499e9c   (36 bytes)   [unnamed]
uint __cdecl FUN_00499e9c(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_00499f04(param_1);
    return uVar1;
  }
  uVar1 = FUN_00499ec0(param_1);
  return uVar1 & 0xffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499ec0  FUN_00499ec0   (67 bytes)   [unnamed]
uint __cdecl FUN_00499ec0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar2 != 2) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 8) = 4;
    }
    uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),(short)((uint)in_ECX >> 0x10));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499f04  FUN_00499f04   (66 bytes)   [unnamed]
undefined4 __cdecl FUN_00499f04(int *param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    in_ECX = 0;
  }
  return in_ECX;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499f48  FUN_00499f48   (50 bytes)   [unnamed]
uint __cdecl FUN_00499f48(int *param_1)

{
  uint uVar1;
  
  if ((uint)param_1[3] < 0x101) {
    uVar1 = FUN_00499d4c(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_00499f04(param_1);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499f7c  FUN_00499f7c   (72 bytes)   [unnamed]
int __cdecl FUN_00499f7c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_00499f48(param_1);
    if ((uVar1 == 0xffffffff) || (param_3 - 1U < uVar1)) {
      param_2 = 0;
    }
    else {
      FUN_00499da0(param_1,param_2,uVar1);
      *(undefined1 *)(param_2 + uVar1) = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00499fc4  FUN_00499fc4   (73 bytes)   [unnamed]
undefined4 * __cdecl FUN_00499fc4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar2 = FUN_00499f48(param_1);
    if (uVar2 == 0xffffffff) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)operator_new_array();
      FUN_00499dec(param_1,puVar1,uVar2);
      *(undefined1 *)((int)puVar1 + uVar2) = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a010  FUN_0049a010   (129 bytes)   [unnamed]
int __cdecl FUN_0049a010(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char local_84 [128];
  
  uVar1 = FUN_00499d4c(param_1);
  if ((char)uVar1 == '[') {
    local_84[0] = '\0';
    FUN_00499f7c(param_1,(int)local_84,0x80);
    if (local_84[0] == '\0') {
      *(undefined4 *)(*param_1 + 8) = 4;
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00498ef4(param_2,(uint *)local_84);
      if (iVar2 == 0) {
        *(undefined4 *)(*param_1 + 8) = 4;
        iVar2 = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*param_1 + 8) = 4;
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a094  FUN_0049a094   (129 bytes)   [unnamed]
void __cdecl FUN_0049a094(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x508688);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_004999b8(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_00499f04(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  operator_delete();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a180  FUN_0049a180   (47 bytes)   [unnamed]
void __cdecl FUN_0049a180(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_00499d4c(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a1b0  FUN_0049a1b0   (135 bytes)   [unnamed]
int __cdecl FUN_0049a1b0(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar3 = FUN_00499d4c(param_1);
    cVar1 = (char)uVar3;
    if (cVar1 == '\0') {
      *param_2 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = FUN_00499e9c(param_1);
      iVar2 = FUN_00499a88(param_1 + 2,uVar3);
      *param_2 = iVar2;
    }
    else if (cVar1 == '\x02') {
      puVar4 = (undefined4 *)FUN_0049a010(param_1,param_3);
      FUN_0049a094(param_1,puVar4,param_2);
      FUN_0049a180(param_1);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    iVar2 = *param_2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a238  FUN_0049a238   (91 bytes)   [unnamed]
void __cdecl FUN_0049a238(int *param_1,byte param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[6] < (uint)piVar1[7]) {
      pbVar2 = (byte *)piVar1[6];
      piVar1[6] = piVar1[6] + 1;
      *pbVar2 = param_2;
      uVar3 = (uint)param_2;
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0x24))();
    }
    if (uVar3 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a294  FUN_0049a294   (75 bytes)   [unnamed]
void __cdecl FUN_0049a294(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a2e0  FUN_0049a2e0   (57 bytes)   [unnamed]
void __cdecl FUN_0049a2e0(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 2) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a31c  FUN_0049a31c   (57 bytes)   [unnamed]
void __cdecl FUN_0049a31c(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a358  FUN_0049a358   (107 bytes)   [unnamed]
void __cdecl FUN_0049a358(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    puVar1 = (undefined4 *)operator_new_array();
    memcpy(puVar1,param_2,param_3);
    uVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (uVar2 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    operator_delete_array();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a3c4  FUN_0049a3c4   (72 bytes)   [unnamed]
void __cdecl FUN_0049a3c4(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0049a31c(param_1);
    }
    else {
      pcVar1 = strlen(param_2);
      FUN_0049a31c(param_1);
      FUN_0049a294(param_1,param_2,(int)pcVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a40c  FUN_0049a40c   (72 bytes)   [unnamed]
void __cdecl FUN_0049a40c(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0049a31c(param_1);
    }
    else {
      pcVar1 = strlen(param_2);
      FUN_0049a31c(param_1);
      FUN_0049a358(param_1,param_2,(uint)pcVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a454  FUN_0049a454   (57 bytes)   [unnamed]
void __cdecl FUN_0049a454(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0049a508(param_1,param_2);
    FUN_0049a554(param_1,param_2,param_4);
    FUN_0049a238(param_1,0x5d);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a490  FUN_0049a490   (117 bytes)   [unnamed]
void __cdecl FUN_0049a490(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_0049a238(param_1,0);
    }
    else {
      iVar1 = FUN_00499c78(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_0049a238(param_1,2);
        FUN_0049a454(param_1,param_2,1,param_3);
      }
      else {
        FUN_0049a238(param_1,1);
        FUN_0049a31c(param_1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a508  FUN_0049a508   (76 bytes)   [unnamed]
void __cdecl FUN_0049a508(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0049a238(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_004dd5cc((int)param_2,iVar3,0x4027f0);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
    FUN_0049a3c4(param_1,puVar2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a554  FUN_0049a554   (183 bytes)   [unnamed]
void __cdecl FUN_0049a554(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5086d4);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00499b44((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_004dd5cc((int)param_2,iVar4,0x4027f0);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
    puVar1 = (undefined4 *)FUN_00498ef4(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_0049a31c(param_1);
    (**(code **)(*piVar3 + 8))();
    operator_delete();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a758  FUN_0049a758   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0049a758(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a788  FUN_0049a788   (97 bytes)   [unnamed]
void __cdecl FUN_0049a788(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508700);
  if (param_1 != 0) {
    FUN_00499468(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049a8dc  FUN_0049a8dc   (111 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0049a8dc(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508730);
  if (param_1 != 0) {
    FUN_00499468(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049aa2c  FUN_0049aa2c   (80 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0049aa2c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508750);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ab28  FUN_0049ab28   (92 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0049ab28(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508774);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049abe8  FUN_0049abe8   (45 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0049abe8(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ac18  FUN_0049ac18   (22 bytes)   [unnamed]
FARPROC __stdcall FUN_0049ac18(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("USER32");
  pFVar1 = GetProcAddress(hModule,"DefWindowProcA");
  return pFVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ac2e  FUN_0049ac2e   (60 bytes)   [unnamed]
void __stdcall FUN_0049ac2e(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508799);
  if (DAT_00508798 != '\0') {
    HeapDestroy(DAT_0051b404);
    DAT_00508798 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ac6c  FUN_0049ac6c   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_0049ac6c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0049ac74();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ac74  FUN_0049ac74   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0049ac74(void)

{
  return &DAT_00508794;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ac7c  FUN_0049ac7c   (15 bytes)   [unnamed]
void __cdecl FUN_0049ac7c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0049ac74();
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ac8c  FUN_0049ac8c   (104 bytes)   [unnamed]
void __stdcall FUN_0049ac8c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LONG dwNewLong;
  code *pcVar2;
  
  iVar1 = FUN_0049ac6c();
  if (iVar1 == 0) {
    DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0049ac7c(0);
    *(HWND *)(iVar1 + 0xc) = param_1;
    dwNewLong = FUN_0049ac18();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_004a70e4(iVar1);
    pcVar2 = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*pcVar2)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049acf4  FUN_0049acf4   (198 bytes)   [unnamed]
undefined1 * __cdecl FUN_0049acf4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x5087e4);
  puVar1 = FUN_0049adbc();
  puVar2 = HeapAlloc((HANDLE)*puVar1,0,10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = local_10;
    piVar3 = FUN_0048f460(puVar1);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,puVar1,piVar3);
    OWL::TXOwl::_dtor(local_10,0);
  }
  else {
    *puVar2 = 0xb8;
    puVar2[5] = 0xe9;
    *(undefined4 *)(puVar2 + 1) = param_1;
    *(int *)(puVar2 + 6) = 0x49ae9a - (int)puVar2;
  }
  *in_FS_OFFSET = local_38;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049adbc  FUN_0049adbc   (151 bytes)   [unnamed]
undefined4 * __stdcall FUN_0049adbc(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x508830);
  if (DAT_00508798 == '\0') {
    DAT_0051b404 = HeapCreate(0x40000,0x8000,0);
    if (DAT_0051b404 == (HANDLE)0x0) {
      piVar1 = FUN_0048f460(local_10);
      (**(code **)(*piVar1 + 0xc))();
      OWL::TXOwl::_dtor(local_10,0);
    }
    DAT_00508798 = DAT_00508798 + '\x01';
  }
  *in_FS_OFFSET = local_34;
  return (undefined4*)&DAT_0051b404;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ae74  FUN_0049ae74   (5 bytes)   [unnamed]
void __stdcall FUN_0049ae74(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ae7c  FUN_0049ae7c   (40 bytes)   [unnamed]
void __cdecl FUN_0049ae7c(int param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  
  lpMem = *(LPVOID *)(param_1 + 0x68);
  if (lpMem != (LPVOID)0x0) {
    puVar1 = FUN_0049adbc();
    HeapFree((HANDLE)*puVar1,0,lpMem);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049aea4  FUN_0049aea4   (25 bytes)   [unnamed]
void FUN_0049aea4(int param_1)

{
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  
  FUN_004a60fc(param_1,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049af68  FUN_0049af68   (35 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0049af68(LPVOID param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = FUN_0049adbc();
    HeapFree((HANDLE)*puVar1,0,param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049af8c  FUN_0049af8c   (106 bytes)   [unnamed]
int * __cdecl FUN_0049af8c(int *param_1,HWND param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50886c);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
  *(HWND *)((int)param_1 + 0x61) = param_2;
  pHVar1 = BeginPaint(param_2,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_00493530(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b094  FUN_0049b094   (82 bytes)   [unnamed]
uint * __cdecl FUN_0049b094(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508920);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00493c34(*param_1,4);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b104  FUN_0049b104   (71 bytes)   [unnamed]
uint * __cdecl FUN_0049b104(uint *param_1,int param_2,BYTE param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508944);
  FUN_00493fdc(param_1);
  FUN_0049b14c(param_1,*(int *)(param_2 + 9),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b14c  FUN_0049b14c   (197 bytes)   [unnamed]
void __cdecl FUN_0049b14c(uint *param_1,int param_2,BYTE param_3)

{
  ushort uVar1;
  int iVar2;
  LOGPALETTE *plpal;
  HPALETTE pHVar3;
  ushort uVar4;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    iVar2 = FUN_0048c0a0(*(short *)(param_2 + 0xe));
    uVar4 = (ushort)iVar2;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 0x20);
  }
  if (uVar4 == 0) {
    *param_1 = 0;
  }
  else {
    plpal = (LOGPALETTE *)operator_new_array();
    plpal->palVersion = 0x300;
    plpal->palNumEntries = uVar4;
    uVar1 = 0;
    if (uVar4 != 0) {
      do {
        plpal->palPalEntry[uVar1].peRed = *(BYTE *)(param_2 + 0x2a + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peGreen = *(BYTE *)(param_2 + 0x29 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peBlue = *(BYTE *)(param_2 + 0x28 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peFlags = param_3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
    pHVar3 = CreatePalette(plpal);
    *param_1 = (uint)pHVar3;
    operator_delete_array();
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b6a8  FUN_0049b6a8   (225 bytes)   [unnamed]
uint * __cdecl FUN_0049b6a8(uint *param_1,uint *param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint color;
  HPEN pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5089b8);
  FUN_00493fdc(param_1);
  if (((param_3 == 1) && (param_4 == 0)) &&
     ((*param_2 == DAT_0051b174 || (*param_2 == (*(uint *)&DAT_0051b198))))) {
    if (*param_2 == DAT_0051b174) {
      pvVar1 = GetStockObject(7);
      *param_1 = (uint)pvVar1;
    }
    else {
      pvVar1 = GetStockObject(6);
      *param_1 = (uint)pvVar1;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    color = FUN_0048c12c(param_2);
    pHVar2 = CreatePen(param_4,param_3,color);
    *param_1 = (uint)pHVar2;
    FUN_00493530((int *)param_1,0x7fe3);
    FUN_00493c34(*param_1,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b7b0  FUN_0049b7b0   (338 bytes)   [unnamed]
int * __cdecl FUN_0049b7b0(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  CHAR local_12c [260];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x5089dc);
  local_18 = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x9b;
    param_1[1] = (int)param_1 + 0x9f;
    *(undefined4 *)((int)param_1 + 0x97) = 0;
    *(undefined ***)((int)param_1 + 0x9b) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x9f) = &OWL::TStreamableBase::vftable;
    local_c = local_c + 1;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
  FUN_004a4de0(param_1,1,param_3,(uint *)0x0,0);
  local_c = local_c + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
  param_1[2] = (int)&OWL::TPickListPopup::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00508aa0;
  *(undefined ***)param_1[1] = &PTR_LAB_00508aac;
  FUN_00497f00((undefined4 *)((int)param_1 + 0x86),1);
  local_c = local_c + 2;
  *(undefined4 *)((int)param_1 + 0x8f) = 0;
  if (param_4 != 0) {
    iVar1 = FUN_004c0cd4(param_1[0x1b] + 4,param_4,local_12c,0x104);
    if (iVar1 != 0) {
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),1,0,local_12c);
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),0x800,0xffffffff,(LPCSTR)0x0);
      goto LAB_0049b8f0;
    }
  }
  *in_FS_OFFSET = local_28;
LAB_0049b8f0:
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b904  FUN_0049b904   (58 bytes)   [unnamed]
undefined4 __cdecl FUN_0049b904(int param_1,LPCSTR param_2)

{
  UINT_PTR uIDNewItem;
  
  uIDNewItem = *(UINT_PTR *)(param_1 + 0x8f);
  *(int *)(param_1 + 0x8f) = *(int *)(param_1 + 0x8f) + 1;
  AppendMenuA(*(HMENU *)(param_1 + 0x8a),0,uIDNewItem,param_2);
  return *(undefined4 *)(param_1 + 0x8f);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b9d4  FUN_0049b9d4   (214 bytes)   [unnamed]
void __cdecl FUN_0049b9d4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5089f0);
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 1) <= iVar5) {
      *(undefined4 *)(param_1 + 1) = 0;
      *in_FS_OFFSET = local_28;
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 9) + iVar5 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_0049ba7b;
      }
      operator_delete();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_0049ba7b:
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 9) + iVar5 * 4);
    *puVar2 = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xd) = puVar2;
    iVar5 = iVar5 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0049baac  FUN_0049baac   (155 bytes)   [unnamed]
void __cdecl FUN_0049baac(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bb48  FUN_0049bb48   (41 bytes)   [unnamed]
void __cdecl FUN_0049bb48(int param_1,undefined *param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 1); iVar1 = iVar1 + 1) {
    (*(code *)param_2)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bca0  FUN_0049bca0   (58 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049bca0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  uVar2 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bcdc  FUN_0049bcdc   (80 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049bcdc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x508ac8);
  FUN_0049ca30(param_1,*param_2,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPreviewDCBase::vftable;
  *(undefined4 *)((int)param_1 + 0x35) = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bd60  FUN_0049bd60   (281 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049bd60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,RECT *param_5)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  HRGN local_c [2];
  
  __InitExceptBlockLDTC(0x508afc);
  FUN_0049bcdc(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPrintPreviewDC::vftable;
  *(undefined4 *)((int)param_1 + 0x39) = 0;
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  SetMapMode((HDC)*param_1,8);
  SetWindowExtEx((HDC)*param_1,param_4[2] - *param_4,param_4[3] - param_4[1],(LPSIZE)0x0);
  BVar1 = SetViewportExtEx((HDC)*param_1,param_4[2] - *param_4,param_4[3] - param_4[1],(LPSIZE)0x0);
  (**(code **)(*(int *)((int)param_1 + 5) + 100))
            (BVar1 != 0,param_1,*(int *)((int)param_1 + 5),param_1);
  FUN_0049ced4((int *)local_c,param_5);
  SelectClipRgn((HDC)*param_1,local_c[0]);
  OWL::TRegion::_dtor((undefined4*)local_c,2);
  uVar2 = FUN_0048db7c(*(undefined4 **)((int)param_1 + 0x35),6);
  *(undefined4 *)((int)param_1 + 0x39) = uVar2;
  (**(code **)(*(int *)((int)param_1 + 5) + 0x60))();
  *in_FS_OFFSET = local_30;
  return param_1;
}

} // namespace tea

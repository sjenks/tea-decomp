// TSBuild.exe — runtime / library code "code_0x0042c000"
// 91 functions, 0x0042c1c4..0x0042fccc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042c1c4  FUN_0042c1c4   (83 bytes)   [unnamed]
void __cdecl FUN_0042c1c4(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47c2f8);
  piVar1 = FUN_0042bfc4(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c860  FUN_0042c860   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042c860(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c4f4);
  *param_1 = &OWL::TMsgThread::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c95c  FUN_0042c95c   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_0042c95c(int *param_1)

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
// 0x0042c9b8  FUN_0042c9b8   (37 bytes)   [unnamed]
void __stdcall FUN_0042c9b8(void)

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
// 0x0042cabc  FUN_0042cabc   (25 bytes)   [unnamed]
void __cdecl FUN_0042cabc(undefined4 param_1,int param_2)

{
  FUN_0042d0b4(DAT_0047c5cc,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cad8  FUN_0042cad8   (25 bytes)   [unnamed]
void __cdecl FUN_0042cad8(undefined4 param_1,int param_2)

{
  FUN_0042d0cc(DAT_0047c5cc,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042caf4  FUN_0042caf4   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_0042caf4(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042d138(DAT_0047c5cc,param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cb10  FUN_0042cb10   (88 bytes)   [unnamed]
void __stdcall FUN_0042cb10(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47c5e0);
  piVar1 = DAT_0047c5cc;
  if ((DAT_0047c5cc == (int *)0x0) && (piVar1 = (int *)operator_new(), piVar1 != (int *)0x0)) {
    FUN_0042cf30(piVar1);
  }
  DAT_0047c5cc = piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cb8c  FUN_0042cb8c   (54 bytes)   [unnamed]
void __stdcall FUN_0042cb8c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c600);
  OWL::TStreamableTypes::_dtor(DAT_0047c5cc,3);
  DAT_0047c5cc = (int *)0x0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbc4  FUN_0042cbc4   (174 bytes)   [unnamed]
int __cdecl FUN_0042cbc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_0042cc74(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar2 = FUN_00467724(*(char **)(param_2 + 8),*(char **)(iVar1 + 8));
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
// 0x0042cc74  FUN_0042cc74   (155 bytes)   [unnamed]
void __cdecl FUN_0042cc74(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
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
// 0x0042cd10  FUN_0042cd10   (341 bytes)   [unnamed]
uint __cdecl FUN_0042cd10(int param_1,int param_2)

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
      iVar2 = FUN_00467724(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
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
      iVar2 = FUN_00467724(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
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
      iVar2 = FUN_00467724(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
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
// 0x0042ce68  FUN_0042ce68   (106 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042ce68(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c618);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = param_5;
  uVar1 = FUN_0042aea0(param_2);
  param_1[2] = uVar1;
  FUN_0042d944();
  if (param_5 != 0) {
    FUN_0042cabc(param_5,(int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cf30  FUN_0042cf30   (131 bytes)   [unnamed]
int * __cdecl FUN_0042cf30(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47c64c);
  iVar1 = operator_new();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_0042cc74(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d068  FUN_0042d068   (74 bytes)   [unnamed]
void __cdecl FUN_0042d068(int param_1,char param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c6c0);
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
// 0x0042d0b4  FUN_0042d0b4   (21 bytes)   [unnamed]
void __cdecl FUN_0042d0b4(int *param_1,undefined4 param_2,int param_3)

{
  FUN_0042cbc4(*param_1,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d0cc  FUN_0042d0cc   (105 bytes)   [unnamed]
void __cdecl FUN_0042d0cc(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_0042cd10(iVar1,param_3);
  if (uVar2 != 0xffffffff) {
    FUN_004675a4((undefined4 *)(uVar2 * 4 + *(int *)(iVar1 + 9)),
                 (undefined4 *)((uVar2 + 1) * 4 + *(int *)(iVar1 + 9)),
                 ((*(int *)(iVar1 + 1) - uVar2) + -1) * 4);
    *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + -1;
  }
  if (*(int *)(*param_1 + 1) == 0) {
    FUN_0042cb8c();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d138  FUN_0042d138   (1151 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0042d1ba) */
undefined4 __cdecl FUN_0042d138(int *param_1,undefined4 param_2,uint *param_3)

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
  
  __InitExceptBlockLDTC(0x47c744);
  local_68 = 8;
  FUN_0042ce68(local_14,param_3,0,0,0);
  local_5c = local_5c + 1;
  local_68 = 0x14;
  uVar1 = FUN_0042cd10(*param_1,(int)local_14);
  if (uVar1 != 0xffffffff) goto LAB_0042d58b;
  local_1c = &DAT_00485bd8;
  local_e0 = &DAT_00485bd8;
  local_5c = local_5c + 1;
  local_68 = 0x38;
  if (DAT_00485f20 - 0xeU < 0x80) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00402064;
    uVar5 = 0;
    local_68 = 0x50;
    local_7c = (uint *)FUN_004670cc(local_1d8,PTR_s_invalid_string_size_parameter_in_00488a54);
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
      if (local_94 != &DAT_00485bcc) {
        *local_94 = *local_94 + 1;
      }
    }
    local_68 = 0x50;
    local_3c[0] = &std::length_error::vftable;
    local_5c = local_5c + 2;
    if (local_44 != (int *)0x0) {
      if (local_44[-3] != -1) {
        local_b4 = local_44 + -3;
        if (local_b4 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_0042d420;
      }
      local_b8 = local_44 + -3;
      local_bc = local_44 + -3;
      operator_delete();
      local_c0 = 0;
      local_44 = (int *)0x0;
      local_c4 = local_4c;
    }
LAB_0042d420:
    local_68 = 0x44;
    FUN_00471ae8((uint *)&DAT_00402008,(undefined4*)local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_00461d70((int)local_24,0x80);
  }
  FUN_00459b6c((int)local_24,(uint *)"Attempt to stream unregistered type '");
  local_c8 = *(uint *)(local_1c + -4);
  pcVar2 = strlen(param_3);
  FUN_0045a224((int)local_24,local_c8,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  uVar7 = *(uint *)(local_1c + -4);
  pcVar2 = strlen((uint *)("Attempt to stream unregistered type '" + 0x24));
  FUN_0045a224((int)local_24,uVar7,0,0x47c5ca,(uint)pcVar2,0,(uint)pcVar2);
  local_68 = 0x80;
  piVar3 = FUN_00422bc0(local_54,(int)local_24);
  local_5c = local_5c + 2;
  (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + -2;
  OWL::TXBase::_dtor(local_54,2);
  local_5c = local_5c + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0042d57f;
    }
    local_cc = local_1c + -0xc;
    local_d0 = local_1c + -0xc;
    operator_delete();
    local_d4 = 0;
    local_1c = (undefined *)0x0;
    local_d8 = local_24;
  }
LAB_0042d57f:
  local_68 = 0x14;
LAB_0042d58b:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  local_5c = local_5c + -1;
  OWL::TStreamableClass::_dtor((int)local_14,2);
  *in_FS_OFFSET = local_78;
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5b8  FUN_0042d5b8   (51 bytes)   [unnamed]
void __cdecl FUN_0042d5b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_0042d5ec(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d5ec  FUN_0042d5ec   (155 bytes)   [unnamed]
void __cdecl FUN_0042d5ec(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
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
// 0x0042d688  FUN_0042d688   (30 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d688(int *param_1,uint param_2)

{
  if (param_2 < *(uint *)(*param_1 + 1)) {
    return *(undefined4 *)(*(int *)(*param_1 + 9) + param_2 * 4);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d6a8  FUN_0042d6a8   (155 bytes)   [unnamed]
void __cdecl FUN_0042d6a8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
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
// 0x0042d744  FUN_0042d744   (42 bytes)   [unnamed]
void __cdecl FUN_0042d744(int *param_1,int param_2)

{
  uint local_c;
  int local_8;
  
  *param_1 = *param_1 + 1;
  local_8 = *param_1;
  local_c = param_2 + 1;
  FUN_0042d770(param_1[1],&local_c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d770  FUN_0042d770   (6 bytes)   [unnamed]
int __stdcall FUN_0042d770(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  __InitExceptBlockLDTC(0x47c7ec);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_0042d6a8(param_1,*(int *)(param_1 + 1) + 1);
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
    puVar2 = (uint *)FUN_00420a1c(param_1 + 0x11,*(uint *)(param_1 + 0x22));
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
// 0x0042d776  FUN_0042d776   (214 bytes)   [unnamed]
int __stdcall FUN_0042d776(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x47c7ec);
  if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
    FUN_0042d6a8(iVar2,*(int *)(iVar2 + 1) + 1);
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
    iVar3 = FUN_00420a1c(iVar2 + 0x11,*(uint *)(iVar2 + 0x22));
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
// 0x0042d878  FUN_0042d878   (65 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d878(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c [2];
  
  local_c[0] = param_2 + 1;
  local_c[1] = 0;
  uVar1 = FUN_0042d8bc(*(int *)(param_1 + 4),local_c);
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 9) + uVar1 * 4) + 4);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d8bc  FUN_0042d8bc   (135 bytes)   [unnamed]
uint __cdecl FUN_0042d8bc(int param_1,uint *param_2)

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
// 0x0042d944  FUN_0042d944   (6 bytes)   [unnamed]
void __stdcall FUN_0042d944(void)

{
  FUN_0042cb10();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d94c  FUN_0042d94c   (83 bytes)   [unnamed]
uint __cdecl FUN_0042d94c(int *param_1)

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
// 0x0042d9a0  FUN_0042d9a0   (75 bytes)   [unnamed]
void __cdecl FUN_0042d9a0(int *param_1,undefined4 param_2,int param_3)

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
// 0x0042d9ec  FUN_0042d9ec   (173 bytes)   [unnamed]
void __cdecl FUN_0042d9ec(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 *local_c [2];
  
  __InitExceptBlockLDTC(0x47c82c);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_0042b3f0((int *)local_c,param_3);
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
// 0x0042da9c  FUN_0042da9c   (36 bytes)   [unnamed]
uint __cdecl FUN_0042da9c(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_0042db04(param_1);
    return uVar1;
  }
  uVar1 = FUN_0042dac0(param_1);
  return uVar1 & 0xffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dac0  FUN_0042dac0   (67 bytes)   [unnamed]
uint __cdecl FUN_0042dac0(int *param_1)

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
// 0x0042db04  FUN_0042db04   (66 bytes)   [unnamed]
undefined4 __cdecl FUN_0042db04(int *param_1)

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
// 0x0042db48  FUN_0042db48   (50 bytes)   [unnamed]
uint __cdecl FUN_0042db48(int *param_1)

{
  uint uVar1;
  
  if ((uint)param_1[3] < 0x101) {
    uVar1 = FUN_0042d94c(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_0042db04(param_1);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db7c  FUN_0042db7c   (72 bytes)   [unnamed]
int __cdecl FUN_0042db7c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_0042db48(param_1);
    if ((uVar1 == 0xffffffff) || (param_3 - 1U < uVar1)) {
      param_2 = 0;
    }
    else {
      FUN_0042d9a0(param_1,param_2,uVar1);
      *(undefined1 *)(param_2 + uVar1) = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dbc4  FUN_0042dbc4   (73 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042dbc4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar2 = FUN_0042db48(param_1);
    if (uVar2 == 0xffffffff) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)operator_new_array();
      FUN_0042d9ec(param_1,puVar1,uVar2);
      *(undefined1 *)((int)puVar1 + uVar2) = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc10  FUN_0042dc10   (129 bytes)   [unnamed]
int __cdecl FUN_0042dc10(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char local_84 [128];
  
  uVar1 = FUN_0042d94c(param_1);
  if ((char)uVar1 == '[') {
    local_84[0] = '\0';
    FUN_0042db7c(param_1,(int)local_84,0x80);
    if (local_84[0] == '\0') {
      *(undefined4 *)(*param_1 + 8) = 4;
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0042caf4(param_2,(uint *)local_84);
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
// 0x0042dc94  FUN_0042dc94   (129 bytes)   [unnamed]
void __cdecl FUN_0042dc94(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47c86c);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_0042d5b8(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_0042db04(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  operator_delete();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd80  FUN_0042dd80   (47 bytes)   [unnamed]
void __cdecl FUN_0042dd80(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_0042d94c(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ddb0  FUN_0042ddb0   (135 bytes)   [unnamed]
int __cdecl FUN_0042ddb0(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar3 = FUN_0042d94c(param_1);
    cVar1 = (char)uVar3;
    if (cVar1 == '\0') {
      *param_2 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = FUN_0042da9c(param_1);
      iVar2 = FUN_0042d688(param_1 + 2,uVar3);
      *param_2 = iVar2;
    }
    else if (cVar1 == '\x02') {
      puVar4 = (undefined4 *)FUN_0042dc10(param_1,param_3);
      FUN_0042dc94(param_1,puVar4,param_2);
      FUN_0042dd80(param_1);
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
// 0x0042de38  FUN_0042de38   (91 bytes)   [unnamed]
void __cdecl FUN_0042de38(int *param_1,byte param_2)

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
// 0x0042de94  FUN_0042de94   (75 bytes)   [unnamed]
void __cdecl FUN_0042de94(int *param_1,undefined4 param_2,int param_3)

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
// 0x0042dee0  FUN_0042dee0   (57 bytes)   [unnamed]
void __cdecl FUN_0042dee0(int *param_1)

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
// 0x0042df1c  FUN_0042df1c   (57 bytes)   [unnamed]
void __cdecl FUN_0042df1c(int *param_1)

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
// 0x0042df58  FUN_0042df58   (107 bytes)   [unnamed]
void __cdecl FUN_0042df58(int *param_1,undefined4 *param_2,uint param_3)

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
// 0x0042dfc4  FUN_0042dfc4   (72 bytes)   [unnamed]
void __cdecl FUN_0042dfc4(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0042df1c(param_1);
    }
    else {
      pcVar1 = strlen(param_2);
      FUN_0042df1c(param_1);
      FUN_0042de94(param_1,param_2,(int)pcVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e00c  FUN_0042e00c   (72 bytes)   [unnamed]
void __cdecl FUN_0042e00c(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_0042df1c(param_1);
    }
    else {
      pcVar1 = strlen(param_2);
      FUN_0042df1c(param_1);
      FUN_0042df58(param_1,param_2,(uint)pcVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e054  FUN_0042e054   (57 bytes)   [unnamed]
void __cdecl FUN_0042e054(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042e108(param_1,param_2);
    FUN_0042e154(param_1,param_2,param_4);
    FUN_0042de38(param_1,0x5d);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e090  FUN_0042e090   (117 bytes)   [unnamed]
void __cdecl FUN_0042e090(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_0042de38(param_1,0);
    }
    else {
      iVar1 = FUN_0042d878(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_0042de38(param_1,2);
        FUN_0042e054(param_1,param_2,1,param_3);
      }
      else {
        FUN_0042de38(param_1,1);
        FUN_0042df1c(param_1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e108  FUN_0042e108   (76 bytes)   [unnamed]
void __cdecl FUN_0042e108(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042de38(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_00468310((int)param_2,iVar3,0x403c1c);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    FUN_0042dfc4(param_1,puVar2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e154  FUN_0042e154   (183 bytes)   [unnamed]
void __cdecl FUN_0042e154(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47c8b8);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042d744((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_00468310((int)param_2,iVar4,0x403c1c);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    puVar1 = (undefined4 *)FUN_0042caf4(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_0042df1c(param_1);
    (**(code **)(*piVar3 + 8))();
    operator_delete();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e358  FUN_0042e358   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e358(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e388  FUN_0042e388   (97 bytes)   [unnamed]
void __cdecl FUN_0042e388(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c8e4);
  if (param_1 != 0) {
    FUN_0042d068(param_1,'\x01');
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
// 0x0042e4dc  FUN_0042e4dc   (111 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e4dc(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c914);
  if (param_1 != 0) {
    FUN_0042d068(param_1,'\x01');
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
// 0x0042e62c  FUN_0042e62c   (80 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e62c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c934);
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
// 0x0042e728  FUN_0042e728   (92 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e728(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c958);
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
// 0x0042e7e8  FUN_0042e7e8   (45 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042e7e8(int param_1,byte param_2)

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
// 0x0042e818  FUN_0042e818   (22 bytes)   [unnamed]
FARPROC __stdcall FUN_0042e818(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("USER32");
  pFVar1 = GetProcAddress(hModule,"DefWindowProcA");
  return pFVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e82e  FUN_0042e82e   (60 bytes)   [unnamed]
void __stdcall FUN_0042e82e(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c97d);
  if (DAT_0047c97c != '\0') {
    HeapDestroy(DAT_0048c8bc);
    DAT_0047c97c = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e86c  FUN_0042e86c   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_0042e86c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042e874();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e874  FUN_0042e874   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0042e874(void)

{
  return &DAT_0047c978;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e87c  FUN_0042e87c   (15 bytes)   [unnamed]
void __cdecl FUN_0042e87c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042e874();
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e88c  FUN_0042e88c   (104 bytes)   [unnamed]
void __stdcall FUN_0042e88c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LONG dwNewLong;
  code *pcVar2;
  
  iVar1 = FUN_0042e86c();
  if (iVar1 == 0) {
    DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_0042e87c(0);
    *(HWND *)(iVar1 + 0xc) = param_1;
    dwNewLong = FUN_0042e818();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_00437d74(iVar1);
    pcVar2 = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*pcVar2)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e8f4  FUN_0042e8f4   (198 bytes)   [unnamed]
undefined1 * __cdecl FUN_0042e8f4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47c9c8);
  puVar1 = FUN_0042e9bc();
  puVar2 = HeapAlloc((HANDLE)*puVar1,0,10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = local_10;
    piVar3 = FUN_004237c0(puVar1);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,puVar1,piVar3);
    OWL::TXOwl::_dtor(local_10,0);
  }
  else {
    *puVar2 = 0xb8;
    puVar2[5] = 0xe9;
    *(undefined4 *)(puVar2 + 1) = param_1;
    *(int *)(puVar2 + 6) = 0x42ea9a - (int)puVar2;
  }
  *in_FS_OFFSET = local_38;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e9bc  FUN_0042e9bc   (151 bytes)   [unnamed]
undefined4 * __stdcall FUN_0042e9bc(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47ca14);
  if (DAT_0047c97c == '\0') {
    DAT_0048c8bc = HeapCreate(0x40000,0x8000,0);
    if (DAT_0048c8bc == (HANDLE)0x0) {
      piVar1 = FUN_004237c0(local_10);
      (**(code **)(*piVar1 + 0xc))();
      OWL::TXOwl::_dtor(local_10,0);
    }
    DAT_0047c97c = DAT_0047c97c + '\x01';
  }
  *in_FS_OFFSET = local_34;
  return (undefined4*)&DAT_0048c8bc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ea74  FUN_0042ea74   (5 bytes)   [unnamed]
void __stdcall FUN_0042ea74(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ea7c  FUN_0042ea7c   (40 bytes)   [unnamed]
void __cdecl FUN_0042ea7c(int param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  
  lpMem = *(LPVOID *)(param_1 + 0x68);
  if (lpMem != (LPVOID)0x0) {
    puVar1 = FUN_0042e9bc();
    HeapFree((HANDLE)*puVar1,0,lpMem);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eaa4  FUN_0042eaa4   (25 bytes)   [unnamed]
void FUN_0042eaa4(int param_1)

{
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  
  FUN_00436db0(param_1,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eb68  FUN_0042eb68   (35 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0042eb68(LPVOID param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = FUN_0042e9bc();
    HeapFree((HANDLE)*puVar1,0,param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eb8c  FUN_0042eb8c   (106 bytes)   [unnamed]
int * __cdecl FUN_0042eb8c(int *param_1,HWND param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ca50);
  FUN_00421c70(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
  *(HWND *)((int)param_1 + 0x61) = param_2;
  pHVar1 = BeginPaint(param_2,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_00427974(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ecec  FUN_0042ecec   (82 bytes)   [unnamed]
uint * __cdecl FUN_0042ecec(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cb04);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00428078(*param_1,4);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ed5c  FUN_0042ed5c   (71 bytes)   [unnamed]
uint * __cdecl FUN_0042ed5c(uint *param_1,int param_2,BYTE param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cb28);
  FUN_00428420(param_1);
  FUN_0042eda4(param_1,*(int *)(param_2 + 9),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042eda4  FUN_0042eda4   (197 bytes)   [unnamed]
void __cdecl FUN_0042eda4(uint *param_1,int param_2,BYTE param_3)

{
  ushort uVar1;
  int iVar2;
  LOGPALETTE *plpal;
  HPALETTE pHVar3;
  ushort uVar4;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    iVar2 = FUN_004202d8(*(short *)(param_2 + 0xe));
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
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f30c  FUN_0042f30c   (338 bytes)   [unnamed]
int * __cdecl FUN_0042f30c(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  CHAR local_12c [260];
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x47cb9c);
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
  FUN_00435c28(param_1,1,param_3,(uint *)0x0,0);
  local_c = local_c + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
  param_1[2] = (int)&OWL::TPickListPopup::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0047cc4c;
  *(undefined ***)param_1[1] = &PTR_LAB_0047cc58;
  FUN_0042bf5c((undefined4 *)((int)param_1 + 0x86),1);
  local_c = local_c + 2;
  *(undefined4 *)((int)param_1 + 0x8f) = 0;
  if (param_4 != 0) {
    iVar1 = FUN_0044f0b4(param_1[0x1b] + 4,param_4,local_12c,0x104);
    if (iVar1 != 0) {
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),1,0,local_12c);
      AppendMenuA(*(HMENU *)((int)param_1 + 0x8a),0x800,0xffffffff,(LPCSTR)0x0);
      goto LAB_0042f44c;
    }
  }
  *in_FS_OFFSET = local_28;
LAB_0042f44c:
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f460  FUN_0042f460   (58 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f460(int param_1,LPCSTR param_2)

{
  UINT_PTR uIDNewItem;
  
  uIDNewItem = *(UINT_PTR *)(param_1 + 0x8f);
  *(int *)(param_1 + 0x8f) = *(int *)(param_1 + 0x8f) + 1;
  AppendMenuA(*(HMENU *)(param_1 + 0x8a),0,uIDNewItem,param_2);
  return *(undefined4 *)(param_1 + 0x8f);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f7fc  FUN_0042f7fc   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f7fc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042f80c(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f80c  FUN_0042f80c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f80c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f818  FUN_0042f818   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f818(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f824  FUN_0042f824   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0042f824(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return *(undefined2 *)(iVar1 + 6);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f83c  FUN_0042f83c   (20 bytes)   [unnamed]
int __cdecl FUN_0042f83c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return iVar1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f850  FUN_0042f850   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0042f850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return *(undefined2 *)(iVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f868  FUN_0042f868   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0042f868(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f7fc(param_1);
  return *(undefined2 *)(iVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f944  FUN_0042f944   (81 bytes)   [unnamed]
undefined * __cdecl FUN_0042f944(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_00467724((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_0042aa90(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_0047ccb0;
      }
    }
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f998  FUN_0042f998   (82 bytes)   [unnamed]
int * __cdecl FUN_0042f998(int *param_1)

{
  HRGN pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cce0);
  FUN_0042790c(param_1);
  pHVar1 = CreateRectRgn(0,0,0,0);
  *param_1 = (int)pHVar1;
  FUN_00427974(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042facc  FUN_0042facc   (86 bytes)   [unnamed]
void __stdcall FUN_0042facc(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cd16);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004302e4;
  puVar1 = FUN_00468310(1,0,0x403c70);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c8c0,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fb22  FUN_0042fb22   (48 bytes)   [unnamed]
void __stdcall FUN_0042fb22(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cd2a);
  OWL::TStreamableClass::_dtor(0x48c8c0,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fb54  FUN_0042fb54   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042fb54(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cd34);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_00403c70,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fbbc  FUN_0042fbbc   (192 bytes)   [unnamed]
int * __cdecl FUN_0042fbbc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cd4c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x8a;
    param_1[1] = (int)param_1 + 0x8e;
    *(undefined4 *)((int)param_1 + 0x86) = 0;
    *(undefined ***)((int)param_1 + 0x8a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x8e) = &OWL::TStreamableBase::vftable;
  }
  param_1[2] = (int)&OWL::TWindow::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0047ce48;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ce54;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fc7c  FUN_0042fc7c   (78 bytes)   [unnamed]
int * __cdecl FUN_0042fc7c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0042ddb0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_00468488((int)local_8,iVar1,(int *)&DAT_00403c1c,(int *)&DAT_00403c70,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fccc  FUN_0042fccc   (38 bytes)   [unnamed]
int * __cdecl FUN_0042fccc(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_0042e090(param_1,piVar1,1);
  return param_1;
}

} // namespace tea

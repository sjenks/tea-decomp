// TEA.exe — application module "DefinitionViewWindows"
// 42 functions, 0x0046a3c4..0x004723b0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0046a3c4  DefinitionViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: DefinitionViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl DefinitionViewWindows::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&DefinitionViewWindows::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PropertiesViewWindows::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a40c  FUN_0046a40c   (625 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046a58b) */
/* WARNING: Removing unreachable block (ram,0x0046a5d3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x0046a5db */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_0046a40c(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fd7c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x8c);
    param_1[0x8c] = (int)(param_1 + 0x89);
    param_1[0x8d] = (int)(param_1 + 0x8a);
    param_1[1] = (int)(param_1 + 0x89);
    param_1[2] = (int)(param_1 + 0x8a);
    param_1[0x88] = 0;
    param_1[0x8b] = 0;
    param_1[0x89] = (int)&OWL::TEventHandler::vftable;
    param_1[0x8a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x8c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c0;
  FUN_00413cf4(param_1,1,0x4fd385,0,param_3,(uint *)0x3110,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c0;
  param_1[3] = (int)&DefinitionViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004ff124;
  *(undefined ***)param_1[2] = &PTR_LAB_004ff130;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff13c;
  param_1[0x18] = param_4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1a] = 0x40;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 8;
  param_1[0x2c] = -1;
  param_1[0x2d] = 0;
  FUN_004c7a28(param_1 + 0x2e,0,*param_1,0x3638,0,0);
  FUN_004cb7d0((int *)((int)param_1 + 0x166),0,*param_1,0x3624,0);
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((int)param_1 + 0x219) = 0;
  FUN_00415920(param_1,0x3282);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a6a4  DefinitionViewWindows::~DefinitionViewWindows   (555 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as DefinitionViewWindows::_dtor
void __cdecl DefinitionViewWindows::_dtor(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4fd82c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DefinitionViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004ff124;
    *(undefined ***)param_1[2] = &PTR_LAB_004ff130;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff13c;
    OWL::TImageList::_dtor(param_1[0x2d],3);
    if (param_1[0x85] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x85] + 0xc))();
    }
    OWL::TTreeWindow::_dtor((int *)((int)param_1 + 0x166),2);
    piVar1 = param_1 + 0x2e;
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x38,0);
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x36,0);
    FUN_0040b62c(param_1 + 0x24,param_1[0x25],param_1[0x26]);
    operator_delete();
    FUN_0040b4f0(param_1 + 0x1a,param_1[0x1b],param_1[0x1c]);
    operator_delete();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c0;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x8c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x8a,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a8f4  DefinitionViewWindows::CeShared_46a8f4   (45 bytes)   [owl:response-table message-handler]
//   one handler for 5 table entries: &Edit > &Copy	Ctrl+C; &Go To > &Back	Alt+Left Arrow; &Go To > &Forward	Alt+Right Arrow; &Go To > &Previous Result	Alt+Up Arrow; &Go To > &Next Result	Alt+Down Arrow
//   also: DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]; DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]; DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]; DefinitionViewWindows::CeShared_46a8f4 [owl:response-table]
void __cdecl DefinitionViewWindows::CeShared_46a8f4(int *param_1,undefined4 *param_2)

{
  FUN_0046b0fc(param_1,param_2[1]);
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046a924  DefinitionViewWindows::CmShared_46a924   (1924 bytes)   [owl:response-table message-handler]
//   one handler for 20 table entries: &Edit > &Copy	Ctrl+C; &Edit > &Select All	Ctrl+A; &Edit > &Lookup...	Ctrl+Enter; &Edit > Lookup in &New Window...	Shift+Ctrl+Enter; &Go To > &Back	Alt+Left Arrow; &Go To > &Forward	Alt+Right Arrow; &Go To > &Previous Result	Alt+Up Arrow; &Go To > &Next Result	Alt+Down Arrow; &Go To > &Previous Definition	Shift+Ctrl+Tab; &Go To > &Next Definition	Ctrl+Tab; id 12670; id 12671; …
//   also: DefinitionViewWindows::CmShared_46a924 [owl:response-table]; DefinitionViewWindows::CmShared_46a924 [owl:response-table]; DefinitionViewWindows::CmShared_46a924 [owl:response-table]; DefinitionViewWindows::CmShared_46a924 [owl:response-table]
void __cdecl DefinitionViewWindows::CmShared_46a924(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  undefined4 local_208;
  undefined4 local_1e4;
  int local_1e0;
  undefined4 local_1b4 [12];
  undefined4 local_184;
  int local_180;
  undefined4 local_154 [12];
  undefined4 local_124 [12];
  byte local_f4 [4];
  int local_f0;
  int *local_cc;
  byte local_c4 [4];
  int local_c0;
  int *local_9c;
  undefined4 local_94;
  int local_90;
  undefined4 local_64;
  int local_60;
  int *local_3c;
  undefined4 local_34;
  int local_30;
  
  __InitExceptBlockLDTC(0x4fd954);
  uVar3 = FUN_0046b0fc(param_1,param_2);
  if (uVar3 == 0) goto LAB_0046b094;
  iVar4 = param_1[0x22];
  if ((param_2 < 0x317e) || (0x3187 < param_2)) {
    if (param_2 == 0x3174) {
      iVar4 = param_1[0x22] + 1;
    }
    else if (param_2 == 0x316a) {
      iVar4 = param_1[0x22] + -1;
    }
  }
  else {
    iVar4 = FUN_00472370((int)param_1);
    iVar4 = iVar4 + (param_2 - 0x317e);
  }
  if (iVar4 != param_1[0x22]) {
    param_1[0x22] = iVar4;
    iVar4 = param_1[0x26];
    iVar1 = param_1[0x25];
    iVar5 = FUN_0040b5a8(iVar4,iVar4,iVar1);
    iVar2 = param_1[0x26];
    iVar4 = iVar4 - iVar1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    param_1[0x26] = param_1[0x26] + (iVar4 >> 7) * -0x80;
    FUN_0040b62c(param_1 + 0x24,iVar5,iVar2);
    FUN_00466e98(param_1[0xe],param_1[0x1b] + (param_1[0x22] + -1) * 0x10,(int)(param_1 + 0x24));
    FUN_0046e740(param_1,0,0);
    FUN_0046ccac((int)param_1);
    goto LAB_0046b094;
  }
  if ((int)param_2 < 0x31c5) {
    if (param_2 != 0x31c4) {
      if (param_2 == 0x1d4c) {
        FUN_004a76a8(*(int *)param_1[0x85],0x301,0,0);
        goto LAB_0046b094;
      }
      if (param_2 == 0x1d56) {
        (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
        goto LAB_0046b094;
      }
      if (param_2 != 0x31ba) goto LAB_0046b078;
    }
    if (param_2 == 0x31ba) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    FUN_00467044(param_1[0xe],*(int *)(*param_1 + 0x14),iVar4,0);
  }
  else {
    if ((param_2 == 0x3642) || (param_2 == 0x364c)) {
      iVar4 = (int)param_1 + 0x166;
      FUN_004cb6ec(&local_34,iVar4);
      FUN_004cb3b4(&local_64,iVar4,0xffff0000);
      FUN_004cb3b4(&local_94,iVar4,0xffff0000);
      iVar4 = local_60;
      if (local_60 == -0x10000) {
        iVar4 = 0;
      }
      uVar6 = FUN_004a76a8(*local_3c,0x110a,4,iVar4);
      FUN_004cb3b4((undefined4 *)local_c4,local_3c,uVar6);
      while (iVar4 = FUN_004cbb48(local_c4), iVar4 != 0) {
        if ((local_90 == local_30) && (param_2 == 0x3642)) {
          FUN_004cb40c(&local_64,(undefined4 *)local_c4);
        }
        else if ((local_c0 == local_30) && (param_2 == 0x364c)) {
          FUN_004cb40c(&local_64,&local_94);
        }
        FUN_004cb40c(&local_94,(undefined4 *)local_c4);
        iVar4 = local_c0;
        if (local_c0 == -0x10000) {
          iVar4 = 0;
        }
        uVar6 = FUN_004a76a8(*local_9c,0x110a,4,iVar4);
        FUN_004cb3b4((undefined4 *)local_f4,local_9c,uVar6);
        while (iVar4 = FUN_004cbb48(local_f4), iVar4 != 0) {
          if ((local_90 == local_30) && (param_2 == 0x3642)) {
            FUN_004cb40c(&local_64,(undefined4 *)local_f4);
          }
          else if ((local_f0 == local_30) && (param_2 == 0x364c)) {
            FUN_004cb40c(&local_64,&local_94);
          }
          FUN_004cb40c(&local_94,(undefined4 *)local_f4);
          iVar4 = local_f0;
          if (local_f0 == -0x10000) {
            iVar4 = 0;
          }
          uVar6 = FUN_004a76a8(*local_cc,0x110a,1,iVar4);
          FUN_004cb3b4(local_124,local_cc,uVar6);
          FUN_004cb40c((undefined4 *)local_f4,local_124);
          operator_delete_array();
        }
        iVar4 = local_c0;
        if (local_c0 == -0x10000) {
          iVar4 = 0;
        }
        uVar6 = FUN_004a76a8(*local_9c,0x110a,1,iVar4);
        FUN_004cb3b4(local_154,local_9c,uVar6);
        FUN_004cb40c((undefined4 *)local_c4,local_154);
        operator_delete_array();
        operator_delete_array();
      }
      FUN_004cb3b4(&local_184,(int)param_1 + 0x166,0xffff0000);
      cVar7 = local_180 == local_60;
      operator_delete_array();
      if (cVar7 != '\0') {
        if (param_2 == 0x3642) {
          iVar4 = local_60;
          if (local_60 == -0x10000) {
            iVar4 = 0;
          }
          uVar6 = FUN_004a76a8(*local_3c,0x110a,4,iVar4);
          FUN_004cb3b4(local_1b4,local_3c,uVar6);
          FUN_004cb40c(&local_64,local_1b4);
          operator_delete_array();
        }
        else {
          FUN_004cb40c(&local_64,&local_94);
        }
      }
      FUN_004cb3b4(&local_1e4,(int)param_1 + 0x166,0xffff0000);
      cVar7 = local_1e0 != local_60;
      operator_delete_array();
      if (cVar7 != '\0') {
        FUN_004a76a8(*local_3c,0x110b,9,local_60);
      }
      operator_delete_array();
      operator_delete_array();
      operator_delete_array();
      operator_delete_array();
      goto LAB_0046b094;
    }
LAB_0046b078:
    if ((param_2 < 0x317e) || (0x3187 < param_2)) {
      FUN_0046d004(param_1,param_2,0);
    }
  }
LAB_0046b094:
  *in_FS_OFFSET = local_208;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b0fc  FUN_0046b0fc   (495 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint __cdecl FUN_0046b0fc(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_88 [17];
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_c;
  
  __InitExceptBlockLDTC(0x4fda74);
  FUN_00485614(local_88,(int *)param_1[0x85],'\x01',0xf800003f);
  uVar3 = 1;
  if ((int)param_2 < 0x31bb) {
    if (param_2 == 0x31ba) {
LAB_0046b1b0:
      if (param_2 == 0x31ba) {
        iVar1 = 1;
      }
      else {
        iVar1 = -1;
      }
      uVar3 = FUN_00467044(param_1[0xe],*(int *)(*param_1 + 0x14),iVar1,1);
      goto LAB_0046b2d8;
    }
    if (param_2 == 0x1d4c) {
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x34))();
      uVar3 = (uint)(local_3c < local_40);
      goto LAB_0046b2d8;
    }
    if (param_2 == 0x316a) {
      uVar3 = (uint)(1 < (uint)param_1[0x22]);
      goto LAB_0046b2d8;
    }
    if (param_2 == 0x3174) {
      iVar1 = param_1[0x1c] - param_1[0x1b];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      uVar3 = (uint)((uint)param_1[0x22] < (uint)(iVar1 >> 4));
      goto LAB_0046b2d8;
    }
  }
  else {
    if (param_2 == 0x31c4) goto LAB_0046b1b0;
    if ((param_2 == 0x3642) || (param_2 == 0x364c)) goto LAB_0046b2d8;
  }
  if ((param_2 != 0x1d56) && ((param_2 < 0x317e || (0x3187 < param_2)))) {
    local_28 = 8;
    (**(code **)(param_1[3] + 0xb0))();
    uVar3 = (uint)(*(int *)(local_c + -4) != 0);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar2 = (int *)(local_c + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar1 = *piVar2 + 1;
        }
        if (iVar1 != 0) goto LAB_0046b2d8;
      }
      local_44 = local_c + -0xc;
      operator_delete();
    }
  }
LAB_0046b2d8:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046b2ec  FUN_0046b2ec   (2005 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0046b2ec(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  UINT uFlags;
  int iVar4;
  uint uVar5;
  UINT *pUVar6;
  UINT *pUVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  UINT local_ec;
  uint auStack_e8 [5];
  undefined1 *local_d4;
  undefined4 local_d0;
  LPCSTR local_cc;
  LPCSTR local_c8;
  int *local_c4;
  UINT local_c0;
  UINT_PTR local_bc;
  LPCSTR local_b8;
  uint local_b4;
  uint *local_b0;
  uint local_a4 [3];
  uint local_98;
  HMENU local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int *local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_3c [3];
  undefined1 local_30 [8];
  LPCSTR local_28;
  undefined4 local_20;
  HMENU local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x4fdb50);
  local_94 = GetSubMenu(*(HMENU *)(param_2 + 4),0);
  if (local_94 != (HMENU)0x0) {
    local_80 = 8;
    FUN_00497f68(&local_20,local_94,0);
    local_74 = local_74 + 2;
    local_80 = 0x14;
    local_98 = FUN_00472370(param_1);
    uVar5 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      if (((uint)(iVar4 >> 4) < local_98) || (9 < uVar5)) break;
      FUN_004e0344((undefined1 *)local_a4,&DAT_004fd390 /* "%d " */);
      local_80 = 0x2c;
      std::string::string_from_cstr((int)local_30,local_a4);
      local_74 = local_74 + 1;
      local_80 = 0x20;
      local_b0 = *(uint **)(*(int *)(param_1 + 0x6c) + 8 + (local_98 - 1) * 0x10);
      local_b4 = *(uint *)(local_28 + -4);
      pcVar1 = strlen(local_b0);
      FUN_004cfad4((int)local_30,local_b4,0,(uint)local_b0,(uint)pcVar1,0,(uint)pcVar1);
      std::string::replace_fill((int)local_30,(uint)(uVar5 == 9),0,1,0x26);
      local_c0 = 0;
      if (*(uint *)(param_1 + 0x88) == local_98) {
        local_c0 = 8;
      }
      local_b8 = local_28;
      local_bc = uVar5 + 0x317e;
      AppendMenuA(local_1c,local_c0,local_bc,local_28);
      local_74 = local_74 + -1;
      if (local_28 != (LPCSTR)0x0) {
        if (*(int *)(local_28 + -0xc) != -1) {
          local_c4 = (int *)(local_28 + -0xc);
          if (local_c4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_c4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_c4 = *local_c4 + -1;
            iVar4 = *local_c4 + 1;
          }
          if (iVar4 != 0) goto LAB_0046b510;
        }
        local_c8 = local_28 + -0xc;
        local_cc = local_28 + -0xc;
        operator_delete();
        local_d0 = 0;
        local_d4 = local_30;
        local_28 = (LPCSTR)0x0;
      }
LAB_0046b510:
      local_80 = 0x14;
      local_98 = local_98 + 1;
      uVar5 = uVar5 + 1;
    }
    local_74 = local_74 + -2;
    OWL::TMenu::_dtor(&local_20,0);
    local_80 = 0;
  }
  local_94 = GetSubMenu(*(HMENU *)(param_2 + 4),4);
  if (local_94 != (HMENU)0x0) {
    local_80 = 0x44;
    FUN_00497f68(local_3c,local_94,0);
    puVar9 = local_3c;
    local_74 = local_74 + 2;
    local_80 = 0x50;
    iVar4 = 1;
    piVar2 = (int *)FUN_00422fc4(*(int *)(param_1 + 0x38));
    FUN_00423e14(piVar2,(int)puVar9,iVar4);
    local_74 = local_74 + -2;
    OWL::TMenu::_dtor(local_3c,0);
  }
  pUVar6 = &DAT_004fd35c;
  pUVar7 = &local_ec;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pUVar7 = *pUVar6;
    pUVar6 = pUVar6 + (uint)bVar8 * -2 + 1;
    pUVar7 = pUVar7 + (uint)bVar8 * -2 + 1;
  }
  local_80 = 0x68;
  (**(code **)(*(int *)(param_1 + 0xc) + 0xb0))();
  local_74 = local_74 + 1;
  if (*(int *)(local_c + -4) != 0) {
    puVar11 = local_14;
    uVar5 = 2;
    local_80 = 0x74;
    iVar4 = std::string::string_from_cstr((int)local_4c,(uint *)&DAT_004fd3d1 /* " """ */);
    local_74 = local_74 + 1;
    iVar4 = FUN_004d5a8c(iVar4,uVar5,(int)puVar11);
    FUN_004cf384((int)local_14,iVar4);
    local_74 = local_74 + -1;
    if (local_44 != 0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        piVar2 = (int *)(local_44 + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2 + 1;
        }
        if (iVar4 != 0) goto LAB_0046b700;
      }
      operator_delete();
      local_44 = 0;
    }
  }
LAB_0046b700:
  uVar5 = 0;
  do {
    local_80 = 0x98;
    puVar11 = local_14;
    uVar10 = auStack_e8[uVar5 * 3];
    iVar4 = std::string::string_from_cstr((int)local_6c,(uint *)auStack_e8[uVar5 * 3 + 1]);
    local_74 = local_74 + 1;
    iVar3 = FUN_004d5a8c(iVar4,uVar10,(int)puVar11);
    local_54 = (int *)0x0;
    iVar4 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar10 = *(uint *)(*(int *)(iVar3 + 8) + -4);
      local_54 = std::string::__getRep(local_5c,uVar10,uVar10);
      local_54 = local_54 + 3;
      memcpy(local_54,*(undefined4 **)(iVar3 + 8),uVar10);
    }
    else {
      local_54 = *(int **)(iVar3 + 8);
      piVar2 = *(int **)(iVar3 + 8) + -3;
      if (piVar2 != &DAT_00513d58) {
        *piVar2 = *piVar2 + 1;
      }
    }
    if (local_64 != 0) {
      if (*(int *)(local_64 + -0xc) != -1) {
        piVar2 = (int *)(local_64 + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2 + 1;
        }
        if (iVar4 != 0) goto LAB_0046b8d1;
      }
      operator_delete();
      local_64 = 0;
    }
LAB_0046b8d1:
    local_80 = 0x8c;
    uFlags = GetMenuState(*(HMENU *)(param_2 + 4),(&local_ec)[uVar5 * 3],0);
    ModifyMenuA(*(HMENU *)(param_2 + 4),(&local_ec)[uVar5 * 3],uFlags,(&local_ec)[uVar5 * 3],
                (LPCSTR)local_54);
    local_74 = local_74 + -1;
    if (local_54 != (int *)0x0) {
      if (local_54[-3] != -1) {
        piVar2 = local_54 + -3;
        if (piVar2 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar4 = *piVar2 + 1;
        }
        if (iVar4 != 0) goto LAB_0046b9ed;
      }
      operator_delete();
      local_54 = (int *)0x0;
    }
LAB_0046b9ed:
    local_80 = 0x5c;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  local_74 = local_74 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0046baac;
    }
    operator_delete();
  }
LAB_0046baac:
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bac4  DefinitionViewWindows::vf11   (429 bytes)   [rtti:vtable virtual slot 11]
void __cdecl DefinitionViewWindows::vf11(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  tagRECT local_60;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_20;
  LPARAM *local_c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4fdc44);
  local_38 = 0xc4;
  local_34 = 0xa0;
  local_40 = 0x6c;
  local_3c = 4;
  local_60.right = 0x130;
  local_60.left = 0x6c;
  local_60.top = 4;
  local_60.bottom = 0xa4;
  MapDialogRect(*(HWND *)(*param_1 + 0xc),&local_60);
  local_8 = (int *)operator_new();
  if (local_8 != (int *)0x0) {
    local_20 = 0x14;
    FUN_0046a058(local_8,0,param_1,&local_60.left);
    local_20 = 8;
  }
  param_1[0x85] = (int)local_8;
  PropertiesViewWindows::vf11(param_1);
  local_c = (LPARAM *)operator_new();
  if (local_c != (int *)0x0) {
    local_20 = 0x2c;
    local_44 = 0xffffff;
    FUN_004945ec(local_c);
    local_20 = 0x20;
  }
  param_1[0x2d] = (int)local_c;
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1109,0,*local_c);
  iVar2 = FUN_00416a78((int)param_1,(uint *)"SplitterPosition",
                       *(undefined4 *)(*(int *)param_1[0x85] + 0x20));
  iVar1 = *(int *)((int)param_1 + 0x166);
  local_48 = *(int *)(iVar1 + 0x24);
  local_4c = *(int *)(iVar1 + 0x20);
  FUN_004a7aa0(iVar1,(HWND)0x0,local_4c,local_48,
               (*(int *)(iVar1 + 0x28) + iVar2) - *(int *)(*(int *)param_1[0x85] + 0x20),
               *(int *)(iVar1 + 0x2c),0x21c);
  iVar1 = *(int *)param_1[0x85];
  local_50 = *(int *)(iVar1 + 0x24);
  FUN_004a7aa0(iVar1,(HWND)0x0,iVar2,local_50,*(int *)(iVar1 + 0x28),*(int *)(iVar1 + 0x2c),0x21c);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bc90  DefinitionViewWindows::vf9   (27 bytes)   [rtti:vtable virtual slot 9]
void __cdecl DefinitionViewWindows::vf9(int *param_1)

{
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x14) + 8) + 0x18))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bcac  DefinitionViewWindows::vf47   (322 bytes)   [rtti:vtable virtual slot 47]
void __cdecl DefinitionViewWindows::vf47(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_54;
  LONG local_44 [4];
  undefined4 local_34;
  undefined2 local_24;
  int *local_10;
  int *local_c;
  int *local_8;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4fdcac);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  FUN_004a7a6c(*param_1,&local_54);
  ptVar2 = &local_54;
  pLVar3 = local_44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)operator_new();
  if (local_8 != (int *)0x0) {
    local_24 = 0x14;
    FUN_004173c0(local_8,(int)local_44,param_1[0x2e],3,0);
    local_24 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)operator_new();
  if (local_c != (int *)0x0) {
    local_24 = 0x2c;
    FUN_004173c0(local_c,(int)local_44,*(int *)((int)param_1 + 0x166),0,3);
    local_24 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)operator_new();
  if (local_10 != (int *)0x0) {
    local_24 = 0x44;
    if (param_1[0x85] == 0) {
      iVar1 = param_1[0x85];
    }
    else {
      iVar1 = *(int *)param_1[0x85];
    }
    FUN_004173c0(local_10,(int)local_44,iVar1,3,3);
    local_24 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bdf0  DefinitionViewWindows::vf48   (62 bytes)   [rtti:vtable virtual slot 48]
void __cdecl DefinitionViewWindows::vf48(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046c024(param_1,param_3);
  *(char *)((int)param_1 + 0x219) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    SetCapture(*(HWND *)(*param_1 + 0xc));
  }
  OWL::TWindow::EvLButtonDown(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046be30  DefinitionViewWindows::vf49   (451 bytes)   [rtti:vtable virtual slot 49]
void __cdecl DefinitionViewWindows::vf49(int *param_1,byte param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar6 = FUN_0046c024(param_1,param_3);
  if ((char)uVar6 == '\0') {
    FUN_004a7bfc(*param_1,0,0x7f00);
  }
  else {
    FUN_004a7bfc(*param_1,0,0x7f84);
  }
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    if ((param_2 & 1) == 0) {
      *(undefined1 *)((int)param_1 + 0x219) = 0;
      FUN_0046c198(param_1);
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0x166);
    iVar2 = *(int *)(iVar1 + 0x20);
    iVar7 = iVar2 + *(int *)(iVar1 + 0x28);
    iVar8 = *(int *)param_1[0x85];
    iVar3 = *(int *)(iVar8 + 0x2c);
    iVar4 = *(int *)(iVar8 + 0x24);
    iVar5 = *(int *)(iVar8 + 0x20);
    iVar8 = iVar5 + *(int *)(iVar8 + 0x28);
    uVar10 = iVar5 - iVar7;
    iVar9 = (int)uVar10 >> 1;
    if (iVar9 < 0) {
      iVar9 = iVar9 + (uint)((uVar10 & 1) != 0);
    }
    iVar9 = (*param_3 + iVar9) - iVar5;
    iVar7 = iVar7 + iVar9;
    iVar5 = iVar5 + iVar9;
    if (((iVar9 < 1) || ((int)(uVar10 * 8) <= iVar8 - iVar5)) &&
       ((-1 < iVar9 || ((int)(uVar10 * 8) <= iVar7 - iVar2)))) {
      FUN_004a7aa0(*(int *)((int)param_1 + 0x166),(HWND)0x0,iVar2,*(int *)(iVar1 + 0x24),
                   iVar7 - iVar2,*(int *)(iVar1 + 0x2c),0x214);
      FUN_004a7aa0(*(int *)param_1[0x85],(HWND)0x0,iVar5,iVar4,iVar8 - iVar5,iVar3,0x214);
    }
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046bff4  DefinitionViewWindows::vf50   (47 bytes)   [rtti:vtable virtual slot 50]
void __cdecl DefinitionViewWindows::vf50(int *param_1)

{
  if (*(char *)((int)param_1 + 0x219) != '\0') {
    *(undefined1 *)((int)param_1 + 0x219) = 0;
    ReleaseCapture();
    FUN_0046c198(param_1);
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c024  FUN_0046c024   (371 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl FUN_0046c024(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  tagRECT local_50;
  int local_40 [4];
  tagRECT local_30;
  int local_20 [5];
  tagPOINT local_c;
  
  local_c.x = *param_2;
  local_c.y = param_2[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_c);
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = 0;
  local_30.bottom = 0;
  FUN_004a7a30(*(int *)((int)param_1 + 0x166),&local_30);
  ptVar6 = &local_30;
  pLVar7 = local_20;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar7 = ptVar6->left;
    ptVar6 = (tagRECT *)&ptVar6->top;
    pLVar7 = pLVar7 + 1;
  }
  local_50.left = 0;
  local_50.top = 0;
  local_50.right = 0;
  local_50.bottom = 0;
  FUN_004a7a30(*(int *)param_1[0x85],&local_50);
  ptVar6 = &local_50;
  pLVar7 = local_40;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar7 = ptVar6->left;
    ptVar6 = (tagRECT *)&ptVar6->top;
    pLVar7 = pLVar7 + 1;
  }
  iVar1 = local_40[3];
  if (local_40[3] < local_20[3]) {
    iVar1 = local_20[3];
  }
  iVar4 = local_40[2];
  if (local_40[2] < local_20[2]) {
    iVar4 = local_20[2];
  }
  iVar2 = local_40[1];
  if (local_20[1] < local_40[1]) {
    iVar2 = local_20[1];
  }
  iVar5 = local_40[0];
  if (local_20[0] < local_40[0]) {
    iVar5 = local_20[0];
  }
  if ((((local_c.x < iVar5) || (iVar4 <= local_c.x)) || (local_c.y < iVar2)) || (iVar1 <= local_c.y)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (((local_c.x < local_20[0]) || (local_20[2] <= local_c.x)) ||
       ((local_c.y < local_20[1] || (local_20[3] <= local_c.y)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (((local_c.x < local_40[0]) || (local_40[2] <= local_c.x)) ||
         ((local_c.y < local_40[1] || (local_40[3] <= local_c.y)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c198  FUN_0046c198   (120 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046c198(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  LONG local_2c [4];
  tagRECT local_1c;
  tagPOINT local_c;
  
  local_1c.left = 0;
  local_1c.top = 0;
  local_1c.right = 0;
  local_1c.bottom = 0;
  FUN_004a7a30(*(int *)param_1[0x85],&local_1c);
  ptVar2 = &local_1c;
  pLVar3 = local_2c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  local_c.x = local_2c[0];
  local_c.y = local_2c[1];
  ScreenToClient(*(HWND *)(*param_1 + 0xc),&local_c);
  FUN_00416c2c((int)param_1,(uint *)"SplitterPosition");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c210  DefinitionViewWindows::vf23   (50 bytes)   [rtti:vtable virtual slot 23]
undefined4 __cdecl DefinitionViewWindows::vf23(int *param_1,undefined4 param_2,int param_3)

{
  SHORT SVar1;
  undefined4 uVar2;
  int iVar3;
  
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    iVar3 = 0x3160;
  }
  else {
    iVar3 = 0x1d42;
  }
  uVar2 = FUN_0046d004(param_1,iVar3,param_3);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c244  FUN_0046c244   (669 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl FUN_0046c244(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined3 uVar5;
  uint *puVar3;
  uint uVar4;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  char cVar8;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4fdd1c);
  iVar1 = FUN_00466b18(*(int *)(param_1 + 0x38));
  iVar7 = 0;
  while( true ) {
    iVar2 = TSDictionaryList::GetCount(iVar1);
    uVar5 = (undefined3)((uint)param_4 >> 8);
    if (iVar2 <= iVar7) break;
    puVar3 = (uint *)FUN_00408c98(iVar1,iVar7);
    iVar2 = std::string::string_from_cstr((int)local_14,puVar3);
    uVar4 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),*(byte **)(iVar2 + 8),
                         *(uint *)(*(int *)(iVar2 + 8) + -4));
    cVar8 = uVar4 == 0;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar6 = (int *)(local_c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0046c34c;
      }
      operator_delete();
      local_c = 0;
    }
LAB_0046c34c:
    if (cVar8 != '\0') {
      *param_3 = iVar1;
      *param_4 = iVar7;
      *in_FS_OFFSET = local_48;
      return CONCAT31(uVar5,1);
    }
    iVar7 = iVar7 + 1;
  }
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  iVar1 = *(int *)(iVar1 + 0x28);
  iVar7 = 0;
  do {
    iVar2 = TSDictionaryList::GetCount(iVar1);
    if (iVar2 <= iVar7) {
      *param_3 = 0;
      *param_4 = 0;
      *in_FS_OFFSET = local_48;
      return 0;
    }
    puVar3 = (uint *)FUN_00408c98(iVar1,iVar7);
    iVar2 = std::string::string_from_cstr((int)local_24,puVar3);
    uVar4 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),*(byte **)(iVar2 + 8),
                         *(uint *)(*(int *)(iVar2 + 8) + -4));
    cVar8 = uVar4 == 0;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0046c48d;
      }
      operator_delete();
      local_1c = 0;
    }
LAB_0046c48d:
    if (cVar8 != '\0') {
      *param_3 = iVar1;
      *param_4 = iVar7;
      *in_FS_OFFSET = local_48;
      return CONCAT31(uVar5,1);
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c4e4  DefinitionViewWindows::vf7   (77 bytes)   [rtti:vtable virtual slot 7]
bool __cdecl DefinitionViewWindows::vf7(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  
  if ((param_2->message == 0x100) &&
     (((WVar1 = param_2->wParam, WVar1 == 0x73 || (WVar1 == 0x74)) || (WVar1 == 0x75)))) {
    FUN_00466370(param_1[0xe],WVar1,*(int *)(*(int *)(*param_1 + 0x14) + 0x14));
    return true;
  }
  bVar2 = PropertiesViewWindows::vf7(param_1,param_2);
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c534  DefinitionViewWindows::vf44   (64 bytes)   [rtti:vtable virtual slot 44]
int __cdecl DefinitionViewWindows::vf44(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fdd64);
  FUN_0046d2c8(param_1,param_2,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c574  DefinitionViewWindows::Child13860_Notifym402   (320 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 13860, code -402)
undefined4 __cdecl DefinitionViewWindows::Child13860_Notifym402(int *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64;
  int local_60;
  uint local_34;
  int local_30;
  
  __InitExceptBlockLDTC(0x4fdda8);
  if ((char)param_1[0x86] == '\0') {
    local_78 = 0x14;
    FUN_004cb6ec(&local_34,(int)param_1 + 0x166);
    local_6c = local_6c + 2;
    local_78 = 8;
    FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1105,0,0);
    local_78 = 0x20;
    FUN_004cb3b4(&local_64,(int)param_1 + 0x166,0xffff0000);
    local_6c = local_6c + 4;
    if (((local_60 == local_30) ||
        (uVar1 = FUN_004cb664(&local_34,&local_8c,'\x01'), (char)uVar1 == '\0')) ||
       (uVar1 = FUN_004cb6a8(&local_34,&local_90,'\x01'), (char)uVar1 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    local_6c = local_6c + -2;
    operator_delete_array();
    if (cVar2 != '\0') {
      param_1[0x2c] = local_8c;
      if (local_90 == 0) {
        FUN_0046caa4(param_1);
      }
      else {
        FUN_0046c7e4(param_1);
      }
    }
    local_6c = local_6c + -2;
    uVar1 = operator_delete_array();
    *in_FS_OFFSET = local_88;
    return uVar1;
  }
  *in_FS_OFFSET = local_88;
  return local_88;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c6b4  DefinitionViewWindows::Child13860_Notifym406   (170 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 13860, code -406)
void __cdecl DefinitionViewWindows::Child13860_Notifym406(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  byte local_5c [4];
  undefined4 local_58;
  undefined4 uStack_4c;
  uint local_34 [12];
  
  bVar5 = 200;
  __InitExceptBlockLDTC(0x4fde0c);
  iVar3 = 9;
  do {
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  FUN_004cb348(local_34,param_1 + 0x166,bVar5);
  uStack_4c = 0x46c70b;
  uVar2 = FUN_004cb50c(local_34,(uint *)local_5c,'\x01');
  if ((char)uVar2 != '\0') {
    uVar4 = (uint)((local_5c[0] & 0x20) != 0);
    uStack_4c = 0x46c728;
    bVar1 = FUN_004cb5ec(local_34,uVar4,'\x01');
    if (bVar1) {
      uStack_4c = 0x46c73b;
      FUN_004cb628(local_34,uVar4,'\x01');
    }
  }
  operator_delete_array();
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c760  FUN_0046c760   (129 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046c760(int param_1)

{
  undefined4 local_48 [15];
  uint local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x214) + 0xc) + 0x24))();
  local_c = *(uint *)(*(int *)(param_1 + 0x60) + 0x2c);
  FUN_0046914c(&local_8,*(int **)(param_1 + 0x214),&local_c);
  FUN_00485614(local_48,*(int **)(param_1 + 0x214),'\0',0xf800003f);
  FUN_0041ae3c((undefined4 *)(*(int *)(param_1 + 0x60) + 0x130),(int)local_48);
  FUN_00469120(*(int **)(param_1 + 0x214),(LPARAM)local_48,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c7e4  FUN_0046c7e4   (701 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046c7e4(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4fde84);
  uVar1 = FUN_0046c244((int)param_1,param_1[0x2c] * 0x80 + param_1[0x25],&local_5c,&local_60);
  if ((char)uVar1 == '\0') goto LAB_0046ca90;
  local_48 = 0x14;
  FUN_00408d5c(local_14,local_5c,local_60);
  local_3c = local_3c + 1;
  local_48 = 8;
  FUN_004a76a8(*(int *)param_1[0x85],0xb,0,0);
  FUN_0046c760((int)param_1);
  FUN_0041ac90((int *)param_1[0x85],(int)local_14);
  FUN_004a76a8(*(int *)param_1[0x85],0xb,1,0);
  (**(code **)(*(int *)(*(int *)param_1[0x85] + 8) + 0x68))();
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar2 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0)
  ;
  local_48 = 0x20;
  std::string::string_from_cstr((int)local_24,(uint *)"Description of ");
  local_3c = local_3c + 1;
  local_48 = 0x2c;
  FUN_00408cbc(local_34,local_5c,local_60);
  local_3c = local_3c + 1;
  std::string::append((int)local_24,(int)local_34);
  local_3c = local_3c + -1;
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar4 = (int *)(local_2c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0046c997;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_0046c997:
  local_48 = 8;
  FUN_00473470((int)puVar2,local_1c);
  local_3c = local_3c + -1;
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0046ca1a;
    }
    operator_delete();
    local_1c = (uint *)0x0;
  }
LAB_0046ca1a:
  local_3c = local_3c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0046ca90;
    }
    operator_delete();
  }
LAB_0046ca90:
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046caa4  FUN_0046caa4   (517 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046caa4(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_428 [15];
  uint local_3ec [250];
  
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  puVar2 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar4,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0)
  ;
  FUN_004e0344((undefined1 *)local_3ec,(byte *)"Definition %d of %d");
  FUN_00473470((int)puVar2,local_3ec);
  iVar4 = param_1[0x26] - param_1[0x25];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  uVar1 = param_1[0x2c];
  if (uVar1 < (uint)(iVar4 >> 7)) {
    iVar4 = param_1[0x25];
    FUN_004a76a8(*(int *)param_1[0x85],0xb,0,0);
    FUN_0046c760((int)param_1);
    FUN_0041ac90((int *)param_1[0x85],uVar1 * 0x80 + iVar4 + 0x68);
    iVar4 = param_1[0x2c];
    iVar3 = iVar4 * 0x80 + param_1[0x25];
    iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = param_1[0x25];
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
      FUN_004a76a8(*(int *)param_1[0x85],0xc2,0,*(LPARAM *)(iVar4 * 0x80 + iVar3 + 0x60));
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
      FUN_00485614(local_428,(int *)param_1[0x85],'\x01',0xf800003f);
      FUN_0048569c((int)local_428,'\x01');
      FUN_00485664((int)local_428,'\x01');
      FUN_00469120((int *)param_1[0x85],(LPARAM)local_428,1);
      (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
    }
    FUN_004a76a8(*(int *)param_1[0x85],0xb,1,0);
    (**(code **)(*(int *)(*(int *)param_1[0x85] + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ccac  FUN_0046ccac   (853 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0046ccac(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_4c;
  undefined4 local_48;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x4fdf20);
  FUN_004a76a8(**(int **)(param_1 + 0x214),0xb,0,0);
  local_4c = -1;
  iVar3 = *(int *)(param_1 + 0x6c) + (*(int *)(param_1 + 0x88) + -1) * 0x10;
  local_54 = 0;
  for (pbVar6 = *(byte **)(iVar3 + 8);
      pbVar6 < (byte *)(*(int *)(iVar3 + 8) + *(int *)(*(int *)(iVar3 + 8) + -4));
      pbVar6 = pbVar6 + 1) {
    if ((&DAT_004f50d8)[*pbVar6] != '\0') {
      local_54 = local_54 + 1;
    }
  }
  FUN_0041aacc((int)local_14,*(int **)(param_1 + 0x214));
  bVar1 = 0;
  local_58 = 0;
  for (pbVar6 = local_c; pbVar6 < local_c + *(int *)(local_c + -4); pbVar6 = pbVar6 + 1) {
    if (((&DAT_004f50d8)[*pbVar6] != '\0') && ((&DAT_004f50d8)[bVar1] == '\0')) {
      iVar4 = 1;
      pbVar5 = pbVar6;
      do {
        while( true ) {
          pbVar2 = pbVar5 + 1;
          if (local_c + *(int *)(local_c + -4) < pbVar2) goto LAB_0046cee6;
          if ((local_c + *(int *)(local_c + -4) <= pbVar2) || ((&DAT_004f50d8)[*pbVar2] == '\0'))
          break;
          iVar4 = iVar4 + 1;
          pbVar5 = pbVar2;
        }
        bVar1 = *pbVar5;
        pbVar5 = pbVar2;
      } while (((&DAT_004f50d8)[bVar1] == '\0') || (iVar4 < local_54));
      if (iVar4 == local_54) {
        FUN_004d1bdc((int)local_24,(uint)pbVar6,(int)pbVar2);
        iVar4 = FUN_0043c624(*(byte **)(iVar3 + 8),*(int *)(*(byte **)(iVar3 + 8) + -4),local_1c,
                             *(int *)(local_1c + -4));
        if ((iVar4 == 0) && (FUN_004722fc(param_1), local_4c < 0)) {
          local_4c = local_58;
        }
        if (local_1c != (byte *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            pbVar5 = local_1c + -0xc;
            if (pbVar5 == (byte *)&DAT_00513d58) {
              iVar4 = 1;
            }
            else if (pbVar5 == (byte *)&DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *(int *)pbVar5 = *(int *)pbVar5 + -1;
              iVar4 = *(int *)pbVar5 + 1;
            }
            if (iVar4 != 0) goto LAB_0046cee6;
          }
          operator_delete();
          local_1c = (byte *)0x0;
        }
      }
    }
LAB_0046cee6:
    bVar1 = *pbVar6;
    if (bVar1 != 0xd) {
      local_58 = local_58 + 1;
    }
  }
  if (-1 < local_4c) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x214) + 0xc) + 0x3c))();
    FUN_004a76a8(**(int **)(param_1 + 0x214),0xb7,0,0);
  }
  FUN_004a76a8(**(int **)(param_1 + 0x214),0xb,1,0);
  (**(code **)(*(int *)(**(int **)(param_1 + 0x214) + 8) + 0x68))();
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_c = local_c + -0xc;
      if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *(int *)local_c = *(int *)local_c + -1;
        iVar3 = *(int *)local_c + 1;
      }
      if (iVar3 != 0) goto LAB_0046cfea;
    }
    operator_delete();
  }
LAB_0046cfea:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d004  FUN_0046d004   (707 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046d048) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl FUN_0046d004(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4fdfc8);
  local_c = &DAT_00513d64;
  FUN_0046d2c8((int)local_24,(int)param_1,(int)local_14,param_3);
  iVar4 = param_1[0x2c] * 0x80 + param_1[0x25];
  local_2c = (int *)0x0;
  iVar1 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
    local_2c = std::string::__getRep(local_34,uVar2,uVar2);
    local_2c = local_2c + 3;
    memcpy(local_2c,*(undefined4 **)(iVar4 + 8),uVar2);
  }
  else {
    local_2c = *(int **)(iVar4 + 8);
    piVar3 = local_2c + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  uVar2 = FUN_0046524c(param_1[0xe],*param_1,param_2,(int)local_24,(int)local_34,(int)local_14);
  if (local_2c != (int *)0x0) {
    if (local_2c[-3] != -1) {
      piVar3 = local_2c + -3;
      if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        uVar2 = *piVar3 + 1;
      }
      if (uVar2 != 0) goto LAB_0046d1c7;
    }
    operator_delete();
    local_2c = (int *)0x0;
    uVar2 = 0;
  }
LAB_0046d1c7:
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        uVar2 = *piVar3 + 1;
      }
      if (uVar2 != 0) goto LAB_0046d23d;
    }
    operator_delete();
    local_1c = 0;
    uVar2 = 0;
  }
LAB_0046d23d:
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        uVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        uVar2 = *piVar3 + 1;
      }
      if (uVar2 != 0) goto LAB_0046d2b6;
    }
    operator_delete();
    uVar2 = 0;
  }
LAB_0046d2b6:
  *in_FS_OFFSET = local_58;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d2c8  FUN_0046d2c8   (1444 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046d30c) */
/* WARNING: Removing unreachable block (ram,0x0046d368) */
/* WARNING: Removing unreachable block (ram,0x0046d43c) */
/* WARNING: Removing unreachable block (ram,0x0046d3ee) */
/* WARNING: Removing unreachable block (ram,0x0046d42f) */
/* WARNING: Removing unreachable block (ram,0x0046d4d3) */
/* WARNING: Removing unreachable block (ram,0x0046d4f7) */
/* WARNING: Removing unreachable block (ram,0x0046d502) */
/* WARNING: Removing unreachable block (ram,0x0046d542) */
/* WARNING: Removing unreachable block (ram,0x0046d51b) */
/* WARNING: Removing unreachable block (ram,0x0046d53b) */
/* WARNING: Removing unreachable block (ram,0x0046d528) */
/* WARNING: Removing unreachable block (ram,0x0046d547) */
/* WARNING: Removing unreachable block (ram,0x0046d54b) */
/* WARNING: Removing unreachable block (ram,0x0046d599) */
int __cdecl FUN_0046d2c8(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_101 [65];
  uint local_c0;
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4fe0c4);
  local_c = &DAT_00513d64;
  local_54 = local_54 + 1;
  local_60 = 0x2c;
  FUN_00419f9c((int)local_24,*(int **)(param_2 + 0x214),(int)local_14,param_4);
  local_54 = local_54 + 1;
  local_60 = 0x20;
  if ((uint)local_1c[-1] < 0x81) {
    if ((local_1c[-1] != 0) && (param_3 != 0)) {
      FUN_004cf384(param_3,(int)local_14);
    }
  }
  else {
    local_c0 = local_1c[-1];
    local_101[0] = 0;
    uVar3 = DAT_005140ac;
    if (local_c0 <= DAT_005140ac) {
      uVar3 = local_c0;
    }
    FUN_004cfad4((int)local_24,0,uVar3,(uint)local_101,0,0,0);
  }
  local_60 = 0x74;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar3 = local_1c[-1];
    piVar1 = std::string::__getRep(param_1,uVar3,uVar3);
    *(int **)(param_1 + 8) = piVar1 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_1c,uVar3);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_1c;
    piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar1 != &DAT_00513d58) {
      *piVar1 = *piVar1 + 1;
    }
  }
  local_60 = 0x8c;
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[-3] != -1) {
      piVar1 = local_1c + -3;
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d7be;
    }
    operator_delete();
    local_1c = (undefined4 *)0x0;
  }
LAB_0046d7be:
  local_54 = local_54 + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0046d851;
    }
    operator_delete();
  }
LAB_0046d851:
  *in_FS_OFFSET = local_70;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d86c  FUN_0046d86c   (1377 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046db92) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff50 : 0x0046dba0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0046d86c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 local_8c4 [1000];
  byte local_4dc [1024];
  undefined4 local_dc;
  undefined4 local_cc;
  undefined1 *local_c4;
  undefined4 local_c0;
  byte *local_bc;
  byte *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  byte local_a5;
  byte *local_a4;
  int local_a0;
  int local_9c;
  byte *local_98;
  byte *local_94;
  int local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  uint local_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_4c;
  int local_40;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  undefined4 local_20;
  undefined1 local_18 [8];
  byte *local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x4fe1c4);
  FUN_0046ddd0((int)(param_1 + 0x24),param_2);
  iVar6 = param_1[0x1c];
  iVar5 = param_1[0x1b] + param_1[0x22] * 0x10;
  iVar3 = FUN_0040e20c(iVar6,param_1[0x1c],iVar5);
  local_60 = param_1[0x1c];
  iVar6 = iVar6 - iVar5;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xf;
  }
  param_1[0x1c] = param_1[0x1c] + (iVar6 >> 4) * -0x10;
  FUN_0040b4f0(param_1 + 0x1a,iVar3,local_60);
  if (param_1[0x1c] == param_1[0x20]) {
    FUN_0040e240((int)(param_1 + 0x1a),param_1[0x1c],param_3);
  }
  else {
    local_64 = param_1[0x1c];
    local_8 = local_64;
    if (local_64 != 0) {
      local_4c = 0x14;
      local_68 = 0;
      *(undefined4 *)(local_64 + 8) = 0;
      iVar6 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar6 == -1 || iVar6 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        local_7c = std::string::__getRep(local_64,uVar1,uVar1);
        local_78 = local_7c + 3;
        *(int **)(local_8 + 8) = local_78;
        local_80 = local_8;
        local_dc = *(undefined4 *)(local_8 + 8);
        local_88 = *(undefined4 **)(param_3 + 8);
        local_8c = *(undefined4 **)(local_8 + 8);
        local_84 = uVar1;
        memcpy(local_8c,local_88,uVar1);
      }
      else {
        local_6c = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(local_64 + 8) = local_6c;
        local_cc = *(undefined4 *)(local_64 + 8);
        local_74 = (int *)(*(int *)(local_64 + 8) + -0xc);
        local_70 = local_64;
        if (local_74 != &DAT_00513d58) {
          *local_74 = *local_74 + 1;
        }
      }
      local_4c = 8;
    }
    param_1[0x1c] = param_1[0x1c] + 0x10;
  }
  param_1[0x22] = param_1[0x22] + 1;
  FUN_0046e740(param_1,param_4,param_5);
  if (param_6 == 0) {
    FUN_0046ccac((int)param_1);
    goto LAB_0046dda8;
  }
  local_4c = 0x38;
  FUN_0041aacc((int)local_18,(int *)param_1[0x85]);
  local_40 = local_40 + 1;
  local_98 = local_4dc;
  local_4c = 0x2c;
  iVar6 = 0;
  local_9c = -1;
  local_94 = local_98;
  FUN_004a76a8(*(int *)param_1[0x85],0xb,0,0);
  local_a0 = 0;
  for (local_a4 = local_10; local_a4 <= local_10 + *(int *)(local_10 + -4); local_a4 = local_a4 + 1)
  {
    if (local_10 + *(int *)(local_10 + -4) == local_a4) {
      local_a5 = 0;
    }
    else {
      local_a5 = *local_a4;
    }
    local_4c = 0x2c;
    local_ac = *(int *)(*(int *)(*(int *)(param_7 + 0xc) + param_8 * 4) + 8 + (uint)local_a5 * 8);
    if (local_ac == 0xff) {
      if (0 < iVar6) {
        local_8c4[iVar6] = 0xff;
        *local_98 = 0;
        local_34 = (int *)0x0;
        local_30 = (int *)0x0;
        local_20 = 0;
        local_b0 = 0x100;
        local_b4 = 1;
        local_38 = 0x100;
        local_40 = local_40 + 1;
        local_4c = 0x5c;
        FUN_00479bd4(param_6,(int)&local_38);
        for (piVar7 = local_34; piVar7 < local_30; piVar7 = piVar7 + 1) {
          iVar3 = *piVar7;
          local_4c = 0x5c;
          if (((iVar3 != 0) && (iVar5 = MatchEngine::GetMinLength(iVar3), iVar5 <= iVar6)) &&
             (iVar5 = MatchEngine::GetMaxLength(iVar3), iVar6 <= iVar5)) {
            MatchEngine::SetWordLength(iVar3,iVar6);
            bVar2 = MatchEngine::MatchWord(iVar3,(int)local_8c4);
            if (CONCAT31(extraout_var,bVar2) != 0) {
              FUN_004722fc((int)param_1);
              if (local_9c < 0) {
                local_9c = local_90;
              }
              break;
            }
          }
        }
        iVar6 = 0;
        local_40 = local_40 + -1;
        FUN_00410d88(&local_38,(int)local_34,(int)local_30);
        operator_delete();
        local_4c = 0x2c;
      }
    }
    else {
      if (iVar6 == 0) {
        local_90 = local_a0;
        local_98 = local_94;
      }
      *local_98 = local_a5;
      local_98 = local_98 + 1;
      if (iVar6 < 0x65) {
        local_8c4[iVar6] = (undefined1)local_ac;
        iVar6 = iVar6 + 1;
      }
    }
    if (local_a5 != 0xd) {
      local_a0 = local_a0 + 1;
    }
  }
  FUN_004a76a8(*(int *)param_1[0x85],0xb,1,0);
  (**(code **)(*(int *)(*(int *)param_1[0x85] + 8) + 0x68))();
  if (-1 < local_9c) {
    (**(code **)(*(int *)(param_1[0x85] + 0xc) + 0x3c))();
    FUN_004a76a8(*(int *)param_1[0x85],0xb7,0,0);
  }
  local_40 = local_40 + -1;
  if (local_10 != (byte *)0x0) {
    if (*(int *)(local_10 + -0xc) != -1) {
      pbVar4 = local_10 + -0xc;
      if (pbVar4 == (byte *)&DAT_00513d58) {
        iVar6 = 1;
      }
      else if (pbVar4 == (byte *)&DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *(int *)pbVar4 = *(int *)pbVar4 + -1;
        iVar6 = *(int *)pbVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_0046dd9c;
    }
    local_b8 = local_10 + -0xc;
    local_bc = local_10 + -0xc;
    operator_delete();
    local_c0 = 0;
    local_c4 = local_18;
    local_10 = (byte *)0x0;
  }
LAB_0046dd9c:
  local_4c = 0;
LAB_0046dda8:
  SetFocus(*(HWND *)(*(int *)param_1[0x85] + 0xc));
  *in_FS_OFFSET = local_5c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ddd0  FUN_0046ddd0   (558 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0046ddd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4fe274);
  if (param_2 == param_1) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x7f;
    }
    if ((uint)(iVar1 >> 7) < (uint)(iVar2 >> 7)) {
      iVar2 = operator_new();
      if (iVar2 == 0) {
        local_8 = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      iVar1 = FUN_0046e020(*(int *)(param_2 + 4),*(int *)(param_2 + 8),iVar2);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0040b62c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(int *)(param_1 + 4) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      iVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      if ((uint)(iVar2 >> 7) < (uint)(iVar1 >> 7)) {
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x7f;
        }
        FUN_0046e698(*(int *)(param_2 + 4),(iVar2 >> 7) * 0x80 + *(int *)(param_2 + 4),
                     *(int *)(param_1 + 4));
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x7f;
        }
        iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0x7f;
        }
        FUN_0046e020((iVar1 >> 7) * 0x80 + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
                     (iVar2 >> 7) * 0x80 + *(int *)(param_1 + 4));
      }
      else {
        iVar2 = FUN_0046e698(*(int *)(param_2 + 4),*(int *)(param_2 + 8),*(int *)(param_1 + 4));
        FUN_0040b62c(param_1,iVar2,*(int *)(param_1 + 8));
      }
    }
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    *(int *)(param_1 + 8) = (iVar2 >> 7) * 0x80 + *(int *)(param_1 + 4);
    *in_FS_OFFSET = local_2c;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e020  FUN_0046e020   (1615 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046e17d) */
/* WARNING: Removing unreachable block (ram,0x0046e28a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0046e185 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0046e020(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4fe2f8);
  while (iVar3 = param_3, iVar2 = param_1, iVar2 != param_2) {
    param_1 = iVar2 + 0x80;
    param_3 = iVar3 + 0x80;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
        piVar5 = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(iVar3 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
        piVar5 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        local_8 = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x1c) = iVar4;
      iVar4 = FUN_0040a988(*(int *)(iVar2 + 0x1c),*(int *)(iVar2 + 0x20),*(int *)(iVar3 + 0x1c));
      *(int *)(iVar3 + 0x20) = iVar4;
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        local_c = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x3c) = iVar4;
      iVar4 = FUN_0040a988(*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x40),*(int *)(iVar3 + 0x3c));
      *(int *)(iVar3 + 0x40) = iVar4;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x60) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x60) + -4);
        piVar5 = std::string::__getRep(iVar3 + 0x58,uVar1,uVar1);
        *(int **)(iVar3 + 0x60) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x60),*(undefined4 **)(iVar2 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
        piVar5 = (int *)(*(int *)(iVar3 + 0x60) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x70) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x70) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x70) + -4);
        piVar5 = std::string::__getRep(iVar3 + 0x68,uVar1,uVar1);
        *(int **)(iVar3 + 0x70) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x70),*(undefined4 **)(iVar2 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
        piVar5 = (int *)(*(int *)(iVar3 + 0x70) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
    }
  }
  *in_FS_OFFSET = local_34;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e698  FUN_0046e698   (131 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0046e698(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_004cf384(param_3,param_1);
    FUN_0040ab88(param_3 + 0x18,param_1 + 0x18);
    FUN_0040ab88(param_3 + 0x38,param_1 + 0x38);
    FUN_004cf384(param_3 + 0x58,param_1 + 0x58);
    FUN_004cf384(param_3 + 0x68,param_1 + 0x68);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_3 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    param_3 = param_3 + 0x80;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e71c  DefinitionViewWindows::EvHelp   (33 bytes)   [owl:response-table message-handler]
//   WM_HELP
void __stdcall DefinitionViewWindows::EvHelp(void)

{
  FUN_00464980();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e740  FUN_0046e740   (5040 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046efc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0046e740(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  char cVar7;
  uint *puVar8;
  uint local_4ec [12];
  undefined4 local_4bc;
  uint local_4b4 [12];
  undefined4 local_484;
  undefined *local_474;
  undefined4 local_464;
  uint *local_454;
  uint *local_444;
  undefined4 local_434;
  uint *local_414;
  uint *local_404;
  uint *local_3f4;
  uint *local_3f0;
  uint *local_3ec;
  LPARAM local_3e8;
  LPARAM local_3e0;
  undefined4 *local_3dc;
  undefined4 *local_3d8;
  LPARAM local_3d4;
  undefined1 local_3ce;
  char local_3cd;
  LPARAM local_3cc;
  LPARAM local_3c8;
  undefined4 *local_3c4;
  LPARAM local_3c0;
  undefined1 local_3b9;
  undefined1 *local_3b8;
  undefined4 local_3b4;
  uint *local_3b0;
  uint *local_3ac;
  uint *local_3a8;
  undefined1 *local_3a4;
  undefined4 local_3a0;
  int local_39c;
  int local_398;
  int *local_394;
  undefined1 *local_390;
  undefined4 local_38c;
  int local_388;
  int local_384;
  int *local_380;
  uint local_36c;
  int local_368;
  int local_364;
  undefined1 *local_360;
  undefined4 local_35c;
  uint *local_358;
  uint *local_354;
  uint *local_350;
  undefined4 *local_34c;
  undefined1 *local_348;
  undefined4 local_344;
  int local_340;
  int local_33c;
  int *local_338;
  int local_334;
  int local_330;
  undefined1 *local_32c;
  undefined *local_328;
  undefined4 local_324;
  LPARAM local_320;
  undefined1 local_319;
  undefined1 *local_318;
  undefined4 local_314;
  int local_310;
  int local_30c;
  int *local_308;
  uint *local_304;
  undefined4 *local_300;
  uint local_2fc;
  undefined1 *local_2f8;
  int *local_2f4;
  uint *local_2f0;
  uint local_2ec;
  uint *local_2e8;
  undefined1 *local_2e4;
  uint *local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  uint local_2d4;
  int local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  int local_2b4;
  int *local_2b0;
  int local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  int local_294;
  undefined4 *local_290;
  uint *local_28c;
  undefined4 *local_288;
  uint local_284;
  undefined1 *local_280;
  int *local_27c;
  uint *local_278;
  uint local_274;
  uint *local_270;
  undefined1 *local_26c;
  uint *local_268;
  undefined4 local_264;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined2 local_248;
  int local_23c;
  undefined4 local_234;
  LPARAM local_230;
  int *local_20c;
  undefined4 local_204;
  int local_200;
  int *local_1dc;
  undefined4 local_1d4 [12];
  undefined4 local_1a4;
  int local_1a0;
  int *local_17c;
  undefined1 local_174 [8];
  int local_16c;
  undefined1 local_164 [8];
  int local_15c;
  undefined4 local_154 [12];
  undefined4 local_124 [12];
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_e4 [8];
  uint *local_dc;
  undefined1 local_d4 [8];
  int local_cc;
  undefined4 local_c4 [12];
  undefined1 local_94 [8];
  uint *local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined4 local_74;
  LPARAM local_70;
  int *local_4c;
  byte local_44 [4];
  int local_40;
  int *local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fe4c4);
  local_248 = 0x14;
  local_25c = param_1[0x22] + -1;
  local_260 = param_1[0x1b] + local_25c * 0x10;
  local_264 = 0;
  local_c = (uint *)0x0;
  iVar3 = *(int *)(*(int *)(local_260 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    local_274 = *(uint *)(*(int *)(local_260 + 8) + -4);
    local_27c = std::string::__getRep(local_14,local_274,local_274);
    local_280 = local_14;
    local_414 = (uint *)(local_27c + 3);
    local_284 = local_274;
    local_288 = *(undefined4 **)(local_260 + 8);
    local_28c = local_414;
    local_278 = local_414;
    local_c = local_414;
    memcpy(local_414,local_288,local_274);
  }
  else {
    local_404 = *(uint **)(local_260 + 8);
    local_26c = local_14;
    local_270 = local_404 + -3;
    local_268 = local_404;
    local_c = local_404;
    if (local_270 != &DAT_00513d58) {
      *local_270 = *local_270 + 1;
    }
  }
  local_23c = local_23c + 1;
  local_248 = 8;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  local_290 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64
                           ,0);
  FUN_004734c4((int)local_290,(int)local_14);
  if (param_3 != 0) {
    local_294 = param_3;
    std::string::append((int)local_14,param_3);
  }
  local_298 = 0;
  while( true ) {
    iVar3 = param_1[0x26] - param_1[0x25];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    if ((uint)(iVar3 >> 7) <= local_298) break;
    local_29c = local_298;
    iVar3 = param_1[0x25] + local_298 * 0x80;
    local_2a0 = 0;
    uVar5 = 0;
    while( true ) {
      local_248 = 8;
      iVar4 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      if ((uint)(iVar4 >> 4) <= uVar5) break;
      local_248 = 0x38;
      FUN_00436b94((int)local_84,uVar5 * 0x10 + *(int *)(iVar3 + 0x1c),
                   uVar5 * 0x10 + *(int *)(iVar3 + 0x3c));
      local_23c = local_23c + 1;
      local_248 = 0x2c;
      iVar4 = FUN_00469e1c((int)local_14,(int)local_84,(int *)&local_2a4);
      if ((iVar4 == 0) || (local_2a0 < local_2a4)) {
LAB_0046ea20:
        local_2a0 = local_2a4;
        FUN_004cf384(*(int *)(iVar3 + 0x1c),uVar5 * 0x10 + *(int *)(iVar3 + 0x1c));
        FUN_004cf384(*(int *)(iVar3 + 0x3c),uVar5 * 0x10 + *(int *)(iVar3 + 0x3c));
      }
      else if (local_2a4 == local_2a0) {
        local_2ac = uVar5 * 0x10 + *(int *)(iVar3 + 0x1c);
        local_2a8 = uVar5;
        uVar1 = FUN_004d40d0((int)local_14,0,local_c[-1],*(byte **)(local_2ac + 8),
                             *(uint *)(*(int *)(local_2ac + 8) + -4));
        if (uVar1 == 0) goto LAB_0046ea20;
      }
      local_23c = local_23c + -1;
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          local_2b0 = (int *)(local_7c + -0xc);
          if (local_2b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_2b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_2b0 = *local_2b0 + -1;
            iVar4 = *local_2b0 + 1;
          }
          if (iVar4 != 0) goto LAB_0046eb05;
        }
        local_2b4 = local_7c + -0xc;
        local_2b8 = local_7c + -0xc;
        operator_delete();
        local_2bc = 0;
        local_2c0 = local_84;
        local_7c = 0;
        local_434 = 0;
      }
LAB_0046eb05:
      uVar5 = uVar5 + 1;
    }
    local_298 = local_298 + 1;
  }
  local_2c4 = param_1[0x26];
  local_2c8 = param_1[0x25];
  if (local_2c8 != local_2c4) {
    FUN_00471128(local_2c8,local_2c4,0,(undefined*)FUN_00469f48);
    FUN_0046faf0(local_2c8,local_2c4,(undefined*)FUN_00469f48);
  }
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0xb,0,0);
  *(undefined1 *)(param_1 + 0x86) = 1;
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1101,0,-0x10000);
  *(undefined1 *)(param_1 + 0x86) = 0;
  local_2cc = 0;
  local_248 = 0x50;
  FUN_004cb3b4((undefined4 *)local_44,(int)param_1 + 0x166,0xffff0000);
  local_23c = local_23c + 2;
  param_1[0x2c] = 0;
  local_248 = 0x5c;
  FUN_004cb3b4(&local_74,(int)param_1 + 0x166,0xffff0000);
  local_23c = local_23c + 2;
  local_2d0 = 0x7fffffff;
  uVar5 = 0;
  while( true ) {
    local_248 = 8;
    iVar3 = param_1[0x26] - param_1[0x25];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    if ((uint)(iVar3 >> 7) <= uVar5) break;
    iVar4 = param_1[0x25] + uVar5 * 0x80;
    local_248 = 0x74;
    local_2d8 = iVar4 + 0x58;
    local_2dc = 0;
    local_8c = (uint *)0x0;
    iVar3 = *(int *)(*(int *)(iVar4 + 0x60) + -0xc);
    local_2d4 = uVar5;
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      local_2ec = *(uint *)(*(int *)(iVar4 + 0x60) + -4);
      local_2f4 = std::string::__getRep(local_94,local_2ec,local_2ec);
      local_2f8 = local_94;
      local_454 = (uint *)(local_2f4 + 3);
      local_2fc = local_2ec;
      local_300 = *(undefined4 **)(local_2d8 + 8);
      local_304 = local_454;
      local_2f0 = local_454;
      local_8c = local_454;
      memcpy(local_454,local_300,local_2ec);
    }
    else {
      local_444 = *(uint **)(iVar4 + 0x60);
      local_2e4 = local_94;
      local_2e8 = local_444 + -3;
      local_2e0 = local_444;
      local_8c = local_444;
      if (local_2e8 != &DAT_00513d58) {
        *local_2e8 = *local_2e8 + 1;
      }
    }
    local_23c = local_23c + 1;
    iVar3 = *(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 != 0) {
      local_248 = 0x8c;
      FUN_00436b94((int)local_d4,*(int *)(iVar4 + 0x1c),*(int *)(iVar4 + 0x3c));
      local_23c = local_23c + 1;
      FUN_004cf384((int)local_94,(int)local_d4);
      local_23c = local_23c + -1;
      if (local_cc != 0) {
        if (*(int *)(local_cc + -0xc) != -1) {
          local_308 = (int *)(local_cc + -0xc);
          if (local_308 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_308 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_308 = *local_308 + -1;
            iVar3 = *local_308 + 1;
          }
          if (iVar3 != 0) goto LAB_0046ef11;
        }
        local_30c = local_cc + -0xc;
        local_310 = local_cc + -0xc;
        operator_delete();
        local_314 = 0;
        local_318 = local_d4;
        local_cc = 0;
        local_464 = 0;
      }
    }
LAB_0046ef11:
    local_248 = 0x68;
    if (*(int *)(iVar4 + 0x10) != local_2d0) {
      if (local_2d0 != 0x7fffffff) {
        local_320 = local_70;
        iVar3 = FUN_004a76a8(*local_4c,0x1102,2,local_70);
        local_319 = iVar3 != 0;
      }
      local_2d0 = *(int *)(iVar4 + 0x10);
      local_2cc = 0;
      local_324 = 0;
      local_32c = local_e4;
      local_328 = &DAT_00513d64;
      local_dc = (uint *)&DAT_00513d64;
      local_474 = &DAT_00513d64;
      local_23c = local_23c + 1;
      local_248 = 0xbc;
      uVar2 = FUN_0046c244((int)param_1,iVar4,&local_330,&local_334);
      if ((char)uVar2 != '\0') {
        local_248 = 200;
        FUN_00408cbc(local_f4,local_330,local_334);
        local_23c = local_23c + 1;
        FUN_004cf384((int)local_e4,(int)local_f4);
        local_23c = local_23c + -1;
        if (local_ec != 0) {
          if (*(int *)(local_ec + -0xc) != -1) {
            local_338 = (int *)(local_ec + -0xc);
            if (local_338 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (local_338 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *local_338 = *local_338 + -1;
              iVar3 = *local_338 + 1;
            }
            if (iVar3 != 0) goto LAB_0046f0fa;
          }
          local_33c = local_ec + -0xc;
          local_340 = local_ec + -0xc;
          operator_delete();
          local_344 = 0;
          local_348 = local_f4;
          local_ec = 0;
          local_484 = 0;
        }
LAB_0046f0fa:
        local_248 = 0xbc;
      }
      FUN_004cbac4(local_4b4,local_dc,(char *)0x0);
      FUN_004cbb70(local_4b4,0);
      FUN_004cbb84(local_4b4,0);
      FUN_004cbb5c(local_4b4,uVar5);
      local_248 = 0xe0;
      FUN_004cb3b4(local_124,(int)param_1 + 0x166,0xffff0000);
      local_34c = local_124;
      local_23c = local_23c + 4;
      FUN_004cb490(local_154,(int)local_34c,local_4b4,0xffff0002);
      local_23c = local_23c + 2;
      FUN_004cb40c(&local_74,local_154);
      local_23c = local_23c + -2;
      operator_delete_array();
      local_248 = 0xbc;
      local_23c = local_23c + -2;
      operator_delete_array();
      local_23c = local_23c + -1;
      if (local_dc != (uint *)0x0) {
        if (local_dc[-3] != 0xffffffff) {
          local_350 = local_dc + -3;
          if (local_350 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_350 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_350 = *local_350 - 1;
            iVar3 = *local_350 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f2b1;
        }
        local_354 = local_dc + -3;
        local_358 = local_dc + -3;
        operator_delete();
        local_35c = 0;
        local_360 = local_e4;
        local_dc = (uint *)0x0;
        local_4bc = 0;
      }
    }
LAB_0046f2b1:
    local_248 = 0x68;
    FUN_004cbac4(local_4ec,local_8c,(char *)0x0);
    local_248 = 0x68;
    FUN_004cbb70(local_4ec,2);
    FUN_004cbb84(local_4ec,3);
    FUN_004cbb5c(local_4ec,uVar5);
    local_248 = 0x110;
    FUN_004cb490(local_c4,(int)&local_74,local_4ec,0xffff0002);
    local_23c = local_23c + 2;
    local_248 = 0x68;
    if (*(int *)(iVar4 + 0x10) == *(int *)(param_1[0x25] + 0x10)) {
LAB_0046f3a1:
      puVar8 = &local_36c;
      local_248 = 0x11c;
      std::string::string_from_cstr((int)local_164,local_8c);
      puVar6 = local_164;
      local_23c = local_23c + 1;
      std::string::string_from_cstr((int)local_174,local_c);
      local_23c = local_23c + 1;
      iVar3 = FUN_00469e1c((int)local_174,(int)puVar6,(int *)puVar8);
      if ((iVar3 == 0) || (local_2cc < local_36c)) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\0';
      }
      local_23c = local_23c + -1;
      if (local_16c != 0) {
        if (*(int *)(local_16c + -0xc) != -1) {
          local_380 = (int *)(local_16c + -0xc);
          if (local_380 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_380 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_380 = *local_380 + -1;
            iVar3 = *local_380 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f4e1;
        }
        local_384 = local_16c + -0xc;
        local_388 = local_16c + -0xc;
        operator_delete();
        local_38c = 0;
        local_390 = local_174;
        local_16c = 0;
      }
LAB_0046f4e1:
      local_23c = local_23c + -1;
      if (local_15c != 0) {
        if (*(int *)(local_15c + -0xc) != -1) {
          local_394 = (int *)(local_15c + -0xc);
          if (local_394 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_394 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_394 = *local_394 + -1;
            iVar3 = *local_394 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f5a5;
        }
        local_398 = local_15c + -0xc;
        local_39c = local_15c + -0xc;
        operator_delete();
        local_3a0 = 0;
        local_3a4 = local_164;
        local_15c = 0;
      }
LAB_0046f5a5:
      if (cVar7 != '\0') {
        local_2cc = local_36c;
        FUN_004cb40c((undefined4 *)local_44,local_c4);
        param_1[0x2c] = uVar5;
      }
    }
    else if (param_2 != 0) {
      local_368 = param_2;
      local_364 = iVar4;
      uVar1 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),*(byte **)(iVar4 + 8),
                           *(uint *)(*(int *)(iVar4 + 8) + -4));
      if (uVar1 == 0) goto LAB_0046f3a1;
    }
    local_23c = local_23c + -2;
    operator_delete_array();
    local_248 = 0x68;
    local_23c = local_23c + -1;
    if (local_8c != (uint *)0x0) {
      if (local_8c[-3] != 0xffffffff) {
        local_3a8 = local_8c + -3;
        if (local_3a8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_3a8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_3a8 = *local_3a8 - 1;
          iVar3 = *local_3a8 + 1;
        }
        if (iVar3 != 0) goto LAB_0046f6af;
      }
      local_3ac = local_8c + -3;
      local_3b0 = local_8c + -3;
      operator_delete();
      local_3b4 = 0;
      local_3b8 = local_94;
      local_8c = (uint *)0x0;
    }
LAB_0046f6af:
    uVar5 = uVar5 + 1;
  }
  local_3c0 = local_70;
  iVar3 = FUN_004a76a8(*local_4c,0x1102,2,local_70);
  local_3b9 = iVar3 != 0;
  local_248 = 8;
  iVar3 = FUN_004cbb48(local_44);
  if (iVar3 == -0x10000) {
    local_248 = 0x158;
    local_3c8 = local_40;
    if (local_40 == -0x10000) {
      local_3c8 = 0;
    }
    uVar2 = FUN_004a76a8(*local_1c,0x110a,4,local_3c8);
    FUN_004cb3b4(&local_1a4,local_1c,uVar2);
    local_23c = local_23c + 4;
    local_3c4 = &local_1a4;
    local_3cc = local_1a0;
    if (local_1a0 == -0x10000) {
      local_3cc = 0;
    }
    uVar2 = FUN_004a76a8(*local_17c,0x110a,4,local_3cc);
    FUN_004cb3b4(local_1d4,local_3c4[10],uVar2);
    local_23c = local_23c + 4;
    FUN_004cb40c((undefined4 *)local_44,local_1d4);
    local_23c = local_23c + -2;
    operator_delete_array();
    local_248 = 8;
    local_23c = local_23c + -2;
    operator_delete_array();
  }
  iVar3 = FUN_004cbb48(local_44);
  if ((iVar3 == 0) || (iVar3 = FUN_004cbb48(local_44), iVar3 == -0x10000)) {
    local_3cd = '\0';
  }
  else {
    local_3cd = '\x01';
  }
  if (local_3cd != '\0') {
    local_3d4 = local_40;
    iVar3 = FUN_004a76a8(*local_1c,0x110b,9,local_40);
    local_3ce = iVar3 != 0;
    local_248 = 0x17c;
    FUN_004cb3b4(&local_204,(int)param_1 + 0x166,0xffff0000);
    local_23c = local_23c + 4;
    local_3dc = &local_204;
    local_3e0 = local_200;
    if (local_200 == -0x10000) {
      local_3e0 = 0;
    }
    uVar2 = FUN_004a76a8(*local_1dc,0x110a,4,local_3e0);
    FUN_004cb3b4(&local_234,local_3dc[10],uVar2);
    local_3d8 = &local_234;
    local_23c = local_23c + 4;
    FUN_004a76a8(*local_20c,0x1114,0,local_230);
    local_23c = local_23c + -2;
    operator_delete_array();
    local_248 = 8;
    local_23c = local_23c + -2;
    operator_delete_array();
  }
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0xb,1,0);
  if (local_3cd != '\0') {
    local_3e8 = local_40;
    FUN_004a76a8(*local_1c,0x1114,0,local_40);
  }
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x166) + 8) + 0x68))();
  local_23c = local_23c + -2;
  operator_delete_array();
  local_23c = local_23c + -2;
  operator_delete_array();
  local_23c = local_23c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_3ec = local_c + -3;
      if (local_3ec == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_3ec == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_3ec = *local_3ec - 1;
        iVar3 = *local_3ec + 1;
      }
      if (iVar3 != 0) goto LAB_0046fae1;
    }
    local_3f0 = local_c + -3;
    local_3f4 = local_c + -3;
    operator_delete();
  }
LAB_0046fae1:
  *in_FS_OFFSET = local_258;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046faf0  FUN_0046faf0   (92 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046faf0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  if (iVar1 >> 7 < 0x11) {
    FUN_0046fb4c(param_1,param_2,param_3);
  }
  else {
    FUN_0046fb4c(param_1,param_1 + 0x800,param_3);
    FUN_00470bec(param_1 + 0x800,param_2,0,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fb4c  FUN_0046fb4c   (3582 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0046fdf7) */
/* WARNING: Removing unreachable block (ram,0x0046fce5) */
/* WARNING: Removing unreachable block (ram,0x004702e1) */
/* WARNING: Removing unreachable block (ram,0x004703e5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffe6c : 0x004702ef */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0046fb4c(int param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffc08;
  undefined4 in_stack_fffffc0c;
  undefined4 in_stack_fffffc14;
  undefined4 uVar9;
  undefined4 in_stack_fffffc1c;
  undefined4 uVar10;
  undefined1 auStack_3a0 [4];
  undefined4 uStack_39c;
  undefined4 local_b8;
  undefined **local_94;
  undefined **local_90;
  undefined1 local_8c [8];
  int *local_84;
  undefined4 local_7c;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_5c;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined4 local_14;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4fe6f0);
  iVar7 = param_1;
  if (param_1 != param_2) {
joined_r0x0046fb8c:
    do {
      iVar8 = iVar7 + 0x80;
      if (iVar8 == param_2) break;
      local_84 = (int *)0x0;
      iVar3 = *(int *)(*(int *)(iVar7 + 0x88) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar7 + 0x88) + -4);
        local_84 = std::string::__getRep(local_8c,uVar1,uVar1);
        local_84 = local_84 + 3;
        memcpy(local_84,*(undefined4 **)(iVar7 + 0x88),uVar1);
      }
      else {
        local_84 = *(int **)(iVar7 + 0x88);
        piVar4 = local_84 + -3;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_7c = *(undefined4 *)(iVar7 + 0x90);
      local_70 = 0;
      local_6c = 0;
      local_5c = 0;
      local_74 = 0x40;
      iVar3 = operator_new();
      if (iVar3 == 0) {
        local_8 = &std::bad_alloc::vftable;
        uStack_39c = 0x46fd79;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_70 = iVar3;
      local_6c = FUN_0040a988(*(int *)(iVar7 + 0x9c),*(int *)(iVar7 + 0xa0),iVar3);
      local_50 = 0;
      local_4c = 0;
      local_3c = 0;
      local_54 = 0x40;
      local_5c = local_6c;
      iVar3 = operator_new();
      if (iVar3 == 0) {
        local_c = &std::bad_alloc::vftable;
        uStack_39c = 0x46fe8b;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
      }
      local_50 = iVar3;
      local_4c = FUN_0040a988(*(int *)(iVar7 + 0xbc),*(int *)(iVar7 + 0xc0),iVar3);
      local_2c = (int *)0x0;
      iVar3 = *(int *)(*(int *)(iVar7 + 0xe0) + -0xc);
      local_3c = local_4c;
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar7 + 0xe0) + -4);
        local_2c = std::string::__getRep(local_34,uVar1,uVar1);
        local_2c = local_2c + 3;
        memcpy(local_2c,*(undefined4 **)(iVar7 + 0xe0),uVar1);
      }
      else {
        local_2c = *(int **)(iVar7 + 0xe0);
        piVar4 = local_2c + -3;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_1c = (int *)0x0;
      iVar3 = *(int *)(*(int *)(iVar7 + 0xf0) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar7 + 0xf0) + -4);
        local_1c = std::string::__getRep(local_24,uVar1,uVar1);
        local_1c = local_1c + 3;
        memcpy(local_1c,*(undefined4 **)(iVar7 + 0xf0),uVar1);
      }
      else {
        local_1c = *(int **)(iVar7 + 0xf0);
        piVar4 = local_1c + -3;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_14 = *(undefined4 *)(iVar7 + 0xf8);
      cVar2 = (*(code *)param_3)();
      if (cVar2 == '\0') {
        if (local_84[-3] == -1 || local_84[-3] + 1 < 0) {
          uVar1 = local_84[-1];
          piVar4 = std::string::__getRep(&GHIDRA_STACK(0xfffffc08),uVar1,uVar1);
          piVar4 = piVar4 + 3;
          memcpy(piVar4,local_84,uVar1);
        }
        else {
          piVar6 = local_84 + -3;
          piVar4 = local_84;
          if (piVar6 != &DAT_00513d58) {
            *piVar6 = *piVar6 + 1;
          }
        }
        uVar10 = 0x40;
        uVar9 = local_7c;
        iVar7 = operator_new();
        if (iVar7 == 0) {
          local_90 = &std::bad_alloc::vftable;
          FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_90,0,&LAB_00404134,1,0,0,0);
        }
        iVar3 = FUN_0040a988(local_70,local_6c,iVar7);
        iVar5 = operator_new();
        if (iVar5 == 0) {
          local_94 = &std::bad_alloc::vftable;
          FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_94,0,&LAB_00404134,1,0,0,0);
        }
        FUN_0040a988(local_50,local_4c,iVar5);
        if (local_2c[-3] == -1 || local_2c[-3] + 1 < 0) {
          uVar1 = local_2c[-1];
          piVar6 = std::string::__getRep(auStack_3a0,uVar1,uVar1);
          memcpy(piVar6 + 3,local_2c,uVar1);
        }
        else {
          piVar6 = local_2c + -3;
          if (piVar6 != &DAT_00513d58) {
            *piVar6 = *piVar6 + 1;
          }
        }
        if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
          uVar1 = local_1c[-1];
          piVar6 = std::string::__getRep(&GHIDRA_STACK(0xfffffc70),uVar1,uVar1);
          memcpy(piVar6 + 3,local_1c,uVar1);
        }
        else {
          piVar6 = local_1c + -3;
          if (piVar6 != &DAT_00513d58) {
            *piVar6 = *piVar6 + 1;
          }
        }
        FUN_0047094c(iVar8,in_stack_fffffc08,in_stack_fffffc0c,(int)piVar4,in_stack_fffffc14,uVar9,
                     in_stack_fffffc1c,uVar10,iVar7,iVar3);
      }
      else {
        FUN_0040ab04(param_1,iVar8,iVar7 + 0x100);
        FUN_004cf384(param_1,(int)local_8c);
        FUN_0040ab88(param_1 + 0x18,(int)&local_74);
        FUN_0040ab88(param_1 + 0x38,(int)&local_54);
        FUN_004cf384(param_1 + 0x58,(int)local_34);
        FUN_004cf384(param_1 + 0x68,(int)local_24);
        *(undefined4 *)(param_1 + 0x10) = local_7c;
        *(undefined4 *)(param_1 + 0x78) = local_14;
      }
      if (local_1c != (int *)0x0) {
        if (local_1c[-3] != -1) {
          piVar4 = local_1c + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar7 = *piVar4 + 1;
          }
          if (iVar7 != 0) goto LAB_004707a4;
        }
        operator_delete();
        local_1c = (int *)0x0;
      }
LAB_004707a4:
      if (local_2c != (int *)0x0) {
        if (local_2c[-3] != -1) {
          piVar4 = local_2c + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar7 = *piVar4 + 1;
          }
          if (iVar7 != 0) goto LAB_0047083a;
        }
        operator_delete();
        local_2c = (int *)0x0;
      }
LAB_0047083a:
      FUN_0040b4f0(&local_54,local_50,local_4c);
      operator_delete();
      FUN_0040b4f0(&local_74,local_70,local_6c);
      operator_delete();
      iVar7 = iVar8;
      if (local_84 != (int *)0x0) {
        if (local_84[-3] != -1) {
          piVar4 = local_84 + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar8 = *piVar4 + 1;
          }
          if (iVar8 != 0) goto joined_r0x0046fb8c;
        }
        operator_delete();
      }
    } while( true );
  }
  *in_FS_OFFSET = local_b8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047094c  FUN_0047094c   (670 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047094c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_00000068;
  int in_stack_00000078;
  undefined4 in_stack_00000080;
  code *in_stack_00000088;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fe7e0);
  while( true ) {
    cVar1 = (*in_stack_00000088)();
    if (cVar1 == '\0') break;
    FUN_004cf384(param_1,param_1 + -0x80);
    FUN_0040ab88(param_1 + 0x18,param_1 + -0x68);
    FUN_0040ab88(param_1 + 0x38,param_1 + -0x48);
    FUN_004cf384(param_1 + 0x58,param_1 + -0x28);
    FUN_004cf384(param_1 + 0x68,param_1 + -0x18);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + -0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + -8);
    param_1 = param_1 + -0x80;
  }
  FUN_004cf384(param_1,(int)&param_2);
  FUN_0040ab88(param_1 + 0x18,(int)&param_8);
  FUN_0040ab88(param_1 + 0x38,(int)&GHIDRA_STACK(0x00000040));
  FUN_004cf384(param_1 + 0x58,(int)&GHIDRA_STACK(0x00000060));
  FUN_004cf384(param_1 + 0x68,(int)&GHIDRA_STACK(0x00000070));
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)(param_1 + 0x78) = in_stack_00000080;
  if (in_stack_00000078 != 0) {
    if (*(int *)(in_stack_00000078 + -0xc) != -1) {
      piVar3 = (int *)(in_stack_00000078 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00470ab7;
    }
    operator_delete();
    in_stack_00000078 = 0;
  }
LAB_00470ab7:
  if (in_stack_00000068 != 0) {
    if (*(int *)(in_stack_00000068 + -0xc) != -1) {
      piVar3 = (int *)(in_stack_00000068 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00470b2a;
    }
    operator_delete();
    in_stack_00000068 = 0;
  }
LAB_00470b2a:
  FUN_0040b4f0(&GHIDRA_STACK(0x00000040),in_stack_00000044,in_stack_00000048);
  operator_delete();
  FUN_0040b4f0(&param_8,param_9,param_10);
  operator_delete();
  if (param_4 != 0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      piVar3 = (int *)(param_4 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00470bd9;
    }
    operator_delete();
  }
LAB_00470bd9:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00470bec  FUN_00470bec   (1339 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00470d12) */
/* WARNING: Removing unreachable block (ram,0x00470de3) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff9c : 0x00470d1a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00470bec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe10;
  undefined4 in_stack_fffffe14;
  undefined4 in_stack_fffffe1c;
  undefined4 uVar7;
  undefined4 in_stack_fffffe24;
  undefined4 uVar8;
  undefined1 local_198 [8];
  int *local_190;
  undefined1 local_188 [8];
  int *local_180;
  undefined4 local_178;
  undefined4 uStack_170;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  uStack_170 = 0x470c02;
  __InitExceptBlockLDTC(0x4fe874);
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    uStack_170 = param_4;
    iVar3 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      piVar2 = std::string::__getRep(&GHIDRA_STACK(0xfffffe10),uVar1,uVar1);
      piVar2 = piVar2 + 3;
      memcpy(piVar2,*(undefined4 **)(param_1 + 8),uVar1);
    }
    else {
      piVar2 = *(int **)(param_1 + 8);
      piVar6 = piVar2 + -3;
      if (piVar6 != &DAT_00513d58) {
        *piVar6 = *piVar6 + 1;
      }
    }
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = 0x40;
    iVar3 = operator_new();
    if (iVar3 == 0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    iVar4 = FUN_0040a988(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),iVar3);
    iVar5 = operator_new();
    if (iVar5 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040a988(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40),iVar5);
    local_190 = (int *)0x0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x60) + -0xc);
    if (iVar5 == -1 || iVar5 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x60) + -4);
      local_190 = std::string::__getRep(local_198,uVar1,uVar1);
      local_190 = local_190 + 3;
      memcpy(local_190,*(undefined4 **)(param_1 + 0x60),uVar1);
    }
    else {
      local_190 = *(int **)(param_1 + 0x60);
      piVar6 = local_190 + -3;
      if (piVar6 != &DAT_00513d58) {
        *piVar6 = *piVar6 + 1;
      }
    }
    local_180 = (int *)0x0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x70) + -0xc);
    if (iVar5 == -1 || iVar5 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x70) + -4);
      local_180 = std::string::__getRep(local_188,uVar1,uVar1);
      local_180 = local_180 + 3;
      memcpy(local_180,*(undefined4 **)(param_1 + 0x70),uVar1);
    }
    else {
      local_180 = *(int **)(param_1 + 0x70);
      piVar6 = local_180 + -3;
      if (piVar6 != &DAT_00513d58) {
        *piVar6 = *piVar6 + 1;
      }
    }
    local_178 = *(undefined4 *)(param_1 + 0x78);
    FUN_0047094c(param_1,in_stack_fffffe10,in_stack_fffffe14,(int)piVar2,in_stack_fffffe1c,uVar7,
                 in_stack_fffffe24,uVar8,iVar3,iVar4);
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00471128  FUN_00471128   (1699 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004712d9) */
/* WARNING: Removing unreachable block (ram,0x004713bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00471128(uint param_1,uint param_2,undefined4 param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffde8;
  undefined4 in_stack_fffffdec;
  undefined1 auStack_1c0 [8];
  int *piStack_1b8;
  undefined1 auStack_1b0 [8];
  int *piStack_1a8;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4fe914);
  while( true ) {
    iVar6 = param_2 - param_1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x7f;
    }
    if (iVar6 >> 7 < 0x11) break;
    iVar6 = param_2 - param_1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x7f;
    }
    iVar2 = iVar6 >> 8;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar6 >> 7 & 1U) != 0);
    }
    uVar3 = iVar2 * 0x80 + param_1;
    cVar1 = (*(code *)param_4)();
    if (cVar1 == '\0') {
      cVar1 = (*(code *)param_4)();
      uVar7 = param_1;
      if ((cVar1 == '\0') && (cVar1 = (*(code *)param_4)(), uVar7 = uVar3, cVar1 != '\0')) {
        uVar7 = param_2 - 0x80;
      }
    }
    else {
      cVar1 = (*(code *)param_4)();
      uVar7 = uVar3;
      if ((cVar1 == '\0') && (cVar1 = (*(code *)param_4)(), uVar7 = param_1, cVar1 != '\0')) {
        uVar7 = param_2 - 0x80;
      }
    }
    iVar6 = *(int *)(*(int *)(uVar7 + 8) + -0xc);
    if (iVar6 == -1 || iVar6 + 1 < 0) {
      uVar3 = *(uint *)(*(int *)(uVar7 + 8) + -4);
      piVar5 = std::string::__getRep(&GHIDRA_STACK(0xfffffde8),uVar3,uVar3);
      piVar5 = piVar5 + 3;
      memcpy(piVar5,*(undefined4 **)(uVar7 + 8),uVar3);
    }
    else {
      piVar5 = *(int **)(uVar7 + 8);
      piVar4 = piVar5 + -3;
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    iVar6 = operator_new();
    if (iVar6 == 0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040a988(*(int *)(uVar7 + 0x1c),*(int *)(uVar7 + 0x20),iVar6);
    iVar6 = operator_new();
    if (iVar6 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040a988(*(int *)(uVar7 + 0x3c),*(int *)(uVar7 + 0x40),iVar6);
    piStack_1b8 = (int *)0x0;
    iVar6 = *(int *)(*(int *)(uVar7 + 0x60) + -0xc);
    if (iVar6 == -1 || iVar6 + 1 < 0) {
      uVar3 = *(uint *)(*(int *)(uVar7 + 0x60) + -4);
      piStack_1b8 = std::string::__getRep(auStack_1c0,uVar3,uVar3);
      piStack_1b8 = piStack_1b8 + 3;
      memcpy(piStack_1b8,*(undefined4 **)(uVar7 + 0x60),uVar3);
    }
    else {
      piStack_1b8 = *(int **)(uVar7 + 0x60);
      piVar4 = piStack_1b8 + -3;
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    piStack_1a8 = (int *)0x0;
    iVar6 = *(int *)(*(int *)(uVar7 + 0x70) + -0xc);
    if (iVar6 == -1 || iVar6 + 1 < 0) {
      uVar3 = *(uint *)(*(int *)(uVar7 + 0x70) + -4);
      piStack_1a8 = std::string::__getRep(auStack_1b0,uVar3,uVar3);
      piStack_1a8 = piStack_1a8 + 3;
      memcpy(piStack_1a8,*(undefined4 **)(uVar7 + 0x70),uVar3);
    }
    else {
      piStack_1a8 = *(int **)(uVar7 + 0x70);
      piVar4 = piStack_1a8 + -3;
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    uVar3 = FUN_004717cc(param_1,param_2,in_stack_fffffde8,in_stack_fffffdec,(int)piVar5);
    iVar6 = uVar3 - param_1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x7f;
    }
    iVar2 = param_2 - uVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if (iVar6 >> 7 < iVar2 >> 7) {
      piStack_1a8 = (int *)0x47179d;
      FUN_00471128(param_1,uVar3,0,param_4);
      param_1 = uVar3;
    }
    else {
      piStack_1a8 = (int *)0x471764;
      FUN_00471128(uVar3,param_2,0,param_4);
      param_2 = uVar3;
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004717cc  FUN_004717cc   (2862 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00471beb) */
/* WARNING: Removing unreachable block (ram,0x00471cfd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffee8 : 0x00471bf9 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl FUN_004717cc(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_0000006c;
  int in_stack_0000007c;
  code *in_stack_0000008c;
  undefined4 local_b0;
  undefined1 local_8c [8];
  int *local_84;
  undefined4 local_7c;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_5c;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_3c;
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined4 local_14;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4fe9a8);
  while( true ) {
    while (cVar3 = (*in_stack_0000008c)(), cVar3 != '\0') {
      param_1 = param_1 + 0x80;
    }
    do {
      uVar2 = param_2;
      param_2 = uVar2 - 0x80;
      cVar3 = (*in_stack_0000008c)();
    } while (cVar3 != '\0');
    if (param_2 <= param_1) break;
    local_84 = (int *)0x0;
    iVar4 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_84 = std::string::__getRep(local_8c,uVar1,uVar1);
      local_84 = local_84 + 3;
      memcpy(local_84,*(undefined4 **)(param_1 + 8),uVar1);
    }
    else {
      local_84 = *(int **)(param_1 + 8);
      piVar5 = local_84 + -3;
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    local_7c = *(undefined4 *)(param_1 + 0x10);
    local_70 = 0;
    local_6c = 0;
    local_5c = 0;
    local_74 = 0x40;
    iVar4 = operator_new();
    if (iVar4 == 0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    local_70 = iVar4;
    local_6c = FUN_0040a988(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x20),iVar4);
    local_50 = 0;
    local_4c = 0;
    local_3c = 0;
    local_54 = 0x40;
    local_5c = local_6c;
    iVar4 = operator_new();
    if (iVar4 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
    }
    local_50 = iVar4;
    local_4c = FUN_0040a988(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40),iVar4);
    local_2c = (int *)0x0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x60) + -0xc);
    local_3c = local_4c;
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x60) + -4);
      local_2c = std::string::__getRep(local_34,uVar1,uVar1);
      local_2c = local_2c + 3;
      memcpy(local_2c,*(undefined4 **)(param_1 + 0x60),uVar1);
    }
    else {
      local_2c = *(int **)(param_1 + 0x60);
      piVar5 = local_2c + -3;
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    local_1c = (int *)0x0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x70) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x70) + -4);
      local_1c = std::string::__getRep(local_24,uVar1,uVar1);
      local_1c = local_1c + 3;
      memcpy(local_1c,*(undefined4 **)(param_1 + 0x70),uVar1);
    }
    else {
      local_1c = *(int **)(param_1 + 0x70);
      piVar5 = local_1c + -3;
      if (piVar5 != &DAT_00513d58) {
        *piVar5 = *piVar5 + 1;
      }
    }
    local_14 = *(undefined4 *)(param_1 + 0x78);
    FUN_004cf384(param_1,param_2);
    FUN_0040ab88(param_1 + 0x18,uVar2 - 0x68);
    FUN_0040ab88(param_1 + 0x38,uVar2 - 0x48);
    FUN_004cf384(param_1 + 0x58,uVar2 - 0x28);
    FUN_004cf384(param_1 + 0x68,uVar2 - 0x18);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(uVar2 - 0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(uVar2 - 8);
    FUN_004cf384(param_2,(int)local_8c);
    FUN_0040ab88(uVar2 - 0x68,(int)&local_74);
    FUN_0040ab88(uVar2 - 0x48,(int)&local_54);
    FUN_004cf384(uVar2 - 0x28,(int)local_34);
    FUN_004cf384(uVar2 - 0x18,(int)local_24);
    *(undefined4 *)(uVar2 - 0x70) = local_7c;
    *(undefined4 *)(uVar2 - 8) = local_14;
    if (local_1c != (int *)0x0) {
      if (local_1c[-3] != -1) {
        piVar5 = local_1c + -3;
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_0047216d;
      }
      operator_delete();
      local_1c = (int *)0x0;
    }
LAB_0047216d:
    if (local_2c != (int *)0x0) {
      if (local_2c[-3] != -1) {
        piVar5 = local_2c + -3;
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_00472203;
      }
      operator_delete();
      local_2c = (int *)0x0;
    }
LAB_00472203:
    FUN_0040b4f0(&local_54,local_50,local_4c);
    operator_delete();
    FUN_0040b4f0(&local_74,local_70,local_6c);
    operator_delete();
    if (local_84 != (int *)0x0) {
      if (local_84[-3] != -1) {
        piVar5 = local_84 + -3;
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_004722de;
      }
      operator_delete();
      local_84 = (int *)0x0;
    }
LAB_004722de:
    param_1 = param_1 + 0x80;
  }
  if (in_stack_0000007c != 0) {
    if (*(int *)(in_stack_0000007c + -0xc) != -1) {
      piVar5 = (int *)(in_stack_0000007c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004718fc;
    }
    operator_delete();
    in_stack_0000007c = 0;
  }
LAB_004718fc:
  if (in_stack_0000006c != 0) {
    if (*(int *)(in_stack_0000006c + -0xc) != -1) {
      piVar5 = (int *)(in_stack_0000006c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0047199b;
    }
    operator_delete();
    in_stack_0000006c = 0;
  }
LAB_0047199b:
  FUN_0040b4f0(&GHIDRA_STACK(0x00000044),in_stack_00000048,in_stack_0000004c);
  operator_delete();
  FUN_0040b4f0(&GHIDRA_STACK(0x00000024),in_stack_00000028,in_stack_0000002c);
  operator_delete();
  if (param_5 != 0) {
    if (*(int *)(param_5 + -0xc) != -1) {
      piVar5 = (int *)(param_5 + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00471a91;
    }
    operator_delete();
  }
LAB_00471a91:
  *in_FS_OFFSET = local_b0;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004722fc  FUN_004722fc   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004722fc(int param_1)

{
  char cVar1;
  undefined4 local_40 [15];
  
  cVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x214) + 0xc) + 0x3c))();
  if (cVar1 != '\0') {
    FUN_00485614(local_40,*(int **)(param_1 + 0x214),'\x01',0xf800003f);
    FUN_0041ae3c((undefined4 *)(*(int *)(param_1 + 0x60) + 0x170),(int)local_40);
    FUN_00469120(*(int **)(param_1 + 0x214),(LPARAM)local_40,1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472370  FUN_00472370   (64 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00472370(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x88) + -6;
  iVar3 = *(int *)(param_1 + 0x88) + 3;
  if (iVar1 < 0) {
    iVar3 = iVar3 - iVar1;
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  iVar2 = (iVar2 >> 4) + -1;
  if ((iVar2 < iVar3) && (iVar1 = iVar1 - (iVar3 - iVar2), iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004723b0  FUN_004723b0   (2836 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00472632) */
/* WARNING: Removing unreachable block (ram,0x00472c9d) */
int * __cdecl FUN_004723b0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_fc;
  undefined1 *local_f4;
  undefined4 local_f0;
  char *local_ec;
  char *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  undefined1 *local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  undefined4 local_9c;
  undefined2 local_8c;
  int local_80;
  undefined1 local_78 [8];
  int local_70;
  undefined1 local_68 [8];
  int local_60;
  undefined1 local_58 [8];
  char *local_50;
  int local_48 [2];
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  uint *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4febe0);
  local_8c = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x132;
    *(int **)((int)param_1 + 0x132) = param_1 + 0x2a;
    param_1[0x2a] = (int)(param_1 + 0x27);
    param_1[0x2b] = (int)(param_1 + 0x28);
    *(int **)((int)param_1 + 0x136) = param_1 + 0x27;
    *(int **)((int)param_1 + 0x13a) = param_1 + 0x28;
    param_1[1] = (int)(param_1 + 0x2a);
    param_1[2] = (int)(param_1 + 0x27);
    param_1[3] = (int)(param_1 + 0x28);
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    *(undefined4 *)((int)param_1 + 0x12e) = 0;
    param_1[0x27] = (int)&OWL::TEventHandler::vftable;
    param_1[0x28] = (int)&OWL::TStreamableBase::vftable;
    local_80 = local_80 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x2a,1);
    local_80 = local_80 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x132),1);
    local_80 = local_80 + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x51;
  iVar6 = 0;
  uVar5 = 1;
  local_8 = (int *)operator_new();
  if (local_8 != (int *)0x0) {
    local_8c = 0x20;
    FUN_0046a40c(local_8,0,param_4,param_6);
    local_8c = 0x14;
  }
  if (local_8 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *local_8;
  }
  FUN_004ae248(param_1,1,param_3,(uint *)"DefinitionFrame",iVar3,uVar5,iVar6);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x51;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x51;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x51;
  *(undefined ***)((int)param_1 + 0x35) = &DefinitionViewFrame::vftable;
  param_1[4] = (int)&PTR_LAB_004fef38;
  *(undefined ***)param_1[2] = &PTR_LAB_004fef50;
  *(undefined ***)param_1[3] = &PTR_LAB_004fef5c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004fef68;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004feff8;
  param_1[0x12] = param_4;
  local_a0 = param_1 + 0x22;
  param_1[0x24] = 0;
  local_8c = 8;
  param_1[0x24] = (int)&DAT_00513d64;
  local_fc = param_1[0x24];
  local_80 = local_80 + 3;
  local_c = (int *)operator_new();
  if (local_c != (int *)0x0) {
    local_8c = 0x44;
    FUN_0047be04(local_c,0,param_1[1],3,0x40);
    local_8c = 0x38;
  }
  param_1[0x13] = (int)local_c;
  (**(code **)(*(int *)((int)param_1 + 0x35) + 4))();
  local_10 = (int *)operator_new();
  if (local_10 != (int *)0x0) {
    local_8c = 0x5c;
    iVar6 = 0;
    local_14 = (uint *)operator_new();
    if (local_14 != (uint *)0x0) {
      local_8c = 0x68;
      FUN_00490fa8(local_14,10,'\0',0);
      local_8c = 0x5c;
    }
    FUN_0048ce64(local_10,0,param_1[1],0,local_14,iVar6);
  }
  piVar4 = local_10;
  local_8c = 8;
  *(undefined1 *)((int)local_10 + 0x36) = 2;
  local_a4 = GetSystemMetrics(7);
  local_a8 = local_a4 << 3;
  local_18 = (int *)operator_new();
  if (local_18 != (int *)0x0) {
    local_8c = 0x80;
    FUN_00488c78(local_18,(uint *)0x31c4,0x31c4,'\0',1,0,'\0');
    local_8c = 0x74;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_1c = (int *)operator_new();
  if (local_1c != (int *)0x0) {
    local_8c = 0x98;
    FUN_00490848(local_1c,local_a4,0,1);
    local_8c = 0x8c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_20 = (int *)operator_new();
  if (local_20 != (int *)0x0) {
    local_8c = 0xb0;
    FUN_00488c78(local_20,(uint *)0x31ba,0x31ba,'\0',1,0,'\0');
    local_8c = 0xa4;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_24 = (int *)operator_new();
  if (local_24 != (int *)0x0) {
    local_8c = 200;
    FUN_00490848(local_24,local_a8,0,1);
    local_8c = 0xbc;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_28 = (int *)operator_new();
  if (local_28 != (int *)0x0) {
    local_8c = 0xe0;
    FUN_00488c78(local_28,(uint *)0x1d42,0x1d42,'\0',1,0,'\0');
    local_8c = 0xd4;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_2c = (int *)operator_new();
  if (local_2c != (int *)0x0) {
    local_8c = 0xf8;
    FUN_00490848(local_2c,local_a4,0,1);
    local_8c = 0xec;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_30 = (int *)operator_new();
  if (local_30 != (int *)0x0) {
    local_8c = 0x110;
    FUN_00488c78(local_30,(uint *)0x31a6,0x31a6,'\0',1,0,'\0');
    local_8c = 0x104;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_34 = (int *)operator_new();
  if (local_34 != (int *)0x0) {
    local_8c = 0x128;
    FUN_00490848(local_34,local_a8,0,1);
    local_8c = 0x11c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_38 = (int *)operator_new();
  if (local_38 != (int *)0x0) {
    local_8c = 0x140;
    FUN_00488c78(local_38,(uint *)0x1658,0x316a,'\0',1,0,'\0');
    local_8c = 0x134;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_3c = (int *)operator_new();
  if (local_3c != (int *)0x0) {
    local_8c = 0x158;
    FUN_00490848(local_3c,local_a4,0,1);
    local_8c = 0x14c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  local_40 = (int *)operator_new();
  if (local_40 != (int *)0x0) {
    local_8c = 0x170;
    FUN_00488c78(local_40,(uint *)0x1662,0x3174,'\0',1,0,'\0');
    local_8c = 0x164;
  }
  (**(code **)(piVar4[6] + 0x14))();
  (**(code **)(*(int *)((int)param_1 + 0x35) + 4))();
  FUN_004e0344((undefined1 *)(param_1 + 0x14),(byte *)" - %s [%d]");
  FUN_004cf41c((int)(param_1 + 0x22),(uint *)(param_1 + 0x14));
  FUN_004e0344((undefined1 *)(param_1 + 0x14),(byte *)"%s%d%s");
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_8c = 8;
  BVar1 = SystemParametersInfoA(0x30,0,&local_114,0);
  if (BVar1 == 0) goto LAB_00472eb2;
  uVar2 = local_10c - local_114 >> 1;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + ((local_10c - local_114 & 1U) != 0);
  }
  iVar6 = param_1[1];
  *(uint *)(iVar6 + 0x28) = uVar2;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  *(int *)(iVar6 + 0x20) = iVar3 + local_114;
  uVar2 = local_108 - local_110 >> 1;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + ((local_108 - local_110 & 1U) != 0);
  }
  *(uint *)(iVar6 + 0x2c) = uVar2;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  *(int *)(iVar6 + 0x24) = iVar3 + local_110;
  local_8c = 0x188;
  iVar3 = 0;
  iVar6 = 0;
  FUN_004649b0((int)local_68);
  local_80 = local_80 + 1;
  Persist::Persist(local_48,(int)local_68,iVar6,iVar3);
  if (local_60 != 0) {
    if (*(int *)(local_60 + -0xc) != -1) {
      piVar4 = (int *)(local_60 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar6 = *piVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_00472c6c;
    }
    local_ac = local_60 + -0xc;
    local_b0 = local_60 + -0xc;
    operator_delete();
    local_b4 = 0;
    local_b8 = local_68;
    local_60 = 0;
  }
LAB_00472c6c:
  local_50 = &DAT_00513d64;
  local_80 = local_80 + 1;
  puVar7 = local_58;
  local_8c = 0x1b8;
  std::string::string_from_cstr((int)local_78,(uint *)(param_1 + 0x14));
  local_80 = local_80 + 1;
  Persist::QueryValueSized((int)local_48,(int)local_78,(int)puVar7);
  local_80 = local_80 + -1;
  if (local_70 != 0) {
    if (*(int *)(local_70 + -0xc) != -1) {
      piVar4 = (int *)(local_70 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar6 = *piVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_00472d75;
    }
    local_c4 = local_70 + -0xc;
    local_c8 = local_70 + -0xc;
    operator_delete();
    local_cc = 0;
    local_d0 = local_78;
    local_70 = 0;
  }
LAB_00472d75:
  local_8c = 0x17c;
  if (*(int *)(local_50 + -4) != 0) {
    FUN_0044ee84(local_50,&local_d4,&local_d8,&local_dc,&local_e0,&local_e4);
    iVar6 = FUN_004153ec(local_d8,local_dc,local_e0,local_e4);
    if (iVar6 != 0) {
      iVar6 = param_1[1];
      *(int *)(iVar6 + 0x20) = local_d8;
      *(int *)(iVar6 + 0x24) = local_dc;
      *(int *)(iVar6 + 0x28) = local_e0;
      *(int *)(iVar6 + 0x2c) = local_e4;
    }
  }
  local_80 = local_80 + -1;
  if (local_50 != (char *)0x0) {
    if (*(int *)(local_50 + -0xc) != -1) {
      piVar4 = (int *)(local_50 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar6 = *piVar4 + 1;
      }
      if (iVar6 != 0) goto LAB_00472e9b;
    }
    local_e8 = local_50 + -0xc;
    local_ec = local_50 + -0xc;
    operator_delete();
    local_f0 = 0;
    local_f4 = local_58;
    local_50 = (char *)0x0;
  }
LAB_00472e9b:
  local_80 = local_80 + -1;
  Persist::_dtor((int)local_48,2);
LAB_00472eb2:
  *in_FS_OFFSET = local_9c;
  return param_1;
}

} // namespace tea

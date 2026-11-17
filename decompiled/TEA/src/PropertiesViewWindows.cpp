// TEA.exe — application module "PropertiesViewWindows"
// 75 functions, 0x00413c7c..0x004178ac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00413c7c  PropertiesViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PropertiesViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl PropertiesViewWindows::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PropertiesViewWindows::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::vf14(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413cc4  PropertiesViewWindows::EvMsg_19   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   message 0x0019
void __stdcall PropertiesViewWindows::EvMsg_19(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00413ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x9c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413cd4  PropertiesViewWindows::EvSize   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SIZE
//   also: TEAViewWindows::EvSize [owl:response-table]
void __stdcall PropertiesViewWindows::EvSize(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00413cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xa0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413ce4  PropertiesViewWindows::Cmd1530   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND(1530)
void __stdcall PropertiesViewWindows::Cmd1530(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00413ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xb4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413cf4  FUN_00413cf4   (521 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00413e3c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00413e44 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_00413cf4(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint *param_6, int param_7,int param_8)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ed5c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1c);
    param_1[0x1c] = (int)(param_1 + 0x19);
    param_1[0x1d] = (int)(param_1 + 0x1a);
    param_1[1] = (int)(param_1 + 0x19);
    param_1[2] = (int)(param_1 + 0x1a);
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x19] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x48;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x48;
  FUN_004affb4(param_1,1,param_4,param_6,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x48;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x48;
  param_1[3] = (int)&PropertiesViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0ce8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0cf4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0d00;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0x100;
  param_1[0xe] = param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (int)param_6;
  param_1[0x13] = param_7;
  param_1[0x14] = param_3;
  param_1[0x15] = param_8;
  param_1[0x16] = 0;
  if ((param_1[0x15] != 0) && (param_1[0x13] == 0)) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,*param_1,'\x01',0);
    }
    param_1[0x16] = (int)piVar1;
    FUN_004a7910(*piVar1,2);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413f3c  PropertiesViewWindows::~PropertiesViewWindows   (459 bytes)   [rtti:dtor destructor]
//   written in code as PropertiesViewWindows::_dtor
void __cdecl PropertiesViewWindows::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x4ed630);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PropertiesViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f0ce8;
    *(undefined ***)param_1[2] = &PTR_LAB_004f0cf4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0d00;
    if ((uint *)param_1[0xf] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)param_1[0xf],0);
      operator_delete();
    }
    uVar2 = 0;
    while( true ) {
      iVar1 = param_1[8] - param_1[7];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      if ((uint)(iVar1 >> 2) <= uVar2) break;
      operator_delete();
      uVar2 = uVar2 + 1;
    }
    if (param_1[0x16] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x16] + 0xc))();
    }
    FUN_00402f68(param_1 + 6,param_1[7],param_1[8]);
    operator_delete();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x48;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x48;
    OWL::TDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x48;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x48;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x1c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1a,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414108  vshared_414108   (35 bytes)   [rtti:vtable shared-virtual-stub; function defined from vtable-slot]
//   in vtables of 2 classes across unrelated hierarchies (OWL::TMenu, OWL::TXOutOfMemory)
//   file placement: inferred (address adjacency)
/* WARNING: Instruction at (ram,0x0041419c) overlaps instruction at (ram,0x0041419b)
    */
void vshared_414108(char *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar6;
  byte bVar7;
  undefined2 uVar8;
  char *extraout_EDX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined1 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar12;
  byte bVar13;
  int in_stack_00000000;
  byte *pbVar5;
  
  bVar13 = 0;
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  pbVar4 = (byte *)func_0x54418148();
  puVar9 = (undefined1 *)(unaff_ESI + 5 + (uint)bVar13 * -8);
  uVar8 = SUB42(extraout_EDX,0);
  out(*(undefined4 *)(unaff_ESI + 1),uVar8);
  puVar10 = (undefined4 *)(puVar9 + (uint)bVar13 * -2 + 1);
  out(*puVar9,uVar8);
  bVar7 = (byte)extraout_EDX;
  if ((undefined4 *)(unaff_ESI + 1) == (undefined4 *)0x0) {
code_r0x00414135:
    pbVar4[-0x1374aa70] = pbVar4[-0x1374aa70] + bVar7;
    unaff_EBX = *(int **)(in_stack_00000000 + 8);
    __InitExceptBlockLDTC(0x4ed690);
    bVar12 = unaff_EBX[0x15] == 0;
    unaff_EBP = in_stack_00000000;
code_r0x00414155:
    if ((bVar12) || (unaff_EBX[0x16] != 0)) goto LAB_004141ca;
    iVar6 = operator_new();
    *(int *)(unaff_EBP + -4) = iVar6;
    if (iVar6 == 0) {
      piVar11 = *(int **)(unaff_EBP + -4);
    }
    else {
      *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
      FUN_0049f628(*(int **)(unaff_EBP + -4),0,*(undefined4 *)(*unaff_EBX + 0x14),'\x01',0);
      *(undefined2 *)(unaff_EBP + -0x18) = 8;
      piVar11 = *(int **)(unaff_EBP + -4);
    }
    unaff_EBX[0x16] = (int)piVar11;
  }
  else {
    bVar3 = (char)pbVar4 - *pbVar4;
    pbVar5 = (byte *)CONCAT31((int3)((uint)pbVar4 >> 8),bVar3);
    *pbVar5 = *pbVar5 | bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar5[(int)extraout_EDX] = pbVar5[(int)extraout_EDX] + bVar3;
    *(char *)((int)unaff_EDI * 2) = *(char *)((int)unaff_EDI * 2) + (char)((uint)pbVar4 >> 8);
    *extraout_EDX = *extraout_EDX + bVar3;
    *pbVar5 = *pbVar5 + bVar3;
    pbVar4 = &GHIDRA_STACK(0x0000006f) + (int)extraout_EDX * 2;
    bVar3 = *pbVar4;
    bVar1 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar7;
    bVar12 = *pbVar4 == 0;
    piVar11 = puVar10 + (uint)bVar13 * -2 + 1;
    out(*puVar10,uVar8);
    uVar2 = in(uVar8);
    *unaff_EDI = uVar2;
    if (!bVar12) {
      pbVar4 = pbVar5;
      if (!SCARRY1(bVar1,bVar7)) goto code_r0x00414135;
      goto code_r0x00414155;
    }
    if (!CARRY1(bVar3,bVar7)) {
      return;
    }
  }
  FUN_004a7910(*piVar11,2);
  (**(code **)(*(int *)(*(int *)unaff_EBX[0x16] + 8) + 0x10))();
  FUN_00417760(unaff_EBX,*(HWND *)(*(int *)unaff_EBX[0x16] + 0xc));
LAB_004141ca:
  (**(code **)(*(int *)(*unaff_EBX + 8) + 100))();
  BringWindowToTop(*(HWND *)(*unaff_EBX + 0xc));
  unaff_EBX[0x10] = 1;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041413c  PropertiesViewWindows::vf15   (190 bytes)   [rtti:vtable virtual slot 15]
void __cdecl PropertiesViewWindows::vf15(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ed690);
  if ((param_1[0x15] != 0) && (param_1[0x16] == 0)) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,*(undefined4 *)(*param_1 + 0x14),'\x01',0);
    }
    param_1[0x16] = (int)piVar1;
    FUN_004a7910(*piVar1,2);
    (**(code **)(*(int *)(*(int *)param_1[0x16] + 8) + 0x10))();
    FUN_00417760(param_1,*(HWND *)(*(int *)param_1[0x16] + 0xc));
  }
  (**(code **)(*(int *)(*param_1 + 8) + 100))();
  BringWindowToTop(*(HWND *)(*param_1 + 0xc));
  param_1[0x10] = 1;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004141fc  PropertiesViewWindows::vf16   (104 bytes)   [rtti:vtable virtual slot 16]
void __cdecl PropertiesViewWindows::vf16(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4ed6c0);
  if (param_1[0x16] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x16] + 0xc))();
  }
  param_1[0x16] = 0;
  param_1[0x10] = 2;
  (**(code **)(*(int *)(*param_1 + 8) + 100))();
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414264  PropertiesViewWindows::vf17   (18 bytes)   [rtti:vtable virtual slot 17]
bool __cdecl PropertiesViewWindows::vf17(int param_1)

{
  return *(int *)(param_1 + 0x40) == 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414278  FUN_00414278   (1013 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004142b9) */
/* WARNING: Removing unreachable block (ram,0x00414554) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff4c : 0x00414562 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_00414278(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFindFile;
  int iVar4;
  BOOL BVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  _WIN32_FIND_DATAA local_204;
  uint local_c4;
  undefined4 *local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint local_94;
  uint local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined **local_3c;
  uint local_38;
  undefined1 local_34 [8];
  int local_2c;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  
  __InitExceptBlockLDTC(0x4ed74c);
  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  local_64 = 0x40;
  local_68 = 1;
  local_24 = 0x40;
  local_44 = local_44 + 1;
  local_50 = 0x20;
  hFindFile = FindFirstFileA(*(LPCSTR *)(param_2 + 8),&local_204);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      local_50 = 0x2c;
      iVar4 = std::string::string_from_cstr((int)local_34,(uint *)local_204.cFileName);
      local_44 = local_44 + 1;
      if (local_1c == local_c) {
        FUN_0040e240((int)&local_24,local_1c,iVar4);
      }
      else {
        local_74 = local_1c;
        local_38 = local_1c;
        if (local_1c != 0) {
          local_50 = 0x38;
          local_78 = 0;
          *(undefined4 *)(local_1c + 8) = 0;
          iVar1 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
          if (iVar1 == -1 || iVar1 + 1 < 0) {
            uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
            local_8c = std::string::__getRep(local_1c,uVar2,uVar2);
            local_88 = local_8c + 3;
            *(int **)(local_38 + 8) = local_88;
            local_90 = local_38;
            local_98 = *(undefined4 **)(iVar4 + 8);
            local_9c = *(undefined4 **)(local_38 + 8);
            local_94 = uVar2;
            memcpy(local_9c,local_98,uVar2);
          }
          else {
            local_7c = *(undefined4 *)(iVar4 + 8);
            *(undefined4 *)(local_1c + 8) = local_7c;
            local_80 = local_1c;
            local_84 = (int *)(*(int *)(local_1c + 8) + -0xc);
            if (local_84 != &DAT_00513d58) {
              *local_84 = *local_84 + 1;
            }
          }
          local_50 = 0x2c;
        }
        local_1c = local_1c + 0x10;
      }
      local_44 = local_44 + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar6 = (int *)(local_2c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004144b8;
        }
        local_a0 = local_2c + -0xc;
        operator_delete();
        local_a4 = 0;
        local_a8 = local_34;
        local_2c = 0;
      }
LAB_004144b8:
      local_50 = 0x20;
      BVar5 = FindNextFileA(hFindFile,&local_204);
    } while (BVar5 != 0);
    FindClose(hFindFile);
  }
  uVar3 = local_1c;
  uVar2 = local_20;
  if (local_1c != local_20) {
    FUN_00414bd8(local_20,local_1c);
    FUN_004146a0(uVar2,uVar3);
  }
  local_50 = 0x5c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  local_b4 = 0x40;
  local_b8 = 1;
  *param_1 = 0x40;
  local_bc = local_1c - local_20;
  if (local_bc < 0) {
    local_bc = local_bc + 0xf;
  }
  local_bc = local_bc >> 4;
  iVar4 = operator_new();
  if (iVar4 == 0) {
    local_3c = &std::bad_alloc::vftable;
    local_44 = local_44 + 2;
    FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_3c,0,&LAB_00404134,1,0,0,0);
  }
  param_1[1] = iVar4;
  iVar4 = FUN_0040a988(local_20,local_1c,param_1[1]);
  param_1[2] = iVar4;
  local_c0 = param_1 + 2;
  param_1[6] = *local_c0;
  local_50 = 0x74;
  FUN_0040b4f0(&local_24,local_20,local_1c);
  local_c4 = local_20;
  operator_delete();
  *in_FS_OFFSET = local_60;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004146a0  FUN_004146a0   (103 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004146a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 < 0x11) {
    FUN_00414708(param_1,param_2);
  }
  else {
    FUN_00414708(param_1,param_1 + 0x100);
    FUN_00414acc(param_1 + 0x100,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414708  FUN_00414708   (714 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00414708(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffeec;
  undefined4 uVar8;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x4ed7f8);
  iVar2 = param_1;
  if (param_1 == param_2) {
LAB_004149c2:
    *in_FS_OFFSET = local_38;
    return;
  }
joined_r0x00414733:
  do {
    iVar5 = iVar2 + 0x10;
    if (iVar5 == param_2) goto LAB_004149c2;
    local_c = (byte *)0x0;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x18) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar1 = *(uint *)(*(int *)(iVar2 + 0x18) + -4);
      piVar4 = std::string::__getRep(local_14,uVar1,uVar1);
      local_c = (byte *)(piVar4 + 3);
      memcpy((undefined4 *)local_c,*(undefined4 **)(iVar2 + 0x18),uVar1);
    }
    else {
      local_c = *(byte **)(iVar2 + 0x18);
      pbVar6 = local_c + -0xc;
      if (pbVar6 != (byte *)&DAT_00513d58) {
        *(int *)pbVar6 = *(int *)pbVar6 + 1;
      }
    }
    uVar8 = 0x414811;
    iVar3 = FUN_0043c624(local_c,*(int *)(local_c + -4),*(byte **)(param_1 + 8),
                         *(int *)(*(int *)(param_1 + 8) + -4));
    if (iVar3 < 0) {
      FUN_0040e070(param_1,iVar5,iVar2 + 0x20);
      FUN_004cf384(param_1,(int)local_14);
    }
    else {
      if (*(int *)(local_c + -0xc) == -1 || *(int *)(local_c + -0xc) + 1 < 0) {
        uVar1 = *(uint *)(local_c + -4);
        piVar4 = std::string::__getRep(&GHIDRA_STACK(0xfffffeec),uVar1,uVar1);
        pbVar6 = (byte *)(piVar4 + 3);
        memcpy((undefined4 *)pbVar6,(undefined4 *)local_c,uVar1);
      }
      else {
        pbVar7 = local_c + -0xc;
        pbVar6 = local_c;
        if (pbVar7 != (byte *)&DAT_00513d58) {
          *(int *)pbVar7 = *(int *)pbVar7 + 1;
        }
      }
      FUN_004149d4(iVar5,in_stack_fffffeec,uVar8,pbVar6);
    }
    iVar2 = iVar5;
    if (local_c != (byte *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        pbVar6 = local_c + -0xc;
        if (pbVar6 == (byte *)&DAT_00513d58) {
          iVar5 = 1;
        }
        else if (pbVar6 == (byte *)&DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *(int *)pbVar6 = *(int *)pbVar6 + -1;
          iVar5 = *(int *)pbVar6 + 1;
        }
        if (iVar5 != 0) goto joined_r0x00414733;
      }
      operator_delete();
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004149d4  FUN_004149d4   (246 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004149d4(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ed858);
  while( true ) {
    iVar1 = FUN_0043c624(param_4,*(int *)(param_4 + -4),*(byte **)(param_1 + -8),
                         *(int *)(*(int *)(param_1 + -8) + -4));
    if (-1 < iVar1) break;
    FUN_004cf384(param_1,param_1 + -0x10);
    param_1 = param_1 + -0x10;
  }
  FUN_004cf384(param_1,(int)&param_2);
  if (param_4 != (byte *)0x0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      pbVar2 = param_4 + -0xc;
      if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00414ab3;
    }
    operator_delete();
  }
LAB_00414ab3:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414acc  FUN_00414acc   (265 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00414acc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff6c;
  undefined4 in_stack_ffffff70;
  byte *pbVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ed888);
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_1 + 8) + -4);
      piVar3 = std::string::__getRep(&GHIDRA_STACK(0xffffff6c),uVar2,uVar2);
      pbVar5 = (byte *)(piVar3 + 3);
      memcpy((undefined4 *)pbVar5,*(undefined4 **)(param_1 + 8),uVar2);
    }
    else {
      pbVar5 = *(byte **)(param_1 + 8);
      pbVar4 = pbVar5 + -0xc;
      if (pbVar4 != (byte *)&DAT_00513d58) {
        *(int *)pbVar4 = *(int *)pbVar4 + 1;
      }
    }
    FUN_004149d4(param_1,in_stack_ffffff6c,in_stack_ffffff70,pbVar5);
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414bd8  FUN_00414bd8   (682 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00414bd8(uint param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff4c;
  uint in_stack_ffffff50;
  byte *pbVar7;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ed8c4);
  while( true ) {
    iVar3 = param_2 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 < 0x11) break;
    iVar3 = param_2 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = iVar3 >> 5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((iVar3 >> 4 & 1U) != 0);
    }
    uVar6 = iVar5 * 0x10 + param_1;
    iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                         *(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4));
    if (iVar3 < 0) {
      iVar3 = FUN_0043c624(*(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4),
                           *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4));
      uVar4 = uVar6;
      if ((-1 < iVar3) &&
         (iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                               *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4)),
         uVar4 = param_1, iVar3 < 0)) {
        uVar4 = param_2 - 0x10;
      }
    }
    else {
      iVar3 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),
                           *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4));
      uVar4 = param_1;
      if ((-1 < iVar3) &&
         (iVar3 = FUN_0043c624(*(byte **)(uVar6 + 8),*(int *)(*(int *)(uVar6 + 8) + -4),
                               *(byte **)(param_2 - 8),*(int *)(*(int *)(param_2 - 8) + -4)),
         uVar4 = uVar6, iVar3 < 0)) {
        uVar4 = param_2 - 0x10;
      }
    }
    iVar3 = *(int *)(*(int *)(uVar4 + 8) + -0xc);
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(uVar4 + 8) + -4);
      piVar2 = std::string::__getRep(&GHIDRA_STACK(0xffffff4c),uVar6,uVar6);
      pbVar7 = (byte *)(piVar2 + 3);
      memcpy((undefined4 *)pbVar7,*(undefined4 **)(uVar4 + 8),uVar6);
    }
    else {
      pbVar7 = *(byte **)(uVar4 + 8);
      pbVar1 = pbVar7 + -0xc;
      if (pbVar1 != (byte *)&DAT_00513d58) {
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
      }
    }
    uVar6 = FUN_00414e84(param_1,param_2,in_stack_ffffff4c,in_stack_ffffff50,pbVar7);
    iVar3 = uVar6 - param_1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    iVar5 = param_2 - uVar6;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    if (iVar3 >> 4 < iVar5 >> 4) {
      in_stack_ffffff4c = 0x414e52;
      in_stack_ffffff50 = param_1;
      FUN_00414bd8(param_1,uVar6);
      param_1 = uVar6;
    }
    else {
      in_stack_ffffff4c = 0x414e36;
      in_stack_ffffff50 = uVar6;
      FUN_00414bd8(uVar6,param_2);
      param_2 = uVar6;
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414e84  FUN_00414e84   (658 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl FUN_00414e84(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,byte *param_5)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4ed910);
  while( true ) {
    while (iVar1 = FUN_0043c624(*(byte **)(param_1 + 8),*(int *)(*(int *)(param_1 + 8) + -4),param_5
                                ,*(int *)(param_5 + -4)), uVar4 = param_2, iVar1 < 0) {
      param_1 = param_1 + 0x10;
    }
    do {
      param_2 = uVar4 - 0x10;
      iVar1 = FUN_0043c624(param_5,*(int *)(param_5 + -4),*(byte **)(uVar4 - 8),
                           *(int *)(*(int *)(uVar4 - 8) + -4));
      uVar4 = param_2;
    } while (iVar1 < 0);
    if (param_2 <= param_1) break;
    local_c = (int *)0x0;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar4 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_c = std::string::__getRep(local_14,uVar4,uVar4);
      local_c = local_c + 3;
      memcpy(local_c,*(undefined4 **)(param_1 + 8),uVar4);
    }
    else {
      local_c = *(int **)(param_1 + 8);
      piVar2 = local_c + -3;
      if (piVar2 != &DAT_00513d58) {
        *piVar2 = *piVar2 + 1;
      }
    }
    FUN_004cf384(param_1,param_2);
    FUN_004cf384(param_2,(int)local_14);
    if (local_c != (int *)0x0) {
      if (local_c[-3] != -1) {
        piVar2 = local_c + -3;
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
        if (iVar1 != 0) goto LAB_00415101;
      }
      operator_delete();
      local_c = (int *)0x0;
    }
LAB_00415101:
    param_1 = param_1 + 0x10;
  }
  if (param_5 != (byte *)0x0) {
    if (*(int *)(param_5 + -0xc) != -1) {
      pbVar3 = param_5 + -0xc;
      if (pbVar3 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar3 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar3 = *(int *)pbVar3 + -1;
        iVar1 = *(int *)pbVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00414f97;
    }
    operator_delete();
  }
LAB_00414f97:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415118  FUN_00415118   (59 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415118(int param_1)

{
  int iVar1;
  
  iVar1 = GetDlgCtrlID(*(HWND *)(param_1 + 0xc));
  if (((iVar1 != 2) && (iVar1 != 0x286e)) && (iVar1 != 0x5fa)) {
    (**(code **)(*(int *)(param_1 + 8) + 0x60))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415154  PropertiesViewWindows::vf18   (30 bytes)   [rtti:vtable virtual slot 18]
void __cdecl PropertiesViewWindows::vf18(int *param_1)

{
  FUN_004a75d0(*param_1,(undefined*)FUN_00415118);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415174  PropertiesViewWindows::vf19   (5 bytes)   [rtti:vtable virtual slot 19]
void __stdcall PropertiesViewWindows::vf19(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041517c  PropertiesViewWindows::vf20   (5 bytes)   [rtti:vtable virtual slot 20]
void __stdcall PropertiesViewWindows::vf20(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415184  PropertiesViewWindows::vf21   (5 bytes)   [rtti:vtable virtual slot 21]
void __stdcall PropertiesViewWindows::vf21(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041518c  PropertiesViewWindows::vf22   (5 bytes)   [rtti:vtable virtual slot 22]
void __stdcall PropertiesViewWindows::vf22(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415194  PropertiesViewWindows::vf23   (7 bytes)   [rtti:vtable virtual slot 23]
undefined4 __stdcall PropertiesViewWindows::vf23(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041519c  PropertiesViewWindows::vf24   (5 bytes)   [rtti:vtable virtual slot 24]
void __stdcall PropertiesViewWindows::vf24(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151a4  PropertiesViewWindows::vf25   (7 bytes)   [rtti:vtable virtual slot 25]
undefined4 __stdcall PropertiesViewWindows::vf25(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151ac  PropertiesViewWindows::vf26   (5 bytes)   [rtti:vtable virtual slot 26]
void __stdcall PropertiesViewWindows::vf26(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151b4  PropertiesViewWindows::vf27   (5 bytes)   [rtti:vtable virtual slot 27]
void __stdcall PropertiesViewWindows::vf27(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151bc  PropertiesViewWindows::vf28   (5 bytes)   [rtti:vtable virtual slot 28]
void __stdcall PropertiesViewWindows::vf28(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151c4  PropertiesViewWindows::vf29   (5 bytes)   [rtti:vtable virtual slot 29]
void __stdcall PropertiesViewWindows::vf29(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151cc  PropertiesViewWindows::vf30   (7 bytes)   [rtti:vtable virtual slot 30]
undefined4 __stdcall PropertiesViewWindows::vf30(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151d4  PropertiesViewWindows::vf31   (7 bytes)   [rtti:vtable virtual slot 31]
undefined4 __stdcall PropertiesViewWindows::vf31(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004151dc  PropertiesViewWindows::vf32   (36 bytes)   [rtti:vtable virtual slot 32]
void __cdecl PropertiesViewWindows::vf32(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  if ((param_3 != (LPCSTR)0x0) && (*param_3 != '\0')) {
    ShellExecuteA((HWND)0x0,&DAT_004ed2ba /* "open" */,param_3,(LPCSTR)0x0,(LPCSTR)0x0,9);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415200  PropertiesViewWindows::vf37   (5 bytes)   [rtti:vtable virtual slot 37]
void __stdcall PropertiesViewWindows::vf37(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415208  PropertiesViewWindows::vf33   (7 bytes)   [rtti:vtable virtual slot 33]
undefined4 __stdcall PropertiesViewWindows::vf33(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415210  PropertiesViewWindows::vf34   (66 bytes)   [rtti:vtable virtual slot 34]
int __cdecl PropertiesViewWindows::vf34(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ed970);
  std::string::string_from_cstr(param_1,(uint *)"wrong");
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415254  PropertiesViewWindows::vf35   (5 bytes)   [rtti:vtable virtual slot 35]
void __stdcall PropertiesViewWindows::vf35(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041525c  PropertiesViewWindows::vf36   (5 bytes)   [rtti:vtable virtual slot 36]
void __stdcall PropertiesViewWindows::vf36(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415264  PropertiesViewWindows::vf9   (195 bytes)   [rtti:vtable virtual slot 9]
void __cdecl PropertiesViewWindows::vf9(int *param_1,INT_PTR param_2)

{
  BOOL BVar1;
  uint local_130 [64];
  WINDOWPLACEMENT local_30;
  
  BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
  if (BVar1 != 0) {
    local_30.length = 0x2c;
    BVar1 = GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_30);
    if (BVar1 != 0) {
      IsZoomed(*(HWND *)(*param_1 + 0xc));
      FUN_0044eee4((undefined1 *)local_130);
      FUN_0041717c((int)param_1,(uint *)"Position",local_130);
    }
  }
  if (param_1[0x13] == 0) {
    OWL::TDialog::vf9(param_1,param_2);
  }
  else {
    (**(code **)(param_1[3] + 0x40))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415328  PropertiesViewWindows::vf41   (25 bytes)   [rtti:vtable virtual slot 41]
void __stdcall PropertiesViewWindows::vf41(void)

{
  FUN_00464bac();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415344  PropertiesViewWindows::vf42   (67 bytes)   [rtti:vtable virtual slot 42]
int __cdecl PropertiesViewWindows::vf42(int param_1,int param_2,uint param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ed994);
  FUN_00464a94(param_1,*(int *)(param_2 + 0x38),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415388  FUN_00415388   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00415388(void)

{
  FUN_00464980();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153a8  PropertiesViewWindows::vf43   (67 bytes)   [rtti:vtable virtual slot 43]
void __cdecl PropertiesViewWindows::vf43(int param_1,undefined4 param_2,LPARAM param_3)

{
  BOOL BVar1;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x58) + 0xc));
    if (BVar1 != 0) {
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,param_3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004153ec  FUN_004153ec   (178 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004153ec(int param_1,int param_2,int param_3,int param_4)

{
  HMONITOR hMonitor;
  BOOL BVar1;
  int iVar2;
  tagMONITORINFO local_3c;
  RECT local_14;
  
  if ((0 < param_3) && (0 < param_4)) {
    local_14.left = param_1;
    local_14.right = param_3 + param_1;
    local_14.top = param_2;
    local_14.bottom = param_4 + param_2;
    hMonitor = MonitorFromRect(&local_14,2);
    if (hMonitor != (HMONITOR)0x0) {
      local_3c.cbSize = 0x28;
      BVar1 = GetMonitorInfoA(hMonitor,&local_3c);
      if (BVar1 != 0) {
        if (param_3 < 0) {
          param_3 = param_3 + 7;
        }
        if (local_14.left < local_3c.rcWork.right - (param_3 >> 3)) {
          iVar2 = param_4;
          if (param_4 < 0) {
            iVar2 = param_4 + 7;
          }
          if ((local_14.top < local_3c.rcWork.bottom - (iVar2 >> 3)) &&
             ((param_3 >> 3) + local_3c.rcWork.left < local_14.right)) {
            if (param_4 < 0) {
              param_4 = param_4 + 7;
            }
            if ((param_4 >> 3) + local_3c.rcWork.top < local_14.bottom) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154a0  PropertiesViewWindows::EvRegisteredMsg_4154a0   (74 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __cdecl PropertiesViewWindows::EvRegisteredMsg_4154a0(int param_1,int param_2)

{
  if (param_2 == 0x70) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xb4))();
  }
  else if (param_2 == 9) {
    GetKeyState(0x10);
    (**(code **)(*(int *)(param_1 + 0xc) + 0x7c))();
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154ec  PropertiesViewWindows::EvInitMenuPopup   (368 bytes)   [owl:response-table message-handler]
//   WM_INITMENUPOPUP
void __cdecl PropertiesViewWindows::EvInitMenuPopup(int *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  UINT UVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 local_44;
  int local_18;
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x4ed9e8);
  OWL::TWindow::EvInitMenuPopup(*param_1,param_2,param_3,param_4);
  FUN_00497aec(&local_10,param_2,0);
  iVar1 = GetMenuItemCount(local_c);
  if ((iVar1 != 0) && (UVar2 = FUN_00497c2c((int)&local_10,iVar1 + -1), UVar2 == 0x1414)) {
    (**(code **)(param_1[3] + 0xb0))();
    puVar5 = &local_10;
    uVar3 = (uint)(*(int *)(local_18 + -4) != 0);
    piVar4 = (int *)FUN_00422fc4(param_1[0xe]);
    FUN_00423e14(piVar4,(int)puVar5,uVar3);
    if (local_18 != 0) {
      if (*(int *)(local_18 + -0xc) != -1) {
        piVar4 = (int *)(local_18 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar1 = *piVar4 + 1;
        }
        if (iVar1 != 0) goto LAB_00415623;
      }
      operator_delete();
    }
  }
LAB_00415623:
  if ((param_2 != (HMENU)0x0) && (param_4 != '\0')) {
    DAT_0051ac88 = 0xe4c;
    (*(undefined4 *)&DAT_0051ac84) = 0xe4c;
  }
  OWL::TMenu::_dtor(&local_10,2);
  *in_FS_OFFSET = local_44;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156a4  PropertiesViewWindows::EvMenuSelect   (77 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MENUSELECT
void __cdecl PropertiesViewWindows::EvMenuSelect(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if ((param_3 == 0xffff) && (param_4 == 0)) {
    (*(int *)&DAT_0051ac88) = 0;
    DAT_0051ac84 = 0;
    return;
  }
  if ((param_3 & 0x870) != 0) {
    DAT_0051ac84 = (*(int *)&DAT_0051ac88);
    return;
  }
  if ((*(int *)&DAT_0051ac88) != 0xe4c) {
    DAT_0051ac84 = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156f4  PropertiesViewWindows::vf11   (555 bytes)   [rtti:vtable virtual slot 11]
void __cdecl PropertiesViewWindows::vf11(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  WINDOWPLACEMENT local_290;
  char local_264 [511];
  undefined1 local_65;
  uint *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4eda4c);
  OWL::TDialog::vf11(param_1);
  if ((int *)param_1[0x16] != (int *)0x0) {
    FUN_00417760(param_1,*(HWND *)(*(int *)param_1[0x16] + 0xc));
  }
  if (*(int *)(param_1[0xe] + 0x168) != 0) {
    FUN_004a76a8(*param_1,0x80,1,*(int *)(param_1[0xe] + 0x168));
  }
  if (*(int *)(param_1[0xe] + 0x16c) != 0) {
    FUN_004a76a8(*param_1,0x80,0,*(int *)(param_1[0xe] + 0x16c));
  }
  (**(code **)(param_1[3] + 0xbc))();
  local_28 = 0x14;
  FUN_00416dd4((int)local_14,(int)param_1,(uint *)"Position",
               (uint *)("Beta Test Expiry" + 0x10));
  local_1c = local_1c + 1;
  local_28 = 8;
  if (local_c[-1] != 0) {
    FUN_004dcc40((undefined4 *)local_264,local_c,(char *)0x1ff);
    local_65 = 0;
    FUN_0044ee84(local_264,&local_3c,&local_40,&local_44,&local_48,&local_4c);
    iVar1 = FUN_004153ec(local_40,local_44,local_48,local_4c);
    if (iVar1 != 0) {
      local_290.length = 0x2c;
      BVar2 = GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_290);
      if (BVar2 != 0) {
        if (local_44 < 0) {
          local_44 = 0;
        }
        if ((*(byte *)(*param_1 + 0x1a) & 4) == 0) {
          local_48 = local_290.rcNormalPosition.right - local_290.rcNormalPosition.left;
          local_4c = local_290.rcNormalPosition.bottom - local_290.rcNormalPosition.top;
        }
        if ((local_290.showCmd != 0) && (local_3c != 0)) {
          local_290.showCmd = 3;
        }
        local_290.rcNormalPosition.left = local_40;
        local_290.rcNormalPosition.top = local_44;
        local_290.rcNormalPosition.right = local_40 + local_48;
        local_290.rcNormalPosition.bottom = local_44 + local_4c;
        local_290.length = 0x2c;
        SetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_290);
      }
    }
  }
  local_1c = local_1c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar1 = *puVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0041590e;
    }
    local_50 = local_c + -3;
    operator_delete();
  }
LAB_0041590e:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415920  FUN_00415920   (35 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415920(int *param_1,int param_2)

{
  param_1[0x11] = param_2;
  FUN_004a6d7c(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415944  FUN_00415944   (469 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415944(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_50;
  LPARAM local_4c;
  tagPOINT local_48;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x4edaa4);
  local_48.x = 0;
  local_48.y = 0;
  if (param_3 == (int *)0x0) {
    local_50 = 0;
    local_4c = -1;
    FUN_004691fc(param_2,(LPARAM)&local_50);
    FUN_004a76a8(*param_2,0xd6,(WPARAM)&local_48,local_4c);
    ClientToScreen(*(HWND *)(*param_2 + 0xc),&local_48);
  }
  else {
    local_48.x = *param_3;
    local_48.y = param_3[1];
  }
  local_30 = 0x14;
  iVar3 = 1;
  piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),
                        (LPCSTR)param_1[0x11]);
  local_24 = local_24 + 1;
  FUN_00497fac(&local_10,piVar1,iVar3);
  local_24 = local_24 + 1;
  OWL::TMenu::_dtor(local_1c,2);
  local_30 = 8;
  (**(code **)(param_2[3] + 0x7c))();
  DAT_0051ac84 = param_1[0x11];
  (*(int *)&DAT_0051ac88) = DAT_0051ac84;
  iVar2 = GetSystemMetrics(0);
  iVar3 = local_48.x;
  if (local_48.x < 1) {
    iVar3 = 0;
  }
  if (iVar3 < iVar2) {
    if (local_48.x < 1) {
      local_48.x = 0;
    }
  }
  else {
    local_48.x = GetSystemMetrics(0);
  }
  iVar2 = GetSystemMetrics(1);
  iVar3 = local_48.y;
  if (local_48.y < 1) {
    iVar3 = 0;
  }
  if (iVar3 < iVar2) {
    if (local_48.y < 1) {
      local_48.y = 0;
    }
  }
  else {
    local_48.y = GetSystemMetrics(1);
  }
  hWnd = *(HWND *)(*param_1 + 0xc);
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0)
  ;
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(piVar1[3] + 0x18))(), iVar3 == *param_1)) {
    hWnd = *(HWND *)(*piVar1 + 0xc);
  }
  TrackPopupMenu(local_c,2,local_48.x,local_48.y,0,hWnd,(RECT *)0x0);
  local_24 = local_24 + -2;
  OWL::TMenu::_dtor(&local_10,0);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415be8  PropertiesViewWindows::vf45   (21 bytes)   [rtti:vtable virtual slot 45; function defined from vtable-slot]
void __stdcall PropertiesViewWindows::vf45(void)

{
  FUN_00415388();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415c00  PropertiesViewWindows::CmEditExternalLookupSetup   (160 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5140) — &Edit > &External Lookup > &Setup... | &External Lookup > &Setup... | &External Lookup > &Setup...
void __cdecl PropertiesViewWindows::CmEditExternalLookupSetup(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 local_3b8;
  int local_394 [3];
  int local_388;
  
  __InitExceptBlockLDTC(0x4edae4);
  (**(code **)(param_1[3] + 0xa4))();
  FUN_00460220(local_394,0,*param_1,param_1[0xe]);
  piVar2 = local_394;
  uVar1 = (**(code **)(local_388 + 0x14))();
  (**(code **)(param_1[3] + 0xa4))(uVar1,param_1[3],piVar2,param_1,1);
  LookupPropertiesViewWindows::_dtor(local_394,2);
  *in_FS_OFFSET = local_3b8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415d40  PropertiesViewWindows::CmShared_415d40   (216 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   one handler for 13 table entries: id 13120; id 13121; id 13122; id 13123; id 13124; id 13125; id 13126; id 13127; id 13128; id 13129; id 13130; id 13131; …
//   also: PropertiesViewWindows::CmShared_415d40 [owl:response-table]; PropertiesViewWindows::CmShared_415d40 [owl:response-table]; PropertiesViewWindows::CmShared_415d40 [owl:response-table]; PropertiesViewWindows::CmShared_415d40 [owl:response-table]
void __cdecl PropertiesViewWindows::CmShared_415d40(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4edb24);
  (**(code **)(param_1[3] + 0xb0))();
  if (*(int *)(local_c + -4) != 0) {
    FUN_0046524c(param_1[0xe],*param_1,param_2,(int)local_14,0,0);
  }
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
      if (iVar1 != 0) goto LAB_00415e07;
    }
    operator_delete();
  }
LAB_00415e07:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e18  PropertiesViewWindows::vf44   (100 bytes)   [rtti:vtable virtual slot 44]
/* WARNING: Removing unreachable block (ram,0x00415e5c) */
int __cdecl PropertiesViewWindows::vf44(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4edb60);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e7c  PropertiesViewWindows::vf46   (1089 bytes)   [rtti:vtable virtual slot 46]
/* WARNING: Removing unreachable block (ram,0x00415ed3) */
/* WARNING: Removing unreachable block (ram,0x00415f42) */
/* WARNING: Removing unreachable block (ram,0x0041602e) */
/* WARNING: Removing unreachable block (ram,0x00415fda) */
/* WARNING: Removing unreachable block (ram,0x00416021) */
/* WARNING: Removing unreachable block (ram,0x004160c5) */
/* WARNING: Removing unreachable block (ram,0x004160e9) */
/* WARNING: Removing unreachable block (ram,0x004160f4) */
/* WARNING: Removing unreachable block (ram,0x00416134) */
/* WARNING: Removing unreachable block (ram,0x0041610d) */
/* WARNING: Removing unreachable block (ram,0x0041612d) */
/* WARNING: Removing unreachable block (ram,0x0041611a) */
/* WARNING: Removing unreachable block (ram,0x00416139) */
/* WARNING: Removing unreachable block (ram,0x0041613d) */
/* WARNING: Removing unreachable block (ram,0x0041618b) */
void __cdecl PropertiesViewWindows::vf46(int *param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_f0 [80];
  uint *local_a0;
  uint local_9c;
  undefined1 local_95;
  int local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined4 local_44 [12];
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4edbe8);
  local_80 = 0x14;
  uVar1 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  FUN_00464a94((int)local_14,param_1[0xe],uVar1);
  local_74 = local_74 + 1;
  local_80 = 8;
  local_95 = 10;
  local_9c = local_c[-1];
  local_a0 = local_c;
  pcVar2 = thunk_memchr((char *)local_c,'\n',local_9c);
  local_94 = (*(int *)&DAT_005140ac);
  if (pcVar2 != (char *)0x0) {
    local_94 = (int)pcVar2 - (int)local_c;
  }
  if (local_94 != -1) {
    local_f0[0] = 0;
    uVar1 = local_94 + 1U;
    if (local_c[-1] <= local_94 + 1U) {
      uVar1 = local_c[-1];
    }
    FUN_004cfad4((int)local_14,0,uVar1,(uint)local_f0,0,0,0);
  }
  local_80 = 0x5c;
  FUN_0049f498(local_44,*(undefined4 *)(*param_1 + 0xc),*(undefined4 *)(*param_2 + 0xc),local_c);
  local_74 = local_74 + 2;
  local_80 = 8;
  FUN_004a76a8(*(int *)param_1[0x16],0x404,0,(LPARAM)local_44);
  local_74 = local_74 + -2;
  operator_delete_array();
  local_74 = local_74 + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_004162a9;
    }
    operator_delete();
  }
LAB_004162a9:
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416320  PropertiesViewWindows::vf39   (386 bytes)   [rtti:vtable virtual slot 39]
undefined4 __cdecl PropertiesViewWindows::vf39(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  bool bVar1;
  LRESULT LVar2;
  undefined4 *puVar3;
  int *piVar4;
  DWORD color;
  undefined3 extraout_var;
  HANDLE h;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  LOGFONTA local_70;
  HWND local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4edc78);
  local_30 = EvMsg_19_4b0584(param_1,param_2,param_3,param_4);
  if (param_4 == 6) {
    LVar2 = FUN_004a614c(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar2 + 8);
    }
    puVar3 = FUN_004dd744(LVar2,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0041385c,0);
    local_34 = param_3;
    LVar2 = FUN_004a614c(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(LVar2 + 8);
    }
    piVar4 = FUN_004dd744(LVar2,iVar5,(int *)&DAT_0040299c,(int *)&DAT_004164a4,0);
    if ((puVar3 != (undefined4 *)0x0) && (puVar3[0xc] != 0)) {
      color = GetSysColor(2);
      SetTextColor(param_2,color);
    }
    if (((puVar3 != (undefined4 *)0x0) && (puVar3[0xc] != 0)) ||
       ((piVar4 != (int *)0x0 && (bVar1 = FUN_0041b8f8(piVar4), CONCAT31(extraout_var,bVar1) != 0)))
       ) {
      if (param_1[0xf] == 0) {
        h = (HANDLE)FUN_004a76a8(*param_1,0x31,0,0);
        if (h == (HANDLE)0x0) {
          h = GetStockObject(0xc);
        }
        if ((h != (HANDLE)0x0) && (iVar5 = GetObjectA(h,0x3c,&local_70), iVar5 != 0)) {
          local_70.lfUnderline = '\x01';
          local_8 = (uint *)operator_new();
          if (local_8 != (uint *)0x0) {
            local_1c = 0x14;
            FUN_0048f7fc(local_8,&local_70);
            local_1c = 8;
          }
          param_1[0xf] = (int)local_8;
        }
      }
      if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
        SelectObject(param_2,*(HGDIOBJ *)param_1[0xf]);
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041651c  PropertiesViewWindows::vf40   (173 bytes)   [rtti:vtable virtual slot 40]
void __cdecl PropertiesViewWindows::vf40(int *param_1,int param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  uint uVar3;
  LONG *pLVar4;
  tagRECT local_28;
  LONG local_18 [4];
  uint local_8;
  
  if ((param_2 == 0) || (param_2 == 2)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_004a7a6c(*param_1,&local_28);
    ptVar2 = &local_28;
    pLVar4 = local_18;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar4 = ptVar2->left;
      ptVar2 = (tagRECT *)&ptVar2->top;
      pLVar4 = pLVar4 + 1;
    }
    iVar1 = param_1[8] - param_1[7];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    local_8 = iVar1 >> 2;
    if (local_8 != 0) {
      uVar3 = 0;
      if (local_8 != 0) {
        do {
          FUN_00417780(*(int **)(uVar3 * 4 + param_1[7]),(int)local_18);
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_8);
      }
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
  }
  OWL::TWindow::EvSize(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004165cc  PropertiesViewWindows::EvPaint   (279 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl PropertiesViewWindows::EvPaint(int *param_1)

{
  BOOL BVar1;
  HDC pHVar2;
  int iVar3;
  tagRECT *ptVar4;
  tagRECT *ptVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  UINT UVar7;
  UINT UVar8;
  tagRECT local_b0;
  tagRECT local_a0;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  int local_6c;
  int local_67;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4edcb8);
  if ((*(byte *)(*param_1 + 0x1a) & 4) != 0) {
    BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      local_80 = 8;
      FUN_0049af8c(&local_6c,*(HWND *)(*param_1 + 0xc));
      local_74 = local_74 + 2;
      local_80 = 0x14;
      local_b0.left = 0;
      local_b0.top = 0;
      local_b0.right = 0;
      local_b0.bottom = 0;
      FUN_004a7a6c(*param_1,&local_b0);
      ptVar4 = &local_b0;
      ptVar5 = &local_a0;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        ptVar5->left = ptVar4->left;
        ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
        ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      local_a0.left = GetSystemMetrics(2);
      local_a0.left = local_a0.right - local_a0.left;
      local_a0.top = GetSystemMetrics(3);
      local_a0.top = local_a0.bottom - local_a0.top;
      UVar8 = 8;
      UVar7 = 3;
      ptVar4 = &local_a0;
      pHVar2 = (HDC)(**(code **)(local_67 + 0x5c))();
      DrawFrameControl(pHVar2,ptVar4,UVar7,UVar8);
      local_74 = local_74 + -2;
      OWL::TPaintDC::_dtor(&local_6c,2);
      goto LAB_004166d0;
    }
  }
  EvPaint_4b0574(param_1);
LAB_004166d0:
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041673c  PropertiesViewWindows::EvActivate   (33 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_ACTIVATE
void __cdecl PropertiesViewWindows::EvActivate(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004167d8  PropertiesViewWindows::vf7   (393 bytes)   [rtti:vtable virtual slot 7]
bool __cdecl PropertiesViewWindows::vf7(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  LRESULT LVar3;
  int iVar4;
  HWND pHVar5;
  int *piVar6;
  tagPOINT *ptVar7;
  tagPOINT local_20;
  HWND local_18;
  undefined4 *local_14;
  int local_10;
  tagPOINT local_c;
  
  if (param_2->message == 0x204) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    local_10 = FUN_004a7590(*param_1,&LAB_004138d8);
    if (local_10 != 0) {
      local_18 = *(HWND *)(local_10 + 0xc);
      LVar3 = FUN_004a614c(local_18,*(LPARAM *)(*param_1 + 0x6c));
      if (LVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(LVar3 + 8);
      }
      local_14 = FUN_004dd744(LVar3,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00416760,0);
      if (local_14 != (undefined4 *)0x0) {
        (**(code **)(local_14[3] + 0x78))();
      }
    }
  }
  else if ((param_2->message == 0x205) || ((param_2->message == 0x101 && (param_2->wParam == 0x5d)))
          ) {
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    pHVar5 = GetFocus();
    LVar3 = FUN_004a614c(pHVar5,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(LVar3 + 8);
    }
    piVar6 = FUN_004dd744(LVar3,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00416760,0);
    if ((piVar6 != (int *)0x0) && (param_1[0x11] != 0)) {
      if (param_2->message == 0x205) {
        ptVar7 = &local_20;
      }
      else {
        ptVar7 = (tagPOINT *)0x0;
      }
      FUN_00415944(param_1,piVar6,&ptVar7->x);
    }
  }
  if ((param_2->message == 0x100) &&
     (((WVar1 = param_2->wParam, WVar1 == 0x73 || (WVar1 == 0x74)) || (WVar1 == 0x75)))) {
    FUN_00466370(param_1[0xe],WVar1,*(int *)(*param_1 + 0x14));
    bVar2 = true;
  }
  else {
    bVar2 = OWL::TDialog::vf7(param_1,param_2);
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416964  PropertiesViewWindows::vf38   (271 bytes, 2 ranges)   [rtti:vtable virtual slot 38]
undefined4 __cdecl PropertiesViewWindows::vf38(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  LPCSTR lpFile;
  undefined4 uVar5;
  
  if (param_3[2] == -0x2d2) {
    cVar1 = (**(code **)(param_1[3] + 100))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else if ((param_3[2] == 0x70b) && (param_3[3] == 0x201)) {
    iVar2 = FUN_004a768c(*param_1);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    puVar4 = FUN_004dd744(iVar2,iVar3,(int *)&DAT_0040299c,(int *)&DAT_00402cfc,0);
    if ((puVar4 != (undefined4 *)0x0) && ((int)param_3[6] < (int)param_3[7])) {
      iVar2 = param_3[7];
      iVar3 = param_3[6];
      lpFile = (LPCSTR)operator_new_array();
      memset((undefined4 *)lpFile,0,(iVar2 - iVar3) + 1);
      (**(code **)(puVar4[3] + 0x30))();
      ShellExecuteA((HWND)0x0,&DAT_004ed2ba /* "open" */,lpFile,(LPCSTR)0x0,(LPCSTR)0x0,9);
      operator_delete_array();
    }
  }
  uVar5 = OWL::TWindow::vf19((undefined4 *)*param_1,param_2,param_3);
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a78  FUN_00416a78   (435 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00416a78(int param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_5c [3];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4edd20);
  local_40 = 8;
  std::string::string_from_cstr((int)local_14,*(uint **)(param_1 + 0x50));
  local_34 = local_34 + 1;
  local_40 = 0x14;
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = strlen(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  local_5c[0] = param_3;
  local_40 = 0x20;
  iVar5 = 0;
  iVar4 = 0;
  FUN_004649b0((int)local_2c);
  local_34 = local_34 + 1;
  Persist::Persist(local_1c,(int)local_2c,iVar4,iVar5);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
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
      if (iVar4 != 0) goto LAB_00416b7b;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_00416b7b:
  local_40 = 0x14;
  Persist::QueryValue((int)local_1c,(int)local_14,local_5c);
  local_34 = local_34 + -1;
  uVar6 = local_5c[0];
  Persist::_dtor((int)local_1c,2);
  local_34 = local_34 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar4 != 0) goto LAB_00416c19;
    }
    operator_delete();
  }
LAB_00416c19:
  *in_FS_OFFSET = local_50;
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c2c  FUN_00416c2c   (422 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00416c2c(int param_1,uint *param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4eddac);
  std::string::string_from_cstr((int)local_14,*(uint **)(param_1 + 0x50));
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = strlen(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_2c);
  Persist::Persist(local_1c,(int)local_2c,iVar4,iVar5);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
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
      if (iVar4 != 0) goto LAB_00416d29;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_00416d29:
  FUN_0044eca8((int)local_1c,(int)local_14);
  Persist::_dtor((int)local_1c,2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar4 != 0) goto LAB_00416dc1;
    }
    operator_delete();
  }
LAB_00416dc1:
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416dd4  FUN_00416dd4   (934 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00416dd4(int param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 local_60;
  undefined1 local_3c [8];
  int local_34;
  int local_2c [2];
  undefined1 local_24 [8];
  undefined4 *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4ede74);
  std::string::string_from_cstr((int)local_14,*(uint **)(param_2 + 0x50));
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = strlen(param_3);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  std::string::string_from_cstr((int)local_24,param_4);
  iVar5 = 0;
  iVar4 = 0;
  FUN_004649b0((int)local_3c);
  Persist::Persist(local_2c,(int)local_3c,iVar4,iVar5);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
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
      if (iVar4 != 0) goto LAB_00416f01;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_00416f01:
  Persist::QueryValueSized((int)local_2c,(int)local_14,(int)local_24);
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar1 = local_1c[-1];
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_1c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_1c;
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  Persist::_dtor((int)local_2c,2);
  if (local_1c != (undefined4 *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
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
      if (iVar4 != 0) goto LAB_004170cc;
    }
    operator_delete();
    local_1c = (undefined4 *)0x0;
  }
LAB_004170cc:
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar4 != 0) goto LAB_0041715f;
    }
    operator_delete();
  }
LAB_0041715f:
  *in_FS_OFFSET = local_60;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041717c  FUN_0041717c   (578 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041717c(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined4 local_60;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  int local_1c [2];
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4edf4c);
  std::string::string_from_cstr((int)local_14,*(uint **)(param_1 + 0x50));
  uVar1 = *(uint *)(local_c + -4);
  pcVar2 = strlen(param_2);
  FUN_004cfad4((int)local_14,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_2c);
  Persist::Persist(local_1c,(int)local_2c,iVar4,iVar5);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
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
      if (iVar4 != 0) goto LAB_0041727c;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_0041727c:
  iVar4 = std::string::string_from_cstr((int)local_3c,param_3);
  FUN_0044ec78((int)local_1c,(int)local_14,iVar4);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
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
      if (iVar4 != 0) goto LAB_00417320;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_00417320:
  Persist::_dtor((int)local_1c,2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar4 != 0) goto LAB_004173ad;
    }
    operator_delete();
  }
LAB_004173ad:
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004173c0  FUN_004173c0   (205 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004173c0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4edfa8);
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  if (*param_1 == 3) {
    param_1[2] = *(int *)(param_2 + 8) - (*(int *)(param_3 + 0x20) + *(int *)(param_3 + 0x28));
  }
  else if (*param_1 == 2) {
    param_1[2] = *(int *)(param_2 + 8) - *(int *)(param_1[4] + 0x20);
  }
  else if (*param_1 == 1) {
    uVar1 = *(int *)(param_2 + 8) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    param_1[2] = iVar2 - *(int *)(param_1[4] + 0x20);
  }
  if (param_1[1] == 3) {
    param_1[3] = *(int *)(param_2 + 0xc) -
                 (*(int *)(param_1[4] + 0x24) + *(int *)(param_1[4] + 0x2c));
  }
  else if (param_1[1] == 2) {
    param_1[3] = *(int *)(param_2 + 0xc) - *(int *)(param_1[4] + 0x24);
  }
  else if (param_1[1] == 1) {
    uVar1 = *(int *)(param_2 + 0xc) + 1;
    iVar2 = (int)uVar1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
    }
    param_1[3] = iVar2 - *(int *)(param_1[4] + 0x24);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417490  PropertiesViewWindows::vf47   (5 bytes)   [rtti:vtable virtual slot 47]
void __stdcall PropertiesViewWindows::vf47(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417498  FUN_00417498   (51 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00417498(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != *(undefined4 **)(param_1 + 0x30)) {
    *puVar1 = param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    return;
  }
  FUN_004174cc(param_1 + 0x18,puVar1,&param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004174cc  FUN_004174cc   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004174cc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4edfe0);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_004176c8(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004176c8(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00402f68(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004176a4(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004176a4  FUN_004176a4   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004176a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004176c8  FUN_004176c8   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004176c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee020);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417748  FUN_00417748   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00417748(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417760  FUN_00417760   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00417760(undefined4 param_1,HWND param_2)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0);
  SendMessageA(param_2,0x418,0,iVar1 + -0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417780  FUN_00417780   (298 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00417780(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  iVar1 = *param_1;
  if (iVar1 == 0) {
    local_14 = *(int *)(param_1[4] + 0x20);
    local_c = *(int *)(param_1[4] + 0x20) + *(int *)(param_1[4] + 0x28);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(param_2 + 8) + 1;
    local_14 = (int)uVar2 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar2 & 1) != 0);
    }
    local_14 = local_14 - param_1[2];
    local_c = *(int *)(param_1[4] + 0x28) + local_14;
  }
  else if (iVar1 == 2) {
    local_14 = *(int *)(param_2 + 8) - param_1[2];
    local_c = *(int *)(param_1[4] + 0x28) + local_14;
  }
  else if (iVar1 == 3) {
    local_14 = *(int *)(param_1[4] + 0x20);
    local_c = *(int *)(param_2 + 8) - param_1[2];
  }
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    local_10 = *(int *)(param_1[4] + 0x24);
    local_8 = local_10 + *(int *)(param_1[4] + 0x2c);
  }
  else if (iVar1 == 1) {
    uVar2 = *(int *)(param_2 + 0xc) + 1;
    local_10 = (int)uVar2 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar2 & 1) != 0);
    }
    local_10 = local_10 - param_1[3];
    local_8 = *(int *)(param_1[4] + 0x2c) + local_10;
  }
  else if (iVar1 == 2) {
    local_10 = *(int *)(param_2 + 0xc) - param_1[3];
    local_8 = *(int *)(param_1[4] + 0x2c) + local_10;
  }
  else if (iVar1 == 3) {
    local_10 = *(int *)(param_1[4] + 0x24);
    local_8 = *(int *)(param_2 + 0xc) - param_1[3];
  }
  FUN_004a7aa0(param_1[4],(HWND)0x0,local_14,local_10,local_c - local_14,local_8 - local_10,0x21c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004178ac  FUN_004178ac   (112 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
LOGBRUSH * __cdecl FUN_004178ac(LOGBRUSH *param_1,COLORREF param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ee054);
  param_1->lbStyle = 0;
  param_1->lbColor = param_2;
  puVar1 = (uint *)operator_new();
  if (puVar1 != (uint *)0x0) {
    FUN_004ab954(puVar1,param_1);
  }
  param_1[1].lbStyle = (UINT)puVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

} // namespace tea

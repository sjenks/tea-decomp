// TEA.exe — application module "TSDictionarySaveDialog"
// 31 functions, 0x0043cdcc..0x0043fd98. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043cdcc  TSDictionarySaveDialog::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TSDictionarySaveDialog::vf14 [rtti:vtable]
undefined4 __cdecl TSDictionarySaveDialog::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&TSDictionarySaveDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PropertiesViewWindows::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ce14  FUN_0043ce14   (1264 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0043d15d) */
/* WARNING: Removing unreachable block (ram,0x0043d1a1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff7c : 0x0043d1ac */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_0043ce14(int *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f555c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1d8);
    param_1[0x1d8] = (int)(param_1 + 0x1d5);
    param_1[0x1d9] = (int)(param_1 + 0x1d6);
    param_1[1] = (int)(param_1 + 0x1d5);
    param_1[2] = (int)(param_1 + 0x1d6);
    param_1[0x1d4] = 0;
    param_1[0x1d7] = 0;
    param_1[0x1d5] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1d6] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1d8,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x6f0;
  FUN_00413cf4(param_1,1,0x4f5414,param_3,param_4,(uint *)0x16b2,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x6f0;
  FUN_0043fd98(param_1 + 0x18);
  param_1[3] = (int)&TSDictionarySaveDialog::vftable;
  param_1[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5a84;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f5a9c;
  param_1[0x19] = 0;
  param_1[0x1a] = param_6;
  param_1[0x1b] = param_7;
  param_1[0x1c] = param_10;
  param_1[0x1d] = param_11;
  param_1[0x20] = 0;
  iVar1 = *(int *)(*(int *)(param_8 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_8 + 8) + -4);
    piVar3 = std::string::__getRep(param_1 + 0x1e,uVar2,uVar2);
    param_1[0x20] = (int)(piVar3 + 3);
    memcpy((undefined4 *)param_1[0x20],*(undefined4 **)(param_8 + 8),uVar2);
  }
  else {
    param_1[0x20] = *(int *)(param_8 + 8);
    piVar3 = (int *)(param_1[0x20] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0x24] = 0;
  iVar1 = *(int *)(*(int *)(param_9 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_9 + 8) + -4);
    piVar3 = std::string::__getRep(param_1 + 0x22,uVar2,uVar2);
    param_1[0x24] = (int)(piVar3 + 3);
    memcpy((undefined4 *)param_1[0x24],*(undefined4 **)(param_9 + 8),uVar2);
  }
  else {
    param_1[0x24] = *(int *)(param_9 + 8);
    piVar3 = (int *)(param_1[0x24] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0x26] = -1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0x40;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x30] = 0x40;
  FUN_004c7a28(param_1 + 0x38,0,*param_1,0x2fa8,0,0);
  FUN_0041af38(param_1 + 100,0,param_1,0x1130,1000);
  FUN_0041b680(param_1 + 0x93,0,param_1,0x1702,0);
  FUN_004179f0(param_1 + 0xc0,0,param_1,1);
  FUN_004bf504(param_1 + 0xf2,0,*param_1,0x2cb0,0);
  FUN_004bf9d8((int *)((int)param_1 + 0x473),0,*param_1,0x1e96,0);
  FUN_004c7a28((int *)((int)param_1 + 0x51d),0,*param_1,0x2ca6,0,0);
  FUN_0041af38(param_1 + 0x173,0,param_1,0x8de,0);
  FUN_004179f0(param_1 + 0x1a2,0,param_1,0x8d4);
  FUN_004b0c44(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d32c  TSDictionarySaveDialog::~TSDictionarySaveDialog   (1150 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionarySaveDialog::_dtor
void __cdecl TSDictionarySaveDialog::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f5634);
  if (param_1 == (int *)0x0) goto LAB_0043d79a;
  param_1[3] = (int)&TSDictionarySaveDialog::vftable;
  param_1[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5a84;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f5a9c;
  PVWPushButton::_dtor(param_1 + 0x1a2,2);
  PVWEdit::_dtor(param_1 + 0x173,2);
  piVar2 = (int *)((int)param_1 + 0x51d);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + -4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
  OWL::TControl::_dtor(piVar2,0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + 4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + 0x96;
  OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x545),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + -0x96;
  OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x53d),0);
  OWL::TControl::_dtor((int *)((int)param_1 + 0x473),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x477) + -4);
  *piVar3 = *piVar3 + 0x96;
  OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x497),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x477) + -4);
  *piVar3 = *piVar3 + -0x96;
  OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x48f),0);
  piVar3 = param_1 + 0xf2;
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + -1;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -1;
  OWL::TControl::_dtor(piVar3,0);
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + 1;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 1;
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + 0x96;
  OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x3ed),0);
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + -0x96;
  OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x3e5),0);
  PVWPushButton::_dtor(param_1 + 0xc0,2);
  PVWStatic::_dtor(param_1 + 0x93,2);
  PVWEdit::_dtor(param_1 + 100,2);
  piVar3 = param_1 + 0x38;
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + -4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -4;
  OWL::TControl::_dtor(piVar3,0);
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + 4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 4;
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + 0x96;
  OWL::TWindow::_dtor(param_1 + 0x42,0);
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + -0x96;
  OWL::TStreamableBase::_dtor(param_1 + 0x40,0);
  FUN_0040b4f0(param_1 + 0x30,param_1[0x31],param_1[0x32]);
  operator_delete();
  FUN_0040b4f0(param_1 + 0x28,param_1[0x29],param_1[0x2a]);
  operator_delete();
  if (param_1[0x24] != 0) {
    if (*(int *)(param_1[0x24] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x24] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d669;
    }
    operator_delete();
    param_1[0x24] = 0;
  }
LAB_0043d669:
  if (param_1[0x20] != 0) {
    if (*(int *)(param_1[0x20] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x20] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d6e3;
    }
    operator_delete();
    param_1[0x20] = 0;
  }
LAB_0043d6e3:
  DictionaryMaintainer::_dtor(param_1 + 0x18,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x6f0;
  PropertiesViewWindows::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x6f0;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x1d8,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x1d6,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0043d79a:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d7ac  TSDictionarySaveDialog::vf19   (866 bytes)   [rtti:vtable virtual slot 19]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionarySaveDialog::vf19(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int local_1d8 [18];
  undefined4 local_190;
  int local_188;
  int local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined2 local_160;
  int local_154;
  int local_14c;
  int local_148;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  uint local_3c [2];
  LPSTR local_34;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f56b8);
  if (param_3 != 1) {
    if (param_3 == 0x8d4) {
      local_160 = 0x20;
      FUN_004c279c(local_3c,0x80e,(uint *)"TEA&Sympathy Dictionary (TSD)|*.tsd|All Files (*.*)|*.*",0,0,
                   (uint)(PTR_DAT_004f33b8 + 1),0,0,0);
      local_154 = local_154 + 1;
      local_160 = 0x2c;
      GetWindowTextA(*(HWND *)(param_1[0x173] + 0xc),local_34,0x104);
      local_160 = 0x38;
      piVar1 = FUN_004c2e14(&local_14c,0,*param_1,(int)local_3c,0,0x4f545b,0);
      local_154 = local_154 + 6;
      iVar2 = (**(code **)(piVar1[3] + 0x14))();
      cVar4 = iVar2 == 1;
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
      *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
      local_154 = local_154 + -6;
      OWL::TCommonDialog::_dtor(&local_14c,0);
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
      *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
      local_154 = local_154 + -2;
      OWL::TWindow::_dtor(local_c4,0);
      *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
      local_154 = local_154 + -1;
      OWL::TStreamableBase::_dtor(local_cc,0);
      if (cVar4 != '\0') {
        FUN_0041b1ec(param_1 + 0x173,local_34);
      }
      local_154 = local_154 + -1;
      OWL::TOpenSaveDialog::TData::_dtor((int)local_3c,2);
    }
    goto LAB_0043dafa;
  }
  if (param_1[0x19] != 1) goto LAB_0043dafa;
  TSDictionarySaveDialog::Child7830_Notify1((int)param_1);
  FUN_0043e02c(param_1,'\0');
  param_1[0x19] = 2;
  uVar3 = 1;
  if (param_1[0x1b] < 0) {
    local_184 = FUN_004bfdd8((int *)((int)param_1 + 0x473),(LPARAM)local_1d8,0x10);
    piVar1 = local_1d8;
    local_188 = 0;
    while ((local_188 < local_184 && (uVar3 != 0))) {
      iVar2 = *piVar1;
      param_1[0x1b] = iVar2;
      uVar3 = FUN_0043db94(param_1,iVar2 * 0x10 + param_1[0x29]);
      local_188 = local_188 + 1;
      piVar1 = piVar1 + 1;
    }
    param_1[0x1b] = -1;
  }
  else {
    local_160 = 8;
    FUN_0041b2b0((int)local_14,param_1 + 100);
    local_154 = local_154 + 1;
    uVar3 = FUN_0043db94(param_1,(int)(param_1 + 0x1e));
    local_154 = local_154 + -1;
    if (local_c != 0) {
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
        if (iVar2 != 0) goto LAB_0043d957;
      }
      local_174 = local_c + -0xc;
      local_178 = local_c + -0xc;
      operator_delete();
      local_17c = 0;
      local_180 = local_14;
      local_c = 0;
      local_190 = 0;
    }
  }
LAB_0043d957:
  if ((param_1[0x19] == 2) && (uVar3 != 0)) {
    param_1[0x19] = 4;
    (**(code **)(param_1[3] + 0x20))();
  }
  else {
    FUN_0043e02c(param_1,'\x01');
    FUN_0043dfb0((int)param_1);
  }
LAB_0043dafa:
  *in_FS_OFFSET = local_170;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043db94  FUN_0043db94   (1052 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint __cdecl FUN_0043db94(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  LPCSTR pCVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  _FILETIME local_9c;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined1 *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  char *local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x4f5758);
  uVar4 = DAT_005140ac;
  if (*(uint *)(*(int *)(param_2 + 8) + -4) < DAT_005140ac) {
    uVar4 = *(uint *)(*(int *)(param_2 + 8) + -4);
  }
  local_6c = FUN_00420b88(*(char **)(param_2 + 8),'\\',uVar4);
  uVar4 = DAT_005140ac;
  if (local_6c != (char *)0x0) {
    uVar4 = (int)local_6c - *(int *)(param_2 + 8);
  }
  puVar1 = (uint *)FUN_004e0520((char *)0x0);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)("DictionaryOpen" + 0xe);
  }
  local_58 = 0x14;
  std::string::string_from_cstr((int)local_14,puVar1);
  local_4c = local_4c + 1;
  local_58 = 8;
  if (uVar4 != 0xffffffff) {
    local_58 = 0x20;
    puVar9 = local_14;
    FUN_004d6118((int)local_24,param_2,0,uVar4 + 1);
    local_4c = local_4c + 1;
    FUN_00436b94((int)local_34,(int)local_24,(int)puVar9);
    local_4c = local_4c + 1;
    FUN_004cf384((int)local_14,(int)local_34);
    local_4c = local_4c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar5 = (int *)(local_2c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043dce1;
      }
      local_78 = local_2c + -0xc;
      local_7c = local_2c + -0xc;
      operator_delete();
      local_80 = 0;
      local_84 = local_34;
      local_2c = 0;
    }
LAB_0043dce1:
    local_58 = 8;
    local_4c = local_4c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043dd7a;
      }
      local_88 = local_1c + -0xc;
      local_8c = local_1c + -0xc;
      operator_delete();
      local_90 = 0;
      local_94 = local_24;
      local_1c = 0;
    }
  }
LAB_0043dd7a:
  iVar2 = FUN_00408c68(param_1[0x1a],param_1[0x1b]);
  if (iVar2 == 0) {
    FUN_00408c98(param_1[0x1a],param_1[0x1b]);
    (**(code **)(param_1[3] + 0xc4))();
    uVar4 = 0;
  }
  else {
    iVar10 = 0;
    iVar8 = 100;
    iVar2 = param_1[0x1d];
    iVar7 = param_1[0x1c];
    puVar1 = *(uint **)(in_stack_0000000c + 8);
    pCVar6 = local_c;
    iVar3 = FUN_00408edc(param_1[0x1a],param_1[0x1b]);
    uVar4 = FUN_00440d08(param_1 + 0x18,iVar3,pCVar6,puVar1,iVar7,iVar2,iVar8,iVar10);
    uVar4 = uVar4 & 0xff;
  }
  if (uVar4 != 0) {
    FUN_00437928(param_2,&local_9c);
    iVar2 = FUN_004df65c(local_c,*(LPCSTR *)(param_2 + 8));
    if (iVar2 != 0) {
      (**(code **)(param_1[3] + 0xc4))();
      uVar4 = 0;
    }
  }
  if (uVar4 == 0) {
    thunk_FUN_004e0588(local_c);
    local_58 = 0x50;
    FUN_0041b914((int)local_44,param_1 + 0x93);
    local_4c = local_4c + 1;
    local_58 = 0x44;
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    local_4c = local_4c + -1;
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar5 = (int *)(local_3c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043df06;
      }
      operator_delete();
      local_3c = 0;
    }
LAB_0043df06:
    local_58 = 8;
  }
  uVar4 = (uint)(uVar4 != 0);
  local_4c = local_4c + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_0043df98;
    }
    operator_delete();
  }
LAB_0043df98:
  *in_FS_OFFSET = local_68;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dfb0  FUN_0043dfb0   (123 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0043dfb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x6c) < 0) {
    iVar1 = FUN_004bfd60((int *)(param_1 + 0x473));
    if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 100) = 0;
      (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    }
    else {
      *(undefined4 *)(param_1 + 100) = 1;
      (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 1;
  }
  uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x300) + 8) + 0x60))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e02c  FUN_0043e02c   (72 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043e02c(int *param_1,char param_2)

{
  HWND hWnd;
  
  if (param_2 == '\0') {
    hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),2);
    SetFocus(hWnd);
  }
  (**(code **)(*(int *)(param_1[100] + 8) + 0x60))();
  (**(code **)(*(int *)(param_1[0xc0] + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e074  TSDictionarySaveDialog::vf11   (2081 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionarySaveDialog::vf11(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_80;
  undefined1 local_58 [8];
  undefined4 *local_50;
  int local_48;
  undefined1 local_44 [8];
  undefined4 *local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f585c);
  PropertiesViewWindows::vf11(param_1);
  if (param_1[0x1b] < 0) {
    for (iVar5 = 0; iVar4 = TSDictionaryList::GetCount(param_1[0x1a]), iVar5 < iVar4; iVar5 = iVar5 + 1) {
      FUN_00408cbc(local_34,param_1[0x1a],iVar5);
      (**(code **)(*(int *)((int)param_1 + 0x47f) + 0x60))();
      puVar3 = (uint *)FUN_00408c98(param_1[0x1a],iVar5);
      std::string::string_from_cstr((int)local_44,puVar3);
      if (param_1[0x2a] == param_1[0x2e]) {
        FUN_0040e240((int)(param_1 + 0x28),param_1[0x2a],(int)local_44);
      }
      else {
        local_48 = param_1[0x2a];
        if (local_48 != 0) {
          *(undefined4 *)(local_48 + 8) = 0;
          if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
            uVar1 = local_3c[-1];
            piVar2 = std::string::__getRep(local_48,uVar1,uVar1);
            *(int **)(local_48 + 8) = piVar2 + 3;
            memcpy(*(undefined4 **)(local_48 + 8),local_3c,uVar1);
          }
          else {
            *(undefined4 **)(local_48 + 8) = local_3c;
            piVar2 = (int *)(*(int *)(local_48 + 8) + -0xc);
            if (piVar2 != &DAT_00513d58) {
              *piVar2 = *piVar2 + 1;
            }
          }
        }
        param_1[0x2a] = param_1[0x2a] + 0x10;
      }
      if (local_3c != (undefined4 *)0x0) {
        if (local_3c[-3] != -1) {
          piVar2 = local_3c + -3;
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
          if (iVar4 != 0) goto LAB_0043e550;
        }
        operator_delete();
        local_3c = (undefined4 *)0x0;
      }
LAB_0043e550:
      FUN_00408d5c(local_58,param_1[0x1a],iVar5);
      if (param_1[0x32] == param_1[0x36]) {
        FUN_0040e240((int)(param_1 + 0x30),param_1[0x32],(int)local_58);
      }
      else {
        iVar4 = param_1[0x32];
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 8) = 0;
          if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
            uVar1 = local_50[-1];
            piVar2 = std::string::__getRep(iVar4,uVar1,uVar1);
            *(int **)(iVar4 + 8) = piVar2 + 3;
            memcpy(*(undefined4 **)(iVar4 + 8),local_50,uVar1);
          }
          else {
            *(undefined4 **)(iVar4 + 8) = local_50;
            piVar2 = (int *)(*(int *)(iVar4 + 8) + -0xc);
            if (piVar2 != &DAT_00513d58) {
              *piVar2 = *piVar2 + 1;
            }
          }
        }
        param_1[0x32] = param_1[0x32] + 0x10;
      }
      if (local_50 != (undefined4 *)0x0) {
        if (local_50[-3] != -1) {
          piVar2 = local_50 + -3;
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
          if (iVar4 != 0) goto LAB_0043e78c;
        }
        operator_delete();
        local_50 = (undefined4 *)0x0;
      }
LAB_0043e78c:
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar2 = (int *)(local_2c + -0xc);
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
          if (iVar4 != 0) goto LAB_0043e825;
        }
        operator_delete();
        local_2c = 0;
      }
LAB_0043e825:
    }
    FUN_004a76a8(*(int *)((int)param_1 + 0x473),0x185,1,0);
    TSDictionarySaveDialog::Child7830_Notify1((int)param_1);
    goto LAB_0043e87e;
  }
  (**(code **)(*(int *)(param_1[0xf2] + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x473) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x51d) + 8) + 0x60))();
  (**(code **)(*(int *)(param_1[0x173] + 8) + 0x60))();
  (**(code **)(*(int *)(param_1[0x1a2] + 8) + 0x60))();
  FUN_00408cbc(local_14,param_1[0x1a],param_1[0x1b]);
  FUN_00464a94((int)local_24,param_1[0xe],0x170c);
  std::string::append((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0043e1fe;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_0043e1fe:
  std::string::append((int)local_14,(int)(param_1 + 0x22));
  FUN_0041b474(param_1 + 100,(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0043e87e;
    }
    operator_delete();
    local_c = 0;
  }
LAB_0043e87e:
  FUN_0043dfb0((int)param_1);
  *in_FS_OFFSET = local_80;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e898  TSDictionarySaveDialog::vf9   (36 bytes)   [rtti:vtable virtual slot 9]
void __cdecl TSDictionarySaveDialog::vf9(int *param_1,INT_PTR param_2)

{
  if (param_1[0x19] == 2) {
    param_1[0x19] = 3;
    return;
  }
  PropertiesViewWindows::vf9(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e8bc  TSDictionarySaveDialog::vf48   (63 bytes)   [rtti:vtable virtual slot 48]
void __cdecl TSDictionarySaveDialog::vf48(int param_1,byte *param_2)

{
  CHAR local_404 [1024];
  
  FUN_004e0344(local_404,param_2);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x24c) + 0xc),local_404);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e8fc  TSDictionarySaveDialog::vf49   (29 bytes)   [rtti:vtable virtual slot 49]
void __cdecl TSDictionarySaveDialog::vf49(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e91c  TSDictionarySaveDialog::Child7830_Notify1   (741 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 7830, code 1)
undefined4 __cdecl TSDictionarySaveDialog::Child7830_Notify1(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f5944);
  if (-1 < *(int *)(param_1 + 0x6c)) {
    *in_FS_OFFSET = local_48;
    return local_48;
  }
  iVar2 = *(int *)(param_1 + 0x98);
  if ((iVar2 < 0) || (iVar1 = (**(code **)(*(int *)(param_1 + 0x47f) + 0x24))(), iVar1 <= iVar2))
  goto LAB_0043eac2;
  FUN_0041b2b0((int)local_14,(int *)(param_1 + 0x5cc));
  FUN_004cf384(*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xa4),(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0043ea19;
    }
    operator_delete();
    local_c = 0;
  }
LAB_0043ea19:
  FUN_0041b2b0((int)local_24,(int *)(param_1 + 400));
  FUN_004cf384(*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xc4),(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0043eac2;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_0043eac2:
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  iVar2 = FUN_004bfd60((int *)(param_1 + 0x473));
  if ((iVar2 == 1) && (iVar2 = FUN_004bfdd8((int *)(param_1 + 0x473),param_1 + 0x98,1), iVar2 == 1))
  {
    FUN_0041b474((int *)(param_1 + 0x5cc),*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xa4)
                );
    FUN_0041b474((int *)(param_1 + 400),*(int *)(param_1 + 0x98) * 0x10 + *(int *)(param_1 + 0xc4));
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x5d8) + 0x24))();
    (**(code **)(*(int *)(param_1 + 0x19c) + 0x24))();
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x51d) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5cc) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x688) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 400) + 8) + 0x60))();
  uVar3 = FUN_0043dfb0(param_1);
  *in_FS_OFFSET = local_48;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ec04  OWL::TFileSaveDialog::~TFileSaveDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileSaveDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f597c);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eea0  OWL::TOpenSaveDialog::~TOpenSaveDialog   (168 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TOpenSaveDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f5b24);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef48  FUN_0043ef48   (40 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043ef48(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004def90(&GHIDRA_STACK(0x00000008),2,1,param_1);
  if (uVar1 != 1) {
    (*(undefined4 *)&DAT_004f5b2c) = 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef70  FUN_0043ef70   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043ef70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef88  FUN_0043ef88   (140 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043ef88(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0xf < (int)param_1[2]) {
    FUN_0043ef48((int *)*param_1);
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | (short)param_3 << ((byte)param_1[2] & 0x1f);
  iVar1 = 0x10 - param_1[2];
  if (iVar1 < param_2) {
    iVar2 = param_2 - iVar1;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f);
    FUN_0043ef48((int *)*param_1);
    *(short *)(param_1 + 1) = (short)uVar3;
    if (0x10 < iVar2) {
      FUN_0043ef48((int *)*param_1);
      iVar2 = iVar2 + -0x10;
      *(short *)(param_1 + 1) = (short)(uVar3 >> 0x10);
    }
    param_1[2] = iVar2;
  }
  else {
    param_1[2] = param_1[2] + param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f014  FUN_0043f014   (65 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043f014(undefined4 *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_2 + param_3;
  for (; param_2 < pbVar1; param_2 = param_2 + 1) {
    FUN_0043ef88(param_1,(uint)(byte)(&DAT_00519d3c)[*param_2],(&DAT_0051993c)[*param_2]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f058  FUN_0043f058   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043f058(undefined4 *param_1)

{
  FUN_0043ef88(param_1,(uint)DAT_00519d3c,DAT_0051993c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f078  FUN_0043f078   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043f078(undefined4 *param_1)

{
  if (0 < (int)param_1[2]) {
    FUN_0043ef48((int *)*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f098  FUN_0043f098   (137 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0043f098(uint param_1,uint param_2,uint param_3)

{
  double dVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),0x80);
  if (param_1 != 0) {
    dVar1 = ((double)param_3 * (double)param_1) / (double)param_2;
    FUN_004e3e60(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    uVar2 = FUN_004e3c04();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f138  FUN_0043f138   (94 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0043f138(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int local_18;
  byte *local_14;
  
  puVar3 = &DAT_0051993c;
  local_18 = 0;
  local_14 = &DAT_00519d3c;
  do {
    uVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)(uint)*local_14; iVar1 = iVar1 + 1) {
      uVar2 = uVar2 * 2;
      if ((1 << ((byte)iVar1 & 0x1f) & *puVar3) != 0) {
        uVar2 = uVar2 | 1;
      }
    }
    *puVar3 = uVar2;
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    puVar3 = puVar3 + 1;
  } while (local_18 < 0x100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f198  FUN_0043f198   (47 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0043f198(int *param_1,int *param_2)

{
  if (*(uint *)(*param_1 + 0xc) < *(uint *)(*param_2 + 0xc)) {
    return 1;
  }
  if (*(uint *)(*param_2 + 0xc) < *(uint *)(*param_1 + 0xc)) {
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f1c8  FUN_0043f1c8   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043f1c8(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    param_1[5] = param_1[5] | param_2 << ((byte)param_1[4] & 0x1f);
    param_1[4] = param_1[4] + 1;
  }
  else {
    FUN_0043f1c8((int *)*param_1,param_2);
    FUN_0043f1c8((int *)param_1[1],param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f204  FUN_0043f204   (64 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0043f204(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 == (int *)0x0) {
    iVar1 = param_1[2];
    (&DAT_0051993c)[iVar1] = param_1[5];
    (&DAT_00519d3c)[iVar1] = (char)param_1[4];
  }
  else {
    FUN_0043f204((int *)*param_1);
    FUN_0043f204((int *)param_1[1]);
  }
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f244  FUN_0043f244   (340 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __stdcall FUN_0043f244(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  int local_418;
  int *local_414 [257];
  
  iVar6 = 0;
  uVar4 = 0;
  local_418 = 1;
  local_414[0] = &DAT_00519e3c;
  ppiVar7 = local_414 + 1;
  do {
    if (*local_414[0] != 0) {
      piVar1 = (int *)operator_new();
      *ppiVar7 = piVar1;
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = uVar4 & 0xff;
      iVar6 = iVar6 + 1;
      piVar1[3] = *local_414[0];
      piVar1[4] = 0;
      piVar1[5] = 0;
      ppiVar7 = ppiVar7 + 1;
    }
    uVar4 = uVar4 + 1;
    local_414[0] = local_414[0] + 1;
  } while ((int)uVar4 < 0x100);
  if (iVar6 == 0) {
    local_418 = -1;
  }
  else {
    _DAT_00519938 = iVar6;
    for (iVar5 = 0; iVar5 < iVar6 + -1; iVar5 = iVar5 + 1) {
      uVar4 = iVar6 - iVar5;
      FUN_004e6244((undefined1 *)(local_414 + 1),uVar4,4,FUN_0043f198);
      FUN_0043f1c8((int *)(&local_418)[uVar4],0);
      FUN_0043f1c8(local_414[uVar4],1);
      piVar1 = (int *)operator_new();
      piVar1[3] = *(int *)((&local_418)[uVar4] + 0xc) + local_414[uVar4][3];
      piVar1[2] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[1] = (int)local_414[uVar4];
      *piVar1 = (&local_418)[uVar4];
      (&local_418)[uVar4] = (int)piVar1;
      local_414[uVar4] = (int *)0x0;
    }
    FUN_0043f204(local_414[1]);
    iVar6 = 0;
    pbVar2 = &DAT_00519d3c;
    do {
      if (0x20 < *pbVar2) break;
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar6 < 0x100);
    if (iVar6 < 0x100) {
      iVar6 = 0;
      local_418 = 0;
      piVar1 = &DAT_0051993c;
      puVar3 = &DAT_00519d3c;
      do {
        *puVar3 = 8;
        *piVar1 = iVar6;
        iVar6 = iVar6 + 1;
        piVar1 = piVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 < 0x100);
    }
  }
  return local_418;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f398  FUN_0043f398   (1400 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0043f454) */
int __cdecl FUN_0043f398(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  char local_114;
  char local_113 [19];
  undefined *local_100;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  uint local_e0;
  int local_dc;
  int *local_d8;
  int *local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined1 local_c2;
  undefined1 local_c1;
  uint *local_c0;
  uint *local_bc;
  char *local_b8;
  char local_b4 [76];
  uint *local_68;
  uint *local_64;
  char *local_60;
  uint local_5c;
  uint *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  bVar10 = 0;
  __InitExceptBlockLDTC(0x4f5bd4);
  local_40 = DAT_004f5b30;
  local_3c = DAT_004f5b34;
  local_3a = DAT_004f5b36;
  uVar2 = FUN_004dcac0((byte *)param_2,(byte *)&local_40,6);
  if (uVar2 != 0) {
    pcVar3 = strlen(param_2);
    if ((pcVar3 != (char *)0x0) && (pcVar3[(int)param_2 + -1] == '\n')) {
      pcVar3 = pcVar3 + -1;
    }
    local_28 = 8;
    FUN_004d1c6c(param_1,param_2,(uint)pcVar3);
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_c = (undefined4 *)&DAT_00513d64;
  local_100 = &DAT_00513d64;
  local_1c = local_1c + 1;
  local_28 = 0x2c;
  local_4c = 2;
  iVar7 = 0;
  local_50 = 0;
  local_54 = 0;
  while ((cVar1 = (char)*param_2, cVar1 != '\n' && (cVar1 != '\0'))) {
    puVar5 = param_2;
    if (iVar7 == 2) {
      local_54 = local_54 + -1;
    }
    else if (cVar1 == '\\') {
      puVar5 = (uint *)((int)param_2 + 1);
      cVar1 = *(char *)puVar5;
      if (cVar1 < ']') {
        if (cVar1 == '\\') {
LAB_0043f4ef:
          local_5c = local_c[-1];
          local_58 = puVar5;
          local_60 = strlen(puVar5);
          FUN_004cfad4((int)local_14,local_5c,0,(uint)local_58,(uint)local_60,0,(uint)local_60);
        }
        else if (cVar1 == '\'') {
          iVar7 = 1;
        }
        else if (cVar1 != '*') {
          if (cVar1 != '-') goto LAB_0043f54b;
          goto LAB_0043f52d;
        }
      }
      else if (cVar1 == '_') {
LAB_0043f52d:
        std::string::replace_fill((int)local_14,local_c[-1],0,1,0x2d);
      }
      else {
        if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_0043f4ef;
LAB_0043f54b:
        iVar4 = FUN_004e133c((int)*(char *)puVar5);
        if (iVar4 == 0) {
          puVar5 = (uint *)((int)param_2 + 2);
        }
        else {
          local_28 = 0x2c;
          local_64 = puVar5;
          do {
            puVar6 = puVar5;
            puVar5 = (uint *)((int)puVar6 + 1);
            iVar4 = FUN_004e133c((int)*(char *)puVar5);
          } while (iVar4 != 0);
          if (*(char *)puVar5 == '-') {
            puVar5 = (uint *)((int)puVar6 + 2);
          }
          local_28 = 0x2c;
          local_68 = puVar5;
          while (iVar4 = FUN_004e1368((int)(char)*puVar5), iVar4 != 0) {
            puVar5 = (uint *)((int)puVar5 + 1);
          }
          if ((int)puVar5 - (int)local_64 < 10) {
            local_114 = '|';
            FUN_004dcc40((undefined4 *)local_113,local_64,(char *)((int)puVar5 - (int)local_64));
            *(char *)((int)puVar5 + ((int)local_113 - (int)local_64)) = '|';
            *(char *)((int)puVar5 + (int)(local_113 + (1 - (int)local_64))) = '\0';
            pcVar3 = "|bin|par|line|tab|emdash|endash|bullet|lquote|rquote|ldblquote|rdblquote|";
            pcVar8 = local_b4;
            for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + ((uint)bVar10 * -2 + 1) * 4;
              pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(undefined2 *)pcVar8 = *(undefined2 *)pcVar3;
            local_28 = 0x2c;
            local_b8 = thunk_FUN_004dcd18(local_b4,&local_114);
            if ((local_b8 != (char *)0x0) &&
               (std::string::replace_fill((int)local_14,local_c[-1],0,1,0x20), local_b4 == local_b8)) {
              local_bc = local_68;
              local_54 = FUN_004e39d0((char *)local_68);
            }
          }
          if ((char)*puVar5 != ' ') {
            puVar5 = (uint *)((int)puVar5 + -1);
          }
        }
      }
    }
    else if ((cVar1 != '{') && (cVar1 != '}')) {
      if (iVar7 == 0) {
        uVar2 = FUN_004dcb98((char *)param_2,&DAT_004f5d62 /* "\{}" */);
        local_28 = 0x2c;
        local_c0 = param_2;
        FUN_004cfad4((int)local_14,local_c[-1],0,(uint)param_2,uVar2,0,uVar2);
        puVar5 = (uint *)((int)param_2 + (uVar2 - 1));
      }
      else {
        local_50 = local_50 * 0x10;
        iVar4 = (int)(char)*param_2;
        if ((iVar4 < 0x30) || (0x39 < iVar4)) {
          iVar4 = (int)(char)*param_2;
          if ((iVar4 < 0x61) || (0x66 < iVar4)) {
            iVar4 = (int)(char)*param_2;
            if ((0x40 < iVar4) && (iVar4 < 0x47)) {
              local_50 = local_50 + iVar4 + -0x37;
            }
          }
          else {
            local_50 = local_50 + iVar4 + -0x57;
          }
        }
        else {
          local_50 = local_50 + iVar4 + -0x30;
        }
        local_4c = local_4c + -1;
        if (local_4c == 0) {
          local_c1 = (undefined1)local_50;
          local_28 = 0x2c;
          local_c2 = (undefined1)local_50;
          std::string::replace_fill((int)local_14,local_c[-1],0,1,(undefined1)local_50);
          local_4c = 2;
          iVar7 = 0;
          local_50 = 0;
        }
      }
    }
    param_2 = (uint *)((int)puVar5 + 1);
  }
  local_28 = 0x38;
  local_c8 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar2 = local_c[-1];
    local_d8 = std::string::__getRep(param_1,uVar2,uVar2);
    local_d4 = local_d8 + 3;
    *(int **)(param_1 + 8) = local_d4;
    local_dc = param_1;
    local_e4 = local_c;
    local_e8 = *(undefined4 **)(param_1 + 8);
    local_e0 = uVar2;
    memcpy(local_e8,local_c,uVar2);
  }
  else {
    local_cc = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_d0 = param_1;
    piVar9 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar9 != &DAT_00513d58) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_28 = 0x50;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar9 = local_c + -3;
      if (piVar9 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar7 = *piVar9 + 1;
      }
      if (iVar7 != 0) goto LAB_0043f8f5;
    }
    local_ec = local_c + -3;
    local_f0 = local_c + -3;
    operator_delete();
  }
LAB_0043f8f5:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f910  FUN_0043f910   (649 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0043f954) */
int __cdecl FUN_0043f910(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f5c8c);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar2 = FUN_004dcce8(param_2,&DAT_004f5d58);
  if (param_2[iVar2] != '\0') {
    pcVar4 = param_2 + iVar2;
    pcVar3 = thunk_FUN_004dcc90(pcVar4,&DAT_004f5d58);
    if (pcVar3 != (char *)0x0) {
      iVar2 = FUN_004d1c6c((int)local_24,(undefined4 *)pcVar4,(int)pcVar3 - (int)pcVar4);
      FUN_004cf384((int)local_14,iVar2);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar5 = (int *)(local_1c + -0xc);
          if (piVar5 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar5 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar5 = *piVar5 + -1;
            iVar2 = *piVar5 + 1;
          }
          if (iVar2 != 0) goto LAB_0043fa35;
        }
        operator_delete();
        local_1c = 0;
      }
    }
  }
LAB_0043fa35:
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_0043fb7e;
    }
    operator_delete();
  }
LAB_0043fb7e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fb9c  FUN_0043fb9c   (476 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint __cdecl FUN_0043fb9c(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x4f5d20);
  local_c = (byte *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar1 = std::string::__getRep(local_14,uVar3,uVar3);
    local_c = (byte *)(piVar1 + 3);
    memcpy((undefined4 *)local_c,*(undefined4 **)(param_2 + 8),uVar3);
  }
  else {
    local_c = *(byte **)(param_2 + 8);
    pbVar6 = local_c + -0xc;
    if (pbVar6 != (byte *)&DAT_00513d58) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (1 < *(int *)(local_c + -0xc) + 1) {
    FUN_004d48d8((int)local_14);
  }
  pbVar5 = local_c + -0xc;
  pbVar6 = local_c;
  if (pbVar5 != (byte *)&DAT_00513d58) {
    pbVar5[0] = 0xff;
    pbVar5[1] = 0xff;
    pbVar5[2] = 0xff;
    pbVar5[3] = 0xff;
  }
  while( true ) {
    if (1 < *(int *)(local_c + -0xc) + 1) {
      FUN_004d48d8((int)local_14);
    }
    pbVar5 = local_c + -0xc;
    if (pbVar5 != (byte *)&DAT_00513d58) {
      pbVar5[0] = 0xff;
      pbVar5[1] = 0xff;
      pbVar5[2] = 0xff;
      pbVar5[3] = 0xff;
    }
    if (local_c + *(int *)(local_c + -4) <= pbVar6) break;
    *pbVar6 = *pbVar6 ^ 0xbd;
    pbVar6 = pbVar6 + 1;
  }
  std::string::replace_fill((int)local_14,*(uint *)(local_c + -4),0,1,0xbd);
  uVar3 = *(uint *)(local_c + -4);
  uVar2 = FUN_004def90(local_c,1,uVar3,param_1);
  uVar3 = (uint)(uVar3 == uVar2);
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar6 = local_c + -0xc;
      if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar4 = *(int *)pbVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_0043fd66;
    }
    operator_delete();
  }
LAB_0043fd66:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd78  FUN_0043fd78   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_0043fd78(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 8) + 0x20) < *(int *)(*(int *)(param_2 + 8) + 0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd98  FUN_0043fd98   (48 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0043fd98(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f5f48);
  *param_1 = &DictionaryMaintainer::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

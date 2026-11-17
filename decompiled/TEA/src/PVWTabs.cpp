// TEA.exe — application module "PVWTabs"
// 5 functions, 0x0041ea80..0x0041ee00. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ea80  PVWTabs::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWTabs::vf8 [rtti:vtable]
undefined4 __cdecl PVWTabs::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWTabs::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TTabControl::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eac8  FUN_0041eac8   (309 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041eac8(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef4fc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_0049e8f0(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PVWTabs::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004eff48;
  *(undefined ***)param_1[2] = &PTR_LAB_004eff54;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004eff60;
  param_1[5] = (int)param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ec18  PVWTabs::~PVWTabs   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWTabs::_dtor
void __cdecl PVWTabs::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef520);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWTabs::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004eff48;
    *(undefined ***)param_1[2] = &PTR_LAB_004eff54;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004eff60;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TTabControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ed14  PVWTabs::EvKeyDown   (233 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl PVWTabs::EvKeyDown(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  int iVar4;
  WPARAM WVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  HWND local_8;
  
  iVar4 = 0;
  if ((param_2 == 0x27) || (param_2 == 0x28)) {
    iVar4 = 1;
  }
  if ((param_2 == 0x25) || (param_2 == 0x26)) {
    iVar4 = -1;
  }
  if (iVar4 != 0) {
    iVar1 = FUN_004a76a8(*param_1,0x1304,0,0);
    iVar2 = FUN_004a76a8(*param_1,0x130b,0,0);
    WVar5 = iVar4 + iVar2;
    if ((int)WVar5 < 0) {
      WVar5 = iVar1 - 1;
    }
    else if (iVar1 <= (int)WVar5) {
      WVar5 = 0;
    }
    local_10 = *(undefined4 *)(*param_1 + 0x34);
    local_14 = *(undefined4 *)(*param_1 + 0xc);
    local_c = 0xfffffdd8;
    local_8 = *(HWND *)(*(int *)param_1[5] + 0xc);
    LVar3 = SendMessageA(local_8,0x4e,*(WPARAM *)(*param_1 + 0x34),(LPARAM)&local_14);
    if (LVar3 == 0) {
      FUN_004a76a8(*param_1,0x130c,WVar5,0);
      local_c = 0xfffffdd9;
      SendMessageA(*(HWND *)(*(int *)param_1[5] + 0xc),0x4e,*(WPARAM *)(*param_1 + 0x34),
                   (LPARAM)&local_14);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee00  PVWTabs::EvLButtonDblClk   (19 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl PVWTabs::EvLButtonDblClk(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0xc) + 0x68))();
  return;
}

} // namespace tea

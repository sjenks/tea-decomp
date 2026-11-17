// TEA.exe — application module "PVWUpDown"
// 5 functions, 0x0041bafc..0x0041bdf0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041bafc  PVWUpDown::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWUpDown::vf8 [rtti:vtable]
undefined4 __cdecl PVWUpDown::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWUpDown::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TUpDown::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bb44  FUN_0041bb44   (311 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041bb44(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eecd4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xf);
    param_1[0xf] = (int)(param_1 + 0xc);
    param_1[0x10] = (int)(param_1 + 0xd);
    param_1[1] = (int)(param_1 + 0xc);
    param_1[2] = (int)(param_1 + 0xd);
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = (int)&OWL::TEventHandler::vftable;
    param_1[0xd] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xf,1);
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
  FUN_004a1f48(param_1,1,uVar1,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PVWUpDown::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f03cc;
  *(undefined ***)param_1[2] = &PTR_LAB_004f03d8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f03e4;
  param_1[10] = (int)param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bc94  PVWUpDown::~PVWUpDown   (291 bytes)   [rtti:dtor destructor]
//   written in code as PVWUpDown::_dtor
void __cdecl PVWUpDown::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eecf8);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWUpDown::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f03cc;
    *(undefined ***)param_1[2] = &PTR_LAB_004f03d8;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f03e4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x14;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x14;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x14;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x14;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xf,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xd,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bdb8  PVWUpDown::vf11   (54 bytes)   [rtti:vtable virtual slot 11]
void __cdecl PVWUpDown::vf11(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[10] + 0xc) + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bdf0  PVWUpDown::EvVScroll   (63 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl PVWUpDown::EvVScroll(int *param_1,int param_2)

{
  OWL::TUpDown::EvVScroll(param_1);
  if (param_2 == 4) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[10] + 0xc) + 0x60))();
  }
  return;
}

} // namespace tea

// TEA.exe — application module "PVWUpDown"
// 5 functions, 0x0041bafc..0x0041bdf0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041bafc  PVWUpDown::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWUpDown::Find [rtti:vtable]; PVWUpDown::vf8 [rtti:vtable]
undefined4 __cdecl PVWUpDown::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWUpDown::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TUpDown::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bb44  PVWUpDown::PVWUpDown   (311 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWUpDown's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWUpDown::PVWUpDown(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eecd4);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xf);
    self[0xf] = (int)(self + 0xc);
    self[0x10] = (int)(self + 0xd);
    self[1] = (int)(self + 0xc);
    self[2] = (int)(self + 0xd);
    self[0xb] = 0;
    self[0xe] = 0;
    self[0xc] = (int)&OWL::TEventHandler::vftable;
    self[0xd] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xf,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TUpDown::TUpDown(self,1,uVar1,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&PVWUpDown::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f03cc;
  *(undefined ***)self[2] = &PTR_LAB_004f03d8;
  *(undefined ***)(*self + 8) = &PVWUpDown::vftable_TWindow;
  self[10] = (int)param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bc94  PVWUpDown::~PVWUpDown   (291 bytes)   [rtti:dtor destructor]
//   written in code as PVWUpDown::_dtor
void __cdecl PVWUpDown::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eecf8);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWUpDown::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f03cc;
    *(undefined ***)self[2] = &PTR_LAB_004f03d8;
    *(undefined ***)(*self + 8) = &PVWUpDown::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x14;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x14;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x14;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x14;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xf,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xd,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bdb8  PVWUpDown::PreProcessMsg   (54 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PVWUpDown's OWL::TWindow subobject vtable at 0x004f03e4 (through the this-adjusting thunk at 0x00422586); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWUpDown::vf11 [rtti:vtable]
void __cdecl PVWUpDown::PreProcessMsg(int *self,LPMSG lParam)

{
  if (lParam->message == 0x200) {
    (**(code **)(*(int *)(self[10] + 0xc) + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bdf0  PVWUpDown::EvVScroll   (63 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl PVWUpDown::EvVScroll(int *self,int param_2)

{
  OWL::TUpDown::EvVScroll(self);
  if (param_2 == 4) {
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    (**(code **)(*(int *)(self[10] + 0xc) + 0x60))();
  }
  return;
}

} // namespace tea

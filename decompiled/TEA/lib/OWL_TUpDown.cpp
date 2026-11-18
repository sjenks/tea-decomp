// TEA.exe — runtime / library code "OWL_TUpDown"
// 4 functions, 0x004a1ed4..0x004a2148. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a1ed4  OWL::TUpDown::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TUpDown::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TUpDown::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TUpDown::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a1f48  OWL::TUpDown::TUpDown   (360 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TUpDown's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TUpDown::TUpDown(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50a0d8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xe);
    self[0xe] = (int)(self + 0xb);
    self[0xf] = (int)(self + 0xc);
    self[1] = (int)(self + 0xb);
    self[2] = (int)(self + 0xc);
    self[10] = 0;
    self[0xd] = 0;
    self[0xb] = (int)&OWL::TEventHandler::vftable;
    self[0xc] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xe,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x14;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x14;
  OWL::TControl::TControl_4ad87c(self,1,param_3,param_4,param_6);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x14;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x14;
  FUN_004a1f1c(self + 5,0);
  self[3] = (int)&OWL::TUpDown::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050a12c;
  *(undefined ***)self[2] = &PTR_LAB_0050a138;
  *(undefined ***)(*self + 8) = &PTR_LAB_0050a144;
  self[6] = param_5;
  self[7] = 0;
  self[8] = 100;
  self[9] = 0;
  bVar1 = FUN_00487180();
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  self[4] = iVar2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2138  OWL::TUpDown::EvVScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TUpDown::EvVScroll(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2148  OWL::TUpDown::EvHScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TUpDown::EvHScroll(int *self)

{
  FUN_004a5774(*self);
  return;
}

} // namespace tea

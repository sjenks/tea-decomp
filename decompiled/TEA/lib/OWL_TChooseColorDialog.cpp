// TEA.exe — runtime / library code "OWL_TChooseColorDialog"
// 5 functions, 0x0048b078..0x0048b3dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048b078  OWL::TChooseColorDialog::Find   (69 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TChooseColorDialog's OWL::TWindow subobject vtable at 0x00505510 (through the this-adjusting thunk at 0x0048b440); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TChooseColorDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TChooseColorDialog::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&DAT_00505448,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b0c0  OWL::TChooseColorDialog::TChooseColorDialog   (476 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TChooseColorDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TChooseColorDialog::TChooseColorDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505470);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x15);
    self[0x15] = (int)(self + 0x12);
    self[0x16] = (int)(self + 0x13);
    self[1] = (int)(self + 0x12);
    self[2] = (int)(self + 0x13);
    self[0x11] = 0;
    self[0x14] = 0;
    self[0x12] = (int)&OWL::TEventHandler::vftable;
    self[0x13] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x15,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x28;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x28;
  OWL::TCommonDialog::TCommonDialog(self,1,param_3,param_6,param_7);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x28;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x28;
  self[3] = (int)&OWL::TChooseColorDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_005054f8;
  *(undefined ***)self[2] = &PTR_LAB_00505504;
  *(undefined ***)(*self + 8) = &OWL::TChooseColorDialog::vftable_TWindow;
  self[0x10] = param_4;
  if (DAT_00505444 == 0) {
    DAT_00505444 = RegisterWindowMessageA("commdlg_SetRGBColor");
  }
  memset(self + 7,0,0x24);
  self[7] = 0x24;
  if (*(int *)(*self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x14) + 0xc);
  }
  self[8] = iVar2;
  self[9] = *(int *)(*(int *)(*self + 0x70) + 8);
  self[0xc] = *(uint *)self[0x10] | 0x10;
  if (param_5 == 0) {
    self[0xc] = self[0xc] & 0xffffffdf;
  }
  else {
    self[0xf] = param_5;
    self[0xc] = self[0xc] | 0x20;
  }
  self[0xe] = 0;
  uVar1 = FUN_0048c12c((uint *)(self[0x10] + 8));
  self[10] = uVar1;
  self[0xb] = *(int *)(self[0x10] + 0xc);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b2c4  OWL::TChooseColorDialog::~TChooseColorDialog   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TChooseColorDialog::_dtor
void __cdecl OWL::TChooseColorDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505494);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TChooseColorDialog::vftable;
    *(undefined ***)self[1] = &PTR_LAB_005054f8;
    *(undefined ***)self[2] = &PTR_LAB_00505504;
    *(undefined ***)(*self + 8) = &OWL::TChooseColorDialog::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x28;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x28;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x28;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x28;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x15,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x13,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b3c0  OWL::TChooseColorDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TChooseColorDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b3dc  OWL::TChooseColorDialog::DoExecute   (100 bytes)   [rtti:vtable virtual slot 8]
//   override of OWL::TWindow vtable slot 8, from OWL::TChooseColorDialog's OWL::TWindow subobject vtable at 0x00505510 (through the this-adjusting thunk at 0x0048b4c5); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TChooseColorDialog::vf6 [rtti:vtable]
undefined4 __cdecl OWL::TChooseColorDialog::DoExecute(int self)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(self + 0x38) = FUN_004b070c;
  iVar1 = FUN_0048c23c();
  if (iVar1 == 0) {
    uVar2 = FUN_0048c2ac();
    *(undefined4 *)(*(int *)(self + 0x40) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(self + 0x40) = *(undefined4 *)(self + 0x30);
    *(undefined4 *)(*(int *)(self + 0x40) + 4) = 0;
    *(undefined4 *)(*(int *)(self + 0x40) + 8) = *(undefined4 *)(self + 0x28);
    uVar2 = 1;
  }
  return uVar2;
}

} // namespace tea

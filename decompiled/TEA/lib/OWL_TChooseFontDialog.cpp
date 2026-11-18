// TEA.exe — runtime / library code "OWL_TChooseFontDialog"
// 5 functions, 0x0048b554..0x0048b8f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048b554  OWL::TChooseFontDialog::Find   (69 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TChooseFontDialog's OWL::TWindow subobject vtable at 0x00505660 (through the this-adjusting thunk at 0x0048b978); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TChooseFontDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TChooseFontDialog::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&DAT_00505598,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b59c  OWL::TChooseFontDialog::TChooseFontDialog   (533 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TChooseFontDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TChooseFontDialog::TChooseFontDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5055c0);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1b);
    self[0x1b] = (int)(self + 0x18);
    self[0x1c] = (int)(self + 0x19);
    self[1] = (int)(self + 0x18);
    self[2] = (int)(self + 0x19);
    self[0x17] = 0;
    self[0x1a] = 0;
    self[0x18] = (int)&OWL::TEventHandler::vftable;
    self[0x19] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x1b,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x40;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x40;
  OWL::TCommonDialog::TCommonDialog(self,1,param_3,param_6,param_7);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x40;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x40;
  self[3] = (int)&OWL::TChooseFontDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00505648;
  *(undefined ***)self[2] = &PTR_LAB_00505654;
  *(undefined ***)(*self + 8) = &OWL::TChooseFontDialog::vftable_TWindow;
  self[0x16] = param_4;
  memset(self + 7,0,0x3c);
  self[7] = 0x3c;
  if (*(int *)(*self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x14) + 0xc);
  }
  self[8] = iVar2;
  self[0x11] = *(int *)(*(int *)(*self + 0x70) + 8);
  self[0xc] = *(uint *)self[0x16] | 8;
  if (param_5 == 0) {
    self[0xc] = self[0xc] & 0xffffffef;
  }
  else {
    self[0x10] = param_5;
    self[0xc] = self[0xc] | 0x10;
  }
  self[0xf] = 0;
  self[9] = *(int *)(self[0x16] + 8);
  self[10] = self[0x16] + 0xc;
  self[0xb] = *(int *)(self[0x16] + 0x48);
  uVar1 = FUN_0048c12c((uint *)(self[0x16] + 0x4c));
  self[0xd] = uVar1;
  self[0x12] = *(int *)(self[0x16] + 0x50);
  *(undefined2 *)(self + 0x13) = *(undefined2 *)(self[0x16] + 0x54);
  self[0x14] = *(int *)(self[0x16] + 0x56);
  self[0x15] = *(int *)(self[0x16] + 0x5a);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b7dc  OWL::TChooseFontDialog::~TChooseFontDialog   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TChooseFontDialog::_dtor
void __cdecl OWL::TChooseFontDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5055e4);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TChooseFontDialog::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00505648;
    *(undefined ***)self[2] = &PTR_LAB_00505654;
    *(undefined ***)(*self + 8) = &OWL::TChooseFontDialog::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x40;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x40;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x40;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x40;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x1b,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x19,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b8d8  OWL::TChooseFontDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TChooseFontDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b8f4  OWL::TChooseFontDialog::DoExecute   (129 bytes)   [rtti:vtable virtual slot 8]
//   override of OWL::TWindow vtable slot 8, from OWL::TChooseFontDialog's OWL::TWindow subobject vtable at 0x00505660 (through the this-adjusting thunk at 0x0048b9fd); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TChooseFontDialog::vf6 [rtti:vtable]
undefined4 __cdecl OWL::TChooseFontDialog::DoExecute(int self)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(self + 0x3c) = FUN_004b070c;
  iVar1 = FUN_0048c274();
  if (iVar1 == 0) {
    uVar2 = FUN_0048c2ac();
    *(undefined4 *)(*(int *)(self + 0x58) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(self + 0x58) = *(undefined4 *)(self + 0x30);
    *(undefined4 *)(*(int *)(self + 0x58) + 4) = 0;
    *(undefined4 *)(*(int *)(self + 0x58) + 0x48) = *(undefined4 *)(self + 0x2c);
    *(undefined4 *)(*(int *)(self + 0x58) + 0x4c) = *(undefined4 *)(self + 0x34);
    *(undefined4 *)(*(int *)(self + 0x58) + 0x50) = *(undefined4 *)(self + 0x48);
    *(undefined2 *)(*(int *)(self + 0x58) + 0x54) = *(undefined2 *)(self + 0x4c);
    uVar2 = 1;
  }
  return uVar2;
}

} // namespace tea

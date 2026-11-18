// TEA.exe — runtime / library code "OWL_TFindDialog"
// 3 functions, 0x004b9f70..0x004bd140. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b9f70  OWL::TFindDialog::~TFindDialog   (165 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFindDialog::_dtor
void __cdecl OWL::TFindDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ecc4);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x16,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x14,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd020  OWL::TFindDialog::TFindDialog   (287 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TFindDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TFindDialog::TFindDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50f4c8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x16);
    self[0x16] = (int)(self + 0x13);
    self[0x17] = (int)(self + 0x14);
    self[1] = (int)(self + 0x13);
    self[2] = (int)(self + 0x14);
    self[0x12] = 0;
    self[0x15] = 0;
    self[0x13] = (int)&OWL::TEventHandler::vftable;
    self[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x16,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  OWL::TFindReplaceDialog::TFindReplaceDialog(self,1,param_3,param_4,param_5,param_6,param_7);
  self[3] = (int)&OWL::TFindDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050f640;
  *(undefined ***)self[2] = &PTR_LAB_0050f64c;
  *(undefined ***)(*self + 8) = &PTR_LAB_0050f658;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd140  OWL::TFindDialog::vf4   (33 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TFindDialog::vf4(int *self)

{
  undefined4 uVar1;
  
  self[0xf] = (int)FUN_004b070c;
  uVar1 = FUN_0048c2dc();
  *(undefined4 *)(*self + 0xc) = uVar1;
  return;
}

} // namespace tea

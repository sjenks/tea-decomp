// TSBuild.exe — runtime / library code "OWL_TFileSaveDialog"
// 2 functions, 0x004511f4..0x00451350. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004511f4  OWL::TFileSaveDialog::TFileSaveDialog   (309 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TFileSaveDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TFileSaveDialog::TFileSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483548);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x22);
    self[0x22] = (int)(self + 0x1f);
    self[0x23] = (int)(self + 0x20);
    self[1] = (int)(self + 0x1f);
    self[2] = (int)(self + 0x20);
    self[0x1e] = 0;
    self[0x21] = 0;
    self[0x1f] = (int)&OWL::TEventHandler::vftable;
    self[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0x22,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  OWL::TOpenSaveDialog::TOpenSaveDialog(self,1,param_3,param_4,param_5,param_6,param_7);
  self[3] = (int)&OWL::TFileSaveDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004835b0;
  *(undefined ***)self[2] = &PTR_LAB_004835bc;
  *(undefined ***)(*self + 8) = &PTR_LAB_004835c8;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451350  OWL::TFileSaveDialog::vf6   (90 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TFileSaveDialog::vf6(int self)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(self + 0x60) = FUN_0043fd80;
  iVar1 = FUN_00420594();
  if (iVar1 == 0) {
    uVar2 = FUN_00420474();
    *(undefined4 *)(*(int *)(self + 0x74) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(self + 0x74) = *(undefined4 *)(self + 0x50);
    *(undefined4 *)(*(int *)(self + 0x74) + 0x14) = *(undefined4 *)(self + 0x34);
    *(undefined4 *)(*(int *)(self + 0x74) + 4) = 0;
    uVar2 = 1;
  }
  return uVar2;
}

} // namespace tea

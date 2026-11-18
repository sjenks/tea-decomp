// TEA.exe — runtime / library code "OWL_TDvFileOpenDialog"
// 3 functions, 0x004b1d34..0x004b4b58. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b1d34  OWL::TDvFileOpenDialog::TDvFileOpenDialog   (348 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TDvFileOpenDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TDvFileOpenDialog::TDvFileOpenDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d124);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x23);
    self[0x23] = (int)(self + 0x20);
    self[0x24] = (int)(self + 0x21);
    self[1] = (int)(self + 0x20);
    self[2] = (int)(self + 0x21);
    self[0x1f] = 0;
    self[0x22] = 0;
    self[0x20] = (int)&OWL::TEventHandler::vftable;
    self[0x21] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x23,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TFileOpenDialog::TFileOpenDialog(self,1,param_3,param_4,0,param_5,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  FUN_004b1d08(self + 0x1e,param_4);
  self[3] = (int)&OWL::TDvFileOpenDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050dbfc;
  *(undefined ***)self[2] = &PTR_LAB_0050dc08;
  *(undefined ***)(*self + 8) = &PTR_LAB_0050dc14;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b1eb8  OWL::TDvFileOpenDialog::vf1   (82 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TDvFileOpenDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  if (((param_2 == 0x111) && ((short)param_3 == 0x470)) && ((short)((uint)param_3 >> 0x10) == 1)) {
    FUN_004b1bc8(self,self + 0x1e,(int)(self + 7));
  }
  OWL::TOpenSaveDialog::vf1(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4b58  OWL::TDvFileOpenDialog::~TDvFileOpenDialog   (205 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDvFileOpenDialog::_dtor
void __cdecl OWL::TDvFileOpenDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d998);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x5c;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x23,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x21,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

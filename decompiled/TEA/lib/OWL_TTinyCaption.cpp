// TEA.exe — runtime / library code "OWL_TTinyCaption"
// 3 functions, 0x004c7fe4..0x004c8b78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c7fe4  OWL::TTinyCaption::Find   (34 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TTinyCaption's OWL::TWindow subobject vtable at 0x00511e40 (through the this-adjusting thunk at 0x004c9d48); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTinyCaption::vf2 [rtti:vtable]
void __cdecl OWL::TTinyCaption::Find(int self,int *param_2,undefined *param_3)

{
  param_2[2] = self;
  FUN_0048e808(*(undefined4 *)(self + 4),(int *)&DAT_00511b7c,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8028  OWL::TTinyCaption::~TTinyCaption   (246 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TTinyCaption::_dtor
void __cdecl OWL::TTinyCaption::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511c74);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TTinyCaption::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00511e28;
    *(undefined ***)self[2] = &PTR_LAB_00511e34;
    *(undefined ***)(*self + 8) = &OWL::TTinyCaption::vftable_TWindow;
    if (*(uint **)((int)self + 0x26) != (uint *)0x0) {
      OWL::TGdiObject::_dtor(*(uint **)((int)self + 0x26),0);
      operator_delete();
    }
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x10,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xe,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8b78  OWL::TTinyCaption::EvCommand   (63 bytes)   [rtti:vtable virtual slot 18]
//   override of OWL::TWindow vtable slot 18, from OWL::TTinyCaption's OWL::TWindow subobject vtable at 0x00511e40 (through the this-adjusting thunk at 0x004c9d5b); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTinyCaption::vf1 [rtti:vtable]
undefined4 __cdecl OWL::TTinyCaption::EvCommand(int *self,uint param_2,HWND hWnd,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_004c8bb8(self,param_2,hWnd,param_4,&local_8);
  if (iVar1 != 1) {
    local_8 = OWL::TWindow::EvCommand((undefined4 *)*self,param_2,hWnd,param_4);
  }
  return local_8;
}

} // namespace tea

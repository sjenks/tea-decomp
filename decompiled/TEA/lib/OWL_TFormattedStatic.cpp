// TEA.exe — runtime / library code "OWL_TFormattedStatic"
// 3 functions, 0x004c43ac..0x004c466c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c43ac  OWL::TFormattedStatic::TFormattedStatic   (351 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TFormattedStatic's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TFormattedStatic::TFormattedStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, uint *param_6)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510d90);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xc);
    self[0xc] = (int)(self + 9);
    self[0xd] = (int)(self + 10);
    self[1] = (int)(self + 9);
    self[2] = (int)(self + 10);
    self[8] = 0;
    self[0xb] = 0;
    self[9] = (int)&OWL::TEventHandler::vftable;
    self[10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xc,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  OWL::TStatic::TStatic_4c7a28(self,1,param_3,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  self[3] = (int)&OWL::TFormattedStatic::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00511558;
  *(undefined ***)self[2] = &PTR_LAB_00511564;
  *(undefined ***)(*self + 8) = &OWL::TFormattedStatic::vftable_TWindow;
  iVar1 = FUN_00496d48(param_5);
  self[6] = iVar1;
  if (param_6 == (uint *)0x0) {
    iVar1 = FUN_00496d48((uint *)&DAT_00510d7c);
  }
  else {
    iVar1 = FUN_00496d48(param_6);
  }
  self[7] = iVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4530  OWL::TFormattedStatic::~TFormattedStatic   (313 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFormattedStatic::_dtor
void __cdecl OWL::TFormattedStatic::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510db4);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TFormattedStatic::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00511558;
    *(undefined ***)self[2] = &PTR_LAB_00511564;
    *(undefined ***)(*self + 8) = &OWL::TFormattedStatic::vftable_TWindow;
    operator_delete_array();
    operator_delete_array();
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xc,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 10,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c466c  OWL::TFormattedStatic::SetupWindow   (158 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TFormattedStatic's OWL::TWindow subobject vtable at 0x00511570 (through the this-adjusting thunk at 0x004c641b); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFormattedStatic::vf12 [rtti:vtable]
void __cdecl OWL::TFormattedStatic::SetupWindow(int *self)

{
  LPCSTR lpString;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510de8);
  OWL::TWindow::SetupWindow(*self);
  strlen(*(uint **)(*self + 0x10));
  strlen((uint *)self[6]);
  strlen((uint *)self[7]);
  lpString = (LPCSTR)operator_new_array();
  sprintf(lpString,*(byte **)(*self + 0x10));
  SetWindowTextA(*(HWND *)(*self + 0xc),lpString);
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

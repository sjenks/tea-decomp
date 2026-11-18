// TEA.exe — runtime / library code "OWL_TPickListPopup"
// 4 functions, 0x0049b7b0..0x0049bbf0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049b7b0  OWL::TPickListPopup::TPickListPopup   (338 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPickListPopup's vtable at its vptr offset (+0x8) in this
int * __cdecl OWL::TPickListPopup::TPickListPopup(int *self,int vbasesBuilt,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *sehChainHead;
  CHAR multiByteStr [260];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x5089dc);
  ehContext = 8;
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x9b;
    self[1] = (int)self + 0x9f;
    *(undefined4 *)((int)self + 0x97) = 0;
    *(undefined ***)((int)self + 0x9b) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x9f) = &OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
  }
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x11;
  OWL::TWindow::TWindow_4a4de0(self,1,param_3,(uint *)0x0,0);
  ehDtorCount = ehDtorCount + 1;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x11;
  self[2] = (int)&OWL::TPickListPopup::vftable;
  *(undefined ***)*self = &PTR_LAB_00508aa0;
  *(undefined ***)self[1] = &PTR_LAB_00508aac;
  OWL::TPopupMenu::TPopupMenu((undefined4 *)((int)self + 0x86),1);
  ehDtorCount = ehDtorCount + 2;
  *(undefined4 *)((int)self + 0x8f) = 0;
  if (param_4 != 0) {
    iVar1 = FUN_004c0cd4(self[0x1b] + 4,param_4,multiByteStr,0x104);
    if (iVar1 != 0) {
      AppendMenuA(*(HMENU *)((int)self + 0x8a),1,0,multiByteStr);
      AppendMenuA(*(HMENU *)((int)self + 0x8a),0x800,0xffffffff,(LPCSTR)0x0);
      goto LAB_0049b8f0;
    }
  }
  *sehChainHead = sehPrevFrame;
LAB_0049b8f0:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b940  OWL::TPickListPopup::Execute   (127 bytes)   [rtti:vtable virtual slot 7]
//   vtable slot 7 (introduced by OWL::TWindow); slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TPickListPopup::Execute(int self)

{
  BOOL ok;
  undefined4 uVar2;
  tagPOINT pt;
  
  (**(code **)(*(int *)(self + 8) + 0x10))();
  *(undefined4 *)(self + 0x93) = 0xfffffffe;
  pt.x = 0;
  pt.y = 0;
  GetCursorPos(&pt);
  TrackPopupMenu(*(HMENU *)(self + 0x8a),0,pt.x,pt.y,0,*(HWND *)(self + 0xc),
                 (RECT *)0x0);
  ok = IsWindow(*(HWND *)(self + 0xc));
  if (ok == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_00498d7c((int *)(*(int *)(self + 0x6c) + 0x11));
    uVar2 = *(undefined4 *)(self + 0x93);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049b9c0  OWL::TPickListPopup::EvCommand   (19 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18 (introduced by OWL::TWindow); slot name identified from OWL::TWindow's own implementation of that slot
undefined4 __cdecl OWL::TPickListPopup::EvCommand(int self,undefined4 param_2)

{
  *(undefined4 *)(self + 0x93) = param_2;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bbf0  OWL::TPickListPopup::~TPickListPopup   (138 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPickListPopup::_dtor
void __cdecl OWL::TPickListPopup::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508ab0);
  if (self != (int *)0x0) {
    OWL::TMenu::_dtor((undefined4 *)((int)self + 0x86),0);
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x11;
    OWL::TWindow::_dtor(self,0);
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x11;
    if ((dtorFlags & 2) != 0) {
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x9f),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

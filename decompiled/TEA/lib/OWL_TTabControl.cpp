// TEA.exe — runtime / library code "OWL_TTabControl"
// 7 functions, 0x0049e888..0x0049eb08. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049e888  OWL::TTabControl::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TTabControl::Find [rtti:vtable]; OWL::TTabControl::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TTabControl::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TTabControl::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e8f0  OWL::TTabControl::TTabControl   (279 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTabControl's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TTabControl::TTabControl(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509528);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 9);
    self[9] = (int)(self + 6);
    self[10] = (int)(self + 7);
    self[1] = (int)(self + 6);
    self[2] = (int)(self + 7);
    self[5] = 0;
    self[8] = 0;
    self[6] = (int)&OWL::TEventHandler::vftable;
    self[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 9,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  OWL::TControl::TControl_4ad87c(self,1,param_3,param_4,param_5);
  self[3] = (int)&OWL::TTabControl::vftable;
  *(undefined ***)self[1] = &PTR_LAB_005095a0;
  *(undefined ***)self[2] = &PTR_LAB_005095ac;
  *(undefined ***)(*self + 8) = &OWL::TTabControl::vftable_TWindow;
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
// 0x0049ea08  OWL::TTabControl::~TTabControl   (210 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTabControl::_dtor
void __cdecl OWL::TTabControl::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50954c);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TTabControl::vftable;
    *(undefined ***)self[1] = &PTR_LAB_005095a0;
    *(undefined ***)self[2] = &PTR_LAB_005095ac;
    *(undefined ***)(*self + 8) = &OWL::TTabControl::vftable_TWindow;
    OWL::TControl::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 9,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 7,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eadc  OWL::TTabControl::GetClassName   (20 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TTabControl's OWL::TWindow subobject vtable at 0x005095b8 (through the this-adjusting thunk at 0x0049eb2b); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTabControl::vf10 [rtti:vtable]
char * __cdecl OWL::TTabControl::GetClassName(int self)

{
  *(uint *)(self + 0x10) = *(uint *)(self + 0x10) | 0x8000;
  return "SysTabControl32";
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eaf0  OWL::TTabControl::Transfer   (7 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from OWL::TTabControl's OWL::TWindow subobject vtable at 0x005095b8 (through the this-adjusting thunk at 0x0049eb3e); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTabControl::vf9 [rtti:vtable]
undefined4 __stdcall OWL::TTabControl::Transfer(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eaf8  OWL::TTabControl::EvVScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_VSCROLL
void __cdecl OWL::TTabControl::EvVScroll(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049eb08  OWL::TTabControl::EvHScroll   (16 bytes)   [owl:response-table message-handler]
//   WM_HSCROLL
void __cdecl OWL::TTabControl::EvHScroll(int *self)

{
  FUN_004a5774(*self);
  return;
}

} // namespace tea

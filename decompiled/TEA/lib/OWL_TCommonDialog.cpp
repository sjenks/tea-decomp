// TEA.exe — runtime / library code "OWL_TCommonDialog"
// 8 functions, 0x0048c4ac..0x0048c790. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048c4ac  OWL::TCommonDialog::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TCommonDialog::Find [rtti:vtable]; OWL::TCommonDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TCommonDialog::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TCommonDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c4f4  OWL::TCommonDialog::EvClose   (16 bytes)   [owl:response-table message-handler]
//   WM_CLOSE
void __cdecl OWL::TCommonDialog::EvClose(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c504  OWL::TCommonDialog::CmRange1to2   (16 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: id 1; id 2
//   also: OWL::TCommonDialog::CmRange1to2 [owl:response-table]
void __cdecl OWL::TCommonDialog::CmRange1to2(int *self)

{
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c514  OWL::TCommonDialog::TCommonDialog   (303 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCommonDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TCommonDialog::TCommonDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505924);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TDialog::TDialog(self,1,param_3,(uint *)0x0,param_5);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TCommonDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_005059ac;
  *(undefined ***)self[2] = &PTR_LAB_005059b8;
  *(undefined ***)(*self + 8) = &OWL::TCommonDialog::vftable_TWindow;
  self[6] = param_4;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c668  OWL::TCommonDialog::~TCommonDialog   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCommonDialog::_dtor
void __cdecl OWL::TCommonDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505948);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TCommonDialog::vftable;
    *(undefined ***)self[1] = &PTR_LAB_005059ac;
    *(undefined ***)self[2] = &PTR_LAB_005059b8;
    *(undefined ***)(*self + 8) = &OWL::TCommonDialog::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xb,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 9,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c764  OWL::TCommonDialog::SetupWindow   (35 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TCommonDialog's OWL::TWindow subobject vtable at 0x005059c4 (through the this-adjusting thunk at 0x0048c7af); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TCommonDialog::vf11 [rtti:vtable]
void __cdecl OWL::TCommonDialog::SetupWindow(int *self)

{
  OWL::TDialog::SetupWindow(self);
  if (self[6] != 0) {
    FUN_004b0c44(self,(uint *)self[6]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c788  OWL::TCommonDialog::PerformCreate   (5 bytes)   [rtti:vtable virtual slot 5]
//   override of OWL::TWindow vtable slot 5, from OWL::TCommonDialog's OWL::TWindow subobject vtable at 0x005059c4 (through the this-adjusting thunk at 0x0048c85a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TCommonDialog::vf4 [rtti:vtable]
void __stdcall OWL::TCommonDialog::PerformCreate(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c790  OWL::TCommonDialog::DoExecute   (10 bytes)   [rtti:vtable virtual slot 8]
//   override of OWL::TWindow vtable slot 8, from OWL::TCommonDialog's OWL::TWindow subobject vtable at 0x005059c4 (through the this-adjusting thunk at 0x0048c821); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TCommonDialog::vf6 [rtti:vtable]
undefined4 __stdcall OWL::TCommonDialog::DoExecute(void)

{
  return 2;
}

} // namespace tea

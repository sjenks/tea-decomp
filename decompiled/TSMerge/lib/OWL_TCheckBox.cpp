// TSMerge.exe — runtime / library code "OWL_TCheckBox"
// 5 functions, 0x00431e34..0x00432180. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00431e34  OWL::TCheckBox::Find   (69 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TCheckBox's OWL::TWindow subobject vtable at 0x0046ba40 (through the this-adjusting thunk at 0x00431eb0); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TCheckBox::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TCheckBox::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&DAT_0046b99c,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TButton::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431f2c  OWL::TCheckBox::TCheckBox   (309 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCheckBox's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TCheckBox::TCheckBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46bad8);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x2a;
    *(int *)((int)self + 0x2a) = (int)self + 0x1e;
    *(int *)((int)self + 0x2e) = (int)self + 0x22;
    self[1] = (int)self + 0x1e;
    self[2] = (int)self + 0x22;
    *(undefined4 *)((int)self + 0x1a) = 0;
    *(undefined4 *)((int)self + 0x26) = 0;
    *(undefined ***)((int)self + 0x1e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x22) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84((int *)((int)self + 0x2a),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TButton::TButton(self,1,param_3,param_4,param_6);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TCheckBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046ba28;
  *(undefined ***)self[2] = &PTR_LAB_0046ba34;
  *(undefined ***)(*self + 8) = &OWL::TCheckBox::vftable_TWindow;
  *(undefined4 *)((int)self + 0x16) = param_5;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 0x100;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432064  OWL::TCheckBox::~TCheckBox   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCheckBox::_dtor
void __cdecl OWL::TCheckBox::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46bb0c);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TCheckBox::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0046ba28;
    *(undefined ***)self[2] = &PTR_LAB_0046ba34;
    *(undefined ***)(*self + 8) = &OWL::TCheckBox::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TButton::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x2a),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x22),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432160  OWL::TCheckBox::GetClassName   (31 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TCheckBox's OWL::TWindow subobject vtable at 0x0046ba40 (through the this-adjusting thunk at 0x00431ed6); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TCheckBox::vf9 [rtti:vtable]
char * __cdecl OWL::TCheckBox::GetClassName(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorCheck";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x00432180  OWL::TCheckBox::Transfer   (67 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from OWL::TCheckBox's OWL::TWindow subobject vtable at 0x0046ba40 (through the this-adjusting thunk at 0x00431ee9); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TCheckBox::vf11 [rtti:vtable]
undefined4 __cdecl OWL::TCheckBox::Transfer(int *self,ushort *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_0042d1a4(*self,0xf0,0,0);
    *param_2 = (ushort)uVar1;
  }
  else if (param_3 == 1) {
    FUN_004321c4(self,(uint)*param_2);
  }
  return 2;
}

} // namespace tea

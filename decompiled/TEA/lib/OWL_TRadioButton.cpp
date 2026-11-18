// TEA.exe — runtime / library code "OWL_TRadioButton"
// 3 functions, 0x004c65fc..0x004c679c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c65fc  OWL::TRadioButton::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRadioButton::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TRadioButton::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TRadioButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCheckBox::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6664  OWL::TRadioButton::TRadioButton   (277 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRadioButton's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TRadioButton::TRadioButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5116e8);
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
    OWL::TWindow::TWindow_4a4fbc((int *)((int)self + 0x2a),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  OWL::TCheckBox::TCheckBox(self,1,param_3,param_4,param_5,param_6);
  self[3] = (int)&OWL::TRadioButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00511740;
  *(undefined ***)self[2] = &PTR_LAB_0051174c;
  *(undefined ***)(*self + 8) = &PTR_LAB_00511758;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c679c  OWL::TRadioButton::BNClicked   (51 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl OWL::TRadioButton::BNClicked(int *self)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*self,0xf0,0,0);
  if (iVar1 != 0) {
    BNClicked_4ac788(self);
    return;
  }
  FUN_004a5774(*self);
  return;
}

} // namespace tea

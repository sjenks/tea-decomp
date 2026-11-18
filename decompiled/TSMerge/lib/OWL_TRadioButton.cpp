// TSMerge.exe — runtime / library code "OWL_TRadioButton"
// 4 functions, 0x00446594..0x00446734. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00446594  OWL::TRadioButton::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRadioButton::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TRadioButton::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&OWL::TRadioButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCheckBox::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004465fc  OWL::TRadioButton::TRadioButton   (277 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TRadioButton's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TRadioButton::TRadioButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46faac);
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
  OWL::TCheckBox::TCheckBox(self,1,param_3,param_4,param_5,param_6);
  self[3] = (int)&OWL::TRadioButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046fb04;
  *(undefined ***)self[2] = &PTR_LAB_0046fb10;
  *(undefined ***)(*self + 8) = &PTR_LAB_0046fb1c;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00446714  OWL::TRadioButton::vf9   (31 bytes)   [rtti:vtable virtual slot 9]
char * __cdecl OWL::TRadioButton::vf9(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorRadio";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x00446734  OWL::TRadioButton::BNClicked   (51 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl OWL::TRadioButton::BNClicked(int *self)

{
  int iVar1;
  
  iVar1 = FUN_0042d1a4(*self,0xf0,0,0);
  if (iVar1 != 0) {
    BNClicked_4321fc(self);
    return;
  }
  FUN_0042b294(*self);
  return;
}

} // namespace tea

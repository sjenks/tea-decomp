// TSMerge.exe — runtime / library code "OWL_TButton"
// 11 functions, 0x00431608..0x00431e28. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00431608  OWL::TButton::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TButton::Find [rtti:vtable]; OWL::TButton::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TButton::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&OWL::TButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004316d8  OWL::TButton::TButton   (312 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TButton's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TButton::TButton(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b894);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x26;
    *(int *)((int)self + 0x26) = (int)self + 0x1a;
    *(int *)((int)self + 0x2a) = (int)self + 0x1e;
    self[1] = (int)self + 0x1a;
    self[2] = (int)self + 0x1e;
    *(undefined4 *)((int)self + 0x16) = 0;
    *(undefined4 *)((int)self + 0x22) = 0;
    *(undefined ***)((int)self + 0x1a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x1e) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84((int *)((int)self + 0x26),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -2;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -2;
  OWL::TControl::TControl_432414(self,1,param_3,param_4,param_5);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 2;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 2;
  self[3] = (int)&OWL::TButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046b7e4;
  *(undefined ***)self[2] = &PTR_LAB_0046b7f0;
  *(undefined ***)(*self + 8) = &OWL::TButton::vftable_TWindow;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) & 0xfffffeff;
  *(undefined1 *)(self + 5) = 0;
  *(undefined1 *)((int)self + 0x15) = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431810  OWL::TButton::~TButton   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TButton::_dtor
void __cdecl OWL::TButton::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b8c8);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TButton::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0046b7e4;
    *(undefined ***)self[2] = &PTR_LAB_0046b7f0;
    *(undefined ***)(*self + 8) = &OWL::TButton::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -2;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -2;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 2;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 2;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x26),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x1e),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043190c  OWL::TButton::GetClassName   (31 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TButton's OWL::TWindow subobject vtable at 0x0046b7fc (through the this-adjusting thunk at 0x00431692); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TButton::vf9 [rtti:vtable]
char * __cdecl OWL::TButton::GetClassName(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorBtn";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x0043192c  OWL::TButton::SetupWindow   (52 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TButton's OWL::TWindow subobject vtable at 0x0046b7fc (through the this-adjusting thunk at 0x0043167f); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TButton::vf10 [rtti:vtable]
void __cdecl OWL::TButton::SetupWindow(int *self)

{
  if (((char)self[5] != '\0') && ((*(uint *)(*self + 0x18) & 0xb) == 0xb)) {
    FUN_0042bbb4(*(int *)(*self + 0x14),0x401,*(undefined4 *)(*self + 0x34),0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431960  OWL::TButton::EvGetDlgCode   (53 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
undefined4 __cdecl OWL::TButton::EvGetDlgCode(int *self)

{
  undefined4 uVar1;
  
  if ((*(uint *)(*self + 0x18) & 0xb) != 0xb) {
    uVar1 = FUN_0042b294(*self);
    return uVar1;
  }
  if (*(char *)((int)self + 0x15) != '\0') {
    return 0x2010;
  }
  return 0x2020;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431998  OWL::TButton::EvMsg_f4   (93 bytes)   [owl:response-table message-handler]
//   message 0x00f4
undefined4 __cdecl OWL::TButton::EvMsg_f4(int *self,int param_2)

{
  if ((*(uint *)(*self + 0x18) & 0xb) == 0xb) {
    if (param_2 == 1) {
      *(undefined1 *)((int)self + 0x15) = 1;
      (**(code **)(*(int *)(*self + 8) + 0x68))();
    }
    else if (param_2 == 0) {
      *(undefined1 *)((int)self + 0x15) = 0;
      (**(code **)(*(int *)(*self + 8) + 0x68))();
    }
    else {
      FUN_0042b294(*self);
    }
  }
  else {
    FUN_0042b294(*self);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431a80  OWL::TButton::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TButton::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TButton::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b908);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TButton::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00405354,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431ae8  OWL::TButton::TButton_431ae8   (283 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TButton's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TButton::TButton_431ae8(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b920);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x26;
    *(int *)((int)self + 0x26) = (int)self + 0x1a;
    *(int *)((int)self + 0x2a) = (int)self + 0x1e;
    self[1] = (int)self + 0x1a;
    self[2] = (int)self + 0x1e;
    *(undefined4 *)((int)self + 0x16) = 0;
    *(undefined4 *)((int)self + 0x22) = 0;
    *(undefined ***)((int)self + 0x1a) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x1e) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84((int *)((int)self + 0x26),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -2;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -2;
  OWL::TControl::TControl_4328e4(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 2;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 2;
  self[3] = (int)&OWL::TButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046b7e4;
  *(undefined ***)self[2] = &PTR_LAB_0046b7f0;
  *(undefined ***)(*self + 8) = &OWL::TButton::vftable_TWindow;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431c94  OWL::TButton::Streamer::vf2   (50 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TButton::Streamer::vf2(int self,int *param_2)

{
  FUN_00431cc8(*(int *)(self + 8),param_2);
  FUN_00422d88(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431e28  OWL::TButton::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TButton::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea

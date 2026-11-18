// TSBuild.exe — runtime / library code "OWL_TEditSearch"
// 14 functions, 0x004488a4..0x004497f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004488a4  OWL::TEditSearch::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TEditSearch::Find [rtti:vtable]; OWL::TEditSearch::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TEditSearch::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[1],(int *)&OWL::TEditSearch::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEdit::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044890c  OWL::TEditSearch::~TEditSearch   (318 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TEditSearch::_dtor
void __cdecl OWL::TEditSearch::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481bc0);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TEditSearch::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004782e4;
    *(undefined ***)self[2] = &PTR_LAB_004782f0;
    *(undefined ***)(*self + 8) = &OWL::TEditSearch::vftable_TWindow;
    if (self[0xc] != 0) {
      (*(code *)**(undefined4 **)(self[0xc] + 0xc))();
    }
    OWL::TFindReplaceDialog::TData::_dtor((int)(self + 7),2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x1c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x1c;
    OWL::TEdit::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x1c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x1c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x12,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x10,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448a7c  OWL::TEditSearch::SetupWindow   (54 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TEditSearch's OWL::TWindow subobject vtable at 0x004782fc (through the this-adjusting thunk at 0x0041b2a7); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEditSearch::vf20 [rtti:vtable]
void __cdecl OWL::TEditSearch::SetupWindow(int *self)

{
  OWL::TEdit::SetupWindow(self);
  if (self[0xd] != 0) {
    PostMessageA(*(HWND *)(*self + 0xc),0x111,self[0xd],0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448d94  OWL::TEditSearch::Cmd24351   (181 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24351)
void __cdecl OWL::TEditSearch::Cmd24351(undefined4 *self)

{
  int *findDialog;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481c7c);
  if (self[0xd] == 0) {
    self[0xd] = 0x5f1f;
    if (self[0xc] != 0) {
      (*(code *)**(undefined4 **)(self[0xc] + 0xc))();
    }
    findDialog = (int *)operator_new();
    if (findDialog != (int *)0x0) {
      OWL::TFindDialog::TFindDialog(findDialog,0,*self,(int)(self + 7),0,0,0);
    }
    self[0xc] = findDialog;
    (**(code **)(*(int *)(self[0xc] + 0xc) + 0xc))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448e6c  OWL::TEditSearch::Cmd24352   (181 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24352)
void __cdecl OWL::TEditSearch::Cmd24352(undefined4 *self)

{
  int *replaceDialog;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481cd4);
  if (self[0xd] == 0) {
    self[0xd] = 0x5f20;
    if (self[0xc] != 0) {
      (*(code *)**(undefined4 **)(self[0xc] + 0xc))();
    }
    replaceDialog = (int *)operator_new();
    if (replaceDialog != (int *)0x0) {
      OWL::TReplaceDialog::TReplaceDialog(replaceDialog,0,*self,(int)(self + 7),0,0,0);
    }
    self[0xc] = replaceDialog;
    (**(code **)(*(int *)(self[0xc] + 0xc) + 0xc))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448f48  OWL::TEditSearch::CeRange24351to24352   (30 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: id 24351; id 24352
//   also: OWL::TEditSearch::CeRange24351to24352 [owl:response-table]
void __cdecl OWL::TEditSearch::CeRange24351to24352(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448f68  OWL::TEditSearch::Cmd24353   (40 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24353)
void __cdecl OWL::TEditSearch::Cmd24353(int *self)

{
  if (self[0xc] != 0) {
    FUN_0044c224(self[0xc],0);
  }
  self[7] = self[7] | 8;
  FUN_00448ab4(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448f90  OWL::TEditSearch::CeCmd24353   (43 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24353)
void __cdecl OWL::TEditSearch::CeCmd24353(int self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448fbc  OWL::TEditSearch::EvRegisteredMsg_448fbc   (46 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __cdecl OWL::TEditSearch::EvRegisteredMsg_448fbc(int *self,undefined4 param_2,int param_3)

{
  FUN_0044c224(self[0xc],param_3);
  if ((*(byte *)(self + 7) & 0x40) == 0) {
    FUN_00448ab4(self);
  }
  else {
    self[0xd] = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449414  OWL::TEditSearch::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEditSearch::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TEditSearch::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481d50);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TEditSearch::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041b138,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044947c  OWL::TEditSearch::TEditSearch   (304 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEditSearch's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TEditSearch::TEditSearch(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481d68);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x12);
    self[0x12] = (int)(self + 0xf);
    self[0x13] = (int)(self + 0x10);
    self[1] = (int)(self + 0xf);
    self[2] = (int)(self + 0x10);
    self[0xe] = 0;
    self[0x11] = 0;
    self[0xf] = (int)&OWL::TEventHandler::vftable;
    self[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0x12,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x1c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x1c;
  OWL::TEdit::TEdit_4468bc(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x1c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x1c;
  self[3] = (int)&OWL::TEditSearch::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004782e4;
  *(undefined ***)self[2] = &PTR_LAB_004782f0;
  *(undefined ***)(*self + 8) = &OWL::TEditSearch::vftable_TWindow;
  FUN_0044beec(self + 7,0,0x51);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004495ac  OWL::TEditSearch::Streamer::vf1   (71 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TEditSearch::Streamer::vf1(int self,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004495f4(*(int *)(self + 8),param_2);
  FUN_0044c80c(*(int *)(self + 8) + 0x1c,param_2);
  iVar1 = *(int *)(self + 8);
  uVar2 = FUN_0042da9c(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(*(int *)(self + 8) + 0x30) = 0;
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044964c  OWL::TEditSearch::Streamer::vf2   (61 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TEditSearch::Streamer::vf2(int self,int *param_2)

{
  FUN_0044968c(*(int *)(self + 8),param_2);
  FUN_0044c88c((undefined4 *)(*(int *)(self + 8) + 0x1c),param_2);
  FUN_0042df1c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004497f4  OWL::TEditSearch::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TEditSearch::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea

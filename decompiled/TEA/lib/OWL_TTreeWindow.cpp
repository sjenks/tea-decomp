// TEA.exe — runtime / library code "OWL_TTreeWindow"
// 11 functions, 0x004ca394..0x004cbe64. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ca394  OWL::TTreeWindow::GetItemHeight   (27 bytes)   [rtti:vtable virtual slot 20]
//   vtable slot 20 (introduced by OWL::TListBox); LB_GETITEMHEIGHT
void __cdecl OWL::TTreeWindow::GetItemHeight(int *self)

{
  FUN_004a76a8(*self,0x111c,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca3b0  OWL::TTreeWindow::SetItemHeight   (30 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21 (introduced by OWL::TListBox); LB_SETITEMHEIGHT
void __cdecl OWL::TTreeWindow::SetItemHeight(int *self,undefined4 param_2,short wParam)

{
  FUN_004a76a8(*self,0x111b,(int)wParam,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb7d0  OWL::TTreeWindow::TTreeWindow   (356 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTreeWindow's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TTreeWindow::TTreeWindow(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 txCommCtrl [3];
  
  __InitExceptBlockLDTC(0x5127fc);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 10);
    self[10] = (int)(self + 7);
    self[0xb] = (int)(self + 8);
    self[1] = (int)(self + 7);
    self[2] = (int)(self + 8);
    self[6] = 0;
    self[9] = 0;
    self[7] = (int)&OWL::TEventHandler::vftable;
    self[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TListBox::TListBox(self,1,param_3,param_4,param_5);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TTreeWindow::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0051297c;
  *(undefined ***)self[2] = &PTR_LAB_00512988;
  *(undefined ***)(*self + 8) = &OWL::TTreeWindow::vftable_TWindow;
  bVar1 = FUN_00487180();
  if (!bVar1) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00487348;
    objectDtor = 0;
    OWL::TXCommCtrl::TXCommCtrl(txCommCtrl);
    _ThrowExceptionLDTC((uint *)&DAT_004872f0,txCommCtrl,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb934  OWL::TTreeWindow::~TTreeWindow   (252 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTreeWindow::_dtor
void __cdecl OWL::TTreeWindow::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51282c);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TTreeWindow::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0051297c;
    *(undefined ***)self[2] = &PTR_LAB_00512988;
    *(undefined ***)(*self + 8) = &OWL::TTreeWindow::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 10,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 8,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba30  OWL::TTreeWindow::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TTreeWindow's OWL::TWindow subobject vtable at 0x00512994 (through the this-adjusting thunk at 0x004cbe83); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTreeWindow::vf30 [rtti:vtable]
char * __stdcall OWL::TTreeWindow::GetClassName(void)

{
  return "SysTreeView32";
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba3c  OWL::TTreeWindow::Transfer   (7 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from OWL::TTreeWindow's OWL::TWindow subobject vtable at 0x00512994 (through the this-adjusting thunk at 0x004cbe96); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TTreeWindow::vf29 [rtti:vtable]
undefined4 __stdcall OWL::TTreeWindow::Transfer(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb98  OWL::TTreeWindow::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTreeWindow::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TTreeWindow::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512858);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TTreeWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00473698,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbc00  OWL::TTreeWindow::TTreeWindow_4cbc00   (284 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTreeWindow's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TTreeWindow::TTreeWindow_4cbc00(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512870);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 10);
    self[10] = (int)(self + 7);
    self[0xb] = (int)(self + 8);
    self[1] = (int)(self + 7);
    self[2] = (int)(self + 8);
    self[6] = 0;
    self[9] = 0;
    self[7] = (int)&OWL::TEventHandler::vftable;
    self[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TListBox::TListBox_4bff9c(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TTreeWindow::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0051297c;
  *(undefined ***)self[2] = &PTR_LAB_00512988;
  *(undefined ***)(*self + 8) = &OWL::TTreeWindow::vftable_TWindow;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbd1c  OWL::TTreeWindow::Streamer::vf1   (27 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TTreeWindow::Streamer::vf1(int self,int *param_2)

{
  FUN_004ad498(*(int *)(self + 8),param_2);
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbd38  OWL::TTreeWindow::Streamer::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TTreeWindow::Streamer::vf2(int self,int *param_2)

{
  FUN_004ad520(*(int *)(self + 8),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbe64  OWL::TTreeWindow::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TTreeWindow::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea

// TEA.exe — runtime / library code "OWL_TListBox"
// 8 functions, 0x004bf9d8..0x004c01e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004bf9d8  OWL::TListBox::TListBox   (273 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TListBox's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TListBox::TListBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50fd64);
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
  self[3] = (int)&OWL::TListBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050fe54;
  *(undefined ***)self[2] = &PTR_LAB_0050fe60;
  *(undefined ***)(*self + 8) = &PTR_LAB_0050fe6c;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bfda4  OWL::TListBox::GetSelIndex   (50 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27; LB_GETCURSEL
undefined4 __cdecl OWL::TListBox::GetSelIndex(int *self)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*self);
  if ((uVar1 & 0x808) == 0) {
    uVar2 = FUN_004a76a8(*self,0x188,0,0);
    return uVar2;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bfe0c  OWL::TListBox::SetSelIndex   (51 bytes)   [rtti:vtable virtual slot 28]
//   vtable slot 28; LB_SETCURSEL
undefined4 __cdecl OWL::TListBox::SetSelIndex(int *self,WPARAM wParam)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*self);
  if ((uVar1 & 0x808) == 0) {
    uVar2 = FUN_004a76a8(*self,0x186,wParam,0);
    return uVar2;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bff34  OWL::TListBox::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TListBox::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TListBox::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ff20);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TListBox::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00407170,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bff9c  OWL::TListBox::TListBox_4bff9c   (266 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TListBox's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TListBox::TListBox_4bff9c(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ff38);
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
  OWL::TControl::TControl_4add4c(self,1);
  self[3] = (int)&OWL::TListBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050fe54;
  *(undefined ***)self[2] = &PTR_LAB_0050fe60;
  *(undefined ***)(*self + 8) = &PTR_LAB_0050fe6c;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c00a8  OWL::TListBox::Streamer::vf1   (27 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TListBox::Streamer::vf1(int self,int *param_2)

{
  FUN_004ac1c8(*(int *)(self + 8),param_2);
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c00c4  OWL::TListBox::Streamer::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TListBox::Streamer::vf2(int self,int *param_2)

{
  FUN_004ac254(*(int *)(self + 8),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c01e8  OWL::TListBox::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TListBox::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea

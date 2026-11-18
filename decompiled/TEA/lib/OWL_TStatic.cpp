// TEA.exe — runtime / library code "OWL_TStatic"
// 9 functions, 0x004c789c..0x004c7fd8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c789c  OWL::TStatic::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: MatchListLabelWindows::Find [rtti:vtable]; OWL::TStatic::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TStatic::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TStatic::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TControl::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c78e4  OWL::TStatic::TStatic   (323 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TStatic's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TStatic::TStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10 ,int param_11)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5119a0);
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
  OWL::TControl::TControl(self,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00511a1c;
  *(undefined ***)self[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*self + 8) = &PTR_LAB_00511a34;
  self[5] = param_10;
  *(uint *)(*self + 0x18) = *(uint *)(*self + 0x18) & 0xfffeffff;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7a28  OWL::TStatic::TStatic_4c7a28   (308 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TStatic's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TStatic::TStatic_4c7a28(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5119c4);
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
  OWL::TControl::TControl_4ad87c(self,1,param_3,param_4,param_6);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00511a1c;
  *(undefined ***)self[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*self + 8) = &PTR_LAB_00511a34;
  self[5] = param_5;
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) & 0xfffffeff;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7b5c  OWL::TStatic::EvSize   (40 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TStatic::EvSize(int *self,int param_2)

{
  (**(code **)(*(int *)(*self + 8) + 0x68))();
  OWL::TWindow::EvSize(*self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7bdc  OWL::TStatic::vf9   (23 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TStatic::vf9(int *self)

{
  SetWindowTextA(*(HWND *)(*self + 0xc),"BorStatic" + 9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7ce8  OWL::TStatic::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TStatic::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TStatic::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511ae8);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TStatic::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00402af0,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7d50  OWL::TStatic::TStatic_4c7d50   (283 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TStatic's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TStatic::TStatic_4c7d50(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511b00);
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
  OWL::TControl::TControl_4add4c(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00511a1c;
  *(undefined ***)self[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*self + 8) = &PTR_LAB_00511a34;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7e9c  OWL::TStatic::Streamer::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TStatic::Streamer::vf2(int self,int *param_2)

{
  FUN_004ac254(*(int *)(self + 8),param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7fd8  OWL::TStatic::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TStatic::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea

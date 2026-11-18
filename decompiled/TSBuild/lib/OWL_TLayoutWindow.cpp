// TSBuild.exe — runtime / library code "OWL_TLayoutWindow"
// 10 functions, 0x00428de4..0x0042a3dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00428de4  OWL::TLayoutWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TLayoutWindow::Find [rtti:vtable]; OWL::TLayoutWindow::vf3 [rtti:vtable]
undefined4 __cdecl OWL::TLayoutWindow::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[1],(int *)&OWL::TLayoutWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*self,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428e84  OWL::TLayoutWindow::~TLayoutWindow   (302 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TLayoutWindow::_dtor
void __cdecl OWL::TLayoutWindow::_dtor(int *self,uint dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b870);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TLayoutWindow::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0047ba3c;
    *(undefined ***)self[2] = &PTR_LAB_0047ba48;
    *(undefined ***)(*self + 8) = &OWL::TLayoutWindow::vftable_TWindow;
    operator_delete_array();
    iVar1 = self[6];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x55);
      operator_delete();
    }
    self[6] = 0;
    FUN_00429500((int)self);
    iVar1 = self[7];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      operator_delete();
    }
    self[7] = 0;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x41),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x39),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428fb4  OWL::TLayoutWindow::vf1   (390 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TLayoutWindow::vf1(int *self)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int numWindows;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int deferWinPos;
  
  __InitExceptBlockLDTC(0x47b8a4);
  if (self[6] != 0) {
    FUN_00429d48(self);
    *(int *)(self[9] + 0x12) = self[4] + -1;
    *(int *)(self[9] + 0x1b) = self[5] + -1;
    uVar3 = FUN_00428a30(*self);
    if ((char)uVar3 == '\0') {
      *(undefined4 *)self[9] = 0;
      *(undefined4 *)(self[9] + 9) = 0;
    }
    else {
      iVar4 = GetSystemMetrics(DAT_0047d518);
      numWindows = GetSystemMetrics(DAT_0047d520);
      *(int *)self[9] = -iVar4;
      *(int *)(self[9] + 9) = -numWindows;
      *(int *)(self[9] + 0x12) = *(int *)(self[9] + 0x12) + iVar4;
      *(int *)(self[9] + 0x1b) = *(int *)(self[9] + 0x1b) + numWindows;
    }
    if ((char)self[10] != '\0') {
      *(undefined1 *)(self + 10) = 0;
      for (pcVar2 = (char *)self[6]; pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x55)) {
        FUN_00429b3c(self,pcVar2);
      }
      FUN_00429538(self);
    }
    FUN_004294dc((int)self);
    numWindows = 0;
    for (iVar4 = self[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      if (*(int *)(*(int *)(iVar4 + 1) + 0xc) != 0) {
        numWindows = numWindows + 1;
      }
    }
    FUN_00428d08(&deferWinPos,numWindows);
    for (iVar4 = self[6]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x55)) {
      numWindows = *(int *)(iVar4 + 1);
      piVar1 = (int *)(iVar4 + 0x31);
      if (*(int *)(numWindows + 0xc) == 0) {
        *(int *)(numWindows + 0x20) = *piVar1;
        *(undefined4 *)(numWindows + 0x24) = *(undefined4 *)(iVar4 + 0x3a);
        *(int *)(numWindows + 0x28) = (*(int *)(iVar4 + 0x43) - *piVar1) + 1;
        *(int *)(numWindows + 0x2c) = (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1;
      }
      else {
        FUN_00428d68(&deferWinPos,*(HWND *)(numWindows + 0xc),(HWND)0x0,*piVar1,*(int *)(iVar4 + 0x3a),
                     (*(int *)(iVar4 + 0x43) - *piVar1) + 1,
                     (*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x3a)) + 1,0x14);
      }
    }
    OWL::TDeferWinPos::_dtor(&deferWinPos,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429440  OWL::TLayoutWindow::EvSize   (86 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TLayoutWindow::EvSize(int *self,int sizeType,int *size)

{
  bool bVar1;
  
  OWL::TWindow::EvSize(*self,sizeType);
  if (sizeType != 1) {
    if ((self[4] == *size) && (self[5] == size[1])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      self[4] = *size;
      self[5] = size[1];
      (**(code **)(self[3] + 4))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429498  OWL::TLayoutWindow::RemoveChild   (36 bytes)   [rtti:vtable virtual slot 32]
//   override of OWL::TWindow vtable slot 32, from OWL::TLayoutWindow's OWL::TWindow subobject vtable at 0x0047ba54 (through the this-adjusting thunk at 0x0042a3fb); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TLayoutWindow::vf2 [rtti:vtable]
void __cdecl OWL::TLayoutWindow::RemoveChild(int *self,int param_2)

{
  OWL::TWindow::RemoveChild(*self,param_2);
  FUN_00429290((int)self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429ddc  OWL::TLayoutWindow::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TLayoutWindow::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TLayoutWindow::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b964);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TLayoutWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041d778,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429e44  OWL::TLayoutWindow::TLayoutWindow   (265 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TLayoutWindow's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TLayoutWindow::TLayoutWindow(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47b97c);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x41;
    *(int *)((int)self + 0x41) = (int)self + 0x35;
    *(int *)((int)self + 0x45) = (int)self + 0x39;
    self[1] = (int)self + 0x35;
    self[2] = (int)self + 0x39;
    *(undefined4 *)((int)self + 0x31) = 0;
    *(undefined4 *)((int)self + 0x3d) = 0;
    *(undefined ***)((int)self + 0x35) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x39) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow((int *)((int)self + 0x41),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  self[3] = (int)&OWL::TLayoutWindow::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0047ba3c;
  *(undefined ***)self[2] = &PTR_LAB_0047ba48;
  *(undefined ***)(*self + 8) = &OWL::TLayoutWindow::vftable_TWindow;
  self[4] = 0;
  self[5] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429f50  OWL::TLayoutWindow::Streamer::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TLayoutWindow::Streamer::vf1(int self)

{
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00429f5c  OWL::TLayoutWindow::Streamer::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TLayoutWindow::Streamer::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a3dc  OWL::TLayoutWindow::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TLayoutWindow::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea

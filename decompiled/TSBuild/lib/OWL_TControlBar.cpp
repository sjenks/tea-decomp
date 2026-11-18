// TSBuild.exe — runtime / library code "OWL_TControlBar"
// 2 functions, 0x00420f84..0x004211b8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420f84  OWL::TControlBar::TControlBar   (529 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TControlBar's vtable at its vptr offset (+0x18) in this
int * __cdecl OWL::TControlBar::TControlBar(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6)

{
  int metric;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479fd4);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x5d;
    *(int *)((int)self + 0x5d) = (int)self + 0x51;
    *(int *)((int)self + 0x61) = (int)self + 0x55;
    self[4] = (int)self + 0x51;
    self[5] = (int)self + 0x55;
    *(undefined4 *)((int)self + 0x4d) = 0;
    *(undefined4 *)((int)self + 0x59) = 0;
    *(undefined ***)((int)self + 0x51) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x55) = &OWL::TStreamableBase::vftable;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18((int *)((int)self + 0x5d),1);
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
  }
  OWL::TGadgetWindow::TGadgetWindow(self,1,param_3,param_4,param_5,param_6);
  self[6] = (int)&OWL::TControlBar::vftable;
  self[1] = (int)&PTR_LAB_0047a08c;
  *(undefined ***)self[4] = &PTR_LAB_0047a0ac;
  *(undefined ***)self[5] = &PTR_LAB_0047a0b8;
  *(undefined ***)(*self + 8) = &OWL::TControlBar::vftable_TWindow;
  self[10] = 2;
  if (*(char *)((int)self + 0x35) == '\0') {
    metric = GetSystemMetrics(DAT_0047d528);
    *(char *)((int)self + 0x2d) = (char)metric;
    *(undefined1 *)(self + 0xb) = *(undefined1 *)((int)self + 0x2d);
    metric = GetSystemMetrics(DAT_0047d530);
    *(char *)((int)self + 0x2f) = (char)metric;
    *(undefined1 *)((int)self + 0x2e) = *(undefined1 *)((int)self + 0x2f);
  }
  else {
    metric = GetSystemMetrics(DAT_0047d528);
    *(char *)((int)self + 0x2d) = (char)metric;
    *(undefined1 *)(self + 0xb) = *(undefined1 *)((int)self + 0x2d);
    metric = GetSystemMetrics(DAT_0047d530);
    *(char *)((int)self + 0x2f) = (char)metric;
    *(undefined1 *)((int)self + 0x2e) = *(undefined1 *)((int)self + 0x2f);
  }
  *(undefined1 *)((int)self + 0x3f) = 1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004211b8  OWL::TControlBar::~TControlBar   (222 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TControlBar::_dtor
void __cdecl OWL::TControlBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479ff8);
  if (self != (int *)0x0) {
    self[6] = (int)&OWL::TControlBar::vftable;
    self[1] = (int)&PTR_LAB_0047a08c;
    *(undefined ***)self[4] = &PTR_LAB_0047a0ac;
    *(undefined ***)self[5] = &PTR_LAB_0047a0b8;
    *(undefined ***)(*self + 8) = &OWL::TControlBar::vftable_TWindow;
    OWL::TGadgetWindow::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x5d),0);
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x55),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

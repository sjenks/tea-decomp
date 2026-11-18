// TSMerge.exe — runtime / library code "OWL_TMessageBar"
// 5 functions, 0x0042113c..0x004213d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042113c  OWL::TMessageBar::~TMessageBar   (272 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMessageBar::_dtor
void __cdecl OWL::TMessageBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4685ac);
  if (self != (int *)0x0) {
    self[6] = (int)&OWL::TMessageBar::vftable;
    self[1] = (int)&PTR_LAB_00468644;
    *(undefined ***)self[4] = &PTR_LAB_00468664;
    *(undefined ***)self[5] = &PTR_LAB_00468670;
    *(undefined ***)(*self + 8) = &OWL::TMessageBar::vftable_TWindow;
    operator_delete_array();
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -5;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -5;
    OWL::TGadgetWindow::_dtor(self,0);
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 5;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 5;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x62),0);
      *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x5a),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042124c  OWL::TMessageBar::vf15   (311 bytes)   [rtti:vtable virtual slot 15]
void OWL::TMessageBar::vf15(undefined4 self,undefined4 param_2,undefined4 param_3,int *gadgetWindow, undefined4 *param_5,undefined1 param_6,int *param_7)

{
  int iVar1;
  tagRECT *pRect;
  LONG *pLVar3;
  byte bVar4;
  tagRECT rect;
  LONG local_38;
  int local_34;
  RECT rect2;
  int unused;
  int local_c;
  int metric;
  
  bVar4 = 0;
  if ((*(char *)((int)gadgetWindow + 0x4d) != '\0') && (param_7[1] == 0)) {
    metric = GetSystemMetrics(DAT_00469744);
    local_c = param_7[2];
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = local_c;
    rect2.bottom = metric;
    ExtTextOutA((HDC)*param_5,0,0,2,&rect2,(LPCSTR)0x0,0,(INT *)0x0);
    self = 0;
  }
  if (*(int *)((int)gadgetWindow + 0x4e) == 0) {
    OWL::TGadgetWindow::vf15((int)gadgetWindow,param_5,CONCAT31((int3)((uint)self >> 8),param_6),param_7);
  }
  else {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_0042d568(*gadgetWindow,&rect);
    pRect = &rect;
    pLVar3 = &local_38;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = pRect->left;
      pRect = (tagRECT *)((int)pRect + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    if (*(char *)((int)gadgetWindow + 0x4d) != '\0') {
      unused = DAT_00469744;
      iVar1 = GetSystemMetrics(DAT_00469744);
      local_34 = local_34 + iVar1;
    }
    (**(code **)(*(int *)((int)param_5 + 5) + 0x14))();
    (**(code **)(*(int *)((int)param_5 + 5) + 0x20))();
    strlen(*(uint **)((int)gadgetWindow + 0x4e));
    (**(code **)(*(int *)((int)param_5 + 5) + 0x48))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421384  OWL::TMessageBar::vf16   (46 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TMessageBar::vf16(int *self,int *param_2)

{
  int metric;
  
  OWL::TGadgetWindow::vf16(self,param_2);
  if (*(char *)((int)self + 0x4d) != '\0') {
    metric = GetSystemMetrics(DAT_00469744);
    param_2[1] = param_2[1] + metric;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004213b4  OWL::TMessageBar::vf14   (34 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TMessageBar::vf14(int *self,undefined4 *param_2)

{
  OWL::TGadgetWindow::vf14(self,param_2);
  if (*(char *)((int)self + 0x4d) != '\0') {
    param_2[1] = param_2[1] + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004213d8  OWL::TMessageBar::vf27   (70 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TMessageBar::vf27(int *self,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)((int)self + 0x4e)) {
    operator_delete_array();
    if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0041fd2c(param_2);
    }
    *(undefined4 *)((int)self + 0x4e) = uVar1;
    (**(code **)(*(int *)(*self + 8) + 0x68))();
  }
  return;
}

} // namespace tea

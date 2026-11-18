// TEA.exe — runtime / library code "OWL_TMessageBar"
// 6 functions, 0x0049834c..0x00498830. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049834c  OWL::TMessageBar::TMessageBar   (443 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMessageBar's vtable at its vptr offset (+0x18) in this
int * __cdecl OWL::TMessageBar::TMessageBar(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5)

{
  bool bVar1;
  undefined4 *textGadget;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5080d8);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x62;
    *(int *)((int)self + 0x62) = (int)self + 0x56;
    *(int *)((int)self + 0x66) = (int)self + 0x5a;
    self[4] = (int)self + 0x56;
    self[5] = (int)self + 0x5a;
    *(undefined4 *)((int)self + 0x52) = 0;
    *(undefined4 *)((int)self + 0x5e) = 0;
    *(undefined ***)((int)self + 0x56) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x5a) = &OWL::TStreamableBase::vftable;
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc((int *)((int)self + 0x62),1);
    *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -0x96;
  }
  *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + -5;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -5;
  if (param_4 == (uint *)0x0) {
    param_4 = FUN_004982d4();
  }
  OWL::TGadgetWindow::TGadgetWindow(self,1,param_3,0,param_4,param_5);
  *(int *)(self[4] + -4) = *(int *)(self[4] + -4) + 5;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 5;
  self[6] = (int)&OWL::TMessageBar::vftable;
  self[1] = (int)&PTR_LAB_005081ac;
  *(undefined ***)self[4] = &PTR_LAB_005081cc;
  *(undefined ***)self[5] = &PTR_LAB_005081d8;
  *(undefined ***)(*self + 8) = &OWL::TMessageBar::vftable_TWindow;
  textGadget = (undefined4 *)operator_new();
  if (textGadget != (undefined4 *)0x0) {
    OWL::TTextGadget::TTextGadget(textGadget,30000,3,0,10,(uint *)0x0,0);
  }
  *(undefined4 *)(*self + 0x34) = 0x7d28;
  bVar1 = FUN_004875a8();
  *(bool *)((int)self + 0x4d) = !bVar1;
  *(undefined4 *)((int)self + 0x4e) = 0;
  *(undefined1 *)((int)textGadget + 5) = 1;
  (**(code **)(self[6] + 0x14))();
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498528  OWL::TMessageBar::~TMessageBar   (272 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMessageBar::_dtor
void __cdecl OWL::TMessageBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508114);
  if (self != (int *)0x0) {
    self[6] = (int)&OWL::TMessageBar::vftable;
    self[1] = (int)&PTR_LAB_005081ac;
    *(undefined ***)self[4] = &PTR_LAB_005081cc;
    *(undefined ***)self[5] = &PTR_LAB_005081d8;
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
// 0x00498638  OWL::TMessageBar::vf15   (311 bytes)   [rtti:vtable virtual slot 15]
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
    metric = GetSystemMetrics(DAT_00509df0);
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
    FUN_004a7a6c(*gadgetWindow,&rect);
    pRect = &rect;
    pLVar3 = &local_38;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar3 = pRect->left;
      pRect = (tagRECT *)((int)pRect + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    if (*(char *)((int)gadgetWindow + 0x4d) != '\0') {
      unused = DAT_00509df0;
      iVar1 = GetSystemMetrics(DAT_00509df0);
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
// 0x00498770  OWL::TMessageBar::vf16   (46 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TMessageBar::vf16(int *self,int *param_2)

{
  int metric;
  
  OWL::TGadgetWindow::vf16(self,param_2);
  if (*(char *)((int)self + 0x4d) != '\0') {
    metric = GetSystemMetrics(DAT_00509df0);
    param_2[1] = param_2[1] + metric;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004987a0  OWL::TMessageBar::vf14   (34 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TMessageBar::vf14(int *self,undefined4 *param_2)

{
  OWL::TGadgetWindow::vf14(self,param_2);
  if (*(char *)((int)self + 0x4d) != '\0') {
    param_2[1] = param_2[1] + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00498830  OWL::TMessageBar::vf27   (70 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TMessageBar::vf27(int *self,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)((int)self + 0x4e)) {
    operator_delete_array();
    if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00496d48(param_2);
    }
    *(undefined4 *)((int)self + 0x4e) = uVar1;
    (**(code **)(*(int *)(*self + 8) + 0x68))();
  }
  return;
}

} // namespace tea

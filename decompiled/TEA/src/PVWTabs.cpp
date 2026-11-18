// TEA.exe — application module "PVWTabs"
// 5 functions, 0x0041ea80..0x0041ee00. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ea80  PVWTabs::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWTabs::Find [rtti:vtable]; PVWTabs::vf8 [rtti:vtable]
undefined4 __cdecl PVWTabs::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWTabs::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TTabControl::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eac8  PVWTabs::PVWTabs   (309 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWTabs's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWTabs::PVWTabs(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef4fc);
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
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TTabControl::TTabControl(self,1,uVar1,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&PVWTabs::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004eff48;
  *(undefined ***)self[2] = &PTR_LAB_004eff54;
  *(undefined ***)(*self + 8) = &PVWTabs::vftable_TWindow;
  self[5] = (int)param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ec18  PVWTabs::~PVWTabs   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWTabs::_dtor
void __cdecl PVWTabs::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef520);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWTabs::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004eff48;
    *(undefined ***)self[2] = &PTR_LAB_004eff54;
    *(undefined ***)(*self + 8) = &PVWTabs::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TTabControl::_dtor(self,0);
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
// 0x0041ed14  PVWTabs::EvKeyDown   (233 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
void __cdecl PVWTabs::EvKeyDown(int *self,int param_2)

{
  int iVar1;
  int iVar2;
  LRESULT lResult;
  int iVar4;
  WPARAM wParam;
  undefined4 lParam;
  undefined4 unused;
  undefined4 unused2;
  HWND hWnd;
  
  iVar4 = 0;
  if ((param_2 == 0x27) || (param_2 == 0x28)) {
    iVar4 = 1;
  }
  if ((param_2 == 0x25) || (param_2 == 0x26)) {
    iVar4 = -1;
  }
  if (iVar4 != 0) {
    iVar1 = FUN_004a76a8(*self,0x1304,0,0);
    iVar2 = FUN_004a76a8(*self,0x130b,0,0);
    wParam = iVar4 + iVar2;
    if ((int)wParam < 0) {
      wParam = iVar1 - 1;
    }
    else if (iVar1 <= (int)wParam) {
      wParam = 0;
    }
    unused = *(undefined4 *)(*self + 0x34);
    lParam = *(undefined4 *)(*self + 0xc);
    unused2 = 0xfffffdd8;
    hWnd = *(HWND *)(*(int *)self[5] + 0xc);
    lResult = SendMessageA(hWnd,0x4e,*(WPARAM *)(*self + 0x34),(LPARAM)&lParam);
    if (lResult == 0) {
      FUN_004a76a8(*self,0x130c,wParam,0);
      unused2 = 0xfffffdd9;
      SendMessageA(*(HWND *)(*(int *)self[5] + 0xc),0x4e,*(WPARAM *)(*self + 0x34),
                   (LPARAM)&lParam);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee00  PVWTabs::EvLButtonDblClk   (19 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl PVWTabs::EvLButtonDblClk(int self)

{
  (**(code **)(*(int *)(*(int *)(self + 0x14) + 0xc) + 0x68))();
  return;
}

} // namespace tea

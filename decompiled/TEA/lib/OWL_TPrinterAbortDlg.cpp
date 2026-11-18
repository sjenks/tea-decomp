// TEA.exe — runtime / library code "OWL_TPrinterAbortDlg"
// 5 functions, 0x004c4974..0x004c6120. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4974  OWL::TPrinterAbortDlg::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TPrinterAbortDlg::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TPrinterAbortDlg::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TPrinterAbortDlg::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c49bc  OWL::TPrinterAbortDlg::TPrinterAbortDlg   (514 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPrinterAbortDlg's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TPrinterAbortDlg::TPrinterAbortDlg(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,uint *param_5,uint *param_6, uint *param_7,int param_8)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510f34);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TDialog::TDialog(self,1,param_3,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TPrinterAbortDlg::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0051138c;
  *(undefined ***)self[2] = &PTR_LAB_00511398;
  *(undefined ***)(*self + 8) = &PTR_LAB_005113a4;
  self[6] = param_8;
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TNumericStatic::TNumericStatic(piVar1,0,*self,0x68,0);
  }
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TFormattedStatic::TFormattedStatic(piVar1,0,*self,0x65,param_5,(uint *)0x0);
  }
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TFormattedStatic::TFormattedStatic(piVar1,0,*self,0x66,param_6,param_7);
  }
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TNumericStatic::TNumericStatic(piVar1,0,*self,0x69,0);
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4be4  OWL::TPrinterAbortDlg::vf11   (86 bytes, 2 ranges)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TPrinterAbortDlg::vf11(int *self)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  UINT uIDEnableItem;
  UINT uEnable;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510fc8);
  OWL::TDialog::SetupWindow(self);
  uEnable = 1;
  uIDEnableItem = 0xf060;
  hMenu = GetSystemMenu(*(HWND *)(*self + 0xc),0);
  EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4c48  OWL::TPrinterAbortDlg::Cmd2   (41 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(2)
void __cdecl OWL::TPrinterAbortDlg::Cmd2(int *self)

{
  HWND hWnd;
  
  DAT_00510fdc = self[6];
  hWnd = GetDlgItem(*(HWND *)(*self + 0xc),2);
  if (hWnd != (HWND)0x0) {
    EnableWindow(hWnd,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6120  OWL::TPrinterAbortDlg::~TPrinterAbortDlg   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPrinterAbortDlg::_dtor
void __cdecl OWL::TPrinterAbortDlg::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5115f8);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xb,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 9,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

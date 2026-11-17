// TEA.exe — runtime / library code "OWL_TPrinterAbortDlg"
// 4 functions, 0x004c4974..0x004c6120. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4974  OWL::TPrinterAbortDlg::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TPrinterAbortDlg::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TPrinterAbortDlg::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TPrinterAbortDlg::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::vf14(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4be4  OWL::TPrinterAbortDlg::vf11   (86 bytes, 2 ranges)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TPrinterAbortDlg::vf11(int *param_1)

{
  HMENU hMenu;
  undefined4 *in_FS_OFFSET;
  UINT uIDEnableItem;
  UINT uEnable;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510fc8);
  OWL::TDialog::vf11(param_1);
  uEnable = 1;
  uIDEnableItem = 0xf060;
  hMenu = GetSystemMenu(*(HWND *)(*param_1 + 0xc),0);
  EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4c48  OWL::TPrinterAbortDlg::Cmd2   (41 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(2)
void __cdecl OWL::TPrinterAbortDlg::Cmd2(int *param_1)

{
  HWND hWnd;
  
  DAT_00510fdc = param_1[6];
  hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),2);
  if (hWnd != (HWND)0x0) {
    EnableWindow(hWnd,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c6120  OWL::TPrinterAbortDlg::~TPrinterAbortDlg   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPrinterAbortDlg::_dtor
void __cdecl OWL::TPrinterAbortDlg::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5115f8);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea

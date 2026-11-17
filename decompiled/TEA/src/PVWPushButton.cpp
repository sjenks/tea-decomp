// TEA.exe — application module "PVWPushButton"
// 6 functions, 0x004179a8..0x00417d50. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004179a8  PVWPushButton::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWPushButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWPushButton::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWPushButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TButton::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179f0  FUN_004179f0   (357 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00417b3b) */
int * __cdecl FUN_004179f0(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee108);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x10);
    param_1[0x10] = (int)(param_1 + 0xd);
    param_1[0x11] = (int)(param_1 + 0xe);
    param_1[1] = (int)(param_1 + 0xd);
    param_1[2] = (int)(param_1 + 0xe);
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xd] = (int)&OWL::TEventHandler::vftable;
    param_1[0xe] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1a;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1a;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004abc64(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1a;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1a;
  param_1[3] = (int)&PVWPushButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0b74;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0b80;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0b8c;
  param_1[6] = (int)param_3;
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417b74  PVWPushButton::~PVWPushButton   (382 bytes)   [rtti:dtor destructor]
//   written in code as PVWPushButton::_dtor
void __cdecl PVWPushButton::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee138);
  if (param_1 == (int *)0x0) goto LAB_00417ce2;
  param_1[3] = (int)&PVWPushButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0b74;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0b80;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0b8c;
  if (param_1[10] != 0) {
    if (*(int *)(param_1[10] + -0xc) != -1) {
      piVar2 = (int *)(param_1[10] + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00417c4d;
    }
    operator_delete();
    param_1[10] = 0;
  }
LAB_00417c4d:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1a;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1a;
  OWL::TButton::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1a;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1a;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x10,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0xe,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00417ce2:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417cf4  PVWPushButton::BNClicked   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWPushButton::BNClicked(int *param_1)

{
  GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0x4c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417d18  PVWPushButton::vf11   (54 bytes)   [rtti:vtable virtual slot 11]
void __cdecl PVWPushButton::vf11(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417d50  PVWPushButton::EvShowWindow   (155 bytes)   [owl:response-table message-handler]
//   WM_SHOWWINDOW
void __cdecl PVWPushButton::EvShowWindow(int *param_1,char param_2)

{
  int iVar1;
  uint local_3ec [250];
  
  if ((param_2 == '\0') || (*(int *)(param_1[10] + -4) == 0)) {
    if (param_2 == '\0') {
      if (*(int *)(param_1[10] + -4) == 0) {
        iVar1 = GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_3ec,1000);
        if (iVar1 < 0x3e6) {
          FUN_004cf41c((int)(param_1 + 8),local_3ec);
        }
      }
      if (*(int *)(param_1[10] + -4) != 0) {
        SetWindowTextA(*(HWND *)(*param_1 + 0xc),"Beta Test Expiry" + 0x10);
      }
    }
  }
  else {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_1[10]);
  }
  FUN_004a5774(*param_1);
  return;
}

} // namespace tea

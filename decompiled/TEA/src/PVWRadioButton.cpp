// TEA.exe — application module "PVWRadioButton"
// 9 functions, 0x00417dec..0x004182b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00417dec  PVWRadioButton::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWRadioButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWRadioButton::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWRadioButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TRadioButton::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e34  PVWRadioButton::EvMouseMove   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
void __stdcall PVWRadioButton::EvMouseMove(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00417e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e40  FUN_00417e40   (410 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00417f95) */
int * __cdecl FUN_00417e40(int *param_1,int param_2,undefined4 *param_3,uint param_4,int param_5)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee1c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&OWL::TEventHandler::vftable;
    param_1[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1e;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_004c6664(param_1,1,uVar2,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1e;
  param_1[3] = (int)&PVWRadioButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0a90;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0aa8;
  param_1[7] = 0;
  param_1[8] = (int)param_3;
  param_1[0xc] = 0;
  param_1[0xc] = (int)&DAT_00513d64;
  if (param_5 != 0) {
    pvVar1 = LoadImageA(*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)(param_4 & 0xffff),0
                        ,0,0,0x1000);
    param_1[7] = (int)pvVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ffc  PVWRadioButton::~PVWRadioButton   (401 bytes)   [rtti:dtor destructor]
//   written in code as PVWRadioButton::_dtor
void __cdecl PVWRadioButton::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee1f8);
  if (param_1 == (int *)0x0) goto LAB_0041817d;
  param_1[3] = (int)&PVWRadioButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0a90;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0aa8;
  if ((HGDIOBJ)param_1[7] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[7]);
  }
  if (param_1[0xc] != 0) {
    if (*(int *)(param_1[0xc] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xc] + -0xc);
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
      if (iVar1 != 0) goto LAB_004180e5;
    }
    operator_delete();
    param_1[0xc] = 0;
  }
LAB_004180e5:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1e;
  OWL::TCheckBox::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1e;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x12,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x10,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0041817d:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418190  PVWRadioButton::vf12   (54 bytes)   [rtti:vtable virtual slot 12]
void __cdecl PVWRadioButton::vf12(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[8] + 0xc) + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004181c8  PVWRadioButton::vf13   (114 bytes)   [rtti:vtable virtual slot 13]
void __cdecl PVWRadioButton::vf13(int *param_1)

{
  (**(code **)(*(int *)(param_1[8] + 0xc) + 0xac))();
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041823c  PVWRadioButton::vf10   (47 bytes)   [rtti:vtable virtual slot 10]
void __cdecl PVWRadioButton::vf10(int *param_1)

{
  OWL::TButton::vf10(param_1);
  if (param_1[7] != 0) {
    FUN_004a76a8(*param_1,0xf7,0,param_1[7]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041826c  PVWRadioButton::BNClicked   (72 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWRadioButton::BNClicked(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0xf0,0,0);
  if (iVar1 != 0) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[8] + 0xc) + 0x4c))();
    return;
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004182b4  PVWRadioButton::EvShowWindow   (155 bytes)   [owl:response-table message-handler]
//   WM_SHOWWINDOW
void __cdecl PVWRadioButton::EvShowWindow(int *param_1,char param_2)

{
  int iVar1;
  uint local_3ec [250];
  
  if ((param_2 == '\0') || (*(int *)(param_1[0xc] + -4) == 0)) {
    if (param_2 == '\0') {
      if (*(int *)(param_1[0xc] + -4) == 0) {
        iVar1 = GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_3ec,1000);
        if (iVar1 < 0x3e6) {
          FUN_004cf41c((int)(param_1 + 10),local_3ec);
        }
      }
      if (*(int *)(param_1[0xc] + -4) != 0) {
        SetWindowTextA(*(HWND *)(*param_1 + 0xc),"Beta Test Expiry" + 0x10);
      }
    }
  }
  else {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_1[0xc]);
  }
  FUN_004a5774(*param_1);
  return;
}

} // namespace tea

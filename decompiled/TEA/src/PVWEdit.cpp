// TEA.exe — application module "PVWEdit"
// 14 functions, 0x0041aef0..0x0041b600. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041aef0  PVWEdit::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PVWEdit::vf8 [rtti:vtable]
undefined4 __cdecl PVWEdit::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEdit::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041af38  FUN_0041af38   (321 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041af38(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eea68);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xd);
    param_1[0xd] = (int)(param_1 + 10);
    param_1[0xe] = (int)(param_1 + 0xb);
    param_1[1] = (int)(param_1 + 10);
    param_1[2] = (int)(param_1 + 0xb);
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[10] = (int)&OWL::TEventHandler::vftable;
    param_1[0xb] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xd,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004b6184(param_1,1,uVar1,param_4,param_5,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PVWEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f05c0;
  *(undefined ***)param_1[2] = &PTR_LAB_004f05cc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f05d8;
  param_1[7] = (int)param_3;
  param_1[8] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b094  PVWEdit::~PVWEdit   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWEdit::_dtor
void __cdecl PVWEdit::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eea8c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWEdit::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f05c0;
    *(undefined ***)param_1[2] = &PTR_LAB_004f05cc;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f05d8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    OWL::TEdit::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xd,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xb,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b190  PVWEdit::NotifyAtChild_512   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 512)
void __cdecl PVWEdit::NotifyAtChild_512(int *param_1)

{
  GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
  (**(code **)(*(int *)(param_1[7] + 0xc) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b1b4  PVWEdit::NotifyAtChild_768   (54 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 768)
void __cdecl PVWEdit::NotifyAtChild_768(int *param_1)

{
  if (param_1[8] == 0) {
    param_1[8] = 1;
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0x58))();
    param_1[8] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b1ec  FUN_0041b1ec   (43 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041b1ec(int *param_1,LPCSTR param_2)

{
  if (param_1[8] == 0) {
    param_1[8] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
    param_1[8] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b218  FUN_0041b218   (49 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041b218(int *param_1)

{
  CHAR local_24 [32];
  
  FUN_004e0344(local_24,&DAT_004ed2ea);
  FUN_0041b1ec(param_1,local_24);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b24c  FUN_0041b24c   (49 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041b24c(int *param_1)

{
  CHAR local_24 [32];
  
  FUN_004e0344(local_24,&DAT_004ed32e /* "%ld" */);
  FUN_0041b1ec(param_1,local_24);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b280  FUN_0041b280   (45 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041b280(int *param_1)

{
  int iVar1;
  CHAR local_24 [32];
  
  iVar1 = GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_24,0x1f);
  local_24[iVar1] = '\0';
  iVar1 = FUN_004e39d0(local_24);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b2b0  FUN_0041b2b0   (450 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041b2b0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *lpString;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4eeae0);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPSTR)lpString,iVar2 + 1);
  std::string::string_from_cstr((int)local_14,lpString);
  operator_delete_array();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar3 = local_c + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041b457;
    }
    operator_delete();
  }
LAB_0041b457:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b474  FUN_0041b474   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041b474(int *param_1,int param_2)

{
  FUN_0041b1ec(param_1,*(LPCSTR *)(param_2 + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b48c  FUN_0041b48c   (326 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041b48c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  tagRECT local_270;
  CHAR local_260 [519];
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  uint local_34 [2];
  HDC local_2c;
  int local_27;
  
  __InitExceptBlockLDTC(0x4eeb60);
  iVar1 = FUN_004a76a8(*param_1,0x31,0,0);
  if (iVar1 != 0) {
    local_48 = 8;
    FUN_004a8674((int *)&local_2c,*(undefined4 *)(*param_1 + 0xc));
    local_3c = local_3c + 2;
    local_48 = 0x20;
    FUN_0048f708(local_34,iVar1,0);
    local_3c = local_3c + 2;
    (**(code **)(local_27 + 0x14))();
    local_3c = local_3c + -2;
    OWL::TGdiObject::_dtor(local_34,0);
    FUN_004dcc40((undefined4 *)local_260,*(uint **)(param_2 + 8),(char *)0x207);
    local_59 = 0;
    local_270.left = 0;
    local_270.top = 0;
    local_270.right = 0;
    local_270.bottom = 0;
    local_48 = 0x14;
    FUN_004a76a8(*param_1,0xb2,0,(LPARAM)&local_270);
    DrawTextA(local_2c,local_260,-1,&local_270,0x14420);
    FUN_0041b1ec(param_1,local_260);
    local_3c = local_3c + -2;
    OWL::TWindowDC::_dtor((int *)&local_2c,2);
  }
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b5d4  PVWEdit::vf9   (44 bytes)   [rtti:vtable virtual slot 9]
void __cdecl PVWEdit::vf9(int *param_1)

{
  if (param_1[8] == 0) {
    param_1[8] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),"Beta Test Expiry" + 0x10);
    param_1[8] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b600  PVWEdit::vf22   (54 bytes)   [rtti:vtable virtual slot 22]
void __cdecl PVWEdit::vf22(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

} // namespace tea

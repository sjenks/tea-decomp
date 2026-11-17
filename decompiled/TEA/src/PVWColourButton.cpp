// TEA.exe — application module "PVWColourButton"
// 10 functions, 0x0041875c..0x00418e14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041875c  PVWColourButton::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWColourButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWColourButton::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWColourButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TButton::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004187a4  FUN_004187a4   (336 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004187a4(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee360);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xf);
    param_1[0xf] = (int)(param_1 + 0xc);
    param_1[0x10] = (int)(param_1 + 0xd);
    param_1[1] = (int)(param_1 + 0xc);
    param_1[2] = (int)(param_1 + 0xd);
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = (int)&OWL::TEventHandler::vftable;
    param_1[0xd] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xf,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x16;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x16;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004abc64(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x16;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x16;
  param_1[3] = (int)&PVWColourButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f08c0;
  *(undefined ***)param_1[2] = &PTR_LAB_004f08cc;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f08d8;
  param_1[6] = (int)param_3;
  param_1[7] = 1;
  param_1[9] = 1;
  param_1[10] = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418914  PVWColourButton::~PVWColourButton   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWColourButton::_dtor
void __cdecl PVWColourButton::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee384);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWColourButton::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f08c0;
    *(undefined ***)param_1[2] = &PTR_LAB_004f08cc;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f08d8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x16;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x16;
    OWL::TButton::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x16;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x16;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xf,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xd,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a10  PVWColourButton::vf11   (54 bytes)   [rtti:vtable virtual slot 11]
void __cdecl PVWColourButton::vf11(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a48  FUN_00418a48   (40 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00418a48(int *param_1,int *param_2)

{
  param_1[8] = *param_2;
  param_1[9] = 0;
  param_1[7] = 0;
  (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a70  PVWColourButton::EvRegisteredMsg_418a70   (30 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __stdcall PVWColourButton::EvRegisteredMsg_418a70(void)

{
  FUN_00415388();
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a90  PVWColourButton::vf7   (22 bytes)   [rtti:vtable virtual slot 7]
void __cdecl PVWColourButton::vf7(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418aa8  PVWColourButton::vf6   (22 bytes)   [rtti:vtable virtual slot 6]
void __cdecl PVWColourButton::vf6(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418ac0  PVWColourButton::vf5   (609 bytes)   [rtti:vtable virtual slot 5]
void __cdecl PVWColourButton::vf5(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  int *piVar2;
  RECT *pRVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  int iVar5;
  int local_a8 [4];
  tagRECT local_98;
  RECT local_80;
  int local_70;
  undefined4 local_6c;
  undefined2 local_5c;
  int local_50;
  LOGBRUSH local_48;
  undefined4 *local_3c;
  uint local_38 [2];
  uint local_30 [2];
  HDC local_28 [9];
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4ee414);
  local_5c = 8;
  FUN_0048d7c8((undefined4*)local_28,*(undefined4 *)(param_2 + 0x18));
  local_50 = local_50 + 1;
  local_80.bottom = *(int *)(param_2 + 0x28);
  local_80.right = *(int *)(param_2 + 0x24);
  local_80.top = *(int *)(param_2 + 0x20);
  local_80.left = *(int *)(param_2 + 0x1c);
  local_70 = local_80.left;
  if (((*(char *)(param_1 + 0x15) != '\0') && (2 < local_80.right - local_80.left)) &&
     (2 < local_80.bottom - local_80.top)) {
    local_5c = 0x20;
    FUN_0049b6a8(local_30,(uint *)&DAT_0051b1bc,1,0);
    local_50 = local_50 + 2;
    local_5c = 0x2c;
    FUN_0048d8f4((undefined4*)local_28,local_30);
    local_5c = 0x38;
    iVar5 = 0;
    pvVar1 = GetStockObject(5);
    FUN_004ab7e4(local_38,pvVar1,iVar5);
    local_50 = local_50 + 2;
    local_5c = 0x2c;
    FUN_0048d938((undefined4*)local_28,local_38);
    Rectangle(local_28[0],local_80.left,local_80.top,local_80.right,local_80.bottom);
    FUN_00494470(&local_80.left,-1,-1);
    FUN_0048da64((undefined4*)local_28);
    FUN_0048da38((undefined4*)local_28);
    local_50 = local_50 + -2;
    OWL::TBrush::_dtor(local_38,2);
    local_50 = local_50 + -2;
    OWL::TGdiObject::_dtor(local_30,0);
  }
  local_5c = 0x14;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    iVar5 = 6;
  }
  else {
    iVar5 = 7;
  }
  FUN_0049f930(&local_98.left,&local_80.left,iVar5,0);
  local_5c = 0x14;
  FUN_0049fa58(&local_98,(undefined4*)local_28);
  FUN_0049f9e0(local_a8,&local_98.left);
  piVar2 = local_a8;
  pRVar3 = &local_80;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    pRVar3->left = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    local_5c = 0x44;
    FUN_004178ac(&local_48,*(COLORREF *)(param_1 + 0x20));
    local_50 = local_50 + 1;
    local_5c = 0x50;
    FillRect(local_28[0],&local_80,(HBRUSH)*local_3c);
    FUN_00494470(&local_80.left,-1,-1);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      DrawFocusRect(local_28[0],&local_80);
    }
    local_50 = local_50 + -1;
    PVWBrush::_dtor((int)&local_48,2);
    local_5c = 0x14;
  }
  local_50 = local_50 + -1;
  OWL::TDC::_dtor((int *)local_28,2);
  *in_FS_OFFSET = local_6c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418e14  PVWColourButton::BNClicked   (498 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWColourButton::BNClicked(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 local_128;
  int local_104 [55];
  undefined1 local_28 [8];
  int local_20;
  undefined4 local_18 [2];
  uint local_10;
  undefined *local_c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x4ee4bc);
  local_8 = 0;
  local_18[0] = 9;
  local_c = &DAT_004ee30c;
  local_10 = param_1[8];
  FUN_00413990((int)local_28,param_1[10]);
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  piVar1 = FUN_0048b0c0(local_104,0,*param_1,(int)local_18,0,local_20,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  OWL::TChooseColorDialog::_dtor(local_104,2);
  if (cVar3 != '\0') {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    FUN_0048c12c(&local_10);
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0x6c))();
  }
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  if (local_20 != 0) {
    if (*(int *)(local_20 + -0xc) != -1) {
      piVar1 = (int *)(local_20 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00418fd3;
    }
    operator_delete();
    local_20 = 0;
  }
LAB_00418fd3:
  operator_delete_array();
  *in_FS_OFFSET = local_128;
  return;
}

} // namespace tea

// TEA.exe — application module "PVWFontButton"
// 10 functions, 0x004190f0..0x00419874. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004190f0  PVWFontButton::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PVWFontButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWFontButton::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWFontButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TButton::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419138  FUN_00419138   (390 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00419138(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 ,int param_7)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee568);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x26);
    param_1[0x26] = (int)(param_1 + 0x23);
    param_1[0x27] = (int)(param_1 + 0x24);
    param_1[1] = (int)(param_1 + 0x23);
    param_1[2] = (int)(param_1 + 0x24);
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x23] = (int)&OWL::TEventHandler::vftable;
    param_1[0x24] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x26,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x72;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x72;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004abc64(param_1,1,uVar1,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x72;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x72;
  param_1[3] = (int)&PVWFontButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f07dc;
  *(undefined ***)param_1[2] = &PTR_LAB_004f07e8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f07f4;
  param_1[6] = (int)param_3;
  param_1[7] = 1;
  param_1[0x1e] = 1;
  param_1[0x1f] = param_5;
  param_1[0x20] = param_6;
  param_1[0x21] = param_7;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004192dc  PVWFontButton::~PVWFontButton   (257 bytes)   [rtti:dtor destructor]
//   written in code as PVWFontButton::_dtor
void __cdecl PVWFontButton::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee58c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWFontButton::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f07dc;
    *(undefined ***)param_1[2] = &PTR_LAB_004f07e8;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f07f4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x72;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x72;
    OWL::TButton::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x72;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x72;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x26,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x24,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004193e0  PVWFontButton::vf11   (54 bytes)   [rtti:vtable virtual slot 11]
void __cdecl PVWFontButton::vf11(int *param_1,LPMSG param_2)

{
  if (param_2->message == 0x200) {
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0xac))();
  }
  OWL::TWindow::vf10(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419418  FUN_00419418   (109 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00419418(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 8;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  param_1[0x18] = *param_3;
  param_1[0x1a] = param_4;
  param_1[0x1b] = param_5;
  param_1[0x1c] = param_6;
  param_1[0x1d] = param_7;
  FUN_004263ec((int)(param_1 + 8));
  param_1[0x1e] = 0;
  param_1[7] = 0;
  (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419488  PVWFontButton::EvRegisteredMsg_419488   (30 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __stdcall PVWFontButton::EvRegisteredMsg_419488(void)

{
  FUN_00415388();
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004194a8  PVWFontButton::vf7   (22 bytes)   [rtti:vtable virtual slot 7]
void __cdecl PVWFontButton::vf7(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004194c0  PVWFontButton::vf6   (22 bytes)   [rtti:vtable virtual slot 6]
void __cdecl PVWFontButton::vf6(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004194d8  PVWFontButton::vf5   (923 bytes)   [rtti:vtable virtual slot 5]
void __cdecl PVWFontButton::vf5(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  HDC pHVar3;
  int *piVar4;
  RECT *pRVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int iVar7;
  int local_bc [4];
  tagRECT local_ac;
  RECT local_94;
  COLORREF local_84;
  uint local_80;
  COLORREF local_7c;
  int local_78;
  undefined4 local_74;
  undefined2 local_64;
  int local_58;
  uint local_50 [2];
  LOGBRUSH local_48;
  undefined4 *local_3c;
  uint local_38 [2];
  uint local_30 [2];
  HDC local_28;
  int local_23;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4ee62c);
  local_64 = 8;
  FUN_0048d7c8((undefined4*)&local_28,*(undefined4 *)(param_2 + 0x18));
  local_58 = local_58 + 1;
  local_94.bottom = *(int *)(param_2 + 0x28);
  local_94.right = *(int *)(param_2 + 0x24);
  local_94.top = *(int *)(param_2 + 0x20);
  local_94.left = *(int *)(param_2 + 0x1c);
  local_78 = local_94.left;
  if (((*(char *)(param_1 + 0x15) != '\0') && (2 < local_94.right - local_94.left)) &&
     (2 < local_94.bottom - local_94.top)) {
    local_64 = 0x20;
    FUN_0049b6a8(local_30,(uint *)&DAT_0051b1bc,1,0);
    local_58 = local_58 + 2;
    local_64 = 0x2c;
    FUN_0048d8f4((undefined4*)&local_28,local_30);
    local_64 = 0x38;
    iVar7 = 0;
    pvVar1 = GetStockObject(5);
    FUN_004ab7e4(local_38,pvVar1,iVar7);
    local_58 = local_58 + 2;
    local_64 = 0x2c;
    FUN_0048d938((undefined4*)&local_28,local_38);
    Rectangle(local_28,local_94.left,local_94.top,local_94.right,local_94.bottom);
    FUN_00494470(&local_94.left,-1,-1);
    FUN_0048da64((undefined4*)&local_28);
    FUN_0048da38((undefined4*)&local_28);
    local_58 = local_58 + -2;
    OWL::TBrush::_dtor(local_38,2);
    local_58 = local_58 + -2;
    OWL::TGdiObject::_dtor(local_30,0);
  }
  local_64 = 0x14;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    iVar7 = 6;
  }
  else {
    iVar7 = 7;
  }
  FUN_0049f930(&local_ac.left,&local_94.left,iVar7,0);
  local_64 = 0x14;
  FUN_0049fa58(&local_ac,(undefined4*)&local_28);
  FUN_0049f9e0(local_bc,&local_ac.left);
  piVar4 = local_bc;
  pRVar5 = &local_94;
  for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    pRVar5->left = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    local_64 = 0x44;
    FUN_004178ac(&local_48,*(COLORREF *)(param_1 + 0x60));
    local_58 = local_58 + 1;
    local_64 = 0x50;
    FillRect(local_28,&local_94,(HBRUSH)*local_3c);
    local_80 = *(uint *)(param_1 + 0x20);
    OWL::TDC::vf9(&local_7c,(int *)&local_28,&local_80);
    local_64 = 0x5c;
    puVar2 = FUN_0048f7fc(local_50,(LOGFONTA *)(param_1 + 0x24));
    local_58 = local_58 + 2;
    OWL::TDC::vf5((undefined4*)&local_28,puVar2);
    local_58 = local_58 + -2;
    OWL::TGdiObject::_dtor(local_50,0);
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    if (pHVar3 != local_28) {
      SetBkMode(local_28,1);
    }
    iVar7 = 1;
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    iVar7 = SetBkMode(pHVar3,iVar7);
    local_64 = 0x50;
    OWL::TDC::vf20((undefined4*)&local_28,*(LPCSTR *)(param_1 + 0x84),-1,&local_94,0x25);
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    if (pHVar3 != local_28) {
      SetBkMode(local_28,iVar7);
    }
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    SetBkMode(pHVar3,iVar7);
    OWL::TDC::vf7((undefined4*)&local_28);
    OWL::TDC::vf9(&local_84,(int *)&local_28,&local_7c);
    FUN_00494470(&local_94.left,-1,-1);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      DrawFocusRect(local_28,&local_94);
    }
    local_58 = local_58 + -1;
    PVWBrush::_dtor((int)&local_48,2);
    local_64 = 0x14;
  }
  local_58 = local_58 + -1;
  OWL::TDC::_dtor((int *)&local_28,2);
  *in_FS_OFFSET = local_74;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419874  PVWFontButton::BNClicked   (696 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWFontButton::BNClicked(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  byte bVar5;
  int local_1f4;
  int local_1f0;
  int local_1a8 [2];
  undefined4 local_1a0;
  int local_19c [16];
  uint local_15c [6];
  int local_144;
  double local_140;
  double local_138;
  uint local_130;
  undefined4 local_12c;
  undefined2 local_11c;
  int local_110;
  int local_108 [61];
  undefined1 local_14 [8];
  int local_c;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x4ee6c4);
  local_15c[0] = 0;
  local_11c = 0x14;
  FUN_00413990((int)local_14,param_1[0x1f]);
  local_110 = local_110 + 1;
  local_11c = 8;
  local_15c[0] = param_1[8];
  local_1a0 = 0;
  local_1a8[0] = param_1[0x20];
  piVar1 = param_1 + 9;
  piVar3 = local_19c;
  local_130 = local_15c[0];
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  local_11c = 0x20;
  piVar1 = FUN_0048b59c(local_108,0,*param_1,(int)local_1a8,0,local_c,0);
  local_110 = local_110 + 5;
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar4 = iVar2 == 1;
  local_110 = local_110 + -5;
  OWL::TChooseFontDialog::_dtor(local_108,2);
  if (cVar4 != '\0') {
    piVar1 = local_19c;
    piVar3 = &local_1f4;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    }
    FUN_0048c12c(local_15c);
    local_138 = (double)local_1f0 * *(double *)(param_1 + 0x1a);
    local_11c = 8;
    if (local_138 <= 0.0) {
      if (local_138 < 0.0) {
        local_1f0 = FUN_004e3c04();
      }
    }
    else {
      local_1f0 = FUN_004e3c04();
    }
    local_140 = (double)local_1f4 * *(double *)(param_1 + 0x1c);
    if (local_140 <= 0.0) {
      if (local_140 < 0.0) {
        local_1f4 = FUN_004e3c04();
      }
    }
    else {
      local_1f4 = FUN_004e3c04();
    }
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0x70))();
  }
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  local_110 = local_110 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar1 = (int *)(local_c + -0xc);
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
      if (iVar2 != 0) goto LAB_00419b0f;
    }
    local_144 = local_c + -0xc;
    operator_delete();
  }
LAB_00419b0f:
  *in_FS_OFFSET = local_12c;
  return;
}

} // namespace tea

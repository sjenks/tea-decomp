// TEA.exe — application module "TEAQuickReferenceViewWindows"
// 6 functions, 0x00467594..0x00467ae8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00467594  TEAQuickReferenceViewWindows::~TEAQuickReferenceViewWindows   (520 bytes)   [rtti:dtor destructor]
//   written in code as TEAQuickReferenceViewWindows::_dtor
void __cdecl TEAQuickReferenceViewWindows::_dtor(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  __InitExceptBlockLDTC(0x4fc5a8);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TEAQuickReferenceViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004fc7c4;
    *(undefined ***)param_1[2] = &PTR_LAB_004fc7d0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fc7dc;
    uVar1 = 0;
    do {
      if (param_1[uVar1 + 0x19] != 0) {
        (*(code *)**(undefined4 **)(param_1[uVar1 + 0x19] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    uVar1 = 0;
    do {
      if (param_1[uVar1 + 0x23] != 0) {
        (*(code *)**(undefined4 **)(param_1[uVar1 + 0x23] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    if ((uint *)param_1[0x2d] != (uint *)0x0) {
      OWL::TBrush::_dtor((uint *)param_1[0x2d],3);
    }
    if ((uint *)param_1[0x5b] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)param_1[0x5b],0);
      operator_delete();
    }
    OWL::TCheckBox::_dtor(param_1 + 0x2f,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x110;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x110;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x110;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x110;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x60,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x5e,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004677b8  FUN_004677b8   (42 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_004677b8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*(int *)(param_1 + 0xbc),0xf0,0,0);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004677e4  TEAQuickReferenceViewWindows::vf32   (96 bytes)   [rtti:vtable virtual slot 32]
void __cdecl TEAQuickReferenceViewWindows::vf32(int param_1,int param_2)

{
  uint local_3ec [250];
  
  if ((param_2 < 0x2e86) || (0x2e99 < param_2)) {
    GetWindowTextA(*(HWND *)(**(int **)(param_1 + -0xb93c + param_2 * 4) + 0xc),(LPSTR)local_3ec,999
                  );
    FUN_0045dfbc(*(int **)(param_1 + 0x60),local_3ec);
  }
  else {
    FUN_00415388();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467844  FUN_00467844   (84 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00467844(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4fc62c);
  if (*(uint **)(param_1 + 0xb4) != (uint *)0x0) {
    OWL::TBrush::_dtor(*(uint **)(param_1 + 0xb4),3);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467898  TEAQuickReferenceViewWindows::vf11   (592 bytes)   [rtti:vtable virtual slot 11]
void __cdecl TEAQuickReferenceViewWindows::vf11(int *param_1)

{
  HGDIOBJ pvVar1;
  int iVar2;
  int *piVar3;
  tagRECT *ptVar4;
  LONG *pLVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  LOGFONTA local_d0;
  tagRECT local_94;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  tagRECT local_74;
  LONG local_64;
  int local_60;
  int local_5c;
  int local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  uint *local_18;
  undefined1 local_14 [8];
  int local_c;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4fc67c);
  PropertiesViewWindows::vf11(param_1);
  local_2c = 0x14;
  FUN_00416dd4((int)local_14,(int)param_1,(uint *)"Position",
               (uint *)("TEAQuickReference" + 0x11));
  local_20 = local_20 + 1;
  local_2c = 8;
  if (*(int *)(local_c + -4) == 0) {
    local_74.left = 0;
    local_74.top = 0;
    local_74.right = 0;
    local_74.bottom = 0;
    FUN_004a7a30(**(int **)(*(int *)(*param_1 + 0x6c) + 0x2b),&local_74);
    ptVar4 = &local_74;
    pLVar5 = &local_64;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar5 = ptVar4->left;
      ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pLVar5 = pLVar5 + (uint)bVar6 * -2 + 1;
    }
    local_94.left = 0;
    local_94.top = 0;
    local_94.right = 0;
    local_94.bottom = 0;
    FUN_004a7a30(*param_1,&local_94);
    ptVar4 = &local_94;
    pLVar5 = &local_84;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar5 = ptVar4->left;
      ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pLVar5 = pLVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00494454(&local_84,local_5c - local_84,local_60 - local_80);
    FUN_004a7aa0(*param_1,(HWND)0x0,local_84,local_80,local_7c - local_84,local_78 - local_80,0x21c)
    ;
  }
  FUN_004ac750(param_1 + 0x2f,(uint)(param_1[0x2e] != 0));
  pvVar1 = GetStockObject(0xb);
  if (pvVar1 != (HGDIOBJ)0x0) {
    EnumChildWindows(*(HWND *)(*param_1 + 0xc),FUN_0046715c,(LPARAM)pvVar1);
  }
  pvVar1 = GetStockObject(0xc);
  if ((pvVar1 != (HGDIOBJ)0x0) && (iVar2 = GetObjectA(pvVar1,0x3c,&local_d0), iVar2 != 0)) {
    local_d0.lfWeight = 700;
    local_18 = (uint *)operator_new();
    if (local_18 != (uint *)0x0) {
      local_2c = 0x2c;
      FUN_0048f7fc(local_18,&local_d0);
      local_2c = 0x20;
    }
    param_1[0x5b] = (int)local_18;
    EnumChildWindows(*(HWND *)(*param_1 + 0xc),FUN_0046719c,*local_18);
    local_2c = 8;
  }
  local_20 = local_20 + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar2 != 0) goto LAB_00467ad7;
    }
    local_40 = local_c + -0xc;
    operator_delete();
  }
LAB_00467ad7:
  *in_FS_OFFSET = local_3c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467ae8  TEAQuickReferenceViewWindows::vf39   (271 bytes)   [rtti:vtable virtual slot 39]
undefined4 __cdecl TEAQuickReferenceViewWindows::vf39(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  DWORD local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4fc6d0);
  local_30 = PropertiesViewWindows::vf39(param_1,param_2,param_3,param_4);
  iVar1 = GetDlgCtrlID(param_3);
  if ((((iVar1 == 0x2f44) || ((0x2e85 < iVar1 && (iVar1 < 0x2e9a)))) ||
      ((0x2e99 < iVar1 && (iVar1 < 0x2eae)))) || ((0x2e71 < iVar1 && (iVar1 < 0x2e86)))) {
    if ((0x2e71 < iVar1) && (iVar1 < 0x2e86)) {
      DVar2 = GetSysColor(2);
      SetTextColor(param_2,DVar2);
    }
    DVar2 = GetSysColor(5);
    SetBkColor(param_2,DVar2);
    if (param_1[0x2d] == 0) {
      local_8 = (uint *)operator_new();
      if (local_8 != (uint *)0x0) {
        local_1c = 0x14;
        cVar3 = '\x01';
        local_34 = GetSysColor(5);
        FUN_004ab84c(local_8,&local_34,cVar3);
      }
      param_1[0x2d] = (int)local_8;
    }
    local_30 = *(undefined4 *)param_1[0x2d];
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_30;
}

} // namespace tea

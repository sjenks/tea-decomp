// TEA.exe — runtime / library code "OWL_TPrinter"
// 11 functions, 0x004c4d50..0x004c5b60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4d50  OWL::TPrinter::~TPrinter   (106 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrinter::_dtor
void __cdecl OWL::TPrinter::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51103c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TPrinter::vftable;
    OWL::TPrintDialog::TData::_dtor(param_1[2],3);
    OWL::TStreamableBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4dbc  OWL::TPrinter::vf1   (28 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TPrinter::vf1(int param_1)

{
  FUN_004c3ec0(*(int *)(param_1 + 8));
  FUN_004c3eec(*(int *)(param_1 + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4dd8  OWL::TPrinter::vf6   (314 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TPrinter::vf6(int param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1d0;
  int local_1ac;
  int local_1a8;
  undefined4 local_92 [2];
  undefined4 local_8a [33];
  
  __InitExceptBlockLDTC(0x511070);
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = *puVar1 & 0xfffffeff;
  *puVar1 = *puVar1;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0xc) + 0x2b);
  }
  FUN_004c3390(&local_1ac,0,uVar3,*(undefined4 *)(param_1 + 8),0,0,0,0);
  bVar2 = FUN_004c3c90((int)&local_1ac);
  if (!bVar2) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0x1008;
  }
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  OWL::TCommonDialog::_dtor(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  OWL::TWindow::_dtor(local_8a,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_92,0);
  *in_FS_OFFSET = local_1d0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4f14  OWL::TPrinter::vf7   (28 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TPrinter::vf7(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  FUN_004c3f78(*(int *)(param_1 + 8),param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4f8c  OWL::TPrinter::vf8   (264 bytes)   [rtti:vtable virtual slot 8]
uint __cdecl OWL::TPrinter::vf8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1d0;
  int local_1ac;
  int local_1a8;
  undefined4 local_92 [2];
  undefined4 local_8a [33];
  
  __InitExceptBlockLDTC(0x5110a0);
  piVar1 = FUN_004c3390(&local_1ac,0,param_2,*(undefined4 *)(param_1 + 8),0,0,0,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  uVar3 = (uint)(iVar2 == 1);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  OWL::TCommonDialog::_dtor(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  OWL::TWindow::_dtor(local_8a,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_92,0);
  *in_FS_OFFSET = local_1d0;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5094  OWL::TPrinter::vf9   (289 bytes)   [rtti:vtable virtual slot 9]
bool __cdecl OWL::TPrinter::vf9(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1d0;
  int local_1ac;
  int local_1a8;
  undefined4 local_92 [2];
  undefined4 local_8a [33];
  
  __InitExceptBlockLDTC(0x5110c4);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x48) = 1;
  piVar1 = FUN_004c3390(&local_1ac,0,param_2,*(undefined4 *)(param_1 + 8),0,0,0,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  OWL::TCommonDialog::_dtor(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  OWL::TWindow::_dtor(local_8a,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_92,0);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x48) = 0;
  *in_FS_OFFSET = local_1d0;
  return iVar2 == 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c51b8  OWL::TPrinter::vf10   (169 bytes)   [rtti:vtable virtual slot 10]
int __cdecl OWL::TPrinter::vf10(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5110f4);
  piVar1 = *(int **)(param_3 + 10);
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar1;
    }
    puVar3 = (uint *)FUN_004c3f58(*(int *)(param_1 + 8));
    puVar4 = (uint *)FUN_004c3f38(*(int *)(param_1 + 8));
    FUN_004c49bc(piVar2,0,param_2,(uint *)0x7f57,*(uint **)(param_3 + 4),puVar4,puVar3,iVar5);
  }
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  (**(code **)(*(int *)(iVar5 + 8) + 0x10))();
  *in_FS_OFFSET = local_2c;
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5264  OWL::TPrinter::vf5   (75 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TPrinter::vf5(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x26) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x2a) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x2e) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x32) = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5360  OWL::TPrinter::vf3   (1957 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
bool __cdecl OWL::TPrinter::vf3(int *param_1,int param_2,int *param_3,char param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  HCURSOR hCursor;
  int *piVar5;
  LPCSTR pCVar6;
  LPCSTR pCVar7;
  LPCSTR pCVar8;
  uint uVar9;
  int iVar10;
  HDC hdc;
  WPARAM wParam;
  LPPOINT lppt;
  undefined4 *in_FS_OFFSET;
  DEVMODEA *pDVar11;
  CHAR local_90 [4];
  COLORREF local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  WPARAM local_74;
  WPARAM local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  CHAR local_60 [4];
  int local_5c;
  int local_58;
  WPARAM local_54;
  WPARAM local_50;
  HCURSOR local_4c;
  int *local_48;
  undefined4 local_44;
  undefined2 local_34;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int *local_8;
  
  __InitExceptBlockLDTC(0x511174);
  param_1[1] = 1;
  local_48 = (int *)0x0;
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  local_4c = SetCursor(hCursor);
  local_50 = 0;
  local_54 = 0;
  (**(code **)(*param_3 + 8))();
  if (local_50 == 0) {
    *(uint *)param_1[2] = *(uint *)param_1[2] | 4;
    *(undefined4 *)(param_1[2] + 8) = 0;
    *(undefined4 *)(param_1[2] + 0xc) = 999;
  }
  else {
    *(uint *)param_1[2] = *(uint *)param_1[2] & 0xfffffffb;
    *(WPARAM *)(param_1[2] + 8) = local_50;
    *(WPARAM *)(param_1[2] + 0xc) = local_54;
  }
  if (*(int *)(param_1[2] + 0x10) == 0) {
    *(uint *)param_1[2] = *(uint *)param_1[2] | 8;
  }
  else {
    *(uint *)param_1[2] = *(uint *)param_1[2] & 0xfffffff7;
    if (*(int *)(param_1[2] + 8) < *(int *)(param_1[2] + 0x10)) {
      *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(param_1[2] + 0x10);
    }
    else if (*(int *)(param_1[2] + 0x14) < *(int *)(param_1[2] + 8)) {
      *(undefined4 *)(param_1[2] + 8) = *(undefined4 *)(param_1[2] + 0x14);
    }
    if (*(int *)(param_1[2] + 0xc) < *(int *)(param_1[2] + 0x10)) {
      *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(param_1[2] + 0x10);
    }
    else if (*(int *)(param_1[2] + 0x14) < *(int *)(param_1[2] + 0xc)) {
      *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(param_1[2] + 0x14);
    }
  }
  if (param_4 == '\0') {
    local_8 = (int *)operator_new();
    piVar5 = local_8;
    if (local_8 != (int *)0x0) {
      local_34 = 0x14;
      pDVar11 = *(DEVMODEA **)(param_1[2] + 0x56);
      pCVar6 = (LPCSTR)FUN_004c3f58(param_1[2]);
      pCVar7 = (LPCSTR)FUN_004c3f38(param_1[2]);
      pCVar8 = (LPCSTR)FUN_004c3f18(param_1[2]);
      FUN_0049caa8(local_8,pCVar8,pCVar7,pCVar6,pDVar11);
      local_34 = 8;
      piVar5 = local_8;
    }
  }
  else {
    puVar1 = (uint *)param_1[2];
    *puVar1 = *puVar1 & 0xfffffbbf;
    *puVar1 = *puVar1 | 0x100;
    cVar4 = (**(code **)(*param_1 + 0x20))();
    if ((cVar4 == '\0') && (*(int *)(param_1[2] + 4) == 0x100c)) {
      (**(code **)(*param_1 + 4))();
      cVar4 = (**(code **)(*param_1 + 0x20))();
    }
    if (cVar4 == '\0') {
      *in_FS_OFFSET = local_44;
      return false;
    }
    piVar5 = FUN_004c4074(param_1[2]);
  }
  local_48 = piVar5;
  if (local_48 == (int *)0x0) {
    FUN_004c5f00(0x7fe6);
  }
  (**(code **)(*param_1 + 0x14))();
  (**(code **)(*param_3 + 4))();
  local_34 = 0x20;
  local_58 = (**(code **)(*param_1 + 0x28))();
  local_34 = 0;
  SetCursor(local_4c);
  (**(code **)(*(int *)(param_2 + 8) + 0x60))();
  SetAbortProc((HDC)*local_48,FUN_004c4f30);
  if (((char)param_3[2] == '\0') ||
     (uVar9 = (**(code **)(*(int *)((int)local_48 + 5) + 0xc))(), (uVar9 & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_60[0] = '\x18';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_5c = Escape((HDC)*local_48,8,4,local_60,(LPVOID)0x0);
    *(bool *)(param_1 + 4) = local_5c != 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_1 + 0x26);
    *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)((int)param_1 + 0x2a);
  }
  local_64 = 1;
  local_68 = 1;
  if ((*(byte *)param_1[2] & 0x10) == 0) {
    local_6c = *(undefined4 *)(param_1[2] + 0x18);
    Escape((HDC)*local_48,0x11,4,(LPCSTR)&local_6c,&local_64);
  }
  if (((param_4 == '\0') || ((*(byte *)param_1[2] & 1) == 0)) && (local_50 == 0)) {
    if ((param_4 == '\0') || ((*(byte *)param_1[2] & 2) == 0)) {
      if (*(int *)(param_1[2] + 0x10) == 0) {
        local_70 = 1;
        local_74 = 0x7fffffff;
      }
      else {
        local_70 = *(WPARAM *)(param_1[2] + 0x10);
        local_74 = *(WPARAM *)(param_1[2] + 0x14);
      }
    }
    else {
      local_70 = *(WPARAM *)(param_1[2] + 8);
      local_74 = *(WPARAM *)(param_1[2] + 0xc);
    }
  }
  else {
    local_70 = local_50;
    local_74 = local_54;
  }
  (**(code **)(*param_3 + 0xc))();
  piVar5 = (int *)param_1[2];
  local_78 = piVar5[6];
  do {
    if ((local_78 < 1) || (piVar5 = param_1, param_1[1] < 1)) {
      (**(code **)(*param_3 + 0x20))(param_3,*param_3,piVar5,param_3);
      if (1 < local_64) {
        local_90[0] = '\x01';
        local_90[1] = '\0';
        local_90[2] = '\0';
        local_90[3] = '\0';
        Escape((HDC)*local_48,0x11,4,local_90,&local_64);
      }
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
      (**(code **)(*(int *)(local_58 + 8) + 0x18))();
      local_18 = local_58;
      if (local_58 != 0) {
        local_14 = *(undefined4 *)(local_58 + 8);
        local_34 = 0x50;
        (*(code *)**(undefined4 **)(local_58 + 8))();
        local_34 = 0x44;
      }
      if (*local_48 == DAT_00510fdc) {
        DAT_00510fdc = 0;
      }
      local_20 = local_48;
      if (local_48 != (int *)0x0) {
        local_1c = *(undefined4 *)((int)local_48 + 5);
        local_34 = 0x68;
        (*(code *)**(undefined4 **)((int)local_48 + 5))();
        local_34 = 0x5c;
      }
      if ((*(byte *)((int)param_1 + 5) & 0x40) != 0) {
        (**(code **)(*param_1 + 0x10))();
      }
      iVar10 = param_1[1];
      *in_FS_OFFSET = local_44;
      return 0 < iVar10;
    }
    if ((1 < local_64) && (local_78 < local_64)) {
      local_7c = local_78;
      Escape((HDC)*local_48,0x11,4,(LPCSTR)&local_7c,&local_64);
    }
    *(undefined4 *)((int)param_1 + 0x11) = 3;
    *(int *)((int)local_48 + 0x25) = param_3[1];
    *(undefined4 *)((int)local_48 + 0x29) = 0;
    *(undefined4 *)((int)local_48 + 0x2d) = 0;
    iVar10 = StartDocA((HDC)*local_48,(DOCINFOA *)((int)local_48 + 0x21));
    param_1[1] = iVar10;
    (**(code **)(*param_3 + 0x10))();
    SendDlgItemMessageA(*(HWND *)(local_58 + 0xc),0x69,0x464,local_74,0);
    wParam = local_70;
    while (((0 < param_1[1] && ((int)wParam <= (int)local_74)) &&
           (cVar4 = (**(code **)(*param_3 + 0x14))(), cVar4 != '\0'))) {
      SendDlgItemMessageA(*(HWND *)(local_58 + 0xc),0x68,0x464,wParam,0);
      if (bVar2) {
        *(undefined1 *)((int)param_1 + 0x15) = 1;
        iVar10 = Escape((HDC)*local_48,3,0,(LPCSTR)0x0,(LPVOID)((int)param_1 + 0x16));
        param_1[1] = iVar10;
      }
      else {
        iVar10 = StartPage((HDC)*local_48);
        param_1[1] = iVar10;
      }
      while (0 < param_1[1]) {
        if ((*(int *)((int)param_1 + 0x16) < *(int *)((int)param_1 + 0x1e)) &&
           (*(int *)((int)param_1 + 0x1a) < *(int *)((int)param_1 + 0x22))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) break;
        if (bVar2) {
          FUN_004c52b0((int)param_1,local_48);
          if ((*(char *)((int)param_3 + 9) != '\0') && ((*(uint *)((int)param_1 + 0x11) & 3) == 1))
          {
            local_80 = 0x1000000;
            local_88 = 0;
            local_84 = 0;
            uVar9 = FUN_0048c12c(&local_80);
            local_8c = SetPixel((HDC)*local_48,local_88,local_84,uVar9);
          }
          lppt = (LPPOINT)((int)param_1 + 0x16);
          iVar10 = 2;
          hdc = (HDC)(**(code **)(*(int *)((int)local_48 + 5) + 0x5c))();
          DPtoLP(hdc,lppt,iVar10);
        }
        (**(code **)(*param_3 + 0x18))();
        if (!bVar2) break;
        iVar10 = Escape((HDC)*local_48,3,0,(LPCSTR)0x0,(LPVOID)((int)param_1 + 0x16));
        param_1[1] = iVar10;
      }
      if ((0 < param_1[1]) && (!bVar2)) {
        FUN_0048db40(local_48);
        iVar10 = EndPage((HDC)*local_48);
        param_1[1] = iVar10;
        if (param_1[1] == 0) {
          param_1[1] = 1;
        }
      }
      wParam = wParam + 1;
    }
    if (0 < param_1[1]) {
      EndDoc((HDC)*local_48);
    }
    piVar5 = param_3;
    (**(code **)(*param_3 + 0x1c))();
    local_78 = local_78 - local_68;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5b4c  OWL::TPrinter::vf2   (20 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TPrinter::vf2(int *param_1)

{
  (**(code **)(*param_1 + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5b60  OWL::TPrinter::vf4   (386 bytes, 2 ranges)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TPrinter::vf4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint local_d0 [10];
  uint local_a8 [10];
  CHAR local_80 [82];
  ushort local_2e;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  LPSTR local_8;
  
  __InitExceptBlockLDTC(0x511208);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0xfffffffb:
    local_2e = 0x7f50;
    break;
  case 0xfffffffc:
    local_2e = 0x7f51;
    break;
  case 0xfffffffd:
    local_2e = 0x7f53;
    break;
  case 0xfffffffe:
    local_2e = 0x7f52;
    break;
  case 0xffffffff:
    local_2e = 0x7f54;
    break;
  default:
    *in_FS_OFFSET = local_2c;
    return local_2c;
  }
  iVar2 = *(int *)(param_2 + 0x70);
  iVar1 = FUN_004c0cd4(iVar2,0x7f55,local_80,0x50);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_2c;
    uVar3 = local_2c;
  }
  else {
    iVar1 = FUN_004c0cd4(iVar2,0x7f4f,(LPSTR)local_a8,0x28);
    if (iVar1 == 0) {
      *in_FS_OFFSET = local_2c;
      uVar3 = local_2c;
    }
    else {
      iVar2 = FUN_004c0cd4(iVar2,(uint)local_2e,(LPSTR)local_d0,0x28);
      if (iVar2 == 0) {
        *in_FS_OFFSET = local_2c;
        uVar3 = local_2c;
      }
      else {
        strlen(local_a8);
        strlen(*(uint **)(param_3 + 4));
        strlen(local_d0);
        local_1c = 0x14;
        local_8 = (LPSTR)operator_new_array();
        local_10 = local_10 + 1;
        local_1c = 8;
        wsprintfA(local_8,(LPCSTR)local_a8,*(undefined4 *)(param_3 + 4),local_d0);
        (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x1b) + 0x30))();
        local_10 = local_10 + -1;
        uVar3 = operator_delete_array();
        *in_FS_OFFSET = local_2c;
      }
    }
  }
  return uVar3;
}

} // namespace tea

// TSMerge.exe — runtime / library code "code_0x00448000"
// 87 functions, 0x004481a8..0x0044bf28. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004481a8  EvNCPaint_4481a8   (25 bytes)   [owl:response-table message-handler]
//   WM_NCPAINT
void __cdecl EvNCPaint_4481a8(int *param_1)

{
  FUN_0042b294(*param_1);
  FUN_004481c4(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004481c4  FUN_004481c4   (118 bytes)   [unnamed]
undefined4 __cdecl FUN_004481c4(int *param_1)

{
  BOOL BVar1;
  HWND hWnd;
  HWND pHVar2;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar1 == 0)) {
    hWnd = GetFocus();
    pHVar2 = GetActiveWindow();
    if ((pHVar2 != *(HWND *)(*param_1 + 0xc)) && (hWnd != *(HWND *)(*param_1 + 0xc))) {
      IsChild(*(HWND *)(*param_1 + 0xc),hWnd);
    }
    FUN_0044949c(param_1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044823c  EvNccalcsize_44823c   (46 bytes)   [owl:response-table message-handler]
//   WM_NCCALCSIZE
undefined4 __cdecl EvNccalcsize_44823c(int *param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_0042b294(*param_1);
  FUN_0044826c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044826c  FUN_0044826c   (77 bytes)   [unnamed]
undefined4 __cdecl FUN_0044826c(int *param_1,undefined4 param_2,int param_3)

{
  BOOL BVar1;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar1 == 0)) {
    FUN_00449888(&local_14,param_1);
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + (local_8 - local_10);
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004482bc  EvNclbuttondown_4482bc   (37 bytes)   [owl:response-table message-handler]
//   WM_NCLBUTTONDOWN
void __cdecl EvNclbuttondown_4482bc(int *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004482e4(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_0042b294(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004482e4  FUN_004482e4   (801 bytes)   [unnamed]
int __cdecl FUN_004482e4(int *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  int *piVar2;
  RECT *pRVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int local_dc [4];
  int local_cc [4];
  int local_bc [4];
  RECT local_ac;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c [4];
  RECT local_6c;
  tagPOINT local_5c;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c [10];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x47003c);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    local_dc[0] = 0;
    *in_FS_OFFSET = local_50;
  }
  else {
    local_40 = 8;
    FUN_0042e1ac((int *)local_2c,*(undefined4 *)(*param_1 + 0xc));
    local_34 = local_34 + 2;
    local_40 = 0x14;
    if (param_2 == 3) {
      *(undefined4 *)((int)param_1 + 0x2a) = 3;
      if ((char)param_1[8] == '\0') {
        FUN_0044993c(&local_9c,param_1);
        local_80 = local_90 + -1;
        local_84 = local_94;
        local_88 = local_98 + 1;
        local_8c = local_9c + 1;
        PatBlt(local_2c[0],local_8c,local_88,local_94 - local_8c,local_80 - local_88,0x5a0049);
        *(undefined1 *)((int)param_1 + 0x2f) = 1;
        FUN_0042d1a4(*param_1,0x112,0xf093,*(int *)(param_3 + 2) << 0x10 | (uint)*param_3);
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          local_5c.x = 0;
          local_5c.y = 0;
          GetCursorPos(&local_5c);
          FUN_00447fb8(param_1,&local_5c.x,&local_54);
          if (local_54 == 3) {
            FUN_0042d1a4(*param_1,0x112,0xf103,0);
          }
        }
        if (*(int *)(*param_1 + 0xc) != 0) {
          PatBlt(local_2c[0],local_8c,local_88,local_84 - local_8c,local_80 - local_88,0x5a0049);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2e) = 1;
        SetCapture(*(HWND *)(*param_1 + 0xc));
        FUN_0044993c(local_7c,param_1);
        piVar2 = local_7c;
        pRVar3 = &local_6c;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRVar3->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
        }
        FUN_00448e44(param_1,(undefined4*)local_2c,&local_6c,*(char *)((int)param_1 + 0x2e));
      }
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      OWL::TWindowDC::_dtor((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else if (param_2 == 8) {
      *(undefined4 *)((int)param_1 + 0x2a) = 8;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_0044998c(local_bc,param_1);
      piVar2 = local_bc;
      pRVar3 = &local_ac;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        pRVar3->left = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
      }
      FUN_00449224(param_1,(undefined4*)local_2c,&local_ac,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      OWL::TWindowDC::_dtor((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else if (param_2 == 9) {
      *(undefined4 *)((int)param_1 + 0x2a) = 9;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004499f8(local_dc,param_1);
      piVar2 = local_dc;
      piVar4 = local_cc;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_004492f4(param_1,(undefined4*)local_2c,local_cc,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      OWL::TWindowDC::_dtor((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      local_dc[0] = 0;
      OWL::TWindowDC::_dtor((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
  }
  return local_dc[0];
}

// ----------------------------------------------------------------------------------------------------
// 0x00448608  EvMouseMove_448608   (37 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl EvMouseMove_448608(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00448630(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_0042b294(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448630  FUN_00448630   (503 bytes)   [unnamed]
undefined4 __cdecl FUN_00448630(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  int *piVar2;
  RECT *pRVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  int local_bc [4];
  int local_ac [4];
  int local_9c [4];
  RECT local_8c;
  int local_7c [4];
  RECT local_6c;
  tagPOINT local_5c;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  int local_2c [10];
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x47007c);
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    local_5c.x = *param_3;
    local_5c.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_5c);
    FUN_00447fb8(param_1,&local_5c.x,&local_54);
    bVar5 = local_54 == *(int *)((int)param_1 + 0x2a);
    if (bVar5 != (bool)*(char *)((int)param_1 + 0x2e)) {
      *(bool *)((int)param_1 + 0x2e) = bVar5;
      local_40 = 8;
      FUN_0042e1ac(local_2c,*(undefined4 *)(*param_1 + 0xc));
      local_34 = local_34 + 2;
      local_40 = 0x14;
      iVar1 = *(int *)((int)param_1 + 0x2a);
      if (iVar1 == 3) {
        if ((char)param_1[8] != '\0') {
          FUN_0044993c(local_7c,param_1);
          piVar2 = local_7c;
          pRVar3 = &local_6c;
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            pRVar3->left = *piVar2;
            piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
            pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar6 * -2 + 1) * 4);
          }
          FUN_00448e44(param_1,local_2c,&local_6c,*(char *)((int)param_1 + 0x2e));
        }
        uVar7 = 1;
        local_34 = local_34 + -2;
        OWL::TWindowDC::_dtor(local_2c,2);
        *in_FS_OFFSET = local_50;
        return uVar7;
      }
      if (iVar1 == 8) {
        FUN_0044998c(local_9c,param_1);
        piVar2 = local_9c;
        pRVar3 = &local_8c;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRVar3->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar6 * -2 + 1) * 4);
        }
        FUN_00449224(param_1,local_2c,&local_8c,*(char *)((int)param_1 + 0x2e));
        uVar7 = 1;
        local_34 = local_34 + -2;
        OWL::TWindowDC::_dtor(local_2c,2);
        *in_FS_OFFSET = local_50;
        return uVar7;
      }
      if (iVar1 == 9) {
        FUN_004499f8(local_bc,param_1);
        piVar2 = local_bc;
        piVar4 = local_ac;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
        FUN_004492f4(param_1,local_2c,local_ac,*(char *)((int)param_1 + 0x2e));
        local_bc[0] = 1;
        local_34 = local_34 + -2;
        OWL::TWindowDC::_dtor(local_2c,2);
        *in_FS_OFFSET = local_50;
        return local_bc[0];
      }
      OWL::TWindowDC::_dtor(local_2c,2);
    }
  }
  *in_FS_OFFSET = local_50;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448828  EvLButtonUp_448828   (37 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl EvLButtonUp_448828(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00448850(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_0042b294(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448850  FUN_00448850   (269 bytes)   [unnamed]
undefined4 __cdecl FUN_00448850(int *param_1,undefined4 param_2,LONG *param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  tagPOINT local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    ReleaseCapture();
    FUN_00448630(param_1,param_2,param_3);
    local_10.x = *param_3;
    local_10.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_10);
    FUN_00447fb8(param_1,&local_10.x,&local_8);
    if (local_8 == *(int *)((int)param_1 + 0x2a)) {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      if (local_8 == 3) {
        if ((char)param_1[8] != '\0') {
          PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
        }
        return 1;
      }
      if (local_8 == 8) {
        FUN_0042bbb4(*param_1,0x112,0xf020,0);
        return 1;
      }
      if (local_8 == 9) {
        uVar3 = 0;
        BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
        if (BVar1 == 0) {
          uVar2 = 0xf030;
        }
        else {
          uVar2 = 0xf120;
        }
        FUN_0042bbb4(*param_1,0x112,uVar2,uVar3);
        return 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448960  EvNcactivate_448960   (55 bytes)   [owl:response-table message-handler]
//   WM_NCACTIVATE
undefined1 EvNcactivate_448960(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  iVar1 = FUN_00448998(param_4,CONCAT31((int3)((uint)param_2 >> 8),param_5),
                       (undefined1 *)((int)&uStack_8 + 3));
  if (iVar1 == 0) {
    iVar1 = FUN_0042b294(*param_4);
    uStack_8 = (uint)(iVar1 != 0) << 0x18;
  }
  return GH_PIECE(uStack_8, 3, undefined1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00448998  FUN_00448998   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_00448998(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_0044949c(param_1);
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448a1c  FUN_00448a1c   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_00448a1c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar1 = 0;
  }
  else if (param_2 < 0xf000) {
    *param_5 = 0;
    uVar1 = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x2f) = 0;
    uVar1 = FUN_0042bbb4(*param_1,0x112,param_2,param_4);
    *param_5 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448a68  EvSysCommand_448a68   (37 bytes)   [owl:response-table message-handler]
//   WM_SYSCOMMAND
void __cdecl EvSysCommand_448a68(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00448a90(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0042b294(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448a90  FUN_00448a90   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_00448a90(int *param_1,uint param_2)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    return 0;
  }
  if (((param_2 & 0xfff0) == 0xf100) || ((param_2 & 0xfff0) == 0xf090)) {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_00449a48(param_1);
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448adc  FUN_00448adc   (872 bytes)   [unnamed]
void __cdecl FUN_00448adc(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  undefined4 *in_FS_OFFSET;
  RECT local_ec;
  RECT local_dc;
  RECT local_cc;
  RECT local_bc;
  RECT local_ac;
  RECT local_9c;
  int local_88;
  int local_84;
  int local_7c;
  int local_78;
  LONG local_74;
  LONG local_6c;
  int local_68;
  int local_64;
  LONG local_5c;
  LONG local_58;
  int local_54;
  int local_4c;
  int local_48;
  LONG local_40;
  LONG local_3c;
  LONG local_38;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  HBRUSH local_c [2];
  
  __InitExceptBlockLDTC(0x4700bc);
  local_20 = 8;
  FUN_00431320((uint *)local_c,(uint *)&DAT_00476bcc,'\x01');
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FrameRect((HDC)*param_2,param_3,local_c[0]);
  FUN_0041d740(&param_3->left,-1,-1);
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  ExtTextOutA((HDC)*param_2,0,0,2,param_3,(LPCSTR)0x0,0,(INT *)0x0);
  if ((4 < param_3->right - param_3->left) && (4 < param_3->bottom - param_3->top)) {
    if (param_4 == '\0') {
      iVar1 = param_3->top;
      local_54 = param_3->right + -1;
      local_58 = param_3->top;
      local_5c = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_bc.left = local_5c;
      local_bc.top = local_58;
      local_bc.right = local_54;
      local_bc.bottom = iVar1 + 1;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_bc,(LPCSTR)0x0,0,(INT *)0x0);
      iVar1 = param_3->bottom;
      local_64 = param_3->left + 1;
      local_68 = param_3->top + 1;
      local_6c = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_cc.left = local_6c;
      local_cc.top = local_68;
      local_cc.right = local_64;
      local_cc.bottom = iVar1 + -1;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_cc,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = param_3->bottom;
      local_74 = param_3->right;
      local_78 = param_3->top + 1;
      local_7c = param_3->right + -1;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_dc.left = local_7c;
      local_dc.top = local_78;
      local_dc.right = local_74;
      local_dc.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_dc,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = param_3->bottom;
      local_84 = param_3->right + -1;
      local_88 = param_3->bottom + -1;
      iVar1 = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_ec.top = local_88;
      local_ec.right = local_84;
      local_ec.left = iVar1 + 1;
      local_ec.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_ec,(LPCSTR)0x0,0,(INT *)0x0);
    }
    else {
      iVar1 = param_3->top;
      local_38 = param_3->right;
      local_3c = param_3->top;
      local_40 = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_9c.left = local_40;
      local_9c.top = local_3c;
      local_9c.right = local_38;
      local_9c.bottom = iVar1 + 1;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_9c,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = param_3->bottom;
      local_48 = param_3->left + 1;
      local_4c = param_3->top + 1;
      LVar3 = param_3->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_ac.top = local_4c;
      local_ac.right = local_48;
      local_ac.left = LVar3;
      local_ac.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&local_ac,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  local_14 = local_14 + -2;
  OWL::TBrush::_dtor((uint *)local_c,2);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448e44  FUN_00448e44   (407 bytes)   [unnamed]
uint __cdecl FUN_00448e44(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT local_24;
  undefined1 local_14 [12];
  uint local_8;
  
  FUN_00448adc(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(&param_3->left,1,1);
  }
  if (param_3->right - param_3->left < 8) {
    local_24.right = (param_3->right - param_3->left) - 3;
  }
  else {
    uVar2 = param_3->right - param_3->left;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    local_24.right = ((param_3->right - param_3->left) - iVar3) - 1;
  }
  if (param_3->bottom - param_3->top < 8) {
    local_24.bottom = (param_3->bottom - param_3->top) + -3;
  }
  else {
    uVar2 = param_3->bottom - param_3->top;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    local_24.bottom = ((param_3->bottom - param_3->top) - iVar3) + -1;
  }
  if ((1 < local_24.right) && (1 < local_24.bottom)) {
    local_24.left = 0;
    local_24.top = 0;
    uVar2 = ((param_3->bottom - param_3->top) - local_24.bottom) - 1;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    uVar2 = ((param_3->right - param_3->left) - local_24.right) - 1;
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    local_8 = local_24.right;
    FUN_0041d724(&local_24.left,iVar4 + param_3->left,iVar3 + param_3->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_0041d724(&local_24.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = local_24.right - 1;
    local_24.bottom = local_24.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),BVar1 != 0,local_14,param_2,&DAT_00476bfc);
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = (LONG)(BVar1 != 0);
  }
  return local_24.right;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448fdc  FUN_00448fdc   (583 bytes)   [unnamed]
void __cdecl FUN_00448fdc(undefined4 param_1,undefined4 *param_2,RECT *param_3)

{
  LONG LVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  RECT local_b4;
  RECT local_a4;
  RECT local_94;
  RECT local_84;
  LONG local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  HBRUSH local_c [2];
  
  __InitExceptBlockLDTC(0x4700fc);
  param_3->left = param_3->left + 1;
  param_3->top = param_3->top + 1;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  ExtTextOutA((HDC)*param_2,0,0,2,param_3,(LPCSTR)0x0,0,(INT *)0x0);
  uVar3 = (param_3->bottom - param_3->top) - 3;
  local_84.top = (int)uVar3 >> 1;
  if (local_84.top < 0) {
    local_84.top = local_84.top + (uint)((uVar3 & 1) != 0);
  }
  local_84.top = local_84.top + param_3->top;
  local_84.left = param_3->left + 2;
  local_44 = (param_3->right - param_3->left) + -5;
  local_40 = 3;
  local_84.bottom = local_84.top + 3;
  local_84.right = local_84.left + local_44;
  iVar4 = local_84.top + 4;
  local_4c = local_84.right + 1;
  local_50 = local_84.top + 1;
  local_54 = param_3->left + 3;
  local_48 = local_84.left;
  local_3c = local_84.left;
  local_38 = local_84.top;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  local_94.left = local_54;
  local_94.top = local_50;
  local_94.right = local_4c;
  local_94.bottom = iVar4;
  ExtTextOutA((HDC)*param_2,0,0,2,&local_94,(LPCSTR)0x0,0,(INT *)0x0);
  local_20 = 8;
  FUN_00431320((uint *)local_c,(uint *)&DAT_00476bfc,'\x01');
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FrameRect((HDC)*param_2,&local_84,local_c[0]);
  iVar4 = local_84.top + 2;
  local_5c = local_84.right + -1;
  local_60 = local_84.top + 1;
  local_64 = local_84.left + 1;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  local_a4.left = local_64;
  local_a4.top = local_60;
  local_a4.right = local_5c;
  local_a4.bottom = iVar4;
  ExtTextOutA((HDC)*param_2,0,0,2,&local_a4,(LPCSTR)0x0,0,(INT *)0x0);
  LVar1 = param_3->bottom;
  local_6c = param_3->right + 1;
  local_70 = param_3->top;
  LVar2 = param_3->right;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  local_b4.top = local_70;
  local_b4.right = local_6c;
  local_b4.left = LVar2;
  local_b4.bottom = LVar1;
  ExtTextOutA((HDC)*param_2,0,0,2,&local_b4,(LPCSTR)0x0,0,(INT *)0x0);
  local_14 = local_14 + -2;
  OWL::TBrush::_dtor((uint *)local_c,2);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449224  FUN_00449224   (205 bytes)   [unnamed]
void __cdecl FUN_00449224(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  FUN_00448adc(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(&param_3->left,1,1);
  }
  iVar1 = param_3->right - param_3->left;
  iVar2 = iVar1 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 4;
  }
  local_18 = ((param_3->bottom - param_3->top) + 2) / 3 + param_3->top;
  local_10 = param_3->left + (iVar2 >> 2);
  local_1c = (int)(iVar1 + 1U) >> 1;
  if (local_1c < 0) {
    local_1c = local_1c + (uint)((iVar1 + 1U & 1) != 0);
  }
  local_1c = local_1c + local_10;
  local_c = local_18;
  for (; local_10 < local_1c; local_10 = local_10 + 1) {
    MoveToEx((HDC)*param_2,local_10,local_c,(LPPOINT)0x0);
    LineTo((HDC)*param_2,local_1c,local_18);
    local_c = local_c + 1;
    local_1c = local_1c + -1;
    local_18 = local_18 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004492f4  FUN_004492f4   (6 bytes)   [unnamed]
void __stdcall FUN_004492f4(int *param_1,undefined4 *param_2,int *param_3,char param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_10;
  int iStack_c;
  
  FUN_00448adc(param_1,param_2,(RECT *)param_3,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(param_3,1,1);
  }
  iStack_34 = param_3[3] - param_3[1];
  iVar4 = param_3[2] - *param_3;
  BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (BVar1 != 0) {
    iVar2 = iStack_34 * -3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar3 = iVar4 + 1;
    if (iVar3 < 0) {
      iVar3 = iVar4 + 4;
    }
    iStack_24 = (iVar2 >> 3) + param_3[3];
    iStack_10 = (iVar3 >> 2) + *param_3;
    iStack_28 = (int)(iVar4 + 1U) >> 1;
    if (iStack_28 < 0) {
      iStack_28 = iStack_28 + (uint)((iVar4 + 1U & 1) != 0);
    }
    iStack_28 = iStack_28 + iStack_10;
    iStack_c = iStack_24;
    for (; iStack_10 < iStack_28; iStack_10 = iStack_10 + 1) {
      MoveToEx((HDC)*param_2,iStack_10,iStack_c,(LPPOINT)0x0);
      LineTo((HDC)*param_2,iStack_28,iStack_24);
      iStack_c = iStack_c + 1;
      iStack_28 = iStack_28 + -1;
      iStack_24 = iStack_24 + 1;
    }
  }
  BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (BVar1 == 0) {
    iStack_34 = (iStack_34 * 2) / 3;
  }
  else {
    iStack_34 = iStack_34 * 3;
    if (iStack_34 < 0) {
      iStack_34 = iStack_34 + 7;
    }
    iStack_34 = iStack_34 >> 3;
  }
  iVar2 = iVar4 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar4 + 4;
  }
  iStack_34 = iStack_34 + param_3[1];
  iStack_30 = (iVar2 >> 2) + *param_3;
  iStack_38 = (int)(iVar4 + 1U) >> 1;
  if (iStack_38 < 0) {
    iStack_38 = iStack_38 + (uint)((iVar4 + 1U & 1) != 0);
  }
  iStack_38 = iStack_38 + iStack_30;
  iStack_2c = iStack_34;
  for (; iStack_30 < iStack_38; iStack_30 = iStack_30 + 1) {
    MoveToEx((HDC)*param_2,iStack_30,iStack_2c,(LPPOINT)0x0);
    LineTo((HDC)*param_2,iStack_38,iStack_34);
    iStack_2c = iStack_2c + -1;
    iStack_38 = iStack_38 + -1;
    iStack_34 = iStack_34 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004492fa  FUN_004492fa   (417 bytes)   [unnamed]
void __stdcall FUN_004492fa(void)

{
  RECT *pRVar1;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  
  pRVar1 = *(RECT **)(unaff_EBP + 0x10);
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  FUN_00448adc(*(undefined4 *)(unaff_EBP + 8),puVar2,pRVar1,*(char *)(unaff_EBP + 0x14));
  if (*(char *)(unaff_EBP + 0x14) != '\0') {
    FUN_0041d724(&pRVar1->left,1,1);
  }
  *(LONG *)(unaff_EBP + -4) = pRVar1->bottom - pRVar1->top;
  iVar7 = pRVar1->right - pRVar1->left;
  BVar4 = IsZoomed(*(HWND *)(**(int **)(unaff_EBP + 8) + 0xc));
  if (BVar4 != 0) {
    iVar5 = *(int *)(unaff_EBP + -4) * -3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    iVar6 = iVar7 + 1;
    if (iVar6 < 0) {
      iVar6 = iVar7 + 4;
    }
    *(LONG *)(unaff_EBP + -0x10) = pRVar1->bottom;
    *(LONG *)(unaff_EBP + -0x14) = pRVar1->left;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + -0xc) = (iVar6 >> 2) + *(int *)(unaff_EBP + -0x1c);
    *(int *)(unaff_EBP + -8) = (iVar5 >> 3) + *(int *)(unaff_EBP + -0x18);
    iVar5 = (int)(iVar7 + 1U) >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((iVar7 + 1U & 1) != 0);
    }
    *(int *)(unaff_EBP + -0x24) = iVar5 + *(int *)(unaff_EBP + -0xc);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -8);
    while (*(int *)(unaff_EBP + -0xc) < *(int *)(unaff_EBP + -0x24)) {
      MoveToEx((HDC)*puVar2,*(int *)(unaff_EBP + -0xc),*(int *)(unaff_EBP + -8),(LPPOINT)0x0);
      LineTo((HDC)*puVar2,*(int *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x20));
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + -1;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    }
  }
  BVar4 = IsZoomed(*(HWND *)(**(int **)(unaff_EBP + 8) + 0xc));
  if (BVar4 == 0) {
    iVar5 = (*(int *)(unaff_EBP + -4) * 2) / 3;
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -4) * 3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    iVar5 = iVar5 >> 3;
  }
  iVar6 = iVar7 + 1;
  if (iVar6 < 0) {
    iVar6 = iVar7 + 4;
  }
  iVar3 = pRVar1->top;
  *(int *)(unaff_EBP + -0x2c) = (iVar6 >> 2) + pRVar1->left;
  *(int *)(unaff_EBP + -0x28) = iVar5 + iVar3;
  iVar5 = (int)(iVar7 + 1U) >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((iVar7 + 1U & 1) != 0);
  }
  *(int *)(unaff_EBP + -0x34) = iVar5 + *(int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x28);
  while (*(int *)(unaff_EBP + -0x2c) < *(int *)(unaff_EBP + -0x34)) {
    MoveToEx((HDC)*puVar2,*(int *)(unaff_EBP + -0x2c),*(int *)(unaff_EBP + -0x28),(LPPOINT)0x0);
    LineTo((HDC)*puVar2,*(int *)(unaff_EBP + -0x34),*(int *)(unaff_EBP + -0x30));
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + -1;
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + -1;
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044949c  FUN_0044949c   (1001 bytes)   [unnamed]
void __cdecl FUN_0044949c(int *param_1)

{
  BOOL BVar1;
  HDC pHVar2;
  char *c;
  uint uVar3;
  int *piVar4;
  RECT *pRVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  LPCSTR lpString;
  int iVar8;
  tagSIZE *psizl;
  int local_140 [4];
  int local_130 [4];
  int local_120 [4];
  RECT local_110;
  int local_100 [4];
  RECT local_f0;
  int local_e0 [4];
  RECT local_d0;
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  RECT local_80;
  tagSIZE local_70;
  LONG local_68;
  LONG local_64;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  HBRUSH local_34 [2];
  HDC local_2c;
  int local_27;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x470158);
  local_48 = 8;
  FUN_0042e1ac((int *)&local_2c,*(undefined4 *)(*param_1 + 0xc));
  local_3c = local_3c + 2;
  local_48 = 0x14;
  FUN_00449888(&local_80.left,param_1);
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  BVar1 = ExtTextOutA(local_2c,0,0,2,&local_80,(LPCSTR)0x0,0,(INT *)0x0);
  (**(code **)(local_27 + 0x14))
            (&local_2c,local_27,BVar1 != 0,&local_2c,*(undefined4 *)((int)param_1 + 0x26));
  pHVar2 = (HDC)(**(code **)(local_27 + 0x5c))();
  if (pHVar2 != local_2c) {
    SetBkMode(local_2c,1);
  }
  iVar8 = 1;
  pHVar2 = (HDC)(**(code **)(local_27 + 0x5c))();
  SetBkMode(pHVar2,iVar8);
  c = strlen(*(uint **)(*param_1 + 0x10));
  lpString = *(LPCSTR *)(*param_1 + 0x10);
  local_70.cx = 0;
  local_70.cy = 0;
  psizl = &local_70;
  pHVar2 = (HDC)(**(code **)(local_27 + 0x5c))();
  GetTextExtentPoint32A(pHVar2,lpString,(int)c,psizl);
  local_68 = local_70.cx;
  local_64 = local_70.cy;
  uVar3 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if ((uVar3 & 0x20000) != 0) {
    FUN_0044998c(local_90,param_1);
  }
  if ((uVar3 & 0x10000) != 0) {
    FUN_004499f8(local_a0,param_1);
  }
  if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_0044993c(local_b0,param_1);
  }
  if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_0044993c(local_c0,param_1);
  }
  strlen(*(uint **)(*param_1 + 0x10));
  (**(code **)(local_27 + 0x48))();
  (**(code **)(local_27 + 0x1c))();
  (**(code **)(local_27 + 0x18))();
  if ((char)param_1[8] == '\0') {
    if ((uVar3 & 0x80000) != 0) {
      FUN_0044993c(local_100,param_1);
      piVar4 = local_100;
      pRVar5 = &local_f0;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        pRVar5->left = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
      }
      FUN_00448fdc(param_1,(undefined4*)&local_2c,&local_f0);
    }
  }
  else {
    FUN_0044993c(local_e0,param_1);
    piVar4 = local_e0;
    pRVar5 = &local_d0;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar5->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_00448e44(param_1,(undefined4*)&local_2c,&local_d0,'\0');
  }
  if ((uVar3 & 0x20000) != 0) {
    FUN_0044998c(local_120,param_1);
    piVar4 = local_120;
    pRVar5 = &local_110;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar5->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_00449224(param_1,(undefined4*)&local_2c,&local_110,'\0');
  }
  if ((uVar3 & 0x10000) != 0) {
    FUN_004499f8(local_140,param_1);
    piVar4 = local_140;
    piVar6 = local_130;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_004492f4(param_1,(undefined4*)&local_2c,local_130,'\0');
  }
  local_48 = 0x20;
  FUN_00431320((uint *)local_34,(uint *)&DAT_00476bcc,'\x01');
  local_3c = local_3c + 2;
  local_48 = 0x14;
  FrameRect(local_2c,(RECT *)&GHIDRA_STACK(0xfffffeb0),local_34[0]);
  local_3c = local_3c + -2;
  OWL::TBrush::_dtor((uint *)local_34,2);
  local_3c = local_3c + -2;
  OWL::TWindowDC::_dtor((int *)&local_2c,2);
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449888  FUN_00449888   (177 bytes)   [unnamed]
int * __cdecl FUN_00449888(int *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  int *piVar4;
  LONG *pLVar5;
  int *piVar6;
  LONG local_44 [4];
  tagRECT local_34;
  int local_24 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  FUN_0042d52c(*param_2,&local_34);
  ptVar2 = &local_34;
  pLVar3 = local_44;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  pLVar3 = local_44;
  pLVar5 = local_24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar5 = *pLVar3;
    pLVar3 = pLVar3 + 1;
    pLVar5 = pLVar5 + 1;
  }
  local_c = local_24[0];
  local_8 = local_24[1];
  local_10 = -local_24[1];
  local_14 = -local_24[0];
  FUN_0041d724(local_24,local_14,local_10);
  local_24[0] = local_24[0] + param_2[6];
  local_24[1] = local_24[1] + param_2[7];
  local_24[2] = local_24[2] - param_2[6];
  local_24[3] = local_24[1] + *(int *)((int)param_2 + 0x22);
  piVar4 = local_24;
  piVar6 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044993c  FUN_0044993c   (79 bytes)   [unnamed]
int * __cdecl FUN_0044993c(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00449888(local_24,param_2);
  piVar2 = local_24;
  piVar3 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_14[2] = local_14[0] + *(int *)((int)param_2 + 0x22);
  local_14[0] = local_14[0] + -1;
  local_14[1] = local_14[1] + -1;
  piVar2 = local_14;
  piVar3 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044998c  FUN_0044998c   (105 bytes)   [unnamed]
int * __cdecl FUN_0044998c(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004499f8(local_24,param_2);
  piVar3 = local_24;
  piVar4 = local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar1 = GetWindowLongA(*(HWND *)(*param_2 + 0xc),-0x10);
  if ((uVar1 & 0x10000) != 0) {
    FUN_0041d724(local_14,-*(int *)((int)param_2 + 0x22),0);
  }
  piVar3 = local_14;
  piVar4 = param_1;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004499f8  FUN_004499f8   (79 bytes)   [unnamed]
int * __cdecl FUN_004499f8(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00449888(local_24,param_2);
  piVar2 = local_24;
  piVar3 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_14[0] = local_14[2] - *(int *)((int)param_2 + 0x22);
  local_14[1] = local_14[1] + -1;
  local_14[2] = local_14[2] + 1;
  piVar2 = local_14;
  piVar3 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449a48  FUN_00449a48   (353 bytes)   [unnamed]
void __cdecl FUN_00449a48(int *param_1)

{
  HMENU hMenu;
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  UINT UVar4;
  int *piVar5;
  int *piVar6;
  int local_24 [4];
  undefined1 local_14 [16];
  
  hMenu = GetSystemMenu(*(HWND *)(*param_1 + 0xc),0);
  if (hMenu != (HMENU)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if ((BVar2 == 0) && (BVar2 = IsZoomed(*(HWND *)(*param_1 + 0xc)), BVar2 == 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf120,UVar4);
    EnableMenuItem(hMenu,0xf010,0);
    EnableMenuItem(hMenu,0xf000,(uint)((uVar1 & 0x40000) == 0));
    if (((uVar1 & 0x20000) == 0) || (BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar2 != 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf020,UVar4);
    if (((uVar1 & 0x10000) == 0) || (BVar2 = IsZoomed(*(HWND *)(*param_1 + 0xc)), BVar2 != 0)) {
      UVar4 = 1;
    }
    else {
      UVar4 = 0;
    }
    EnableMenuItem(hMenu,0xf030,UVar4);
    FUN_0044993c(local_24,param_1);
    piVar5 = local_24;
    piVar6 = (int *)local_14;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    ClientToScreen(*(HWND *)(*param_1 + 0xc),(LPPOINT)local_14);
    ClientToScreen(*(HWND *)(*param_1 + 0xc),(LPPOINT)(local_14 + 8));
    TrackPopupMenu(hMenu,0,GH_PIECE(local_14, 0, undefined4) - param_1[6],GH_PIECE(local_14, 4, undefined4) - param_1[7],0,
                   *(HWND *)(*param_1 + 0xc),(RECT *)local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449ca8  FUN_00449ca8   (86 bytes)   [unnamed]
void __stdcall FUN_00449ca8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47029c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00449e88;
  puVar1 = FUN_0045666c(1,0,0x425ac0);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477358,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449cfe  FUN_00449cfe   (48 bytes)   [unnamed]
void __stdcall FUN_00449cfe(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4702b0);
  OWL::TStreamableClass::_dtor(0x477358,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449d30  FUN_00449d30   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00449d30(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4702b8);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TValidator::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00425ac0,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449d98  FUN_00449d98   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_00449d98(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4702d0);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TValidator::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449dd8  FUN_00449dd8   (78 bytes)   [unnamed]
int * __cdecl FUN_00449dd8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_00425ac0,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449e28  FUN_00449e28   (26 bytes)   [unnamed]
int * __cdecl FUN_00449e28(int *param_1,int *param_2)

{
  FUN_00422efc(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449e88  FUN_00449e88   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_00449e88(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x470304);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new(), param_1 != (int *)0x0)) {
      FUN_00449d98(param_1);
    }
    FUN_00449d30(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a1bc  FUN_0044a1bc   (29 bytes)   [unnamed]
void __stdcall FUN_0044a1bc(void)

{
  DAT_00470374 = DAT_00470374 + 1;
  if (DAT_00470374 < 0x8000) {
    DAT_00470374 = 0x8000;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a1f8  FUN_0044a1f8   (178 bytes)   [unnamed]
int * __cdecl FUN_0044a1f8(uint *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x470488);
  *param_3 = 0;
  if (param_2 == 0) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00419a98(piVar1,0,0,1);
    }
    *in_FS_OFFSET = local_30;
  }
  else {
    *param_3 = 1;
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00412978(piVar1,param_1,param_2,'\0',0,0,'\x01');
    }
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a2aa  FUN_0044a2aa   (246 bytes)   [unnamed]
void __cdecl FUN_0044a2aa(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_31;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4704d0);
  for (iVar5 = 0; uVar1 = FUN_00424690(param_3), iVar5 < CONCAT22(extraout_var,uVar1);
      iVar5 = iVar5 + 1) {
    iVar2 = FUN_004246a8(param_3);
    if (*(short *)(iVar2 + iVar5 * 2) != -1) {
      FUN_004246a8(param_3);
      uVar3 = (**(code **)(param_2 + 0x10))();
      puVar4 = (undefined4 *)operator_new();
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar3;
        *(undefined1 *)(puVar4 + 1) = local_31;
      }
      if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
        FUN_0044a424(param_1,*(int *)(param_1 + 1) + 1);
      }
      iVar2 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      *(undefined4 **)(*(int *)(param_1 + 9) + iVar2 * 4) = puVar4;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a424  FUN_0044a424   (155 bytes)   [unnamed]
void __cdecl FUN_0044a424(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_0044b964();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a4c6  FUN_0044a4c6   (230 bytes)   [unnamed]
void __stdcall FUN_0044a4c6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x470550);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &OWL::TBarDescr::vftable;
    *(undefined4 *)(unaff_EBP + -4) = puVar1[0xc];
    if (*(int *)(unaff_EBP + -4) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x14;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      FUN_0044a5ac(*(int *)(unaff_EBP + -4),'\x01');
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      if (*(int *)(*(int *)(unaff_EBP + -4) + 9) != 0) {
        free();
      }
      operator_delete();
      *(undefined2 *)(unaff_EBP + -0x24) = 8;
    }
    *(undefined4 *)(unaff_EBP + -8) = puVar1[7];
    if (*(int *)(unaff_EBP + -8) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x44;
      OWL::TToolbarRes::_dtor(*(undefined4 **)(unaff_EBP + -8),3);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x38;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = puVar1[8];
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      *(undefined4 *)(unaff_EBP + -0xc) = **(undefined4 **)(unaff_EBP + -0x10);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x5c;
      (**(code **)**(undefined4 **)(unaff_EBP + -0x10))();
      *(undefined2 *)(unaff_EBP + -0x24) = 0x50;
    }
    operator_delete();
    if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a5ac  FUN_0044a5ac   (74 bytes)   [unnamed]
void __cdecl FUN_0044a5ac(int param_1,char param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4705b8);
  if (param_2 != '\0') {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 1); iVar1 = iVar1 + 1) {
      OWL::__TBarDescrGdNode::_dtor(*(int **)(*(int *)(param_1 + 9) + iVar1 * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a5f8  FUN_0044a5f8   (28 bytes)   [unnamed]
undefined4 __cdecl FUN_0044a5f8(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aae4  FUN_0044aae4   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_0044aae4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_EAX;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3a) == 0x7538)) {
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x3e);
    in_EAX = (**(code **)(*(int *)(param_2 + 0x18) + 0x1c))();
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044abd4  FUN_0044abd4   (94 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0044abd4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47060c);
  if (param_1 != 0) {
    FUN_0044a5ac(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ad1c  FUN_0044ad1c   (108 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0044ad1c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47063c);
  if (param_1 != 0) {
    FUN_0044a5ac(param_1,'\x01');
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae6c  FUN_0044ae6c   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0044ae6c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47065c);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aebc  FUN_0044aebc   (45 bytes)   [unnamed]
void __cdecl FUN_0044aebc(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aeec  FUN_0044aeec   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_0044aeec(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  
  __InitExceptBlockLDTC(0x470670);
  *param_1 = &std::exception::vftable;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    piVar3 = std::string::__getRep(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    memcpy((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *param_1 = &std::logic_error::vftable;
  *in_FS_OFFSET = uStack_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044aef2  FUN_0044aef2   (225 bytes)   [unnamed]
undefined4 * __stdcall FUN_0044aef2(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x470670);
  *puVar2 = &std::exception::vftable;
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  puVar1 = puVar2 + 2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar2[4] = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + -4);
    piVar5 = std::string::__getRep(puVar1,*(uint *)(unaff_EBP + -0x38),*(uint *)(unaff_EBP + -0x38));
    *(int **)(unaff_EBP + -0x40) = piVar5;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x40) + 0xc;
    puVar2[4] = *(undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 **)(unaff_EBP + -0x44) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x44) + 8);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x50) = puVar2[4];
    memcpy(*(undefined4 **)(unaff_EBP + -0x50),*(undefined4 **)(unaff_EBP + -0x4c),
                 *(uint *)(unaff_EBP + -0x48));
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x10);
    puVar2[4] = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8);
    *(int *)(unaff_EBP + -0x34) = puVar2[4] + -0xc;
    if (*(undefined4 **)(unaff_EBP + -0x34) != &DAT_00471d5c) {
      **(int **)(unaff_EBP + -0x34) = **(int **)(unaff_EBP + -0x34) + 1;
    }
  }
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  *puVar2 = &std::logic_error::vftable;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044afd4  FUN_0044afd4   (65 bytes)   [unnamed]
void __stdcall FUN_0044afd4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470695);
  if (DAT_00470684 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_00477368,2);
    DAT_00470684 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b018  FUN_0044b018   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0044b018(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4707d0);
  if (DAT_00470684 == '\0') {
    FUN_00443b28((undefined4 *)&DAT_00477368,(uint *)"SHELL32.DLL",'\x01','\x01','\0');
    DAT_00470684 = DAT_00470684 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00477368;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b070  FUN_0044b070   (100 bytes)   [unnamed]
undefined4 __stdcall FUN_0044b070(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00470693 == '\0') {
    puVar1 = FUN_0044b018();
    FUN_00444dcc((int *)&DAT_004773ad,(int)puVar1,"ShellExecuteA");
    DAT_00470693 = DAT_00470693 + '\x01';
  }
  uVar2 = ((code *)DAT_004773ad)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b0ec  GetDocTemplateHead   (31 bytes)   [unnamed]
undefined * __stdcall GetDocTemplateHead(uint param_1)

{
  undefined *puVar1;
  
                    /* 0x4b0ec  2  GetDocTemplateHead */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00470a64;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b10c  GetModulePtr   (31 bytes)   [unnamed]
undefined4 * __stdcall GetModulePtr(uint param_1)

{
  undefined4 *puVar1;
  
                    /* 0x4b10c  3  GetModulePtr */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00470a60;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b138  FUN_0044b138   (65 bytes)   [unnamed]
void __stdcall FUN_0044b138(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470a69);
  if (DAT_00470a68 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_004773b8,2);
    DAT_00470a68 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b17c  FUN_0044b17c   (223 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_0044b17c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint local_130 [65];
  undefined4 local_2c;
  undefined2 local_1c;
  
  __InitExceptBlockLDTC(0x470ab8);
  if ((*(undefined * *)&DAT_00470a60) == (undefined *)0x0) {
    GetModuleFileNameA(param_1,(LPSTR)local_130,0x104);
    if (DAT_00470a68 == '\0') {
      local_1c = 8;
      FUN_00443bf8((undefined4 *)&DAT_004773b8,local_130,param_1,'\x01');
      DAT_00470a68 = DAT_00470a68 + '\x01';
    }
    (*(undefined * *)&DAT_00470a60) = &DAT_004773b8;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00470a71;
  }
  DAT_00477190 = param_1;
  DAT_00477194 = param_2;
  if (param_3 != (uint *)0x0) {
    puVar1 = FUN_0042e6d8();
    FUN_0044cf10((int)puVar1,param_3);
  }
  DAT_00477198 = param_4;
  local_1c = 0x14;
  FUN_00404270();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b2a0  calloc   (43 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414f4c. malloc(n*size) then memset 0
undefined4 * __cdecl calloc(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc();
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1,0,param_1 * param_2);
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b2cc  operator_delete   (15 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f78 (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called on `this` at the end of every deleting destructor
undefined4 __stdcall operator_delete(void)

{
  undefined4 in_stack_00000004;
  
  free();
  return in_stack_00000004;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b2dc  operator_delete_array   (15 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f88 (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
void __stdcall operator_delete_array(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b2ec  set_new_handler   (19 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f98 (19 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
undefined4 __cdecl set_new_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_004773c8);
  (*(undefined4 *)&DAT_004773c8) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b300  operator_new   (144 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414fac. result is null-checked and passed to a constructor
int __stdcall operator_new(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x470ae8);
  while (iVar1 = malloc(), iVar1 == 0) {
    if (DAT_004773c8 == (code *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_0045ed74((uint *)&DAT_00406864,(undefined4*)&local_8,0,&LAB_004068bc,1,0,0,0);
    }
    else {
      ((code *)DAT_004773c8)();
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b390  operator_new_array   (15 bytes)   [analysis (usage pattern, less certain) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x0041503c (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
int __stdcall operator_new_array(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b3a0  FUN_0044b3a0   (84 bytes)   [unnamed]
void __stdcall FUN_0044b3a0(void)

{
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x470b30);
  local_8 = &std::bad_alloc::vftable;
  FUN_0045ed74((uint *)&DAT_00406864,(undefined4*)&local_8,0,&LAB_004068bc,1,0,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b400  FUN_0044b400   (63 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0044b400(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470b78);
  _DAT_004773cc = &std::bad_alloc::vftable;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b440  FUN_0044b440   (49 bytes)   [unnamed]
void __stdcall FUN_0044b440(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470b8c);
  std::bad_alloc::_dtor((undefined4 *)&DAT_004773cc,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b474  _vector_delete_ldtc_   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00415120. Borland RTL array destructor helper (ptr, elemSize, count, mode, dtor)
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  FUN_0044b498(param_1,param_2,param_3,param_4,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b498  FUN_0044b498   (245 bytes, 2 ranges)   [unnamed]
int __cdecl FUN_0044b498(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470bb4);
  if (param_1 == 0) {
    param_1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      param_3 = *(int *)(param_1 + -4);
    }
    uVar1 = param_4 & 7;
    iVar2 = (param_3 + -1) * param_2 + param_1;
    while( true ) {
      if (param_3 == 0) break;
      if (uVar1 == 1) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 2) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 3) {
        (*(code *)param_5)(iVar2,2);
      }
      else if (uVar1 == 5) {
        (*(code *)param_5)();
      }
      else {
        FUN_0045d560((uint *)"Illegal mode in _vector_delete_");
      }
      iVar2 = iVar2 - param_2;
      param_3 = param_3 + -1;
    }
    if ((param_4 & 0x10) != 0) {
      param_1 = param_1 + -4;
    }
    if ((param_4 & 8) == 0) {
      *in_FS_OFFSET = local_28;
    }
    else {
      operator_delete_array();
      param_1 = 0;
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b5d4  _vector_new_ldtc_   (274 bytes, 2 ranges)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00415280. Borland RTL array constructor helper (ptr, elemSize, count, mode, ctor)
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470c08);
  if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new_array(), param_1 == (int *)0x0)) {
    param_1 = (int *)0x0;
    *in_FS_OFFSET = local_28;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      *param_1 = param_3;
      param_1 = param_1 + 1;
    }
    if (param_5 == (undefined *)0x0) {
      *in_FS_OFFSET = local_28;
    }
    else {
      local_2c = param_3;
      piVar2 = param_1;
      while (0 < local_2c) {
        uVar1 = param_4 & 7;
        if (uVar1 == 1) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 2) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 3) {
          (*(code *)param_5)(piVar2);
        }
        else if (uVar1 == 5) {
          (*(code *)param_5)();
        }
        else {
          FUN_0045d560((uint *)"Illegal mode in _vector_new_");
        }
        piVar2 = (int *)((int)piVar2 + param_2);
        local_2c = local_2c + -1;
      }
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b790  FUN_0044b790   (106 bytes)   [unnamed]
bool FUN_0044b790(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_00470c5c == 0) {
    if ((DAT_00477db0 == 2) || (DAT_00477db0 == 1)) {
      DAT_00470c5c = 0x100000;
    }
    else {
      DAT_00470c5c = 0x400000;
    }
  }
  dwSize = (DAT_00470c5c + param_1) - 1U & ~(DAT_00470c5c - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return pvVar1 != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b7fc  FUN_0044b7fc   (39 bytes)   [unnamed]
bool FUN_0044b7fc(undefined4 *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)*param_1,param_2,0x1000,4);
  *param_1 = pvVar1;
  return pvVar1 != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b824  FUN_0044b824   (75 bytes)   [unnamed]
undefined4 FUN_0044b824(LPVOID param_1,int param_2)

{
  LPVOID pvVar1;
  LPVOID lpAddress;
  
  lpAddress = param_1;
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    pvVar1 = VirtualAlloc(lpAddress,0x1000,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) break;
    lpAddress = (LPVOID)((int)lpAddress + 0x1000);
    param_2 = param_2 + -0x1000;
  }
  FUN_0044b870(param_1,(int)lpAddress - (int)param_1);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b870  FUN_0044b870   (24 bytes)   [unnamed]
undefined4 FUN_0044b870(LPVOID param_1,SIZE_T param_2)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,param_2,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b888  FUN_0044b888   (25 bytes)   [unnamed]
undefined4 FUN_0044b888(LPVOID param_1)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b8c4  FUN_0044b8c4   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_0044b8c4(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA("borlndmm");
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      pFVar2 = GetProcAddress(hModule,"@Borlndmm@SysGetMem$qqri");
      *param_1 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,"@Borlndmm@SysFreeMem$qqrpv");
      *param_2 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,"@Borlndmm@SysReallocMem$qqrpvi");
      *param_3 = (int)pFVar2;
      if (((*param_1 == 0) || (*param_2 == 0)) || (*param_3 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b940  FUN_0044b940   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_0044b940(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b944  malloc   (16 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004155f0 (16 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called by operator new in a retry loop
undefined4 __stdcall malloc(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00470d0c)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b954  free   (16 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00415600 (16 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called by operator delete
void __stdcall free(void)

{
  (*(code *)PTR_FUN_00470d08)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b964  FUN_0044b964   (22 bytes)   [unnamed]
undefined4 __stdcall FUN_0044b964(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00470d10)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b97c  FUN_0044b97c   (72 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0044b97c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044b940();
  if (iVar1 == 0) {
    PTR_FUN_00470d08 = (undefined*)FUN_0044c01c;
    PTR_FUN_00470d0c = (undefined*)FUN_0044c18c;
    PTR_FUN_00470d10 = (undefined*)FUN_0044c5e4;
    PTR_LAB_00470d14 = (undefined*)FUN_0044c3a4;
    _DAT_00470d04 = 1;
  }
  _DAT_00470d00 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b9c4  FUN_0044b9c4   (24 bytes)   [unnamed]
void __cdecl FUN_0044b9c4(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_0044b97c(1);
  (*(code *)PTR_FUN_00470d08)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b9dc  FUN_0044b9dc   (24 bytes)   [unnamed]
void __cdecl FUN_0044b9dc(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_0044b97c(1);
  (*(code *)PTR_FUN_00470d0c)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b9f4  FUN_0044b9f4   (30 bytes)   [unnamed]
void __cdecl FUN_0044b9f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_0044b97c(1);
  (*(code *)PTR_FUN_00470d10)(param_2,param_1,uVar1,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ba34  FUN_0044ba34   (1 bytes)   [unnamed]
void __stdcall FUN_0044ba34(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ba38  FUN_0044ba38   (64 bytes)   [unnamed]
void __stdcall FUN_0044ba38(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0xc; iVar2 < (*(int *)&DAT_00470d28); iVar2 = iVar2 + 4) {
    iVar1 = iVar2 * 2 + DAT_00470d3c;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar2 = (*(int *)&DAT_00470d28) * 2 + DAT_00470d3c;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ba78  FUN_0044ba78   (255 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0044ba78(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_2 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[2] = 1;
    param_1[3] = (uint)param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[0x23] = (uint)DAT_00470d34;
    param_1[0x24] = 0;
    if (DAT_00470d34 == (uint *)0x0) {
      _DAT_00470d38 = param_1;
    }
    else {
      DAT_00470d34[0x24] = (uint)param_1;
    }
    DAT_00470d34 = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if ((*(uint * *)&DAT_00470d3c) == (uint *)0x0) {
      uVar5 = DAT_00470d28 * 2 + 3 & 0xfffffffc;
      (*(uint * *)&DAT_00470d3c) = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_0044ba38();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_00470d4c;
    if (uVar5 < DAT_00470d28) {
      puVar2 = (undefined *)((int)(*(uint * *)&DAT_00470d3c) + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bb78  FUN_0044bb78   (235 bytes)   [unnamed]
undefined4 __cdecl FUN_0044bb78(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = param_2 & 0xfffff000;
  uVar1 = *param_1;
  iVar2 = uVar1 + (int)param_1;
  puVar3 = (uint *)(iVar2 + -4);
  if (uVar4 < uVar1) {
    if ((*(byte *)puVar3 & 2) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)((int)puVar3 - *(int *)(iVar2 + -8));
    if ((*puVar3 & 0xfffffffc) - 0xc < uVar1 - uVar4) {
      return 0xffffffff;
    }
    *puVar3 = *puVar3 - (uVar1 - uVar4);
    *(uint *)((int)puVar3 + (*puVar3 & 0xfffffffc)) = (*puVar3 & 0xfffffffc) + 4;
    *(undefined4 *)((int)puVar3 + (*puVar3 & 0xfffffffc) + 4) = 2;
    if ((*puVar3 & 0xfffffffc) < DAT_00470d28) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_00470d3c + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_00470d3c) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_00470d3c + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar1 = *param_1;
    *puVar3 = *puVar3 + (uVar4 - uVar1) + -4;
    *(undefined4 *)(iVar2 + (*puVar3 & 0xfffffffc)) = 0;
    FUN_0044c048(iVar2);
    *param_1 = *param_1 + (uVar4 - uVar1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bc64  FUN_0044bc64   (706 bytes)   [unnamed]
undefined4 __cdecl FUN_0044bc64(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint *local_8;
  uint uVar4;
  
  uVar7 = param_1 + 0xfffU & 0xfffff000;
  if (DAT_00470d50 == 0) {
    DAT_00470d50 = FUN_0044c38c();
  }
  puVar1 = DAT_00470d34;
  if (DAT_00470d3c == 0) {
    uVar7 = uVar7 + ((*(int *)&DAT_00470d28) * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_00470d20;
      if ((uint)((*(int *)&DAT_00470d54) + DAT_00470d1c) < DAT_00470d50) {
        iVar3 = DAT_00470d1c;
      }
      iVar6 = DAT_00470d20;
      if ((uint)((*(int *)&DAT_00470d54) + DAT_00470d1c) < DAT_00470d50) {
        iVar6 = DAT_00470d1c;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_00470d20;
        if ((uint)((*(int *)&DAT_00470d54) + DAT_00470d1c) < DAT_00470d50) {
          iVar3 = DAT_00470d1c;
        }
        iVar6 = DAT_00470d20;
        if ((uint)((*(int *)&DAT_00470d54) + DAT_00470d1c) < DAT_00470d50) {
          iVar6 = DAT_00470d1c;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_0044b824((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + (uVar7 - *puVar1);
        FUN_0044bb78(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_0044b824((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + 0x1000;
        FUN_0044bb78(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_00470d18;
  if (DAT_00470d18 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_0044b790(uVar4,(undefined4*)&local_8,&local_c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_00470d20;
    if ((uint)((*(int *)&DAT_00470d54) + DAT_00470d1c) < DAT_00470d50) {
      iVar3 = DAT_00470d1c;
    }
    iVar6 = DAT_00470d20;
    if ((uint)((*(int *)&DAT_00470d54) + DAT_00470d1c) < DAT_00470d50) {
      iVar6 = DAT_00470d1c;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_00470d34; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == local_8) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_0044b824((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + iVar3;
          FUN_0044bb78(puVar1,puVar1[1]);
        }
        iVar6 = FUN_0044b824(local_8,uVar7 - iVar3);
        if (iVar6 != 0) {
          (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)local_8;
          puVar1[1] = puVar1[1] + local_c;
          FUN_0044bb78(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_0044b824(local_8,uVar7);
    if (iVar3 == 0) {
      FUN_0044b888(local_8);
      uVar5 = 0xffffffff;
    }
    else {
      (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + uVar7;
      FUN_0044ba78(local_8,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044bf28  FUN_0044bf28   (241 bytes)   [unnamed]
undefined4 __cdecl FUN_0044bf28(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T SVar3;
  uint uVar4;
  
  uVar4 = DAT_00470d30;
  if (DAT_00470d54 < DAT_00470d50) {
    uVar4 = DAT_00470d2c;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_00470d34; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_0044bb78(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          SVar3 = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_0044b870((LPVOID)puVar2[puVar2[2] + 3],SVar3);
          DAT_00470d54 = DAT_00470d54 - SVar3;
          FUN_0044b888((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_0044b870((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_00470d54 = DAT_00470d54 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

} // namespace tea

// TEA.exe — runtime / library code "code_0x004c8000"
// 86 functions, 0x004c8120..0x004cbf6c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c8120  EvNCHitTest_4c8120   (49 bytes)   [owl:response-table message-handler]
//   WM_NCHITTEST
undefined4 __cdecl EvNCHitTest_4c8120(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_004c8154(param_1,param_2,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_004a5774(*param_1);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8154  FUN_004c8154   (495 bytes)   [unnamed]
undefined4 __cdecl FUN_004c8154(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_004a78f0(*param_1);
    local_5 = (uVar3 & 0x10000) != 0;
    local_6 = (uVar3 & 0x20000) != 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_004a7a30(*param_1,&local_28);
    ptVar5 = &local_28;
    pLVar6 = local_38;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar6 = pLVar6 + 1;
    }
    local_14 = param_2[1] - local_38[1];
    local_18 = *param_2 - local_38[0];
    local_10 = local_18;
    local_c = local_14;
    if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
      FUN_004c9ad8(&local_48,param_1);
      if ((local_10 < local_48) ||
         (((local_40 <= local_10 || (local_c < local_44)) || (local_3c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 3;
        return 1;
      }
    }
    if (local_6 != '\0') {
      FUN_004c9b28(&local_58,param_1);
      if (((local_10 < local_58) || (local_50 <= local_10)) ||
         ((local_c < local_54 || (local_4c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 8;
        return 1;
      }
    }
    if (local_5 != '\0') {
      FUN_004c9b94(&local_68,param_1);
      if (((local_10 < local_68) || (local_60 <= local_10)) ||
         ((local_c < local_64 || (local_5c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 9;
        return 1;
      }
    }
    FUN_004c9a24(&local_78,param_1);
    if ((((local_10 < local_78) || (local_70 <= local_10)) || (local_c < local_74)) ||
       (local_6c <= local_c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8344  EvNCPaint_4c8344   (25 bytes)   [owl:response-table message-handler]
//   WM_NCPAINT
void __cdecl EvNCPaint_4c8344(int *param_1)

{
  FUN_004a5774(*param_1);
  FUN_004c8360(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8360  FUN_004c8360   (118 bytes)   [unnamed]
undefined4 __cdecl FUN_004c8360(int *param_1)

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
    FUN_004c9638(param_1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c83d8  EvNccalcsize_4c83d8   (46 bytes)   [owl:response-table message-handler]
//   WM_NCCALCSIZE
undefined4 __cdecl EvNccalcsize_4c83d8(int *param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_004a5774(*param_1);
  FUN_004c8408(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8408  FUN_004c8408   (77 bytes)   [unnamed]
undefined4 __cdecl FUN_004c8408(int *param_1,undefined4 param_2,int param_3)

{
  BOOL BVar1;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar1 == 0)) {
    FUN_004c9a24(&local_14,param_1);
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + (local_8 - local_10);
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8458  EvNclbuttondown_4c8458   (37 bytes)   [owl:response-table message-handler]
//   WM_NCLBUTTONDOWN
void __cdecl EvNclbuttondown_4c8458(int *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c8480(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_004a5774(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8480  FUN_004c8480   (801 bytes)   [unnamed]
int __cdecl FUN_004c8480(int *param_1,int param_2,ushort *param_3)

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
  __InitExceptBlockLDTC(0x511cc0);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    local_dc[0] = 0;
    *in_FS_OFFSET = local_50;
  }
  else {
    local_40 = 8;
    FUN_004a8674((int *)local_2c,*(undefined4 *)(*param_1 + 0xc));
    local_34 = local_34 + 2;
    local_40 = 0x14;
    if (param_2 == 3) {
      *(undefined4 *)((int)param_1 + 0x2a) = 3;
      if ((char)param_1[8] == '\0') {
        FUN_004c9ad8(&local_9c,param_1);
        local_80 = local_90 + -1;
        local_84 = local_94;
        local_88 = local_98 + 1;
        local_8c = local_9c + 1;
        PatBlt(local_2c[0],local_8c,local_88,local_94 - local_8c,local_80 - local_88,0x5a0049);
        *(undefined1 *)((int)param_1 + 0x2f) = 1;
        FUN_004a76a8(*param_1,0x112,0xf093,*(int *)(param_3 + 2) << 0x10 | (uint)*param_3);
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          local_5c.x = 0;
          local_5c.y = 0;
          GetCursorPos(&local_5c);
          FUN_004c8154(param_1,&local_5c.x,&local_54);
          if (local_54 == 3) {
            FUN_004a76a8(*param_1,0x112,0xf103,0);
          }
        }
        if (*(int *)(*param_1 + 0xc) != 0) {
          PatBlt(local_2c[0],local_8c,local_88,local_84 - local_8c,local_80 - local_88,0x5a0049);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2e) = 1;
        SetCapture(*(HWND *)(*param_1 + 0xc));
        FUN_004c9ad8(local_7c,param_1);
        piVar2 = local_7c;
        pRVar3 = &local_6c;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRVar3->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
        }
        FUN_004c8fe0(param_1,(undefined4*)local_2c,&local_6c,*(char *)((int)param_1 + 0x2e));
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
      FUN_004c9b28(local_bc,param_1);
      piVar2 = local_bc;
      pRVar3 = &local_ac;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        pRVar3->left = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
      }
      FUN_004c93c0(param_1,(undefined4*)local_2c,&local_ac,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      local_34 = local_34 + -2;
      OWL::TWindowDC::_dtor((int *)local_2c,2);
      *in_FS_OFFSET = local_50;
    }
    else if (param_2 == 9) {
      *(undefined4 *)((int)param_1 + 0x2a) = 9;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004c9b94(local_dc,param_1);
      piVar2 = local_dc;
      piVar4 = local_cc;
      for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_004c9490(param_1,(undefined4*)local_2c,local_cc,*(char *)((int)param_1 + 0x2e));
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
// 0x004c87a4  EvMouseMove_4c87a4   (37 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl EvMouseMove_4c87a4(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c87cc(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_004a5774(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c87cc  FUN_004c87cc   (503 bytes)   [unnamed]
undefined4 __cdecl FUN_004c87cc(int *param_1,undefined4 param_2,LONG *param_3)

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
  __InitExceptBlockLDTC(0x511d00);
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    local_5c.x = *param_3;
    local_5c.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_5c);
    FUN_004c8154(param_1,&local_5c.x,&local_54);
    bVar5 = local_54 == *(int *)((int)param_1 + 0x2a);
    if (bVar5 != (bool)*(char *)((int)param_1 + 0x2e)) {
      *(bool *)((int)param_1 + 0x2e) = bVar5;
      local_40 = 8;
      FUN_004a8674(local_2c,*(undefined4 *)(*param_1 + 0xc));
      local_34 = local_34 + 2;
      local_40 = 0x14;
      iVar1 = *(int *)((int)param_1 + 0x2a);
      if (iVar1 == 3) {
        if ((char)param_1[8] != '\0') {
          FUN_004c9ad8(local_7c,param_1);
          piVar2 = local_7c;
          pRVar3 = &local_6c;
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            pRVar3->left = *piVar2;
            piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
            pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar6 * -2 + 1) * 4);
          }
          FUN_004c8fe0(param_1,local_2c,&local_6c,*(char *)((int)param_1 + 0x2e));
        }
        uVar7 = 1;
        local_34 = local_34 + -2;
        OWL::TWindowDC::_dtor(local_2c,2);
        *in_FS_OFFSET = local_50;
        return uVar7;
      }
      if (iVar1 == 8) {
        FUN_004c9b28(local_9c,param_1);
        piVar2 = local_9c;
        pRVar3 = &local_8c;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRVar3->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar6 * -2 + 1) * 4);
        }
        FUN_004c93c0(param_1,local_2c,&local_8c,*(char *)((int)param_1 + 0x2e));
        uVar7 = 1;
        local_34 = local_34 + -2;
        OWL::TWindowDC::_dtor(local_2c,2);
        *in_FS_OFFSET = local_50;
        return uVar7;
      }
      if (iVar1 == 9) {
        FUN_004c9b94(local_bc,param_1);
        piVar2 = local_bc;
        piVar4 = local_ac;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
        FUN_004c9490(param_1,local_2c,local_ac,*(char *)((int)param_1 + 0x2e));
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
// 0x004c89c4  EvLButtonUp_4c89c4   (37 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl EvLButtonUp_4c89c4(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c89ec(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_004a5774(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c89ec  FUN_004c89ec   (269 bytes)   [unnamed]
undefined4 __cdecl FUN_004c89ec(int *param_1,undefined4 param_2,LONG *param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  tagPOINT local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    ReleaseCapture();
    FUN_004c87cc(param_1,param_2,param_3);
    local_10.x = *param_3;
    local_10.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_10);
    FUN_004c8154(param_1,&local_10.x,&local_8);
    if (local_8 == *(int *)((int)param_1 + 0x2a)) {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      if (local_8 == 3) {
        if ((char)param_1[8] != '\0') {
          PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
        }
        return 1;
      }
      if (local_8 == 8) {
        FUN_004a6094(*param_1,0x112,0xf020,0);
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
        FUN_004a6094(*param_1,0x112,uVar2,uVar3);
        return 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8afc  EvNcactivate_4c8afc   (55 bytes)   [owl:response-table message-handler]
//   WM_NCACTIVATE
undefined1 EvNcactivate_4c8afc(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  iVar1 = FUN_004c8b34(param_4,CONCAT31((int3)((uint)param_2 >> 8),param_5),
                       (undefined1 *)((int)&uStack_8 + 3));
  if (iVar1 == 0) {
    iVar1 = FUN_004a5774(*param_4);
    uStack_8 = (uint)(iVar1 != 0) << 0x18;
  }
  return GH_PIECE(uStack_8, 3, undefined1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8b34  FUN_004c8b34   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004c8b34(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_004c9638(param_1);
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8bb8  FUN_004c8bb8   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_004c8bb8(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

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
    uVar1 = FUN_004a6094(*param_1,0x112,param_2,param_4);
    *param_5 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8c04  EvSysCommand_4c8c04   (37 bytes)   [owl:response-table message-handler]
//   WM_SYSCOMMAND
void __cdecl EvSysCommand_4c8c04(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004c8c2c(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004a5774(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8c2c  FUN_004c8c2c   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_004c8c2c(int *param_1,uint param_2)

{
  BOOL BVar1;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    return 0;
  }
  if (((param_2 & 0xfff0) == 0xf100) || ((param_2 & 0xfff0) == 0xf090)) {
    BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (BVar1 == 0) {
      FUN_004c9be4(param_1);
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8c78  FUN_004c8c78   (872 bytes)   [unnamed]
void __cdecl FUN_004c8c78(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

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
  
  __InitExceptBlockLDTC(0x511d40);
  local_20 = 8;
  FUN_004ab84c((uint *)local_c,(uint *)&DAT_0051b1bc,'\x01');
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FrameRect((HDC)*param_2,param_3,local_c[0]);
  FUN_00494470(&param_3->left,-1,-1);
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
// 0x004c8fe0  FUN_004c8fe0   (407 bytes)   [unnamed]
uint __cdecl FUN_004c8fe0(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT local_24;
  undefined1 local_14 [12];
  uint local_8;
  
  FUN_004c8c78(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(&param_3->left,1,1);
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
    FUN_00494454(&local_24.left,iVar4 + param_3->left,iVar3 + param_3->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_00494454(&local_24.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = local_24.right - 1;
    local_24.bottom = local_24.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),BVar1 != 0,local_14,param_2,&DAT_0051b1ec);
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = (LONG)(BVar1 != 0);
  }
  return local_24.right;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9178  FUN_004c9178   (583 bytes)   [unnamed]
void __cdecl FUN_004c9178(undefined4 param_1,undefined4 *param_2,RECT *param_3)

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
  
  __InitExceptBlockLDTC(0x511d80);
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
  FUN_004ab84c((uint *)local_c,&DAT_0051b1ec,'\x01');
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
// 0x004c93c0  FUN_004c93c0   (205 bytes)   [unnamed]
void __cdecl FUN_004c93c0(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  FUN_004c8c78(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(&param_3->left,1,1);
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
// 0x004c9490  FUN_004c9490   (6 bytes)   [unnamed]
void __stdcall FUN_004c9490(int *param_1,undefined4 *param_2,int *param_3,char param_4)

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
  
  FUN_004c8c78(param_1,param_2,(RECT *)param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(param_3,1,1);
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
// 0x004c9496  FUN_004c9496   (417 bytes)   [unnamed]
void __stdcall FUN_004c9496(void)

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
  FUN_004c8c78(*(undefined4 *)(unaff_EBP + 8),puVar2,pRVar1,*(char *)(unaff_EBP + 0x14));
  if (*(char *)(unaff_EBP + 0x14) != '\0') {
    FUN_00494454(&pRVar1->left,1,1);
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
// 0x004c9638  FUN_004c9638   (1001 bytes)   [unnamed]
void __cdecl FUN_004c9638(int *param_1)

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
  __InitExceptBlockLDTC(0x511ddc);
  local_48 = 8;
  FUN_004a8674((int *)&local_2c,*(undefined4 *)(*param_1 + 0xc));
  local_3c = local_3c + 2;
  local_48 = 0x14;
  FUN_004c9a24(&local_80.left,param_1);
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
    FUN_004c9b28(local_90,param_1);
  }
  if ((uVar3 & 0x10000) != 0) {
    FUN_004c9b94(local_a0,param_1);
  }
  if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_004c9ad8(local_b0,param_1);
  }
  if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_004c9ad8(local_c0,param_1);
  }
  strlen(*(uint **)(*param_1 + 0x10));
  (**(code **)(local_27 + 0x48))();
  (**(code **)(local_27 + 0x1c))();
  (**(code **)(local_27 + 0x18))();
  if ((char)param_1[8] == '\0') {
    if ((uVar3 & 0x80000) != 0) {
      FUN_004c9ad8(local_100,param_1);
      piVar4 = local_100;
      pRVar5 = &local_f0;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        pRVar5->left = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
      }
      FUN_004c9178(param_1,(undefined4*)&local_2c,&local_f0);
    }
  }
  else {
    FUN_004c9ad8(local_e0,param_1);
    piVar4 = local_e0;
    pRVar5 = &local_d0;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar5->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_004c8fe0(param_1,(undefined4*)&local_2c,&local_d0,'\0');
  }
  if ((uVar3 & 0x20000) != 0) {
    FUN_004c9b28(local_120,param_1);
    piVar4 = local_120;
    pRVar5 = &local_110;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar5->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_004c93c0(param_1,(undefined4*)&local_2c,&local_110,'\0');
  }
  if ((uVar3 & 0x10000) != 0) {
    FUN_004c9b94(local_140,param_1);
    piVar4 = local_140;
    piVar6 = local_130;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_004c9490(param_1,(undefined4*)&local_2c,local_130,'\0');
  }
  local_48 = 0x20;
  FUN_004ab84c((uint *)local_34,(uint *)&DAT_0051b1bc,'\x01');
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
// 0x004c9a24  FUN_004c9a24   (177 bytes)   [unnamed]
int * __cdecl FUN_004c9a24(int *param_1,int *param_2)

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
  FUN_004a7a30(*param_2,&local_34);
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
  FUN_00494454(local_24,local_14,local_10);
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
// 0x004c9ad8  FUN_004c9ad8   (79 bytes)   [unnamed]
int * __cdecl FUN_004c9ad8(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9a24(local_24,param_2);
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
// 0x004c9b28  FUN_004c9b28   (105 bytes)   [unnamed]
int * __cdecl FUN_004c9b28(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9b94(local_24,param_2);
  piVar3 = local_24;
  piVar4 = local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  uVar1 = GetWindowLongA(*(HWND *)(*param_2 + 0xc),-0x10);
  if ((uVar1 & 0x10000) != 0) {
    FUN_00494454(local_14,-*(int *)((int)param_2 + 0x22),0);
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
// 0x004c9b94  FUN_004c9b94   (79 bytes)   [unnamed]
int * __cdecl FUN_004c9b94(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9a24(local_24,param_2);
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
// 0x004c9be4  FUN_004c9be4   (353 bytes)   [unnamed]
void __cdecl FUN_004c9be4(int *param_1)

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
    FUN_004c9ad8(local_24,param_1);
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
// 0x004c9e44  FUN_004c9e44   (86 bytes)   [unnamed]
void __stdcall FUN_004c9e44(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511f20);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004ca024;
  puVar1 = FUN_004dd5cc(1,0,0x49f8d8);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b974,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e9a  FUN_004c9e9a   (48 bytes)   [unnamed]
void __stdcall FUN_004c9e9a(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511f34);
  OWL::TStreamableClass::_dtor(0x51b974,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9ecc  FUN_004c9ecc   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c9ecc(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511f3c);
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
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_0049f8d8,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9f34  FUN_004c9f34   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c9f34(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x511f54);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TValidator::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9f74  FUN_004c9f74   (78 bytes)   [unnamed]
int * __cdecl FUN_004c9f74(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0049a1b0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004dd744((int)local_8,iVar1,(int *)&DAT_004027f0,(int *)&DAT_0049f8d8,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9fc4  FUN_004c9fc4   (26 bytes)   [unnamed]
int * __cdecl FUN_004c9fc4(int *param_1,int *param_2)

{
  FUN_0049a490(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca024  FUN_004ca024   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ca024(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x511f88);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new(), param_1 != (int *)0x0)) {
      FUN_004c9f34(param_1);
    }
    FUN_004c9ecc(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca358  FUN_004ca358   (29 bytes)   [unnamed]
void __stdcall FUN_004ca358(void)

{
  DAT_00511ff8 = DAT_00511ff8 + 1;
  if (DAT_00511ff8 < 0x8000) {
    DAT_00511ff8 = 0x8000;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca3d0  FUN_004ca3d0   (178 bytes)   [unnamed]
int * __cdecl FUN_004ca3d0(uint *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x51210c);
  *param_3 = 0;
  if (param_2 == 0) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00490848(piVar1,0,0,1);
    }
    *in_FS_OFFSET = local_30;
  }
  else {
    *param_3 = 1;
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00488c78(piVar1,param_1,param_2,'\0',0,0,'\x01');
    }
    *in_FS_OFFSET = local_30;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca482  FUN_004ca482   (246 bytes)   [unnamed]
void __cdecl FUN_004ca482(int param_1,int param_2,int param_3)

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
  
  __InitExceptBlockLDTC(0x512154);
  for (iVar5 = 0; uVar1 = FUN_0049ccf0(param_3), iVar5 < CONCAT22(extraout_var,uVar1);
      iVar5 = iVar5 + 1) {
    iVar2 = FUN_0049cd08(param_3);
    if (*(short *)(iVar2 + iVar5 * 2) != -1) {
      FUN_0049cd08(param_3);
      uVar3 = (**(code **)(param_2 + 0x10))();
      puVar4 = (undefined4 *)operator_new();
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar3;
        *(undefined1 *)(puVar4 + 1) = local_31;
      }
      if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
        FUN_004ca5fc(param_1,*(int *)(param_1 + 1) + 1);
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
// 0x004ca5fc  FUN_004ca5fc   (155 bytes)   [unnamed]
void __cdecl FUN_004ca5fc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
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
// 0x004ca69e  FUN_004ca69e   (230 bytes)   [unnamed]
void __stdcall FUN_004ca69e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x5121d4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &OWL::TBarDescr::vftable;
    *(undefined4 *)(unaff_EBP + -4) = puVar1[0xc];
    if (*(int *)(unaff_EBP + -4) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x14;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      FUN_004ca784(*(int *)(unaff_EBP + -4),'\x01');
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
// 0x004ca784  FUN_004ca784   (74 bytes)   [unnamed]
void __cdecl FUN_004ca784(int param_1,char param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51223c);
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
// 0x004ca7d0  FUN_004ca7d0   (28 bytes)   [unnamed]
undefined4 __cdecl FUN_004ca7d0(int *param_1)

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
// 0x004cacbc  FUN_004cacbc   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_004cacbc(undefined4 param_1,int param_2)

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
// 0x004cadac  FUN_004cadac   (94 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004cadac(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512290);
  if (param_1 != 0) {
    FUN_004ca784(param_1,'\x01');
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
// 0x004caef4  FUN_004caef4   (108 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004caef4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5122c0);
  if (param_1 != 0) {
    FUN_004ca784(param_1,'\x01');
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
// 0x004cb044  FUN_004cb044   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004cb044(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5122e0);
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
// 0x004cb094  FUN_004cb094   (45 bytes)   [unnamed]
void __cdecl FUN_004cb094(int param_1,byte param_2)

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
// 0x004cb0c4  FUN_004cb0c4   (65 bytes)   [unnamed]
void __stdcall FUN_004cb0c4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512305);
  if (DAT_005122f4 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b984,2);
    DAT_005122f4 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb108  FUN_004cb108   (88 bytes)   [unnamed]
undefined * __stdcall FUN_004cb108(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512440);
  if (DAT_005122f4 == '\0') {
    FUN_004c08dc((undefined4 *)&DAT_0051b984,(uint *)"SHELL32.DLL",'\x01','\x01','\0');
    DAT_005122f4 = DAT_005122f4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b984;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb160  FUN_004cb160   (58 bytes)   [unnamed]
void __stdcall FUN_004cb160(void)

{
  undefined *puVar1;
  
  if (DAT_005122f5 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b991,(int)puVar1,"DragAcceptFiles");
    DAT_005122f5 = DAT_005122f5 + '\x01';
  }
  ((code *)DAT_0051b991)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb19c  FUN_004cb19c   (54 bytes)   [unnamed]
void __stdcall FUN_004cb19c(void)

{
  undefined *puVar1;
  
  if (DAT_005122f6 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b995,(int)puVar1,"DragFinish");
    DAT_005122f6 = DAT_005122f6 + '\x01';
  }
  ((code *)DAT_0051b995)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb1d4  FUN_004cb1d4   (79 bytes)   [unnamed]
void __stdcall FUN_004cb1d4(void)

{
  undefined *puVar1;
  
  if (DAT_005122f7 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b999,(int)puVar1,"DragQueryFileA");
    DAT_005122f7 = DAT_005122f7 + '\x01';
  }
  ((code *)DAT_0051b999)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb224  FUN_004cb224   (100 bytes)   [unnamed]
undefined4 __stdcall FUN_004cb224(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00512303 == '\0') {
    puVar1 = FUN_004cb108();
    FUN_004c1b80((int *)&DAT_0051b9c9,(int)puVar1,"ShellExecuteA");
    DAT_00512303 = DAT_00512303 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b9c9)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb2a0  FUN_004cb2a0   (86 bytes)   [unnamed]
void __stdcall FUN_004cb2a0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5126e0);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004cbd50;
  puVar1 = FUN_004dd5cc(1,0,0x473698);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b9d4,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb2f6  FUN_004cb2f6   (48 bytes)   [unnamed]
void __stdcall FUN_004cb2f6(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5126f4);
  OWL::TStreamableClass::_dtor(0x51b9d4,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb348  FUN_004cb348   (108 bytes)   [unnamed]
uint * __cdecl FUN_004cb348(uint *param_1,uint param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  uint *in_stack_0000001c;
  
  __InitExceptBlockLDTC(0x51271c);
  iVar2 = 9;
  do {
    uVar1 = *(undefined4 *)(&param_3 + iVar2 * 4);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FUN_004cba88(param_1);
  param_1[10] = param_2;
  param_1[0xb] = 0;
  if ((param_3 & 1) != 0) {
    FUN_004cb550(param_1,in_stack_0000001c,'\x01');
  }
  *in_FS_OFFSET = uVar1;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb3b4  FUN_004cb3b4   (88 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb3b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51274c);
  FUN_004cba5c(param_1);
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[1] = param_3;
  *param_1 = 0x10;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb40c  FUN_004cb40c   (24 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb40c(undefined4 *param_1,undefined4 *param_2)

{
  FUN_004cb424(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb424  FUN_004cb424   (107 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb424(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[10] = param_2[10];
  puVar3 = param_2;
  puVar4 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004cb794((int)param_1);
  if (param_2[0xb] != 0) {
    strlen((uint *)param_2[0xb]);
    uVar1 = operator_new_array();
    operator_delete_array();
    param_1[0xb] = uVar1;
    FUN_004dc9c4((char *)param_1[0xb],(char *)param_2[0xb]);
    param_1[4] = param_1[0xb];
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb490  FUN_004cb490   (124 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb490(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [11];
  undefined4 local_28;
  undefined2 local_18;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x512770);
  local_5c = *(undefined4 *)(param_2 + 4);
  local_58 = param_4;
  puVar3 = local_54;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uVar1 = FUN_004a76a8(**(int **)(param_2 + 0x28),0x1100,0,(LPARAM)&local_5c);
  local_18 = 8;
  FUN_004cb3b4(param_1,*(undefined4 *)(param_2 + 0x28),uVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb50c  FUN_004cb50c   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004cb50c(uint *param_1,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*param_1 & 8) == 0)) {
    *param_1 = *param_1 | 8;
    in_EAX = FUN_004a76a8(*(int *)param_1[10],0x110c,0,(LPARAM)param_1);
    if (in_EAX == 0) {
      *param_1 = *param_1 & 0xfffffff7;
      return 0;
    }
  }
  *param_2 = param_1[2];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb550  FUN_004cb550   (153 bytes)   [unnamed]
uint __cdecl FUN_004cb550(uint *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = strlen(param_2);
  if ((char *)param_1[5] < pcVar1 + 1) {
    FUN_004cb794((int)param_1);
  }
  if (param_1[0xb] == 0) {
    strlen(param_2);
    uVar2 = operator_new_array();
    operator_delete_array();
    param_1[0xb] = uVar2;
  }
  pcVar1 = strlen(param_2);
  FUN_004dcc40((undefined4 *)param_1[0xb],param_2,pcVar1 + 1);
  param_1[4] = param_1[0xb];
  param_1[5] = (uint)(pcVar1 + 1);
  *param_1 = *param_1 | 1;
  if (param_3 == '\0') {
    uVar2 = CONCAT31((int3)(param_1[0xb] >> 8),1);
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)param_1[10],0x110d,0,(LPARAM)param_1);
    uVar2 = (uint)(iVar3 != 0);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb5ec  FUN_004cb5ec   (58 bytes)   [unnamed]
bool __cdecl FUN_004cb5ec(uint *param_1,uint param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = *param_1 | 2;
  param_1[6] = param_2;
  if (param_3 == '\0') {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_004a76a8(*(int *)param_1[10],0x110d,0,(LPARAM)param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb628  FUN_004cb628   (58 bytes)   [unnamed]
bool __cdecl FUN_004cb628(uint *param_1,uint param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = *param_1 | 0x20;
  param_1[7] = param_2;
  if (param_3 == '\0') {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_004a76a8(*(int *)param_1[10],0x110d,0,(LPARAM)param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb664  FUN_004cb664   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004cb664(uint *param_1,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*param_1 & 4) == 0)) {
    *param_1 = *param_1 | 4;
    in_EAX = FUN_004a76a8(*(int *)param_1[10],0x110c,0,(LPARAM)param_1);
    if (in_EAX == 0) {
      *param_1 = *param_1 & 0xfffffffb;
      return 0;
    }
  }
  *param_2 = param_1[9];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb6a8  FUN_004cb6a8   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004cb6a8(uint *param_1,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*param_1 & 0x40) == 0)) {
    *param_1 = *param_1 | 0x40;
    in_EAX = FUN_004a76a8(*(int *)param_1[10],0x110c,0,(LPARAM)param_1);
    if (in_EAX == 0) {
      *param_1 = *param_1 & 0xffffffbf;
      return 0;
    }
  }
  *param_2 = param_1[8];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb6ec  FUN_004cb6ec   (165 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb6ec(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_34;
  int local_30;
  int *local_c;
  
  __InitExceptBlockLDTC(0x5127b0);
  FUN_004cb3b4(&local_34,param_2,0xffff0000);
  if (local_30 == -0x10000) {
    local_30 = 0;
  }
  uVar1 = FUN_004a76a8(*local_c,0x110a,9,local_30);
  FUN_004cb3b4(param_1,local_c,uVar1);
  operator_delete_array();
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb794  FUN_004cb794   (25 bytes)   [unnamed]
void __cdecl FUN_004cb794(int param_1)

{
  operator_delete_array();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb7d0  FUN_004cb7d0   (356 bytes)   [unnamed]
int * __cdecl FUN_004cb7d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x5127fc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004bf9d8(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TTreeWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0051297c;
  *(undefined ***)param_1[2] = &PTR_LAB_00512988;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00512994;
  bVar1 = FUN_00487180();
  if (!bVar1) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_00487348;
    uVar2 = 0;
    FUN_00487190(local_10);
    FUN_004e7cc4((uint *)&DAT_004872f0,local_10,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba44  FUN_004cba44   (21 bytes)   [unnamed]
void __cdecl FUN_004cba44(undefined4 *param_1)

{
  memset(param_1,0,0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba5c  FUN_004cba5c   (44 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cba5c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512840);
  FUN_004cba44(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba88  FUN_004cba88   (59 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cba88(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_28;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x512848);
  FUN_004cba44(param_1);
  puVar2 = (undefined4 *)&GHIDRA_STACK(0x00000008);
  puVar3 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbac4  FUN_004cbac4   (59 bytes)   [unnamed]
uint * __cdecl FUN_004cbac4(uint *param_1,uint *param_2,char *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512850);
  FUN_004cba44(param_1);
  FUN_004cbb00(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb00  FUN_004cbb00   (71 bytes)   [unnamed]
void __cdecl FUN_004cbb00(uint *param_1,uint *param_2,char *param_3)

{
  char *pcVar1;
  char **ppcVar2;
  char *local_8;
  
  *param_1 = *param_1 | 1;
  param_1[4] = (uint)param_2;
  if ((int)param_3 < 0) {
    pcVar1 = strlen(param_2);
    pcVar1 = pcVar1 + 1;
  }
  else {
    pcVar1 = strlen(param_2);
    local_8 = pcVar1 + 1;
    if (param_3 < pcVar1 + 1) {
      ppcVar2 = &local_8;
    }
    else {
      ppcVar2 = &param_3;
    }
    pcVar1 = *ppcVar2;
  }
  param_1[5] = (uint)pcVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb48  FUN_004cbb48   (20 bytes)   [unnamed]
undefined4 __cdecl FUN_004cbb48(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb5c  FUN_004cbb5c   (17 bytes)   [unnamed]
void __cdecl FUN_004cbb5c(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 4;
  param_1[9] = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb70  FUN_004cbb70   (17 bytes)   [unnamed]
void __cdecl FUN_004cbb70(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 2;
  param_1[6] = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb84  FUN_004cbb84   (17 bytes)   [unnamed]
void __cdecl FUN_004cbb84(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | 0x20;
  param_1[7] = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbb98  FUN_004cbb98   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cbb98(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512858);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TTreeWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00473698,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbc00  FUN_004cbc00   (284 bytes)   [unnamed]
int * __cdecl FUN_004cbc00(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512870);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004bff9c(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TTreeWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0051297c;
  *(undefined ***)param_1[2] = &PTR_LAB_00512988;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00512994;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbd50  FUN_004cbd50   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cbd50(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x5128a4);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004cbc00(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004cbb98(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbedc  GetDocTemplateHead   (31 bytes)   [unnamed]
undefined * __stdcall GetDocTemplateHead(uint param_1)

{
  undefined *puVar1;
  
                    /* 0xcbedc  3  GetDocTemplateHead */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00512a20;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbefc  GetModulePtr   (31 bytes)   [unnamed]
undefined4 * __stdcall GetModulePtr(uint param_1)

{
  undefined4 *puVar1;
  
                    /* 0xcbefc  4  GetModulePtr */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00512a1c;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbf28  FUN_004cbf28   (65 bytes)   [unnamed]
void __stdcall FUN_004cbf28(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x512a25);
  if (DAT_00512a24 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b9e4,2);
    DAT_00512a24 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbf6c  FUN_004cbf6c   (223 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_004cbf6c(HMODULE param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint local_130 [65];
  undefined4 local_2c;
  undefined2 local_1c;
  
  __InitExceptBlockLDTC(0x512a74);
  if ((*(undefined * *)&DAT_00512a1c) == (undefined *)0x0) {
    GetModuleFileNameA(param_1,(LPSTR)local_130,0x104);
    if (DAT_00512a24 == '\0') {
      local_1c = 8;
      FUN_004c09ac((undefined4 *)&DAT_0051b9e4,local_130,param_1,'\x01');
      DAT_00512a24 = DAT_00512a24 + '\x01';
    }
    (*(undefined * *)&DAT_00512a1c) = &DAT_0051b9e4;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00512a2d;
  }
  DAT_0051b78c = param_1;
  DAT_0051b790 = param_2;
  if (param_3 != (uint *)0x0) {
    puVar1 = FUN_004a8c00();
    FUN_004cf41c((int)puVar1,param_3);
  }
  DAT_0051b794 = param_4;
  local_1c = 0x14;
  FUN_004755ac();
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea

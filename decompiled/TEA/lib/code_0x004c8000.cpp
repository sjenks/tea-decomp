// TEA.exe — runtime / library code "code_0x004c8000"
// 81 functions, 0x004c8120..0x004cbf6c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
  int i;
  tagRECT *pRect;
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
  tagRECT rect;
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
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a30(*param_1,&rect);
    pRect = &rect;
    pLVar6 = local_38;
    for (i = 4; i != 0; i = i + -1) {
      *pLVar6 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
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
  BOOL ok;
  HWND hWnd;
  HWND hWnd2;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (ok = IsIconic(*(HWND *)(*param_1 + 0xc)), ok == 0)) {
    hWnd = GetFocus();
    hWnd2 = GetActiveWindow();
    if ((hWnd2 != *(HWND *)(*param_1 + 0xc)) && (hWnd != *(HWND *)(*param_1 + 0xc))) {
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
  BOOL ok;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (ok = IsIconic(*(HWND *)(*param_1 + 0xc)), ok == 0)) {
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
  int i;
  int *piVar2;
  RECT *pRect;
  int *piVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  int local_dc [4];
  int pRect2 [4];
  int local_bc [4];
  RECT rect;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int x2;
  int y2;
  int local_84;
  int local_80;
  int local_7c [4];
  RECT rect2;
  tagPOINT pt;
  int local_54;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HDC windowDC [10];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x511cc0);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    local_dc[0] = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    ehContext = 8;
    FUN_004a8674((int *)windowDC,*(undefined4 *)(*param_1 + 0xc));
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x14;
    if (param_2 == 3) {
      *(undefined4 *)((int)param_1 + 0x2a) = 3;
      if ((char)param_1[8] == '\0') {
        FUN_004c9ad8(&local_9c,param_1);
        local_80 = local_90 + -1;
        local_84 = local_94;
        y2 = local_98 + 1;
        x2 = local_9c + 1;
        PatBlt(windowDC[0],x2,y2,local_94 - x2,local_80 - y2,0x5a0049);
        *(undefined1 *)((int)param_1 + 0x2f) = 1;
        FUN_004a76a8(*param_1,0x112,0xf093,*(int *)(param_3 + 2) << 0x10 | (uint)*param_3);
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          pt.x = 0;
          pt.y = 0;
          GetCursorPos(&pt);
          FUN_004c8154(param_1,&pt.x,&local_54);
          if (local_54 == 3) {
            FUN_004a76a8(*param_1,0x112,0xf103,0);
          }
        }
        if (*(int *)(*param_1 + 0xc) != 0) {
          PatBlt(windowDC[0],x2,y2,local_84 - x2,local_80 - y2,0x5a0049);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2e) = 1;
        SetCapture(*(HWND *)(*param_1 + 0xc));
        FUN_004c9ad8(local_7c,param_1);
        piVar2 = local_7c;
        pRect = &rect2;
        for (i = 4; i != 0; i = i + -1) {
          pRect->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
        }
        FUN_004c8fe0(param_1,(undefined4*)windowDC,&rect2,*(char *)((int)param_1 + 0x2e));
      }
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else if (param_2 == 8) {
      *(undefined4 *)((int)param_1 + 0x2a) = 8;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004c9b28(local_bc,param_1);
      piVar2 = local_bc;
      pRect = &rect;
      for (i = 4; i != 0; i = i + -1) {
        pRect->left = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
      }
      FUN_004c93c0(param_1,(undefined4*)windowDC,&rect,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else if (param_2 == 9) {
      *(undefined4 *)((int)param_1 + 0x2a) = 9;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004c9b94(local_dc,param_1);
      piVar2 = local_dc;
      piVar4 = pRect2;
      for (i = 4; i != 0; i = i + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_004c9490(param_1,(undefined4*)windowDC,pRect2,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      local_dc[0] = 0;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
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
  RECT *pRect;
  int *piVar4;
  undefined4 *sehChainHead;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  int local_bc [4];
  int pRect2 [4];
  int local_9c [4];
  RECT rect;
  int local_7c [4];
  RECT rect2;
  tagPOINT pt;
  int local_54;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int windowDC [10];
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x511d00);
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    pt.x = *param_3;
    pt.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&pt);
    FUN_004c8154(param_1,&pt.x,&local_54);
    bVar5 = local_54 == *(int *)((int)param_1 + 0x2a);
    if (bVar5 != (bool)*(char *)((int)param_1 + 0x2e)) {
      *(bool *)((int)param_1 + 0x2e) = bVar5;
      ehContext = 8;
      FUN_004a8674(windowDC,*(undefined4 *)(*param_1 + 0xc));
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      iVar1 = *(int *)((int)param_1 + 0x2a);
      if (iVar1 == 3) {
        if ((char)param_1[8] != '\0') {
          FUN_004c9ad8(local_7c,param_1);
          piVar2 = local_7c;
          pRect = &rect2;
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            pRect->left = *piVar2;
            piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
            pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
          }
          FUN_004c8fe0(param_1,windowDC,&rect2,*(char *)((int)param_1 + 0x2e));
        }
        uVar7 = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return uVar7;
      }
      if (iVar1 == 8) {
        FUN_004c9b28(local_9c,param_1);
        piVar2 = local_9c;
        pRect = &rect;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRect->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
        }
        FUN_004c93c0(param_1,windowDC,&rect,*(char *)((int)param_1 + 0x2e));
        uVar7 = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return uVar7;
      }
      if (iVar1 == 9) {
        FUN_004c9b94(local_bc,param_1);
        piVar2 = local_bc;
        piVar4 = pRect2;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
        FUN_004c9490(param_1,windowDC,pRect2,*(char *)((int)param_1 + 0x2e));
        local_bc[0] = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return local_bc[0];
      }
      OWL::TWindowDC::_dtor(windowDC,2);
    }
  }
  *sehChainHead = sehPrevFrame;
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
  BOOL ok;
  undefined4 uVar2;
  undefined4 uVar3;
  tagPOINT pt;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    ReleaseCapture();
    FUN_004c87cc(param_1,param_2,param_3);
    pt.x = *param_3;
    pt.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&pt);
    FUN_004c8154(param_1,&pt.x,&local_8);
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
        ok = IsZoomed(*(HWND *)(*param_1 + 0xc));
        if (ok == 0) {
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
  BOOL ok;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (ok == 0) {
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
  BOOL ok;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    return 0;
  }
  if (((param_2 & 0xfff0) == 0xf100) || ((param_2 & 0xfff0) == 0xf090)) {
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (ok == 0) {
      FUN_004c9be4(param_1);
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8c78  FUN_004c8c78   (872 bytes)   [unnamed]
void __cdecl FUN_004c8c78(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  int iVar1;
  LONG LVar2;
  LONG LVar3;
  undefined4 *sehChainHead;
  RECT rect;
  RECT rect2;
  RECT rect3;
  RECT rect4;
  RECT rect5;
  RECT rect6;
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
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HBRUSH brush [2];
  
  __InitExceptBlockLDTC(0x511d40);
  ehContext = 8;
  FUN_004ab84c((uint *)brush,(uint *)&DAT_0051b1bc,'\x01');
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FrameRect((HDC)*param_2,pRect,brush[0]);
  FUN_00494470(&pRect->left,-1,-1);
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  ExtTextOutA((HDC)*param_2,0,0,2,pRect,(LPCSTR)0x0,0,(INT *)0x0);
  if ((4 < pRect->right - pRect->left) && (4 < pRect->bottom - pRect->top)) {
    if (param_4 == '\0') {
      iVar1 = pRect->top;
      local_54 = pRect->right + -1;
      local_58 = pRect->top;
      local_5c = pRect->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      rect4.left = local_5c;
      rect4.top = local_58;
      rect4.right = local_54;
      rect4.bottom = iVar1 + 1;
      ExtTextOutA((HDC)*param_2,0,0,2,&rect4,(LPCSTR)0x0,0,(INT *)0x0);
      iVar1 = pRect->bottom;
      local_64 = pRect->left + 1;
      local_68 = pRect->top + 1;
      local_6c = pRect->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      rect3.left = local_6c;
      rect3.top = local_68;
      rect3.right = local_64;
      rect3.bottom = iVar1 + -1;
      ExtTextOutA((HDC)*param_2,0,0,2,&rect3,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = pRect->bottom;
      local_74 = pRect->right;
      local_78 = pRect->top + 1;
      local_7c = pRect->right + -1;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      rect2.left = local_7c;
      rect2.top = local_78;
      rect2.right = local_74;
      rect2.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&rect2,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = pRect->bottom;
      local_84 = pRect->right + -1;
      local_88 = pRect->bottom + -1;
      iVar1 = pRect->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      rect.top = local_88;
      rect.right = local_84;
      rect.left = iVar1 + 1;
      rect.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    }
    else {
      iVar1 = pRect->top;
      local_38 = pRect->right;
      local_3c = pRect->top;
      local_40 = pRect->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      rect6.left = local_40;
      rect6.top = local_3c;
      rect6.right = local_38;
      rect6.bottom = iVar1 + 1;
      ExtTextOutA((HDC)*param_2,0,0,2,&rect6,(LPCSTR)0x0,0,(INT *)0x0);
      LVar2 = pRect->bottom;
      local_48 = pRect->left + 1;
      local_4c = pRect->top + 1;
      LVar3 = pRect->left;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      rect5.top = local_4c;
      rect5.right = local_48;
      rect5.left = LVar3;
      rect5.bottom = LVar2;
      ExtTextOutA((HDC)*param_2,0,0,2,&rect5,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  ehDtorCount = ehDtorCount + -2;
  OWL::TBrush::_dtor((uint *)brush,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8fe0  FUN_004c8fe0   (407 bytes)   [unnamed]
uint __cdecl FUN_004c8fe0(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  BOOL ok;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT rect;
  undefined1 local_14 [12];
  uint unused;
  
  FUN_004c8c78(param_1,param_2,pRect,param_4);
  if (param_4 != '\0') {
    FUN_00494454(&pRect->left,1,1);
  }
  if (pRect->right - pRect->left < 8) {
    rect.right = (pRect->right - pRect->left) - 3;
  }
  else {
    uVar2 = pRect->right - pRect->left;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    rect.right = ((pRect->right - pRect->left) - iVar3) - 1;
  }
  if (pRect->bottom - pRect->top < 8) {
    rect.bottom = (pRect->bottom - pRect->top) + -3;
  }
  else {
    uVar2 = pRect->bottom - pRect->top;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    rect.bottom = ((pRect->bottom - pRect->top) - iVar3) + -1;
  }
  if ((1 < rect.right) && (1 < rect.bottom)) {
    rect.left = 0;
    rect.top = 0;
    uVar2 = ((pRect->bottom - pRect->top) - rect.bottom) - 1;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    uVar2 = ((pRect->right - pRect->left) - rect.right) - 1;
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    unused = rect.right;
    FUN_00494454(&rect.left,iVar4 + pRect->left,iVar3 + pRect->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_00494454(&rect.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ok = ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    rect.right = rect.right - 1;
    rect.bottom = rect.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),ok != 0,local_14,param_2,&DAT_0051b1ec);
    ok = ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    rect.right = (LONG)(ok != 0);
  }
  return rect.right;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9178  FUN_004c9178   (583 bytes)   [unnamed]
void __cdecl FUN_004c9178(undefined4 param_1,undefined4 *param_2,RECT *pRect)

{
  LONG LVar1;
  LONG LVar2;
  uint uVar3;
  int iVar4;
  undefined4 *sehChainHead;
  RECT rect;
  RECT rect2;
  RECT rect3;
  RECT rect4;
  LONG local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int unused;
  int local_44;
  undefined4 unused2;
  int unused3;
  int unused4;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HBRUSH brush [2];
  
  __InitExceptBlockLDTC(0x511d80);
  pRect->left = pRect->left + 1;
  pRect->top = pRect->top + 1;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  ExtTextOutA((HDC)*param_2,0,0,2,pRect,(LPCSTR)0x0,0,(INT *)0x0);
  uVar3 = (pRect->bottom - pRect->top) - 3;
  rect4.top = (int)uVar3 >> 1;
  if (rect4.top < 0) {
    rect4.top = rect4.top + (uint)((uVar3 & 1) != 0);
  }
  rect4.top = rect4.top + pRect->top;
  rect4.left = pRect->left + 2;
  local_44 = (pRect->right - pRect->left) + -5;
  unused2 = 3;
  rect4.bottom = rect4.top + 3;
  rect4.right = rect4.left + local_44;
  iVar4 = rect4.top + 4;
  local_4c = rect4.right + 1;
  local_50 = rect4.top + 1;
  local_54 = pRect->left + 3;
  unused = rect4.left;
  unused3 = rect4.left;
  unused4 = rect4.top;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  rect3.left = local_54;
  rect3.top = local_50;
  rect3.right = local_4c;
  rect3.bottom = iVar4;
  ExtTextOutA((HDC)*param_2,0,0,2,&rect3,(LPCSTR)0x0,0,(INT *)0x0);
  ehContext = 8;
  FUN_004ab84c((uint *)brush,&DAT_0051b1ec,'\x01');
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FrameRect((HDC)*param_2,&rect4,brush[0]);
  iVar4 = rect4.top + 2;
  local_5c = rect4.right + -1;
  local_60 = rect4.top + 1;
  local_64 = rect4.left + 1;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  rect2.left = local_64;
  rect2.top = local_60;
  rect2.right = local_5c;
  rect2.bottom = iVar4;
  ExtTextOutA((HDC)*param_2,0,0,2,&rect2,(LPCSTR)0x0,0,(INT *)0x0);
  LVar1 = pRect->bottom;
  local_6c = pRect->right + 1;
  local_70 = pRect->top;
  LVar2 = pRect->right;
  (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
  rect.top = local_70;
  rect.right = local_6c;
  rect.left = LVar2;
  rect.bottom = LVar1;
  ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
  ehDtorCount = ehDtorCount + -2;
  OWL::TBrush::_dtor((uint *)brush,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c93c0  FUN_004c93c0   (205 bytes)   [unnamed]
void __cdecl FUN_004c93c0(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  int iVar1;
  int iVar2;
  int x;
  int y;
  int x2;
  int y2;
  
  FUN_004c8c78(param_1,param_2,pRect,param_4);
  if (param_4 != '\0') {
    FUN_00494454(&pRect->left,1,1);
  }
  iVar1 = pRect->right - pRect->left;
  iVar2 = iVar1 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 4;
  }
  y = ((pRect->bottom - pRect->top) + 2) / 3 + pRect->top;
  x2 = pRect->left + (iVar2 >> 2);
  x = (int)(iVar1 + 1U) >> 1;
  if (x < 0) {
    x = x + (uint)((iVar1 + 1U & 1) != 0);
  }
  x = x + x2;
  y2 = y;
  for (; x2 < x; x2 = x2 + 1) {
    MoveToEx((HDC)*param_2,x2,y2,(LPPOINT)0x0);
    LineTo((HDC)*param_2,x,y);
    y2 = y2 + 1;
    x = x + -1;
    y = y + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9490  FUN_004c9490   (6 bytes)   [unnamed]
void __stdcall FUN_004c9490(int *param_1,undefined4 *param_2,int *pRect,char param_4)

{
  BOOL ok;
  int iVar2;
  int iVar3;
  int iVar4;
  int x;
  int y;
  int x2;
  int y2;
  int x3;
  int y3;
  int x4;
  int y4;
  
  FUN_004c8c78(param_1,param_2,(RECT *)pRect,param_4);
  if (param_4 != '\0') {
    FUN_00494454(pRect,1,1);
  }
  y = pRect[3] - pRect[1];
  iVar4 = pRect[2] - *pRect;
  ok = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (ok != 0) {
    iVar2 = y * -3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar3 = iVar4 + 1;
    if (iVar3 < 0) {
      iVar3 = iVar4 + 4;
    }
    y3 = (iVar2 >> 3) + pRect[3];
    x4 = (iVar3 >> 2) + *pRect;
    x3 = (int)(iVar4 + 1U) >> 1;
    if (x3 < 0) {
      x3 = x3 + (uint)((iVar4 + 1U & 1) != 0);
    }
    x3 = x3 + x4;
    y4 = y3;
    for (; x4 < x3; x4 = x4 + 1) {
      MoveToEx((HDC)*param_2,x4,y4,(LPPOINT)0x0);
      LineTo((HDC)*param_2,x3,y3);
      y4 = y4 + 1;
      x3 = x3 + -1;
      y3 = y3 + 1;
    }
  }
  ok = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (ok == 0) {
    y = (y * 2) / 3;
  }
  else {
    y = y * 3;
    if (y < 0) {
      y = y + 7;
    }
    y = y >> 3;
  }
  iVar2 = iVar4 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar4 + 4;
  }
  y = y + pRect[1];
  x2 = (iVar2 >> 2) + *pRect;
  x = (int)(iVar4 + 1U) >> 1;
  if (x < 0) {
    x = x + (uint)((iVar4 + 1U & 1) != 0);
  }
  x = x + x2;
  y2 = y;
  for (; x2 < x; x2 = x2 + 1) {
    MoveToEx((HDC)*param_2,x2,y2,(LPPOINT)0x0);
    LineTo((HDC)*param_2,x,y);
    y2 = y2 + -1;
    x = x + -1;
    y = y + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9496  FUN_004c9496   (417 bytes)   [unnamed]
void __stdcall FUN_004c9496(void)

{
  RECT *pRect;
  undefined4 *puVar2;
  int iVar3;
  BOOL ok;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  
  pRect = *(RECT **)(unaff_EBP + 0x10);
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  FUN_004c8c78(*(undefined4 *)(unaff_EBP + 8),puVar2,pRect,*(char *)(unaff_EBP + 0x14));
  if (*(char *)(unaff_EBP + 0x14) != '\0') {
    FUN_00494454(&pRect->left,1,1);
  }
  *(LONG *)(unaff_EBP + -4) = pRect->bottom - pRect->top;
  iVar7 = pRect->right - pRect->left;
  ok = IsZoomed(*(HWND *)(**(int **)(unaff_EBP + 8) + 0xc));
  if (ok != 0) {
    iVar5 = *(int *)(unaff_EBP + -4) * -3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    iVar6 = iVar7 + 1;
    if (iVar6 < 0) {
      iVar6 = iVar7 + 4;
    }
    *(LONG *)(unaff_EBP + -0x10) = pRect->bottom;
    *(LONG *)(unaff_EBP + -0x14) = pRect->left;
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
  ok = IsZoomed(*(HWND *)(**(int **)(unaff_EBP + 8) + 0xc));
  if (ok == 0) {
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
  iVar3 = pRect->top;
  *(int *)(unaff_EBP + -0x2c) = (iVar6 >> 2) + pRect->left;
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
  BOOL ok;
  HDC hdc;
  char *c;
  uint windowLong;
  int *piVar4;
  RECT *pRect;
  int *piVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  LPCSTR lpString;
  int mode;
  tagSIZE *psizl;
  int local_140 [4];
  int pRect2 [4];
  int local_120 [4];
  RECT rect;
  int local_100 [4];
  RECT rect2;
  int local_e0 [4];
  RECT rect3;
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  RECT rect4;
  tagSIZE size;
  LONG unused;
  LONG unused2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HBRUSH brush [2];
  HDC hdc2;
  int local_27;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x511ddc);
  ehContext = 8;
  FUN_004a8674((int *)&hdc2,*(undefined4 *)(*param_1 + 0xc));
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FUN_004c9a24(&rect4.left,param_1);
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  ok = ExtTextOutA(hdc2,0,0,2,&rect4,(LPCSTR)0x0,0,(INT *)0x0);
  (**(code **)(local_27 + 0x14))
            (&hdc2,local_27,ok != 0,&hdc2,*(undefined4 *)((int)param_1 + 0x26));
  hdc = (HDC)(**(code **)(local_27 + 0x5c))();
  if (hdc != hdc2) {
    SetBkMode(hdc2,1);
  }
  mode = 1;
  hdc = (HDC)(**(code **)(local_27 + 0x5c))();
  SetBkMode(hdc,mode);
  c = strlen(*(uint **)(*param_1 + 0x10));
  lpString = *(LPCSTR *)(*param_1 + 0x10);
  size.cx = 0;
  size.cy = 0;
  psizl = &size;
  hdc = (HDC)(**(code **)(local_27 + 0x5c))();
  GetTextExtentPoint32A(hdc,lpString,(int)c,psizl);
  unused = size.cx;
  unused2 = size.cy;
  windowLong = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if ((windowLong & 0x20000) != 0) {
    FUN_004c9b28(local_90,param_1);
  }
  if ((windowLong & 0x10000) != 0) {
    FUN_004c9b94(local_a0,param_1);
  }
  if (((windowLong & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_004c9ad8(local_b0,param_1);
  }
  if (((windowLong & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_004c9ad8(local_c0,param_1);
  }
  strlen(*(uint **)(*param_1 + 0x10));
  (**(code **)(local_27 + 0x48))();
  (**(code **)(local_27 + 0x1c))();
  (**(code **)(local_27 + 0x18))();
  if ((char)param_1[8] == '\0') {
    if ((windowLong & 0x80000) != 0) {
      FUN_004c9ad8(local_100,param_1);
      piVar4 = local_100;
      pRect = &rect2;
      for (mode = 4; mode != 0; mode = mode + -1) {
        pRect->left = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
      }
      FUN_004c9178(param_1,(undefined4*)&hdc2,&rect2);
    }
  }
  else {
    FUN_004c9ad8(local_e0,param_1);
    piVar4 = local_e0;
    pRect = &rect3;
    for (mode = 4; mode != 0; mode = mode + -1) {
      pRect->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_004c8fe0(param_1,(undefined4*)&hdc2,&rect3,'\0');
  }
  if ((windowLong & 0x20000) != 0) {
    FUN_004c9b28(local_120,param_1);
    piVar4 = local_120;
    pRect = &rect;
    for (mode = 4; mode != 0; mode = mode + -1) {
      pRect->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_004c93c0(param_1,(undefined4*)&hdc2,&rect,'\0');
  }
  if ((windowLong & 0x10000) != 0) {
    FUN_004c9b94(local_140,param_1);
    piVar4 = local_140;
    piVar6 = pRect2;
    for (mode = 4; mode != 0; mode = mode + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_004c9490(param_1,(undefined4*)&hdc2,pRect2,'\0');
  }
  ehContext = 0x20;
  FUN_004ab84c((uint *)brush,(uint *)&DAT_0051b1bc,'\x01');
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FrameRect(hdc2,(RECT *)&GHIDRA_STACK(0xfffffeb0),brush[0]);
  ehDtorCount = ehDtorCount + -2;
  OWL::TBrush::_dtor((uint *)brush,2);
  ehDtorCount = ehDtorCount + -2;
  OWL::TWindowDC::_dtor((int *)&hdc2,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9a24  FUN_004c9a24   (177 bytes)   [unnamed]
int * __cdecl FUN_004c9a24(int *param_1,int *param_2)

{
  int i;
  tagRECT *pRect;
  LONG *pLVar3;
  int *piVar4;
  LONG *pLVar5;
  int *piVar6;
  LONG newStr [4];
  tagRECT rect;
  int local_24 [4];
  int local_14;
  int local_10;
  int unused;
  int unused2;
  
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a30(*param_2,&rect);
  pRect = &rect;
  pLVar3 = newStr;
  for (i = 4; i != 0; i = i + -1) {
    *pLVar3 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar3 = pLVar3 + 1;
  }
  pLVar3 = newStr;
  pLVar5 = local_24;
  for (i = 4; i != 0; i = i + -1) {
    *pLVar5 = *pLVar3;
    pLVar3 = pLVar3 + 1;
    pLVar5 = pLVar5 + 1;
  }
  unused = local_24[0];
  unused2 = local_24[1];
  local_10 = -local_24[1];
  local_14 = -local_24[0];
  FUN_00494454(local_24,local_14,local_10);
  local_24[0] = local_24[0] + param_2[6];
  local_24[1] = local_24[1] + param_2[7];
  local_24[2] = local_24[2] - param_2[6];
  local_24[3] = local_24[1] + *(int *)((int)param_2 + 0x22);
  piVar4 = local_24;
  piVar6 = param_1;
  for (i = 4; i != 0; i = i + -1) {
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
  int i;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9a24(local_24,param_2);
  piVar2 = local_24;
  piVar3 = local_14;
  for (i = 4; i != 0; i = i + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_14[2] = local_14[0] + *(int *)((int)param_2 + 0x22);
  local_14[0] = local_14[0] + -1;
  local_14[1] = local_14[1] + -1;
  piVar2 = local_14;
  piVar3 = param_1;
  for (i = 4; i != 0; i = i + -1) {
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
  uint windowLong;
  int i;
  int *piVar3;
  int *piVar4;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9b94(local_24,param_2);
  piVar3 = local_24;
  piVar4 = local_14;
  for (i = 4; i != 0; i = i + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  windowLong = GetWindowLongA(*(HWND *)(*param_2 + 0xc),-0x10);
  if ((windowLong & 0x10000) != 0) {
    FUN_00494454(local_14,-*(int *)((int)param_2 + 0x22),0);
  }
  piVar3 = local_14;
  piVar4 = param_1;
  for (i = 4; i != 0; i = i + -1) {
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
  int i;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004c9a24(local_24,param_2);
  piVar2 = local_24;
  piVar3 = local_14;
  for (i = 4; i != 0; i = i + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_14[0] = local_14[2] - *(int *)((int)param_2 + 0x22);
  local_14[1] = local_14[1] + -1;
  local_14[2] = local_14[2] + 1;
  piVar2 = local_14;
  piVar3 = param_1;
  for (i = 4; i != 0; i = i + -1) {
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
  uint windowLong;
  BOOL ok;
  int i;
  UINT enable;
  int *piVar5;
  int *piVar6;
  int local_24 [4];
  undefined1 local_14 [16];
  
  hMenu = GetSystemMenu(*(HWND *)(*param_1 + 0xc),0);
  if (hMenu != (HMENU)0x0) {
    windowLong = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if ((ok == 0) && (ok = IsZoomed(*(HWND *)(*param_1 + 0xc)), ok == 0)) {
      enable = 1;
    }
    else {
      enable = 0;
    }
    EnableMenuItem(hMenu,0xf120,enable);
    EnableMenuItem(hMenu,0xf010,0);
    EnableMenuItem(hMenu,0xf000,(uint)((windowLong & 0x40000) == 0));
    if (((windowLong & 0x20000) == 0) || (ok = IsIconic(*(HWND *)(*param_1 + 0xc)), ok != 0)) {
      enable = 1;
    }
    else {
      enable = 0;
    }
    EnableMenuItem(hMenu,0xf020,enable);
    if (((windowLong & 0x10000) == 0) || (ok = IsZoomed(*(HWND *)(*param_1 + 0xc)), ok != 0)) {
      enable = 1;
    }
    else {
      enable = 0;
    }
    EnableMenuItem(hMenu,0xf030,enable);
    FUN_004c9ad8(local_24,param_1);
    piVar5 = local_24;
    piVar6 = (int *)local_14;
    for (i = 4; i != 0; i = i + -1) {
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
// 0x004c9e44  InitRichEditStreamer_4c9e44   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4c9e44(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511f20);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004ca024;
  puVar1 = FUN_004dd5cc(1,0,0x49f8d8);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b974,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c9e9a  FUN_004c9e9a   (48 bytes)   [unnamed]
void __stdcall FUN_004c9e9a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511f34);
  OWL::TStreamableClass::_dtor(0x51b974,2);
  *sehChainHead = sehPrevFrame;
  return;
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
undefined4 * __cdecl FUN_004ca024(int *validator)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511f88);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((validator == (int *)0x0) && (validator = (int *)operator_new(), validator != (int *)0x0)) {
      OWL::TValidator::TValidator(validator);
    }
    OWL::TValidator::Streamer::Streamer(streamer,validator);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51210c);
  *param_3 = 0;
  if (param_2 == 0) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      OWL::TSeparatorGadget::TSeparatorGadget(piVar1,0,0,1);
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    *param_3 = 1;
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      OWL::TButtonGadget::TButtonGadget(piVar1,param_1,param_2,'\0',0,0,'\x01');
    }
    *sehChainHead = sehPrevFrame;
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
  undefined2 regHigh;
  int i;
  undefined4 *sehChainHead;
  undefined1 local_31;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512154);
  for (i = 0; uVar1 = FUN_0049ccf0(param_3), i < CONCAT22(regHigh,uVar1);
      i = i + 1) {
    iVar2 = FUN_0049cd08(param_3);
    if (*(short *)(iVar2 + i * 2) != -1) {
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca5fc  FUN_004ca5fc   (155 bytes)   [unnamed]
void __cdecl FUN_004ca5fc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
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
  undefined4 *barDescr;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  barDescr = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x5121d4);
  if (barDescr != (undefined4 *)0x0) {
    *barDescr = &OWL::TBarDescr::vftable;
    *(undefined4 *)(unaff_EBP + -4) = barDescr[0xc];
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
    *(undefined4 *)(unaff_EBP + -8) = barDescr[7];
    if (*(int *)(unaff_EBP + -8) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x44;
      OWL::TToolbarRes::_dtor(*(undefined4 **)(unaff_EBP + -8),3);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x38;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = barDescr[8];
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
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ca784  FUN_004ca784   (74 bytes)   [unnamed]
void __cdecl FUN_004ca784(int param_1,char param_2)

{
  int i;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51223c);
  if (param_2 != '\0') {
    for (i = 0; i < *(int *)(param_1 + 1); i = i + 1) {
      OWL::__TBarDescrGdNode::_dtor(*(int **)(*(int *)(param_1 + 9) + i * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004caef4  FUN_004caef4   (108 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004caef4(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb044  FUN_004cb044   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004cb044(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5122e0);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512305);
  if (DAT_005122f4 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b984,2);
    DAT_005122f4 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb108  FUN_004cb108   (88 bytes)   [unnamed]
undefined * __stdcall FUN_004cb108(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512440);
  if (DAT_005122f4 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_0051b984,(uint *)"SHELL32.DLL",'\x01','\x01','\0');
    DAT_005122f4 = DAT_005122f4 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
// 0x004cb2a0  InitRichEditStreamer_4cb2a0   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4cb2a0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5126e0);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004cbd50;
  puVar1 = FUN_004dd5cc(1,0,0x473698);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b9d4,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb2f6  FUN_004cb2f6   (48 bytes)   [unnamed]
void __stdcall FUN_004cb2f6(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5126f4);
  OWL::TStreamableClass::_dtor(0x51b9d4,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb348  FUN_004cb348   (108 bytes)   [unnamed]
uint * __cdecl FUN_004cb348(uint *param_1,uint param_2,byte param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *sehChainHead;
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
  *sehChainHead = uVar1;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb3b4  FUN_004cb3b4   (88 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb3b4(undefined4 *dest,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51274c);
  FUN_004cba5c(dest);
  dest[10] = param_2;
  dest[0xb] = 0;
  dest[1] = param_3;
  *dest = 0x10;
  *sehChainHead = sehPrevFrame;
  return dest;
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
  int i;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[10] = param_2[10];
  puVar3 = param_2;
  puVar4 = param_1;
  for (i = 10; i != 0; i = i + -1) {
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
undefined4 * __cdecl FUN_004cb490(undefined4 *dest,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int i;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  undefined4 lParam;
  undefined4 unused;
  undefined4 newStr [11];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x512770);
  lParam = *(undefined4 *)(param_2 + 4);
  unused = param_4;
  puVar3 = newStr;
  for (i = 10; i != 0; i = i + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uVar1 = FUN_004a76a8(**(int **)(param_2 + 0x28),0x1100,0,(LPARAM)&lParam);
  ehContext = 8;
  FUN_004cb3b4(dest,*(undefined4 *)(param_2 + 0x28),uVar1);
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb50c  FUN_004cb50c   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004cb50c(uint *lParam,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*lParam & 8) == 0)) {
    *lParam = *lParam | 8;
    in_EAX = FUN_004a76a8(*(int *)lParam[10],0x110c,0,(LPARAM)lParam);
    if (in_EAX == 0) {
      *lParam = *lParam & 0xfffffff7;
      return 0;
    }
  }
  *param_2 = lParam[2];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb550  FUN_004cb550   (153 bytes)   [unnamed]
uint __cdecl FUN_004cb550(uint *lParam,uint *param_2,char param_3)

{
  char *len;
  uint uVar2;
  int iVar3;
  
  len = strlen(param_2);
  if ((char *)lParam[5] < len + 1) {
    FUN_004cb794((int)lParam);
  }
  if (lParam[0xb] == 0) {
    strlen(param_2);
    uVar2 = operator_new_array();
    operator_delete_array();
    lParam[0xb] = uVar2;
  }
  len = strlen(param_2);
  strncpy((undefined4 *)lParam[0xb],param_2,len + 1);
  lParam[4] = lParam[0xb];
  lParam[5] = (uint)(len + 1);
  *lParam = *lParam | 1;
  if (param_3 == '\0') {
    uVar2 = CONCAT31((int3)(lParam[0xb] >> 8),1);
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)lParam[10],0x110d,0,(LPARAM)lParam);
    uVar2 = (uint)(iVar3 != 0);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb5ec  FUN_004cb5ec   (58 bytes)   [unnamed]
bool __cdecl FUN_004cb5ec(uint *lParam,uint param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  
  *lParam = *lParam | 2;
  lParam[6] = param_2;
  if (param_3 == '\0') {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_004a76a8(*(int *)lParam[10],0x110d,0,(LPARAM)lParam);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb628  FUN_004cb628   (58 bytes)   [unnamed]
bool __cdecl FUN_004cb628(uint *lParam,uint param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  
  *lParam = *lParam | 0x20;
  lParam[7] = param_2;
  if (param_3 == '\0') {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_004a76a8(*(int *)lParam[10],0x110d,0,(LPARAM)lParam);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb664  FUN_004cb664   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004cb664(uint *lParam,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*lParam & 4) == 0)) {
    *lParam = *lParam | 4;
    in_EAX = FUN_004a76a8(*(int *)lParam[10],0x110c,0,(LPARAM)lParam);
    if (in_EAX == 0) {
      *lParam = *lParam & 0xfffffffb;
      return 0;
    }
  }
  *param_2 = lParam[9];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb6a8  FUN_004cb6a8   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_004cb6a8(uint *lParam,uint *param_2,char param_3)

{
  int in_EAX;
  
  if ((param_3 != '\0') || ((*lParam & 0x40) == 0)) {
    *lParam = *lParam | 0x40;
    in_EAX = FUN_004a76a8(*(int *)lParam[10],0x110c,0,(LPARAM)lParam);
    if (in_EAX == 0) {
      *lParam = *lParam & 0xffffffbf;
      return 0;
    }
  }
  *param_2 = lParam[8];
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cb6ec  FUN_004cb6ec   (165 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cb6ec(undefined4 *dest,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 dest2;
  int lParam;
  int *local_c;
  
  __InitExceptBlockLDTC(0x5127b0);
  FUN_004cb3b4(&dest2,param_2,0xffff0000);
  if (lParam == -0x10000) {
    lParam = 0;
  }
  uVar1 = FUN_004a76a8(*local_c,0x110a,9,lParam);
  FUN_004cb3b4(dest,local_c,uVar1);
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return dest;
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
// 0x004cba44  FUN_004cba44   (21 bytes)   [unnamed]
void __cdecl FUN_004cba44(undefined4 *dest)

{
  memset(dest,0,0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba5c  FUN_004cba5c   (44 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cba5c(undefined4 *dest)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512840);
  FUN_004cba44(dest);
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cba88  FUN_004cba88   (59 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cba88(undefined4 *dest)

{
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  undefined4 sehPrevFrame;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x512848);
  FUN_004cba44(dest);
  puVar2 = (undefined4 *)&GHIDRA_STACK(0x00000008);
  puVar3 = dest;
  for (i = 10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbac4  FUN_004cbac4   (59 bytes)   [unnamed]
uint * __cdecl FUN_004cbac4(uint *dest,uint *param_2,char *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512850);
  FUN_004cba44(dest);
  FUN_004cbb00(dest,param_2,param_3);
  *sehChainHead = sehPrevFrame;
  return dest;
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
// 0x004cbd50  FUN_004cbd50   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cbd50(int *param_1)

{
  undefined4 *streamer;
  int *treeWindow;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5128a4);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      treeWindow = (int *)operator_new();
      if (treeWindow == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TTreeWindow::TTreeWindow_4cbc00(treeWindow,0);
        param_1 = (int *)treeWindow[2];
      }
    }
    OWL::TTreeWindow::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512a25);
  if (DAT_00512a24 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b9e4,2);
    DAT_00512a24 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cbf6c  FUN_004cbf6c   (223 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_004cbf6c(HMODULE hModule,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *str;
  undefined4 *sehChainHead;
  uint filename [65];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x512a74);
  if ((*(undefined * *)&DAT_00512a1c) == (undefined *)0x0) {
    GetModuleFileNameA(hModule,(LPSTR)filename,0x104);
    if (DAT_00512a24 == '\0') {
      ehContext = 8;
      OWL::TModule::TModule_4c09ac((undefined4 *)&DAT_0051b9e4,filename,hModule,'\x01');
      DAT_00512a24 = DAT_00512a24 + '\x01';
    }
    (*(undefined * *)&DAT_00512a1c) = &DAT_0051b9e4;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00512a2d;
  }
  DAT_0051b78c = hModule;
  DAT_0051b790 = param_2;
  if (param_3 != (uint *)0x0) {
    str = FUN_004a8c00();
    std::string::assign_cstr((int)str,param_3);
  }
  DAT_0051b794 = param_4;
  ehContext = 0x14;
  OwlMain();
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

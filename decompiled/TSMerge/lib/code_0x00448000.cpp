// TSMerge.exe — runtime / library code "code_0x00448000"
// 84 functions, 0x004481a8..0x0044bf28. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
  BOOL ok;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (ok = IsIconic(*(HWND *)(*param_1 + 0xc)), ok == 0)) {
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
  __InitExceptBlockLDTC(0x47003c);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    local_dc[0] = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    ehContext = 8;
    FUN_0042e1ac((int *)windowDC,*(undefined4 *)(*param_1 + 0xc));
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x14;
    if (param_2 == 3) {
      *(undefined4 *)((int)param_1 + 0x2a) = 3;
      if ((char)param_1[8] == '\0') {
        FUN_0044993c(&local_9c,param_1);
        local_80 = local_90 + -1;
        local_84 = local_94;
        y2 = local_98 + 1;
        x2 = local_9c + 1;
        PatBlt(windowDC[0],x2,y2,local_94 - x2,local_80 - y2,0x5a0049);
        *(undefined1 *)((int)param_1 + 0x2f) = 1;
        FUN_0042d1a4(*param_1,0x112,0xf093,*(int *)(param_3 + 2) << 0x10 | (uint)*param_3);
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          pt.x = 0;
          pt.y = 0;
          GetCursorPos(&pt);
          FUN_00447fb8(param_1,&pt.x,&local_54);
          if (local_54 == 3) {
            FUN_0042d1a4(*param_1,0x112,0xf103,0);
          }
        }
        if (*(int *)(*param_1 + 0xc) != 0) {
          PatBlt(windowDC[0],x2,y2,local_84 - x2,local_80 - y2,0x5a0049);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2e) = 1;
        SetCapture(*(HWND *)(*param_1 + 0xc));
        FUN_0044993c(local_7c,param_1);
        piVar2 = local_7c;
        pRect = &rect2;
        for (i = 4; i != 0; i = i + -1) {
          pRect->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
        }
        FUN_00448e44(param_1,(undefined4*)windowDC,&rect2,*(char *)((int)param_1 + 0x2e));
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
      FUN_0044998c(local_bc,param_1);
      piVar2 = local_bc;
      pRect = &rect;
      for (i = 4; i != 0; i = i + -1) {
        pRect->left = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
      }
      FUN_00449224(param_1,(undefined4*)windowDC,&rect,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else if (param_2 == 9) {
      *(undefined4 *)((int)param_1 + 0x2a) = 9;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_004499f8(local_dc,param_1);
      piVar2 = local_dc;
      piVar4 = pRect2;
      for (i = 4; i != 0; i = i + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_004492f4(param_1,(undefined4*)windowDC,pRect2,*(char *)((int)param_1 + 0x2e));
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
  __InitExceptBlockLDTC(0x47007c);
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    pt.x = *param_3;
    pt.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&pt);
    FUN_00447fb8(param_1,&pt.x,&local_54);
    bVar5 = local_54 == *(int *)((int)param_1 + 0x2a);
    if (bVar5 != (bool)*(char *)((int)param_1 + 0x2e)) {
      *(bool *)((int)param_1 + 0x2e) = bVar5;
      ehContext = 8;
      FUN_0042e1ac(windowDC,*(undefined4 *)(*param_1 + 0xc));
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      iVar1 = *(int *)((int)param_1 + 0x2a);
      if (iVar1 == 3) {
        if ((char)param_1[8] != '\0') {
          FUN_0044993c(local_7c,param_1);
          piVar2 = local_7c;
          pRect = &rect2;
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            pRect->left = *piVar2;
            piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
            pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
          }
          FUN_00448e44(param_1,windowDC,&rect2,*(char *)((int)param_1 + 0x2e));
        }
        uVar7 = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return uVar7;
      }
      if (iVar1 == 8) {
        FUN_0044998c(local_9c,param_1);
        piVar2 = local_9c;
        pRect = &rect;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRect->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
        }
        FUN_00449224(param_1,windowDC,&rect,*(char *)((int)param_1 + 0x2e));
        uVar7 = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return uVar7;
      }
      if (iVar1 == 9) {
        FUN_004499f8(local_bc,param_1);
        piVar2 = local_bc;
        piVar4 = pRect2;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
        FUN_004492f4(param_1,windowDC,pRect2,*(char *)((int)param_1 + 0x2e));
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
  BOOL ok;
  undefined4 uVar2;
  undefined4 uVar3;
  tagPOINT pt;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    ReleaseCapture();
    FUN_00448630(param_1,param_2,param_3);
    pt.x = *param_3;
    pt.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&pt);
    FUN_00447fb8(param_1,&pt.x,&local_8);
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
        ok = IsZoomed(*(HWND *)(*param_1 + 0xc));
        if (ok == 0) {
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
  BOOL ok;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (ok == 0) {
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
  BOOL ok;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    return 0;
  }
  if (((param_2 & 0xfff0) == 0xf100) || ((param_2 & 0xfff0) == 0xf090)) {
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (ok == 0) {
      FUN_00449a48(param_1);
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448adc  FUN_00448adc   (872 bytes)   [unnamed]
void __cdecl FUN_00448adc(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

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
  
  __InitExceptBlockLDTC(0x4700bc);
  ehContext = 8;
  FUN_00431320((uint *)brush,(uint *)&DAT_00476bcc,'\x01');
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FrameRect((HDC)*param_2,pRect,brush[0]);
  FUN_0041d740(&pRect->left,-1,-1);
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
// 0x00448e44  FUN_00448e44   (407 bytes)   [unnamed]
uint __cdecl FUN_00448e44(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  BOOL ok;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT rect;
  undefined1 local_14 [12];
  uint unused;
  
  FUN_00448adc(param_1,param_2,pRect,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(&pRect->left,1,1);
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
    FUN_0041d724(&rect.left,iVar4 + pRect->left,iVar3 + pRect->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_0041d724(&rect.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ok = ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    rect.right = rect.right - 1;
    rect.bottom = rect.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),ok != 0,local_14,param_2,&DAT_00476bfc);
    ok = ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    rect.right = (LONG)(ok != 0);
  }
  return rect.right;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448fdc  FUN_00448fdc   (583 bytes)   [unnamed]
void __cdecl FUN_00448fdc(undefined4 param_1,undefined4 *param_2,RECT *pRect)

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
  
  __InitExceptBlockLDTC(0x4700fc);
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
  FUN_00431320((uint *)brush,(uint *)&DAT_00476bfc,'\x01');
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
// 0x00449224  FUN_00449224   (205 bytes)   [unnamed]
void __cdecl FUN_00449224(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  int iVar1;
  int iVar2;
  int x;
  int y;
  int x2;
  int y2;
  
  FUN_00448adc(param_1,param_2,pRect,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(&pRect->left,1,1);
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
// 0x004492f4  FUN_004492f4   (6 bytes)   [unnamed]
void __stdcall FUN_004492f4(int *param_1,undefined4 *param_2,int *pRect,char param_4)

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
  
  FUN_00448adc(param_1,param_2,(RECT *)pRect,param_4);
  if (param_4 != '\0') {
    FUN_0041d724(pRect,1,1);
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
// 0x004492fa  FUN_004492fa   (417 bytes)   [unnamed]
void __stdcall FUN_004492fa(void)

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
  FUN_00448adc(*(undefined4 *)(unaff_EBP + 8),puVar2,pRect,*(char *)(unaff_EBP + 0x14));
  if (*(char *)(unaff_EBP + 0x14) != '\0') {
    FUN_0041d724(&pRect->left,1,1);
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
// 0x0044949c  FUN_0044949c   (1001 bytes)   [unnamed]
void __cdecl FUN_0044949c(int *param_1)

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
  __InitExceptBlockLDTC(0x470158);
  ehContext = 8;
  FUN_0042e1ac((int *)&hdc2,*(undefined4 *)(*param_1 + 0xc));
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FUN_00449888(&rect4.left,param_1);
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
    FUN_0044998c(local_90,param_1);
  }
  if ((windowLong & 0x10000) != 0) {
    FUN_004499f8(local_a0,param_1);
  }
  if (((windowLong & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_0044993c(local_b0,param_1);
  }
  if (((windowLong & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_0044993c(local_c0,param_1);
  }
  strlen(*(uint **)(*param_1 + 0x10));
  (**(code **)(local_27 + 0x48))();
  (**(code **)(local_27 + 0x1c))();
  (**(code **)(local_27 + 0x18))();
  if ((char)param_1[8] == '\0') {
    if ((windowLong & 0x80000) != 0) {
      FUN_0044993c(local_100,param_1);
      piVar4 = local_100;
      pRect = &rect2;
      for (mode = 4; mode != 0; mode = mode + -1) {
        pRect->left = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
      }
      FUN_00448fdc(param_1,(undefined4*)&hdc2,&rect2);
    }
  }
  else {
    FUN_0044993c(local_e0,param_1);
    piVar4 = local_e0;
    pRect = &rect3;
    for (mode = 4; mode != 0; mode = mode + -1) {
      pRect->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_00448e44(param_1,(undefined4*)&hdc2,&rect3,'\0');
  }
  if ((windowLong & 0x20000) != 0) {
    FUN_0044998c(local_120,param_1);
    piVar4 = local_120;
    pRect = &rect;
    for (mode = 4; mode != 0; mode = mode + -1) {
      pRect->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_00449224(param_1,(undefined4*)&hdc2,&rect,'\0');
  }
  if ((windowLong & 0x10000) != 0) {
    FUN_004499f8(local_140,param_1);
    piVar4 = local_140;
    piVar6 = pRect2;
    for (mode = 4; mode != 0; mode = mode + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_004492f4(param_1,(undefined4*)&hdc2,pRect2,'\0');
  }
  ehContext = 0x20;
  FUN_00431320((uint *)brush,(uint *)&DAT_00476bcc,'\x01');
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
// 0x00449888  FUN_00449888   (177 bytes)   [unnamed]
int * __cdecl FUN_00449888(int *param_1,int *param_2)

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
  FUN_0042d52c(*param_2,&rect);
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
  FUN_0041d724(local_24,local_14,local_10);
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
// 0x0044993c  FUN_0044993c   (79 bytes)   [unnamed]
int * __cdecl FUN_0044993c(int *param_1,int *param_2)

{
  int i;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00449888(local_24,param_2);
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
// 0x0044998c  FUN_0044998c   (105 bytes)   [unnamed]
int * __cdecl FUN_0044998c(int *param_1,int *param_2)

{
  uint windowLong;
  int i;
  int *piVar3;
  int *piVar4;
  int local_24 [4];
  int local_14 [4];
  
  FUN_004499f8(local_24,param_2);
  piVar3 = local_24;
  piVar4 = local_14;
  for (i = 4; i != 0; i = i + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  windowLong = GetWindowLongA(*(HWND *)(*param_2 + 0xc),-0x10);
  if ((windowLong & 0x10000) != 0) {
    FUN_0041d724(local_14,-*(int *)((int)param_2 + 0x22),0);
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
// 0x004499f8  FUN_004499f8   (79 bytes)   [unnamed]
int * __cdecl FUN_004499f8(int *param_1,int *param_2)

{
  int i;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00449888(local_24,param_2);
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
// 0x00449a48  FUN_00449a48   (353 bytes)   [unnamed]
void __cdecl FUN_00449a48(int *param_1)

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
    FUN_0044993c(local_24,param_1);
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
// 0x00449ca8  InitRichEditStreamer_449ca8   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_449ca8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47029c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00449e88;
  puVar1 = FUN_0045666c(1,0,0x425ac0);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477358,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00449cfe  FUN_00449cfe   (48 bytes)   [unnamed]
void __stdcall FUN_00449cfe(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4702b0);
  OWL::TStreamableClass::_dtor(0x477358,2);
  *sehChainHead = sehPrevFrame;
  return;
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
undefined4 * __cdecl FUN_00449e88(int *validator)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470304);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470488);
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
// 0x0044a2aa  FUN_0044a2aa   (246 bytes)   [unnamed]
void __cdecl FUN_0044a2aa(int param_1,int param_2,int param_3)

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
  
  __InitExceptBlockLDTC(0x4704d0);
  for (i = 0; uVar1 = FUN_00424690(param_3), i < CONCAT22(regHigh,uVar1);
      i = i + 1) {
    iVar2 = FUN_004246a8(param_3);
    if (*(short *)(iVar2 + i * 2) != -1) {
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044a424  FUN_0044a424   (155 bytes)   [unnamed]
void __cdecl FUN_0044a424(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
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
  undefined4 *barDescr;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  barDescr = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x470550);
  if (barDescr != (undefined4 *)0x0) {
    *barDescr = &OWL::TBarDescr::vftable;
    *(undefined4 *)(unaff_EBP + -4) = barDescr[0xc];
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
// 0x0044a5ac  FUN_0044a5ac   (74 bytes)   [unnamed]
void __cdecl FUN_0044a5ac(int param_1,char param_2)

{
  int i;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4705b8);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ad1c  FUN_0044ad1c   (108 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0044ad1c(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ae6c  FUN_0044ae6c   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0044ae6c(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47065c);
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
// 0x0044aef2  FUN_0044aef2   (225 bytes)   [unnamed]
undefined4 * __stdcall FUN_0044aef2(void)

{
  undefined4 *puVar1;
  undefined4 *logicError;
  int iVar3;
  int refs;
  int *newRep;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  logicError = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x470670);
  *logicError = &std::exception::vftable;
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  puVar1 = logicError + 2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  logicError[4] = *(undefined4 *)(unaff_EBP + -0x28);
  refs = *(int *)(*(int *)(iVar3 + 0x10) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + -4);
    newRep = std::string::__getRep(puVar1,*(uint *)(unaff_EBP + -0x38),*(uint *)(unaff_EBP + -0x38));
    *(int **)(unaff_EBP + -0x40) = newRep;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x40) + 0xc;
    logicError[4] = *(undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 **)(unaff_EBP + -0x44) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x44) + 8);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x50) = logicError[4];
    memcpy(*(undefined4 **)(unaff_EBP + -0x50),*(undefined4 **)(unaff_EBP + -0x4c),
                 *(uint *)(unaff_EBP + -0x48));
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x10);
    logicError[4] = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8);
    *(int *)(unaff_EBP + -0x34) = logicError[4] + -0xc;
    if (*(undefined4 **)(unaff_EBP + -0x34) != &g_nullStringRep) {
      **(int **)(unaff_EBP + -0x34) = **(int **)(unaff_EBP + -0x34) + 1;
    }
  }
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  *logicError = &std::logic_error::vftable;
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x24);
  return logicError;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044afd4  FUN_0044afd4   (65 bytes)   [unnamed]
void __stdcall FUN_0044afd4(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470695);
  if (DAT_00470684 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_00477368,2);
    DAT_00470684 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b018  FUN_0044b018   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0044b018(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4707d0);
  if (DAT_00470684 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_00477368,(uint *)"SHELL32.DLL",'\x01','\x01','\0');
    DAT_00470684 = DAT_00470684 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470a69);
  if (DAT_00470a68 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_004773b8,2);
    DAT_00470a68 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b17c  FUN_0044b17c   (223 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_0044b17c(HMODULE hModule,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *str;
  undefined4 *sehChainHead;
  uint filename [65];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x470ab8);
  if ((*(undefined * *)&DAT_00470a60) == (undefined *)0x0) {
    GetModuleFileNameA(hModule,(LPSTR)filename,0x104);
    if (DAT_00470a68 == '\0') {
      ehContext = 8;
      OWL::TModule::TModule_443bf8((undefined4 *)&DAT_004773b8,filename,hModule,'\x01');
      DAT_00470a68 = DAT_00470a68 + '\x01';
    }
    (*(undefined * *)&DAT_00470a60) = &DAT_004773b8;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_00470a71;
  }
  DAT_00477190 = hModule;
  DAT_00477194 = param_2;
  if (param_3 != (uint *)0x0) {
    str = FUN_0042e6d8();
    std::string::assign_cstr((int)str,param_3);
  }
  DAT_00477198 = param_4;
  ehContext = 0x14;
  OwlMain();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b2a0  calloc   (43 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414f4c. malloc(n*size) then memset 0
undefined4 * __cdecl calloc(int count,int size)

{
  undefined4 *mem;
  
  mem = (undefined4 *)malloc();
  if (mem != (undefined4 *)0x0) {
    memset(mem,0,count * size);
  }
  return mem;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x470ae8);
  while (iVar1 = malloc(), iVar1 == 0) {
    if (DAT_004773c8 == (code *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_00406864,(undefined4*)&badAlloc,0,&LAB_004068bc,1,0,0,0);
    }
    else {
      ((code *)DAT_004773c8)();
    }
  }
  *sehChainHead = sehPrevFrame;
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
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x470b30);
  badAlloc = &std::bad_alloc::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00406864,(undefined4*)&badAlloc,0,&LAB_004068bc,1,0,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b400  FUN_0044b400   (63 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0044b400(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470b78);
  _DAT_004773cc = &std::bad_alloc::vftable;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b440  FUN_0044b440   (49 bytes)   [unnamed]
void __stdcall FUN_0044b440(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470b8c);
  std::bad_alloc::_dtor((undefined4 *)&DAT_004773cc,2);
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470bb4);
  if (param_1 == 0) {
    param_1 = 0;
    *sehChainHead = sehPrevFrame;
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
      *sehChainHead = sehPrevFrame;
    }
    else {
      operator_delete_array();
      param_1 = 0;
      *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  int local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470c08);
  if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new_array(), param_1 == (int *)0x0)) {
    param_1 = (int *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      *param_1 = param_3;
      param_1 = param_1 + 1;
    }
    if (param_5 == (undefined *)0x0) {
      *sehChainHead = sehPrevFrame;
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
      *sehChainHead = sehPrevFrame;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b790  FUN_0044b790   (106 bytes)   [unnamed]
bool FUN_0044b790(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID mem;
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
  mem = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = mem;
  if (mem != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b7fc  FUN_0044b7fc   (39 bytes)   [unnamed]
bool FUN_0044b7fc(undefined4 *param_1,SIZE_T size)

{
  LPVOID mem;
  
  mem = VirtualAlloc((LPVOID)*param_1,size,0x1000,4);
  *param_1 = mem;
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b824  FUN_0044b824   (75 bytes)   [unnamed]
undefined4 FUN_0044b824(LPVOID address,int param_2)

{
  LPVOID mem;
  LPVOID lpAddress;
  
  lpAddress = address;
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    mem = VirtualAlloc(lpAddress,0x1000,0x1000,4);
    if (mem == (LPVOID)0x0) break;
    lpAddress = (LPVOID)((int)lpAddress + 0x1000);
    param_2 = param_2 + -0x1000;
  }
  FUN_0044b870(address,(int)lpAddress - (int)address);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b870  FUN_0044b870   (24 bytes)   [unnamed]
undefined4 FUN_0044b870(LPVOID address,SIZE_T size)

{
  BOOL ok;
  
  ok = VirtualFree(address,size,0x4000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044b888  FUN_0044b888   (25 bytes)   [unnamed]
undefined4 FUN_0044b888(LPVOID address)

{
  BOOL ok;
  
  ok = VirtualFree(address,0,0x8000);
  if (ok != 1) {
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
  FARPROC procAddress;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA("borlndmm");
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      procAddress = GetProcAddress(hModule,"@Borlndmm@SysGetMem$qqri");
      *param_1 = (int)procAddress;
      procAddress = GetProcAddress(hModule,"@Borlndmm@SysFreeMem$qqrpv");
      *param_2 = (int)procAddress;
      procAddress = GetProcAddress(hModule,"@Borlndmm@SysReallocMem$qqrpvi");
      *param_3 = (int)procAddress;
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
  undefined3 regHigh;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint *address;
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
  bVar2 = FUN_0044b790(uVar4,(undefined4*)&address,&local_c);
  if (CONCAT31(regHigh,bVar2) == 0) {
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
      if (((uint *)(puVar1[1] + (int)puVar1) == address) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_0044b824((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + iVar3;
          FUN_0044bb78(puVar1,puVar1[1]);
        }
        iVar6 = FUN_0044b824(address,uVar7 - iVar3);
        if (iVar6 != 0) {
          (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)address;
          puVar1[1] = puVar1[1] + local_c;
          FUN_0044bb78(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_0044b824(address,uVar7);
    if (iVar3 == 0) {
      FUN_0044b888(address);
      uVar5 = 0xffffffff;
    }
    else {
      (*(int *)&DAT_00470d54) = (*(int *)&DAT_00470d54) + uVar7;
      FUN_0044ba78(address,uVar7,local_c);
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
  SIZE_T size;
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
          size = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_0044b870((LPVOID)puVar2[puVar2[2] + 3],size);
          DAT_00470d54 = DAT_00470d54 - size;
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

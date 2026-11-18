// TSBuild.exe — runtime / library code "code_0x0044c000"
// 39 functions, 0x0044c00c..0x0044ff60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044c00c  FUN_0044c00c   (154 bytes)   [unnamed]
void __cdecl FUN_0044c00c(int *param_1,int param_2)

{
  int iVar1;
  
  memset(param_1 + 7,0,0x28);
  param_1[7] = 0x28;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar1;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  *(uint *)param_1[0x11] = *(uint *)param_1[0x11] & 0xffffff87;
  param_1[10] = *(uint *)param_1[0x11] | 0x100;
  if (param_2 == 0) {
    param_1[10] = param_1[10] & 0xfffffdff;
  }
  else {
    param_1[0x10] = param_2;
    param_1[10] = param_1[10] | 0x200;
  }
  param_1[0xb] = *(int *)(param_1[0x11] + 0xc);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_1[0x11] + 4);
  param_1[0xc] = *(int *)(param_1[0x11] + 0x10);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(param_1[0x11] + 4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c224  FUN_0044c224   (33 bytes)   [unnamed]
void __cdecl FUN_0044c224(int param_1,int param_2)

{
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c80c  FUN_0044c80c   (127 bytes)   [unnamed]
void __cdecl FUN_0044c80c(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_0042d9a0(param_2,param_1,4);
  uVar1 = FUN_0042da9c(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  operator_delete_array();
  operator_delete_array();
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_0042d9a0(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_0042d9a0(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c88c  FUN_0044c88c   (86 bytes)   [unnamed]
void __cdecl FUN_0044c88c(undefined4 *param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = *param_1;
  FUN_0042de94(param_2,&local_8,4);
  FUN_0042df1c(param_2);
  FUN_0042de94(param_2,param_1[3],param_1[1]);
  FUN_0042de94(param_2,param_1[4],param_1[1]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c8e4  FUN_0044c8e4   (68 bytes)   [unnamed]
uint __cdecl FUN_0044c8e4(HMENU hMenu,int param_2)

{
  UINT menuState;
  UINT uId;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 1;
  local_8 = 0;
  uId = 0;
  if (0 < param_2) {
    do {
      menuState = GetMenuState(hMenu,uId,0x400);
      if ((menuState != 0xffffffff) && ((menuState & 3) == 0)) {
        local_8 = local_8 | uVar2;
      }
      uVar2 = uVar2 * 2;
      uId = uId + 1;
    } while ((int)uId < param_2);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c928  FUN_0044c928   (163 bytes)   [unnamed]
HICON __stdcall FUN_0044c928(void)

{
  HICON hIcon2;
  WNDCLASSA wndClass;
  
  if (DAT_00482818 == (HICON)0x0) {
    memset(&wndClass.style,0,0x28);
    wndClass.hInstance = *(HINSTANCE *)(DAT_00484890 + 8);
    wndClass.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    wndClass.lpszClassName = "IconSnarfer";
    wndClass.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&wndClass);
    GetClassInfoA(*(HINSTANCE *)(DAT_00484890 + 8),"IconSnarfer",&wndClass);
    DAT_00482818 = wndClass.hIcon;
    UnregisterClassA("IconSnarfer",*(HINSTANCE *)(DAT_00484890 + 8));
  }
  hIcon2 = DAT_00482818;
  if (DAT_00482818 == (HICON)0x0) {
    hIcon2 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return hIcon2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c9cb  FUN_0044c9cb   (105 bytes)   [unnamed]
int __cdecl FUN_0044c9cb(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x7a) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
  }
  iVar4 = iVar5;
  if (iVar5 != 0) {
    do {
      if ((*(int *)(iVar4 + 0xc) != 0) &&
         (uVar2 = GetWindowLongA(*(HWND *)(iVar4 + 0xc),-0x10), (uVar2 & 0x58000000) == 0x50000000))
      {
        if ((uVar2 & 0x10000) != 0) {
          return iVar4;
        }
        iVar3 = FUN_0044c9cb(iVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      piVar1 = (int *)(iVar4 + 0x7e);
      iVar4 = *piVar1;
    } while (iVar5 != *piVar1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca34  FUN_0044ca34   (52 bytes)   [unnamed]
bool __cdecl FUN_0044ca34(int param_1)

{
  uint windowLong;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    bVar2 = false;
  }
  else {
    windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    bVar2 = (windowLong & 0x58000000) == 0x50000000;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc70  FUN_0044cc70   (78 bytes)   [unnamed]
void __cdecl FUN_0044cc70(int *param_1,int param_2,char param_3)

{
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    *(undefined4 *)(*param_1 + 0x18) = 0x10cf0000;
    *(undefined4 *)(*param_1 + 0x28) = 0x80000000;
    *(undefined4 *)(*param_1 + 0x20) = 0x80000000;
    if (param_2 != 0) {
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x2000000;
    }
    if (param_3 != '\0') {
      *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 8;
    }
    FUN_0044ccc0(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ccc0  FUN_0044ccc0   (186 bytes)   [unnamed]
void __cdecl FUN_0044ccc0(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  FUN_0044d2f0(param_1,(*(undefined4 *)&DAT_00484890),32000);
  FUN_0044d37c(param_1,(*(undefined4 *)&DAT_00484890),(HANDLE)0x7d01);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0xffffffff;
  if (*(int *)((int)param_1 + 0x15) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 2;
    *(undefined4 *)(*param_1 + 0x5c) = (*(undefined4 *)&DAT_0048c658);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cfcc  Child4509768_Notify4453474_44cfcc   (122 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 4509768, code 4453474)
//   also: OWL::TFrameWindow::IdleAction [rtti:vtable]; OWL::TFrameWindow::vf11 [rtti:vtable]
void __cdecl Child4509768_Notify4453474_44cfcc(int *param_1,int param_2)

{
  HWND hWnd;
  uint windowLong;
  BOOL ok;
  HMENU hMenu;
  
  if (param_2 == 0) {
    hWnd = GetFocus();
    if (hWnd != (HWND)0x0) {
      windowLong = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
      if ((windowLong & 0x40000000) == 0) {
        ok = IsWindow(*(HWND *)(*param_1 + 0xc));
        if (ok != 0) {
          hMenu = GetMenu(*(HWND *)(*param_1 + 0xc));
          ok = IsMenu(hMenu);
          if (ok != 0) {
            FUN_00436d48(*param_1,0x117,hMenu,0);
          }
        }
      }
    }
  }
  OWL::TWindow::IdleAction(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d2f0  FUN_0044d2f0   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_0044d2f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL ok;
  
  if ((*(int *)((int)param_1 + 0x42) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_004502b0();
    in_EAX = 0;
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_3;
  if (*(int *)((int)param_1 + 0x2a) != 0) {
    in_EAX = *(undefined4 *)((int)param_1 + 0x2a);
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    in_EAX = FUN_00450270();
    *(undefined4 *)((int)param_1 + 0x42) = in_EAX;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    ok = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (ok != 0) {
      in_EAX = FUN_00438338(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d37c  FUN_0044d37c   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_0044d37c(int *param_1,undefined4 param_2,HANDLE param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int cy;
  int cx;
  BOOL ok;
  HINSTANCE hInst;
  UINT fuLoad;
  
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    if ((*(int *)((int)param_1 + 0x46) != 0) && (*(int *)((int)param_1 + 0x32) != 0)) {
      FUN_004502b0();
      *(undefined4 *)((int)param_1 + 0x46) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x32) = param_2;
    *(HANDLE *)((int)param_1 + 0x36) = param_3;
    if (*(int *)((int)param_1 + 0x32) == 0) {
      hInst = (HINSTANCE)0x0;
    }
    else {
      hInst = *(HINSTANCE *)(*(int *)((int)param_1 + 0x32) + 8);
    }
    if (*(int *)((int)param_1 + 0x36) != 0) {
      fuLoad = 0;
      cy = GetSystemMetrics(DAT_0047d680);
      cx = GetSystemMetrics(DAT_0047d678);
      param_3 = LoadImageA(hInst,*(LPCSTR *)((int)param_1 + 0x36),1,cx,cy,fuLoad);
      *(HANDLE *)((int)param_1 + 0x46) = param_3;
      if (*(int *)((int)param_1 + 0x46) == 0) {
        param_3 = (HANDLE)FUN_00450270();
        *(HANDLE *)((int)param_1 + 0x46) = param_3;
      }
    }
    if (*(int *)((int)param_1 + 0x46) != 0) {
      ok = IsWindow(*(HWND *)(*param_1 + 0xc));
      param_3 = (HANDLE)0x0;
      if (ok != 0) {
        param_3 = (HANDLE)FUN_00438338(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
      }
    }
    uVar2 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d8dc  FUN_0044d8dc   (47 bytes)   [unnamed]
int __cdecl FUN_0044d8dc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044c9cb(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00438220(*param_1,(undefined*)FUN_0044ca34);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044daec  FUN_0044daec   (1371 bytes)   [unnamed]
undefined4 __cdecl FUN_0044daec(int *param_1,char param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int metric;
  int iVar7;
  tagRECT *pRect;
  LONG *pLVar9;
  tagRECT rect;
  int local_118 [4];
  int local_108 [4];
  tagRECT rect2;
  int local_e8 [4];
  tagRECT rect3;
  int local_c8 [4];
  tagRECT rect4;
  int local_a8 [4];
  tagRECT rect5;
  int local_88 [4];
  tagRECT rect6;
  int cx;
  int cy;
  int unused;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int unused2;
  char local_3d;
  int unused3;
  int bar;
  char local_31;
  int local_30;
  int local_2c;
  int unused4;
  int unused5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int cx2;
  int cy2;
  
  if (*(int *)((int)param_1 + 0x15) == 0) {
    uVar3 = 0;
  }
  else if ((*(byte *)(*(int *)((int)param_1 + 0x15) + 0x74) & 8) == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 8;
    uVar3 = 0;
    rect6.left = 0;
    rect6.top = 0;
    rect6.right = 0;
    rect6.bottom = 0;
    FUN_004386fc(*param_1,&rect6);
    pRect = &rect6;
    pLVar9 = local_88;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar9 = pLVar9 + 1;
    }
    cy2 = local_88[3] - local_88[1];
    cx2 = local_88[2] - local_88[0];
    rect5.left = 0;
    rect5.top = 0;
    rect5.right = 0;
    rect5.bottom = 0;
    FUN_004386c0(*(int *)((int)param_1 + 0x15),&rect5);
    pRect = &rect5;
    pLVar9 = local_a8;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar9 = pLVar9 + 1;
    }
    local_10 = local_a8[3] - local_a8[1];
    local_14 = local_a8[2] - local_a8[0];
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if (((uVar4 & 0x80440000) != 0) ||
       (uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15)), (uVar4 & 0x20101) != 0)) {
      if ((*(byte *)(*param_1 + 0x74) & 8) != 0) {
        rect4.left = 0;
        rect4.top = 0;
        rect4.right = 0;
        rect4.bottom = 0;
        FUN_004386fc(*(int *)((int)param_1 + 0x15),&rect4);
        pRect = &rect4;
        pLVar9 = local_c8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = pRect->left;
          pRect = (tagRECT *)&pRect->top;
          pLVar9 = pLVar9 + 1;
        }
        local_18 = local_c8[3] - local_c8[1];
        local_20 = local_c8[2] - local_c8[0];
        local_1c = local_20;
        ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),3,0);
        rect3.left = 0;
        rect3.top = 0;
        rect3.right = 0;
        rect3.bottom = 0;
        FUN_004386fc(*(int *)((int)param_1 + 0x15),&rect3);
        pRect = &rect3;
        pLVar9 = local_e8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = pRect->left;
          pRect = (tagRECT *)&pRect->top;
          pLVar9 = pLVar9 + 1;
        }
        local_2c = local_e8[3] - local_e8[1];
        local_30 = local_e8[2] - local_e8[0];
        if ((local_1c == local_30) && (local_18 == local_2c)) {
          local_31 = '\0';
        }
        else {
          local_31 = '\x01';
        }
        unused4 = local_30;
        unused5 = local_2c;
        local_14 = local_30;
        local_10 = local_2c;
        if (local_31 != '\0') {
          bar = 3;
          if (local_30 == local_1c) {
            bar = 0;
          }
          if (local_2c == local_18) {
            bar = 1;
          }
          unused3 = bar;
          ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),bar,1);
        }
      }
      uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x80440000) != 0) {
        uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
        local_3d = (uVar4 & 0x80000000) != 0;
        uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
        FUN_004385a0(*(int *)((int)param_1 + 0x15),uVar4 & 0x7fbbffff | 0x50800000);
        if (local_3d != '\0') {
          SetParent(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),*(HWND *)(*param_1 + 0xc));
        }
      }
      uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x20101) != 0) {
        uVar4 = FUN_004385cc(*(int *)((int)param_1 + 0x15));
        FUN_004385ec(*(int *)((int)param_1 + 0x15),uVar4 & 0xfffdfefe);
      }
    }
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) != 0) {
      rect2.left = 0;
      rect2.top = 0;
      rect2.right = 0;
      rect2.bottom = 0;
      FUN_004386fc(*(int *)((int)param_1 + 0x15),&rect2);
      pRect = &rect2;
      pLVar9 = local_108;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pLVar9 = pRect->left;
        pRect = (tagRECT *)&pRect->top;
        pLVar9 = pLVar9 + 1;
      }
      local_48 = local_108[3] - local_108[1];
      local_4c = local_108[2] - local_108[0];
      unused2 = local_4c;
      local_14 = local_4c;
      local_10 = local_48;
    }
    if ((cx2 == local_14) && (cy2 == local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(byte *)(*param_1 + 0x74) & 8) == 0) {
        uVar3 = 1;
      }
      else {
        rect.left = 0;
        rect.top = 0;
        rect.right = 0;
        rect.bottom = 0;
        FUN_004386c0(*param_1,&rect);
        pRect = &rect;
        pLVar9 = local_118;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = pRect->left;
          pRect = (tagRECT *)&pRect->top;
          pLVar9 = pLVar9 + 1;
        }
        local_58 = local_118[3] - local_118[1];
        local_5c = local_118[2] - local_118[0];
        local_50 = local_58 - cy2;
        local_54 = local_5c - cx2;
        if (param_2 == '\0') {
          uVar4 = 8;
        }
        else {
          uVar4 = 0;
        }
        FUN_00438730(*param_1,(HWND)0x0,0,0,local_14 + local_54,local_10 + local_50,uVar4 | 0x12);
        cx2 = local_14;
        cy2 = local_10;
      }
    }
    if ((*(byte *)(*param_1 + 0x1a) & 4) != 0) {
      if (param_1 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[3];
      }
      puVar5 = FUN_00468488((int)param_1,iVar7,(int *)&DAT_00403a74,(int *)&DAT_00440e5c,0);
      if (puVar5 == (undefined4 *)0x0) {
        *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffff7;
      }
    }
    uVar4 = FUN_00438580(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) == 0) {
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_00438730(*(int *)((int)param_1 + 0x15),(HWND)0x0,0,0,cx2,cy2,uVar4 | 0x214);
    }
    else {
      iVar7 = GetSystemMetrics(DAT_0047d518);
      unused = DAT_0047d520;
      metric = GetSystemMetrics(DAT_0047d520);
      cy = cy2 + metric * 2;
      cx = cx2 + iVar7 * 2;
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_00438730(*(int *)((int)param_1 + 0x15),(HWND)0x0,-iVar7,-metric,cx,cy,
                   uVar4 | 0x214);
    }
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e228  FUN_0044e228   (44 bytes)   [unnamed]
void __cdecl FUN_0044e228(int *param_1,WPARAM wParam,LPARAM lParam)

{
  if (((wParam == 1) || (wParam == 2)) || (wParam == 0)) {
    FUN_004383d0(*param_1,0x7ef5,wParam,lParam);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e25a  FUN_0044e25a   (187 bytes)   [unnamed]
void __stdcall FUN_0044e25a(void)

{
  undefined4 *lParam;
  WPARAM wParam;
  int *piVar3;
  undefined4 uVar4;
  int i;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  lParam = *(undefined4 **)(unaff_EBP + 0x10);
  wParam = *(WPARAM *)(unaff_EBP + 0xc);
  piVar3 = *(int **)(unaff_EBP + 8);
  OWL::TWindow::EvSize(*piVar3,wParam);
  if (*(int *)((int)piVar3 + 0x15) != 0) {
    *(undefined1 *)(unaff_EBP + -1) = 0;
    if (wParam != 1) {
      uVar4 = FUN_0044daec(piVar3,'\x01');
      *(char *)(unaff_EBP + -1) = (char)uVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_004386fc(*(int *)((int)piVar3 + 0x15),(LPRECT)(unaff_EBP + -0x24));
      puVar6 = (undefined4 *)(unaff_EBP + -0x24);
      puVar7 = (undefined4 *)(unaff_EBP + -0x34);
      for (i = 4; i != 0; i = i + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -8);
      *lParam = *(undefined4 *)(unaff_EBP + -0x14);
      lParam[1] = *(undefined4 *)(unaff_EBP + -0x10);
    }
    if (*(char *)(unaff_EBP + -1) == '\0') {
      FUN_00438398(*(int *)((int)piVar3 + 0x15),'\x01');
    }
  }
  FUN_0044e228(piVar3,wParam,(LPARAM)lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e630  FUN_0044e630   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e630(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  local_c = 0;
  iVar2 = 0;
  do {
    if (*(int *)((int)param_2 + iVar2 * 4 + 0x11) < 1) {
      if ((*(int *)((int)param_2 + iVar2 * 4 + 0x11) == 0) &&
         (0 < *(int *)((int)param_1 + iVar2 * 4 + 0x11))) {
        iVar1 = FUN_0042bdc0(param_3,param_1,local_8,*(int *)((int)param_1 + iVar2 * 4 + 0x11));
      }
    }
    else {
      FUN_0042bdc0(param_3,param_2,local_c,*(int *)((int)param_2 + iVar2 * 4 + 0x11));
      iVar1 = *(int *)((int)param_2 + iVar2 * 4 + 0x11);
      local_c = local_c + iVar1;
    }
    if (0 < *(int *)((int)param_1 + iVar2 * 4 + 0x11)) {
      local_8 = local_8 + *(int *)((int)param_1 + iVar2 * 4 + 0x11);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e6b8  FUN_0044e6b8   (170 bytes)   [unnamed]
void __stdcall FUN_0044e6b8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482c62);
  if (DAT_00482c5e != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cdb7,2);
    DAT_00482c5e = '\0';
  }
  if (DAT_00482c5c != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cda6,2);
    DAT_00482c5c = '\0';
  }
  if (DAT_00482c57 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cd89,2);
    DAT_00482c57 = '\0';
  }
  if (DAT_00482c51 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048cd68,2);
    DAT_00482c51 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e764  FUN_0044e764   (110 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044e7a2) */
DWORD * __cdecl FUN_0044e764(DWORD *param_1)

{
  DWORD lastError;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482dfc);
  param_1[3] = 0;
  param_1[3] = (DWORD)&g_emptyStringData;
  lastError = GetLastError();
  *param_1 = lastError;
  FUN_0044e7f8(param_1,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e7f8  FUN_0044e7f8   (120 bytes)   [unnamed]
void __cdecl FUN_0044e7f8(DWORD *param_1,ushort languageId)

{
  DWORD DVar1;
  uint local_10c [65];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*param_1,(uint)languageId,(LPSTR)&local_8,0,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    wsprintfA((LPSTR)local_10c,"Error: %#X occurred (no further info)",*param_1);
    std::string::assign_cstr((int)(param_1 + 1),local_10c);
  }
  else {
    std::string::assign_cstr((int)(param_1 + 1),local_8);
    LocalFree(local_8);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e870  FUN_0044e870   (155 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e870(int param_1)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x482e30);
  uVar1 = FUN_0044eb8c(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_00482e1c == 0) && (DAT_00482e1c = operator_new(), DAT_00482e1c != 0)) {
      *(undefined4 *)(DAT_00482e1c + 1) = 0;
      *(undefined4 *)(DAT_00482e1c + 5) = 0;
      *(undefined4 *)(DAT_00482e1c + 9) = 0;
    }
    FUN_0044e93c(DAT_00482e1c,param_1,0);
    *sehChainHead = local_2c;
  }
  else {
    *sehChainHead = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e93c  FUN_0044e93c   (159 bytes)   [unnamed]
void __cdecl FUN_0044e93c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_0044e9dc(param_1,*(int *)(param_1 + 1) + 1);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar1 * 4) = param_2;
  }
  else {
    if (*(uint *)(param_1 + 5) <= param_3) {
      FUN_0044e9dc(param_1,param_3 + 1);
    }
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_0044e9dc(param_1,*(int *)(param_1 + 1) + 1);
    }
    if ((param_3 < *(uint *)(param_1 + 1)) && (*(int *)(param_1 + 1) != 0)) {
      FUN_004675a4((undefined4 *)((param_3 + 1) * 4 + *(int *)(param_1 + 9)),
                   (undefined4 *)(param_3 * 4 + *(int *)(param_1 + 9)),
                   (*(int *)(param_1 + 1) - param_3) * 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 9) + param_3 * 4) = param_2;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e9dc  FUN_0044e9dc   (155 bytes)   [unnamed]
void __cdecl FUN_0044e9dc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
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
// 0x0044ea78  FUN_0044ea78   (167 bytes)   [unnamed]
uint __cdecl FUN_0044ea78(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *sehChainHead;
  bool bVar3;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x482e60);
  uVar1 = FUN_0044eb8c(param_1);
  if ((char)uVar1 == '\0') {
    *sehChainHead = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_0044eb20(DAT_00482e1c,param_1);
    bVar3 = *(int *)(DAT_00482e1c + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_00482e1c != 0) {
        if (*(int *)(DAT_00482e1c + 9) != 0) {
          free();
        }
        uVar2 = operator_delete();
      }
      DAT_00482e1c = 0;
    }
    *sehChainHead = local_2c;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb20  FUN_0044eb20   (72 bytes)   [unnamed]
undefined4 __cdecl FUN_0044eb20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0044eb68(param_1,param_2);
  if (iVar1 != -1) {
    puVar2 = FUN_004675a4((undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 9)),
                          (undefined4 *)((iVar1 + 1) * 4 + *(int *)(param_1 + 9)),
                          ((*(int *)(param_1 + 1) - iVar1) + -1) * 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb68  FUN_0044eb68   (34 bytes)   [unnamed]
int __cdecl FUN_0044eb68(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 1) <= iVar1) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 9) + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb8c  FUN_0044eb8c   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_0044eb8c(int param_1)

{
  uint uVar1;
  
  if (DAT_00482e1c == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_00482e1c + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_00482e1c + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ebc4  FUN_0044ebc4   (248 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ebc4(LPCSTR name,LPCSTR type)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC hResource;
  WORD wLanguage;
  int iVar4;
  int i;
  int j;
  
  if (DAT_00482e1c != 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)FUN_0041c4a0();
    iVar2 = FUN_0041c6e8(puVar1,iVar4);
    iVar4 = DAT_00482e1c;
    if (iVar2 == 0) {
      wLanguage = 0;
    }
    else {
      wLanguage = *(WORD *)(iVar2 + 0x2f);
    }
    for (j = 0; iVar2 = DAT_00482e1c, j < *(int *)(iVar4 + 1); j = j + 1) {
      hResource = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + j * 4) + 8),type
                               ,name,wLanguage);
      if (hResource != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + j * 4);
      }
    }
    for (i = 0; i < *(int *)(iVar2 + 1); i = i + 1) {
      hResource = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + i * 4) + 8),name,
                             type);
      if (hResource != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + i * 4);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef18  FUN_0044ef18   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ef18(LPCSTR name,LPCSTR type)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044ebc4(name,type);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef34  FUN_0044ef34   (155 bytes)   [unnamed]
void __cdecl FUN_0044ef34(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x482f80);
  operator_delete_array();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)operator_new_array();
    operator_delete_array();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_0042aea0(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044efd0  FUN_0044efd0   (88 bytes)   [unnamed]
void __cdecl FUN_0044efd0(int param_1,undefined4 param_2)

{
  int i;
  char *pcVar2;
  CHAR *pCVar3;
  CHAR string_ [28];
  CHAR local_18 [20];
  
  FUN_0044f0a4(param_1,param_2);
  if ((*(UINT *)&DAT_0047eb5c) == 0) {
    pcVar2 = "GetWindowPtr(%X)";
    pCVar3 = local_18;
    for (i = 4; i != 0; i = i + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = *pcVar2;
    wsprintfA(string_,local_18,param_2);
    (*(UINT *)&DAT_0047eb5c) = RegisterWindowMessageA(string_);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0a4  FUN_0044f0a4   (14 bytes)   [unnamed]
void __cdecl FUN_0044f0a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0b4  FUN_0044f0b4   (311 bytes)   [unnamed]
int __cdecl FUN_0044f0b4(int param_1,uint param_2,LPSTR multiByteStr,int multiByte)

{
  WORD wLanguage;
  undefined4 *puVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint cchWideChar;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  puVar1 = (undefined4 *)FUN_0041c4a0();
  iVar5 = FUN_0041c6e8(puVar1,iVar5);
  if (iVar5 == 0) {
    wLanguage = 0;
  }
  else {
    wLanguage = *(WORD *)(iVar5 + 0x2f);
  }
  hResInfo = FindResourceExA(*(HMODULE *)(param_1 + 8),(LPCSTR)0x6,(LPCSTR)((param_2 >> 4) + 1),
                             wLanguage);
  if (hResInfo == (HRSRC)0x0) {
    hResInfo = FindResourceA(*(HMODULE *)(param_1 + 8),(LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar4 = FUN_0044ef18((LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
    if (iVar4 != 0) {
      iVar4 = FUN_0044f0b4(iVar4,param_2,multiByteStr,multiByte);
      return iVar4;
    }
  }
  else {
    hResData = LoadResource(*(HMODULE *)(param_1 + 8),hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      puVar2 = LockResource(hResData);
      if (puVar2 != (ushort *)0x0) {
        uVar3 = param_2 & 0xf;
        while( true ) {
          cchWideChar = (uint)*puVar2;
          if (uVar3 == 0) break;
          puVar2 = (ushort *)((int)(puVar2 + 1) + cchWideChar * 2);
          uVar3 = uVar3 - 1;
        }
        iVar4 = 0;
        if ((cchWideChar != 0) &&
           (iVar4 = WideCharToMultiByte(0,0,(LPCWSTR)(puVar2 + 1),cchWideChar,multiByteStr,multiByte,
                                        (LPCSTR)0x0,(LPBOOL)0x0), iVar4 != 0)) {
          multiByteStr[iVar4] = '\0';
        }
      }
      FreeResource(hResData);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  if (multiByte != 0) {
    *multiByteStr = '\0';
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1ec  FUN_0044f1ec   (3214 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044f232) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0044f1ec(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  HRSRC hResInfo;
  ushort *puVar2;
  uint uVar3;
  uint cchWideChar;
  int *strRep;
  LPCWSTR lpWideCharStr;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  int iVar11;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined *unused2;
  undefined4 *unused3;
  undefined4 *unused4;
  undefined4 *dest;
  undefined4 *unused5;
  uint unused6;
  int unused7;
  int *newRep;
  int *newData2;
  int *strRep2;
  int unused8;
  undefined4 *unused9;
  undefined4 unused10;
  undefined4 *unused11;
  undefined4 *unused12;
  undefined4 *unused13;
  undefined4 *unused14;
  int *strRep3;
  undefined4 *dest2;
  undefined4 *unused15;
  uint unused16;
  int unused17;
  int *newRep2;
  int *newData3;
  uint len;
  int *strRep4;
  int unused18;
  undefined4 *unused19;
  undefined4 unused20;
  undefined4 *strRep5;
  int local_16c;
  undefined4 *strRep6;
  uint local_164;
  undefined1 s;
  uint local_15c;
  undefined1 *unused21;
  undefined4 unused22;
  int *unused23;
  int *unused24;
  int *strRep7;
  int *newData4;
  int *unused25;
  uint unused26;
  undefined1 *unused27;
  int *newRep3;
  int *unused28;
  uint len2;
  int *strRep8;
  undefined1 *unused29;
  int *unused30;
  undefined4 unused31;
  uint *msgText;
  uint local_10c;
  undefined1 *unused32;
  undefined4 unused33;
  int *unused34;
  int *unused35;
  int *strRep9;
  int *unused36;
  int *unused37;
  uint unused38;
  undefined1 *unused39;
  int *newRep4;
  int *unused40;
  uint len3;
  int *strRep10;
  undefined1 *unused41;
  int *unused42;
  undefined4 unused43;
  uint *msgText2;
  uint local_bc;
  LPSTR multiByteStr;
  LPSTR unused44;
  int local_b0;
  uint local_ac;
  HRSRC unused45;
  LPCSTR name;
  LPCSTR unused46;
  LPCSTR name2;
  LPCSTR unused47;
  WORD language;
  HGLOBAL hGlobal;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str4;
  undefined1 str2 [8];
  int *str5;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused48;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused49;
  LPSTR unused50;
  undefined1 str3 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4830a0);
  uVar3 = 0;
  local_c = (undefined4 *)&g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_0041c4a0();
  iVar11 = FUN_0041c6e8(puVar1,iVar11);
  if (iVar11 == 0) {
    language = 0;
  }
  else {
    language = *(WORD *)(iVar11 + 0x2f);
  }
  name2 = (LPCSTR)((param_3 >> 4) + 1);
  unused47 = name2;
  hResInfo = FindResourceExA(*(HMODULE *)(param_2 + 8),(LPCSTR)0x6,name2,language);
  if (hResInfo == (HRSRC)0x0) {
    name = (LPCSTR)((param_3 >> 4) + 1);
    unused46 = name;
    hResInfo = FindResourceA(*(HMODULE *)(param_2 + 8),name,(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar11 = FUN_0044ef18((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      ehContext = 0xec;
      FUN_0044f1ec(param_1,iVar11,param_3);
      ehContext = 0xf8;
      ehDtorCount = ehDtorCount + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          strRep = local_c + -3;
          if (strRep == &g_nullStringRep) {
            iVar11 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar11 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar11 = *strRep + 1;
          }
          if (iVar11 != 0) goto LAB_0044fca4;
        }
        unused12 = local_c + -3;
        unused11 = local_c + -3;
        operator_delete();
      }
LAB_0044fca4:
      *sehChainHead = sehPrevFrame;
      return param_1;
    }
  }
  else {
    unused45 = hResInfo;
    hGlobal = LoadResource(*(HMODULE *)(param_2 + 8),hResInfo);
    if (hGlobal != (HGLOBAL)0x0) {
      puVar2 = LockResource(hGlobal);
      if (puVar2 != (ushort *)0x0) {
        local_ac = param_3 & 0xf;
        while( true ) {
          lpWideCharStr = (LPCWSTR)(puVar2 + 1);
          cchWideChar = (uint)*puVar2;
          uVar7 = local_ac - 1;
          if (local_ac == 0) break;
          puVar2 = (ushort *)((int)lpWideCharStr + cchWideChar * 2);
          local_ac = uVar7;
        }
        uVar3 = 0;
        local_ac = uVar7;
        if (cchWideChar != 0) {
          local_b0 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0);
          ehContext = 0x38;
          multiByteStr = (LPSTR)operator_new_array();
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0x2c;
          unused44 = multiByteStr;
          unused50 = multiByteStr;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,multiByteStr,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if (g_stringNpos - 0xeU < uVar3) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            uVar7 = 1;
            copyCtor = &LAB_00402064;
            objectDtor = 0;
            ehContext = 0x50;
            msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,
                                            PTR_s_invalid_string_size_parameter_in_00488a54);
            std::string::string_from_cstr((int)str2,msgText2);
            ehDtorCount = ehDtorCount + 2;
            lengthError[0] = &std::logic_error::vftable;
            unused43 = 0;
            unused49 = (int *)0x0;
            ehContext = 0x5c;
            if (str5[-3] == -1 || str5[-3] + 1 < 0) {
              len3 = str5[-1];
              newRep4 = std::string::__getRep(newStr2,len3,len3);
              newData = newRep4 + 3;
              unused39 = newStr2;
              unused38 = len3;
              unused37 = str5;
              unused36 = newData;
              unused40 = newData;
              unused49 = newData;
              memcpy(newData,str5,len3);
            }
            else {
              unused42 = str5;
              unused49 = str5;
              unused41 = newStr2;
              strRep10 = str5 + -3;
              if (strRep10 != &g_nullStringRep) {
                *strRep10 = *strRep10 + 1;
              }
            }
            ehContext = 0x50;
            lengthError[0] = &std::length_error::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str5 != (int *)0x0) {
              if (str5[-3] != -1) {
                strRep9 = str5 + -3;
                if (strRep9 == &g_nullStringRep) {
                  iVar11 = 1;
                }
                else if (strRep9 == &g_nullStringRep) {
                  iVar11 = 1;
                }
                else {
                  *strRep9 = *strRep9 + -1;
                  iVar11 = *strRep9 + 1;
                }
                if (iVar11 != 0) goto LAB_0044f61a;
              }
              unused35 = str5 + -3;
              unused34 = str5 + -3;
              operator_delete();
              unused33 = 0;
              str5 = (int *)0x0;
              unused32 = str2;
              unused = 0;
            }
LAB_0044f61a:
            ehContext = 0x44;
            _ThrowExceptionLDTC((uint *)&DAT_00402008,(undefined4*)lengthError,objectDtor,copyCtor,uVar7,throwFlags,throwFile,throwLine);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              throwLine = 0;
              throwFile = 0;
              throwFlags = 0;
              uVar7 = 1;
              copyCtor = &LAB_004021bc;
              objectDtor = 0;
              ehContext = 0x80;
              msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,
                                               PTR_s_string_index_out_of_range_in_fun_00488a60);
              std::string::string_from_cstr((int)str,msgText);
              ehDtorCount = ehDtorCount + 2;
              outOfRange[0] = &std::logic_error::vftable;
              unused31 = 0;
              unused48 = (int *)0x0;
              ehContext = 0x8c;
              if (str4[-3] == -1 || str4[-3] + 1 < 0) {
                len2 = str4[-1];
                newRep3 = std::string::__getRep(newStr,len2,len2);
                newData4 = newRep3 + 3;
                unused27 = newStr;
                unused26 = len2;
                unused25 = str4;
                unused28 = newData4;
                unused48 = newData4;
                memcpy(newData4,str4,len2);
              }
              else {
                unused30 = str4;
                unused48 = str4;
                unused29 = newStr;
                strRep8 = str4 + -3;
                if (strRep8 != &g_nullStringRep) {
                  *strRep8 = *strRep8 + 1;
                }
              }
              ehContext = 0x80;
              outOfRange[0] = &std::out_of_range::vftable;
              ehDtorCount = ehDtorCount + 2;
              if (str4 != (int *)0x0) {
                if (str4[-3] != -1) {
                  strRep7 = str4 + -3;
                  if (strRep7 == &g_nullStringRep) {
                    iVar11 = 1;
                  }
                  else if (strRep7 == &g_nullStringRep) {
                    iVar11 = 1;
                  }
                  else {
                    *strRep7 = *strRep7 + -1;
                    iVar11 = *strRep7 + 1;
                  }
                  if (iVar11 != 0) goto LAB_0044f8ac;
                }
                unused24 = str4 + -3;
                unused23 = str4 + -3;
                operator_delete();
                unused22 = 0;
                str4 = (int *)0x0;
                unused21 = str;
              }
LAB_0044f8ac:
              ehContext = 0x44;
              _ThrowExceptionLDTC((uint *)&DAT_00402160,(undefined4*)outOfRange,objectDtor,copyCtor,uVar7,throwFlags,throwFile,throwLine);
            }
            local_15c = local_c[-1] - local_bc;
            s = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            std::string::replace((int)str3,local_bc,local_164,(uint)&s,0,0,0);
          }
          else {
            std::string::replace_fill((int)str3,local_c[-1],0,local_bc - local_c[-1],0);
          }
          strRep6 = local_c + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                std::string::__unshare((int)str3);
              }
              strRep5 = local_c + -3;
              if (strRep5 != &g_nullStringRep) {
                *strRep5 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = multiByteStr[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          ehDtorCount = ehDtorCount + -1;
          operator_delete_array();
          ehContext = 0x20;
        }
      }
      FreeResource(hGlobal);
      if (uVar3 != 0) {
        ehContext = 0xbc;
        unused20 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
          len = local_c[-1];
          newRep2 = std::string::__getRep(param_1,len,len);
          newData3 = newRep2 + 3;
          *(int **)(param_1 + 8) = newData3;
          unused17 = param_1;
          unused16 = len;
          unused15 = local_c;
          dest2 = *(undefined4 **)(param_1 + 8);
          memcpy(dest2,local_c,len);
        }
        else {
          unused19 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          unused18 = param_1;
          strRep4 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (strRep4 != &g_nullStringRep) {
            *strRep4 = *strRep4 + 1;
          }
        }
        ehContext = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            strRep3 = local_c + -3;
            if (strRep3 == &g_nullStringRep) {
              iVar11 = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              iVar11 = 1;
            }
            else {
              *strRep3 = *strRep3 + -1;
              iVar11 = *strRep3 + 1;
            }
            if (iVar11 != 0) goto LAB_0044fbb9;
          }
          unused14 = local_c + -3;
          unused13 = local_c + -3;
          operator_delete();
        }
LAB_0044fbb9:
        *sehChainHead = sehPrevFrame;
        return param_1;
      }
    }
  }
  ehContext = 0x110;
  unused10 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar3 = local_c[-1];
    newRep = std::string::__getRep(param_1,uVar3,uVar3);
    newData2 = newRep + 3;
    *(int **)(param_1 + 8) = newData2;
    unused7 = param_1;
    unused5 = local_c;
    dest = *(undefined4 **)(param_1 + 8);
    unused6 = uVar3;
    memcpy(dest,local_c,uVar3);
  }
  else {
    unused9 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    unused8 = param_1;
    strRep2 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar11 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar11 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar11 = *strRep + 1;
      }
      if (iVar11 != 0) goto LAB_0044fe5c;
    }
    unused4 = local_c + -3;
    unused3 = local_c + -3;
    operator_delete();
  }
LAB_0044fe5c:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fe7c  FUN_0044fe7c   (73 bytes)   [unnamed]
HACCEL __cdecl FUN_0044fe7c(int param_1,LPCSTR name)

{
  HACCEL hAccel;
  int iVar2;
  
  hAccel = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),name);
  if (hAccel == (HACCEL)0x0) {
    iVar2 = FUN_0044ef18(name,(LPCSTR)0x9);
    if (iVar2 != 0) {
      hAccel = FUN_0044fe7c(iVar2,name);
      return hAccel;
    }
  }
  return hAccel;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fec8  FUN_0044fec8   (73 bytes)   [unnamed]
HMENU __cdecl FUN_0044fec8(int param_1,LPCSTR name)

{
  HMENU hMenu;
  int iVar2;
  
  hMenu = LoadMenuA(*(HINSTANCE *)(param_1 + 8),name);
  if (hMenu == (HMENU)0x0) {
    iVar2 = FUN_0044ef18(name,(LPCSTR)0x4);
    if (iVar2 != 0) {
      hMenu = FUN_0044fec8(iVar2,name);
      return hMenu;
    }
  }
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ff14  FUN_0044ff14   (73 bytes)   [unnamed]
HCURSOR __cdecl FUN_0044ff14(int param_1,LPCSTR name)

{
  HCURSOR hCursor;
  int iVar2;
  
  hCursor = LoadCursorA(*(HINSTANCE *)(param_1 + 8),name);
  if (hCursor == (HCURSOR)0x0) {
    iVar2 = FUN_0044ef18(name,(LPCSTR)0x1);
    if (iVar2 != 0) {
      hCursor = FUN_0044ff14(iVar2,name);
      return hCursor;
    }
  }
  return hCursor;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ff60  FUN_0044ff60   (685 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044ffc3) */
int * __cdecl FUN_0044ff60(int *param_1,int param_2,LPCSTR procName)

{
  uint *puVar1;
  uint pos;
  FARPROC procAddress;
  int prevRefs;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str4;
  undefined1 str2 [8];
  int str5;
  undefined1 str3 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x483220);
  procAddress = GetProcAddress(*(HMODULE *)(param_2 + 8),procName);
  *param_1 = (int)procAddress;
  if (*param_1 != 0) goto LAB_004501fa;
  local_c = &g_emptyStringData;
  if ((short)((uint)procName >> 0x10) == 0) {
    FUN_004236bc((int)str,0x7ff4,(uint)procName & 0xffff,DAT_00484890);
    std::string::operator_assign((int)str3,(int)str);
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
        if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep = *strRep + -1;
          prevRefs = *strRep + 1;
        }
        if (prevRefs != 0) goto LAB_00450148;
      }
      operator_delete();
      str4 = 0;
    }
  }
  else {
    FUN_004235b8((int)str2,0x7ff5,procName,DAT_00484890);
    std::string::operator_assign((int)str3,(int)str2);
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep = (int *)(str5 + -0xc);
        if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else if (strRep == &g_nullStringRep) {
          prevRefs = 1;
        }
        else {
          *strRep = *strRep + -1;
          prevRefs = *strRep + 1;
        }
        if (prevRefs != 0) goto LAB_00450148;
      }
      operator_delete();
      str5 = 0;
    }
  }
LAB_00450148:
  puVar1 = *(uint **)(param_2 + 4);
  pos = *(uint *)(local_c + -4);
  len = strlen(puVar1);
  std::string::replace((int)str3,pos,0,(uint)puVar1,(uint)len,0,(uint)len);
  FUN_00423384((int)str3,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004501fa;
    }
    operator_delete();
  }
LAB_004501fa:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

} // namespace tea

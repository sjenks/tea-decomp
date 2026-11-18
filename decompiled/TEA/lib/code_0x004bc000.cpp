// TEA.exe — runtime / library code "code_0x004bc000"
// 33 functions, 0x004bc960..0x004bff02. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004bc960  FUN_004bc960   (271 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004bca25) */
/* WARNING: Removing unreachable block (ram,0x004bc9e1) */
/* WARNING: Removing unreachable block (ram,0x004bc99d) */
/* WARNING: Removing unreachable block (ram,0x004bc9bf) */
/* WARNING: Removing unreachable block (ram,0x004bca03) */
/* WARNING: Removing unreachable block (ram,0x004bca47) */
int __cdecl FUN_004bc960(int str,uint *param_2,char param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50f3e0);
  *(undefined4 *)(str + 8) = 0;
  *(undefined **)(str + 8) = &g_emptyStringData;
  *(undefined4 *)(str + 0x18) = 0;
  *(undefined **)(str + 0x18) = &g_emptyStringData;
  *(undefined4 *)(str + 0x28) = 0;
  *(undefined **)(str + 0x28) = &g_emptyStringData;
  *(undefined4 *)(str + 0x38) = 0;
  *(undefined **)(str + 0x38) = &g_emptyStringData;
  *(undefined4 *)(str + 0x48) = 0;
  *(undefined **)(str + 0x48) = &g_emptyStringData;
  *(undefined4 *)(str + 0x58) = 0;
  *(undefined **)(str + 0x58) = &g_emptyStringData;
  FUN_004bbd80(str,param_2,param_3);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bca70  FUN_004bca70   (110 bytes)   [unnamed]
void __cdecl FUN_004bca70(int param_1)

{
  int iVar1;
  uint buffer [65];
  
  FUN_004bcae0(param_1,0x1f);
  iVar1 = FUN_004dc978((char *)(param_1 + 0x60),&DAT_0050f43c);
  if (iVar1 == 0) {
    std::string::assign_cstr(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)buffer,(LPSTR *)0x0);
    std::string::assign_cstr(param_1 + 0x50,buffer);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcae0  FUN_004bcae0   (371 bytes)   [unnamed]
int __cdecl FUN_004bcae0(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f23c);
      if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0)) {
        FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
      }
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f238);
      FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 8));
      if ((param_2 & 2) != 0) {
        FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
      }
    }
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      if (((param_2 & 4) != 0) || ((param_2 & 8) != 0)) {
        FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
      }
    }
  }
  if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0)) {
    FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x28));
    FUN_004dc8e8((char *)(param_1 + 0x60),&DAT_0050f241);
  }
  if (((param_2 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + -4) != 0)) {
    FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x38));
  }
  if (((param_2 & 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x48) + -4) != 0)) {
    FUN_004dc8e8((char *)(param_1 + 0x60),*(char **)(param_1 + 0x48));
  }
  return param_1 + 0x60;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcc54  FUN_004bcc54   (112 bytes)   [unnamed]
bool __cdecl FUN_004bcc54(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_2 & 1) != 0) {
    bVar1 = *(int *)(*(int *)(param_1 + 8) + -4) != 0;
  }
  if ((param_2 & 2) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x18) + -4) != 0);
  }
  if ((param_2 & 4) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x28) + -4) != 0);
  }
  if ((param_2 & 8) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x38) + -4) != 0);
  }
  if ((param_2 & 0x10) != 0) {
    bVar1 = (bool)(bVar1 | *(int *)(*(int *)(param_1 + 0x48) + -4) != 0);
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bccc4  FUN_004bccc4   (117 bytes)   [unnamed]
undefined4 * __cdecl FUN_004bccc4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50f450);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  uVar1 = operator_new_array();
  param_1[3] = uVar1;
  uVar1 = operator_new_array();
  param_1[4] = uVar1;
  *(undefined1 *)param_1[4] = 0;
  *(undefined1 *)param_1[3] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcde4  FUN_004bcde4   (154 bytes)   [unnamed]
void __cdecl FUN_004bcde4(int *param_1,int param_2)

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
// 0x004bcffc  FUN_004bcffc   (33 bytes)   [unnamed]
void __cdecl FUN_004bcffc(int param_1,int param_2)

{
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd5e4  FUN_004bd5e4   (127 bytes)   [unnamed]
void __cdecl FUN_004bd5e4(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00499da0(param_2,param_1,4);
  uVar1 = FUN_00499e9c(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  operator_delete_array();
  operator_delete_array();
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_00499da0(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_00499da0(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd664  FUN_004bd664   (86 bytes)   [unnamed]
void __cdecl FUN_004bd664(undefined4 *param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = *param_1;
  FUN_0049a294(param_2,&local_8,4);
  FUN_0049a31c(param_2);
  FUN_0049a294(param_2,param_1[3],param_1[1]);
  FUN_0049a294(param_2,param_1[4],param_1[1]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd6bc  FUN_004bd6bc   (68 bytes)   [unnamed]
uint __cdecl FUN_004bd6bc(HMENU hMenu,int param_2)

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
// 0x004bd700  FUN_004bd700   (163 bytes)   [unnamed]
HICON __stdcall FUN_004bd700(void)

{
  HICON hIcon2;
  WNDCLASSA wndClass;
  
  if (DAT_0050f7d0 == (HICON)0x0) {
    memset(&wndClass.style,0,0x28);
    wndClass.hInstance = *(HINSTANCE *)(DAT_00512a1c + 8);
    wndClass.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    wndClass.lpszClassName = "IconSnarfer";
    wndClass.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&wndClass);
    GetClassInfoA(*(HINSTANCE *)(DAT_00512a1c + 8),"IconSnarfer",&wndClass);
    DAT_0050f7d0 = wndClass.hIcon;
    UnregisterClassA("IconSnarfer",*(HINSTANCE *)(DAT_00512a1c + 8));
  }
  hIcon2 = DAT_0050f7d0;
  if (DAT_0050f7d0 == (HICON)0x0) {
    hIcon2 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return hIcon2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd7a3  FUN_004bd7a3   (105 bytes)   [unnamed]
int __cdecl FUN_004bd7a3(int param_1)

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
        iVar3 = FUN_004bd7a3(iVar4);
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
// 0x004bd80c  FUN_004bd80c   (52 bytes)   [unnamed]
bool __cdecl FUN_004bd80c(int param_1)

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
// 0x004bdb60  FUN_004bdb60   (78 bytes)   [unnamed]
void __cdecl FUN_004bdb60(int *param_1,int param_2,char param_3)

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
    FUN_004bdbb0(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bdbb0  FUN_004bdbb0   (186 bytes)   [unnamed]
void __cdecl FUN_004bdbb0(int *param_1,undefined4 param_2)

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
  FUN_004be1e0(param_1,(*(undefined4 *)&DAT_00512a1c),32000);
  FUN_004be26c(param_1,(*(undefined4 *)&DAT_00512a1c),(HANDLE)0x7d01);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0xffffffff;
  if (*(int *)((int)param_1 + 0x15) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 2;
    *(undefined4 *)(*param_1 + 0x5c) = (*(undefined4 *)&DAT_0051b1a0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bdebc  Child4972344_Notify4914610_4bdebc   (122 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 4972344, code 4914610)
//   also: OWL::TFrameWindow::IdleAction [rtti:vtable]; OWL::TFrameWindow::vf11 [rtti:vtable]
void __cdecl Child4972344_Notify4914610_4bdebc(int *param_1,int param_2)

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
            FUN_004a6094(*param_1,0x117,hMenu,0);
          }
        }
      }
    }
  }
  OWL::TWindow::IdleAction(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004be1e0  FUN_004be1e0   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_004be1e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL ok;
  
  if ((*(int *)((int)param_1 + 0x42) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_004c1ed0();
    in_EAX = 0;
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_3;
  if (*(int *)((int)param_1 + 0x2a) != 0) {
    in_EAX = *(undefined4 *)((int)param_1 + 0x2a);
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    in_EAX = FUN_004c1e90();
    *(undefined4 *)((int)param_1 + 0x42) = in_EAX;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    ok = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (ok != 0) {
      in_EAX = FUN_004a76a8(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004be26c  FUN_004be26c   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_004be26c(int *param_1,undefined4 param_2,HANDLE param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int cy;
  int cx;
  BOOL ok;
  HINSTANCE hInst;
  UINT fuLoad;
  
  bVar1 = FUN_004875a8();
  if (bVar1) {
    if ((*(int *)((int)param_1 + 0x46) != 0) && (*(int *)((int)param_1 + 0x32) != 0)) {
      FUN_004c1ed0();
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
      cy = GetSystemMetrics(DAT_00509f50);
      cx = GetSystemMetrics(DAT_00509f48);
      param_3 = LoadImageA(hInst,*(LPCSTR *)((int)param_1 + 0x36),1,cx,cy,fuLoad);
      *(HANDLE *)((int)param_1 + 0x46) = param_3;
      if (*(int *)((int)param_1 + 0x46) == 0) {
        param_3 = (HANDLE)FUN_004c1e90();
        *(HANDLE *)((int)param_1 + 0x46) = param_3;
      }
    }
    if (*(int *)((int)param_1 + 0x46) != 0) {
      ok = IsWindow(*(HWND *)(*param_1 + 0xc));
      param_3 = (HANDLE)0x0;
      if (ok != 0) {
        param_3 = (HANDLE)FUN_004a76a8(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
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
// 0x004be7cc  FUN_004be7cc   (47 bytes)   [unnamed]
int __cdecl FUN_004be7cc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004bd7a3(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004a7590(*param_1,(undefined*)FUN_004bd80c);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004be9dc  FUN_004be9dc   (1371 bytes)   [unnamed]
undefined4 __cdecl FUN_004be9dc(int *param_1,char param_2)

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
    FUN_004a7a6c(*param_1,&rect6);
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
    FUN_004a7a30(*(int *)((int)param_1 + 0x15),&rect5);
    pRect = &rect5;
    pLVar9 = local_a8;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar9 = pLVar9 + 1;
    }
    local_10 = local_a8[3] - local_a8[1];
    local_14 = local_a8[2] - local_a8[0];
    uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
    if (((uVar4 & 0x80440000) != 0) ||
       (uVar4 = FUN_004a793c(*(int *)((int)param_1 + 0x15)), (uVar4 & 0x20101) != 0)) {
      if ((*(byte *)(*param_1 + 0x74) & 8) != 0) {
        rect4.left = 0;
        rect4.top = 0;
        rect4.right = 0;
        rect4.bottom = 0;
        FUN_004a7a6c(*(int *)((int)param_1 + 0x15),&rect4);
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
        FUN_004a7a6c(*(int *)((int)param_1 + 0x15),&rect3);
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
      uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x80440000) != 0) {
        uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
        local_3d = (uVar4 & 0x80000000) != 0;
        uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
        FUN_004a7910(*(int *)((int)param_1 + 0x15),uVar4 & 0x7fbbffff | 0x50800000);
        if (local_3d != '\0') {
          SetParent(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),*(HWND *)(*param_1 + 0xc));
        }
      }
      uVar4 = FUN_004a793c(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x20101) != 0) {
        uVar4 = FUN_004a793c(*(int *)((int)param_1 + 0x15));
        FUN_004a795c(*(int *)((int)param_1 + 0x15),uVar4 & 0xfffdfefe);
      }
    }
    uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) != 0) {
      rect2.left = 0;
      rect2.top = 0;
      rect2.right = 0;
      rect2.bottom = 0;
      FUN_004a7a6c(*(int *)((int)param_1 + 0x15),&rect2);
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
        FUN_004a7a30(*param_1,&rect);
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
        FUN_004a7aa0(*param_1,(HWND)0x0,0,0,local_14 + local_54,local_10 + local_50,uVar4 | 0x12);
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
      puVar5 = FUN_004dd744((int)param_1,iVar7,(int *)&DAT_00415b1c,(int *)&DAT_004b17e8,0);
      if (puVar5 == (undefined4 *)0x0) {
        *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffff7;
      }
    }
    uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) == 0) {
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_004a7aa0(*(int *)((int)param_1 + 0x15),(HWND)0x0,0,0,cx2,cy2,uVar4 | 0x214);
    }
    else {
      iVar7 = GetSystemMetrics(DAT_00509de8);
      unused = DAT_00509df0;
      metric = GetSystemMetrics(DAT_00509df0);
      cy = cy2 + metric * 2;
      cx = cx2 + iVar7 * 2;
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_004a7aa0(*(int *)((int)param_1 + 0x15),(HWND)0x0,-iVar7,-metric,cx,cy,
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
// 0x004bf118  FUN_004bf118   (44 bytes)   [unnamed]
void __cdecl FUN_004bf118(int *param_1,WPARAM wParam,LPARAM lParam)

{
  if (((wParam == 1) || (wParam == 2)) || (wParam == 0)) {
    FUN_004a7740(*param_1,0x7ef5,wParam,lParam);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf14a  FUN_004bf14a   (187 bytes)   [unnamed]
void __stdcall FUN_004bf14a(void)

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
      uVar4 = FUN_004be9dc(piVar3,'\x01');
      *(char *)(unaff_EBP + -1) = (char)uVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_004a7a6c(*(int *)((int)piVar3 + 0x15),(LPRECT)(unaff_EBP + -0x24));
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
      FUN_004a7708(*(int *)((int)piVar3 + 0x15),'\x01');
    }
  }
  FUN_004bf118(piVar3,wParam,(LPARAM)lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf6d0  FUN_004bf6d0   (33 bytes)   [unnamed]
void __cdecl FUN_004bf6d0(int *param_1)

{
  FUN_0049b9d4(*param_1);
  *(undefined4 *)(param_1[1] + 1) = 0;
  FUN_004bf704((int)param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf6f4  FUN_004bf6f4   (14 bytes)   [unnamed]
undefined4 __cdecl FUN_004bf6f4(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf704  FUN_004bf704   (16 bytes)   [unnamed]
void __cdecl FUN_004bf704(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + 1) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf714  FUN_004bf714   (499 bytes)   [unnamed]
void __cdecl FUN_004bf714(int *param_1,uint *s,char param_3)

{
  uint len;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x50fd1c);
  std::string::string_from_cstr((int)str,s);
  iVar3 = *param_1;
  if (*(uint *)(iVar3 + 5) <= *(uint *)(iVar3 + 1)) {
    FUN_0049baac(iVar3,*(int *)(iVar3 + 1) + 1);
  }
  piVar4 = (int *)(iVar3 + 0xd);
  if (*piVar4 == 0) {
    piVar2 = (int *)FUN_0048c8fc(iVar3 + 0x11,*(uint *)(iVar3 + 0x22));
  }
  else {
    piVar2 = (int *)*piVar4;
    *piVar4 = *piVar2;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
      len = local_c[-1];
      piVar4 = std::string::__getRep(piVar2,len,len);
      piVar2[2] = (int)(piVar4 + 3);
      memcpy((undefined4 *)piVar2[2],local_c,len);
    }
    else {
      piVar2[2] = (int)local_c;
      piVar4 = (int *)(piVar2[2] + -0xc);
      if (piVar4 != &g_nullStringRep) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  *(int **)(*(int *)(iVar3 + 9) + *(int *)(iVar3 + 1) * 4) = piVar2;
  *(int *)(iVar3 + 1) = *(int *)(iVar3 + 1) + 1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (piVar4 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004bf8db;
    }
    operator_delete();
    local_c = (undefined4 *)0x0;
  }
LAB_004bf8db:
  if (param_3 != '\0') {
    FUN_004bf950((int)param_1,*(int *)(*param_1 + 1) + -1);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf908  FUN_004bf908   (70 bytes)   [unnamed]
void __cdecl FUN_004bf908(int *param_1,uint *s,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_0048ace4(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_3;
  FUN_004bf714(param_1,s,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf950  FUN_004bf950   (72 bytes)   [unnamed]
void __cdecl FUN_004bf950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != -1) {
    iVar2 = FUN_004bf998(*(int *)(param_1 + 8),param_2);
    if (iVar2 == -1) {
      iVar2 = *(int *)(param_1 + 8);
      if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
        FUN_0048aee8(iVar2,*(int *)(iVar2 + 1) + 1);
      }
      iVar1 = *(int *)(iVar2 + 1);
      *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
      *(int *)(*(int *)(iVar2 + 9) + iVar1 * 4) = param_2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf998  FUN_004bf998   (34 bytes)   [unnamed]
int __cdecl FUN_004bf998(int param_1,int param_2)

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
// 0x004bfd60  FUN_004bfd60   (68 bytes)   [unnamed]
undefined4 __cdecl FUN_004bfd60(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  
  iVar2 = *param_1;
  uVar1 = FUN_004a78f0(iVar2);
  if ((uVar1 & 0x808) == 0) {
    iVar2 = (**(code **)(param_1[3] + 0x6c))(param_1[3],extraout_EDX,iVar2,param_1);
    if (-1 < iVar2) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a76a8(*param_1,400,0,0);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bfdd8  FUN_004bfdd8   (52 bytes)   [unnamed]
undefined4 __cdecl FUN_004bfdd8(int *param_1,LPARAM lParam,WPARAM wParam)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x808) == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004a76a8(*param_1,0x191,wParam,lParam);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bfeac  InitRichEditStreamer_4bfeac   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4bfeac(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ff04);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c00dc;
  puVar1 = FUN_004dd5cc(1,0,0x407170);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b8cc,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bff02  FUN_004bff02   (48 bytes)   [unnamed]
void __stdcall FUN_004bff02(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ff18);
  OWL::TStreamableClass::_dtor(0x51b8cc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

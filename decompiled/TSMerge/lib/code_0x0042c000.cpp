// TSMerge.exe — runtime / library code "code_0x0042c000"
// 58 functions, 0x0042c0dc..0x0042f180. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042c0dc  FUN_0042c0dc   (118 bytes)   [unnamed]
void __cdecl FUN_0042c0dc(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  if (param_4 == (HWND)0x0) {
    FUN_0042b294(param_1);
  }
  else {
    LVar2 = FUN_0042bc6c(param_4,*(LPARAM *)(param_1 + 0x6c));
    if (LVar2 != 0) {
      FUN_0042d204(LVar2,'\x01');
    }
    uVar3 = GetDlgCtrlID(param_4);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x5b) = 0x111;
    *(uint *)(iVar1 + 0x5f) = param_2 << 0x10 | uVar3 & 0xffff;
    *(HWND *)(iVar1 + 99) = param_4;
    (**(code **)(*(int *)(param_1 + 8) + 0x48))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c6ec  FUN_0042c6ec   (18 bytes)   [unnamed]
void __cdecl FUN_0042c6ec(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c89c  FUN_0042c89c   (43 bytes)   [unnamed]
void __cdecl FUN_0042c89c(int param_1)

{
  HACCEL pHVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    pHVar1 = FUN_00444ce8(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = pHVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbe0  FUN_0042cbe0   (96 bytes)   [unnamed]
void __cdecl FUN_0042cbe0(int param_1)

{
  DWORD DVar1;
  LONG LVar2;
  DWORD local_8;
  
  local_8 = 0;
  GetWindowThreadProcessId(*(HWND *)(param_1 + 0xc),&local_8);
  DVar1 = GetCurrentProcessId();
  if (DVar1 == local_8) {
    LVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-4);
    if (LVar2 == *(int *)(param_1 + 0x68)) {
      if (*(int *)(param_1 + 0x40) == 0) {
        *(code **)(param_1 + 0x40) = DefWindowProcA;
      }
    }
    else {
      FUN_004238e0();
      LVar2 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-4,*(LONG *)(param_1 + 0x68));
      *(LONG *)(param_1 + 0x40) = LVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cf38  FUN_0042cf38   (23 bytes)   [unnamed]
int __cdecl FUN_0042cf38(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042d154(param_1);
  return iVar1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cf50  FUN_0042cf50   (101 bytes)   [unnamed]
void __cdecl FUN_0042cf50(int param_1)

{
  short sVar1;
  HWND pHVar2;
  LRESULT LVar3;
  
  if ((*(HWND *)(param_1 + 0xc) != (HWND)0x0) &&
     (pHVar2 = GetWindow(*(HWND *)(param_1 + 0xc),5), pHVar2 != (HWND)0x0)) {
    sVar1 = 1;
    for (pHVar2 = GetWindow(pHVar2,1); pHVar2 != (HWND)0x0; pHVar2 = GetWindow(pHVar2,3)) {
      LVar3 = FUN_0042bc6c(pHVar2,*(LPARAM *)(param_1 + 0x6c));
      if (LVar3 != 0) {
        *(short *)(LVar3 + 0x78) = sVar1;
        sVar1 = sVar1 + 1;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cfb8  FUN_0042cfb8   (23 bytes)   [unnamed]
bool __cdecl FUN_0042cfb8(undefined4 param_1,int param_2,uint *param_3)

{
  return (uint)*(ushort *)(param_2 + 0x78) == *param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cfd0  FUN_0042cfd0   (139 bytes)   [unnamed]
undefined4 __cdecl FUN_0042cfd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  uint3 extraout_var;
  
  iVar1 = FUN_0042d08c(param_1,(undefined*)FUN_0042a769);
  if (iVar1 != 0) {
    FUN_0042e05c(iVar1,0x7fe9);
  }
  pHVar4 = (HWND)0x0;
  iVar1 = FUN_0042cf38(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_0042d100(param_1,PTR_FUN_0046a417);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_0042d59c(iVar2,pHVar4,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      pHVar4 = *(HWND *)(iVar2 + 0xc);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d05c  FUN_0042d05c   (47 bytes)   [unnamed]
void __cdecl FUN_0042d05c(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x7a) != 0) {
      *(undefined4 *)(param_2 + 0x7e) = *(undefined4 *)(*(int *)(param_1 + 0x7a) + 0x7e);
      *(int *)(*(int *)(param_1 + 0x7a) + 0x7e) = param_2;
      *(int *)(param_1 + 0x7a) = param_2;
      return;
    }
    *(int *)(param_1 + 0x7a) = param_2;
    *(int *)(param_2 + 0x7e) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d08c  FUN_0042d08c   (62 bytes)   [unnamed]
int __cdecl FUN_0042d08c(int param_1,undefined *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar3 + 0x7e);
      cVar2 = (*(code *)param_2)();
      if (cVar2 != '\0') {
        return iVar3;
      }
    } while ((iVar3 != *(int *)(param_1 + 0x7a)) && (iVar3 = iVar1, *(int *)(param_1 + 0x7a) != 0));
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d0cc  FUN_0042d0cc   (52 bytes)   [unnamed]
void __cdecl FUN_0042d0cc(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar2 + 0x7e);
      (*(code *)param_2)();
      if (iVar2 == *(int *)(param_1 + 0x7a)) {
        return;
      }
      iVar2 = iVar1;
    } while (*(int *)(param_1 + 0x7a) != 0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d100  FUN_0042d100   (83 bytes)   [unnamed]
int __cdecl FUN_0042d100(int param_1,undefined *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7a) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7a) + 0x7e);
    do {
      iVar1 = *(int *)(iVar3 + 0x7e);
      cVar2 = (*(code *)param_2)();
      if (cVar2 != '\0') {
        return iVar3;
      }
    } while ((iVar3 != *(int *)(param_1 + 0x7a)) && (iVar3 = iVar1, *(int *)(param_1 + 0x7a) != 0));
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d154  FUN_0042d154   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d154(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined4 *)&DAT_00477078) = 0xffffffff;
  iVar1 = FUN_0042d08c(param_1,(undefined*)FUN_0042a7f2);
  uVar2 = (*(undefined4 *)&DAT_00477078);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d188  FUN_0042d188   (26 bytes)   [unnamed]
int __cdecl FUN_0042d188(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042d08c(param_1,(undefined*)FUN_0042a809);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d1a4  FUN_0042d1a4   (25 bytes)   [unnamed]
LRESULT __cdecl FUN_0042d1a4(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d1c0  FUN_0042d1c0   (65 bytes, 2 ranges)   [unnamed]
LRESULT __cdecl FUN_0042d1c0(int param_1,HWND param_2,char param_3)

{
  int iVar1;
  LRESULT LVar2;
  BOOL BVar3;
  
  if (param_2 == (HWND)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_3 != '\0') {
    LVar2 = SendMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                         *(LPARAM *)(iVar1 + 99));
    return LVar2;
  }
  BVar3 = PostMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                       *(LPARAM *)(iVar1 + 99));
  return BVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d204  FUN_0042d204   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d204(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    uVar2 = FUN_0042bbb4(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                         *(undefined4 *)(iVar1 + 99));
    return uVar2;
  }
  LVar3 = FUN_0042d1c0(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return LVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d23c  FUN_0042d23c   (62 bytes)   [unnamed]
void __cdecl FUN_0042d23c(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  HWND pHVar1;
  
  hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5);
  while (hWnd != (HWND)0x0) {
    pHVar1 = GetWindow(hWnd,2);
    SendMessageA(hWnd,param_2,param_3,param_4);
    hWnd = pHVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d27c  FUN_0042d27c   (71 bytes)   [unnamed]
void __cdecl FUN_0042d27c(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)(param_1 + 0x10)) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    uVar1 = FUN_0041fd2c(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    SetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPCSTR *)(param_1 + 0x10));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d2c4  FUN_0042d2c4   (116 bytes)   [unnamed]
void __cdecl FUN_0042d2c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    iVar1 = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (iVar1 < 0) {
      uVar2 = FUN_0041fd2c((uint *)("MSWHEEL_ROLLMSG" + 0xf));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = operator_new_array();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1) = 0;
      GetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPSTR *)(param_1 + 0x10),iVar1 + 1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d338  FUN_0042d338   (177 bytes)   [unnamed]
LONG __cdecl FUN_0042d338(int param_1,char param_2)

{
  LONG LVar1;
  HWND hWnd;
  tagRECT local_14;
  
  if (((*(byte *)(param_1 + 0x74) & 4) != 0) || (param_2 != '\0')) {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    *(LONG *)(param_1 + 0x18) = LVar1;
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
    *(LONG *)(param_1 + 0x1c) = LVar1;
  }
  local_14.left = 0;
  local_14.top = 0;
  local_14.right = 0;
  local_14.bottom = 0;
  FUN_0042d52c(param_1,&local_14);
  *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
  if (*(int *)(param_1 + 0xc) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = GetParent(*(HWND *)(param_1 + 0xc));
  }
  if (((*(byte *)(param_1 + 0x1b) & 0x40) != 0) && (hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&local_14);
  }
  *(LONG *)(param_1 + 0x20) = local_14.left;
  *(LONG *)(param_1 + 0x24) = local_14.top;
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0xc);
  *(LONG *)(param_1 + 0x34) = LVar1;
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d3ec  FUN_0042d3ec   (31 bytes)   [unnamed]
LONG __cdecl FUN_0042d3ec(int param_1)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
  }
  else {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d40c  FUN_0042d40c   (44 bytes)   [unnamed]
LONG __cdecl FUN_0042d40c(int param_1,LONG param_2)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
    *(LONG *)(param_1 + 0x18) = param_2;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10,param_2);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d438  FUN_0042d438   (31 bytes)   [unnamed]
LONG __cdecl FUN_0042d438(int param_1)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
  }
  else {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d458  FUN_0042d458   (44 bytes)   [unnamed]
LONG __cdecl FUN_0042d458(int param_1,LONG param_2)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
    *(LONG *)(param_1 + 0x1c) = param_2;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14,param_2);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d484  FUN_0042d484   (85 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d484(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint uVar4;
  
  uVar1 = FUN_0042d3ec(param_1);
  uVar4 = ~param_2 & uVar1 | param_3;
  if (uVar4 == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_0042d40c(param_1,uVar4);
    if ((param_4 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_0042d59c(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d4dc  FUN_0042d4dc   (79 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d4dc(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint uVar4;
  
  uVar1 = FUN_0042d438(param_1);
  uVar4 = ~param_2 & uVar1 | param_3;
  if (uVar4 == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_0042d458(param_1,uVar4);
    if (param_4 != 0) {
      FUN_0042d59c(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d52c  FUN_0042d52c   (59 bytes)   [unnamed]
void __cdecl FUN_0042d52c(int param_1,LPRECT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x20);
    param_2->left = iVar4;
    param_2->top = iVar3;
    param_2->right = iVar2 + iVar4;
    param_2->bottom = iVar1 + iVar3;
  }
  else {
    GetWindowRect(*(HWND *)(param_1 + 0xc),param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d568  FUN_0042d568   (52 bytes)   [unnamed]
void __cdecl FUN_0042d568(int param_1,LPRECT param_2)

{
  LONG LVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    GetClientRect(*(HWND *)(param_1 + 0xc),param_2);
    return;
  }
  LVar1 = *(LONG *)(param_1 + 0x2c);
  LVar2 = *(LONG *)(param_1 + 0x28);
  param_2->left = 0;
  param_2->top = 0;
  param_2->right = LVar2;
  param_2->bottom = LVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d59c  FUN_0042d59c   (129 bytes)   [unnamed]
bool __cdecl FUN_0042d59c(int param_1,HWND param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  BOOL BVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((param_7 & 2) == 0) {
      *(int *)(param_1 + 0x20) = param_3;
      *(int *)(param_1 + 0x24) = param_4;
    }
    if ((param_7 & 1) == 0) {
      *(int *)(param_1 + 0x28) = param_5;
      *(int *)(param_1 + 0x2c) = param_6;
    }
    if ((param_7 & 0x40) == 0) {
      if ((param_7 & 0x80) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    }
    bVar2 = true;
  }
  else {
    BVar1 = SetWindowPos(*(HWND *)(param_1 + 0xc),param_2,param_3,param_4,param_5,param_6,param_7);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d6f8  FUN_0042d6f8   (286 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d6f8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HCURSOR hCursor;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int local_30 [4];
  tagRECT local_20;
  char local_d;
  tagPOINT local_c;
  
  if ((param_2 == *(int *)(param_1 + 0x50)) && (param_3 == *(int *)(param_1 + 0x54))) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x50) == 0)) {
      hCursor = (HCURSOR)0x0;
    }
    else {
      hCursor = *(HCURSOR *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x50) = param_2;
    *(int *)(param_1 + 0x54) = param_3;
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else if (*(int *)(param_1 + 0x50) == 0) {
      param_3 = (int)LoadCursorA((HINSTANCE)0x0,*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    else {
      param_3 = (int)FUN_00444d80(*(int *)(param_1 + 0x50),*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(param_1 + 0xc),&local_c);
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_0042d568(param_1,&local_20);
      ptVar3 = &local_20;
      pLVar4 = local_30;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      param_3 = local_c.x;
      if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1]))
         || (param_3 = local_c.y, local_30[3] <= local_c.y)) {
        local_d = '\0';
      }
      else {
        local_d = '\x01';
      }
      if (local_d != '\0') {
        param_3 = (int)SetCursor(*(HCURSOR *)(param_1 + 0x58));
      }
    }
    if (hCursor != (HCURSOR)0x0) {
      param_3 = DestroyCursor(hCursor);
    }
    uVar1 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042da3c  FUN_0042da3c   (64 bytes)   [unnamed]
int __cdecl FUN_0042da3c(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  FUN_0042dd5c(param_1,param_2,&local_20);
  return local_20.nPos;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042da7c  FUN_0042da7c   (90 bytes)   [unnamed]
int __cdecl FUN_0042da7c(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  SCROLLINFO local_20;
  
  iVar1 = FUN_0042da3c(param_1,param_2);
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 4;
  local_20.nPos = param_3;
  FUN_0042dd40(param_1,param_2,&local_20,param_4);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dad8  FUN_0042dad8   (77 bytes)   [unnamed]
void __cdecl FUN_0042dad8(int param_1,int param_2,int *param_3,int *param_4)

{
  tagSCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  FUN_0042dd5c(param_1,param_2,&local_20);
  *param_3 = local_20.nMin;
  *param_4 = local_20.nMax;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db28  FUN_0042db28   (77 bytes)   [unnamed]
void __cdecl FUN_0042db28(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  SCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 1;
  local_20.nMin = param_3;
  local_20.nMax = param_4;
  FUN_0042dd40(param_1,param_2,&local_20,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db78  FUN_0042db78   (71 bytes)   [unnamed]
void __cdecl FUN_0042db78(int param_1,int param_2,UINT param_3,byte param_4)

{
  SCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  local_20.nPage = param_3;
  FUN_0042dd40(param_1,param_2,&local_20,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dbc0  FUN_0042dbc0   (64 bytes)   [unnamed]
UINT __cdecl FUN_0042dbc0(int param_1,int param_2)

{
  tagSCROLLINFO local_20;
  
  memset(&local_20.cbSize,0,0x1c);
  local_20.cbSize = 0x1c;
  local_20.fMask = 2;
  FUN_0042dd5c(param_1,param_2,&local_20);
  return local_20.nPage;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc98  FUN_0042dc98   (168 bytes)   [unnamed]
void __cdecl FUN_0042dc98(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46aa48);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0) {
      if (*(int *)(param_1 + 100) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 100) + 0xc))();
      }
    }
    else {
      FUN_0042d1a4(**(int **)(param_1 + 100),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 100) = param_2;
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0)) {
    puVar1 = (uint *)(**(int **)(param_1 + 100) + 0x18);
    *puVar1 = *puVar1 | 0x8000000;
    (**(code **)(*(int *)(**(int **)(param_1 + 100) + 8) + 0x10))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd40  FUN_0042dd40   (28 bytes)   [unnamed]
void __cdecl FUN_0042dd40(int param_1,int param_2,LPCSCROLLINFO param_3,byte param_4)

{
  SetScrollInfo(*(HWND *)(param_1 + 0xc),param_2,param_3,(uint)param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd5c  FUN_0042dd5c   (22 bytes)   [unnamed]
void __cdecl FUN_0042dd5c(int param_1,int param_2,LPSCROLLINFO param_3)

{
  GetScrollInfo(*(HWND *)(param_1 + 0xc),param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd74  FUN_0042dd74   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042dd74(undefined4 *param_1)

{
  BOOL BVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  BVar1 = IsBadReadPtr(param_1,8);
  if (BVar1 != 0) {
    return (undefined4 *)0x0;
  }
  if (param_1[1] != 0x69777264) {
    return (undefined4 *)0x0;
  }
  BVar1 = IsBadReadPtr((void *)*param_1,4);
  if (BVar1 != 0) {
    return (undefined4 *)0x0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ddc0  FUN_0042ddc0   (248 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042ddc0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint uVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x46aa88);
  iVar2 = DAT_00470a60;
  uVar4 = param_3;
  puVar1 = FUN_0042a81f(param_2);
  FUN_00418444((int)local_14,param_3,puVar1,iVar2);
  FUN_00417f14(param_1,(int)local_14,uVar4);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0042de88;
    }
    operator_delete();
  }
LAB_0042de88:
  *param_1 = &OWL::TXWindow::vftable;
  param_1[3] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ded4  FUN_0042ded4   (105 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042ded4(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46aad0);
  FUN_00417b88(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &OWL::TXOwl::vftable;
  *param_1 = &OWL::TXWindow::vftable;
  param_1[3] = param_2[3];
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e05c  FUN_0042e05c   (86 bytes)   [unnamed]
void __cdecl FUN_0042e05c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x46ab48);
  piVar1 = FUN_0042ddc0(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_14,0);
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e1ac  FUN_0042e1ac   (102 bytes)   [unnamed]
int * __cdecl FUN_0042e1ac(int *param_1,undefined4 param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46abd0);
  FUN_00416afc(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)((int)param_1 + 0x21) = param_2;
  pHVar1 = GetWindowDC(*(HWND *)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_0041c800(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e298  FUN_0042e298   (66 bytes)   [unnamed]
int * __cdecl FUN_0042e298(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ac18);
  FUN_0042e1ac(param_1,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TScreenDC::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e2fc  FUN_0042e2fc   (97 bytes)   [unnamed]
int * __cdecl FUN_0042e2fc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  iVar1 = FUN_00422970(param_1);
  if (iVar1 == 0) {
    puVar2 = FUN_00422a30(param_1);
    *param_2 = puVar2;
  }
  else {
    FUN_0042280c(param_1,&local_8,4);
    *param_2 = local_8;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e360  FUN_0042e360   (101 bytes)   [unnamed]
int * __cdecl FUN_0042e360(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = *param_2;
  FUN_00422d88(param_1);
  if ((short)((uint)uVar1 >> 0x10) == 0) {
    local_8 = *param_2;
    FUN_00422d00(param_1,&local_8,4);
  }
  else {
    FUN_00422e78(param_1,(uint *)*param_2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e3c8  FUN_0042e3c8   (51 bytes)   [unnamed]
void __cdecl FUN_0042e3c8(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  WORD wLanguageId;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)FUN_0041147c();
  iVar2 = FUN_004116c4(puVar1,iVar2);
  if (iVar2 == 0) {
    wLanguageId = 0;
  }
  else {
    wLanguageId = *(WORD *)(iVar2 + 0x2f);
  }
  MessageBoxExA(param_1,param_2,param_3,param_4,wLanguageId);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e3fb  FUN_0042e3fb   (83 bytes)   [unnamed]
void __stdcall FUN_0042e3fb(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ad06);
  if (DAT_0046ad05 != '\0') {
    DAT_0046ad05 = '\0';
  }
  if (DAT_0046ad04 != '\0') {
    OWL::TApplicatData::_dtor(0x477180,2);
    DAT_0046ad04 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e450  FUN_0042e450   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042e450(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ad20);
  *param_1 = FUN_0042e3c8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e4c0  FUN_0042e4c0   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0042e4c0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ad44);
  if (DAT_0046ad04 == '\0') {
    FUN_0042e450((undefined4 *)&DAT_00477180);
    DAT_0046ad04 = DAT_0046ad04 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00477180;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e55c  FUN_0042e55c   (85 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0042e55c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ad68);
  if (DAT_0046ad05 == '\0') {
    _DAT_00477184 = 0;
    _DAT_00477188 = 0;
    _DAT_0047718c = 0;
    DAT_0046ad05 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00477184;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e620  FUN_0042e620   (183 bytes)   [unnamed]
void __stdcall FUN_0042e620(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ad84);
  if (DAT_0046ad7c == '\0') goto LAB_0042e6c7;
  if (DAT_004771a4 != 0) {
    if (*(int *)(DAT_004771a4 + -0xc) != -1) {
      piVar2 = (int *)(DAT_004771a4 + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0042e6c0;
    }
    operator_delete();
    DAT_004771a4 = 0;
  }
LAB_0042e6c0:
  DAT_0046ad7c = '\0';
LAB_0042e6c7:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e6d8  FUN_0042e6d8   (109 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0042e720) */
undefined * __stdcall FUN_0042e6d8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ada8);
  if (DAT_0046ad7c == '\0') {
    (*(undefined * *)&DAT_004771a4) = &DAT_00471d68;
    DAT_0046ad7c = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0047719c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e748  FUN_0042e748   (528 bytes)   [unnamed]
int * __cdecl FUN_0042e748(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46add8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6f) = 0;
    *(undefined ***)((int)param_1 + 0x73) = &OWL::TEventHandler::vftable;
  }
  cVar4 = '\x01';
  puVar2 = FUN_0042e6d8();
  FUN_00443c6c(param_1 + 1,param_3,(*(int *)&DAT_00477190),*(undefined4 *)(puVar2 + 8),cVar4);
  FUN_004216ec((undefined4 *)((int)param_1 + 0x11));
  *(undefined ***)((int)param_1 + 0x1b) = &OWL::TApplication::vftable;
  param_1[1] = (int)&PTR_LAB_0046ae70;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0046ae80;
  *(undefined ***)*param_1 = &PTR_LAB_0046aea0;
  *(undefined4 *)((int)param_1 + 0x1f) = DAT_00477194;
  *(undefined4 *)((int)param_1 + 0x23) = DAT_00477198;
  *(undefined4 *)((int)param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0x2f) = 0x400;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  puVar2 = FUN_0042e6d8();
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  if (*(int *)(*(int *)(puVar2 + 8) + -0xc) == -1 || *(int *)(*(int *)(puVar2 + 8) + -0xc) + 1 < 0)
  {
    uVar1 = *(uint *)(*(int *)(puVar2 + 8) + -4);
    piVar3 = std::string::__getRep((int)param_1 + 0x35,uVar1,uVar1);
    *(int **)((int)param_1 + 0x3d) = piVar3 + 3;
    memcpy(*(undefined4 **)((int)param_1 + 0x3d),*(undefined4 **)(puVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x3d) = *(undefined4 *)(puVar2 + 8);
    piVar3 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x45) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x53) = 0;
  *(undefined4 *)((int)param_1 + 0x57) = 0;
  *(undefined4 *)((int)param_1 + 0x5b) = 0;
  *(undefined4 *)((int)param_1 + 0x5f) = 0;
  *(undefined4 *)((int)param_1 + 99) = 0;
  *(undefined4 *)((int)param_1 + 0x67) = 0;
  if (param_5 == (undefined *)0x0) {
    param_5 = FUN_0041147c();
  }
  *(undefined **)((int)param_1 + 0x6b) = param_5;
  FUN_004116f4(*(undefined4 **)((int)param_1 + 0x6b),param_1,0);
  *param_4 = param_1 + 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f090  FUN_0042f090   (238 bytes)   [unnamed]
undefined4 __cdecl FUN_0042f090(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 & 0xffffffef;
    uVar3 = FUN_0042d438(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) != 0) {
      FUN_0042d458(**(int **)(param_1 + 0x2b),uVar3 & 0xfffbffff);
    }
    if (*(int *)(param_1 + 0x31) != 0) {
      if (*(int *)(param_1 + 0x2b) == 0) {
        iVar4 = *(int *)(param_1 + 0x2b);
      }
      else {
        iVar4 = **(int **)(param_1 + 0x2b);
      }
      if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == iVar4) {
        (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
      }
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2b) = param_2;
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 | 0x10;
    uVar3 = FUN_0042d438(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) == 0) {
      FUN_0042d458(**(int **)(param_1 + 0x2b),uVar3 | 0x40000);
    }
    if (((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0)) &&
       (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f180  FUN_0042f180   (63 bytes)   [unnamed]
int __cdecl FUN_0042f180(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46afec);
  std::string::string_from_cstr(param_1,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

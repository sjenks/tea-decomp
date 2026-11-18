// TSMerge.exe — runtime / library code "code_0x0042c000"
// 56 functions, 0x0042c0dc..0x0042f180. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042c0dc  FUN_0042c0dc   (118 bytes)   [unnamed]
void __cdecl FUN_0042c0dc(int param_1,int param_2,undefined4 param_3,HWND hWnd)

{
  int iVar1;
  LRESULT lResult;
  uint ctrlId;
  
  if (hWnd == (HWND)0x0) {
    FUN_0042b294(param_1);
  }
  else {
    lResult = FUN_0042bc6c(hWnd,*(LPARAM *)(param_1 + 0x6c));
    if (lResult != 0) {
      FUN_0042d204(lResult,'\x01');
    }
    ctrlId = GetDlgCtrlID(hWnd);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x5b) = 0x111;
    *(uint *)(iVar1 + 0x5f) = param_2 << 0x10 | ctrlId & 0xffff;
    *(HWND *)(iVar1 + 99) = hWnd;
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
  HACCEL hAccel;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    hAccel = FUN_00444ce8(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = hAccel;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042cbe0  FUN_0042cbe0   (96 bytes)   [unnamed]
void __cdecl FUN_0042cbe0(int param_1)

{
  DWORD DVar1;
  LONG LVar2;
  DWORD lpdwProcessId;
  
  lpdwProcessId = 0;
  GetWindowThreadProcessId(*(HWND *)(param_1 + 0xc),&lpdwProcessId);
  DVar1 = GetCurrentProcessId();
  if (DVar1 == lpdwProcessId) {
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
  HWND hWnd;
  LRESULT lResult;
  
  if ((*(HWND *)(param_1 + 0xc) != (HWND)0x0) &&
     (hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5), hWnd != (HWND)0x0)) {
    sVar1 = 1;
    for (hWnd = GetWindow(hWnd,1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,3)) {
      lResult = FUN_0042bc6c(hWnd,*(LPARAM *)(param_1 + 0x6c));
      if (lResult != 0) {
        *(short *)(lResult + 0x78) = sVar1;
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
  HWND hWnd;
  uint3 extraout_var;
  
  iVar1 = FUN_0042d08c(param_1,(undefined*)FUN_0042a769);
  if (iVar1 != 0) {
    FUN_0042e05c(iVar1,0x7fe9);
  }
  hWnd = (HWND)0x0;
  iVar1 = FUN_0042cf38(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_0042d100(param_1,PTR_FUN_0046a417);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_0042d59c(iVar2,hWnd,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      hWnd = *(HWND *)(iVar2 + 0xc);
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
LRESULT __cdecl FUN_0042d1a4(int param_1,UINT msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
  lResult = SendMessageA(*(HWND *)(param_1 + 0xc),msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d1c0  FUN_0042d1c0   (65 bytes, 2 ranges)   [unnamed]
LRESULT __cdecl FUN_0042d1c0(int param_1,HWND hWnd,char param_3)

{
  int iVar1;
  LRESULT lResult;
  BOOL ok;
  
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_3 != '\0') {
    lResult = SendMessageA(hWnd,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                         *(LPARAM *)(iVar1 + 99));
    return lResult;
  }
  ok = PostMessageA(hWnd,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                       *(LPARAM *)(iVar1 + 99));
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d204  FUN_0042d204   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d204(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT lResult;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    uVar2 = FUN_0042bbb4(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                         *(undefined4 *)(iVar1 + 99));
    return uVar2;
  }
  lResult = FUN_0042d1c0(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d23c  FUN_0042d23c   (62 bytes)   [unnamed]
void __cdecl FUN_0042d23c(int param_1,UINT msg,WPARAM wParam,LPARAM lParam)

{
  HWND hWnd;
  HWND hWnd2;
  
  hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5);
  while (hWnd != (HWND)0x0) {
    hWnd2 = GetWindow(hWnd,2);
    SendMessageA(hWnd,msg,wParam,lParam);
    hWnd = hWnd2;
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
  int textLen;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    textLen = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (textLen < 0) {
      uVar2 = FUN_0041fd2c((uint *)("MSWHEEL_ROLLMSG" + 0xf));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else {
      uVar2 = operator_new_array();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + textLen) = 0;
      GetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPSTR *)(param_1 + 0x10),textLen + 1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d338  FUN_0042d338   (177 bytes)   [unnamed]
LONG __cdecl FUN_0042d338(int param_1,char param_2)

{
  LONG windowLong;
  HWND hWnd;
  tagRECT rect;
  
  if (((*(byte *)(param_1 + 0x74) & 4) != 0) || (param_2 != '\0')) {
    windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    *(LONG *)(param_1 + 0x18) = windowLong;
    windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
    *(LONG *)(param_1 + 0x1c) = windowLong;
  }
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_0042d52c(param_1,&rect);
  *(LONG *)(param_1 + 0x2c) = rect.bottom - rect.top;
  *(LONG *)(param_1 + 0x28) = rect.right - rect.left;
  if (*(int *)(param_1 + 0xc) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = GetParent(*(HWND *)(param_1 + 0xc));
  }
  if (((*(byte *)(param_1 + 0x1b) & 0x40) != 0) && (hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&rect);
  }
  *(LONG *)(param_1 + 0x20) = rect.left;
  *(LONG *)(param_1 + 0x24) = rect.top;
  windowLong = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0xc);
  *(LONG *)(param_1 + 0x34) = windowLong;
  return windowLong;
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
LONG __cdecl FUN_0042d40c(int param_1,LONG newLong)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x18);
    *(LONG *)(param_1 + 0x18) = newLong;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10,newLong);
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
LONG __cdecl FUN_0042d458(int param_1,LONG newLong)

{
  LONG LVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = *(LONG *)(param_1 + 0x1c);
    *(LONG *)(param_1 + 0x1c) = newLong;
  }
  else {
    LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14,newLong);
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
  uint newLong;
  
  uVar1 = FUN_0042d3ec(param_1);
  newLong = ~param_2 & uVar1 | param_3;
  if (newLong == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_0042d40c(param_1,newLong);
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
  uint newLong;
  
  uVar1 = FUN_0042d438(param_1);
  newLong = ~param_2 & uVar1 | param_3;
  if (newLong == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_0042d458(param_1,newLong);
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
void __cdecl FUN_0042d52c(int param_1,LPRECT rect)

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
    rect->left = iVar4;
    rect->top = iVar3;
    rect->right = iVar2 + iVar4;
    rect->bottom = iVar1 + iVar3;
  }
  else {
    GetWindowRect(*(HWND *)(param_1 + 0xc),rect);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d568  FUN_0042d568   (52 bytes)   [unnamed]
void __cdecl FUN_0042d568(int param_1,LPRECT rect)

{
  LONG LVar1;
  LONG LVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    GetClientRect(*(HWND *)(param_1 + 0xc),rect);
    return;
  }
  LVar1 = *(LONG *)(param_1 + 0x2c);
  LVar2 = *(LONG *)(param_1 + 0x28);
  rect->left = 0;
  rect->top = 0;
  rect->right = LVar2;
  rect->bottom = LVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d59c  FUN_0042d59c   (129 bytes)   [unnamed]
bool __cdecl FUN_0042d59c(int param_1,HWND hWnd,int x,int y,int cx,int cy,uint flags)

{
  BOOL ok;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((flags & 2) == 0) {
      *(int *)(param_1 + 0x20) = x;
      *(int *)(param_1 + 0x24) = y;
    }
    if ((flags & 1) == 0) {
      *(int *)(param_1 + 0x28) = cx;
      *(int *)(param_1 + 0x2c) = cy;
    }
    if ((flags & 0x40) == 0) {
      if ((flags & 0x80) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xefffffff;
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10000000;
    }
    bVar2 = true;
  }
  else {
    ok = SetWindowPos(*(HWND *)(param_1 + 0xc),hWnd,x,y,cx,cy,flags);
    bVar2 = ok != 0;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042d6f8  FUN_0042d6f8   (286 bytes)   [unnamed]
undefined4 __cdecl FUN_0042d6f8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int i;
  HCURSOR hCursor;
  tagRECT *pRect;
  LONG *pLVar4;
  int local_30 [4];
  tagRECT rect;
  char local_d;
  tagPOINT pt;
  
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
      pt.x = 0;
      pt.y = 0;
      GetCursorPos(&pt);
      ScreenToClient(*(HWND *)(param_1 + 0xc),&pt);
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_0042d568(param_1,&rect);
      pRect = &rect;
      pLVar4 = local_30;
      for (i = 4; i != 0; i = i + -1) {
        *pLVar4 = pRect->left;
        pRect = (tagRECT *)&pRect->top;
        pLVar4 = pLVar4 + 1;
      }
      param_3 = pt.x;
      if ((((pt.x < local_30[0]) || (local_30[2] <= pt.x)) || (pt.y < local_30[1]))
         || (param_3 = pt.y, local_30[3] <= pt.y)) {
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
int __cdecl FUN_0042da3c(int param_1,int bar)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 4;
  FUN_0042dd5c(param_1,bar,&scrollInfo);
  return scrollInfo.nPos;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042da7c  FUN_0042da7c   (90 bytes)   [unnamed]
int __cdecl FUN_0042da7c(int param_1,int bar,int param_3,byte redraw)

{
  int iVar1;
  SCROLLINFO lpsi;
  
  iVar1 = FUN_0042da3c(param_1,bar);
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 4;
  lpsi.nPos = param_3;
  FUN_0042dd40(param_1,bar,&lpsi,redraw);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dad8  FUN_0042dad8   (77 bytes)   [unnamed]
void __cdecl FUN_0042dad8(int param_1,int bar,int *param_3,int *param_4)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 1;
  FUN_0042dd5c(param_1,bar,&scrollInfo);
  *param_3 = scrollInfo.nMin;
  *param_4 = scrollInfo.nMax;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db28  FUN_0042db28   (77 bytes)   [unnamed]
void __cdecl FUN_0042db28(int param_1,int bar,int param_3,int param_4,byte redraw)

{
  SCROLLINFO lpsi;
  
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 1;
  lpsi.nMin = param_3;
  lpsi.nMax = param_4;
  FUN_0042dd40(param_1,bar,&lpsi,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042db78  FUN_0042db78   (71 bytes)   [unnamed]
void __cdecl FUN_0042db78(int param_1,int bar,UINT param_3,byte redraw)

{
  SCROLLINFO lpsi;
  
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 2;
  lpsi.nPage = param_3;
  FUN_0042dd40(param_1,bar,&lpsi,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dbc0  FUN_0042dbc0   (64 bytes)   [unnamed]
UINT __cdecl FUN_0042dbc0(int param_1,int bar)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 2;
  FUN_0042dd5c(param_1,bar,&scrollInfo);
  return scrollInfo.nPage;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dc98  FUN_0042dc98   (168 bytes)   [unnamed]
void __cdecl FUN_0042dc98(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd40  FUN_0042dd40   (28 bytes)   [unnamed]
void __cdecl FUN_0042dd40(int param_1,int bar,LPCSCROLLINFO lpsi,byte redraw)

{
  SetScrollInfo(*(HWND *)(param_1 + 0xc),bar,lpsi,(uint)redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd5c  FUN_0042dd5c   (22 bytes)   [unnamed]
void __cdecl FUN_0042dd5c(int param_1,int bar,LPSCROLLINFO lpsi)

{
  GetScrollInfo(*(HWND *)(param_1 + 0xc),bar,lpsi);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042dd74  FUN_0042dd74   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042dd74(undefined4 *lp)

{
  BOOL ok;
  
  if (lp == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  ok = IsBadReadPtr(lp,8);
  if (ok != 0) {
    return (undefined4 *)0x0;
  }
  if (lp[1] != 0x69777264) {
    return (undefined4 *)0x0;
  }
  ok = IsBadReadPtr((void *)*lp,4);
  if (ok != 0) {
    return (undefined4 *)0x0;
  }
  return lp;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e05c  FUN_0042e05c   (86 bytes)   [unnamed]
void __cdecl FUN_0042e05c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x46ab48);
  piVar1 = OWL::TXWindow::TXWindow(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_14,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e1ac  FUN_0042e1ac   (102 bytes)   [unnamed]
int * __cdecl FUN_0042e1ac(int *param_1,undefined4 param_2)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46abd0);
  FUN_00416afc(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)((int)param_1 + 0x21) = param_2;
  hdc = GetWindowDC(*(HWND *)((int)param_1 + 0x21));
  *param_1 = (int)hdc;
  FUN_0041c800(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e298  FUN_0042e298   (66 bytes)   [unnamed]
int * __cdecl FUN_0042e298(int *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ac18);
  FUN_0042e1ac(param_1,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TScreenDC::vftable;
  *sehChainHead = sehPrevFrame;
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
void __cdecl FUN_0042e3c8(HWND hWnd,LPCSTR text,LPCSTR caption,UINT type)

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
  MessageBoxExA(hWnd,text,caption,type,wLanguageId);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e3fb  FUN_0042e3fb   (83 bytes)   [unnamed]
void __stdcall FUN_0042e3fb(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ad06);
  if (DAT_0046ad05 != '\0') {
    DAT_0046ad05 = '\0';
  }
  if (DAT_0046ad04 != '\0') {
    OWL::TApplicatData::_dtor(0x477180,2);
    DAT_0046ad04 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e450  FUN_0042e450   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042e450(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ad20);
  *param_1 = FUN_0042e3c8;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e4c0  FUN_0042e4c0   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0042e4c0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ad44);
  if (DAT_0046ad04 == '\0') {
    FUN_0042e450((undefined4 *)&DAT_00477180);
    DAT_0046ad04 = DAT_0046ad04 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00477180;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e55c  FUN_0042e55c   (85 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0042e55c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ad68);
  if (DAT_0046ad05 == '\0') {
    _DAT_00477184 = 0;
    _DAT_00477188 = 0;
    _DAT_0047718c = 0;
    DAT_0046ad05 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00477184;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e620  FUN_0042e620   (183 bytes)   [unnamed]
void __stdcall FUN_0042e620(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ad84);
  if (DAT_0046ad7c == '\0') goto LAB_0042e6c7;
  if (DAT_004771a4 != 0) {
    if (*(int *)(DAT_004771a4 + -0xc) != -1) {
      strRep = (int *)(DAT_004771a4 + -0xc);
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
      if (prevRefs != 0) goto LAB_0042e6c0;
    }
    operator_delete();
    DAT_004771a4 = 0;
  }
LAB_0042e6c0:
  DAT_0046ad7c = '\0';
LAB_0042e6c7:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e6d8  FUN_0042e6d8   (109 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0042e720) */
undefined * __stdcall FUN_0042e6d8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46ada8);
  if (DAT_0046ad7c == '\0') {
    (*(undefined * *)&DAT_004771a4) = &g_emptyStringData;
    DAT_0046ad7c = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0047719c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042e748  FUN_0042e748   (528 bytes)   [unnamed]
int * __cdecl FUN_0042e748(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5)

{
  uint len;
  undefined *puVar2;
  int *rep;
  undefined4 *sehChainHead;
  char cVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46add8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6f) = 0;
    *(undefined ***)((int)param_1 + 0x73) = &OWL::TEventHandler::vftable;
  }
  cVar4 = '\x01';
  puVar2 = FUN_0042e6d8();
  OWL::TModule::TModule_443c6c(param_1 + 1,param_3,(*(int *)&DAT_00477190),*(undefined4 *)(puVar2 + 8),cVar4);
  OWL::TMsgThread::TMsgThread((undefined4 *)((int)param_1 + 0x11));
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
    len = *(uint *)(*(int *)(puVar2 + 8) + -4);
    rep = std::string::__getRep((int)param_1 + 0x35,len,len);
    *(int **)((int)param_1 + 0x3d) = rep + 3;
    memcpy(*(undefined4 **)((int)param_1 + 0x3d),*(undefined4 **)(puVar2 + 8),len);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x3d) = *(undefined4 *)(puVar2 + 8);
    rep = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
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
  *sehChainHead = sehPrevFrame;
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
int __cdecl FUN_0042f180(int str,undefined4 param_2,uint *s)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46afec);
  std::string::string_from_cstr(str,s);
  *sehChainHead = sehPrevFrame;
  return str;
}

} // namespace tea

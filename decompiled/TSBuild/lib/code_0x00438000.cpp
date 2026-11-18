// TSBuild.exe — runtime / library code "code_0x00438000"
// 60 functions, 0x004380cc..0x0043bf00. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004380cc  FUN_004380cc   (23 bytes)   [unnamed]
int __cdecl FUN_004380cc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004382e8(param_1);
  return iVar1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004380e4  FUN_004380e4   (101 bytes)   [unnamed]
void __cdecl FUN_004380e4(int param_1)

{
  short sVar1;
  HWND hWnd;
  LRESULT lResult;
  
  if ((*(HWND *)(param_1 + 0xc) != (HWND)0x0) &&
     (hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5), hWnd != (HWND)0x0)) {
    sVar1 = 1;
    for (hWnd = GetWindow(hWnd,1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,3)) {
      lResult = FUN_00436e00(hWnd,*(LPARAM *)(param_1 + 0x6c));
      if (lResult != 0) {
        *(short *)(lResult + 0x78) = sVar1;
        sVar1 = sVar1 + 1;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043814c  FUN_0043814c   (23 bytes)   [unnamed]
bool __cdecl FUN_0043814c(undefined4 param_1,int param_2,uint *param_3)

{
  return (uint)*(ushort *)(param_2 + 0x78) == *param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438164  FUN_00438164   (139 bytes)   [unnamed]
undefined4 __cdecl FUN_00438164(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  uint3 extraout_var;
  
  iVar1 = FUN_00438220(param_1,(undefined*)FUN_004358fd);
  if (iVar1 != 0) {
    FUN_004391f0(iVar1,0x7fe9);
  }
  hWnd = (HWND)0x0;
  iVar1 = FUN_004380cc(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_00438294(param_1,PTR_FUN_0047e1f3);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_00438730(iVar2,hWnd,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      hWnd = *(HWND *)(iVar2 + 0xc);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004381f0  FUN_004381f0   (47 bytes)   [unnamed]
void __cdecl FUN_004381f0(int param_1,int param_2)

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
// 0x00438220  FUN_00438220   (62 bytes)   [unnamed]
int __cdecl FUN_00438220(int param_1,undefined *param_2)

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
// 0x00438260  FUN_00438260   (52 bytes)   [unnamed]
void __cdecl FUN_00438260(int param_1,undefined *param_2)

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
// 0x00438294  FUN_00438294   (83 bytes)   [unnamed]
int __cdecl FUN_00438294(int param_1,undefined *param_2)

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
// 0x004382e8  FUN_004382e8   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_004382e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined4 *)&DAT_0048cb20) = 0xffffffff;
  iVar1 = FUN_00438220(param_1,(undefined*)FUN_00435986);
  uVar2 = (*(undefined4 *)&DAT_0048cb20);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043831c  FUN_0043831c   (26 bytes)   [unnamed]
int __cdecl FUN_0043831c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00438220(param_1,(undefined*)FUN_0043599d);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438338  FUN_00438338   (25 bytes)   [unnamed]
LRESULT __cdecl FUN_00438338(int param_1,UINT msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
  lResult = SendMessageA(*(HWND *)(param_1 + 0xc),msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438354  FUN_00438354   (65 bytes, 2 ranges)   [unnamed]
LRESULT __cdecl FUN_00438354(int param_1,HWND hWnd,char param_3)

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
// 0x00438398  FUN_00438398   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_00438398(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT lResult;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_2 != '\0') {
    uVar2 = FUN_00436d48(param_1,*(undefined4 *)(iVar1 + 0x5b),*(undefined4 *)(iVar1 + 0x5f),
                         *(undefined4 *)(iVar1 + 99));
    return uVar2;
  }
  lResult = FUN_00438354(param_1,*(HWND *)(param_1 + 0xc),'\0');
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004383d0  FUN_004383d0   (62 bytes)   [unnamed]
void __cdecl FUN_004383d0(int param_1,UINT msg,WPARAM wParam,LPARAM lParam)

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
// 0x00438410  FUN_00438410   (71 bytes)   [unnamed]
BOOL __cdecl FUN_00438410(int param_1,uint *param_2)

{
  BOOL ok;
  
  if (param_2 != *(uint **)(param_1 + 0x10)) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    ok = FUN_0042aea0(param_2);
    *(BOOL *)(param_1 + 0x10) = ok;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    ok = SetWindowTextA(*(HWND *)(param_1 + 0xc),*(LPCSTR *)(param_1 + 0x10));
  }
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438458  FUN_00438458   (116 bytes)   [unnamed]
void __cdecl FUN_00438458(int param_1)

{
  int textLen;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x10) != -1) {
    if ((short)((uint)*(undefined4 *)(param_1 + 0x10) >> 0x10) != 0) {
      operator_delete_array();
    }
    textLen = GetWindowTextLengthA(*(HWND *)(param_1 + 0xc));
    if (textLen < 0) {
      uVar2 = FUN_0042aea0((uint *)("MSWHEEL_ROLLMSG" + 0xf));
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
// 0x004384cc  FUN_004384cc   (177 bytes)   [unnamed]
LONG __cdecl FUN_004384cc(int param_1,char param_2)

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
  FUN_004386c0(param_1,&rect);
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
// 0x00438580  FUN_00438580   (31 bytes)   [unnamed]
LONG __cdecl FUN_00438580(int param_1)

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
// 0x004385a0  FUN_004385a0   (44 bytes)   [unnamed]
LONG __cdecl FUN_004385a0(int param_1,LONG newLong)

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
// 0x004385cc  FUN_004385cc   (31 bytes)   [unnamed]
LONG __cdecl FUN_004385cc(int param_1)

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
// 0x004385ec  FUN_004385ec   (44 bytes)   [unnamed]
LONG __cdecl FUN_004385ec(int param_1,LONG newLong)

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
// 0x00438618  FUN_00438618   (85 bytes)   [unnamed]
undefined4 __cdecl FUN_00438618(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint newLong;
  
  uVar1 = FUN_00438580(param_1);
  newLong = ~param_2 & uVar1 | param_3;
  if (newLong == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004385a0(param_1,newLong);
    if ((param_4 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      FUN_00438730(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438670  FUN_00438670   (79 bytes)   [unnamed]
undefined4 __cdecl FUN_00438670(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint3 extraout_var;
  uint newLong;
  
  uVar1 = FUN_004385cc(param_1);
  newLong = ~param_2 & uVar1 | param_3;
  if (newLong == uVar1) {
    uVar2 = 0;
  }
  else {
    LVar3 = FUN_004385ec(param_1,newLong);
    if (param_4 != 0) {
      FUN_00438730(param_1,(HWND)0x0,0,0,0,0,param_4 | 0x17);
      LVar3 = (uint)extraout_var << 8;
    }
    uVar2 = CONCAT31((int3)((uint)LVar3 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004386c0  FUN_004386c0   (59 bytes)   [unnamed]
void __cdecl FUN_004386c0(int param_1,LPRECT rect)

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
// 0x004386fc  FUN_004386fc   (52 bytes)   [unnamed]
void __cdecl FUN_004386fc(int param_1,LPRECT rect)

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
// 0x00438730  FUN_00438730   (129 bytes)   [unnamed]
bool __cdecl FUN_00438730(int param_1,HWND hWnd,int x,int y,int cx,int cy,uint flags)

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
// 0x0043888c  FUN_0043888c   (286 bytes)   [unnamed]
undefined4 __cdecl FUN_0043888c(int param_1,int param_2,int param_3)

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
      param_3 = (int)FUN_0044ff14(*(int *)(param_1 + 0x50),*(LPCSTR *)(param_1 + 0x54));
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
      FUN_004386fc(param_1,&rect);
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
// 0x00438bd0  FUN_00438bd0   (64 bytes)   [unnamed]
int __cdecl FUN_00438bd0(int param_1,int bar)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 4;
  FUN_00438ef0(param_1,bar,&scrollInfo);
  return scrollInfo.nPos;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438c10  FUN_00438c10   (90 bytes)   [unnamed]
int __cdecl FUN_00438c10(int param_1,int bar,int param_3,byte redraw)

{
  int iVar1;
  SCROLLINFO lpsi;
  
  iVar1 = FUN_00438bd0(param_1,bar);
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 4;
  lpsi.nPos = param_3;
  FUN_00438ed4(param_1,bar,&lpsi,redraw);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438c6c  FUN_00438c6c   (77 bytes)   [unnamed]
void __cdecl FUN_00438c6c(int param_1,int bar,int *param_3,int *param_4)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 1;
  FUN_00438ef0(param_1,bar,&scrollInfo);
  *param_3 = scrollInfo.nMin;
  *param_4 = scrollInfo.nMax;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438cbc  FUN_00438cbc   (77 bytes)   [unnamed]
void __cdecl FUN_00438cbc(int param_1,int bar,int param_3,int param_4,byte redraw)

{
  SCROLLINFO lpsi;
  
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 1;
  lpsi.nMin = param_3;
  lpsi.nMax = param_4;
  FUN_00438ed4(param_1,bar,&lpsi,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d0c  FUN_00438d0c   (71 bytes)   [unnamed]
void __cdecl FUN_00438d0c(int param_1,int bar,UINT param_3,byte redraw)

{
  SCROLLINFO lpsi;
  
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 2;
  lpsi.nPage = param_3;
  FUN_00438ed4(param_1,bar,&lpsi,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438d54  FUN_00438d54   (64 bytes)   [unnamed]
UINT __cdecl FUN_00438d54(int param_1,int bar)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 2;
  FUN_00438ef0(param_1,bar,&scrollInfo);
  return scrollInfo.nPage;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438e2c  FUN_00438e2c   (168 bytes)   [unnamed]
void __cdecl FUN_00438e2c(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e824);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0) {
      if (*(int *)(param_1 + 100) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 100) + 0xc))();
      }
    }
    else {
      FUN_00438338(**(int **)(param_1 + 100),0x10,0,0);
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
// 0x00438ed4  FUN_00438ed4   (28 bytes)   [unnamed]
void __cdecl FUN_00438ed4(int param_1,int bar,LPCSCROLLINFO lpsi,byte redraw)

{
  SetScrollInfo(*(HWND *)(param_1 + 0xc),bar,lpsi,(uint)redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438ef0  FUN_00438ef0   (22 bytes)   [unnamed]
void __cdecl FUN_00438ef0(int param_1,int bar,LPSCROLLINFO lpsi)

{
  GetScrollInfo(*(HWND *)(param_1 + 0xc),bar,lpsi);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00438f08  FUN_00438f08   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_00438f08(undefined4 *lp)

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
// 0x004391f0  FUN_004391f0   (86 bytes)   [unnamed]
void __cdecl FUN_004391f0(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x47e924);
  piVar1 = OWL::TXWindow::TXWindow(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_14,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439340  FUN_00439340   (102 bytes)   [unnamed]
int * __cdecl FUN_00439340(int *param_1,undefined4 param_2)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e9ac);
  FUN_00421c70(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)((int)param_1 + 0x21) = param_2;
  hdc = GetWindowDC(*(HWND *)((int)param_1 + 0x21));
  *param_1 = (int)hdc;
  FUN_00427974(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043942c  FUN_0043942c   (66 bytes)   [unnamed]
int * __cdecl FUN_0043942c(int *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47e9f4);
  FUN_00439340(param_1,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TScreenDC::vftable;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439490  FUN_00439490   (97 bytes)   [unnamed]
int * __cdecl FUN_00439490(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  iVar1 = FUN_0042db04(param_1);
  if (iVar1 == 0) {
    puVar2 = FUN_0042dbc4(param_1);
    *param_2 = puVar2;
  }
  else {
    FUN_0042d9a0(param_1,&local_8,4);
    *param_2 = local_8;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004394f4  FUN_004394f4   (101 bytes)   [unnamed]
int * __cdecl FUN_004394f4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = *param_2;
  FUN_0042df1c(param_1);
  if ((short)((uint)uVar1 >> 0x10) == 0) {
    local_8 = *param_2;
    FUN_0042de94(param_1,&local_8,4);
  }
  else {
    FUN_0042e00c(param_1,(uint *)*param_2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043955c  FUN_0043955c   (51 bytes)   [unnamed]
void __cdecl FUN_0043955c(HWND hWnd,LPCSTR text,LPCSTR caption,UINT type)

{
  WORD wLanguageId;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)FUN_0041c4a0();
  iVar2 = FUN_0041c6e8(puVar1,iVar2);
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
// 0x0043958f  FUN_0043958f   (83 bytes)   [unnamed]
void __stdcall FUN_0043958f(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47eae2);
  if (DAT_0047eae1 != '\0') {
    DAT_0047eae1 = '\0';
  }
  if (DAT_0047eae0 != '\0') {
    OWL::TApplicatData::_dtor(0x48cc28,2);
    DAT_0047eae0 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004395e4  FUN_004395e4   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_004395e4(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47eafc);
  *param_1 = FUN_0043955c;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439654  FUN_00439654   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00439654(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47eb20);
  if (DAT_0047eae0 == '\0') {
    FUN_004395e4((undefined4 *)&DAT_0048cc28);
    DAT_0047eae0 = DAT_0047eae0 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048cc28;
}

// ----------------------------------------------------------------------------------------------------
// 0x004396f0  FUN_004396f0   (85 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_004396f0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47eb44);
  if (DAT_0047eae1 == '\0') {
    _DAT_0048cc2c = 0;
    _DAT_0048cc30 = 0;
    _DAT_0048cc34 = 0;
    DAT_0047eae1 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048cc2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004397b4  FUN_004397b4   (183 bytes)   [unnamed]
void __stdcall FUN_004397b4(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47eb60);
  if (DAT_0047eb58 == '\0') goto LAB_0043985b;
  if (DAT_0048cc4c != 0) {
    if (*(int *)(DAT_0048cc4c + -0xc) != -1) {
      strRep = (int *)(DAT_0048cc4c + -0xc);
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
      if (prevRefs != 0) goto LAB_00439854;
    }
    operator_delete();
    DAT_0048cc4c = 0;
  }
LAB_00439854:
  DAT_0047eb58 = '\0';
LAB_0043985b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043986c  FUN_0043986c   (109 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004398b4) */
undefined * __stdcall FUN_0043986c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47eb84);
  if (DAT_0047eb58 == '\0') {
    (*(undefined * *)&DAT_0048cc4c) = &g_emptyStringData;
    DAT_0047eb58 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048cc44;
}

// ----------------------------------------------------------------------------------------------------
// 0x004398dc  FUN_004398dc   (528 bytes)   [unnamed]
int * __cdecl FUN_004398dc(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5)

{
  uint len;
  undefined *puVar2;
  int *rep;
  undefined4 *sehChainHead;
  char cVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ebb4);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6f) = 0;
    *(undefined ***)((int)param_1 + 0x73) = &OWL::TEventHandler::vftable;
  }
  cVar4 = '\x01';
  puVar2 = FUN_0043986c();
  OWL::TModule::TModule_44ee00(param_1 + 1,param_3,(*(int *)&DAT_0048cc38),*(undefined4 *)(puVar2 + 8),cVar4);
  OWL::TMsgThread::TMsgThread((undefined4 *)((int)param_1 + 0x11));
  *(undefined ***)((int)param_1 + 0x1b) = &OWL::TApplication::vftable;
  param_1[1] = (int)&PTR_LAB_0047ec4c;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0047ec5c;
  *(undefined ***)*param_1 = &PTR_LAB_0047ec7c;
  *(undefined4 *)((int)param_1 + 0x1f) = DAT_0048cc3c;
  *(undefined4 *)((int)param_1 + 0x23) = DAT_0048cc40;
  *(undefined4 *)((int)param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0x2f) = 0x400;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  puVar2 = FUN_0043986c();
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
    param_5 = FUN_0041c4a0();
  }
  *(undefined **)((int)param_1 + 0x6b) = param_5;
  FUN_0041c718(*(undefined4 **)((int)param_1 + 0x6b),param_1,0);
  *param_4 = param_1 + 1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a224  FUN_0043a224   (238 bytes)   [unnamed]
undefined4 __cdecl FUN_0043a224(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 & 0xffffffef;
    uVar3 = FUN_004385cc(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) != 0) {
      FUN_004385ec(**(int **)(param_1 + 0x2b),uVar3 & 0xfffbffff);
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
    uVar3 = FUN_004385cc(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) == 0) {
      FUN_004385ec(**(int **)(param_1 + 0x2b),uVar3 | 0x40000);
    }
    if (((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0)) &&
       (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a314  FUN_0043a314   (63 bytes)   [unnamed]
int __cdecl FUN_0043a314(int str,undefined4 param_2,uint *s)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47edc8);
  std::string::string_from_cstr(str,s);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b838  FUN_0043b838   (238 bytes)   [unnamed]
void __cdecl FUN_0043b838(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f260);
  if (*(int *)(param_1 + 0x31) != 0) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x31) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x31) + 0xc))();
      }
    }
    else {
      FUN_00438338(**(int **)(param_1 + 0x31),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x31) = param_2;
  if ((((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0)) &&
      (*(int *)(param_1 + 0x2b) != 0)) && (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
    FUN_00438618(**(int **)(param_1 + 0x31),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x10))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043babc  FUN_0043babc   (62 bytes)   [unnamed]
void __cdecl FUN_0043babc(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  *(undefined4 *)(param_2 + 0x7e) = 0;
  if (*(int *)(param_1 + 0x67) == 0) {
    *(int *)(param_1 + 0x67) = param_2;
  }
  else {
    for (iVar1 = *(int *)(param_1 + 0x67); *(int *)(iVar1 + 0x7e) != 0;
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    *(int *)(iVar1 + 0x7e) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bafc  FUN_0043bafc   (65 bytes)   [unnamed]
void __cdecl FUN_0043bafc(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x67) != 0)) {
    iVar1 = 0;
    if (param_2 != *(int *)(param_1 + 0x67)) {
      for (iVar1 = *(int *)(param_1 + 0x67); param_2 != *(int *)(iVar1 + 0x7e);
          iVar1 = *(int *)(iVar1 + 0x7e)) {
        if (*(int *)(iVar1 + 0x7e) == 0) {
          return;
        }
      }
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(param_2 + 0x7e);
      return;
    }
    *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x7e);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bb40  FUN_0043bb40   (102 bytes)   [unnamed]
void __cdecl FUN_0043bb40(int param_1)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f2d8);
  while (*(int *)(param_1 + 0x67) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x67) + 0x7e);
    if (*(int *)(param_1 + 0x67) != 0) {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x67) + 8))();
    }
    *(undefined4 *)(param_1 + 0x67) = uVar1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bdc8  FUN_0043bdc8   (78 bytes)   [unnamed]
void __stdcall FUN_0043bdc8(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47f380);
  piVar1 = OWL::TXInvalidMainWindow::TXInvalidMainWindow(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043be5c  FUN_0043be5c   (77 bytes)   [unnamed]
undefined4 __stdcall FUN_0043be5c(HWND hWnd,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = GetWindowLongA(hWnd,-0x10);
  if (((uVar2 & 0x40000000) == 0) && (hWnd != (HWND)*param_2)) {
    uVar2 = IsWindowEnabled(hWnd);
    if (uVar2 != 0) {
      if (*(int *)((int)param_2 + 6) == 0) {
        *(short *)(param_2 + 1) = (short)param_2[1] + 1;
      }
      else {
        puVar1 = *(undefined4 **)((int)param_2 + 6);
        *(int *)((int)param_2 + 6) = *(int *)((int)param_2 + 6) + 4;
        *puVar1 = hWnd;
        uVar2 = EnableWindow(hWnd,0);
      }
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bea9  FUN_0043bea9   (85 bytes)   [unnamed]
void __cdecl FUN_0043bea9(int *param_1)

{
  BOOL ok;
  int *i;
  
  if (*(int *)((int)param_1 + 6) == 0) {
    if (*param_1 != 0) {
      ok = IsWindow((HWND)*param_1);
      if (ok != 0) {
        EnableWindow((HWND)*param_1,1);
        *param_1 = 0;
      }
    }
  }
  else {
    for (i = *(int **)((int)param_1 + 6); *i != 0; i = i + 1) {
      EnableWindow((HWND)*i,1);
    }
    operator_delete_array();
    *(undefined4 *)((int)param_1 + 6) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bf00  FUN_0043bf00   (290 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0043bf00(int param_1,int param_2,uint param_3)

{
  int *lParam;
  DWORD threadId;
  BOOL ok;
  undefined4 *puVar4;
  int i;
  int *piVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  code *lpfn;
  int local_40;
  short local_3c;
  undefined4 *unused;
  undefined4 local_30;
  int local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x47f3f8);
  lParam = &DAT_0047f3c8;
  piVar6 = &local_40;
  for (i = 3; i != 0; i = i + -1) {
    *piVar6 = *lParam;
    lParam = lParam + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  *(short *)piVar6 = (short)*lParam;
  lParam = (int *)FUN_004396f0();
  local_2c = *lParam;
  *lParam = (int)&local_40;
  if ((param_3 & 0x1000) != 0) {
    param_3 = param_3 & 0xffffefff | 0x2000;
  }
  if ((param_3 & 0x2000) == 0) {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
    }
  }
  else {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
    }
    lParam = &local_40;
    lpfn = FUN_0043be5c;
    threadId = GetCurrentThreadId();
    ok = EnumThreadWindows(threadId,lpfn,(LPARAM)lParam);
    if (ok == 0) {
      *sehChainHead = sehPrevFrame;
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)operator_new_array();
    unused = puVar4;
    memset(puVar4,0,(local_3c + 1) * 4);
    lParam = &local_40;
    lpfn = FUN_0043be5c;
    threadId = GetCurrentThreadId();
    EnumThreadWindows(threadId,lpfn,(LPARAM)lParam);
    unused = puVar4;
  }
  ehContext = 8;
  local_30 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  ehContext = 0;
  lParam = (int *)FUN_004396f0();
  *lParam = local_2c;
  FUN_0043bea9(&local_40);
  *sehChainHead = sehPrevFrame;
  return local_30;
}

} // namespace tea

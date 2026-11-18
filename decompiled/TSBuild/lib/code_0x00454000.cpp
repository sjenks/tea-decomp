// TSBuild.exe — runtime / library code "code_0x00454000"
// 89 functions, 0x0045401c..0x00457fec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045401c  FUN_0045401c   (872 bytes)   [unnamed]
void __cdecl FUN_0045401c(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

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
  
  __InitExceptBlockLDTC(0x483eec);
  ehContext = 8;
  FUN_0043c4b4((uint *)brush,(uint *)&DAT_0048c674,'\x01');
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FrameRect((HDC)*param_2,pRect,brush[0]);
  FUN_004288b4(&pRect->left,-1,-1);
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
// 0x00454384  FUN_00454384   (407 bytes)   [unnamed]
uint __cdecl FUN_00454384(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  BOOL ok;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT rect;
  undefined1 local_14 [12];
  uint unused;
  
  FUN_0045401c(param_1,param_2,pRect,param_4);
  if (param_4 != '\0') {
    FUN_00428898(&pRect->left,1,1);
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
    FUN_00428898(&rect.left,iVar4 + pRect->left,iVar3 + pRect->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_00428898(&rect.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ok = ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    rect.right = rect.right - 1;
    rect.bottom = rect.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),ok != 0,local_14,param_2,&DAT_0048c6a4);
    ok = ExtTextOutA((HDC)*param_2,0,0,2,&rect,(LPCSTR)0x0,0,(INT *)0x0);
    rect.right = (LONG)(ok != 0);
  }
  return rect.right;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045451c  FUN_0045451c   (583 bytes)   [unnamed]
void __cdecl FUN_0045451c(undefined4 param_1,undefined4 *param_2,RECT *pRect)

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
  
  __InitExceptBlockLDTC(0x483f2c);
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
  FUN_0043c4b4((uint *)brush,(uint *)&DAT_0048c6a4,'\x01');
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
// 0x00454764  FUN_00454764   (205 bytes)   [unnamed]
void __cdecl FUN_00454764(undefined4 param_1,undefined4 *param_2,RECT *pRect,char param_4)

{
  int iVar1;
  int iVar2;
  int x;
  int y;
  int x2;
  int y2;
  
  FUN_0045401c(param_1,param_2,pRect,param_4);
  if (param_4 != '\0') {
    FUN_00428898(&pRect->left,1,1);
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
// 0x00454834  FUN_00454834   (6 bytes)   [unnamed]
void __stdcall FUN_00454834(int *param_1,undefined4 *param_2,int *pRect,char param_4)

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
  
  FUN_0045401c(param_1,param_2,(RECT *)pRect,param_4);
  if (param_4 != '\0') {
    FUN_00428898(pRect,1,1);
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
// 0x0045483a  FUN_0045483a   (417 bytes)   [unnamed]
void __stdcall FUN_0045483a(void)

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
  FUN_0045401c(*(undefined4 *)(unaff_EBP + 8),puVar2,pRect,*(char *)(unaff_EBP + 0x14));
  if (*(char *)(unaff_EBP + 0x14) != '\0') {
    FUN_00428898(&pRect->left,1,1);
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
// 0x004549dc  FUN_004549dc   (1001 bytes)   [unnamed]
void __cdecl FUN_004549dc(int *param_1)

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
  __InitExceptBlockLDTC(0x483f88);
  ehContext = 8;
  FUN_00439340((int *)&hdc2,*(undefined4 *)(*param_1 + 0xc));
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FUN_00454dc8(&rect4.left,param_1);
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
    FUN_00454ecc(local_90,param_1);
  }
  if ((windowLong & 0x10000) != 0) {
    FUN_00454f38(local_a0,param_1);
  }
  if (((windowLong & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_00454e7c(local_b0,param_1);
  }
  if (((windowLong & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_00454e7c(local_c0,param_1);
  }
  strlen(*(uint **)(*param_1 + 0x10));
  (**(code **)(local_27 + 0x48))();
  (**(code **)(local_27 + 0x1c))();
  (**(code **)(local_27 + 0x18))();
  if ((char)param_1[8] == '\0') {
    if ((windowLong & 0x80000) != 0) {
      FUN_00454e7c(local_100,param_1);
      piVar4 = local_100;
      pRect = &rect2;
      for (mode = 4; mode != 0; mode = mode + -1) {
        pRect->left = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
      }
      FUN_0045451c(param_1,(undefined4*)&hdc2,&rect2);
    }
  }
  else {
    FUN_00454e7c(local_e0,param_1);
    piVar4 = local_e0;
    pRect = &rect3;
    for (mode = 4; mode != 0; mode = mode + -1) {
      pRect->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_00454384(param_1,(undefined4*)&hdc2,&rect3,'\0');
  }
  if ((windowLong & 0x20000) != 0) {
    FUN_00454ecc(local_120,param_1);
    piVar4 = local_120;
    pRect = &rect;
    for (mode = 4; mode != 0; mode = mode + -1) {
      pRect->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRect = (RECT *)((int)pRect + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_00454764(param_1,(undefined4*)&hdc2,&rect,'\0');
  }
  if ((windowLong & 0x10000) != 0) {
    FUN_00454f38(local_140,param_1);
    piVar4 = local_140;
    piVar6 = pRect2;
    for (mode = 4; mode != 0; mode = mode + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_00454834(param_1,(undefined4*)&hdc2,pRect2,'\0');
  }
  ehContext = 0x20;
  FUN_0043c4b4((uint *)brush,(uint *)&DAT_0048c674,'\x01');
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
// 0x00454dc8  FUN_00454dc8   (177 bytes)   [unnamed]
int * __cdecl FUN_00454dc8(int *param_1,int *param_2)

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
  FUN_004386c0(*param_2,&rect);
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
  FUN_00428898(local_24,local_14,local_10);
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
// 0x00454e7c  FUN_00454e7c   (79 bytes)   [unnamed]
int * __cdecl FUN_00454e7c(int *param_1,int *param_2)

{
  int i;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00454dc8(local_24,param_2);
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
// 0x00454ecc  FUN_00454ecc   (105 bytes)   [unnamed]
int * __cdecl FUN_00454ecc(int *param_1,int *param_2)

{
  uint windowLong;
  int i;
  int *piVar3;
  int *piVar4;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00454f38(local_24,param_2);
  piVar3 = local_24;
  piVar4 = local_14;
  for (i = 4; i != 0; i = i + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  windowLong = GetWindowLongA(*(HWND *)(*param_2 + 0xc),-0x10);
  if ((windowLong & 0x10000) != 0) {
    FUN_00428898(local_14,-*(int *)((int)param_2 + 0x22),0);
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
// 0x00454f38  FUN_00454f38   (79 bytes)   [unnamed]
int * __cdecl FUN_00454f38(int *param_1,int *param_2)

{
  int i;
  int *piVar2;
  int *piVar3;
  int local_24 [4];
  int local_14 [4];
  
  FUN_00454dc8(local_24,param_2);
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
// 0x00454f88  FUN_00454f88   (353 bytes)   [unnamed]
void __cdecl FUN_00454f88(int *param_1)

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
    FUN_00454e7c(local_24,param_1);
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
// 0x004551e8  InitRichEditStreamer_4551e8   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4551e8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4840cc);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004553c8;
  puVar1 = FUN_00468310(1,0,0x430c54);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048ce00,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045523e  FUN_0045523e   (48 bytes)   [unnamed]
void __stdcall FUN_0045523e(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4840e0);
  OWL::TStreamableClass::_dtor(0x48ce00,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455318  FUN_00455318   (78 bytes)   [unnamed]
int * __cdecl FUN_00455318(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0042ddb0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_00468488((int)local_8,iVar1,(int *)&DAT_00403c1c,(int *)&DAT_00430c54,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455368  FUN_00455368   (26 bytes)   [unnamed]
int * __cdecl FUN_00455368(int *param_1,int *param_2)

{
  FUN_0042e090(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004553c8  FUN_004553c8   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004553c8(int *validator)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484134);
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
// 0x004556fc  FUN_004556fc   (29 bytes)   [unnamed]
void __stdcall FUN_004556fc(void)

{
  DAT_004841a4 = DAT_004841a4 + 1;
  if (DAT_004841a4 < 0x8000) {
    DAT_004841a4 = 0x8000;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00455738  FUN_00455738   (178 bytes)   [unnamed]
int * __cdecl FUN_00455738(uint *param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4842b8);
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
// 0x004557ea  FUN_004557ea   (246 bytes)   [unnamed]
void __cdecl FUN_004557ea(int param_1,int param_2,int param_3)

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
  
  __InitExceptBlockLDTC(0x484300);
  for (i = 0; uVar1 = FUN_0042f824(param_3), i < CONCAT22(regHigh,uVar1);
      i = i + 1) {
    iVar2 = FUN_0042f83c(param_3);
    if (*(short *)(iVar2 + i * 2) != -1) {
      FUN_0042f83c(param_3);
      uVar3 = (**(code **)(param_2 + 0x10))();
      puVar4 = (undefined4 *)operator_new();
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar3;
        *(undefined1 *)(puVar4 + 1) = local_31;
      }
      if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
        FUN_00455964(param_1,*(int *)(param_1 + 1) + 1);
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
// 0x00455964  FUN_00455964   (155 bytes)   [unnamed]
void __cdecl FUN_00455964(int param_1,int param_2)

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
// 0x00455a06  FUN_00455a06   (230 bytes)   [unnamed]
void __stdcall FUN_00455a06(void)

{
  undefined4 *barDescr;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  barDescr = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x484380);
  if (barDescr != (undefined4 *)0x0) {
    *barDescr = &OWL::TBarDescr::vftable;
    *(undefined4 *)(unaff_EBP + -4) = barDescr[0xc];
    if (*(int *)(unaff_EBP + -4) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x14;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      FUN_00455aec(*(int *)(unaff_EBP + -4),'\x01');
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
// 0x00455aec  FUN_00455aec   (74 bytes)   [unnamed]
void __cdecl FUN_00455aec(int param_1,char param_2)

{
  int i;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4843e8);
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
// 0x00455b38  FUN_00455b38   (28 bytes)   [unnamed]
undefined4 __cdecl FUN_00455b38(int *param_1)

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
// 0x00456024  FUN_00456024   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_00456024(undefined4 param_1,int param_2)

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
// 0x00456114  FUN_00456114   (94 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00456114(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48443c);
  if (param_1 != 0) {
    FUN_00455aec(param_1,'\x01');
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
// 0x0045625c  FUN_0045625c   (108 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0045625c(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48446c);
  if (param_1 != 0) {
    FUN_00455aec(param_1,'\x01');
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
// 0x004563ac  FUN_004563ac   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004563ac(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48448c);
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
// 0x004563fc  FUN_004563fc   (45 bytes)   [unnamed]
void __cdecl FUN_004563fc(int param_1,byte param_2)

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
// 0x00456432  FUN_00456432   (225 bytes)   [unnamed]
undefined4 * __stdcall FUN_00456432(void)

{
  undefined4 *puVar1;
  undefined4 *logicError;
  int iVar3;
  int refs;
  int *newRep;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  logicError = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x4844a0);
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
// 0x00456514  FUN_00456514   (65 bytes)   [unnamed]
void __stdcall FUN_00456514(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4844c5);
  if (DAT_004844b4 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048ce10,2);
    DAT_004844b4 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456558  FUN_00456558   (88 bytes)   [unnamed]
undefined * __stdcall FUN_00456558(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484600);
  if (DAT_004844b4 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_0048ce10,(uint *)"SHELL32.DLL",'\x01','\x01','\0');
    DAT_004844b4 = DAT_004844b4 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048ce10;
}

// ----------------------------------------------------------------------------------------------------
// 0x004565b0  FUN_004565b0   (100 bytes)   [unnamed]
undefined4 __stdcall FUN_004565b0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_004844c3 == '\0') {
    puVar1 = FUN_00456558();
    FUN_0044ff60((int *)&DAT_0048ce55,(int)puVar1,"ShellExecuteA");
    DAT_004844c3 = DAT_004844c3 + '\x01';
  }
  uVar2 = ((code *)DAT_0048ce55)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045662c  GetDocTemplateHead   (31 bytes)   [unnamed]
undefined * __stdcall GetDocTemplateHead(uint param_1)

{
  undefined *puVar1;
  
                    /* 0x5662c  2  GetDocTemplateHead */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00484894;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045664c  GetModulePtr   (31 bytes)   [unnamed]
undefined4 * __stdcall GetModulePtr(uint param_1)

{
  undefined4 *puVar1;
  
                    /* 0x5664c  3  GetModulePtr */
  if ((param_1 & 0xfff0) == 0x620) {
    puVar1 = &DAT_00484890;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456678  FUN_00456678   (65 bytes)   [unnamed]
void __stdcall FUN_00456678(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484899);
  if (DAT_00484898 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048ce60,2);
    DAT_00484898 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004566bc  FUN_004566bc   (223 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_004566bc(HMODULE hModule,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined *str;
  undefined4 *sehChainHead;
  uint filename [65];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x4848e8);
  if ((*(undefined * *)&DAT_00484890) == (undefined *)0x0) {
    GetModuleFileNameA(hModule,(LPSTR)filename,0x104);
    if (DAT_00484898 == '\0') {
      ehContext = 8;
      OWL::TModule::TModule_44ed8c((undefined4 *)&DAT_0048ce60,filename,hModule,'\x01');
      DAT_00484898 = DAT_00484898 + '\x01';
    }
    (*(undefined * *)&DAT_00484890) = &DAT_0048ce60;
  }
  if (param_3 == (uint *)0x0) {
    param_3 = (uint *)&DAT_004848a1;
  }
  DAT_0048cc38 = hModule;
  DAT_0048cc3c = param_2;
  if (param_3 != (uint *)0x0) {
    str = FUN_0043986c();
    std::string::assign_cstr((int)str,param_3);
  }
  DAT_0048cc40 = param_4;
  ehContext = 0x14;
  OwlMain();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004567e0  calloc   (43 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
// 0x0045680c  operator_delete   (15 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f78 (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called on `this` at the end of every deleting destructor
undefined4 __stdcall operator_delete(void)

{
  undefined4 in_stack_00000004;
  
  free();
  return in_stack_00000004;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045681c  operator_delete_array   (15 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f88 (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
void __stdcall operator_delete_array(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045682c  set_new_handler   (19 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f98 (19 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
undefined4 __cdecl set_new_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_0048ce70);
  (*(undefined4 *)&DAT_0048ce70) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456840  operator_new   (144 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414fac. result is null-checked and passed to a constructor
int __stdcall operator_new(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x484918);
  while (iVar1 = malloc(), iVar1 == 0) {
    if (DAT_0048ce70 == (code *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
    }
    else {
      ((code *)DAT_0048ce70)();
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004568d0  operator_new_array   (15 bytes)   [analysis (usage pattern, less certain) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x0041503c (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
int __stdcall operator_new_array(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004568e0  FUN_004568e0   (84 bytes)   [unnamed]
void __stdcall FUN_004568e0(void)

{
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x484960);
  badAlloc = &std::bad_alloc::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_0040eb28,(undefined4*)&badAlloc,0,&LAB_0040eb80,1,0,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456940  FUN_00456940   (63 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00456940(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4849a8);
  _DAT_0048ce74 = &std::bad_alloc::vftable;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456980  FUN_00456980   (49 bytes)   [unnamed]
void __stdcall FUN_00456980(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4849bc);
  std::bad_alloc::_dtor((undefined4 *)&DAT_0048ce74,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004569b4  _vector_delete_ldtc_   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00415120. Borland RTL array destructor helper (ptr, elemSize, count, mode, dtor)
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  FUN_004569d8(param_1,param_2,param_3,param_4,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004569d8  FUN_004569d8   (245 bytes, 2 ranges)   [unnamed]
int __cdecl FUN_004569d8(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4849e4);
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
        FUN_0047009c((uint *)"Illegal mode in _vector_delete_");
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
// 0x00456b14  _vector_new_ldtc_   (274 bytes, 2 ranges)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00415280. Borland RTL array constructor helper (ptr, elemSize, count, mode, ctor)
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  int local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484a38);
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
          FUN_0047009c((uint *)"Illegal mode in _vector_new_");
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
// 0x00456cd0  FUN_00456cd0   (106 bytes)   [unnamed]
bool FUN_00456cd0(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID mem;
  uint dwSize;
  
  if (DAT_00484a8c == 0) {
    if ((DAT_0048d874 == 2) || (DAT_0048d874 == 1)) {
      DAT_00484a8c = 0x100000;
    }
    else {
      DAT_00484a8c = 0x400000;
    }
  }
  dwSize = (DAT_00484a8c + param_1) - 1U & ~(DAT_00484a8c - 1U);
  mem = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = mem;
  if (mem != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d3c  FUN_00456d3c   (39 bytes)   [unnamed]
bool FUN_00456d3c(undefined4 *param_1,SIZE_T size)

{
  LPVOID mem;
  
  mem = VirtualAlloc((LPVOID)*param_1,size,0x1000,4);
  *param_1 = mem;
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456d64  FUN_00456d64   (75 bytes)   [unnamed]
undefined4 FUN_00456d64(LPVOID address,int param_2)

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
  FUN_00456db0(address,(int)lpAddress - (int)address);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456db0  FUN_00456db0   (24 bytes)   [unnamed]
undefined4 FUN_00456db0(LPVOID address,SIZE_T size)

{
  BOOL ok;
  
  ok = VirtualFree(address,size,0x4000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456dc8  FUN_00456dc8   (25 bytes)   [unnamed]
undefined4 FUN_00456dc8(LPVOID address)

{
  BOOL ok;
  
  ok = VirtualFree(address,0,0x8000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e04  FUN_00456e04   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_00456e04(int *param_1,int *param_2,int *param_3)

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
// 0x00456e80  FUN_00456e80   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_00456e80(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e84  malloc   (16 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004155f0 (16 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called by operator new in a retry loop
undefined4 __stdcall malloc(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00484b3c)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456e94  free   (16 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00415600 (16 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called by operator delete
void __stdcall free(void)

{
  (*(code *)PTR_FUN_00484b38)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ea4  FUN_00456ea4   (22 bytes)   [unnamed]
undefined4 __stdcall FUN_00456ea4(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00484b40)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456ebc  FUN_00456ebc   (72 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00456ebc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00456e80();
  if (iVar1 == 0) {
    PTR_FUN_00484b38 = (undefined*)FUN_0045755c;
    PTR_FUN_00484b3c = (undefined*)FUN_004576cc;
    PTR_FUN_00484b40 = (undefined*)FUN_00457b24;
    PTR_LAB_00484b44 = (undefined*)FUN_004578e4;
    _DAT_00484b34 = 1;
  }
  _DAT_00484b30 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f04  FUN_00456f04   (24 bytes)   [unnamed]
void __cdecl FUN_00456f04(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00456ebc(1);
  (*(code *)PTR_FUN_00484b38)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f1c  FUN_00456f1c   (24 bytes)   [unnamed]
void __cdecl FUN_00456f1c(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00456ebc(1);
  (*(code *)PTR_FUN_00484b3c)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f34  FUN_00456f34   (30 bytes)   [unnamed]
void __cdecl FUN_00456f34(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00456ebc(1);
  (*(code *)PTR_FUN_00484b40)(param_2,param_1,uVar1,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f74  FUN_00456f74   (1 bytes)   [unnamed]
void __stdcall FUN_00456f74(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456f78  FUN_00456f78   (64 bytes)   [unnamed]
void __stdcall FUN_00456f78(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0xc; iVar2 < (*(int *)&DAT_00484b58); iVar2 = iVar2 + 4) {
    iVar1 = iVar2 * 2 + DAT_00484b6c;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar2 = (*(int *)&DAT_00484b58) * 2 + DAT_00484b6c;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456fb8  FUN_00456fb8   (255 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00456fb8(uint *param_1,uint param_2,uint param_3)

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
    param_1[0x23] = (uint)DAT_00484b64;
    param_1[0x24] = 0;
    if (DAT_00484b64 == (uint *)0x0) {
      _DAT_00484b68 = param_1;
    }
    else {
      DAT_00484b64[0x24] = (uint)param_1;
    }
    DAT_00484b64 = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if ((*(uint * *)&DAT_00484b6c) == (uint *)0x0) {
      uVar5 = DAT_00484b58 * 2 + 3 & 0xfffffffc;
      (*(uint * *)&DAT_00484b6c) = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_00456f78();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_00484b7c;
    if (uVar5 < DAT_00484b58) {
      puVar2 = (undefined *)((int)(*(uint * *)&DAT_00484b6c) + uVar5 * 2 + -0xc);
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
// 0x004570b8  FUN_004570b8   (235 bytes)   [unnamed]
undefined4 __cdecl FUN_004570b8(uint *param_1,uint param_2)

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
    if ((*puVar3 & 0xfffffffc) < DAT_00484b58) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_00484b6c + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_00484b6c) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_00484b6c + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar1 = *param_1;
    *puVar3 = *puVar3 + (uVar4 - uVar1) + -4;
    *(undefined4 *)(iVar2 + (*puVar3 & 0xfffffffc)) = 0;
    FUN_00457588(iVar2);
    *param_1 = *param_1 + (uVar4 - uVar1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004571a4  FUN_004571a4   (706 bytes)   [unnamed]
undefined4 __cdecl FUN_004571a4(int param_1)

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
  if (DAT_00484b80 == 0) {
    DAT_00484b80 = FUN_004578cc();
  }
  puVar1 = DAT_00484b64;
  if (DAT_00484b6c == 0) {
    uVar7 = uVar7 + ((*(int *)&DAT_00484b58) * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_00484b50;
      if ((uint)((*(int *)&DAT_00484b84) + DAT_00484b4c) < DAT_00484b80) {
        iVar3 = DAT_00484b4c;
      }
      iVar6 = DAT_00484b50;
      if ((uint)((*(int *)&DAT_00484b84) + DAT_00484b4c) < DAT_00484b80) {
        iVar6 = DAT_00484b4c;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_00484b50;
        if ((uint)((*(int *)&DAT_00484b84) + DAT_00484b4c) < DAT_00484b80) {
          iVar3 = DAT_00484b4c;
        }
        iVar6 = DAT_00484b50;
        if ((uint)((*(int *)&DAT_00484b84) + DAT_00484b4c) < DAT_00484b80) {
          iVar6 = DAT_00484b4c;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_00456d64((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        (*(int *)&DAT_00484b84) = (*(int *)&DAT_00484b84) + (uVar7 - *puVar1);
        FUN_004570b8(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_00456d64((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        (*(int *)&DAT_00484b84) = (*(int *)&DAT_00484b84) + 0x1000;
        FUN_004570b8(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_00484b48;
  if (DAT_00484b48 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_00456cd0(uVar4,(undefined4*)&address,&local_c);
  if (CONCAT31(regHigh,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_00484b50;
    if ((uint)((*(int *)&DAT_00484b84) + DAT_00484b4c) < DAT_00484b80) {
      iVar3 = DAT_00484b4c;
    }
    iVar6 = DAT_00484b50;
    if ((uint)((*(int *)&DAT_00484b84) + DAT_00484b4c) < DAT_00484b80) {
      iVar6 = DAT_00484b4c;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_00484b64; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == address) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_00456d64((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          (*(int *)&DAT_00484b84) = (*(int *)&DAT_00484b84) + iVar3;
          FUN_004570b8(puVar1,puVar1[1]);
        }
        iVar6 = FUN_00456d64(address,uVar7 - iVar3);
        if (iVar6 != 0) {
          (*(int *)&DAT_00484b84) = (*(int *)&DAT_00484b84) + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)address;
          puVar1[1] = puVar1[1] + local_c;
          FUN_004570b8(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_00456d64(address,uVar7);
    if (iVar3 == 0) {
      FUN_00456dc8(address);
      uVar5 = 0xffffffff;
    }
    else {
      (*(int *)&DAT_00484b84) = (*(int *)&DAT_00484b84) + uVar7;
      FUN_00456fb8(address,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457468  FUN_00457468   (241 bytes)   [unnamed]
undefined4 __cdecl FUN_00457468(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T size;
  uint uVar4;
  
  uVar4 = DAT_00484b60;
  if (DAT_00484b84 < DAT_00484b80) {
    uVar4 = DAT_00484b5c;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_00484b64; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_004570b8(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          size = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_00456db0((LPVOID)puVar2[puVar2[2] + 3],size);
          DAT_00484b84 = DAT_00484b84 - size;
          FUN_00456dc8((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_00456db0((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_00484b84 = DAT_00484b84 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045755c  FUN_0045755c   (43 bytes)   [unnamed]
void __cdecl FUN_0045755c(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_00456dc8((LPVOID)(param_1 + -4));
      return;
    }
    FUN_00457588(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457588  FUN_00457588   (263 bytes)   [unnamed]
void __cdecl FUN_00457588(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + -4);
    uVar3 = *puVar2;
    if ((uVar3 & 2) == 0) {
      *puVar2 = *puVar2 | 1;
    }
    else {
      puVar2 = (uint *)((int)puVar2 - *(int *)(param_1 + -8));
      *puVar2 = *puVar2 + (uVar3 & 0xfffffffc) + 4;
      if (puVar2 == (uint *)PTR_DAT_00484b7c) {
        PTR_DAT_00484b7c = *(undefined **)(PTR_DAT_00484b7c + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_00484b7c) {
        PTR_DAT_00484b7c = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_00484b58) {
      uVar5 = (uVar3 * 2 + DAT_00484b6c) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_00484b7c + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_00484b60;
      if (DAT_00484b84 < DAT_00484b80) {
        uVar3 = DAT_00484b5c;
      }
      if (uVar3 < *puVar2) {
        FUN_00457468(puVar2);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457690  FUN_00457690   (59 bytes)   [unnamed]
int * __cdecl FUN_00457690(int param_1)

{
  bool bVar1;
  undefined3 regHigh;
  uint size;
  int *local_8;
  
  local_8 = (int *)0x0;
  size = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_00456d3c((undefined4*)&local_8,size);
  if (CONCAT31(regHigh,bVar1) != 0) {
    *local_8 = size - 4;
    local_8 = local_8 + 1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576cc  FUN_004576cc   (39 bytes)   [unnamed]
uint * __cdecl FUN_004576cc(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_00457690(param_1);
    return puVar1;
  }
  puVar1 = FUN_004576f4(param_1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004576f4  FUN_004576f4   (468 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_004576f4(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (param_1 < 0xc) {
      uVar6 = 0xc;
    }
    else {
      uVar6 = param_1 + 3 & 0xfffffffc;
    }
    if (DAT_00484b6c == 0) {
      FUN_004571a4(1);
    }
    puVar1 = PTR_DAT_00484b7c;
    if (uVar6 < DAT_00484b58) {
      iVar3 = uVar6 * 2 + DAT_00484b6c;
      puVar4 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar4) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        *(uint *)(puVar4[2] + 4) = uVar6;
        return puVar4 + 1;
      }
      puVar4 = (uint *)PTR_DAT_00484b74;
      if ((undefined4 *)PTR_DAT_00484b74 == &DAT_00484b70) {
        for (iVar3 = uVar6 * 2 + DAT_00484b6c + -4; iVar3 == *(int *)(iVar3 + 4); iVar3 = iVar3 + 8)
        {
        }
        puVar4 = (uint *)PTR_DAT_00484b7c;
        if (*(uint **)(iVar3 + 4) != (uint *)0x0) {
          puVar4 = *(uint **)(iVar3 + 4);
        }
      }
    }
    else {
      uVar8 = *(uint *)PTR_DAT_00484b7c;
      puVar4 = (uint *)PTR_DAT_00484b7c;
      if (uVar8 < uVar6) {
        *(undefined4 *)PTR_DAT_00484b7c = 0xfffffffd;
        for (puVar4 = *(uint **)(puVar1 + 4); *puVar4 < uVar6; puVar4 = (uint *)puVar4[1]) {
        }
        *(uint *)PTR_DAT_00484b7c = uVar8;
        if (puVar4 == (uint *)PTR_DAT_00484b7c) {
          puVar4 = &DAT_00484b70;
        }
      }
    }
    if (puVar4 == &DAT_00484b70) {
      iVar3 = FUN_004571a4(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_004576f4(param_1);
      }
      else {
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar8 = *puVar4;
      uVar7 = (uVar8 & 0xfffffffc) - uVar6;
      if (uVar7 < 0x10) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_00484b58 <= (uVar8 & 0xfffffffc)) {
          PTR_DAT_00484b7c = (undefined *)puVar4[1];
        }
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        puVar2 = puVar4 + 1;
        *(uint *)(puVar4[2] + 4) = uVar6;
      }
      else {
        uVar8 = uVar7 - 4;
        *puVar4 = uVar6;
        piVar5 = (int *)((int)puVar4 + uVar6 + 4);
        *piVar5 = uVar7 - 3;
        *(uint *)((int)piVar5 + uVar8) = uVar7;
        if (uVar8 < DAT_00484b58) {
          iVar3 = uVar8 * 2 + DAT_00484b6c;
          *(undefined4 *)((int)puVar4 + uVar6 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar4 + uVar6 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar4 + uVar6 + 8) + 8) = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          if (puVar4 == (uint *)PTR_DAT_00484b7c) {
            PTR_DAT_00484b7c = (undefined *)puVar4[1];
          }
          uVar6 = puVar4[1];
          *(uint *)(uVar6 + 8) = puVar4[2];
          *(uint *)(puVar4[2] + 4) = uVar6;
        }
        else {
          uVar8 = puVar4[2];
          *(int **)(uVar8 + 4) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 0xc) = uVar8;
          uVar8 = puVar4[1];
          *(int **)(uVar8 + 8) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 8) = uVar8;
          PTR_DAT_00484b7c = (undefined *)piVar5;
        }
        puVar2 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578cc  FUN_004578cc   (24 bytes)   [unnamed]
SIZE_T __stdcall FUN_004578cc(void)

{
  _MEMORYSTATUS buffer;
  
  buffer.dwLength = 0x20;
  GlobalMemoryStatus(&buffer);
  return buffer.dwAvailPhys;
}

// ----------------------------------------------------------------------------------------------------
// 0x004578e4  FUN_004578e4   (96 bytes)   [unnamed]
void __stdcall FUN_004578e4(void)

{
  int *piVar1;
  LPVOID address;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = (*(int * *)&DAT_00484b64);
  while (piVar5 = piVar1, piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[0x23];
    piVar5[2] = piVar5[2] + -1;
    iVar7 = piVar5[2];
    piVar6 = piVar5 + iVar7 + 3;
    for (; -1 < iVar7; iVar7 = iVar7 + -1) {
      address = (LPVOID)*piVar6;
      iVar3 = *piVar5;
      iVar4 = *piVar6;
      piVar5[1] = iVar4 - (int)piVar5;
      *piVar5 = iVar4 - (int)piVar5;
      FUN_00456db0(address,iVar3 - ((int)address - (int)piVar5));
      FUN_00456dc8(address);
      piVar6 = piVar6 + -1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457944  FUN_00457944   (296 bytes)   [unnamed]
int __cdecl FUN_00457944(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int local_8;
  
  puVar4 = (uint *)(param_1 + -4);
  uVar1 = *puVar4 & 0xfffffffc;
  puVar2 = (uint *)((int)puVar4 + uVar1 + 4);
  if (param_2 < 0xc) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = param_2 + 3 & 0xfffffffc;
  }
  uVar6 = *puVar4 & 0xfffffffc;
  if (uVar3 != uVar6) {
    if ((*puVar2 & 1) != 0) {
      uVar6 = uVar6 + (*puVar2 & 0xfffffffc) + 4;
    }
    if (uVar6 < uVar3) {
      param_1 = 0;
    }
    else {
      local_8 = 0;
      if ((*puVar2 & 1) != 0) {
        if (DAT_00484b58 <= (*puVar2 & 0xfffffffc)) {
          local_8 = *(int *)((int)puVar4 + uVar1 + 0xc);
        }
        if (puVar2 == (uint *)PTR_DAT_00484b7c) {
          PTR_DAT_00484b7c = *(undefined **)((int)puVar4 + uVar1 + 8);
        }
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 8) + 8) =
             *(undefined4 *)((int)puVar4 + uVar1 + 0xc);
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 0xc) + 4) =
             *(undefined4 *)((int)puVar4 + uVar1 + 8);
        puVar2 = (uint *)((int)puVar4 + (*puVar2 & 0xfffffffc) + uVar1 + 8);
        *puVar2 = *puVar2 & 0xfffffffd;
        *puVar4 = (*puVar4 & 2) + uVar6;
      }
      uVar6 = uVar6 - uVar3;
      if (0xf < uVar6) {
        uVar1 = uVar6 - 4;
        uVar3 = (*puVar4 & 2) + uVar3;
        *puVar4 = uVar3;
        uVar3 = uVar3 & 0xfffffffc;
        piVar5 = (int *)((int)puVar4 + uVar3 + 4);
        *piVar5 = uVar6 - 3;
        puVar2 = (uint *)((int)puVar4 + uVar6 + 4 + uVar3);
        *puVar2 = *puVar2 | 2;
        if (uVar1 < DAT_00484b58) {
          local_8 = uVar1 * 2 + DAT_00484b6c + -0xc;
        }
        else if (local_8 == 0) {
          local_8 = *(int *)(PTR_DAT_00484b7c + 4);
        }
        *(undefined4 *)((int)puVar4 + uVar3 + 8) = *(undefined4 *)(local_8 + 4);
        *(int *)((int)puVar4 + uVar3 + 0xc) = local_8;
        *(int **)(*(int *)((int)puVar4 + uVar3 + 8) + 8) = piVar5;
        *(int **)(local_8 + 4) = piVar5;
        *(uint *)((int)piVar5 + uVar1) = uVar6;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457a6c  FUN_00457a6c   (177 bytes, 3 ranges)   [unnamed]
uint * __cdecl FUN_00457a6c(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + 0x1003 & 0xfffff000;
  uVar3 = param_1[-1] & 0xfffffffc;
  puVar1 = param_1;
  if (uVar3 != uVar2 - 4) {
    if (uVar3 < uVar2 - 4) {
      puVar1 = FUN_004576cc(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,uVar3);
        FUN_0045755c((int)param_1);
      }
    }
    else if (uVar2 - 4 < 0x100000) {
      puVar1 = FUN_004576cc(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,param_2);
        FUN_0045755c((int)param_1);
      }
    }
    else {
      FUN_00456db0((LPVOID)((int)param_1 + (uVar2 - 4)),(uVar3 + 4) - uVar2);
      param_1[-1] = uVar2 - 4;
    }
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457b24  FUN_00457b24   (150 bytes)   [unnamed]
uint * __cdecl FUN_00457b24(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_0045755c((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_004576cc(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_00457944((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_004576cc(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_004675a4(puVar1,param_1,param_2);
        FUN_0045755c((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_00457a6c(param_1,param_2);
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457bbc  FUN_00457bbc   (26 bytes)   [unnamed]
uint __cdecl FUN_00457bbc(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457bd8  FUN_00457bd8   (1 bytes)   [unnamed]
void __stdcall FUN_00457bd8(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457bdc  FUN_00457bdc   (1 bytes)   [unnamed]
void __stdcall FUN_00457bdc(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ea0  FUN_00457ea0   (55 bytes)   [unnamed]
void __cdecl FUN_00457ea0(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484ba4);
  std::allocator::allocator_45aa5c(local_30);
  FUN_0045ab44(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457ed8  FUN_00457ed8   (55 bytes)   [unnamed]
void __cdecl FUN_00457ed8(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x484bac);
  std::allocator::allocator_459238(local_30);
  FUN_0045aa98(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457f7c  FUN_00457f7c   (36 bytes)   [unnamed]
int __cdecl FUN_00457f7c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00457fa0(param_2);
  FUN_00457fc0(param_1,*puVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457fa0  FUN_00457fa0   (18 bytes)   [unnamed]
int __cdecl FUN_00457fa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00457fb4(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457fb4  FUN_00457fb4   (11 bytes)   [unnamed]
int __cdecl FUN_00457fb4(int param_1)

{
  return param_1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457fc0  FUN_00457fc0   (43 bytes)   [unnamed]
int __cdecl FUN_00457fc0(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x485b8c);
  *(undefined4 *)(param_1 + 8) = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457fec  FUN_00457fec   (30 bytes)   [unnamed]
int __cdecl FUN_00457fec(int param_1,int param_2)

{
  FUN_00457fc0(param_1,*(undefined4 *)(param_2 + 0x24));
  return param_1;
}

} // namespace tea

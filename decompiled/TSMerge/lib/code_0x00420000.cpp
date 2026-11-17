// TSMerge.exe — runtime / library code "code_0x00420000"
// 95 functions, 0x0042027c..0x00423c10. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042027c  FUN_0042027c   (153 bytes)   [unnamed]
int * __cdecl FUN_0042027c(int *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4680fc);
  iVar4 = 0;
  do {
    if (param_2 < (int)(&DAT_00467e4c)[iVar4]) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  if (iVar4 < 0xc) {
    puVar2 = FUN_0041fb78();
    piVar1 = *(int **)(puVar2 + iVar4 * 4 + 300);
    if (*piVar1 == 0) {
      piVar3 = (int *)FUN_004159f8((int)(piVar1 + 1),*(uint *)((int)piVar1 + 0x15));
    }
    else {
      piVar3 = (int *)*piVar1;
      *piVar1 = *piVar3;
    }
    *param_1 = (int)piVar3;
    param_1[1] = iVar4;
  }
  else {
    iVar4 = operator_new_array();
    *param_1 = iVar4;
    param_1[1] = -1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420530  FUN_00420530   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00420530(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4681d5);
  if (DAT_004681c4 == '\0') {
    FUN_0042060c(0x476dc4);
    DAT_004681c4 = DAT_004681c4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476dc4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420579  FUN_00420579   (64 bytes)   [unnamed]
void __stdcall FUN_00420579(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4681e9);
  if (DAT_004681c4 != '\0') {
    OWL::TMemDCCache::_dtor(0x476dc4,2);
    DAT_004681c4 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042060c  FUN_0042060c   (70 bytes)   [unnamed]
int __cdecl FUN_0042060c(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468204);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 5) = 0;
    *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004206b0  FUN_004206b0   (88 bytes)   [unnamed]
undefined4 __cdecl FUN_004206b0(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar2 * 5) == 0) {
      hdc = GetWindowDC((HWND)0x0);
      pHVar1 = CreateCompatibleDC(hdc);
      *(HDC *)(param_1 + iVar2 * 5) = pHVar1;
      ReleaseDC((HWND)0x0,hdc);
    }
    if (*(char *)(param_1 + 4 + iVar2 * 5) == '\0') break;
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 4 + iVar2 * 5) = 1;
  return *(undefined4 *)(param_1 + iVar2 * 5);
}

// ----------------------------------------------------------------------------------------------------
// 0x00420708  FUN_00420708   (51 bytes)   [unnamed]
void __cdecl FUN_00420708(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < 0x10 && (*(int *)(param_1 + iVar1 * 5) != 0)); iVar1 = iVar1 + 1) {
    if (param_2 == *(int *)(param_1 + iVar1 * 5)) {
      *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
      return;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042073c  FUN_0042073c   (71 bytes)   [unnamed]
int * __cdecl FUN_0042073c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468228);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_00420864(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004207a4  FUN_004207a4   (102 bytes)   [unnamed]
int * __cdecl FUN_004207a4(int *param_1,undefined4 *param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46824c);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  pHVar1 = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)pHVar1;
  FUN_0041c800(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042080c  FUN_0042080c   (85 bytes)   [unnamed]
int * __cdecl FUN_0042080c(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468270);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_00420864(param_1);
  FUN_004208a4(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420864  FUN_00420864   (63 bytes)   [unnamed]
void __cdecl FUN_00420864(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  HDC pHVar3;
  
  puVar1 = FUN_00420530();
  iVar2 = FUN_004206b0((int)puVar1);
  *param_1 = iVar2;
  if (*param_1 == 0) {
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    *param_1 = (int)pHVar3;
    FUN_0041c800(param_1,0x7fe3);
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004208a4  FUN_004208a4   (67 bytes)   [unnamed]
void __cdecl FUN_004208a4(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_0041d158(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 0x21) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x21) = pvVar1;
      }
      else {
        FUN_0041d184((uint)pvVar1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004208e8  FUN_004208e8   (42 bytes)   [unnamed]
void __cdecl FUN_004208e8(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x21) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x21));
    FUN_0041d184((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x21) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004209a8  FUN_004209a8   (91 bytes)   [unnamed]
undefined4 * __cdecl FUN_004209a8(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468324);
  *param_1 = &OWL::TMenu::vftable;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_2 != 0;
  FUN_00420c24((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a20  FUN_00420a20   (109 bytes)   [unnamed]
undefined4 * __cdecl FUN_00420a20(undefined4 *param_1,int *param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468354);
  *param_1 = &OWL::TMenu::vftable;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_3 != 0;
  FUN_00420c24((int)param_1,0x7fe8);
  FUN_00420c4c((int)param_1,param_2,0,-1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a90  FUN_00420a90   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_00420a90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468384);
  *param_1 = &OWL::TMenu::vftable;
  param_1[1] = param_2;
  *(bool *)(param_1 + 2) = param_3 != 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420adc  FUN_00420adc   (94 bytes)   [unnamed]
undefined4 * __cdecl FUN_00420adc(undefined4 *param_1,HWND param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4683a8);
  *param_1 = &OWL::TMenu::vftable;
  pHVar1 = GetMenu(param_2);
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_3 != 0;
  FUN_00420c24((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b74  FUN_00420b74   (169 bytes, 2 ranges)   [unnamed]
UINT __cdecl FUN_00420b74(int param_1,int param_2)

{
  UINT UVar1;
  HMENU pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x4683e8);
  UVar1 = GetMenuItemID(*(HMENU *)(param_1 + 4),param_2);
  if (UVar1 == 0xffffffff) {
    pHVar2 = GetSubMenu(*(HMENU *)(param_1 + 4),param_2);
    if (pHVar2 == (HMENU)0x0) {
      UVar1 = 0;
      *in_FS_OFFSET = local_34;
    }
    else {
      FUN_00420a90(local_10,pHVar2,0);
      UVar1 = FUN_00420b74((int)local_10,0);
      UVar1 = UVar1 - 1;
      OWL::TMenu::_dtor(local_10,2);
      *in_FS_OFFSET = local_34;
    }
  }
  else {
    *in_FS_OFFSET = local_34;
  }
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c24  FUN_00420c24   (23 bytes)   [unnamed]
void __cdecl FUN_00420c24(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00421050(param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c4c  FUN_00420c4c   (409 bytes)   [unnamed]
int * __cdecl FUN_00420c4c(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  UINT uFlags;
  HMENU pHVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  CHAR local_14c [256];
  UINT local_4c;
  UINT_PTR local_48;
  int local_44;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  int local_1c [3];
  int local_10 [3];
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x468444);
  if (param_4 < 0) {
    iVar2 = GetMenuItemCount((HMENU)param_2[1]);
    piVar1 = (int *)(iVar2 - param_3);
    param_4 = (int)piVar1;
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      uFlags = GetMenuState((HMENU)param_2[1],param_3 + iVar2,0x400);
      if (uFlags == 0xffffffff) {
        *in_FS_OFFSET = local_40;
        return (int *)local_40;
      }
      (**(code **)(*param_2 + 4))();
      FUN_00445198();
      if ((uFlags & 0x10) == 0) {
        local_4c = FUN_00420b74((int)param_2,param_3 + iVar2);
        piVar1 = (int *)AppendMenuA(*(HMENU *)(param_1 + 4),uFlags,local_4c,local_14c);
      }
      else {
        local_30 = 8;
        iVar4 = 0;
        local_44 = param_3 + iVar2;
        pHVar3 = GetSubMenu((HMENU)param_2[1],local_44);
        FUN_00420a90(local_10,pHVar3,iVar4);
        local_24 = local_24 + 1;
        local_30 = 0x20;
        FUN_004209a8(local_1c,0);
        local_24 = local_24 + 1;
        local_30 = 0x14;
        FUN_00420c4c((int)local_1c,local_10,0,-1);
        local_48 = (**(code **)(local_1c[0] + 4))();
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags & 0x10,local_48,local_14c);
        local_24 = local_24 + -1;
        OWL::TMenu::_dtor(local_1c,2);
        local_24 = local_24 + -1;
        piVar1 = local_10;
        OWL::TMenu::_dtor(piVar1,2);
        local_30 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  *in_FS_OFFSET = local_40;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420de8  FUN_00420de8   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_00420de8(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468480);
  pHVar1 = CreatePopupMenu();
  FUN_00420a90(param_1,pHVar1,param_2);
  *param_1 = &OWL::TPopupMenu::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420e50  FUN_00420e50   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_00420e50(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4684a4);
  FUN_00417f7c(param_1,param_2,DAT_00470a60);
  *param_1 = &OWL::TXMenu::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421050  FUN_00421050   (83 bytes)   [unnamed]
void __cdecl FUN_00421050(uint param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46851c);
  piVar1 = FUN_00420e50(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004216ec  FUN_004216ec   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_004216ec(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468718);
  *param_1 = &OWL::TMsgThread::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217e8  FUN_004217e8   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_004217e8(int *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  tagMSG local_20;
  
  uVar3 = 0;
  while( true ) {
    BVar2 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar2 == 0) {
      return uVar3;
    }
    uVar3 = 1;
    if (local_20.message == 0x12) break;
    uVar1 = (**(code **)(*param_1 + 8))();
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(WPARAM *)((int)param_1 + 5) = local_20.wParam;
  PostQuitMessage(local_20.wParam);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421844  FUN_00421844   (37 bytes)   [unnamed]
void __stdcall FUN_00421844(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  do {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,3);
    if (BVar1 == 0) {
      return;
    }
  } while (local_20.message != 0xf);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421928  FUN_00421928   (25 bytes)   [unnamed]
void __cdecl FUN_00421928(undefined4 param_1,int param_2)

{
  FUN_00421f20(DAT_004687f0,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421944  FUN_00421944   (25 bytes)   [unnamed]
void __cdecl FUN_00421944(undefined4 param_1,int param_2)

{
  FUN_00421f38(DAT_004687f0,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421960  FUN_00421960   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_00421960(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00421fa4(DAT_004687f0,param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042197c  FUN_0042197c   (88 bytes)   [unnamed]
void __stdcall FUN_0042197c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x468804);
  piVar1 = DAT_004687f0;
  if ((DAT_004687f0 == (int *)0x0) && (piVar1 = (int *)operator_new(), piVar1 != (int *)0x0)) {
    FUN_00421d9c(piVar1);
  }
  DAT_004687f0 = piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004219f8  FUN_004219f8   (54 bytes)   [unnamed]
void __stdcall FUN_004219f8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468824);
  OWL::TStreamableTypes::_dtor(DAT_004687f0,3);
  DAT_004687f0 = (int *)0x0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421a30  FUN_00421a30   (174 bytes)   [unnamed]
int __cdecl FUN_00421a30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00421ae0(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar2 = FUN_00455b74(*(char **)(param_2 + 8),*(char **)(iVar1 + 8));
    if (iVar2 < 0) {
      bVar4 = true;
    }
    else if (iVar2 < 1) {
      if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(iVar1 + 0xc) == 0)) ||
         (*(int *)(param_2 + 0xc) == *(int *)(iVar1 + 0xc))) {
        bVar4 = false;
      }
      else {
        bVar4 = *(uint *)(param_2 + 0xc) < *(uint *)(iVar1 + 0xc);
      }
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
  }
  *(int *)(*(int *)(param_1 + 9) + iVar3 * 4) = param_2;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ae0  FUN_00421ae0   (155 bytes)   [unnamed]
void __cdecl FUN_00421ae0(int param_1,int param_2)

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
// 0x00421b7c  FUN_00421b7c   (341 bytes)   [unnamed]
uint __cdecl FUN_00421b7c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 1) != 0) {
    local_8 = 0;
    local_c = *(int *)(param_1 + 1) - 1;
    while ((local_8 < local_c && (local_c != 0xffffffff))) {
      uVar3 = local_8 + local_c >> 1;
      iVar1 = *(int *)(*(int *)(param_1 + 9) + uVar3 * 4);
      iVar2 = FUN_00455b74(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 == 0) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar3;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 9) + uVar3 * 4);
      iVar2 = FUN_00455b74(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 < 0) {
        bVar4 = true;
      }
      else if (iVar2 < 1) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = false;
        }
        else {
          bVar4 = *(uint *)(iVar1 + 0xc) < *(uint *)(param_2 + 0xc);
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        local_8 = uVar3 + 1;
      }
      else {
        local_c = uVar3 - 1;
      }
    }
    if (local_8 == local_c) {
      iVar1 = *(int *)(*(int *)(param_1 + 9) + local_8 * 4);
      iVar2 = FUN_00455b74(*(char **)(iVar1 + 8),*(char **)(param_2 + 8));
      if (iVar2 == 0) {
        if (((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 0)) ||
           (*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        return local_8;
      }
    }
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cd4  FUN_00421cd4   (106 bytes)   [unnamed]
undefined4 * __cdecl FUN_00421cd4(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46883c);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = param_5;
  uVar1 = FUN_0041fd2c(param_2);
  param_1[2] = uVar1;
  FUN_004227b0();
  if (param_5 != 0) {
    FUN_00421928(param_5,(int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d9c  FUN_00421d9c   (131 bytes)   [unnamed]
int * __cdecl FUN_00421d9c(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x468870);
  iVar1 = operator_new();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_00421ae0(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ed4  FUN_00421ed4   (74 bytes)   [unnamed]
void __cdecl FUN_00421ed4(int param_1,char param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4688e4);
  if (param_2 != '\0') {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 1); iVar1 = iVar1 + 1) {
      OWL::TStreamableClass::_dtor(*(int *)(*(int *)(param_1 + 9) + iVar1 * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421f20  FUN_00421f20   (21 bytes)   [unnamed]
void __cdecl FUN_00421f20(int *param_1,undefined4 param_2,int param_3)

{
  FUN_00421a30(*param_1,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421f38  FUN_00421f38   (105 bytes)   [unnamed]
void __cdecl FUN_00421f38(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = FUN_00421b7c(iVar1,param_3);
  if (uVar2 != 0xffffffff) {
    FUN_004559f4((undefined4 *)(uVar2 * 4 + *(int *)(iVar1 + 9)),
                 (undefined4 *)((uVar2 + 1) * 4 + *(int *)(iVar1 + 9)),
                 ((*(int *)(iVar1 + 1) - uVar2) + -1) * 4);
    *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + -1;
  }
  if (*(int *)(*param_1 + 1) == 0) {
    FUN_004219f8();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421fa4  FUN_00421fa4   (1151 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00422026) */
undefined4 __cdecl FUN_00421fa4(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1d8 [248];
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_cc;
  uint local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  undefined1 *local_a4;
  int *local_a0;
  int *local_9c;
  uint local_98;
  int *local_94;
  undefined1 *local_90;
  int *local_8c;
  undefined4 local_88;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x468968);
  local_68 = 8;
  FUN_00421cd4(local_14,param_3,0,0,0);
  local_5c = local_5c + 1;
  local_68 = 0x14;
  uVar1 = FUN_00421b7c(*param_1,(int)local_14);
  if (uVar1 != 0xffffffff) goto LAB_004223f7;
  local_1c = &DAT_00471d68;
  local_e0 = &DAT_00471d68;
  local_5c = local_5c + 1;
  local_68 = 0x38;
  if (DAT_00471f90 - 0xeU < 0x80) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00402ee0;
    uVar5 = 0;
    local_68 = 0x50;
    local_7c = (uint *)FUN_00455640(local_1d8,PTR_s_invalid_string_size_parameter_in_00474068);
    std::string::string_from_cstr((int)local_4c,local_7c);
    local_5c = local_5c + 2;
    local_3c[0] = &std::logic_error::vftable;
    local_88 = 0;
    local_2c = (int *)0x0;
    local_68 = 0x5c;
    if (local_44[-3] == -1 || local_44[-3] + 1 < 0) {
      local_98 = local_44[-1];
      local_a0 = std::string::__getRep(local_34,local_98,local_98);
      local_b0 = local_a0 + 3;
      local_a4 = local_34;
      local_a8 = local_98;
      local_ac = local_44;
      local_9c = local_b0;
      local_2c = local_b0;
      memcpy(local_b0,local_44,local_98);
    }
    else {
      local_8c = local_44;
      local_2c = local_44;
      local_90 = local_34;
      local_94 = local_44 + -3;
      if (local_94 != &DAT_00471d5c) {
        *local_94 = *local_94 + 1;
      }
    }
    local_68 = 0x50;
    local_3c[0] = &std::length_error::vftable;
    local_5c = local_5c + 2;
    if (local_44 != (int *)0x0) {
      if (local_44[-3] != -1) {
        local_b4 = local_44 + -3;
        if (local_b4 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_0042228c;
      }
      local_b8 = local_44 + -3;
      local_bc = local_44 + -3;
      operator_delete();
      local_c0 = 0;
      local_44 = (int *)0x0;
      local_c4 = local_4c;
    }
LAB_0042228c:
    local_68 = 0x44;
    FUN_0045ed74((uint *)&DAT_00402e84,(undefined4*)local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_00452c68((int)local_24,0x80);
  }
  FUN_0044cf10((int)local_24,(uint *)"Attempt to stream unregistered type '");
  local_c8 = *(uint *)(local_1c + -4);
  pcVar2 = strlen(param_3);
  FUN_0044d5c8((int)local_24,local_c8,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  uVar7 = *(uint *)(local_1c + -4);
  pcVar2 = strlen((uint *)("Attempt to stream unregistered type '" + 0x24));
  FUN_0044d5c8((int)local_24,uVar7,0,0x4687ee,(uint)pcVar2,0,(uint)pcVar2);
  local_68 = 0x80;
  piVar3 = FUN_00417a4c(local_54,(int)local_24);
  local_5c = local_5c + 2;
  (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + -2;
  OWL::TXBase::_dtor(local_54,2);
  local_5c = local_5c + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_004223eb;
    }
    local_cc = local_1c + -0xc;
    local_d0 = local_1c + -0xc;
    operator_delete();
    local_d4 = 0;
    local_1c = (undefined *)0x0;
    local_d8 = local_24;
  }
LAB_004223eb:
  local_68 = 0x14;
LAB_004223f7:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  local_5c = local_5c + -1;
  OWL::TStreamableClass::_dtor((int)local_14,2);
  *in_FS_OFFSET = local_78;
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422424  FUN_00422424   (51 bytes)   [unnamed]
void __cdecl FUN_00422424(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_00422458(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422458  FUN_00422458   (155 bytes)   [unnamed]
void __cdecl FUN_00422458(int param_1,int param_2)

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
// 0x004224f4  FUN_004224f4   (30 bytes)   [unnamed]
undefined4 __cdecl FUN_004224f4(int *param_1,uint param_2)

{
  if (param_2 < *(uint *)(*param_1 + 1)) {
    return *(undefined4 *)(*(int *)(*param_1 + 9) + param_2 * 4);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422514  FUN_00422514   (155 bytes)   [unnamed]
void __cdecl FUN_00422514(int param_1,int param_2)

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
// 0x004225b0  FUN_004225b0   (42 bytes)   [unnamed]
void __cdecl FUN_004225b0(int *param_1,int param_2)

{
  uint local_c;
  int local_8;
  
  *param_1 = *param_1 + 1;
  local_8 = *param_1;
  local_c = param_2 + 1;
  FUN_004225dc(param_1[1],&local_c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004225dc  FUN_004225dc   (6 bytes)   [unnamed]
int __stdcall FUN_004225dc(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  __InitExceptBlockLDTC(0x468a10);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00422514(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  while ((iVar3 != 0 && (*param_2 < **(uint **)(*(int *)(param_1 + 9) + -4 + iVar3 * 4)))) {
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
  }
  puVar1 = (uint *)(param_1 + 0xd);
  if (*puVar1 == 0) {
    puVar2 = (uint *)FUN_004159f8(param_1 + 0x11,*(uint *)(param_1 + 0x22));
  }
  else {
    puVar2 = (uint *)*puVar1;
    *puVar1 = *puVar2;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
  }
  *(uint **)(*(int *)(param_1 + 9) + iVar3 * 4) = puVar2;
  *in_FS_OFFSET = uStack_2c;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004225e2  FUN_004225e2   (214 bytes)   [unnamed]
int __stdcall FUN_004225e2(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x468a10);
  if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
    FUN_00422514(iVar2,*(int *)(iVar2 + 1) + 1);
  }
  iVar5 = *(int *)(iVar2 + 1);
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
  while ((iVar5 != 0 &&
         (**(uint **)(unaff_EBP + 0xc) < **(uint **)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4)))) {
    *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) =
         *(undefined4 *)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4);
    iVar5 = iVar5 + -1;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0xc);
  piVar1 = (int *)(iVar2 + 0xd);
  if (*piVar1 == 0) {
    iVar3 = FUN_004159f8(iVar2 + 0x11,*(uint *)(iVar2 + 0x22));
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *piVar1;
    *piVar1 = **(int **)(unaff_EBP + -0x34);
    iVar3 = *(int *)(unaff_EBP + -0x34);
  }
  *(int *)(unaff_EBP + -0x30) = iVar3;
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    **(undefined4 **)(unaff_EBP + -4) = **(undefined4 **)(unaff_EBP + -0x2c);
    *(undefined4 *)(*(int *)(unaff_EBP + -4) + 4) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 4)
    ;
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) = uVar4;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226e4  FUN_004226e4   (65 bytes)   [unnamed]
undefined4 __cdecl FUN_004226e4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c [2];
  
  local_c[0] = param_2 + 1;
  local_c[1] = 0;
  uVar1 = FUN_00422728(*(int *)(param_1 + 4),local_c);
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 9) + uVar1 * 4) + 4);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422728  FUN_00422728   (135 bytes)   [unnamed]
uint __cdecl FUN_00422728(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar3 = *(int *)(param_1 + 1) - 1;
    while ((uVar1 < uVar3 && (uVar3 != 0xffffffff))) {
      uVar2 = uVar3 + uVar1 >> 1;
      if (**(uint **)(*(int *)(param_1 + 9) + uVar2 * 4) == *param_2) {
        return uVar2;
      }
      if (**(uint **)(*(int *)(param_1 + 9) + uVar2 * 4) < *param_2) {
        uVar1 = uVar2 + 1;
      }
      else {
        uVar3 = uVar2 - 1;
      }
    }
    if ((uVar3 != uVar1) || (**(uint **)(*(int *)(param_1 + 9) + uVar1 * 4) != *param_2)) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004227b0  FUN_004227b0   (6 bytes)   [unnamed]
void __stdcall FUN_004227b0(void)

{
  FUN_0042197c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004227b8  FUN_004227b8   (83 bytes)   [unnamed]
uint __cdecl FUN_004227b8(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[3] < (uint)piVar1[4]) {
      uVar2 = (uint)*(byte *)piVar1[3];
      piVar1[3] = piVar1[3] + 1;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x20))();
    }
    if (uVar2 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042280c  FUN_0042280c   (75 bytes)   [unnamed]
void __cdecl FUN_0042280c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422858  FUN_00422858   (173 bytes)   [unnamed]
void __cdecl FUN_00422858(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 *local_c [2];
  
  __InitExceptBlockLDTC(0x468a50);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_0042027c((int *)local_c,param_3);
    uVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (uVar1 == param_3) {
      memcpy(param_2,local_c[0],param_3);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    OWL::TTmpBufferBase::_dtor((undefined4*)local_c,0);
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422908  FUN_00422908   (36 bytes)   [unnamed]
uint __cdecl FUN_00422908(int *param_1)

{
  uint uVar1;
  
  if (param_1[3] != 0) {
    uVar1 = FUN_00422970(param_1);
    return uVar1;
  }
  uVar1 = FUN_0042292c(param_1);
  return uVar1 & 0xffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042292c  FUN_0042292c   (67 bytes)   [unnamed]
uint __cdecl FUN_0042292c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar2 != 2) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 8) = 4;
    }
    uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),(short)((uint)in_ECX >> 0x10));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422970  FUN_00422970   (66 bytes)   [unnamed]
undefined4 __cdecl FUN_00422970(int *param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    in_ECX = 0;
  }
  return in_ECX;
}

// ----------------------------------------------------------------------------------------------------
// 0x004229b4  FUN_004229b4   (50 bytes)   [unnamed]
uint __cdecl FUN_004229b4(int *param_1)

{
  uint uVar1;
  
  if ((uint)param_1[3] < 0x101) {
    uVar1 = FUN_004227b8(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_00422970(param_1);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004229e8  FUN_004229e8   (72 bytes)   [unnamed]
int __cdecl FUN_004229e8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_004229b4(param_1);
    if ((uVar1 == 0xffffffff) || (param_3 - 1U < uVar1)) {
      param_2 = 0;
    }
    else {
      FUN_0042280c(param_1,param_2,uVar1);
      *(undefined1 *)(param_2 + uVar1) = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422a30  FUN_00422a30   (73 bytes)   [unnamed]
undefined4 * __cdecl FUN_00422a30(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar2 = FUN_004229b4(param_1);
    if (uVar2 == 0xffffffff) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)operator_new_array();
      FUN_00422858(param_1,puVar1,uVar2);
      *(undefined1 *)((int)puVar1 + uVar2) = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422a7c  FUN_00422a7c   (129 bytes)   [unnamed]
int __cdecl FUN_00422a7c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char local_84 [128];
  
  uVar1 = FUN_004227b8(param_1);
  if ((char)uVar1 == '[') {
    local_84[0] = '\0';
    FUN_004229e8(param_1,(int)local_84,0x80);
    if (local_84[0] == '\0') {
      *(undefined4 *)(*param_1 + 8) = 4;
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00421960(param_2,(uint *)local_84);
      if (iVar2 == 0) {
        *(undefined4 *)(*param_1 + 8) = 4;
        iVar2 = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*param_1 + 8) = 4;
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422b00  FUN_00422b00   (129 bytes)   [unnamed]
void __cdecl FUN_00422b00(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x468a90);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_00422424(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_00422970(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  operator_delete();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422bec  FUN_00422bec   (47 bytes)   [unnamed]
void __cdecl FUN_00422bec(int *param_1)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_004227b8(param_1);
    if ((char)uVar1 != ']') {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422c1c  FUN_00422c1c   (135 bytes)   [unnamed]
int __cdecl FUN_00422c1c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar3 = FUN_004227b8(param_1);
    cVar1 = (char)uVar3;
    if (cVar1 == '\0') {
      *param_2 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = FUN_00422908(param_1);
      iVar2 = FUN_004224f4(param_1 + 2,uVar3);
      *param_2 = iVar2;
    }
    else if (cVar1 == '\x02') {
      puVar4 = (undefined4 *)FUN_00422a7c(param_1,param_3);
      FUN_00422b00(param_1,puVar4,param_2);
      FUN_00422bec(param_1);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    iVar2 = *param_2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422ca4  FUN_00422ca4   (91 bytes)   [unnamed]
void __cdecl FUN_00422ca4(int *param_1,byte param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[6] < (uint)piVar1[7]) {
      pbVar2 = (byte *)piVar1[6];
      piVar1[6] = piVar1[6] + 1;
      *pbVar2 = param_2;
      uVar3 = (uint)param_2;
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0x24))();
    }
    if (uVar3 == 0xffffffff) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422d00  FUN_00422d00   (75 bytes)   [unnamed]
void __cdecl FUN_00422d00(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422d4c  FUN_00422d4c   (57 bytes)   [unnamed]
void __cdecl FUN_00422d4c(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 2) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422d88  FUN_00422d88   (57 bytes)   [unnamed]
void __cdecl FUN_00422d88(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422dc4  FUN_00422dc4   (107 bytes)   [unnamed]
void __cdecl FUN_00422dc4(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    puVar1 = (undefined4 *)operator_new_array();
    memcpy(puVar1,param_2,param_3);
    uVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (uVar2 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    operator_delete_array();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e30  FUN_00422e30   (72 bytes)   [unnamed]
void __cdecl FUN_00422e30(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_00422d88(param_1);
    }
    else {
      pcVar1 = strlen(param_2);
      FUN_00422d88(param_1);
      FUN_00422d00(param_1,param_2,(int)pcVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e78  FUN_00422e78   (72 bytes)   [unnamed]
void __cdecl FUN_00422e78(int *param_1,uint *param_2)

{
  char *pcVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_00422d88(param_1);
    }
    else {
      pcVar1 = strlen(param_2);
      FUN_00422d88(param_1);
      FUN_00422dc4(param_1,param_2,(uint)pcVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422ec0  FUN_00422ec0   (57 bytes)   [unnamed]
void __cdecl FUN_00422ec0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00422f74(param_1,param_2);
    FUN_00422fc0(param_1,param_2,param_4);
    FUN_00422ca4(param_1,0x5d);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422efc  FUN_00422efc   (117 bytes)   [unnamed]
void __cdecl FUN_00422efc(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (int *)0x0) {
      FUN_00422ca4(param_1,0);
    }
    else {
      iVar1 = FUN_004226e4(param_1[2],(int)param_2);
      if (iVar1 == 0) {
        FUN_00422ca4(param_1,2);
        FUN_00422ec0(param_1,param_2,1,param_3);
      }
      else {
        FUN_00422ca4(param_1,1);
        FUN_00422d88(param_1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422f74  FUN_00422f74   (76 bytes)   [unnamed]
void __cdecl FUN_00422f74(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00422ca4(param_1,0x5b);
    if (param_2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_2;
    }
    puVar1 = FUN_0045666c((int)param_2,iVar3,0x404628);
    puVar2 = (uint *)FUN_0045677c((int)puVar1);
    FUN_00422e30(param_1,puVar2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422fc0  FUN_00422fc0   (183 bytes)   [unnamed]
void __cdecl FUN_00422fc0(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x468adc);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_004225b0((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_0045666c((int)param_2,iVar4,0x404628);
    puVar2 = (uint *)FUN_0045677c((int)puVar1);
    puVar1 = (undefined4 *)FUN_00421960(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_00422d88(param_1);
    (**(code **)(*piVar3 + 8))();
    operator_delete();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004231c4  FUN_004231c4   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004231c4(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004231f4  FUN_004231f4   (97 bytes)   [unnamed]
void __cdecl FUN_004231f4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468b08);
  if (param_1 != 0) {
    FUN_00421ed4(param_1,'\x01');
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
// 0x00423348  FUN_00423348   (111 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423348(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468b38);
  if (param_1 != 0) {
    FUN_00421ed4(param_1,'\x01');
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
// 0x00423498  FUN_00423498   (80 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423498(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468b58);
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
// 0x00423594  FUN_00423594   (92 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423594(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468b7c);
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
// 0x00423654  FUN_00423654   (45 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423654(int param_1,byte param_2)

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
// 0x00423684  FUN_00423684   (22 bytes)   [unnamed]
FARPROC __stdcall FUN_00423684(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("USER32");
  pFVar1 = GetProcAddress(hModule,"DefWindowProcA");
  return pFVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042369a  FUN_0042369a   (60 bytes)   [unnamed]
void __stdcall FUN_0042369a(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468ba1);
  if (DAT_00468ba0 != '\0') {
    HeapDestroy(DAT_00476e14);
    DAT_00468ba0 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004236d8  FUN_004236d8   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_004236d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004236e0();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004236e0  FUN_004236e0   (6 bytes)   [unnamed]
undefined * __stdcall FUN_004236e0(void)

{
  return &DAT_00468b9c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004236e8  FUN_004236e8   (15 bytes)   [unnamed]
void __cdecl FUN_004236e8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004236e0();
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004236f8  FUN_004236f8   (104 bytes)   [unnamed]
void __stdcall FUN_004236f8(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LONG dwNewLong;
  code *pcVar2;
  
  iVar1 = FUN_004236d8();
  if (iVar1 == 0) {
    DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_004236e8(0);
    *(HWND *)(iVar1 + 0xc) = param_1;
    dwNewLong = FUN_00423684();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_0042cbe0(iVar1);
    pcVar2 = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*pcVar2)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423760  FUN_00423760   (198 bytes)   [unnamed]
undefined1 * __cdecl FUN_00423760(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x468bec);
  puVar1 = FUN_00423828();
  puVar2 = HeapAlloc((HANDLE)*puVar1,0,10);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = local_10;
    piVar3 = FUN_0041864c(puVar1);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,puVar1,piVar3);
    OWL::TXOwl::_dtor(local_10,0);
  }
  else {
    *puVar2 = 0xb8;
    puVar2[5] = 0xe9;
    *(undefined4 *)(puVar2 + 1) = param_1;
    *(int *)(puVar2 + 6) = 0x423906 - (int)puVar2;
  }
  *in_FS_OFFSET = local_38;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423828  FUN_00423828   (151 bytes)   [unnamed]
undefined4 * __stdcall FUN_00423828(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x468c38);
  if (DAT_00468ba0 == '\0') {
    DAT_00476e14 = HeapCreate(0x40000,0x8000,0);
    if (DAT_00476e14 == (HANDLE)0x0) {
      piVar1 = FUN_0041864c(local_10);
      (**(code **)(*piVar1 + 0xc))();
      OWL::TXOwl::_dtor(local_10,0);
    }
    DAT_00468ba0 = DAT_00468ba0 + '\x01';
  }
  *in_FS_OFFSET = local_34;
  return (undefined4*)&DAT_00476e14;
}

// ----------------------------------------------------------------------------------------------------
// 0x004238e0  FUN_004238e0   (5 bytes)   [unnamed]
void __stdcall FUN_004238e0(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004238e8  FUN_004238e8   (40 bytes)   [unnamed]
void __cdecl FUN_004238e8(int param_1)

{
  LPVOID lpMem;
  undefined4 *puVar1;
  
  lpMem = *(LPVOID *)(param_1 + 0x68);
  if (lpMem != (LPVOID)0x0) {
    puVar1 = FUN_00423828();
    HeapFree((HANDLE)*puVar1,0,lpMem);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423910  FUN_00423910   (25 bytes)   [unnamed]
void FUN_00423910(int param_1)

{
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  
  FUN_0042bc1c(param_1,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004239d4  FUN_004239d4   (35 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004239d4(LPVOID param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = FUN_00423828();
    HeapFree((HANDLE)*puVar1,0,param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004239f8  FUN_004239f8   (106 bytes)   [unnamed]
int * __cdecl FUN_004239f8(int *param_1,HWND param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468c74);
  FUN_00416afc(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
  *(HWND *)((int)param_1 + 0x61) = param_2;
  pHVar1 = BeginPaint(param_2,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)pHVar1;
  FUN_0041c800(param_1,0x7fe3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423b58  FUN_00423b58   (82 bytes)   [unnamed]
uint * __cdecl FUN_00423b58(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468d28);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_0041cf04(*param_1,4);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423bc8  FUN_00423bc8   (71 bytes)   [unnamed]
uint * __cdecl FUN_00423bc8(uint *param_1,int param_2,BYTE param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468d4c);
  FUN_0041d2ac(param_1);
  FUN_00423c10(param_1,*(int *)(param_2 + 9),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c10  FUN_00423c10   (197 bytes)   [unnamed]
void __cdecl FUN_00423c10(uint *param_1,int param_2,BYTE param_3)

{
  ushort uVar1;
  int iVar2;
  LOGPALETTE *plpal;
  HPALETTE pHVar3;
  ushort uVar4;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    iVar2 = FUN_004152b4(*(short *)(param_2 + 0xe));
    uVar4 = (ushort)iVar2;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 0x20);
  }
  if (uVar4 == 0) {
    *param_1 = 0;
  }
  else {
    plpal = (LOGPALETTE *)operator_new_array();
    plpal->palVersion = 0x300;
    plpal->palNumEntries = uVar4;
    uVar1 = 0;
    if (uVar4 != 0) {
      do {
        plpal->palPalEntry[uVar1].peRed = *(BYTE *)(param_2 + 0x2a + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peGreen = *(BYTE *)(param_2 + 0x29 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peBlue = *(BYTE *)(param_2 + 0x28 + (uint)uVar1 * 4);
        plpal->palPalEntry[uVar1].peFlags = param_3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
    pHVar3 = CreatePalette(plpal);
    *param_1 = (uint)pHVar3;
    operator_delete_array();
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,4);
  return;
}

} // namespace tea

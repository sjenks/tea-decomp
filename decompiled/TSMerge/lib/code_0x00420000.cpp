// TSMerge.exe — runtime / library code "code_0x00420000"
// 88 functions, 0x0042027c..0x00423c10. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420530  FUN_00420530   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00420530(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4681d5);
  if (DAT_004681c4 == '\0') {
    FUN_0042060c(0x476dc4);
    DAT_004681c4 = DAT_004681c4 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476dc4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420579  DestroyRichEditLoader_420579   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_420579(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4681e9);
  if (DAT_004681c4 != '\0') {
    OWL::TMemDCCache::_dtor(0x476dc4,2);
    DAT_004681c4 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042060c  FUN_0042060c   (70 bytes)   [unnamed]
int __cdecl FUN_0042060c(int param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468204);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 5) = 0;
    *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004206b0  FUN_004206b0   (88 bytes)   [unnamed]
undefined4 __cdecl FUN_004206b0(int param_1)

{
  HDC hdc;
  HDC hdc2;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar2 * 5) == 0) {
      hdc = GetWindowDC((HWND)0x0);
      hdc2 = CreateCompatibleDC(hdc);
      *(HDC *)(param_1 + iVar2 * 5) = hdc2;
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
  int i;
  
  for (i = 0; (i < 0x10 && (*(int *)(param_1 + i * 5) != 0)); i = i + 1) {
    if (param_2 == *(int *)(param_1 + i * 5)) {
      *(undefined1 *)(param_1 + 4 + i * 5) = 0;
      return;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042073c  FUN_0042073c   (71 bytes)   [unnamed]
int * __cdecl FUN_0042073c(int *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468228);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_00420864(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004207a4  FUN_004207a4   (102 bytes)   [unnamed]
int * __cdecl FUN_004207a4(int *param_1,undefined4 *param_2)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46824c);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  hdc = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)hdc;
  FUN_0041c800(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042080c  FUN_0042080c   (85 bytes)   [unnamed]
int * __cdecl FUN_0042080c(int *param_1,uint *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468270);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_00420864(param_1);
  FUN_004208a4(param_1,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420864  FUN_00420864   (63 bytes)   [unnamed]
void __cdecl FUN_00420864(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  HDC hdc;
  
  puVar1 = FUN_00420530();
  iVar2 = FUN_004206b0((int)puVar1);
  *param_1 = iVar2;
  if (*param_1 == 0) {
    hdc = CreateCompatibleDC((HDC)0x0);
    *param_1 = (int)hdc;
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
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_0041d158(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)param_1 + 0x21) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x21) = hGdiObject;
      }
      else {
        FUN_0041d184((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004208e8  FUN_004208e8   (42 bytes)   [unnamed]
void __cdecl FUN_004208e8(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x21) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x21));
    FUN_0041d184((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x21) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b74  FUN_00420b74   (169 bytes, 2 ranges)   [unnamed]
UINT __cdecl FUN_00420b74(int param_1,int pos)

{
  UINT UVar1;
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 menu [3];
  
  __InitExceptBlockLDTC(0x4683e8);
  UVar1 = GetMenuItemID(*(HMENU *)(param_1 + 4),pos);
  if (UVar1 == 0xffffffff) {
    hMenu = GetSubMenu(*(HMENU *)(param_1 + 4),pos);
    if (hMenu == (HMENU)0x0) {
      UVar1 = 0;
      *sehChainHead = sehPrevFrame;
    }
    else {
      OWL::TMenu::TMenu_420a90(menu,hMenu,0);
      UVar1 = FUN_00420b74((int)menu,0);
      UVar1 = UVar1 - 1;
      OWL::TMenu::_dtor(menu,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    *sehChainHead = sehPrevFrame;
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
  int *menu;
  int iVar2;
  UINT uFlags;
  HMENU hMenu;
  undefined4 *sehChainHead;
  int iVar4;
  CHAR newItem [256];
  UINT idNewItem;
  UINT_PTR idNewItem2;
  int pos;
  undefined4 local_40;
  undefined2 ehContext;
  int ehDtorCount;
  int menu2 [3];
  int menu3 [3];
  
  menu = (int *)__InitExceptBlockLDTC(0x468444);
  if (param_4 < 0) {
    iVar2 = GetMenuItemCount((HMENU)param_2[1]);
    menu = (int *)(iVar2 - param_3);
    param_4 = (int)menu;
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      uFlags = GetMenuState((HMENU)param_2[1],param_3 + iVar2,0x400);
      if (uFlags == 0xffffffff) {
        *sehChainHead = local_40;
        return (int *)local_40;
      }
      (**(code **)(*param_2 + 4))();
      FUN_00445198();
      if ((uFlags & 0x10) == 0) {
        idNewItem = FUN_00420b74((int)param_2,param_3 + iVar2);
        menu = (int *)AppendMenuA(*(HMENU *)(param_1 + 4),uFlags,idNewItem,newItem);
      }
      else {
        ehContext = 8;
        iVar4 = 0;
        pos = param_3 + iVar2;
        hMenu = GetSubMenu((HMENU)param_2[1],pos);
        OWL::TMenu::TMenu_420a90(menu3,hMenu,iVar4);
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x20;
        OWL::TMenu::TMenu(menu2,0);
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x14;
        FUN_00420c4c((int)menu2,menu3,0,-1);
        idNewItem2 = (**(code **)(menu2[0] + 4))();
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags & 0x10,idNewItem2,newItem);
        ehDtorCount = ehDtorCount + -1;
        OWL::TMenu::_dtor(menu2,2);
        ehDtorCount = ehDtorCount + -1;
        menu = menu3;
        OWL::TMenu::_dtor(menu,2);
        ehContext = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  *sehChainHead = local_40;
  return menu;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421050  FUN_00421050   (83 bytes)   [unnamed]
void __cdecl FUN_00421050(uint param_1)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46851c);
  piVar1 = OWL::TXMenu::TXMenu(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217e8  FUN_004217e8   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_004217e8(int *param_1)

{
  undefined4 uVar1;
  BOOL ok;
  undefined4 uVar3;
  tagMSG msg;
  
  uVar3 = 0;
  while( true ) {
    ok = PeekMessageA(&msg,(HWND)0x0,0,0,1);
    if (ok == 0) {
      return uVar3;
    }
    uVar3 = 1;
    if (msg.message == 0x12) break;
    uVar1 = (**(code **)(*param_1 + 8))();
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(WPARAM *)((int)param_1 + 5) = msg.wParam;
  PostQuitMessage(msg.wParam);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421844  FUN_00421844   (37 bytes)   [unnamed]
void __stdcall FUN_00421844(void)

{
  BOOL ok;
  tagMSG msg;
  
  do {
    ok = PeekMessageA(&msg,(HWND)0x0,0,0,3);
    if (ok == 0) {
      return;
    }
  } while (msg.message != 0xf);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468804);
  piVar1 = DAT_004687f0;
  if ((DAT_004687f0 == (int *)0x0) && (piVar1 = (int *)operator_new(), piVar1 != (int *)0x0)) {
    FUN_00421d9c(piVar1);
  }
  DAT_004687f0 = piVar1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004219f8  FUN_004219f8   (54 bytes)   [unnamed]
void __stdcall FUN_004219f8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468824);
  OWL::TStreamableTypes::_dtor(DAT_004687f0,3);
  DAT_004687f0 = (int *)0x0;
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d9c  FUN_00421d9c   (131 bytes)   [unnamed]
int * __cdecl FUN_00421d9c(int *param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468870);
  iVar1 = operator_new();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 1) = 0;
    *(undefined4 *)(iVar1 + 5) = 0;
    *(undefined4 *)(iVar1 + 9) = 0;
    FUN_00421ae0(iVar1,0x1e);
  }
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ed4  FUN_00421ed4   (74 bytes)   [unnamed]
void __cdecl FUN_00421ed4(int param_1,char param_2)

{
  int i;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4688e4);
  if (param_2 != '\0') {
    for (i = 0; i < *(int *)(param_1 + 1); i = i + 1) {
      OWL::TStreamableClass::_dtor(*(int *)(*(int *)(param_1 + 9) + i * 4),3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *sehChainHead = sehPrevFrame;
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
  char *len;
  int *piVar3;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 uVar5;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined *unused;
  undefined1 *unused2;
  undefined4 unused3;
  undefined *unused4;
  undefined *unused5;
  uint pos;
  undefined1 *unused6;
  undefined4 unused7;
  int *unused8;
  int *unused9;
  int *strRep;
  int *newData;
  int *unused10;
  uint unused11;
  undefined1 *unused12;
  int *newRep;
  int *unused13;
  uint len2;
  int *strRep2;
  undefined1 *unused14;
  int *unused15;
  undefined4 unused16;
  uint *msgText;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 txBase [2];
  undefined1 str2 [8];
  int *str3;
  undefined **lengthError [2];
  undefined1 newStr [8];
  int *unused17;
  undefined1 str [8];
  undefined *local_1c;
  undefined4 streamableClass [4];
  
  __InitExceptBlockLDTC(0x468968);
  ehContext = 8;
  FUN_00421cd4(streamableClass,param_3,0,0,0);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  uVar1 = FUN_00421b7c(*param_1,(int)streamableClass);
  if (uVar1 != 0xffffffff) goto LAB_004223f7;
  local_1c = &g_emptyStringData;
  unused = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x38;
  if (g_stringNpos - 0xeU < 0x80) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar7 = 1;
    copyCtor = &LAB_00402ee0;
    uVar5 = 0;
    ehContext = 0x50;
    msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00474068);
    std::string::string_from_cstr((int)str2,msgText);
    ehDtorCount = ehDtorCount + 2;
    lengthError[0] = &std::logic_error::vftable;
    unused16 = 0;
    unused17 = (int *)0x0;
    ehContext = 0x5c;
    if (str3[-3] == -1 || str3[-3] + 1 < 0) {
      len2 = str3[-1];
      newRep = std::string::__getRep(newStr,len2,len2);
      newData = newRep + 3;
      unused12 = newStr;
      unused11 = len2;
      unused10 = str3;
      unused13 = newData;
      unused17 = newData;
      memcpy(newData,str3,len2);
    }
    else {
      unused15 = str3;
      unused17 = str3;
      unused14 = newStr;
      strRep2 = str3 + -3;
      if (strRep2 != &g_nullStringRep) {
        *strRep2 = *strRep2 + 1;
      }
    }
    ehContext = 0x50;
    lengthError[0] = &std::length_error::vftable;
    ehDtorCount = ehDtorCount + 2;
    if (str3 != (int *)0x0) {
      if (str3[-3] != -1) {
        strRep = str3 + -3;
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
        if (prevRefs != 0) goto LAB_0042228c;
      }
      unused9 = str3 + -3;
      unused8 = str3 + -3;
      operator_delete();
      unused7 = 0;
      str3 = (int *)0x0;
      unused6 = str2;
    }
LAB_0042228c:
    ehContext = 0x44;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,(undefined4*)lengthError,uVar5,copyCtor,uVar7,throwFlags,throwFile,throwLine);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_00452c68((int)str,0x80);
  }
  std::string::assign_cstr((int)str,(uint *)"Attempt to stream unregistered type '");
  pos = *(uint *)(local_1c + -4);
  len = strlen(param_3);
  std::string::replace((int)str,pos,0,(uint)param_3,(uint)len,0,(uint)len);
  uVar7 = *(uint *)(local_1c + -4);
  len = strlen((uint *)("Attempt to stream unregistered type '" + 0x24));
  std::string::replace((int)str,uVar7,0,0x4687ee,(uint)len,0,(uint)len);
  ehContext = 0x80;
  piVar3 = OWL::TXBase::TXBase(txBase,(int)str);
  ehDtorCount = ehDtorCount + 2;
  (**(code **)(*piVar3 + 0xc))();
  ehDtorCount = ehDtorCount + -2;
  OWL::TXBase::_dtor(txBase,2);
  ehDtorCount = ehDtorCount + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (piVar3 == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        prevRefs = *piVar3 + 1;
      }
      if (prevRefs != 0) goto LAB_004223eb;
    }
    unused5 = local_1c + -0xc;
    unused4 = local_1c + -0xc;
    operator_delete();
    unused3 = 0;
    local_1c = (undefined *)0x0;
    unused2 = str;
  }
LAB_004223eb:
  ehContext = 0x14;
LAB_004223f7:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  ehDtorCount = ehDtorCount + -1;
  OWL::TStreamableClass::_dtor((int)streamableClass,2);
  *sehChainHead = sehPrevFrame;
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
// 0x004225b0  FUN_004225b0   (42 bytes)   [unnamed]
void __cdecl FUN_004225b0(int *param_1,int param_2)

{
  uint local_c;
  int unused;
  
  *param_1 = *param_1 + 1;
  unused = *param_1;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  
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
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x28);
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
void __cdecl FUN_00422858(int *param_1,undefined4 *dest,uint param_3)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 *tmpBufferBase [2];
  
  __InitExceptBlockLDTC(0x468a50);
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    FUN_0042027c((int *)tmpBufferBase,param_3);
    uVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (uVar1 == param_3) {
      memcpy(dest,tmpBufferBase[0],param_3);
    }
    else {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    OWL::TTmpBufferBase::_dtor((undefined4*)tmpBufferBase,0);
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *dest;
  uint uVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar2 = FUN_004229b4(param_1);
    if (uVar2 == 0xffffffff) {
      dest = (undefined4 *)0x0;
    }
    else {
      dest = (undefined4 *)operator_new_array();
      FUN_00422858(param_1,dest,uVar2);
      *(undefined1 *)((int)dest + uVar2) = 0;
    }
  }
  else {
    dest = (undefined4 *)0x0;
  }
  return dest;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468a90);
  piVar1 = (int *)(*(code *)*param_2)();
  *param_3 = piVar1[1];
  FUN_00422424(param_1 + 2,*param_3);
  if (param_1[3] != 0) {
    FUN_00422970(param_1);
  }
  (**(code **)(*piVar1 + 4))();
  operator_delete();
  *sehChainHead = sehPrevFrame;
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
void __cdecl FUN_00422dc4(int *param_1,undefined4 *src,uint param_3)

{
  undefined4 *dest;
  uint uVar2;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    dest = (undefined4 *)operator_new_array();
    memcpy(dest,src,param_3);
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
  char *len;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (param_2 == (uint *)0x0) {
      FUN_00422d88(param_1);
    }
    else {
      len = strlen(param_2);
      FUN_00422d88(param_1);
      FUN_00422d00(param_1,param_2,(int)len);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422e78  FUN_00422e78   (72 bytes)   [unnamed]
void __cdecl FUN_00422e78(int *param_1,uint *src)

{
  char *len;
  
  if (*(int *)(*param_1 + 8) == 0) {
    if (src == (uint *)0x0) {
      FUN_00422d88(param_1);
    }
    else {
      len = strlen(src);
      FUN_00422d88(param_1);
      FUN_00422dc4(param_1,src,(uint)len);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423348  FUN_00423348   (111 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423348(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423498  FUN_00423498   (80 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423498(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468b58);
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
// 0x00423594  FUN_00423594   (92 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00423594(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468b7c);
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
  FARPROC procAddress;
  
  hModule = GetModuleHandleA("USER32");
  procAddress = GetProcAddress(hModule,"DefWindowProcA");
  return procAddress;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042369a  FUN_0042369a   (60 bytes)   [unnamed]
void __stdcall FUN_0042369a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468ba1);
  if (DAT_00468ba0 != '\0') {
    HeapDestroy(DAT_00476e14);
    DAT_00468ba0 = '\0';
  }
  *sehChainHead = sehPrevFrame;
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
void __stdcall FUN_004236f8(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)

{
  int iVar1;
  LONG dwNewLong;
  code *windowLong;
  
  iVar1 = FUN_004236d8();
  if (iVar1 == 0) {
    DefWindowProcA(hWnd,msg,wParam,lParam);
  }
  else {
    FUN_004236e8(0);
    *(HWND *)(iVar1 + 0xc) = hWnd;
    dwNewLong = FUN_00423684();
    SetWindowLongA(*(HWND *)(iVar1 + 0xc),-4,dwNewLong);
    FUN_0042cbe0(iVar1);
    windowLong = (code *)GetWindowLongA(*(HWND *)(iVar1 + 0xc),-4);
    (*windowLong)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423760  FUN_00423760   (198 bytes)   [unnamed]
undefined1 * __cdecl FUN_00423760(undefined4 param_1)

{
  undefined4 *txOutOfMemory;
  undefined1 *mem;
  int *piVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 txOwl [3];
  
  __InitExceptBlockLDTC(0x468bec);
  txOutOfMemory = FUN_00423828();
  mem = HeapAlloc((HANDLE)*txOutOfMemory,0,10);
  if (mem == (undefined1 *)0x0) {
    txOutOfMemory = txOwl;
    piVar3 = OWL::TXOutOfMemory::TXOutOfMemory(txOutOfMemory);
    (**(code **)(*piVar3 + 0xc))(piVar3,*piVar3,txOutOfMemory,piVar3);
    OWL::TXOwl::_dtor(txOwl,0);
  }
  else {
    *mem = 0xb8;
    mem[5] = 0xe9;
    *(undefined4 *)(mem + 1) = param_1;
    *(int *)(mem + 6) = 0x423906 - (int)mem;
  }
  *sehChainHead = sehPrevFrame;
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423828  FUN_00423828   (151 bytes)   [unnamed]
undefined4 * __stdcall FUN_00423828(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x468c38);
  if (DAT_00468ba0 == '\0') {
    DAT_00476e14 = HeapCreate(0x40000,0x8000,0);
    if (DAT_00476e14 == (HANDLE)0x0) {
      piVar1 = OWL::TXOutOfMemory::TXOutOfMemory(local_10);
      (**(code **)(*piVar1 + 0xc))();
      OWL::TXOwl::_dtor(local_10,0);
    }
    DAT_00468ba0 = DAT_00468ba0 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
void __cdecl FUN_004239d4(LPVOID mem)

{
  undefined4 *puVar1;
  
  if (mem != (LPVOID)0x0) {
    puVar1 = FUN_00423828();
    HeapFree((HANDLE)*puVar1,0,mem);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004239f8  FUN_004239f8   (106 bytes)   [unnamed]
int * __cdecl FUN_004239f8(int *param_1,HWND hWnd)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468c74);
  FUN_00416afc(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPaintDC::vftable;
  *(HWND *)((int)param_1 + 0x61) = hWnd;
  hdc = BeginPaint(hWnd,(LPPAINTSTRUCT)((int)param_1 + 0x21));
  *param_1 = (int)hdc;
  FUN_0041c800(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423b58  FUN_00423b58   (82 bytes)   [unnamed]
uint * __cdecl FUN_00423b58(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468d28);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_0041cf04(*param_1,4);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423bc8  FUN_00423bc8   (71 bytes)   [unnamed]
uint * __cdecl FUN_00423bc8(uint *param_1,int param_2,BYTE param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468d4c);
  FUN_0041d2ac(param_1);
  FUN_00423c10(param_1,*(int *)(param_2 + 9),param_3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c10  FUN_00423c10   (197 bytes)   [unnamed]
void __cdecl FUN_00423c10(uint *param_1,int param_2,BYTE param_3)

{
  ushort uVar1;
  int iVar2;
  LOGPALETTE *plpal;
  HPALETTE hPalette;
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
    hPalette = CreatePalette(plpal);
    *param_1 = (uint)hPalette;
    operator_delete_array();
  }
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,4);
  return;
}

} // namespace tea

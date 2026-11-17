// TEA.exe — runtime / library code "code_0x004bc000"
// 42 functions, 0x004bc960..0x004bff9c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
int __cdecl FUN_004bc960(int param_1,uint *param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50f3e0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x58) = &DAT_00513d64;
  FUN_004bbd80(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bca70  FUN_004bca70   (110 bytes)   [unnamed]
void __cdecl FUN_004bca70(int param_1)

{
  int iVar1;
  uint local_108 [65];
  
  FUN_004bcae0(param_1,0x1f);
  iVar1 = FUN_004dc978((char *)(param_1 + 0x60),&DAT_0050f43c);
  if (iVar1 == 0) {
    FUN_004cf41c(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)local_108,(LPSTR *)0x0);
    FUN_004cf41c(param_1 + 0x50,local_108);
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
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
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
  *in_FS_OFFSET = local_28;
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
// 0x004bce80  FUN_004bce80   (318 bytes)   [unnamed]
int * __cdecl FUN_004bce80(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50f4a4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&OWL::TEventHandler::vftable;
    param_1[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&OWL::TFindReplaceDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050f730;
  *(undefined ***)param_1[2] = &PTR_LAB_0050f73c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050f748;
  param_1[0x11] = param_4;
  FUN_004bcde4(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
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
// 0x004bd020  FUN_004bd020   (287 bytes)   [unnamed]
int * __cdecl FUN_004bd020(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50f4c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&OWL::TEventHandler::vftable;
    param_1[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004bce80(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFindDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050f640;
  *(undefined ***)param_1[2] = &PTR_LAB_0050f64c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050f658;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd164  FUN_004bd164   (287 bytes)   [unnamed]
int * __cdecl FUN_004bd164(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50f4ec);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&OWL::TEventHandler::vftable;
    param_1[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004bce80(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TReplaceDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050f550;
  *(undefined ***)param_1[2] = &PTR_LAB_0050f55c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050f568;
  *in_FS_OFFSET = local_28;
  return param_1;
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
uint __cdecl FUN_004bd6bc(HMENU param_1,int param_2)

{
  UINT UVar1;
  UINT uId;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = 1;
  local_8 = 0;
  uId = 0;
  if (0 < param_2) {
    do {
      UVar1 = GetMenuState(param_1,uId,0x400);
      if ((UVar1 != 0xffffffff) && ((UVar1 & 3) == 0)) {
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
  HICON pHVar1;
  WNDCLASSA local_2c;
  
  if (DAT_0050f7d0 == (HICON)0x0) {
    memset(&local_2c.style,0,0x28);
    local_2c.hInstance = *(HINSTANCE *)(DAT_00512a1c + 8);
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = "IconSnarfer";
    local_2c.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&local_2c);
    GetClassInfoA(*(HINSTANCE *)(DAT_00512a1c + 8),"IconSnarfer",&local_2c);
    DAT_0050f7d0 = local_2c.hIcon;
    UnregisterClassA("IconSnarfer",*(HINSTANCE *)(DAT_00512a1c + 8));
  }
  pHVar1 = DAT_0050f7d0;
  if (DAT_0050f7d0 == (HICON)0x0) {
    pHVar1 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return pHVar1;
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
  uint uVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    bVar2 = (uVar1 & 0x58000000) == 0x50000000;
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd90c  FUN_004bd90c   (316 bytes)   [unnamed]
int * __cdecl FUN_004bd90c(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50f8f0);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5a;
    *(int *)((int)param_1 + 0x5a) = (int)param_1 + 0x4e;
    *(int *)((int)param_1 + 0x5e) = (int)param_1 + 0x52;
    param_1[1] = (int)param_1 + 0x4e;
    param_1[2] = (int)param_1 + 0x52;
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
    *(undefined4 *)((int)param_1 + 0x56) = 0;
    *(undefined ***)((int)param_1 + 0x4e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x52) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x5a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TFrameWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fad4;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fae0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050faec;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  FUN_004a5098(*param_1,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_004bdb60(param_1,param_5,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bda48  FUN_004bda48   (279 bytes)   [unnamed]
int * __cdecl FUN_004bda48(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50f914);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5a;
    *(int *)((int)param_1 + 0x5a) = (int)param_1 + 0x4e;
    *(int *)((int)param_1 + 0x5e) = (int)param_1 + 0x52;
    param_1[1] = (int)param_1 + 0x4e;
    param_1[2] = (int)param_1 + 0x52;
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
    *(undefined4 *)((int)param_1 + 0x56) = 0;
    *(undefined ***)((int)param_1 + 0x4e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x52) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x5a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TFrameWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fad4;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fae0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050faec;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
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
//   also: OWL::TFrameWindow::vf11 [rtti:vtable]
void __cdecl Child4972344_Notify4914610_4bdebc(int *param_1,int param_2)

{
  HWND pHVar1;
  uint uVar2;
  BOOL BVar3;
  HMENU hMenu;
  
  if (param_2 == 0) {
    pHVar1 = GetFocus();
    if (pHVar1 != (HWND)0x0) {
      uVar2 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
      if ((uVar2 & 0x40000000) == 0) {
        BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
        if (BVar3 != 0) {
          hMenu = GetMenu(*(HWND *)(*param_1 + 0xc));
          BVar3 = IsMenu(hMenu);
          if (BVar3 != 0) {
            FUN_004a6094(*param_1,0x117,hMenu,0);
          }
        }
      }
    }
  }
  OWL::TWindow::vf11(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004be1e0  FUN_004be1e0   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_004be1e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL BVar1;
  
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
    BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (BVar1 != 0) {
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
  BOOL BVar3;
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
      BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
      param_3 = (HANDLE)0x0;
      if (BVar3 != 0) {
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
  int iVar6;
  int iVar7;
  tagRECT *ptVar8;
  LONG *pLVar9;
  tagRECT local_128;
  int local_118 [4];
  int local_108 [4];
  tagRECT local_f8;
  int local_e8 [4];
  tagRECT local_d8;
  int local_c8 [4];
  tagRECT local_b8;
  int local_a8 [4];
  tagRECT local_98;
  int local_88 [4];
  tagRECT local_78;
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
  char local_3d;
  int local_3c;
  int local_38;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x15) == 0) {
    uVar3 = 0;
  }
  else if ((*(byte *)(*(int *)((int)param_1 + 0x15) + 0x74) & 8) == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 8;
    uVar3 = 0;
    local_78.left = 0;
    local_78.top = 0;
    local_78.right = 0;
    local_78.bottom = 0;
    FUN_004a7a6c(*param_1,&local_78);
    ptVar8 = &local_78;
    pLVar9 = local_88;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_8 = local_88[3] - local_88[1];
    local_c = local_88[2] - local_88[0];
    local_98.left = 0;
    local_98.top = 0;
    local_98.right = 0;
    local_98.bottom = 0;
    FUN_004a7a30(*(int *)((int)param_1 + 0x15),&local_98);
    ptVar8 = &local_98;
    pLVar9 = local_a8;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_10 = local_a8[3] - local_a8[1];
    local_14 = local_a8[2] - local_a8[0];
    uVar4 = FUN_004a78f0(*(int *)((int)param_1 + 0x15));
    if (((uVar4 & 0x80440000) != 0) ||
       (uVar4 = FUN_004a793c(*(int *)((int)param_1 + 0x15)), (uVar4 & 0x20101) != 0)) {
      if ((*(byte *)(*param_1 + 0x74) & 8) != 0) {
        local_b8.left = 0;
        local_b8.top = 0;
        local_b8.right = 0;
        local_b8.bottom = 0;
        FUN_004a7a6c(*(int *)((int)param_1 + 0x15),&local_b8);
        ptVar8 = &local_b8;
        pLVar9 = local_c8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_18 = local_c8[3] - local_c8[1];
        local_20 = local_c8[2] - local_c8[0];
        local_1c = local_20;
        ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),3,0);
        local_d8.left = 0;
        local_d8.top = 0;
        local_d8.right = 0;
        local_d8.bottom = 0;
        FUN_004a7a6c(*(int *)((int)param_1 + 0x15),&local_d8);
        ptVar8 = &local_d8;
        pLVar9 = local_e8;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
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
        local_28 = local_30;
        local_24 = local_2c;
        local_14 = local_30;
        local_10 = local_2c;
        if (local_31 != '\0') {
          local_38 = 3;
          if (local_30 == local_1c) {
            local_38 = 0;
          }
          if (local_2c == local_18) {
            local_38 = 1;
          }
          local_3c = local_38;
          ShowScrollBar(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),local_38,1);
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
      local_f8.left = 0;
      local_f8.top = 0;
      local_f8.right = 0;
      local_f8.bottom = 0;
      FUN_004a7a6c(*(int *)((int)param_1 + 0x15),&local_f8);
      ptVar8 = &local_f8;
      pLVar9 = local_108;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pLVar9 = ptVar8->left;
        ptVar8 = (tagRECT *)&ptVar8->top;
        pLVar9 = pLVar9 + 1;
      }
      local_48 = local_108[3] - local_108[1];
      local_4c = local_108[2] - local_108[0];
      local_44 = local_4c;
      local_14 = local_4c;
      local_10 = local_48;
    }
    if ((local_c == local_14) && (local_8 == local_10)) {
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
        local_128.left = 0;
        local_128.top = 0;
        local_128.right = 0;
        local_128.bottom = 0;
        FUN_004a7a30(*param_1,&local_128);
        ptVar8 = &local_128;
        pLVar9 = local_118;
        for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar9 = ptVar8->left;
          ptVar8 = (tagRECT *)&ptVar8->top;
          pLVar9 = pLVar9 + 1;
        }
        local_58 = local_118[3] - local_118[1];
        local_5c = local_118[2] - local_118[0];
        local_50 = local_58 - local_8;
        local_54 = local_5c - local_c;
        if (param_2 == '\0') {
          uVar4 = 8;
        }
        else {
          uVar4 = 0;
        }
        FUN_004a7aa0(*param_1,(HWND)0x0,0,0,local_14 + local_54,local_10 + local_50,uVar4 | 0x12);
        local_c = local_14;
        local_8 = local_10;
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
      FUN_004a7aa0(*(int *)((int)param_1 + 0x15),(HWND)0x0,0,0,local_c,local_8,uVar4 | 0x214);
    }
    else {
      iVar7 = GetSystemMetrics(DAT_00509de8);
      local_60 = DAT_00509df0;
      iVar6 = GetSystemMetrics(DAT_00509df0);
      local_64 = local_8 + iVar6 * 2;
      local_68 = local_c + iVar7 * 2;
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_004a7aa0(*(int *)((int)param_1 + 0x15),(HWND)0x0,-iVar7,-iVar6,local_68,local_64,
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
void __cdecl FUN_004bf118(int *param_1,WPARAM param_2,LPARAM param_3)

{
  if (((param_2 == 1) || (param_2 == 2)) || (param_2 == 0)) {
    FUN_004a7740(*param_1,0x7ef5,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf14a  FUN_004bf14a   (187 bytes)   [unnamed]
void __stdcall FUN_004bf14a(void)

{
  undefined4 *puVar1;
  WPARAM WVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  WVar2 = *(WPARAM *)(unaff_EBP + 0xc);
  piVar3 = *(int **)(unaff_EBP + 8);
  OWL::TWindow::EvSize(*piVar3,WVar2);
  if (*(int *)((int)piVar3 + 0x15) != 0) {
    *(undefined1 *)(unaff_EBP + -1) = 0;
    if (WVar2 != 1) {
      uVar4 = FUN_004be9dc(piVar3,'\x01');
      *(char *)(unaff_EBP + -1) = (char)uVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_004a7a6c(*(int *)((int)piVar3 + 0x15),(LPRECT)(unaff_EBP + -0x24));
      puVar6 = (undefined4 *)(unaff_EBP + -0x24);
      puVar7 = (undefined4 *)(unaff_EBP + -0x34);
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x30);
      *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x2c) - *(int *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -8);
      *puVar1 = *(undefined4 *)(unaff_EBP + -0x14);
      puVar1[1] = *(undefined4 *)(unaff_EBP + -0x10);
    }
    if (*(char *)(unaff_EBP + -1) == '\0') {
      FUN_004a7708(*(int *)((int)piVar3 + 0x15),'\x01');
    }
  }
  FUN_004bf118(piVar3,WVar2,(LPARAM)puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf504  FUN_004bf504   (303 bytes)   [unnamed]
int * __cdecl FUN_004bf504(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50fbfc);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x25;
    *(int *)((int)param_1 + 0x25) = (int)param_1 + 0x19;
    *(int *)((int)param_1 + 0x29) = (int)param_1 + 0x1d;
    param_1[1] = (int)param_1 + 0x19;
    param_1[2] = (int)param_1 + 0x1d;
    *(undefined4 *)((int)param_1 + 0x15) = 0;
    *(undefined4 *)((int)param_1 + 0x21) = 0;
    *(undefined ***)((int)param_1 + 0x19) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x1d) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x25),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 1;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 1;
  param_1[3] = (int)&OWL::TGroupBox::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fc50;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fc5c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050fc68;
  *(undefined1 *)(param_1 + 5) = 1;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *in_FS_OFFSET = local_28;
  return param_1;
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
void __cdecl FUN_004bf714(int *param_1,uint *param_2,char param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x50fd1c);
  std::string::string_from_cstr((int)local_14,param_2);
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
      uVar1 = local_c[-1];
      piVar4 = std::string::__getRep(piVar2,uVar1,uVar1);
      piVar2[2] = (int)(piVar4 + 3);
      memcpy((undefined4 *)piVar2[2],local_c,uVar1);
    }
    else {
      piVar2[2] = (int)local_c;
      piVar4 = (int *)(piVar2[2] + -0xc);
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  *(int **)(*(int *)(iVar3 + 9) + *(int *)(iVar3 + 1) * 4) = piVar2;
  *(int *)(iVar3 + 1) = *(int *)(iVar3 + 1) + 1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
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
  *in_FS_OFFSET = local_3c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bf908  FUN_004bf908   (70 bytes)   [unnamed]
void __cdecl FUN_004bf908(int *param_1,uint *param_2,undefined4 param_3,char param_4)

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
  FUN_004bf714(param_1,param_2,param_4);
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
// 0x004bf9d8  FUN_004bf9d8   (273 bytes)   [unnamed]
int * __cdecl FUN_004bf9d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50fd64);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&OWL::TEventHandler::vftable;
    param_1[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  param_1[3] = (int)&OWL::TListBox::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fe54;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fe60;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050fe6c;
  *in_FS_OFFSET = local_28;
  return param_1;
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
undefined4 __cdecl FUN_004bfdd8(int *param_1,LPARAM param_2,WPARAM param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x808) == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004a76a8(*param_1,0x191,param_3,param_2);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bfeac  FUN_004bfeac   (86 bytes)   [unnamed]
void __stdcall FUN_004bfeac(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ff04);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c00dc;
  puVar1 = FUN_004dd5cc(1,0,0x407170);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b8cc,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bff02  FUN_004bff02   (48 bytes)   [unnamed]
void __stdcall FUN_004bff02(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ff18);
  OWL::TStreamableClass::_dtor(0x51b8cc,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bff34  FUN_004bff34   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004bff34(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ff20);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TListBox::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00407170,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bff9c  FUN_004bff9c   (266 bytes)   [unnamed]
int * __cdecl FUN_004bff9c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ff38);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&OWL::TEventHandler::vftable;
    param_1[7] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004add4c(param_1,1);
  param_1[3] = (int)&OWL::TListBox::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fe54;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fe60;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050fe6c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

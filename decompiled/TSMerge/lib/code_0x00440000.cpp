// TSMerge.exe — runtime / library code "code_0x00440000"
// 46 functions, 0x004409f4..0x00443f20. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004409f4  FUN_004409f4   (271 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00440ab9) */
/* WARNING: Removing unreachable block (ram,0x00440a75) */
/* WARNING: Removing unreachable block (ram,0x00440a31) */
/* WARNING: Removing unreachable block (ram,0x00440a53) */
/* WARNING: Removing unreachable block (ram,0x00440a97) */
/* WARNING: Removing unreachable block (ram,0x00440adb) */
int __cdecl FUN_004409f4(int param_1,uint *param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e64c);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_00471d68;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined **)(param_1 + 0x58) = &DAT_00471d68;
  FUN_0043fe14(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440b04  FUN_00440b04   (110 bytes)   [unnamed]
void __cdecl FUN_00440b04(int param_1)

{
  int iVar1;
  uint local_108 [65];
  
  FUN_00440b74(param_1,0x1f);
  iVar1 = FUN_00455b74((char *)(param_1 + 0x60),&DAT_0046e6a8);
  if (iVar1 == 0) {
    FUN_0044cf10(param_1 + 0x50,(uint *)(param_1 + 0x60));
  }
  else {
    GetFullPathNameA((LPCSTR)(param_1 + 0x60),0x104,(LPSTR)local_108,(LPSTR *)0x0);
    FUN_0044cf10(param_1 + 0x50,local_108);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440b74  FUN_00440b74   (371 bytes)   [unnamed]
int __cdecl FUN_00440b74(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x164) == '\0') {
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4a8);
      if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0)) {
        FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
      }
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4a4);
      FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 8));
      if ((param_2 & 2) != 0) {
        FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
      }
    }
    if (((param_2 & 2) != 0) && (*(int *)(*(int *)(param_1 + 0x18) + -4) != 0)) {
      FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x18));
      if (((param_2 & 4) != 0) || ((param_2 & 8) != 0)) {
        FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
      }
    }
  }
  if (((param_2 & 4) != 0) && (*(int *)(*(int *)(param_1 + 0x28) + -4) != 0)) {
    FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x28));
    FUN_00455ae4((char *)(param_1 + 0x60),&DAT_0046e4ad);
  }
  if (((param_2 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + -4) != 0)) {
    FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x38));
  }
  if (((param_2 & 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x48) + -4) != 0)) {
    FUN_00455ae4((char *)(param_1 + 0x60),*(char **)(param_1 + 0x48));
  }
  return param_1 + 0x60;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440ce8  FUN_00440ce8   (112 bytes)   [unnamed]
bool __cdecl FUN_00440ce8(int param_1,uint param_2)

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
// 0x00440d58  FUN_00440d58   (117 bytes)   [unnamed]
undefined4 * __cdecl FUN_00440d58(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e6bc);
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
// 0x00440e78  FUN_00440e78   (154 bytes)   [unnamed]
void __cdecl FUN_00440e78(int *param_1,int param_2)

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
// 0x00440f14  FUN_00440f14   (318 bytes)   [unnamed]
int * __cdecl FUN_00440f14(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e710);
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
    FUN_0042ab84(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_00415610(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&OWL::TFindReplaceDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046e99c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046e9a8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046e9b4;
  param_1[0x11] = param_4;
  FUN_00440e78(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441090  FUN_00441090   (33 bytes)   [unnamed]
void __cdecl FUN_00441090(int param_1,int param_2)

{
  if (param_2 != 0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004410b4  FUN_004410b4   (287 bytes)   [unnamed]
int * __cdecl FUN_004410b4(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e734);
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
    FUN_0042ab84(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00440f14(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFindDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046e8ac;
  *(undefined ***)param_1[2] = &PTR_LAB_0046e8b8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046e8c4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004411f8  FUN_004411f8   (287 bytes)   [unnamed]
int * __cdecl FUN_004411f8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46e758);
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
    FUN_0042ab84(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00440f14(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TReplaceDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046e7bc;
  *(undefined ***)param_1[2] = &PTR_LAB_0046e7c8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046e7d4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441678  FUN_00441678   (127 bytes)   [unnamed]
void __cdecl FUN_00441678(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_0042280c(param_2,param_1,4);
  uVar1 = FUN_00422908(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  operator_delete_array();
  operator_delete_array();
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = operator_new_array();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_0042280c(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_0042280c(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004416f8  FUN_004416f8   (86 bytes)   [unnamed]
void __cdecl FUN_004416f8(undefined4 *param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = *param_1;
  FUN_00422d00(param_2,&local_8,4);
  FUN_00422d88(param_2);
  FUN_00422d00(param_2,param_1[3],param_1[1]);
  FUN_00422d00(param_2,param_1[4],param_1[1]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441750  FUN_00441750   (68 bytes)   [unnamed]
uint __cdecl FUN_00441750(HMENU param_1,int param_2)

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
// 0x00441794  FUN_00441794   (163 bytes)   [unnamed]
HICON __stdcall FUN_00441794(void)

{
  HICON pHVar1;
  WNDCLASSA local_2c;
  
  if (DAT_0046ea3c == (HICON)0x0) {
    memset(&local_2c.style,0,0x28);
    local_2c.hInstance = *(HINSTANCE *)(DAT_00470a60 + 8);
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = "IconSnarfer";
    local_2c.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&local_2c);
    GetClassInfoA(*(HINSTANCE *)(DAT_00470a60 + 8),"IconSnarfer",&local_2c);
    DAT_0046ea3c = local_2c.hIcon;
    UnregisterClassA("IconSnarfer",*(HINSTANCE *)(DAT_00470a60 + 8));
  }
  pHVar1 = DAT_0046ea3c;
  if (DAT_0046ea3c == (HICON)0x0) {
    pHVar1 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441837  FUN_00441837   (105 bytes)   [unnamed]
int __cdecl FUN_00441837(int param_1)

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
        iVar3 = FUN_00441837(iVar4);
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
// 0x004418a0  FUN_004418a0   (52 bytes)   [unnamed]
bool __cdecl FUN_004418a0(int param_1)

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
// 0x004419a0  FUN_004419a0   (316 bytes)   [unnamed]
int * __cdecl FUN_004419a0(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46eb5c);
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
    FUN_0042ab84((int *)((int)param_1 + 0x5a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TFrameWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046ed1c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046ed28;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046ed34;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  FUN_0042ac60(*param_1,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_00441adc(param_1,param_5,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441adc  FUN_00441adc   (78 bytes)   [unnamed]
void __cdecl FUN_00441adc(int *param_1,int param_2,char param_3)

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
    FUN_00441b2c(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441b2c  FUN_00441b2c   (186 bytes)   [unnamed]
void __cdecl FUN_00441b2c(int *param_1,undefined4 param_2)

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
  FUN_0044215c(param_1,(*(undefined4 *)&DAT_00470a60),32000);
  FUN_004421e8(param_1,(*(undefined4 *)&DAT_00470a60),(HANDLE)0x7d01);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0xffffffff;
  if (*(int *)((int)param_1 + 0x15) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 2;
    *(undefined4 *)(*param_1 + 0x5c) = (*(undefined4 *)&DAT_00476bb0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441e38  Child4464308_Notify4408014_441e38   (122 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 4464308, code 4408014)
//   also: OWL::TFrameWindow::vf11 [rtti:vtable]
void __cdecl Child4464308_Notify4408014_441e38(int *param_1,int param_2)

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
            FUN_0042bbb4(*param_1,0x117,hMenu,0);
          }
        }
      }
    }
  }
  OWL::TWindow::vf11(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044215c  FUN_0044215c   (137 bytes)   [unnamed]
undefined4 __cdecl FUN_0044215c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL BVar1;
  
  if ((*(int *)((int)param_1 + 0x42) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_0044511c();
    in_EAX = 0;
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_3;
  if (*(int *)((int)param_1 + 0x2a) != 0) {
    in_EAX = *(undefined4 *)((int)param_1 + 0x2a);
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    in_EAX = FUN_004450dc();
    *(undefined4 *)((int)param_1 + 0x42) = in_EAX;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (BVar1 != 0) {
      in_EAX = FUN_0042d1a4(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004421e8  FUN_004421e8   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_004421e8(int *param_1,undefined4 param_2,HANDLE param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int cy;
  int cx;
  BOOL BVar3;
  HINSTANCE hInst;
  UINT fuLoad;
  
  bVar1 = FUN_004109c0();
  if (bVar1) {
    if ((*(int *)((int)param_1 + 0x46) != 0) && (*(int *)((int)param_1 + 0x32) != 0)) {
      FUN_0044511c();
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
      cy = GetSystemMetrics(DAT_004698a4);
      cx = GetSystemMetrics(DAT_0046989c);
      param_3 = LoadImageA(hInst,*(LPCSTR *)((int)param_1 + 0x36),1,cx,cy,fuLoad);
      *(HANDLE *)((int)param_1 + 0x46) = param_3;
      if (*(int *)((int)param_1 + 0x46) == 0) {
        param_3 = (HANDLE)FUN_004450dc();
        *(HANDLE *)((int)param_1 + 0x46) = param_3;
      }
    }
    if (*(int *)((int)param_1 + 0x46) != 0) {
      BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
      param_3 = (HANDLE)0x0;
      if (BVar3 != 0) {
        param_3 = (HANDLE)FUN_0042d1a4(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
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
// 0x00442748  FUN_00442748   (47 bytes)   [unnamed]
int __cdecl FUN_00442748(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00441837(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0042d08c(*param_1,(undefined*)FUN_004418a0);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442958  FUN_00442958   (1371 bytes)   [unnamed]
undefined4 __cdecl FUN_00442958(int *param_1,char param_2)

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
    FUN_0042d568(*param_1,&local_78);
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
    FUN_0042d52c(*(int *)((int)param_1 + 0x15),&local_98);
    ptVar8 = &local_98;
    pLVar9 = local_a8;
    for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pLVar9 = ptVar8->left;
      ptVar8 = (tagRECT *)&ptVar8->top;
      pLVar9 = pLVar9 + 1;
    }
    local_10 = local_a8[3] - local_a8[1];
    local_14 = local_a8[2] - local_a8[0];
    uVar4 = FUN_0042d3ec(*(int *)((int)param_1 + 0x15));
    if (((uVar4 & 0x80440000) != 0) ||
       (uVar4 = FUN_0042d438(*(int *)((int)param_1 + 0x15)), (uVar4 & 0x20101) != 0)) {
      if ((*(byte *)(*param_1 + 0x74) & 8) != 0) {
        local_b8.left = 0;
        local_b8.top = 0;
        local_b8.right = 0;
        local_b8.bottom = 0;
        FUN_0042d568(*(int *)((int)param_1 + 0x15),&local_b8);
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
        FUN_0042d568(*(int *)((int)param_1 + 0x15),&local_d8);
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
      uVar4 = FUN_0042d3ec(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x80440000) != 0) {
        uVar4 = FUN_0042d3ec(*(int *)((int)param_1 + 0x15));
        local_3d = (uVar4 & 0x80000000) != 0;
        uVar4 = FUN_0042d3ec(*(int *)((int)param_1 + 0x15));
        FUN_0042d40c(*(int *)((int)param_1 + 0x15),uVar4 & 0x7fbbffff | 0x50800000);
        if (local_3d != '\0') {
          SetParent(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc),*(HWND *)(*param_1 + 0xc));
        }
      }
      uVar4 = FUN_0042d438(*(int *)((int)param_1 + 0x15));
      if ((uVar4 & 0x20101) != 0) {
        uVar4 = FUN_0042d438(*(int *)((int)param_1 + 0x15));
        FUN_0042d458(*(int *)((int)param_1 + 0x15),uVar4 & 0xfffdfefe);
      }
    }
    uVar4 = FUN_0042d3ec(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) != 0) {
      local_f8.left = 0;
      local_f8.top = 0;
      local_f8.right = 0;
      local_f8.bottom = 0;
      FUN_0042d568(*(int *)((int)param_1 + 0x15),&local_f8);
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
        FUN_0042d52c(*param_1,&local_128);
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
        FUN_0042d59c(*param_1,(HWND)0x0,0,0,local_14 + local_54,local_10 + local_50,uVar4 | 0x12);
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
      puVar5 = FUN_004567e4((int)param_1,iVar7,(int *)&DAT_00404480,(int *)&DAT_00435cc8,0);
      if (puVar5 == (undefined4 *)0x0) {
        *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffff7;
      }
    }
    uVar4 = FUN_0042d3ec(*(int *)((int)param_1 + 0x15));
    if ((uVar4 & 0x800000) == 0) {
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_0042d59c(*(int *)((int)param_1 + 0x15),(HWND)0x0,0,0,local_c,local_8,uVar4 | 0x214);
    }
    else {
      iVar7 = GetSystemMetrics(DAT_0046973c);
      local_60 = DAT_00469744;
      iVar6 = GetSystemMetrics(DAT_00469744);
      local_64 = local_8 + iVar6 * 2;
      local_68 = local_c + iVar7 * 2;
      if (param_2 == '\0') {
        uVar4 = 8;
      }
      else {
        uVar4 = 0;
      }
      FUN_0042d59c(*(int *)((int)param_1 + 0x15),(HWND)0x0,-iVar7,-iVar6,local_68,local_64,
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
// 0x00443094  FUN_00443094   (44 bytes)   [unnamed]
void __cdecl FUN_00443094(int *param_1,WPARAM param_2,LPARAM param_3)

{
  if (((param_2 == 1) || (param_2 == 2)) || (param_2 == 0)) {
    FUN_0042d23c(*param_1,0x7ef5,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004430c6  FUN_004430c6   (187 bytes)   [unnamed]
void __stdcall FUN_004430c6(void)

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
      uVar4 = FUN_00442958(piVar3,'\x01');
      *(char *)(unaff_EBP + -1) = (char)uVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      FUN_0042d568(*(int *)((int)piVar3 + 0x15),(LPRECT)(unaff_EBP + -0x24));
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
      FUN_0042d204(*(int *)((int)piVar3 + 0x15),'\x01');
    }
  }
  FUN_00443094(piVar3,WVar2,(LPARAM)puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044349c  FUN_0044349c   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_0044349c(int *param_1,int *param_2,int param_3)

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
        iVar1 = FUN_00420c4c(param_3,param_1,local_8,*(int *)((int)param_1 + iVar2 * 4 + 0x11));
      }
    }
    else {
      FUN_00420c4c(param_3,param_2,local_c,*(int *)((int)param_2 + iVar2 * 4 + 0x11));
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
// 0x00443524  FUN_00443524   (170 bytes)   [unnamed]
void __stdcall FUN_00443524(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46ee86);
  if (DAT_0046ee82 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0047730f,2);
    DAT_0046ee82 = '\0';
  }
  if (DAT_0046ee80 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_004772fe,2);
    DAT_0046ee80 = '\0';
  }
  if (DAT_0046ee7b != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_004772e1,2);
    DAT_0046ee7b = '\0';
  }
  if (DAT_0046ee75 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_004772c0,2);
    DAT_0046ee75 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004435d0  FUN_004435d0   (110 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044360e) */
DWORD * __cdecl FUN_004435d0(DWORD *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f020);
  param_1[3] = 0;
  param_1[3] = (DWORD)&DAT_00471d68;
  DVar1 = GetLastError();
  *param_1 = DVar1;
  FUN_00443664(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443664  FUN_00443664   (120 bytes)   [unnamed]
void __cdecl FUN_00443664(DWORD *param_1,ushort param_2)

{
  DWORD DVar1;
  uint local_10c [65];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*param_1,(uint)param_2,(LPSTR)&local_8,0,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    wsprintfA((LPSTR)local_10c,"Error: %#X occurred (no further info)",*param_1);
    FUN_0044cf10((int)(param_1 + 1),local_10c);
  }
  else {
    FUN_0044cf10((int)(param_1 + 1),local_8);
    LocalFree(local_8);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004436dc  FUN_004436dc   (155 bytes)   [unnamed]
undefined4 __cdecl FUN_004436dc(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x46f054);
  uVar1 = FUN_004439f8(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_0046f040 == 0) && (DAT_0046f040 = operator_new(), DAT_0046f040 != 0)) {
      *(undefined4 *)(DAT_0046f040 + 1) = 0;
      *(undefined4 *)(DAT_0046f040 + 5) = 0;
      *(undefined4 *)(DAT_0046f040 + 9) = 0;
    }
    FUN_004437a8(DAT_0046f040,param_1,0);
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004437a8  FUN_004437a8   (159 bytes)   [unnamed]
void __cdecl FUN_004437a8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_00443848(param_1,*(int *)(param_1 + 1) + 1);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar1 * 4) = param_2;
  }
  else {
    if (*(uint *)(param_1 + 5) <= param_3) {
      FUN_00443848(param_1,param_3 + 1);
    }
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_00443848(param_1,*(int *)(param_1 + 1) + 1);
    }
    if ((param_3 < *(uint *)(param_1 + 1)) && (*(int *)(param_1 + 1) != 0)) {
      FUN_004559f4((undefined4 *)((param_3 + 1) * 4 + *(int *)(param_1 + 9)),
                   (undefined4 *)(param_3 * 4 + *(int *)(param_1 + 9)),
                   (*(int *)(param_1 + 1) - param_3) * 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 9) + param_3 * 4) = param_2;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443848  FUN_00443848   (155 bytes)   [unnamed]
void __cdecl FUN_00443848(int param_1,int param_2)

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
// 0x004438e4  FUN_004438e4   (167 bytes)   [unnamed]
uint __cdecl FUN_004438e4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x46f084);
  uVar1 = FUN_004439f8(param_1);
  if ((char)uVar1 == '\0') {
    *in_FS_OFFSET = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_0044398c(DAT_0046f040,param_1);
    bVar3 = *(int *)(DAT_0046f040 + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_0046f040 != 0) {
        if (*(int *)(DAT_0046f040 + 9) != 0) {
          free();
        }
        uVar2 = operator_delete();
      }
      DAT_0046f040 = 0;
    }
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044398c  FUN_0044398c   (72 bytes)   [unnamed]
undefined4 __cdecl FUN_0044398c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004439d4(param_1,param_2);
  if (iVar1 != -1) {
    puVar2 = FUN_004559f4((undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 9)),
                          (undefined4 *)((iVar1 + 1) * 4 + *(int *)(param_1 + 9)),
                          ((*(int *)(param_1 + 1) - iVar1) + -1) * 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004439d4  FUN_004439d4   (34 bytes)   [unnamed]
int __cdecl FUN_004439d4(int param_1,int param_2)

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
// 0x004439f8  FUN_004439f8   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_004439f8(int param_1)

{
  uint uVar1;
  
  if (DAT_0046f040 == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_0046f040 + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_0046f040 + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00443a30  FUN_00443a30   (248 bytes)   [unnamed]
undefined4 __cdecl FUN_00443a30(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC pHVar3;
  WORD wLanguage;
  int iVar4;
  int local_18;
  int local_c;
  
  if (DAT_0046f040 != 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)FUN_0041147c();
    iVar2 = FUN_004116c4(puVar1,iVar4);
    iVar4 = DAT_0046f040;
    if (iVar2 == 0) {
      wLanguage = 0;
    }
    else {
      wLanguage = *(WORD *)(iVar2 + 0x2f);
    }
    for (local_c = 0; iVar2 = DAT_0046f040, local_c < *(int *)(iVar4 + 1); local_c = local_c + 1) {
      pHVar3 = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + local_c * 4) + 8),param_2
                               ,param_1,wLanguage);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + local_c * 4);
      }
    }
    for (local_18 = 0; local_18 < *(int *)(iVar2 + 1); local_18 = local_18 + 1) {
      pHVar3 = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + local_18 * 4) + 8),param_1,
                             param_2);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + local_18 * 4);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443b28  FUN_00443b28   (205 bytes)   [unnamed]
undefined4 * __cdecl FUN_00443b28(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5)

{
  UINT uMode;
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x46f0e0);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  if (param_3 == '\0') {
    param_1[2] = 0;
  }
  else {
    uMode = SetErrorMode(0x8001);
    pHVar1 = LoadLibraryA((LPCSTR)param_2);
    param_1[2] = pHVar1;
    if (((uint)param_1[2] < 0x21) && (param_4 != '\0')) {
      FUN_004454a8(param_2);
    }
    SetErrorMode(uMode);
  }
  *(char *)(param_1 + 3) = param_3;
  FUN_00443da0((int)param_1,param_2);
  if (param_5 != '\0') {
    FUN_004436dc((int)param_1);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443bf8  FUN_00443bf8   (115 bytes)   [unnamed]
undefined4 * __cdecl FUN_00443bf8(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f128);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00443da0((int)param_1,param_2);
  if (param_4 != '\0') {
    FUN_004436dc((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443c6c  FUN_00443c6c   (138 bytes)   [unnamed]
undefined4 * __cdecl FUN_00443c6c(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f14c);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00443da0((int)param_1,param_2);
  if (param_3 != 0) {
    FUN_00443e3c((int)param_1,param_3);
  }
  if (param_5 != '\0') {
    FUN_004436dc((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443d84  FUN_00443d84   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_00443d84(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00443a30(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443da0  FUN_00443da0   (155 bytes)   [unnamed]
void __cdecl FUN_00443da0(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x46f1a4);
  operator_delete_array();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)operator_new_array();
    operator_delete_array();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_0041fd2c(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  operator_delete_array();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443e3c  FUN_00443e3c   (88 bytes)   [unnamed]
void __cdecl FUN_00443e3c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  CHAR *pCVar3;
  CHAR local_34 [28];
  CHAR local_18 [20];
  
  FUN_00443f10(param_1,param_2);
  if ((*(UINT *)&DAT_0046ad80) == 0) {
    pcVar2 = "GetWindowPtr(%X)";
    pCVar3 = local_18;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = *pcVar2;
    wsprintfA(local_34,local_18,param_2);
    (*(UINT *)&DAT_0046ad80) = RegisterWindowMessageA(local_34);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443f10  FUN_00443f10   (14 bytes)   [unnamed]
void __cdecl FUN_00443f10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00443f20  FUN_00443f20   (311 bytes)   [unnamed]
int __cdecl FUN_00443f20(int param_1,uint param_2,LPSTR param_3,int param_4)

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
  puVar1 = (undefined4 *)FUN_0041147c();
  iVar5 = FUN_004116c4(puVar1,iVar5);
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
    iVar4 = FUN_00443d84((LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
    if (iVar4 != 0) {
      iVar4 = FUN_00443f20(iVar4,param_2,param_3,param_4);
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
           (iVar4 = WideCharToMultiByte(0,0,(LPCWSTR)(puVar2 + 1),cchWideChar,param_3,param_4,
                                        (LPCSTR)0x0,(LPBOOL)0x0), iVar4 != 0)) {
          param_3[iVar4] = '\0';
        }
      }
      FreeResource(hResData);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  if (param_4 != 0) {
    *param_3 = '\0';
  }
  return 0;
}

} // namespace tea

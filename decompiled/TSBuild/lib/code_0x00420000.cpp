// TSBuild.exe — runtime / library code "code_0x00420000"
// 111 functions, 0x00420050..0x00423fac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420050  FUN_00420050   (179 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00420050(void)

{
  FUN_0046ddac();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004202d8  FUN_004202d8   (62 bytes)   [unnamed]
int __cdecl FUN_004202d8(short param_1)

{
  if (((param_1 == 1) || (param_1 == 4)) || (param_1 == 8)) {
    return 1 << ((byte)param_1 & 0x1f);
  }
  if (((param_1 != 0x10) && (param_1 != 0x18)) && (param_1 != 0x20)) {
    return -1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420318  FUN_00420318   (73 bytes)   [unnamed]
undefined4 __cdecl FUN_00420318(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((uint)param_1 >> 0x10);
  if (param_1 < 3) {
    return CONCAT22(uVar1,1);
  }
  if (param_1 < 0x11) {
    return CONCAT22(uVar1,4);
  }
  if (param_1 < 0x101) {
    return CONCAT22(uVar1,8);
  }
  if (param_1 < 0x10001) {
    return CONCAT22(uVar1,0x10);
  }
  if (param_1 < 0x1000001) {
    return CONCAT22(uVar1,0x18);
  }
  return CONCAT22(uVar1,0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x00420364  FUN_00420364   (50 bytes)   [unnamed]
uint __cdecl FUN_00420364(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 0xf0000000) == 0x80000000) {
    uVar1 = GetSysColor(*param_1 & 0xffff);
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420398  FUN_00420398   (17 bytes)   [unnamed]
uint __cdecl FUN_00420398(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00420364(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004203ac  FUN_004203ac   (23 bytes)   [unnamed]
int __cdecl FUN_004203ac(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00420364(param_1);
  return (int)(uVar1 & 0xffff) >> 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004203c4  FUN_004203c4   (20 bytes)   [unnamed]
uint __cdecl FUN_004203c4(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00420364(param_1);
  return uVar1 >> 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x004203d8  FUN_004203d8   (65 bytes)   [unnamed]
void __stdcall FUN_004203d8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479c68);
  if (DAT_00479c5c != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048c6c0,2);
    DAT_00479c5c = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042041c  FUN_0042041c   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0042041c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479d28);
  if (DAT_00479c5c == '\0') {
    FUN_0044ecbc((undefined4 *)&DAT_0048c6c0,(uint *)"COMDLG32.DLL",'\x01','\x01','\0');
    DAT_00479c5c = DAT_00479c5c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c6c0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420474  FUN_00420474   (46 bytes)   [unnamed]
undefined4 __stdcall FUN_00420474(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c5f == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6d5,(int)puVar1,"CommDlgExtendedError");
    DAT_00479c5f = DAT_00479c5f + '\x01';
  }
  uVar2 = ((code *)DAT_0048c6d5)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004204a4  FUN_004204a4   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_004204a4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c60 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6d9,(int)puVar1,"FindTextA");
    DAT_00479c60 = DAT_00479c60 + '\x01';
  }
  uVar2 = ((code *)DAT_0048c6d9)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004204dc  FUN_004204dc   (69 bytes)   [unnamed]
undefined4 __stdcall FUN_004204dc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c61 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6dd,(int)puVar1,"GetFileTitleA");
    DAT_00479c61 = DAT_00479c61 + '\x01';
  }
  uVar2 = ((code *)DAT_0048c6dd)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420524  FUN_00420524   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_00420524(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c62 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6e1,(int)puVar1,"GetOpenFileNameA");
    DAT_00479c62 = DAT_00479c62 + '\x01';
  }
  uVar2 = ((code *)DAT_0048c6e1)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042055c  FUN_0042055c   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0042055c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c66 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6f1,(int)puVar1,"ReplaceTextA");
    DAT_00479c66 = DAT_00479c66 + '\x01';
  }
  uVar2 = ((code *)DAT_0048c6f1)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420594  FUN_00420594   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_00420594(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00479c67 == '\0') {
    puVar1 = FUN_0042041c();
    FUN_0044ff60((int *)&DAT_0048c6f5,(int)puVar1,"GetSaveFileNameA");
    DAT_00479c67 = DAT_00479c67 + '\x01';
  }
  uVar2 = ((code *)DAT_0048c6f5)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420634  FUN_00420634   (303 bytes)   [unnamed]
int * __cdecl FUN_00420634(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479dac);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_0043f628(param_1,1,param_3,(uint *)0x0,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TCommonDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00479e34;
  *(undefined ***)param_1[2] = &PTR_LAB_00479e40;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00479e4c;
  param_1[6] = param_4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004209d0  FUN_004209d0   (76 bytes)   [unnamed]
void __cdecl FUN_004209d0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479ed4);
  while (param_2 < *(uint *)(param_1 + 9)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 1) + -4);
    *(undefined4 *)(param_1 + 1) = *puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      operator_delete_array();
    }
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a1c  FUN_00420a1c   (73 bytes)   [unnamed]
int __cdecl FUN_00420a1c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((uint)(*(int *)(param_1 + 5) - *(int *)(param_1 + 0xd)) < param_2) {
    iVar1 = FUN_00420a68(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xd);
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + param_2;
  return *(int *)(param_1 + 1) + iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a68  FUN_00420a68   (6 bytes)   [unnamed]
undefined4 __stdcall FUN_00420a68(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  __InitExceptBlockLDTC(0x479eec);
  puVar1 = (undefined4 *)operator_new_array();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 **)(param_1 + 1) = puVar1 + 1;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  *in_FS_OFFSET = uStack_2c;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a6e  FUN_00420a6e   (121 bytes)   [unnamed]
undefined4 __stdcall FUN_00420a6e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  
  uVar3 = *(uint *)(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x479eec);
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  if (uVar3 <= *(uint *)(iVar1 + 5)) {
    uVar3 = *(uint *)(iVar1 + 5);
  }
  *(uint *)(unaff_EBP + -0x30) = uVar3 + 4;
  iVar2 = operator_new_array();
  *(int *)(unaff_EBP + -4) = iVar2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar1 + 1);
    **(undefined4 **)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + -0x34);
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    iVar2 = *(int *)(unaff_EBP + -4);
  }
  *(int *)(iVar1 + 1) = iVar2 + 4;
  *(int *)(iVar1 + 9) = *(int *)(iVar1 + 9) + 1;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420d58  FUN_00420d58   (15 bytes)   [unnamed]
void __stdcall FUN_00420d58(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420f5c  FUN_00420f5c   (40 bytes)   [unnamed]
void __cdecl FUN_00420f5c(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004209d0(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420f84  FUN_00420f84   (529 bytes)   [unnamed]
int * __cdecl FUN_00420f84(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5, int param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479fd4);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x55) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x5d),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_004253f4(param_1,1,param_3,param_4,param_5,param_6);
  param_1[6] = (int)&OWL::TControlBar::vftable;
  param_1[1] = (int)&PTR_LAB_0047a08c;
  *(undefined ***)param_1[4] = &PTR_LAB_0047a0ac;
  *(undefined ***)param_1[5] = &PTR_LAB_0047a0b8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047a0c4;
  param_1[10] = 2;
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    iVar1 = GetSystemMetrics(DAT_0047d528);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_0047d530);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  else {
    iVar1 = GetSystemMetrics(DAT_0047d528);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_0047d530);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  *(undefined1 *)((int)param_1 + 0x3f) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004215b8  FUN_004215b8   (67 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004215b8(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a14c);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421638  FUN_00421638   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_00421638(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a170);
  FUN_00421c70(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421718  FUN_00421718   (78 bytes)   [unnamed]
int * __cdecl FUN_00421718(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a464);
  if (param_3 == 0) {
    *param_1 = param_2 + 0x24db1a;
  }
  else {
    iVar1 = FUN_00421838(0xc,0x1f,param_3 - 1);
    *param_1 = param_2 + iVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421768  FUN_00421768   (56 bytes)   [unnamed]
int * __cdecl FUN_00421768(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a46c);
  iVar1 = FUN_00421838(param_3,param_2,param_4);
  *param_1 = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217a0  FUN_004217a0   (66 bytes)   [unnamed]
int * __cdecl FUN_004217a0(int *param_1,ushort *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a474);
  iVar1 = FUN_00421838((uint)param_2[1],(uint)param_2[3],(uint)*param_2);
  *param_1 = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217e4  FUN_004217e4   (82 bytes)   [unnamed]
bool __cdecl FUN_004217e4(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    if ((param_1 == 0) || (0xc < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = (uint)(byte)(&DAT_0047a31b)[param_1];
      iVar2 = FUN_004218bc(param_3);
      if ((iVar2 != 0) && (param_1 == 2)) {
        uVar3 = uVar3 + 1;
      }
      return param_2 <= uVar3;
    }
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421838  FUN_00421838   (130 bytes)   [unnamed]
int __cdecl FUN_00421838(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (param_3 < 0x8a) {
    param_3 = param_3 + 0x76c;
  }
  bVar1 = FUN_004217e4(param_1,param_2,param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = 0;
  }
  else {
    if (param_1 < 3) {
      iVar2 = param_1 + 9;
      param_3 = param_3 - 1;
    }
    else {
      iVar2 = param_1 - 3;
    }
    iVar2 = (iVar2 * 0x99 + 2U) / 5 +
            ((param_3 / 100) * 0x23ab1 >> 2) + ((param_3 % 100) * 0x5b5 >> 2) + param_2 + 0x1a431f;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004218bc  FUN_004218bc   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_004218bc(uint param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 & 3) == 0) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004218f4  FUN_004218f4   (173 bytes)   [unnamed]
void __cdecl FUN_004218f4(int *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  *param_4 = ((iVar1 + -0x1a431f) * 4 - 1U) / 0x23ab1;
  uVar3 = (iVar1 + -0x1a431f) * 4 + -1 + *param_4 * -0x23ab1 >> 2;
  uVar2 = (uVar3 * 4 + 3) / 0x5b5;
  uVar3 = uVar3 * 4 + uVar2 * -0x5b5 + 7 >> 2;
  *param_2 = (uVar3 * 5 - 3) / 0x99;
  *param_3 = (uVar3 * 5 + *param_2 * -0x99 + 2) / 5;
  *param_4 = uVar2 + *param_4 * 100;
  if (*param_2 < 10) {
    *param_2 = *param_2 + 3;
  }
  else {
    *param_2 = *param_2 - 9;
    *param_4 = *param_4 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004219a4  FUN_004219a4   (37 bytes)   [unnamed]
uint __cdecl FUN_004219a4(int *param_1)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_004218f4(param_1,&local_8,&local_c,&local_10);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004219cc  FUN_004219cc   (60 bytes)   [unnamed]
int * __cdecl FUN_004219cc(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 - 1;
  iVar1 = FUN_00421a08(param_2,0);
  if (iVar1 - 1U < uVar3) {
    iVar2 = 7 - uVar3;
  }
  else {
    iVar2 = -uVar3;
  }
  *param_1 = *param_2 - ((iVar1 - 1U) + iVar2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421a08  FUN_00421a08   (79 bytes)   [unnamed]
int __cdecl FUN_00421a08(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar1 = FUN_00421a58(param_1);
    uVar2 = FUN_004219a4(param_1);
    iVar3 = FUN_00421838(param_2,uVar2,uVar1);
  }
  return ((iVar3 + 1U) % 7 + 6) % 7 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421a58  FUN_00421a58   (37 bytes)   [unnamed]
uint __cdecl FUN_00421a58(int *param_1)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_004218f4(param_1,&local_8,&local_c,&local_10);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421a80  FUN_00421a80   (18 bytes)   [unnamed]
void __cdecl FUN_00421a80(int *param_1,int *param_2,int param_3)

{
  *param_1 = *param_2 + param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421afc  FUN_00421afc   (6 bytes)   [unnamed; function defined from prologue-scan]
undefined4 * __stdcall FUN_00421afc(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  
  __InitExceptBlockLDTC(0x47a47c);
  *param_1 = &std::exception::vftable;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    piVar3 = std::string::__getRep(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    memcpy((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *param_1 = &std::ios_base::failure::vftable;
  *in_FS_OFFSET = uStack_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421b02  FUN_00421b02   (225 bytes)   [unnamed]
undefined4 * __stdcall FUN_00421b02(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x47a47c);
  *puVar2 = &std::exception::vftable;
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  puVar1 = puVar2 + 2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar2[4] = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x10) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + -4);
    piVar5 = std::string::__getRep(puVar1,*(uint *)(unaff_EBP + -0x38),*(uint *)(unaff_EBP + -0x38));
    *(int **)(unaff_EBP + -0x40) = piVar5;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x40) + 0xc;
    puVar2[4] = *(undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 **)(unaff_EBP + -0x44) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x44) + 8);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x50) = puVar2[4];
    memcpy(*(undefined4 **)(unaff_EBP + -0x50),*(undefined4 **)(unaff_EBP + -0x4c),
                 *(uint *)(unaff_EBP + -0x48));
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x10);
    puVar2[4] = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8);
    *(int *)(unaff_EBP + -0x34) = puVar2[4] + -0xc;
    if (*(undefined4 **)(unaff_EBP + -0x34) != &DAT_00485bcc) {
      **(int **)(unaff_EBP + -0x34) = **(int **)(unaff_EBP + -0x34) + 1;
    }
  }
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  *puVar2 = &std::ios_base::failure::vftable;
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421be4  FUN_00421be4   (38 bytes)   [unnamed]
void __cdecl FUN_00421be4(int param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421c0c  FUN_00421c0c   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_00421c0c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a4b4);
  FUN_0042793c(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_00421be4((int)param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421c70  FUN_00421c70   (67 bytes)   [unnamed]
undefined4 * __cdecl FUN_00421c70(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a4d8);
  FUN_0042790c(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_00421be4((int)param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cec  FUN_00421cec   (67 bytes)   [unnamed]
void __cdecl FUN_00421cec(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_004282cc(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 9) == 0) {
        *(HGDIOBJ *)((int)param_1 + 9) = pvVar1;
      }
      else {
        FUN_004282f8((uint)pvVar1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d74  FUN_00421d74   (73 bytes)   [unnamed]
void __cdecl FUN_00421d74(undefined4 *param_1,uint *param_2,byte param_3)

{
  HPALETTE pHVar1;
  
  pHVar1 = SelectPalette((HDC)*param_1,(HPALETTE)*param_2,(uint)param_3);
  if (pHVar1 != (HPALETTE)0x0) {
    FUN_004282cc(*param_2);
    if ((HPALETTE)0x1 < pHVar1) {
      if (*(int *)((int)param_1 + 0x15) == 0) {
        *(HPALETTE *)((int)param_1 + 0x15) = pHVar1;
      }
      else {
        FUN_004282f8((uint)pHVar1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421dec  FUN_00421dec   (42 bytes)   [unnamed]
void __cdecl FUN_00421dec(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0xd) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0xd));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e18  FUN_00421e18   (42 bytes)   [unnamed]
void __cdecl FUN_00421e18(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 9) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 9));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 9) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e70  FUN_00421e70   (44 bytes)   [unnamed]
void __cdecl FUN_00421e70(undefined4 *param_1)

{
  HPALETTE pHVar1;
  
  if (*(int *)((int)param_1 + 0x15) != 0) {
    pHVar1 = SelectPalette((HDC)*param_1,*(HPALETTE *)((int)param_1 + 0x15),0);
    FUN_004282f8((uint)pHVar1);
    *(undefined4 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e9c  FUN_00421e9c   (42 bytes)   [unnamed]
void __cdecl FUN_00421e9c(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x19) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x19));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x19) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ec8  FUN_00421ec8   (42 bytes)   [unnamed]
void __cdecl FUN_00421ec8(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x1d) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x1d));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x1d) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ef4  FUN_00421ef4   (58 bytes)   [unnamed]
void __cdecl FUN_00421ef4(int *param_1)

{
  undefined4 extraout_EDX;
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_00421dec(param_1);
    piVar1 = param_1;
    FUN_00421e18(param_1);
    (**(code **)(*(int *)((int)param_1 + 5) + 0x1c))
              (*(int *)((int)param_1 + 5),extraout_EDX,piVar1,param_1);
    FUN_00421e70(param_1);
    FUN_00421e9c(param_1);
    FUN_00421ec8(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421f30  FUN_00421f30   (299 bytes)   [unnamed]
void __cdecl FUN_00421f30(undefined4 *param_1,uint *param_2,int *param_3,int param_4,int param_5,DWORD param_6)

{
  int w;
  int h;
  
  FUN_00421cec(param_1,param_2);
  w = (param_3[2] - *param_3) - param_4;
  h = (param_3[3] - param_3[1]) - param_5;
  PatBlt((HDC)*param_1,*param_3,param_3[1],param_4,h,param_6);
  PatBlt((HDC)*param_1,*param_3 + param_4,param_3[1],w,param_5,param_6);
  PatBlt((HDC)*param_1,*param_3,param_3[1] + h,w,param_5,param_6);
  PatBlt((HDC)*param_1,*param_3 + w,param_3[1] + param_5,param_4,h,param_6);
  FUN_00421e18(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004224f0  FUN_004224f0   (38 bytes)   [unnamed]
void __cdecl FUN_004224f0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422518  FUN_00422518   (45 bytes)   [unnamed]
undefined1 __cdecl FUN_00422518(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422548  FUN_00422548   (53 bytes)   [unnamed]
undefined1 __cdecl FUN_00422548(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422580  FUN_00422580   (41 bytes)   [unnamed]
void __cdecl FUN_00422580(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004225ac  FUN_004225ac   (35 bytes)   [unnamed]
void __cdecl FUN_004225ac(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004225d0  FUN_004225d0   (35 bytes)   [unnamed]
void __cdecl FUN_004225d0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004225f4  FUN_004225f4   (40 bytes)   [unnamed]
undefined1 __cdecl FUN_004225f4(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042261c  FUN_0042261c   (48 bytes)   [unnamed]
bool __cdecl FUN_0042261c(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  
  cVar1 = (*(code *)param_2)();
  return cVar1 != '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x0042264c  FUN_0042264c   (40 bytes)   [unnamed]
void __cdecl FUN_0042264c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422674  FUN_00422674   (64 bytes)   [unnamed]
void __cdecl FUN_00422674(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004226b4  FUN_004226b4   (89 bytes)   [unnamed]
undefined1 __cdecl FUN_004226b4(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422710  FUN_00422710   (58 bytes)   [unnamed]
void __cdecl FUN_00422710(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042274c  FUN_0042274c   (63 bytes)   [unnamed]
undefined1 __cdecl FUN_0042274c(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042278c  FUN_0042278c   (51 bytes)   [unnamed]
void __cdecl FUN_0042278c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004227c0  FUN_004227c0   (35 bytes)   [unnamed]
undefined4 __cdecl FUN_004227c0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004227e4  FUN_004227e4   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_004227e4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042280c  FUN_0042280c   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_0042280c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042284c  FUN_0042284c   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_0042284c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422874  FUN_00422874   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_00422874(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004228b8  FUN_004228b8   (43 bytes)   [unnamed]
undefined4 __cdecl FUN_004228b8(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004228e4  FUN_004228e4   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_004228e4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422918  FUN_00422918   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_00422918(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042294c  FUN_0042294c   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_0042294c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422984  FUN_00422984   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_00422984(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004229bc  FUN_004229bc   (62 bytes)   [unnamed]
undefined4 __cdecl FUN_004229bc(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004229fc  FUN_004229fc   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_004229fc(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422a24  FUN_00422a24   (59 bytes)   [unnamed]
undefined4 __cdecl FUN_00422a24(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422a60  FUN_00422a60   (43 bytes)   [unnamed]
undefined4 __cdecl FUN_00422a60(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422a8c  FUN_00422a8c   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_00422a8c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422ac4  FUN_00422ac4   (114 bytes)   [unnamed]
undefined4 __cdecl FUN_00422ac4(undefined4 param_1,undefined *param_2,undefined4 param_3,int param_4,ushort param_5)

{
  if ((param_5 < 0x200) || (0x20d < param_5)) {
    (*(code *)param_2)();
  }
  else {
    (*(code *)param_2)();
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422b40  FUN_00422b40   (38 bytes)   [unnamed]
undefined4 __cdecl FUN_00422b40(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 0xc) + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422b68  FUN_00422b68   (87 bytes)   [unnamed]
undefined4 __cdecl FUN_00422b68(undefined4 param_1,int *param_2,int *param_3,undefined *param_4)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if (param_4 == (undefined *)0x0) {
    for (; param_2[2] != 0; param_2 = param_2 + 6) {
      if ((*param_2 == *param_3) && (param_2[1] == param_3[1])) {
        param_3[3] = (int)param_2;
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  else {
    for (; param_2[2] != 0; param_2 = param_2 + 6) {
      uVar1 = (*(code *)param_4)();
      if ((char)uVar1 != '\0') {
        param_3[3] = (int)param_2;
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422bc0  FUN_00422bc0   (288 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 * __cdecl FUN_00422bc0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47a57c);
  *param_1 = &std::exception::vftable;
  *param_1 = &OWL::TXBase::vftable;
  _DAT_0047a558 = _DAT_0047a558 + 1;
  iVar3 = operator_new();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = std::string::__getRep(iVar3,uVar2,uVar2);
      *(int **)(iVar3 + 8) = piVar4 + 3;
      memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
      if (piVar4 != &DAT_00485bcc) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  param_1[1] = iVar3;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422cfc  FUN_00422cfc   (135 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 * __cdecl FUN_00422cfc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47a5d4);
  *param_1 = &std::exception::vftable;
  *param_1 = &OWL::TXBase::vftable;
  _DAT_0047a558 = _DAT_0047a558 + 1;
  iVar1 = operator_new();
  if (iVar1 != 0) {
    puVar2 = (uint *)(**(code **)(*param_2 + 4))();
    std::string::string_from_cstr(iVar1,puVar2);
  }
  param_1[1] = iVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422f44  FUN_00422f44   (81 bytes)   [unnamed]
undefined4 __stdcall FUN_00422f44(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  code *lpfn;
  int lParam;
  undefined4 uStack_8;
  
  puVar1 = FUN_0041b958();
  if (*(int *)(puVar1 + 0x10) == 2) {
    uVar2 = 0x2000;
  }
  else {
    uStack_8 = uStack_8 & 0xffffff;
    lParam = (int)&uStack_8 + 3;
    lpfn = FUN_00422f98;
    dwThreadId = GetCurrentThreadId();
    EnumThreadWindows(dwThreadId,lpfn,lParam);
    if (GH_PIECE(uStack_8, 3, undefined1) == '\0') {
      uVar2 = 0x1000;
    }
    else {
      uVar2 = 0x2000;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422f98  FUN_00422f98   (15 bytes)   [unnamed]
undefined4 __stdcall FUN_00422f98(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00422fa8  FUN_00422fa8   (221 bytes)   [unnamed]
undefined4 __cdecl FUN_00422fa8(int *param_1,LPCSTR param_2,char *param_3)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_108;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    puVar2 = (uint *)(**(code **)(*param_1 + 4))();
    pcVar3 = strlen(puVar2);
  }
  if (param_2 == (LPCSTR)0x0) {
    param_2 = PTR_s_Unhandled_Exception_0047a6b0;
  }
  if (pcVar3 == (char *)0x0) {
    FUN_00467770((char *)&local_108,"Unknown Exception");
    pcVar3 = strlen(&local_108);
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_1 + 4))();
    FUN_00467770((char *)&local_108,pcVar4);
  }
  if (param_3 != (char *)0x0) {
    local_8 = 4;
    *(char *)((int)&local_108 + (int)pcVar3) = '\n';
    FUN_00467770(pcVar3 + (int)&local_108 + 1,param_3);
  }
  uVar5 = FUN_00422f44();
  iVar1 = MessageBoxExA((HWND)0x0,(LPCSTR)&local_108,param_2,uVar5 | local_8 | 0x10,0);
  if (iVar1 == 6) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423088  FUN_00423088   (76 bytes)   [unnamed]
undefined4 * __cdecl FUN_00423088(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a73c);
  FUN_00422bc0(param_1,param_2);
  *param_1 = &OWL::TXOwl::vftable;
  param_1[2] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004230f0  FUN_004230f0   (235 bytes)   [unnamed]
undefined4 * __cdecl FUN_004230f0(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x47a770);
  FUN_004233d8((int)local_14,(char *)0x0,param_2,param_3);
  FUN_00422bc0(param_1,(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004231ab;
    }
    operator_delete();
  }
LAB_004231ab:
  *param_1 = &OWL::TXOwl::vftable;
  param_1[2] = param_2;
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042333c  FUN_0042333c   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042333c(undefined4 *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47aa7c);
  FUN_00422cfc(param_1,param_2);
  param_1[2] = param_2[2];
  *param_1 = &OWL::TXOwl::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423384  FUN_00423384   (83 bytes)   [unnamed]
void __cdecl FUN_00423384(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47a834);
  piVar1 = FUN_00423088(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,2);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004233d8  FUN_004233d8   (478 bytes)   [unnamed]
int __cdecl FUN_004233d8(int param_1,char *param_2,uint param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_f4 [34];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  uint local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x47a888);
  if (param_4 == 0) {
LAB_00423415:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_0044f0b4(param_4,param_3,(LPSTR)local_f4,0x80);
    if (iVar3 == 0) goto LAB_00423415;
    cVar2 = '\x01';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar2;
  }
  if (cVar2 == '\0') {
    FUN_0046a5c8((undefined1 *)local_f4,(byte *)"Exception #%u (Could not load description string; <owl/except.rc> not bound\?).");
  }
  local_28 = 8;
  std::string::string_from_cstr((int)local_14,local_f4);
  local_1c = local_1c + 1;
  local_28 = 0x20;
  local_44 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_54 = std::string::__getRep(param_1,uVar1,uVar1);
    local_50 = local_54 + 3;
    *(int **)(param_1 + 8) = local_50;
    local_58 = param_1;
    local_60 = local_c;
    local_64 = *(undefined4 **)(param_1 + 8);
    local_5c = uVar1;
    memcpy(local_64,local_c,uVar1);
  }
  else {
    local_48 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_4c = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00485bcc) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0042359b;
    }
    local_68 = local_c + -3;
    local_6c = local_c + -3;
    operator_delete();
  }
LAB_0042359b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004235b8  FUN_004235b8   (258 bytes)   [unnamed]
int __cdecl FUN_004235b8(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  uint local_158 [69];
  byte *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x47a918);
  local_28 = 0x14;
  FUN_004233d8((int)local_14,(char *)0x0,param_2,param_4);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_0046a5c8((undefined1 *)local_158,local_c);
  local_28 = 0x20;
  std::string::string_from_cstr(param_1,local_158);
  local_28 = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar2 = local_c + -0xc;
      if (pbVar2 == (byte *)&DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0042369f;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0042369f:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004236bc  FUN_004236bc   (258 bytes)   [unnamed]
int __cdecl FUN_004236bc(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  uint local_158 [69];
  byte *local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x47a99c);
  local_28 = 0x14;
  FUN_004233d8((int)local_14,(char *)0x0,param_2,param_4);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_0046a5c8((undefined1 *)local_158,local_c);
  local_28 = 0x20;
  std::string::string_from_cstr(param_1,local_158);
  local_28 = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar2 = local_c + -0xc;
      if (pbVar2 == (byte *)&DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004237a3;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_004237a3:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004237c0  FUN_004237c0   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004237c0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47a9f0);
  FUN_004230f0(param_1,0x7ff9,DAT_00484890);
  *param_1 = &OWL::TXOutOfMemory::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004239d4  FUN_004239d4   (78 bytes)   [unnamed]
void __stdcall FUN_004239d4(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47aa68);
  piVar1 = FUN_004237c0(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423a68  FUN_00423a68   (82 bytes)   [unnamed]
uint * __cdecl FUN_00423a68(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47aac8);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00428078(*param_1,3);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423abc  FUN_00423abc   (158 bytes)   [unnamed]
uint * __cdecl FUN_00423abc(uint *param_1,LPCSTR param_2,int param_3,int param_4,int param_5,int param_6, int param_7,byte param_8,byte param_9,byte param_10,byte param_11,byte param_12, byte param_13,byte param_14,byte param_15)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47aaec);
  FUN_00428420(param_1);
  pHVar1 = CreateFontA(param_3,param_4,param_5,param_6,param_7,(uint)param_9,(uint)param_10,
                       (uint)param_11,(uint)param_12,(uint)param_13,(uint)param_14,(uint)param_15,
                       (uint)param_8,param_2);
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423b5c  FUN_00423b5c   (94 bytes)   [unnamed]
uint * __cdecl FUN_00423b5c(uint *param_1,LOGFONTA *param_2)

{
  HFONT pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ab10);
  FUN_00428420(param_1);
  pHVar1 = CreateFontIndirectA(param_2);
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423bbc  FUN_00423bbc   (60 bytes)   [unnamed]
void __cdecl FUN_00423bbc(undefined4 param_1,LPTEXTMETRICA param_2,int param_3)

{
  HDC hdc;
  BOOL BVar1;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  BVar1 = GetTextMetricsA(hdc,param_2);
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))(BVar1,BVar1 != 0,*(int *)(param_3 + 5),param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423bf8  FUN_00423bf8   (98 bytes)   [unnamed]
void __cdecl FUN_00423bf8(undefined4 param_1,LPTEXTMETRICA param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c [10];
  
  __InitExceptBlockLDTC(0x47ab44);
  FUN_0043942c(local_2c);
  FUN_00423bbc(param_1,param_2,(int)local_2c);
  OWL::TWindowDC::_dtor(local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c5c  FUN_00423c5c   (131 bytes)   [unnamed]
LONG * __cdecl FUN_00423c5c(LONG *param_1,undefined4 param_2)

{
  int iVar1;
  tagTEXTMETRICA *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagTEXTMETRICA local_88;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  int local_2c [10];
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x47ab84);
  local_40 = 8;
  FUN_0043942c(local_2c);
  local_34 = local_34 + 3;
  local_40 = 0x14;
  FUN_00423bbc(param_2,&local_88,(int)local_2c);
  ptVar2 = &local_88;
  pLVar3 = param_1;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->tmHeight;
    ptVar2 = (tagTEXTMETRICA *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_34 = local_34 + -3;
  OWL::TWindowDC::_dtor(local_2c,0);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423ce0  FUN_00423ce0   (108 bytes)   [unnamed]
LONG * __cdecl FUN_00423ce0(LONG *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c [10];
  
  __InitExceptBlockLDTC(0x47abc4);
  FUN_0043942c(local_2c);
  FUN_00423d4c(param_1,param_2,(int)local_2c,param_3);
  OWL::TWindowDC::_dtor(local_2c,0);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423d4c  FUN_00423d4c   (122 bytes)   [unnamed]
LONG * __cdecl FUN_00423d4c(LONG *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  char *c;
  HDC hdc;
  tagSIZE *psizl;
  tagSIZE local_18;
  char *local_10;
  LONG local_c;
  LONG local_8;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  c = strlen(param_4);
  local_18.cx = 0;
  local_18.cy = 0;
  psizl = &local_18;
  local_10 = c;
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,(LPCSTR)param_4,(int)c,psizl);
  local_c = local_18.cx;
  local_8 = local_18.cy;
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))();
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423dc8  FUN_00423dc8   (90 bytes)   [unnamed]
int __cdecl FUN_00423dc8(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_6c [28];
  uint local_50 [10];
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x47abf4);
  GetObjectA((HANDLE)*param_2,0x3c,local_6c);
  local_18 = 8;
  std::string::string_from_cstr(param_1,local_50);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423e24  FUN_00423e24   (39 bytes)   [unnamed]
undefined1 __cdecl FUN_00423e24(undefined4 *param_1)

{
  undefined1 local_40 [27];
  undefined1 local_25;
  
  GetObjectA((HANDLE)*param_1,0x3c,local_40);
  return local_25;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423e4c  FUN_00423e4c   (82 bytes)   [unnamed]
uint * __cdecl FUN_00423e4c(uint *param_1)

{
  bool bVar1;
  HGDIOBJ pvVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47ac18);
  iVar3 = 0;
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    pvVar2 = GetStockObject(0x11);
  }
  else {
    pvVar2 = GetStockObject(0xd);
  }
  FUN_00423a68(param_1,pvVar2,iVar3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423f6c  FUN_00423f6c   (24 bytes)   [unnamed]
int __cdecl FUN_00423f6c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2 + 4;
  if (iVar1 < 0) {
    iVar1 = param_1 * param_2 + 0xb;
  }
  return iVar1 >> 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423f84  FUN_00423f84   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00423f84(int param_1)

{
  if (((param_1 != 0) && (param_1 != -1)) && ((param_1 < 30000 || (30999 < param_1)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00423fac  FUN_00423fac   (291 bytes)   [unnamed]
void __cdecl FUN_00423fac(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_2 = (int)(char)param_1[1];
    *param_4 = (int)*(char *)((int)param_1 + 6);
    *param_3 = (int)*(char *)((int)param_1 + 5);
    *param_5 = (int)*(char *)((int)param_1 + 7);
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00423f6c((int)(char)param_1[1],param_6);
    *param_2 = iVar1;
    iVar1 = FUN_00423f6c((int)*(char *)((int)param_1 + 6),param_6);
    *param_4 = iVar1;
    iVar1 = FUN_00423f6c((int)*(char *)((int)param_1 + 5),param_6);
    *param_3 = iVar1;
    iVar1 = FUN_00423f6c((int)*(char *)((int)param_1 + 7),param_6);
    *param_5 = iVar1;
  }
  else if (iVar1 == 2) {
    iVar1 = GetSystemMetrics(DAT_0047d518);
    iVar2 = GetSystemMetrics(DAT_0047d520);
    *param_2 = (char)param_1[1] * iVar1;
    *param_4 = *(char *)((int)param_1 + 6) * iVar2;
    *param_3 = *(char *)((int)param_1 + 5) * iVar1;
    *param_5 = *(char *)((int)param_1 + 7) * iVar2;
  }
  return;
}

} // namespace tea

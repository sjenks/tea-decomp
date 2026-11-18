// TSBuild.exe — runtime / library code "code_0x00420000"
// 102 functions, 0x00420050..0x00423fac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420050  FUN_00420050   (179 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00420050(void)

{
  __ftol();
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479c68);
  if (DAT_00479c5c != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048c6c0,2);
    DAT_00479c5c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042041c  FUN_0042041c   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0042041c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479d28);
  if (DAT_00479c5c == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_0048c6c0,(uint *)"COMDLG32.DLL",'\x01','\x01','\0');
    DAT_00479c5c = DAT_00479c5c + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
// 0x004209d0  FUN_004209d0   (76 bytes)   [unnamed]
void __cdecl FUN_004209d0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479ed4);
  while (param_2 < *(uint *)(param_1 + 9)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 1) + -4);
    *(undefined4 *)(param_1 + 1) = *puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      operator_delete_array();
    }
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x479eec);
  puVar1 = (undefined4 *)operator_new_array();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 **)(param_1 + 1) = puVar1 + 1;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  
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
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x28);
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
// 0x004215b8  FUN_004215b8   (67 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004215b8(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a14c);
  if (param_1 != 0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421638  FUN_00421638   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_00421638(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a170);
  FUN_00421c70(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421718  FUN_00421718   (78 bytes)   [unnamed]
int * __cdecl FUN_00421718(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a464);
  if (param_3 == 0) {
    *param_1 = param_2 + 0x24db1a;
  }
  else {
    iVar1 = FUN_00421838(0xc,0x1f,param_3 - 1);
    *param_1 = param_2 + iVar1;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421768  FUN_00421768   (56 bytes)   [unnamed]
int * __cdecl FUN_00421768(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a46c);
  iVar1 = FUN_00421838(param_3,param_2,param_4);
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004217a0  FUN_004217a0   (66 bytes)   [unnamed]
int * __cdecl FUN_004217a0(int *param_1,ushort *param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a474);
  iVar1 = FUN_00421838((uint)param_2[1],(uint)param_2[3],(uint)*param_2);
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
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
  undefined3 regHigh;
  int iVar2;
  
  if (param_3 < 0x8a) {
    param_3 = param_3 + 0x76c;
  }
  bVar1 = FUN_004217e4(param_1,param_2,param_3);
  if (CONCAT31(regHigh,bVar1) == 0) {
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
// 0x00421b02  FUN_00421b02   (225 bytes)   [unnamed]
undefined4 * __stdcall FUN_00421b02(void)

{
  undefined4 *puVar1;
  undefined4 *failure2;
  int iVar3;
  int refs;
  int *newRep;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  failure2 = *(undefined4 **)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x47a47c);
  *failure2 = &std::exception::vftable;
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  puVar1 = failure2 + 2;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  failure2[4] = *(undefined4 *)(unaff_EBP + -0x28);
  refs = *(int *)(*(int *)(iVar3 + 0x10) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + -4);
    newRep = std::string::__getRep(puVar1,*(uint *)(unaff_EBP + -0x38),*(uint *)(unaff_EBP + -0x38));
    *(int **)(unaff_EBP + -0x40) = newRep;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x40) + 0xc;
    failure2[4] = *(undefined4 *)(unaff_EBP + -0x3c);
    *(undefined4 **)(unaff_EBP + -0x44) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(*(int *)(unaff_EBP + -0x44) + 8);
    *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x50) = failure2[4];
    memcpy(*(undefined4 **)(unaff_EBP + -0x50),*(undefined4 **)(unaff_EBP + -0x4c),
                 *(uint *)(unaff_EBP + -0x48));
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x10);
    failure2[4] = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 **)(unaff_EBP + -0x30) = puVar1;
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 8);
    *(int *)(unaff_EBP + -0x34) = failure2[4] + -0xc;
    if (*(undefined4 **)(unaff_EBP + -0x34) != &g_nullStringRep) {
      **(int **)(unaff_EBP + -0x34) = **(int **)(unaff_EBP + -0x34) + 1;
    }
  }
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
  *failure2 = &std::ios_base::failure::vftable;
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x24);
  return failure2;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a4b4);
  FUN_0042793c(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_00421be4((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421c70  FUN_00421c70   (67 bytes)   [unnamed]
undefined4 * __cdecl FUN_00421c70(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47a4d8);
  FUN_0042790c(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_00421be4((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421cec  FUN_00421cec   (67 bytes)   [unnamed]
void __cdecl FUN_00421cec(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_004282cc(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)param_1 + 9) == 0) {
        *(HGDIOBJ *)((int)param_1 + 9) = hGdiObject;
      }
      else {
        FUN_004282f8((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421d74  FUN_00421d74   (73 bytes)   [unnamed]
void __cdecl FUN_00421d74(undefined4 *param_1,uint *param_2,byte forceBkgd)

{
  HPALETTE hPalette;
  
  hPalette = SelectPalette((HDC)*param_1,(HPALETTE)*param_2,(uint)forceBkgd);
  if (hPalette != (HPALETTE)0x0) {
    FUN_004282cc(*param_2);
    if ((HPALETTE)0x1 < hPalette) {
      if (*(int *)((int)param_1 + 0x15) == 0) {
        *(HPALETTE *)((int)param_1 + 0x15) = hPalette;
      }
      else {
        FUN_004282f8((uint)hPalette);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421dec  FUN_00421dec   (42 bytes)   [unnamed]
void __cdecl FUN_00421dec(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0xd) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0xd));
    FUN_004282f8((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e18  FUN_00421e18   (42 bytes)   [unnamed]
void __cdecl FUN_00421e18(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 9) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 9));
    FUN_004282f8((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 9) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e70  FUN_00421e70   (44 bytes)   [unnamed]
void __cdecl FUN_00421e70(undefined4 *param_1)

{
  HPALETTE hPalette;
  
  if (*(int *)((int)param_1 + 0x15) != 0) {
    hPalette = SelectPalette((HDC)*param_1,*(HPALETTE *)((int)param_1 + 0x15),0);
    FUN_004282f8((uint)hPalette);
    *(undefined4 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421e9c  FUN_00421e9c   (42 bytes)   [unnamed]
void __cdecl FUN_00421e9c(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x19) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x19));
    FUN_004282f8((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x19) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00421ec8  FUN_00421ec8   (42 bytes)   [unnamed]
void __cdecl FUN_00421ec8(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x1d) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x1d));
    FUN_004282f8((uint)hGdiObject);
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
void __cdecl FUN_00421f30(undefined4 *param_1,uint *param_2,int *param_3,int w2,int h2,DWORD rop)

{
  int w;
  int h;
  
  FUN_00421cec(param_1,param_2);
  w = (param_3[2] - *param_3) - w2;
  h = (param_3[3] - param_3[1]) - h2;
  PatBlt((HDC)*param_1,*param_3,param_3[1],w2,h,rop);
  PatBlt((HDC)*param_1,*param_3 + w2,param_3[1],w,h2,rop);
  PatBlt((HDC)*param_1,*param_3,param_3[1] + h,w,h2,rop);
  PatBlt((HDC)*param_1,*param_3 + w,param_3[1] + h2,w2,h,rop);
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
undefined4 __cdecl FUN_00422fa8(int *param_1,LPCSTR caption,char *param_3)

{
  int iVar1;
  uint *s;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 text;
  uint local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    s = (uint *)(**(code **)(*param_1 + 4))();
    pcVar3 = strlen(s);
  }
  if (caption == (LPCSTR)0x0) {
    caption = PTR_s_Unhandled_Exception_0047a6b0;
  }
  if (pcVar3 == (char *)0x0) {
    FUN_00467770((char *)&text,"Unknown Exception");
    pcVar3 = strlen(&text);
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_1 + 4))();
    FUN_00467770((char *)&text,pcVar4);
  }
  if (param_3 != (char *)0x0) {
    local_8 = 4;
    *(char *)((int)&text + (int)pcVar3) = '\n';
    FUN_00467770(pcVar3 + (int)&text + 1,param_3);
  }
  uVar5 = FUN_00422f44();
  iVar1 = MessageBoxExA((HWND)0x0,(LPCSTR)&text,caption,uVar5 | local_8 | 0x10,0);
  if (iVar1 == 6) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423384  FUN_00423384   (83 bytes)   [unnamed]
void __cdecl FUN_00423384(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 txOwl [3];
  
  __InitExceptBlockLDTC(0x47a834);
  piVar1 = OWL::TXOwl::TXOwl(txOwl,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(txOwl,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004233d8  FUN_004233d8   (478 bytes)   [unnamed]
int __cdecl FUN_004233d8(int param_1,char *param_2,uint param_3,int param_4)

{
  uint len;
  char cVar2;
  int iVar3;
  int *strRep;
  undefined4 *sehChainHead;
  uint multiByteStr [34];
  undefined4 *unused;
  undefined4 *unused2;
  undefined4 *dest;
  undefined4 *unused3;
  uint unused4;
  int unused5;
  int *newRep;
  int *newData;
  int unused6;
  undefined4 *unused7;
  undefined4 unused8;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x47a888);
  if (param_4 == 0) {
LAB_00423415:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_0044f0b4(param_4,param_3,(LPSTR)multiByteStr,0x80);
    if (iVar3 == 0) goto LAB_00423415;
    cVar2 = '\x01';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar2;
  }
  if (cVar2 == '\0') {
    sprintf((undefined1 *)multiByteStr,(byte *)"Exception #%u (Could not load description string; <owl/except.rc> not bound\?).");
  }
  ehContext = 8;
  std::string::string_from_cstr((int)str,multiByteStr);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  unused8 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    newRep = std::string::__getRep(param_1,len,len);
    newData = newRep + 3;
    *(int **)(param_1 + 8) = newData;
    unused5 = param_1;
    unused3 = local_c;
    dest = *(undefined4 **)(param_1 + 8);
    unused4 = len;
    memcpy(dest,local_c,len);
  }
  else {
    unused7 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    unused6 = param_1;
    strRep = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0042359b;
    }
    unused2 = local_c + -3;
    unused = local_c + -3;
    operator_delete();
  }
LAB_0042359b:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004235b8  FUN_004235b8   (258 bytes)   [unnamed]
int __cdecl FUN_004235b8(int str,uint param_2,undefined4 param_3,int param_4)

{
  int prevRefs;
  byte *strRep;
  undefined4 *sehChainHead;
  uint local_158 [69];
  byte *unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x47a918);
  ehContext = 0x14;
  FUN_004233d8((int)local_14,(char *)0x0,param_2,param_4);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  sprintf((undefined1 *)local_158,local_c);
  ehContext = 0x20;
  std::string::string_from_cstr(str,local_158);
  ehContext = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0042369f;
    }
    unused = local_c + -0xc;
    operator_delete();
  }
LAB_0042369f:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004236bc  FUN_004236bc   (258 bytes)   [unnamed]
int __cdecl FUN_004236bc(int str,uint param_2,undefined4 param_3,int param_4)

{
  int prevRefs;
  byte *strRep;
  undefined4 *sehChainHead;
  uint local_158 [69];
  byte *unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x47a99c);
  ehContext = 0x14;
  FUN_004233d8((int)local_14,(char *)0x0,param_2,param_4);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  sprintf((undefined1 *)local_158,local_c);
  ehContext = 0x20;
  std::string::string_from_cstr(str,local_158);
  ehContext = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004237a3;
    }
    unused = local_c + -0xc;
    operator_delete();
  }
LAB_004237a3:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004239d4  FUN_004239d4   (78 bytes)   [unnamed]
void __stdcall FUN_004239d4(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47aa68);
  piVar1 = OWL::TXOutOfMemory::TXOutOfMemory(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423a68  FUN_00423a68   (82 bytes)   [unnamed]
uint * __cdecl FUN_00423a68(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47aac8);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00428078(*param_1,3);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423abc  FUN_00423abc   (158 bytes)   [unnamed]
uint * __cdecl FUN_00423abc(uint *param_1,LPCSTR faceName,int cHeight,int cWidth,int cEscapement,int cOrientation, int cWeight,byte pitchAndFamily,byte italic,byte underline,byte strikeOut,byte charSet, byte outPrecision,byte clipPrecision,byte quality)

{
  HFONT hFont;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47aaec);
  FUN_00428420(param_1);
  hFont = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,(uint)italic,(uint)underline,
                       (uint)strikeOut,(uint)charSet,(uint)outPrecision,(uint)clipPrecision,(uint)quality,
                       (uint)pitchAndFamily,faceName);
  *param_1 = (uint)hFont;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423b5c  FUN_00423b5c   (94 bytes)   [unnamed]
uint * __cdecl FUN_00423b5c(uint *param_1,LOGFONTA *pLogFont)

{
  HFONT hFont;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ab10);
  FUN_00428420(param_1);
  hFont = CreateFontIndirectA(pLogFont);
  *param_1 = (uint)hFont;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423bbc  FUN_00423bbc   (60 bytes)   [unnamed]
void __cdecl FUN_00423bbc(undefined4 param_1,LPTEXTMETRICA lptm,int param_3)

{
  HDC hdc;
  BOOL ok;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  ok = GetTextMetricsA(hdc,lptm);
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))(ok,ok != 0,*(int *)(param_3 + 5),param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423bf8  FUN_00423bf8   (98 bytes)   [unnamed]
void __cdecl FUN_00423bf8(undefined4 param_1,LPTEXTMETRICA lptm)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x47ab44);
  FUN_0043942c(windowDC);
  FUN_00423bbc(param_1,lptm,(int)windowDC);
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423c5c  FUN_00423c5c   (131 bytes)   [unnamed]
LONG * __cdecl FUN_00423c5c(LONG *param_1,undefined4 param_2)

{
  int i;
  tagTEXTMETRICA *pTextMetrics;
  LONG *pLVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  tagTEXTMETRICA textMetrics;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int windowDC [10];
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x47ab84);
  ehContext = 8;
  FUN_0043942c(windowDC);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  FUN_00423bbc(param_2,&textMetrics,(int)windowDC);
  pTextMetrics = &textMetrics;
  pLVar3 = param_1;
  for (i = 0xe; i != 0; i = i + -1) {
    *pLVar3 = pTextMetrics->tmHeight;
    pTextMetrics = (tagTEXTMETRICA *)((int)pTextMetrics + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  ehDtorCount = ehDtorCount + -3;
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423ce0  FUN_00423ce0   (108 bytes)   [unnamed]
LONG * __cdecl FUN_00423ce0(LONG *param_1,undefined4 param_2,uint *string_)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x47abc4);
  FUN_0043942c(windowDC);
  FUN_00423d4c(param_1,param_2,(int)windowDC,string_);
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423d4c  FUN_00423d4c   (122 bytes)   [unnamed]
LONG * __cdecl FUN_00423d4c(LONG *param_1,undefined4 param_2,int param_3,uint *string_)

{
  char *c;
  HDC hdc;
  tagSIZE *psizl;
  tagSIZE size;
  char *unused;
  LONG local_c;
  LONG local_8;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  c = strlen(string_);
  size.cx = 0;
  size.cy = 0;
  psizl = &size;
  unused = c;
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,(LPCSTR)string_,(int)c,psizl);
  local_c = size.cx;
  local_8 = size.cy;
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))();
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423dc8  FUN_00423dc8   (90 bytes)   [unnamed]
int __cdecl FUN_00423dc8(int str,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined1 pv [28];
  uint s [10];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x47abf4);
  GetObjectA((HANDLE)*param_2,0x3c,pv);
  ehContext = 8;
  std::string::string_from_cstr(str,s);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423e24  FUN_00423e24   (39 bytes)   [unnamed]
undefined1 __cdecl FUN_00423e24(undefined4 *param_1)

{
  undefined1 pv [27];
  undefined1 local_25;
  
  GetObjectA((HANDLE)*param_1,0x3c,pv);
  return local_25;
}

// ----------------------------------------------------------------------------------------------------
// 0x00423e4c  FUN_00423e4c   (82 bytes)   [unnamed]
uint * __cdecl FUN_00423e4c(uint *param_1)

{
  bool bVar1;
  HGDIOBJ hGdiObject;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ac18);
  iVar3 = 0;
  bVar1 = FUN_0041b9e4();
  if (bVar1) {
    hGdiObject = GetStockObject(0x11);
  }
  else {
    hGdiObject = GetStockObject(0xd);
  }
  FUN_00423a68(param_1,hGdiObject,iVar3);
  *sehChainHead = sehPrevFrame;
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
  int metric;
  
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
    metric = GetSystemMetrics(DAT_0047d520);
    *param_2 = (char)param_1[1] * iVar1;
    *param_4 = *(char *)((int)param_1 + 6) * metric;
    *param_3 = *(char *)((int)param_1 + 5) * iVar1;
    *param_5 = *(char *)((int)param_1 + 7) * metric;
  }
  return;
}

} // namespace tea

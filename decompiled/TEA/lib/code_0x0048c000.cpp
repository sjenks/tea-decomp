// TEA.exe — runtime / library code "code_0x0048c000"
// 116 functions, 0x0048c0a0..0x0048ff7c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048c0a0  FUN_0048c0a0   (62 bytes)   [unnamed]
int __cdecl FUN_0048c0a0(short param_1)

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
// 0x0048c0e0  FUN_0048c0e0   (73 bytes)   [unnamed]
undefined4 __cdecl FUN_0048c0e0(int param_1)

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
// 0x0048c12c  FUN_0048c12c   (50 bytes)   [unnamed]
uint __cdecl FUN_0048c12c(uint *param_1)

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
// 0x0048c160  FUN_0048c160   (17 bytes)   [unnamed]
uint __cdecl FUN_0048c160(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0048c12c(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c174  FUN_0048c174   (23 bytes)   [unnamed]
int __cdecl FUN_0048c174(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0048c12c(param_1);
  return (int)(uVar1 & 0xffff) >> 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c18c  FUN_0048c18c   (20 bytes)   [unnamed]
uint __cdecl FUN_0048c18c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0048c12c(param_1);
  return uVar1 >> 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c1a0  FUN_0048c1a0   (65 bytes)   [unnamed]
void __stdcall FUN_0048c1a0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5057e0);
  if (DAT_005057d4 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b208,2);
    DAT_005057d4 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c1e4  FUN_0048c1e4   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0048c1e4(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5058a0);
  if (DAT_005057d4 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_0051b208,(uint *)"COMDLG32.DLL",'\x01','\x01','\0');
    DAT_005057d4 = DAT_005057d4 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b208;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c23c  FUN_0048c23c   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c23c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d5 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b215,(int)puVar1,"ChooseColorA");
    DAT_005057d5 = DAT_005057d5 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b215)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c274  FUN_0048c274   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c274(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d6 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b219,(int)puVar1,"ChooseFontA");
    DAT_005057d6 = DAT_005057d6 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b219)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c2ac  FUN_0048c2ac   (46 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c2ac(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d7 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b21d,(int)puVar1,"CommDlgExtendedError");
    DAT_005057d7 = DAT_005057d7 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b21d)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c2dc  FUN_0048c2dc   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c2dc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d8 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b221,(int)puVar1,"FindTextA");
    DAT_005057d8 = DAT_005057d8 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b221)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c314  FUN_0048c314   (69 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c314(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057d9 == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b225,(int)puVar1,"GetFileTitleA");
    DAT_005057d9 = DAT_005057d9 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b225)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c35c  FUN_0048c35c   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c35c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057da == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b229,(int)puVar1,"GetOpenFileNameA");
    DAT_005057da = DAT_005057da + '\x01';
  }
  uVar2 = ((code *)DAT_0051b229)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c394  FUN_0048c394   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c394(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057db == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b22d,(int)puVar1,"PageSetupDlgA");
    DAT_005057db = DAT_005057db + '\x01';
  }
  uVar2 = ((code *)DAT_0051b22d)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c3cc  FUN_0048c3cc   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c3cc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057dc == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b231,(int)puVar1,"PrintDlgExA");
    DAT_005057dc = DAT_005057dc + '\x01';
  }
  uVar2 = ((code *)DAT_0051b231)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c404  FUN_0048c404   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c404(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057dd == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b235,(int)puVar1,"PrintDlgA");
    DAT_005057dd = DAT_005057dd + '\x01';
  }
  uVar2 = ((code *)DAT_0051b235)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c43c  FUN_0048c43c   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c43c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057de == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b239,(int)puVar1,"ReplaceTextA");
    DAT_005057de = DAT_005057de + '\x01';
  }
  uVar2 = ((code *)DAT_0051b239)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c474  FUN_0048c474   (56 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c474(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_005057df == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b23d,(int)puVar1,"GetSaveFileNameA");
    DAT_005057df = DAT_005057df + '\x01';
  }
  uVar2 = ((code *)DAT_0051b23d)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048c8b0  FUN_0048c8b0   (76 bytes)   [unnamed]
void __cdecl FUN_0048c8b0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505a4c);
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
// 0x0048c8fc  FUN_0048c8fc   (73 bytes)   [unnamed]
int __cdecl FUN_0048c8fc(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((uint)(*(int *)(param_1 + 5) - *(int *)(param_1 + 0xd)) < param_2) {
    iVar1 = FUN_0048c948(param_1);
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
// 0x0048c948  FUN_0048c948   (6 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c948(int param_1)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505a64);
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
// 0x0048c94e  FUN_0048c94e   (121 bytes)   [unnamed]
undefined4 __stdcall FUN_0048c94e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  uint uVar3;
  undefined4 *sehChainHead;
  
  uVar3 = *(uint *)(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x505a64);
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
// 0x0048cc38  FUN_0048cc38   (15 bytes)   [unnamed]
void __stdcall FUN_0048cc38(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ce3c  FUN_0048ce3c   (40 bytes)   [unnamed]
void __cdecl FUN_0048ce3c(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0048c8b0(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d298  FUN_0048d298   (61 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048d298(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505cd4);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d2f8  FUN_0048d2f8   (99 bytes)   [unnamed]
int * __cdecl FUN_0048d2f8(int *param_1,LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR port,DEVMODEA *pdm)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505cf8);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
  hdc = CreateDCA(pwszDriver,pwszDevice,port,pdm);
  *param_1 = (int)hdc;
  FUN_00493530(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d35c  FUN_0048d35c   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048d35c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505d1c);
  FUN_0048d870(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &OWL::TCreatedDC::vftable;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d424  FUN_0048d424   (78 bytes)   [unnamed]
int * __cdecl FUN_0048d424(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506010);
  if (param_3 == 0) {
    *param_1 = param_2 + 0x24db1a;
  }
  else {
    iVar1 = FUN_0048d544(0xc,0x1f,param_3 - 1);
    *param_1 = param_2 + iVar1;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d474  FUN_0048d474   (56 bytes)   [unnamed]
int * __cdecl FUN_0048d474(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506018);
  iVar1 = FUN_0048d544(param_3,param_2,param_4);
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d4ac  FUN_0048d4ac   (66 bytes)   [unnamed]
int * __cdecl FUN_0048d4ac(int *param_1,ushort *param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506020);
  iVar1 = FUN_0048d544((uint)param_2[1],(uint)param_2[3],(uint)*param_2);
  *param_1 = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d4f0  FUN_0048d4f0   (82 bytes)   [unnamed]
bool __cdecl FUN_0048d4f0(uint param_1,uint param_2,uint param_3)

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
      uVar3 = (uint)(byte)(&DAT_00505ec7)[param_1];
      iVar2 = FUN_0048d5c8(param_3);
      if ((iVar2 != 0) && (param_1 == 2)) {
        uVar3 = uVar3 + 1;
      }
      return param_2 <= uVar3;
    }
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d544  FUN_0048d544   (130 bytes)   [unnamed]
int __cdecl FUN_0048d544(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined3 regHigh;
  int iVar2;
  
  if (param_3 < 0x8a) {
    param_3 = param_3 + 0x76c;
  }
  bVar1 = FUN_0048d4f0(param_1,param_2,param_3);
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
// 0x0048d5c8  FUN_0048d5c8   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_0048d5c8(uint param_1)

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
// 0x0048d600  FUN_0048d600   (173 bytes)   [unnamed]
void __cdecl FUN_0048d600(int *param_1,uint *param_2,uint *param_3,uint *param_4)

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
// 0x0048d6b0  FUN_0048d6b0   (37 bytes)   [unnamed]
uint __cdecl FUN_0048d6b0(int *param_1)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_0048d600(param_1,&local_8,&local_c,&local_10);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d6d8  FUN_0048d6d8   (60 bytes)   [unnamed]
int * __cdecl FUN_0048d6d8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 - 1;
  iVar1 = FUN_0048d714(param_2,0);
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
// 0x0048d714  FUN_0048d714   (79 bytes)   [unnamed]
int __cdecl FUN_0048d714(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = *param_1;
  }
  else {
    uVar1 = FUN_0048d764(param_1);
    uVar2 = FUN_0048d6b0(param_1);
    iVar3 = FUN_0048d544(param_2,uVar2,uVar1);
  }
  return ((iVar3 + 1U) % 7 + 6) % 7 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d764  FUN_0048d764   (37 bytes)   [unnamed]
uint __cdecl FUN_0048d764(int *param_1)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_0048d600(param_1,&local_8,&local_c,&local_10);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d78c  FUN_0048d78c   (18 bytes)   [unnamed]
void __cdecl FUN_0048d78c(int *param_1,int *param_2,int param_3)

{
  *param_1 = *param_2 + param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d7a0  FUN_0048d7a0   (38 bytes)   [unnamed]
void __cdecl FUN_0048d7a0(int param_1)

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
// 0x0048d7c8  FUN_0048d7c8   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048d7c8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506038);
  FUN_004934f8(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_0048d7a0((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d82c  FUN_0048d82c   (67 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048d82c(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50605c);
  FUN_004934c8(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_0048d7a0((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d870  FUN_0048d870   (75 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048d870(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506080);
  FUN_004934f8(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
  FUN_0048d7a0((int)param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d8f4  FUN_0048d8f4   (67 bytes)   [unnamed]
void __cdecl FUN_0048d8f4(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_00493e88(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)param_1 + 0xd) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0xd) = hGdiObject;
      }
      else {
        FUN_00493eb4((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d938  FUN_0048d938   (67 bytes)   [unnamed]
void __cdecl FUN_0048d938(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_00493e88(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)param_1 + 9) == 0) {
        *(HGDIOBJ *)((int)param_1 + 9) = hGdiObject;
      }
      else {
        FUN_00493eb4((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d9c0  FUN_0048d9c0   (73 bytes)   [unnamed]
void __cdecl FUN_0048d9c0(undefined4 *param_1,uint *param_2,byte forceBkgd)

{
  HPALETTE hPalette;
  
  hPalette = SelectPalette((HDC)*param_1,(HPALETTE)*param_2,(uint)forceBkgd);
  if (hPalette != (HPALETTE)0x0) {
    FUN_00493e88(*param_2);
    if ((HPALETTE)0x1 < hPalette) {
      if (*(int *)((int)param_1 + 0x15) == 0) {
        *(HPALETTE *)((int)param_1 + 0x15) = hPalette;
      }
      else {
        FUN_00493eb4((uint)hPalette);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048da38  FUN_0048da38   (42 bytes)   [unnamed]
void __cdecl FUN_0048da38(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0xd) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0xd));
    FUN_00493eb4((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048da64  FUN_0048da64   (42 bytes)   [unnamed]
void __cdecl FUN_0048da64(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 9) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 9));
    FUN_00493eb4((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 9) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dabc  FUN_0048dabc   (44 bytes)   [unnamed]
void __cdecl FUN_0048dabc(undefined4 *param_1)

{
  HPALETTE hPalette;
  
  if (*(int *)((int)param_1 + 0x15) != 0) {
    hPalette = SelectPalette((HDC)*param_1,*(HPALETTE *)((int)param_1 + 0x15),0);
    FUN_00493eb4((uint)hPalette);
    *(undefined4 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dae8  FUN_0048dae8   (42 bytes)   [unnamed]
void __cdecl FUN_0048dae8(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x19) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x19));
    FUN_00493eb4((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x19) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048db14  FUN_0048db14   (42 bytes)   [unnamed]
void __cdecl FUN_0048db14(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x1d) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x1d));
    FUN_00493eb4((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x1d) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048db40  FUN_0048db40   (58 bytes)   [unnamed]
void __cdecl FUN_0048db40(int *param_1)

{
  undefined4 extraout_EDX;
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_0048da38(param_1);
    piVar1 = param_1;
    FUN_0048da64(param_1);
    (**(code **)(*(int *)((int)param_1 + 5) + 0x1c))
              (*(int *)((int)param_1 + 5),extraout_EDX,piVar1,param_1);
    FUN_0048dabc(param_1);
    FUN_0048dae8(param_1);
    FUN_0048db14(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048db7c  FUN_0048db7c   (18 bytes)   [unnamed]
HGDIOBJ __cdecl FUN_0048db7c(undefined4 *param_1,UINT type)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = GetCurrentObject((HDC)*param_1,type);
  return hGdiObject;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048db90  FUN_0048db90   (299 bytes)   [unnamed]
void __cdecl FUN_0048db90(undefined4 *param_1,uint *param_2,int *param_3,int w2,int h2,DWORD rop)

{
  int w;
  int h;
  
  FUN_0048d938(param_1,param_2);
  w = (param_3[2] - *param_3) - w2;
  h = (param_3[3] - param_3[1]) - h2;
  PatBlt((HDC)*param_1,*param_3,param_3[1],w2,h,rop);
  PatBlt((HDC)*param_1,*param_3 + w2,param_3[1],w,h2,rop);
  PatBlt((HDC)*param_1,*param_3,param_3[1] + h,w,h2,rop);
  PatBlt((HDC)*param_1,*param_3 + w,param_3[1] + h2,w2,h,rop);
  FUN_0048da64(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e150  FUN_0048e150   (38 bytes)   [unnamed]
void __cdecl FUN_0048e150(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e178  FUN_0048e178   (45 bytes)   [unnamed]
undefined1 __cdecl FUN_0048e178(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e1a8  FUN_0048e1a8   (53 bytes)   [unnamed]
undefined1 __cdecl FUN_0048e1a8(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e1e0  FUN_0048e1e0   (41 bytes)   [unnamed]
void __cdecl FUN_0048e1e0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e20c  FUN_0048e20c   (35 bytes)   [unnamed]
void __cdecl FUN_0048e20c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e230  FUN_0048e230   (35 bytes)   [unnamed]
void __cdecl FUN_0048e230(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e254  FUN_0048e254   (40 bytes)   [unnamed]
undefined1 __cdecl FUN_0048e254(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e27c  FUN_0048e27c   (48 bytes)   [unnamed]
bool __cdecl FUN_0048e27c(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  
  cVar1 = (*(code *)param_2)();
  return cVar1 != '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e2ac  FUN_0048e2ac   (40 bytes)   [unnamed]
void __cdecl FUN_0048e2ac(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e2d4  FUN_0048e2d4   (64 bytes)   [unnamed]
void __cdecl FUN_0048e2d4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e314  FUN_0048e314   (89 bytes)   [unnamed]
undefined1 __cdecl FUN_0048e314(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e370  FUN_0048e370   (58 bytes)   [unnamed]
void __cdecl FUN_0048e370(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e3ac  FUN_0048e3ac   (63 bytes)   [unnamed]
undefined1 __cdecl FUN_0048e3ac(undefined4 param_1,undefined *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (*(code *)param_2)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e3ec  FUN_0048e3ec   (51 bytes)   [unnamed]
void __cdecl FUN_0048e3ec(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e420  FUN_0048e420   (35 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e420(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e444  FUN_0048e444   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e444(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e46c  FUN_0048e46c   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e46c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e4ac  FUN_0048e4ac   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e4ac(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e4d4  FUN_0048e4d4   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e4d4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e518  FUN_0048e518   (43 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e518(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e544  FUN_0048e544   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e544(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e578  FUN_0048e578   (51 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e578(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e5ac  FUN_0048e5ac   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e5ac(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e5e4  FUN_0048e5e4   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e5e4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e61c  FUN_0048e61c   (62 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e61c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e65c  FUN_0048e65c   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e65c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e684  FUN_0048e684   (59 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e684(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e6c0  FUN_0048e6c0   (43 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e6c0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e6ec  FUN_0048e6ec   (56 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e6ec(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e724  FUN_0048e724   (62 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e724(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e764  FUN_0048e764   (114 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e764(undefined4 param_1,undefined *param_2,undefined4 param_3,int param_4,ushort param_5)

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
// 0x0048e7e0  FUN_0048e7e0   (38 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e7e0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 0xc) + 8))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e808  FUN_0048e808   (87 bytes)   [unnamed]
undefined4 __cdecl FUN_0048e808(undefined4 param_1,int *param_2,int *param_3,undefined *param_4)

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
// 0x0048ebe4  FUN_0048ebe4   (81 bytes)   [unnamed]
undefined4 __stdcall FUN_0048ebe4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  code *lpfn;
  int lParam;
  undefined4 uStack_8;
  
  puVar1 = FUN_0048751c();
  if (*(int *)(puVar1 + 0x10) == 2) {
    uVar2 = 0x2000;
  }
  else {
    uStack_8 = uStack_8 & 0xffffff;
    lParam = (int)&uStack_8 + 3;
    lpfn = FUN_0048ec38;
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
// 0x0048ec38  FUN_0048ec38   (15 bytes)   [unnamed]
undefined4 __stdcall FUN_0048ec38(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ec48  FUN_0048ec48   (221 bytes)   [unnamed]
undefined4 __cdecl FUN_0048ec48(int *param_1,LPCSTR caption,char *param_3)

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
    caption = PTR_s_Unhandled_Exception_00506258;
  }
  if (pcVar3 == (char *)0x0) {
    FUN_004dc9c4((char *)&text,"Unknown Exception");
    pcVar3 = strlen(&text);
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_1 + 4))();
    FUN_004dc9c4((char *)&text,pcVar4);
  }
  if (param_3 != (char *)0x0) {
    local_8 = 4;
    *(char *)((int)&text + (int)pcVar3) = '\n';
    FUN_004dc9c4(pcVar3 + (int)&text + 1,param_3);
  }
  uVar5 = FUN_0048ebe4();
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
// 0x0048f024  FUN_0048f024   (83 bytes)   [unnamed]
void __cdecl FUN_0048f024(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 txOwl [3];
  
  __InitExceptBlockLDTC(0x5063dc);
  piVar1 = OWL::TXOwl::TXOwl(txOwl,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(txOwl,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f078  FUN_0048f078   (478 bytes)   [unnamed]
int __cdecl FUN_0048f078(int param_1,char *param_2,uint param_3,int param_4)

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
  
  __InitExceptBlockLDTC(0x506430);
  if (param_4 == 0) {
LAB_0048f0b5:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_004c0cd4(param_4,param_3,(LPSTR)multiByteStr,0x80);
    if (iVar3 == 0) goto LAB_0048f0b5;
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
      if (iVar3 != 0) goto LAB_0048f23b;
    }
    unused2 = local_c + -3;
    unused = local_c + -3;
    operator_delete();
  }
LAB_0048f23b:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f258  FUN_0048f258   (258 bytes)   [unnamed]
int __cdecl FUN_0048f258(int str,uint param_2,undefined4 param_3,int param_4)

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
  
  __InitExceptBlockLDTC(0x5064c0);
  ehContext = 0x14;
  FUN_0048f078((int)local_14,(char *)0x0,param_2,param_4);
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
      if (prevRefs != 0) goto LAB_0048f33f;
    }
    unused = local_c + -0xc;
    operator_delete();
  }
LAB_0048f33f:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f35c  FUN_0048f35c   (258 bytes)   [unnamed]
int __cdecl FUN_0048f35c(int str,uint param_2,undefined4 param_3,int param_4)

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
  
  __InitExceptBlockLDTC(0x506544);
  ehContext = 0x14;
  FUN_0048f078((int)local_14,(char *)0x0,param_2,param_4);
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
      if (prevRefs != 0) goto LAB_0048f443;
    }
    unused = local_c + -0xc;
    operator_delete();
  }
LAB_0048f443:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f674  FUN_0048f674   (78 bytes)   [unnamed]
void __stdcall FUN_0048f674(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x506610);
  piVar1 = OWL::TXOutOfMemory::TXOutOfMemory(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f708  FUN_0048f708   (82 bytes)   [unnamed]
uint * __cdecl FUN_0048f708(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506670);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00493c34(*param_1,3);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f75c  FUN_0048f75c   (158 bytes)   [unnamed]
uint * __cdecl FUN_0048f75c(uint *param_1,LPCSTR faceName,int cHeight,int cWidth,int cEscapement,int cOrientation, int cWeight,byte pitchAndFamily,byte italic,byte underline,byte strikeOut,byte charSet, byte outPrecision,byte clipPrecision,byte quality)

{
  HFONT hFont;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506694);
  FUN_00493fdc(param_1);
  hFont = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,(uint)italic,(uint)underline,
                       (uint)strikeOut,(uint)charSet,(uint)outPrecision,(uint)clipPrecision,(uint)quality,
                       (uint)pitchAndFamily,faceName);
  *param_1 = (uint)hFont;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f7fc  FUN_0048f7fc   (94 bytes)   [unnamed]
uint * __cdecl FUN_0048f7fc(uint *param_1,LOGFONTA *pLogFont)

{
  HFONT hFont;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5066b8);
  FUN_00493fdc(param_1);
  hFont = CreateFontIndirectA(pLogFont);
  *param_1 = (uint)hFont;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f85c  FUN_0048f85c   (60 bytes)   [unnamed]
void __cdecl FUN_0048f85c(undefined4 param_1,LPTEXTMETRICA lptm,int param_3)

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
// 0x0048f898  FUN_0048f898   (98 bytes)   [unnamed]
void __cdecl FUN_0048f898(undefined4 param_1,LPTEXTMETRICA lptm)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x5066ec);
  FUN_004a8760(windowDC);
  FUN_0048f85c(param_1,lptm,(int)windowDC);
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f8fc  FUN_0048f8fc   (131 bytes)   [unnamed]
LONG * __cdecl FUN_0048f8fc(LONG *param_1,undefined4 param_2)

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
  __InitExceptBlockLDTC(0x50672c);
  ehContext = 8;
  FUN_004a8760(windowDC);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  FUN_0048f85c(param_2,&textMetrics,(int)windowDC);
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
// 0x0048f980  FUN_0048f980   (108 bytes)   [unnamed]
LONG * __cdecl FUN_0048f980(LONG *param_1,undefined4 param_2,uint *string_)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x50676c);
  FUN_004a8760(windowDC);
  FUN_0048f9ec(param_1,param_2,(int)windowDC,string_);
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f9ec  FUN_0048f9ec   (122 bytes)   [unnamed]
LONG * __cdecl FUN_0048f9ec(LONG *param_1,undefined4 param_2,int param_3,uint *string_)

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
// 0x0048fa68  FUN_0048fa68   (90 bytes)   [unnamed]
int __cdecl FUN_0048fa68(int str,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined1 pv [28];
  uint s [10];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x50679c);
  GetObjectA((HANDLE)*param_2,0x3c,pv);
  ehContext = 8;
  std::string::string_from_cstr(str,s);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fac4  FUN_0048fac4   (39 bytes)   [unnamed]
undefined1 __cdecl FUN_0048fac4(undefined4 *param_1)

{
  undefined1 pv [27];
  undefined1 local_25;
  
  GetObjectA((HANDLE)*param_1,0x3c,pv);
  return local_25;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048faec  FUN_0048faec   (82 bytes)   [unnamed]
uint * __cdecl FUN_0048faec(uint *param_1)

{
  bool bVar1;
  HGDIOBJ hGdiObject;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5067c0);
  iVar3 = 0;
  bVar1 = FUN_004875a8();
  if (bVar1) {
    hGdiObject = GetStockObject(0x11);
  }
  else {
    hGdiObject = GetStockObject(0xd);
  }
  FUN_0048f708(param_1,hGdiObject,iVar3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fb40  FUN_0048fb40   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048fb40(undefined4 *param_1,int param_2,undefined4 *param_3,uint n)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5067d4);
  if (param_2 == 0) {
    *param_1 = param_3;
  }
  else {
    param_1[3] = param_2;
    memcpy(param_1,param_3,n);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fb88  FUN_0048fb88   (24 bytes)   [unnamed]
int __cdecl FUN_0048fb88(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2 + 4;
  if (iVar1 < 0) {
    iVar1 = param_1 * param_2 + 0xb;
  }
  return iVar1 >> 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fba0  FUN_0048fba0   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0048fba0(int param_1)

{
  if (((param_1 != 0) && (param_1 != -1)) && ((param_1 < 30000 || (30999 < param_1)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fbc8  FUN_0048fbc8   (291 bytes)   [unnamed]
void __cdecl FUN_0048fbc8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

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
    iVar1 = FUN_0048fb88((int)(char)param_1[1],param_6);
    *param_2 = iVar1;
    iVar1 = FUN_0048fb88((int)*(char *)((int)param_1 + 6),param_6);
    *param_4 = iVar1;
    iVar1 = FUN_0048fb88((int)*(char *)((int)param_1 + 5),param_6);
    *param_3 = iVar1;
    iVar1 = FUN_0048fb88((int)*(char *)((int)param_1 + 7),param_6);
    *param_5 = iVar1;
  }
  else if (iVar1 == 2) {
    iVar1 = GetSystemMetrics(DAT_00509de8);
    metric = GetSystemMetrics(DAT_00509df0);
    *param_2 = (char)param_1[1] * iVar1;
    *param_4 = *(char *)((int)param_1 + 6) * metric;
    *param_3 = *(char *)((int)param_1 + 5) * iVar1;
    *param_5 = *(char *)((int)param_1 + 7) * metric;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fcf2  FUN_0048fcf2   (282 bytes)   [unnamed]
int __stdcall FUN_0048fcf2(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  
  bVar5 = 0;
  piVar1 = (int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x5067ec);
  *(undefined2 *)(unaff_EBP + -0x14) = 8;
  *(undefined ***)*piVar1 = &OWL::TGadget::vftable;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 10) = 0;
  *(undefined4 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x12) = 0;
  *(undefined4 *)(iVar2 + 0x16) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2a) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 0;
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x1e) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2e) = 1;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x33) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x32) = *(undefined1 *)(iVar2 + 0x33);
  *(undefined4 *)(*piVar1 + 6) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar3 = (undefined4 *)(unaff_EBP + -0x34);
  puVar4 = (undefined4 *)(*piVar1 + 10);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined2 *)(*piVar1 + 0x42) = 3;
  *(undefined1 *)(*piVar1 + 0x38) = 0;
  *(undefined1 *)(*piVar1 + 0x39) = 0;
  *(undefined1 *)(*piVar1 + 4) = 0;
  *(undefined1 *)(*piVar1 + 5) = 0;
  *(undefined1 *)(*piVar1 + 0x37) = 1;
  *(undefined1 *)(*piVar1 + 0x36) = 1;
  *(undefined4 *)(*piVar1 + 0x3e) = 0;
  *(undefined4 *)(*piVar1 + 0x3a) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_0048ff7c(*piVar1,*(undefined4 *)(unaff_EBP + 0x10));
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x24);
  return *piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fe6c  FUN_0048fe6c   (20 bytes)   [unnamed]
void __cdecl FUN_0048fe6c(int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x36) = param_2;
  *(undefined1 *)(param_1 + 0x37) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ff24  FUN_0048ff24   (45 bytes)   [unnamed]
void __cdecl FUN_0048ff24(int param_1,undefined4 *param_2)

{
  int i;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1e);
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ff54  FUN_0048ff54   (40 bytes)   [unnamed]
void __cdecl FUN_0048ff54(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2e) = *param_2;
  *(undefined4 *)(param_1 + 0x32) = param_2[1];
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ff7c  FUN_0048ff7c   (78 bytes)   [unnamed]
void __cdecl FUN_0048ff7c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  iVar1 = *(int *)(param_1 + 0x1a);
  if (iVar1 != 0) {
    if (iVar1 - 1U < 3) {
      uVar2 = 1;
      goto LAB_0048ffaa;
    }
    if (iVar1 - 4U < 6) {
      uVar2 = 2;
      goto LAB_0048ffaa;
    }
  }
  uVar2 = 0;
LAB_0048ffaa:
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  return;
}

} // namespace tea

// TSBuild.exe — runtime / library code "code_0x0041c000"
// 64 functions, 0x0041c204..0x0041fe74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c204  FUN_0041c204   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0041c204(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c404  FUN_0041c404   (92 bytes)   [unnamed]
void __cdecl FUN_0041c404(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x478e15);
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (*(code *)**(undefined4 **)(param_1[1] + 0x1b))();
    }
    param_1[1] = 0;
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c460  FUN_0041c460   (64 bytes)   [unnamed]
void __stdcall FUN_0041c460(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478e35);
  if (DAT_00478e04 != '\0') {
    OWL::TAppDictionary::_dtor((int *)&DAT_0048c5c4,2);
    DAT_00478e04 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c4a0  FUN_0041c4a0   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0041c4a0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478e54);
  if (DAT_00478e04 == '\0') {
    FUN_0041c53c((undefined4 *)&DAT_0048c5c4);
    DAT_00478e04 = DAT_00478e04 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c5c4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c53c  FUN_0041c53c   (173 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c53c(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x478e98);
  cVar1 = FUN_0041b9b4();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0041c7b8(puVar2);
    }
    *param_1 = puVar2;
  }
  else {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &OWL::TAppDictImp::vftable;
      *puVar2 = &OWL::TAppDictInstImp::vftable;
      puVar2[2] = 0;
    }
    *param_1 = puVar2;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c6e8  FUN_0041c6e8   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0041c6e8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    GetCurrentProcessId();
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0xc))();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c718  FUN_0041c718   (37 bytes)   [unnamed]
void __cdecl FUN_0041c718(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    GetCurrentProcessId();
  }
  (**(code **)(*(int *)*param_1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c740  FUN_0041c740   (35 bytes)   [unnamed]
void __cdecl FUN_0041c740(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x10))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c78c  FUN_0041c78c   (43 bytes)   [unnamed]
bool __cdecl FUN_0041c78c(undefined4 *param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)*param_1 + 0x14))();
  iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
  return iVar1 == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c7b8  FUN_0041c7b8   (86 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c7b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478f1c);
  *param_1 = &OWL::TAppDictImp::vftable;
  *param_1 = &OWL::TAppDictPidImp::vftable;
  puVar1 = FUN_0041c994(10);
  param_1[2] = puVar1;
  param_1[1] = 10;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c994  FUN_0041c994   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c994(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new_array();
  memset(puVar1,0,param_1 << 3);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c9c0  FUN_0041c9c0   (14 bytes)   [unnamed]
void __stdcall FUN_0041c9c0(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c9d0  FUN_0041c9d0   (69 bytes)   [unnamed]
int __cdecl FUN_0041c9d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_0041c994(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  memcpy(*(undefined4 **)(param_1 + 8),puVar2,iVar1 << 3);
  FUN_0041c9c0();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ca18  FUN_0041ca18   (126 bytes)   [unnamed]
int * __cdecl FUN_0041ca18(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x478f64);
  puVar1 = (undefined4 *)FUN_0041c4a0();
  local_8 = (int *)FUN_0041c6e8(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      puVar2 = FUN_0041c4a0();
      FUN_004398dc(local_8,0,(uint *)"ALIAS",&local_30,puVar2);
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cc9c  FUN_0041cc9c   (82 bytes)   [unnamed]
uint * __cdecl FUN_0041cc9c(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479014);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00428078(*param_1,5);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cd0c  FUN_0041cd0c   (113 bytes)   [unnamed]
uint * __cdecl FUN_0041cd0c(uint *param_1,int param_2,int param_3,byte param_4,byte param_5,void *param_6)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479038);
  FUN_00428420(param_1);
  pHVar1 = CreateBitmap(param_2,param_3,(uint)param_4,(uint)param_5,param_6);
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cd80  FUN_0041cd80   (137 bytes)   [unnamed]
uint * __cdecl FUN_0041cd80(uint *param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47905c);
  FUN_00428420(param_1);
  if (param_5 == '\0') {
    pHVar1 = CreateCompatibleBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  else {
    pHVar1 = CreateDiscardableBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ce0c  FUN_0041ce0c   (71 bytes)   [unnamed]
uint * __cdecl FUN_0041ce0c(uint *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479080);
  FUN_00428420(param_1);
  *param_1 = 0;
  FUN_0041d164(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cf04  FUN_0041cf04   (137 bytes)   [unnamed]
uint * __cdecl FUN_0041cf04(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x4790b4);
  FUN_00428420(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_0042ed5c(local_c,param_2,'\0');
    FUN_0041d0c0(param_1,param_2,puVar1);
    OWL::TGdiObject::_dtor(local_c,0);
  }
  else {
    FUN_0041d0c0(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d038  FUN_0041d038   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_0041d038(undefined4 *param_1)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  
  GetObjectA((HANDLE)*param_1,0x18,local_1c);
  return local_18;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d060  FUN_0041d060   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_0041d060(undefined4 *param_1)

{
  undefined1 local_1c [8];
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_1,0x18,local_1c);
  return local_14;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d088  FUN_0041d088   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041d088(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_2,0x18,local_1c);
  *param_1 = local_18;
  param_1[1] = local_14;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d0c0  FUN_0041d0c0   (164 bytes)   [unnamed]
void __cdecl FUN_0041d0c0(uint *param_1,int param_2,uint *param_3)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x479118);
  FUN_0043942c((int *)local_2c);
  FUN_00421d74((undefined4*)local_2c,param_3,0);
  RealizePalette(local_2c[0]);
  pHVar1 = CreateDIBitmap(local_2c[0],*(BITMAPINFOHEADER **)(param_2 + 9),4,
                          *(void **)(param_2 + 0x15),*(BITMAPINFO **)(param_2 + 9),
                          (uint)*(ushort *)(param_2 + 0x1d));
  *param_1 = (uint)pHVar1;
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,5);
  OWL::TWindowDC::_dtor((int *)local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d164  FUN_0041d164   (526 bytes)   [unnamed]
void __cdecl FUN_0041d164(uint *param_1,uint *param_2)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_d0 [4];
  int local_cc;
  int local_c8;
  short local_c0;
  short local_be;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  HDC local_7c [10];
  HDC local_54 [10];
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x479194);
  local_90 = 8;
  FUN_0042b8b0((int *)local_2c);
  local_84 = local_84 + 3;
  local_90 = 0x20;
  FUN_0042b8b0((int *)local_54);
  local_84 = local_84 + 3;
  local_90 = 0x14;
  GetObjectA((HANDLE)*param_2,0x18,local_d0);
  if ((local_c0 == 1) && (local_be == 1)) {
    pHVar1 = CreateBitmap(local_cc,local_c8,1,1,(void *)0x0);
    *param_1 = (uint)pHVar1;
  }
  else {
    local_90 = 0x2c;
    FUN_0043942c((int *)local_7c);
    local_84 = local_84 + 3;
    local_90 = 0x38;
    pHVar1 = CreateCompatibleBitmap(local_7c[0],local_cc,local_c8);
    *param_1 = (uint)pHVar1;
    local_84 = local_84 + -3;
    OWL::TWindowDC::_dtor((int *)local_7c,0);
    local_90 = 0x14;
  }
  FUN_00427974((int *)param_1,0x7fe3);
  FUN_00428078(*param_1,5);
  FUN_0042ba18((undefined4*)local_2c,param_2);
  FUN_0042ba18((undefined4*)local_54,param_1);
  local_a8 = 0;
  local_a4 = 0;
  local_b0 = local_cc;
  local_ac = local_c8;
  local_b8 = 0;
  local_b4 = 0;
  BitBlt(local_54[0],0,0,local_cc,local_c8,local_2c[0],0,0,0xcc0020);
  local_84 = local_84 + -3;
  OWL::TMemoryDC::_dtor((int *)local_54,2);
  local_84 = local_84 + -3;
  OWL::TMemoryDC::_dtor((int *)local_2c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d8e0  FUN_0041d8e0   (64 bytes)   [unnamed]
void __stdcall FUN_0041d8e0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479201);
  FUN_0044ecbc((undefined4 *)&DAT_0048c5c8,(uint *)"uxtheme.dll",'\x01','\0','\x01');
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d920  FUN_0041d920   (49 bytes)   [unnamed]
void __stdcall FUN_0041d920(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479215);
  OWL::TModule::_dtor((undefined4 *)&DAT_0048c5c8,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d99c  FUN_0041d99c   (330 bytes)   [unnamed]
int * __cdecl FUN_0041d99c(int *param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47927c);
  FUN_004240d0(param_1,param_3);
  *param_1 = (int)&OWL::TButtonGadget::vftable;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(char *)((int)param_1 + 0x57) = param_7;
  if (param_7 == '\0') {
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_0042aea0(param_2);
    }
    param_1[0x11] = (int)param_2;
    param_1[0x16] = -1;
    param_1[0x17] = 4;
  }
  else {
    param_1[0x11] = 0;
    param_1[0x16] = (int)param_2;
    param_1[0x17] = 1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x15) = param_4 << 4 | *(byte *)(param_1 + 0x15) & 0xf;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(byte *)(param_1 + 0x15) = param_6 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 1;
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) & 0xfd;
  (**(code **)(*param_1 + 4))();
  FUN_0041dbbc((int)param_1,2);
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dbbc  FUN_0041dbbc   (95 bytes)   [unnamed]
void __cdecl FUN_0041dbbc(int param_1,byte param_2)

{
  bool bVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar1 = FUN_0041b9e4();
  if (!bVar1) {
    *(byte *)(param_1 + 0x55) = param_2 & 0xf | *(byte *)(param_1 + 0x55) & 0xf0;
    local_c = 2;
    local_14 = 2;
    local_10 = ((int)((uint)*(byte *)(param_1 + 0x55) << 0x1c) >> 0x1c) + 1;
    local_8 = local_10;
    FUN_00424310(param_1,&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dcdc  FUN_0041dcdc   (334 bytes)   [unnamed]
void __cdecl FUN_0041dcdc(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
    if (*(int *)((int)param_1 + 6) != 0) {
      piVar4 = (int *)0x0;
      for (piVar2 = *(int **)(*(int *)((int)param_1 + 6) + 8);
          (piVar2 != (int *)0x0 && (piVar2 != param_1)); piVar2 = *(int **)((int)piVar2 + 0x3e)) {
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar1 = FUN_00468488((int)piVar2,iVar3,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
        if ((piVar1 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar1 + 0x15) << 0x18) >> 0x1c != 3)))) {
          piVar4 = (int *)0x0;
        }
        else if (piVar4 == (int *)0x0) {
          piVar4 = piVar1;
        }
      }
      piVar2 = param_1;
      if (piVar4 == (int *)0x0) {
        piVar4 = param_1;
      }
      while (piVar1 = piVar2, *(int *)((int)piVar1 + 0x3e) != 0) {
        piVar2 = *(int **)((int)piVar1 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar2 = FUN_00468488((int)piVar2,iVar3,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
        if ((piVar2 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 3)))) break;
      }
      while( true ) {
        if ((int)((uint)*(byte *)(piVar4 + 0x15) << 0x1c) >> 0x1c == 1) {
          *(byte *)(piVar4 + 0x15) = *(byte *)(piVar4 + 0x15) & 0xf0;
          FUN_0042477c((int)piVar4);
          FUN_004247c8((int)piVar4);
        }
        if (piVar1 == piVar4) break;
        piVar2 = *(int **)((int)piVar4 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar4 = FUN_00468488((int)piVar2,iVar3,(int *)&DAT_0041d680,(int *)&DAT_0041d840,0);
      }
    }
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0 | 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041de2c  FUN_0041de2c   (97 bytes)   [unnamed]
void __cdecl FUN_0041de2c(int *param_1,int param_2)

{
  if (param_2 != (int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c) {
    if ((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 1) ||
        ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 3)) && (param_2 == 1)) {
      FUN_0041dcdc(param_1);
    }
    else {
      *(byte *)(param_1 + 0x15) = (byte)param_2 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
    }
    FUN_0042477c((int)param_1);
    FUN_004247c8((int)param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e2d0  FUN_0041e2d0   (20 bytes)   [unnamed]
void __cdecl FUN_0041e2d0(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x57) != '\0') {
    *(undefined4 *)(param_1 + 0x58) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e4bc  FUN_0041e4bc   (110 bytes)   [unnamed]
undefined * __stdcall FUN_0041e4bc(void)

{
  if (0x20 < DAT_0048c5d0) {
    if (DAT_004791f0 == '\0') {
      FUN_0044ff60((int *)&DAT_0048c5d5,0x48c5c8,"OpenThemeData");
      FUN_0044ff60((int *)&DAT_0048c5d9,0x48c5c8,"CloseThemeData");
      FUN_0044ff60((int *)&DAT_0048c5dd,0x48c5c8,"DrawThemeBackground");
      DAT_004791f0 = DAT_004791f0 + '\x01';
    }
    return &DAT_0048c5d5;
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e9bc  FUN_0041e9bc   (377 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041e9bc(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x4794d0);
  *param_1 = &OWL::TCelArray::vftable;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 1;
  if (param_3 < 1) {
    param_3 = 1;
  }
  *(int *)((int)param_1 + 0x25) = param_3;
  *(int *)((int)param_1 + 0x11) = param_3;
  if (param_4 < 1) {
    param_4 = 1;
  }
  *(int *)((int)param_1 + 0x29) = param_4;
  iVar3 = *(int *)(*(int *)(param_2 + 9) + 8);
  *(int *)((int)param_1 + 0x15) =
       *(int *)(*(int *)(param_2 + 9) + 4) / *(int *)((int)param_1 + 0x11);
  *(int *)((int)param_1 + 0x19) = iVar3 / *(int *)((int)param_1 + 0x29);
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar3 = 0;
  pvVar1 = GetStockObject(0xf);
  FUN_0042ecec(local_c,pvVar1,iVar3);
  puVar2 = (uint *)operator_new();
  if (puVar2 != (uint *)0x0) {
    FUN_0041cf04(puVar2,param_2,local_c);
  }
  param_1[1] = puVar2;
  OWL::TGdiObject::_dtor(local_c,0);
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eb38  FUN_0041eb38   (234 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041eb38(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479524);
  *param_1 = &OWL::TCelArray::vftable;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = *param_2;
  *(undefined4 *)((int)param_1 + 0x19) = param_2[1];
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(int *)((int)param_1 + 0x11) = param_4;
  *(undefined4 *)((int)param_1 + 0x1d) = param_5;
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  if (param_6 < 1) {
    param_6 = 1;
  }
  *(int *)((int)param_1 + 0x29) = param_6;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[1] = 0;
  FUN_0041f14c((int)param_1,*(int *)((int)param_1 + 0x11));
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ec8c  FUN_0041ec8c   (57 bytes)   [unnamed]
int * __cdecl FUN_0041ec8c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_2 + 0x2d);
  }
  iVar1 = *(int *)(param_2 + 0x19);
  iVar2 = *(int *)(param_2 + 0xd);
  *param_1 = param_3 * *(int *)(param_2 + 0x15) + *(int *)(param_2 + 9);
  param_1[1] = iVar1 * param_4 + iVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ecc8  FUN_0041ecc8   (124 bytes)   [unnamed]
int * __cdecl FUN_0041ecc8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 < 0) {
    param_4 = *(int *)(param_2 + 0x2d);
  }
  iVar4 = *(int *)(param_2 + 0x19) * param_4 + *(int *)(param_2 + 0xd);
  iVar3 = param_3 * *(int *)(param_2 + 0x15) + *(int *)(param_2 + 9);
  iVar1 = *(int *)(param_2 + 0x19);
  iVar2 = *(int *)(param_2 + 0x15);
  *param_1 = iVar3;
  param_1[1] = iVar4;
  param_1[2] = iVar2 + iVar3;
  param_1[3] = iVar1 + iVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ed44  FUN_0041ed44   (150 bytes)   [unnamed]
undefined4 __cdecl FUN_0041ed44(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c [2];
  int local_14 [2];
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_0041d038(param_2);
  local_c = *(int *)(param_1 + 0x15);
  local_8 = *(undefined4 *)(param_1 + 0x19);
  iVar1 = iVar1 / local_c;
  uVar2 = FUN_0041f10c(param_1,iVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    FUN_0041d088(local_1c,param_2);
    piVar3 = local_1c;
    FUN_0041ec8c(local_14,param_1,*(int *)(param_1 + 0x25),0);
    FUN_0041effc(*(uint **)(param_1 + 4),param_2,local_14,piVar3,iVar4,iVar5);
    uVar2 = *(undefined4 *)(param_1 + 0x25);
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + iVar1;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eddc  FUN_0041eddc   (159 bytes)   [unnamed]
undefined4 __cdecl FUN_0041eddc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((*(int *)(param_1 + 0x11) <= *(int *)(param_1 + 0x25)) &&
     (uVar1 = FUN_0041f14c(param_1,*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x1d)),
     (char)uVar1 == '\0')) {
    return 0xffffffff;
  }
  FUN_0041ecc8(&local_28,param_1,param_3,0);
  local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
  local_18 = *(int *)(param_1 + 0x15);
  piVar2 = &local_18;
  local_10 = local_18;
  FUN_0041ec8c(local_c,param_1,*(int *)(param_1 + 0x25),0);
  FUN_0041effc(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),local_c,piVar2,local_28,local_24);
  uVar1 = *(undefined4 *)(param_1 + 0x25);
  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + 1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ee7c  FUN_0041ee7c   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_0041ee7c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c [10];
  
  iVar1 = __InitExceptBlockLDTC(0x479588);
  if (param_2 < *(int *)(param_1 + 0x25)) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else if (param_2 < *(int *)(param_1 + 0x25)) {
      iVar1 = *(int *)(param_1 + 0x25) + -1;
      if (param_2 < iVar1) {
        FUN_0041ec8c(&local_60,param_1,param_2,0);
        local_58 = local_60;
        local_54 = local_5c;
        local_40 = 8;
        FUN_0042b980((int *)local_2c,*(uint **)(param_1 + 4));
        local_34 = local_34 + 3;
        local_40 = 0x14;
        BitBlt(local_2c[0],local_58,local_54,
               ((*(int *)(param_1 + 0x25) - param_2) + -1) * *(int *)(param_1 + 0x15),
               *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_2c[0],
               local_58 + *(int *)(param_1 + 0x15),local_54,0xcc0020);
        local_34 = local_34 + -3;
        iVar1 = OWL::TMemoryDC::_dtor((int *)local_2c,2);
      }
      *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar2 = 0;
    *in_FS_OFFSET = local_50;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ef8c  FUN_0041ef8c   (111 bytes)   [unnamed]
undefined4 __cdecl FUN_0041ef8c(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x25) <= param_2)) {
    uVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
    local_18 = *(int *)(param_1 + 0x15);
    piVar3 = &local_18;
    local_10 = local_18;
    FUN_0041ec8c(local_c,param_1,param_2,0);
    uVar1 = FUN_0041effc(*(uint **)(param_1 + 4),param_3,local_c,piVar3,iVar4,iVar5);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041effc  FUN_0041effc   (270 bytes)   [unnamed]
uint __cdecl FUN_0041effc(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  HDC local_54 [10];
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x4795e4);
  FUN_0042b980((int *)local_2c,param_2);
  FUN_0042b980((int *)local_54,param_1);
  BVar1 = BitBlt(local_54[0],*param_3,param_3[1],(*param_3 + *param_4) - *param_3,
                 (param_3[1] + param_4[1]) - param_3[1],local_2c[0],param_5,param_6,0xcc0020);
  uVar2 = (uint)(BVar1 != 0);
  OWL::TMemoryDC::_dtor((int *)local_54,2);
  OWL::TMemoryDC::_dtor((int *)local_2c,2);
  *in_FS_OFFSET = local_78;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f10c  FUN_0041f10c   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_0041f10c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25) + param_2;
  if ((*(int *)(param_1 + 0x11) < iVar1) &&
     (iVar1 = FUN_0041f14c(param_1,(((*(int *)(param_1 + 0x25) + param_2) - *(int *)(param_1 + 0x11)
                                    ) / *(int *)(param_1 + 0x1d) + 1) * *(int *)(param_1 + 0x1d) +
                                   *(int *)(param_1 + 0x11)), (char)iVar1 == '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f14c  FUN_0041f14c   (528 bytes)   [unnamed]
undefined4 __cdecl FUN_0041f14c(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_a8;
  HDC local_80 [10];
  HDC local_58 [10];
  uint *local_30;
  int local_2c [10];
  
  __InitExceptBlockLDTC(0x479688);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 0;
    *in_FS_OFFSET = local_a8;
  }
  else {
    local_30 = (uint *)operator_new();
    if (local_30 != (uint *)0x0) {
      cVar6 = '\0';
      iVar5 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
      iVar4 = *(int *)(param_1 + 0x15) * param_2;
      piVar3 = FUN_0043942c(local_2c);
      FUN_0041cd80(local_30,piVar3,iVar4,iVar5,cVar6);
    }
    puVar1 = local_30;
    uVar2 = OWL::TWindowDC::_dtor(local_2c,0);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0042b980((int *)local_58,*(uint **)(param_1 + 4));
      FUN_0042b980((int *)local_80,puVar1);
      BitBlt(local_80[0],0,0,*(int *)(param_1 + 0x15) * *(int *)(param_1 + 0x11),
             *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_58[0],0,0,0xcc0020);
      FUN_0042ba5c((undefined4*)local_58);
      if (*(uint **)(param_1 + 4) != (uint *)0x0) {
        OWL::TBitmap::_dtor(*(uint **)(param_1 + 4),3);
      }
      OWL::TMemoryDC::_dtor((int *)local_80,2);
      uVar2 = OWL::TMemoryDC::_dtor((int *)local_58,2);
    }
    *(uint **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 0x11) = param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    *in_FS_OFFSET = local_a8;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f35c  FUN_0041f35c   (21 bytes)   [unnamed]
void __stdcall FUN_0041f35c(void)

{
  FUN_0041f860();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f371  FUN_0041f371   (167 bytes)   [unnamed]
HMODULE __stdcall FUN_0041f371(HANDLE param_1,LPCVOID param_2)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  CHAR *pCVar4;
  CHAR local_360 [260];
  _MEMORY_BASIC_INFORMATION local_25c;
  HMODULE local_23c;
  
  iVar1 = FUN_0041f8a0();
  if (iVar1 == 0) {
    SVar2 = VirtualQueryEx(param_1,param_2,&local_25c,0x1c);
    if (SVar2 == 0) {
      local_23c = (HMODULE)0x0;
    }
    else {
      puVar3 = &DAT_00479713;
      pCVar4 = local_360;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pCVar4 = pCVar4 + 4;
      }
      GetModuleFileNameA(local_25c.AllocationBase,local_360,0x104);
      FUN_0041f8e4();
      local_23c = local_25c.AllocationBase;
    }
  }
  return local_23c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f418  FUN_0041f418   (423 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0041f418(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPCSTR lpString2;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  char local_544 [512];
  CHAR local_344 [256];
  CHAR local_244 [256];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_134;
  CHAR local_130 [260];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x479817);
  local_2c = 1;
  *param_3 = param_2;
  memset(param_3,0,200);
  iVar1 = FUN_0041f8a0();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),"<no module>");
  }
  else {
    pcVar2 = thunk_FUN_004676d0(local_544,'\\');
    if (pcVar2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = pcVar2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_004799d8);
  }
  local_18 = 8;
  local_144 = 0x18;
  local_140 = param_2;
  local_134 = 0xff;
  iVar1 = FUN_0041f948();
  if (iVar1 == 0) {
    pcVar2 = "<no symbol>";
  }
  else {
    pcVar2 = local_130;
    iVar1 = FUN_0041f998();
    if (iVar1 == 0) {
      iVar1 = FUN_0041f9e8();
      if (iVar1 != 0) {
        pcVar2 = local_244;
      }
    }
    else {
      pcVar2 = local_244;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,"%s + %d bytes",pcVar2,param_3[1]);
      pcVar2 = local_344;
    }
  }
  local_18 = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),pcVar2,0x80);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f5d3  FUN_0041f5d3   (62 bytes)   [unnamed]
void __stdcall FUN_0041f5d3(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47983b);
  FUN_0041f668((undefined4 *)&DAT_0048c5e4,&DAT_00479857 /* "Def" */,1,'\0');
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f611  FUN_0041f611   (86 bytes)   [unnamed]
void __stdcall FUN_0041f611(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47984f);
  if (DAT_00479708 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0048c5f5,2);
    DAT_00479708 = '\0';
  }
  OWL::TDiagBase::_dtor((undefined4 *)&DAT_0048c5e4,0);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f668  FUN_0041f668   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f668(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479ad8);
  FUN_0041f6e4(param_1,param_2,param_3,param_4);
  *param_1 = &OWL::TDiagGroupDef::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f6e4  FUN_0041f6e4   (122 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f6e4(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479b00);
  *param_1 = &OWL::TDiagBase::vftable;
  *(undefined4 *)((int)param_1 + 5) = param_2;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(byte *)(param_1 + 1) = param_3 & 1 | *(byte *)(param_1 + 1) & 0xfe;
  *(byte *)(param_1 + 1) = param_4 * '\x02' | *(byte *)(param_1 + 1) & 1;
  FUN_0041f7ac(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f7ac  FUN_0041f7ac   (44 bytes)   [unnamed]
void __cdecl FUN_0041f7ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_00479aec;
  if (DAT_00479aec != 0) {
    for (; *(int *)(iVar1 + 0xd) != 0; iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = param_1;
    return;
  }
  DAT_00479aec = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f7d8  FUN_0041f7d8   (47 bytes)   [unnamed]
void __cdecl FUN_0041f7d8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00479aec;
  if (param_1 != DAT_00479aec) {
    for (; param_1 != *(int *)(iVar1 + 0xd); iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    return;
  }
  DAT_00479aec = *(undefined4 *)(param_1 + 0xd);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f808  FUN_0041f808   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0041f808(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479b24);
  if (DAT_00479708 == '\0') {
    FUN_0044ecbc((undefined4 *)&DAT_0048c5f5,(uint *)"imagehlp.dll",'\x01','\x01','\0');
    DAT_00479708 = DAT_00479708 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c5f5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f860  FUN_0041f860   (62 bytes)   [unnamed]
void __stdcall FUN_0041f860(void)

{
  undefined *puVar1;
  
  if (DAT_00479709 == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c602,(int)puVar1,"SymFunctionTableAccess");
    DAT_00479709 = DAT_00479709 + '\x01';
  }
  ((code *)DAT_0048c602)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f8a0  FUN_0041f8a0   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0041f8a0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970a == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c606,(int)puVar1,"SymGetModuleInfo");
    DAT_0047970a = DAT_0047970a + '\x01';
  }
  uVar2 = ((code *)DAT_0048c606)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f8e4  FUN_0041f8e4   (100 bytes)   [unnamed]
void __stdcall FUN_0041f8e4(void)

{
  undefined *puVar1;
  
  if (DAT_0047970b == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c60a,(int)puVar1,"SymLoadModule");
    DAT_0047970b = DAT_0047970b + '\x01';
  }
  ((code *)DAT_0048c60a)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f948  FUN_0041f948   (79 bytes)   [unnamed]
undefined4 __stdcall FUN_0041f948(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970c == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c60e,(int)puVar1,"SymGetSymFromAddr");
    DAT_0047970c = DAT_0047970c + '\x01';
  }
  uVar2 = ((code *)DAT_0048c60e)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f998  FUN_0041f998   (79 bytes)   [unnamed]
undefined4 __stdcall FUN_0041f998(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970d == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c612,(int)puVar1,"UnDecorateSymbolName");
    DAT_0047970d = DAT_0047970d + '\x01';
  }
  uVar2 = ((code *)DAT_0048c612)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f9e8  FUN_0041f9e8   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0041f9e8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0047970e == '\0') {
    puVar1 = FUN_0041f808();
    FUN_0044ff60((int *)&DAT_0048c616,(int)puVar1,"SymUnDName");
    DAT_0047970e = DAT_0047970e + '\x01';
  }
  uVar2 = ((code *)DAT_0048c616)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fb18  FUN_0041fb18   (14 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_0041fb18(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fb28  FUN_0041fb28   (14 bytes)   [unnamed]
void __stdcall FUN_0041fb28(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fcdc  FUN_0041fcdc   (130 bytes)   [unnamed]
char * __cdecl FUN_0041fcdc(char *param_1,HWND param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x479b90);
  FUN_0041fe58(param_1,param_2);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    puVar2 = &LAB_0041fdbc;
    uVar1 = 0;
    FUN_0041fe74(local_10,0x7fd9);
    FUN_00471ae8((uint *)&DAT_0041fd60,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fe58  FUN_0041fe58   (28 bytes)   [unnamed]
void __cdecl FUN_0041fe58(undefined4 param_1,HWND param_2)

{
  BOOL BVar1;
  
  BVar1 = OpenClipboard(param_2);
  *(bool *)param_1 = BVar1 != 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fe74  FUN_0041fe74   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041fe74(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x479bc0);
  FUN_004230f0(param_1,param_2,DAT_00484890);
  *param_1 = &OWL::TXClipboard::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

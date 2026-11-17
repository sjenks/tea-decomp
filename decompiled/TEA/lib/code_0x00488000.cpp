// TEA.exe — runtime / library code "code_0x00488000"
// 60 functions, 0x004880b4..0x0048be18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004880b4  FUN_004880b4   (43 bytes)   [unnamed]
undefined4 * __cdecl FUN_004880b4(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new_array();
  memset(puVar1,0,param_1 << 3);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004880e0  FUN_004880e0   (14 bytes)   [unnamed]
void __stdcall FUN_004880e0(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004880f0  FUN_004880f0   (69 bytes)   [unnamed]
int __cdecl FUN_004880f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_004880b4(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  memcpy(*(undefined4 **)(param_1 + 8),puVar2,iVar1 << 3);
  FUN_004880e0();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00488138  FUN_00488138   (126 bytes)   [unnamed]
int * __cdecl FUN_00488138(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x504834);
  puVar1 = (undefined4 *)FUN_00487bc0();
  local_8 = (int *)FUN_00487e08(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      puVar2 = FUN_00487bc0();
      FUN_004a8c70(local_8,0,(uint *)"ALIAS",&local_30,puVar2);
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004883bc  FUN_004883bc   (82 bytes)   [unnamed]
uint * __cdecl FUN_004883bc(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5048e4);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00493c34(*param_1,5);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048842c  FUN_0048842c   (113 bytes)   [unnamed]
uint * __cdecl FUN_0048842c(uint *param_1,int param_2,int param_3,byte param_4,byte param_5,void *param_6)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504908);
  FUN_00493fdc(param_1);
  pHVar1 = CreateBitmap(param_2,param_3,(uint)param_4,(uint)param_5,param_6);
  *param_1 = (uint)pHVar1;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004884a0  FUN_004884a0   (137 bytes)   [unnamed]
uint * __cdecl FUN_004884a0(uint *param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50492c);
  FUN_00493fdc(param_1);
  if (param_5 == '\0') {
    pHVar1 = CreateCompatibleBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  else {
    pHVar1 = CreateDiscardableBitmap((HDC)*param_2,param_3,param_4);
    *param_1 = (uint)pHVar1;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048852c  FUN_0048852c   (71 bytes)   [unnamed]
uint * __cdecl FUN_0048852c(uint *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504950);
  FUN_00493fdc(param_1);
  *param_1 = 0;
  FUN_0048882c(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004885cc  FUN_004885cc   (137 bytes)   [unnamed]
uint * __cdecl FUN_004885cc(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x504984);
  FUN_00493fdc(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_0049b104(local_c,param_2,'\0');
    FUN_00488788(param_1,param_2,puVar1);
    OWL::TGdiObject::_dtor(local_c,0);
  }
  else {
    FUN_00488788(param_1,param_2,param_3);
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488700  FUN_00488700   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_00488700(undefined4 *param_1)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  
  GetObjectA((HANDLE)*param_1,0x18,local_1c);
  return local_18;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488728  FUN_00488728   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_00488728(undefined4 *param_1)

{
  undefined1 local_1c [8];
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_1,0x18,local_1c);
  return local_14;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488750  FUN_00488750   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_00488750(undefined4 *param_1,undefined4 *param_2)

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
// 0x00488788  FUN_00488788   (164 bytes)   [unnamed]
void __cdecl FUN_00488788(uint *param_1,int param_2,uint *param_3)

{
  HBITMAP pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x5049e8);
  FUN_004a8760((int *)local_2c);
  FUN_0048d9c0((undefined4*)local_2c,param_3,0);
  RealizePalette(local_2c[0]);
  pHVar1 = CreateDIBitmap(local_2c[0],*(BITMAPINFOHEADER **)(param_2 + 9),4,
                          *(void **)(param_2 + 0x15),*(BITMAPINFO **)(param_2 + 9),
                          (uint)*(ushort *)(param_2 + 0x1d));
  *param_1 = (uint)pHVar1;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  OWL::TWindowDC::_dtor((int *)local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048882c  FUN_0048882c   (526 bytes)   [unnamed]
void __cdecl FUN_0048882c(uint *param_1,uint *param_2)

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
  
  __InitExceptBlockLDTC(0x504a64);
  local_90 = 8;
  FUN_00497758((int *)local_2c);
  local_84 = local_84 + 3;
  local_90 = 0x20;
  FUN_00497758((int *)local_54);
  local_84 = local_84 + 3;
  local_90 = 0x14;
  GetObjectA((HANDLE)*param_2,0x18,local_d0);
  if ((local_c0 == 1) && (local_be == 1)) {
    pHVar1 = CreateBitmap(local_cc,local_c8,1,1,(void *)0x0);
    *param_1 = (uint)pHVar1;
  }
  else {
    local_90 = 0x2c;
    FUN_004a8760((int *)local_7c);
    local_84 = local_84 + 3;
    local_90 = 0x38;
    pHVar1 = CreateCompatibleBitmap(local_7c[0],local_cc,local_c8);
    *param_1 = (uint)pHVar1;
    local_84 = local_84 + -3;
    OWL::TWindowDC::_dtor((int *)local_7c,0);
    local_90 = 0x14;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  FUN_004978c0((undefined4*)local_2c,param_2);
  FUN_004978c0((undefined4*)local_54,param_1);
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
// 0x00488bbc  FUN_00488bbc   (64 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00488bbc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504ac1);
  FUN_004c08dc((undefined4 *)&DAT_0051b110,(uint *)"uxtheme.dll",'\x01','\0','\x01');
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488bfc  FUN_00488bfc   (49 bytes)   [unnamed]
void __stdcall FUN_00488bfc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504ad5);
  OWL::TModule::_dtor((undefined4 *)&DAT_0051b110,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488c78  FUN_00488c78   (330 bytes)   [unnamed]
int * __cdecl FUN_00488c78(int *param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5, byte param_6,char param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504b3c);
  FUN_0048fcec(param_1,param_3);
  *param_1 = (int)&OWL::TButtonGadget::vftable;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(char *)((int)param_1 + 0x57) = param_7;
  if (param_7 == '\0') {
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_00496d48(param_2);
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
  FUN_00488e74((int)param_1,2);
  *(byte *)((int)param_1 + 0x56) = *(byte *)((int)param_1 + 0x56) | 4;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488e74  FUN_00488e74   (95 bytes)   [unnamed]
void __cdecl FUN_00488e74(int param_1,byte param_2)

{
  bool bVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  bVar1 = FUN_004875a8();
  if (!bVar1) {
    *(byte *)(param_1 + 0x55) = param_2 & 0xf | *(byte *)(param_1 + 0x55) & 0xf0;
    local_c = 2;
    local_14 = 2;
    local_10 = ((int)((uint)*(byte *)(param_1 + 0x55) << 0x1c) >> 0x1c) + 1;
    local_8 = local_10;
    FUN_0048ff24(param_1,&local_14);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488f94  FUN_00488f94   (334 bytes)   [unnamed]
void __cdecl FUN_00488f94(int *param_1)

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
        piVar1 = FUN_004dd744((int)piVar2,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
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
        piVar2 = FUN_004dd744((int)piVar2,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
        if ((piVar2 == (int *)0x0) ||
           (((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 1 &&
            ((int)((uint)*(byte *)(piVar2 + 0x15) << 0x18) >> 0x1c != 3)))) break;
      }
      while( true ) {
        if ((int)((uint)*(byte *)(piVar4 + 0x15) << 0x1c) >> 0x1c == 1) {
          *(byte *)(piVar4 + 0x15) = *(byte *)(piVar4 + 0x15) & 0xf0;
          FUN_004903b8((int)piVar4);
          FUN_00490404((int)piVar4);
        }
        if (piVar1 == piVar4) break;
        piVar2 = *(int **)((int)piVar4 + 0x3e);
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        piVar4 = FUN_004dd744((int)piVar2,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_0042850c,0);
      }
    }
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0 | 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004890e4  FUN_004890e4   (97 bytes)   [unnamed]
void __cdecl FUN_004890e4(int *param_1,int param_2)

{
  if (param_2 != (int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c) {
    if ((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 1) ||
        ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c == 3)) && (param_2 == 1)) {
      FUN_00488f94(param_1);
    }
    else {
      *(byte *)(param_1 + 0x15) = (byte)param_2 & 0xf | *(byte *)(param_1 + 0x15) & 0xf0;
    }
    FUN_004903b8((int)param_1);
    FUN_00490404((int)param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489588  FUN_00489588   (20 bytes)   [unnamed]
void __cdecl FUN_00489588(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x57) != '\0') {
    *(undefined4 *)(param_1 + 0x58) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489774  FUN_00489774   (110 bytes)   [unnamed]
undefined * __stdcall FUN_00489774(void)

{
  if (0x20 < DAT_0051b118) {
    if (DAT_00504ab0 == '\0') {
      FUN_004c1b80((int *)&DAT_0051b11d,0x51b110,"OpenThemeData");
      FUN_004c1b80((int *)&DAT_0051b121,0x51b110,"CloseThemeData");
      FUN_004c1b80((int *)&DAT_0051b125,0x51b110,"DrawThemeBackground");
      DAT_00504ab0 = DAT_00504ab0 + '\x01';
    }
    return &DAT_0051b11d;
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489c74  FUN_00489c74   (377 bytes)   [unnamed]
undefined4 * __cdecl FUN_00489c74(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x504d90);
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
  FUN_0049b094(local_c,pvVar1,iVar3);
  puVar2 = (uint *)operator_new();
  if (puVar2 != (uint *)0x0) {
    FUN_004885cc(puVar2,param_2,local_c);
  }
  param_1[1] = puVar2;
  OWL::TGdiObject::_dtor(local_c,0);
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489df0  FUN_00489df0   (234 bytes)   [unnamed]
undefined4 * __cdecl FUN_00489df0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x504de4);
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
  FUN_0048a404((int)param_1,*(int *)((int)param_1 + 0x11));
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489f44  FUN_00489f44   (57 bytes)   [unnamed]
int * __cdecl FUN_00489f44(int *param_1,int param_2,int param_3,int param_4)

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
// 0x00489f80  FUN_00489f80   (124 bytes)   [unnamed]
int * __cdecl FUN_00489f80(int *param_1,int param_2,int param_3,int param_4)

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
// 0x00489ffc  FUN_00489ffc   (150 bytes)   [unnamed]
undefined4 __cdecl FUN_00489ffc(int param_1,uint *param_2)

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
  
  iVar1 = FUN_00488700(param_2);
  local_c = *(int *)(param_1 + 0x15);
  local_8 = *(undefined4 *)(param_1 + 0x19);
  iVar1 = iVar1 / local_c;
  uVar2 = FUN_0048a3c4(param_1,iVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    FUN_00488750(local_1c,param_2);
    piVar3 = local_1c;
    FUN_00489f44(local_14,param_1,*(int *)(param_1 + 0x25),0);
    FUN_0048a2b4(*(uint **)(param_1 + 4),param_2,local_14,piVar3,iVar4,iVar5);
    uVar2 = *(undefined4 *)(param_1 + 0x25);
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + iVar1;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a094  FUN_0048a094   (159 bytes)   [unnamed]
undefined4 __cdecl FUN_0048a094(int param_1,int param_2,int param_3)

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
     (uVar1 = FUN_0048a404(param_1,*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x1d)),
     (char)uVar1 == '\0')) {
    return 0xffffffff;
  }
  FUN_00489f80(&local_28,param_1,param_3,0);
  local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
  local_18 = *(int *)(param_1 + 0x15);
  piVar2 = &local_18;
  local_10 = local_18;
  FUN_00489f44(local_c,param_1,*(int *)(param_1 + 0x25),0);
  FUN_0048a2b4(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),local_c,piVar2,local_28,local_24);
  uVar1 = *(undefined4 *)(param_1 + 0x25);
  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + 1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a134  FUN_0048a134   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_0048a134(int param_1,int param_2)

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
  
  iVar1 = __InitExceptBlockLDTC(0x504e48);
  if (param_2 < *(int *)(param_1 + 0x25)) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else if (param_2 < *(int *)(param_1 + 0x25)) {
      iVar1 = *(int *)(param_1 + 0x25) + -1;
      if (param_2 < iVar1) {
        FUN_00489f44(&local_60,param_1,param_2,0);
        local_58 = local_60;
        local_54 = local_5c;
        local_40 = 8;
        FUN_00497828((int *)local_2c,*(uint **)(param_1 + 4));
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
// 0x0048a244  FUN_0048a244   (111 bytes)   [unnamed]
undefined4 __cdecl FUN_0048a244(int param_1,int param_2,uint *param_3)

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
    FUN_00489f44(local_c,param_1,param_2,0);
    uVar1 = FUN_0048a2b4(*(uint **)(param_1 + 4),param_3,local_c,piVar3,iVar4,iVar5);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a2b4  FUN_0048a2b4   (270 bytes)   [unnamed]
uint __cdecl FUN_0048a2b4(uint *param_1,uint *param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  HDC local_54 [10];
  HDC local_2c [10];
  
  __InitExceptBlockLDTC(0x504ea4);
  FUN_00497828((int *)local_2c,param_2);
  FUN_00497828((int *)local_54,param_1);
  BVar1 = BitBlt(local_54[0],*param_3,param_3[1],(*param_3 + *param_4) - *param_3,
                 (param_3[1] + param_4[1]) - param_3[1],local_2c[0],param_5,param_6,0xcc0020);
  uVar2 = (uint)(BVar1 != 0);
  OWL::TMemoryDC::_dtor((int *)local_54,2);
  OWL::TMemoryDC::_dtor((int *)local_2c,2);
  *in_FS_OFFSET = local_78;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a3c4  FUN_0048a3c4   (64 bytes)   [unnamed]
undefined4 __cdecl FUN_0048a3c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x25) + param_2;
  if ((*(int *)(param_1 + 0x11) < iVar1) &&
     (iVar1 = FUN_0048a404(param_1,(((*(int *)(param_1 + 0x25) + param_2) - *(int *)(param_1 + 0x11)
                                    ) / *(int *)(param_1 + 0x1d) + 1) * *(int *)(param_1 + 0x1d) +
                                   *(int *)(param_1 + 0x11)), (char)iVar1 == '\0')) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a404  FUN_0048a404   (528 bytes)   [unnamed]
undefined4 __cdecl FUN_0048a404(int param_1,int param_2)

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
  
  __InitExceptBlockLDTC(0x504f48);
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
      piVar3 = FUN_004a8760(local_2c);
      FUN_004884a0(local_30,piVar3,iVar4,iVar5,cVar6);
    }
    puVar1 = local_30;
    uVar2 = OWL::TWindowDC::_dtor(local_2c,0);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00497828((int *)local_58,*(uint **)(param_1 + 4));
      FUN_00497828((int *)local_80,puVar1);
      BitBlt(local_80[0],0,0,*(int *)(param_1 + 0x15) * *(int *)(param_1 + 0x11),
             *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),local_58[0],0,0,0xcc0020);
      FUN_00497904((undefined4*)local_58);
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
// 0x0048a614  FUN_0048a614   (21 bytes)   [unnamed]
void __stdcall FUN_0048a614(void)

{
  FUN_0048ab18();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a629  FUN_0048a629   (167 bytes)   [unnamed]
HMODULE __stdcall FUN_0048a629(HANDLE param_1,LPCVOID param_2)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  CHAR *pCVar4;
  CHAR local_360 [260];
  _MEMORY_BASIC_INFORMATION local_25c;
  HMODULE local_23c;
  
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    SVar2 = VirtualQueryEx(param_1,param_2,&local_25c,0x1c);
    if (SVar2 == 0) {
      local_23c = (HMODULE)0x0;
    }
    else {
      puVar3 = &DAT_00504fd3;
      pCVar4 = local_360;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pCVar4 = pCVar4 + 4;
      }
      GetModuleFileNameA(local_25c.AllocationBase,local_360,0x104);
      FUN_0048ab9c();
      local_23c = local_25c.AllocationBase;
    }
  }
  return local_23c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a6d0  FUN_0048a6d0   (423 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0048a6d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
  
  __InitExceptBlockLDTC(0x5050d7);
  local_2c = 1;
  *param_3 = param_2;
  memset(param_3,0,200);
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),"<no module>");
  }
  else {
    pcVar2 = thunk_FUN_004dc924(local_544,'\\');
    if (pcVar2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = pcVar2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_00505298);
  }
  local_18 = 8;
  local_144 = 0x18;
  local_140 = param_2;
  local_134 = 0xff;
  iVar1 = FUN_0048ac00();
  if (iVar1 == 0) {
    pcVar2 = "<no symbol>";
  }
  else {
    pcVar2 = local_130;
    iVar1 = FUN_0048ac50();
    if (iVar1 == 0) {
      iVar1 = FUN_0048aca0();
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
// 0x0048a88b  FUN_0048a88b   (62 bytes)   [unnamed]
void __stdcall FUN_0048a88b(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5050fb);
  FUN_0048a920((undefined4 *)&DAT_0051b12c,&DAT_00505117 /* "Def" */,1,'\0');
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a8c9  FUN_0048a8c9   (86 bytes)   [unnamed]
void __stdcall FUN_0048a8c9(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50510f);
  if (DAT_00504fc8 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b13d,2);
    DAT_00504fc8 = '\0';
  }
  OWL::TDiagBase::_dtor((undefined4 *)&DAT_0051b12c,0);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a920  FUN_0048a920   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048a920(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505398);
  FUN_0048a99c(param_1,param_2,param_3,param_4);
  *param_1 = &OWL::TDiagGroupDef::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a99c  FUN_0048a99c   (122 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048a99c(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5053c0);
  *param_1 = &OWL::TDiagBase::vftable;
  *(undefined4 *)((int)param_1 + 5) = param_2;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(byte *)(param_1 + 1) = param_3 & 1 | *(byte *)(param_1 + 1) & 0xfe;
  *(byte *)(param_1 + 1) = param_4 * '\x02' | *(byte *)(param_1 + 1) & 1;
  FUN_0048aa64(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048aa64  FUN_0048aa64   (44 bytes)   [unnamed]
void __cdecl FUN_0048aa64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_005053ac;
  if (DAT_005053ac != 0) {
    for (; *(int *)(iVar1 + 0xd) != 0; iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = param_1;
    return;
  }
  DAT_005053ac = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048aa90  FUN_0048aa90   (47 bytes)   [unnamed]
void __cdecl FUN_0048aa90(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_005053ac;
  if (param_1 != DAT_005053ac) {
    for (; param_1 != *(int *)(iVar1 + 0xd); iVar1 = *(int *)(iVar1 + 0xd)) {
    }
    *(undefined4 *)(iVar1 + 0xd) = *(undefined4 *)(param_1 + 0xd);
    return;
  }
  DAT_005053ac = *(undefined4 *)(param_1 + 0xd);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048aac0  FUN_0048aac0   (88 bytes)   [unnamed]
undefined * __stdcall FUN_0048aac0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5053e4);
  if (DAT_00504fc8 == '\0') {
    FUN_004c08dc((undefined4 *)&DAT_0051b13d,(uint *)"imagehlp.dll",'\x01','\x01','\0');
    DAT_00504fc8 = DAT_00504fc8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b13d;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ab18  FUN_0048ab18   (62 bytes)   [unnamed]
void __stdcall FUN_0048ab18(void)

{
  undefined *puVar1;
  
  if (DAT_00504fc9 == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b14a,(int)puVar1,"SymFunctionTableAccess");
    DAT_00504fc9 = DAT_00504fc9 + '\x01';
  }
  ((code *)DAT_0051b14a)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ab58  FUN_0048ab58   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0048ab58(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00504fca == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b14e,(int)puVar1,"SymGetModuleInfo");
    DAT_00504fca = DAT_00504fca + '\x01';
  }
  uVar2 = ((code *)DAT_0051b14e)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ab9c  FUN_0048ab9c   (100 bytes)   [unnamed]
void __stdcall FUN_0048ab9c(void)

{
  undefined *puVar1;
  
  if (DAT_00504fcb == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b152,(int)puVar1,"SymLoadModule");
    DAT_00504fcb = DAT_00504fcb + '\x01';
  }
  ((code *)DAT_0051b152)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ac00  FUN_0048ac00   (79 bytes)   [unnamed]
undefined4 __stdcall FUN_0048ac00(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00504fcc == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b156,(int)puVar1,"SymGetSymFromAddr");
    DAT_00504fcc = DAT_00504fcc + '\x01';
  }
  uVar2 = ((code *)DAT_0051b156)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ac50  FUN_0048ac50   (79 bytes)   [unnamed]
undefined4 __stdcall FUN_0048ac50(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00504fcd == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b15a,(int)puVar1,"UnDecorateSymbolName");
    DAT_00504fcd = DAT_00504fcd + '\x01';
  }
  uVar2 = ((code *)DAT_0051b15a)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048aca0  FUN_0048aca0   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0048aca0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00504fce == '\0') {
    puVar1 = FUN_0048aac0();
    FUN_004c1b80((int *)&DAT_0051b15e,(int)puVar1,"SymUnDName");
    DAT_00504fce = DAT_00504fce + '\x01';
  }
  uVar2 = ((code *)DAT_0051b15e)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ace4  FUN_0048ace4   (155 bytes)   [unnamed]
void __cdecl FUN_0048ace4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
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
// 0x0048ae6c  FUN_0048ae6c   (14 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_0048ae6c(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ae7c  FUN_0048ae7c   (14 bytes)   [unnamed]
void __stdcall FUN_0048ae7c(void)

{
  operator_delete_array();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048aee8  FUN_0048aee8   (155 bytes)   [unnamed]
void __cdecl FUN_0048aee8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
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
// 0x0048b0c0  FUN_0048b0c0   (476 bytes)   [unnamed]
int * __cdecl FUN_0048b0c0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505470);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x15);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[1] = (int)(param_1 + 0x12);
    param_1[2] = (int)(param_1 + 0x13);
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x12] = (int)&OWL::TEventHandler::vftable;
    param_1[0x13] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x15,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x28;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x28;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x28;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x28;
  param_1[3] = (int)&OWL::TChooseColorDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_005054f8;
  *(undefined ***)param_1[2] = &PTR_LAB_00505504;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505510;
  param_1[0x10] = param_4;
  if (DAT_00505444 == 0) {
    DAT_00505444 = RegisterWindowMessageA("commdlg_SetRGBColor");
  }
  memset(param_1 + 7,0,0x24);
  param_1[7] = 0x24;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = *(uint *)param_1[0x10] | 0x10;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffdf;
  }
  else {
    param_1[0xf] = param_5;
    param_1[0xc] = param_1[0xc] | 0x20;
  }
  param_1[0xe] = 0;
  uVar1 = FUN_0048c12c((uint *)(param_1[0x10] + 8));
  param_1[10] = uVar1;
  param_1[0xb] = *(int *)(param_1[0x10] + 0xc);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b59c  FUN_0048b59c   (533 bytes)   [unnamed]
int * __cdecl FUN_0048b59c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5055c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1b);
    param_1[0x1b] = (int)(param_1 + 0x18);
    param_1[0x1c] = (int)(param_1 + 0x19);
    param_1[1] = (int)(param_1 + 0x18);
    param_1[2] = (int)(param_1 + 0x19);
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x18] = (int)&OWL::TEventHandler::vftable;
    param_1[0x19] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1b,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x40;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x40;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x40;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x40;
  param_1[3] = (int)&OWL::TChooseFontDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00505648;
  *(undefined ***)param_1[2] = &PTR_LAB_00505654;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505660;
  param_1[0x16] = param_4;
  memset(param_1 + 7,0,0x3c);
  param_1[7] = 0x3c;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[0x11] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = *(uint *)param_1[0x16] | 8;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffef;
  }
  else {
    param_1[0x10] = param_5;
    param_1[0xc] = param_1[0xc] | 0x10;
  }
  param_1[0xf] = 0;
  param_1[9] = *(int *)(param_1[0x16] + 8);
  param_1[10] = param_1[0x16] + 0xc;
  param_1[0xb] = *(int *)(param_1[0x16] + 0x48);
  uVar1 = FUN_0048c12c((uint *)(param_1[0x16] + 0x4c));
  param_1[0xd] = uVar1;
  param_1[0x12] = *(int *)(param_1[0x16] + 0x50);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_1[0x16] + 0x54);
  param_1[0x14] = *(int *)(param_1[0x16] + 0x56);
  param_1[0x15] = *(int *)(param_1[0x16] + 0x5a);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ba8c  FUN_0048ba8c   (130 bytes)   [unnamed]
char * __cdecl FUN_0048ba8c(char *param_1,HWND param_2,char param_3)

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
  
  __InitExceptBlockLDTC(0x505708);
  FUN_0048bc20(param_1,param_2);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    puVar2 = &LAB_0048bb6c;
    uVar1 = 0;
    FUN_0048bc3c(local_10,0x7fd9);
    FUN_004e7cc4((uint *)&DAT_0048bb10,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048bc08  FUN_0048bc08   (23 bytes)   [unnamed]
void __cdecl FUN_0048bc08(char *param_1)

{
  if (*param_1 != '\0') {
    CloseClipboard();
    *param_1 = '\0';
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048bc20  FUN_0048bc20   (28 bytes)   [unnamed]
void __cdecl FUN_0048bc20(undefined4 param_1,HWND param_2)

{
  BOOL BVar1;
  
  BVar1 = OpenClipboard(param_2);
  *(bool *)param_1 = BVar1 != 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048bc3c  FUN_0048bc3c   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_0048bc3c(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505738);
  FUN_0048ed90(param_1,param_2,DAT_00512a1c);
  *param_1 = &OWL::TXClipboard::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048be18  FUN_0048be18   (179 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0048be18(void)

{
  FUN_004e3c04();
  return;
}

} // namespace tea

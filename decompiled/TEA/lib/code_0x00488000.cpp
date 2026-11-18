// TEA.exe — runtime / library code "code_0x00488000"
// 52 functions, 0x004880b4..0x0048be18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
  undefined4 *src;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  src = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_004880b4(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  memcpy(*(undefined4 **)(param_1 + 8),src,iVar1 << 3);
  FUN_004880e0();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00488138  FUN_00488138   (126 bytes)   [unnamed]
int * __cdecl FUN_00488138(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *sehChainHead;
  undefined4 local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *local_8;
  
  __InitExceptBlockLDTC(0x504834);
  puVar1 = (undefined4 *)FUN_00487bc0();
  local_8 = (int *)FUN_00487e08(puVar1,param_1);
  if (local_8 == (int *)0x0) {
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      ehContext = 0x14;
      puVar2 = FUN_00487bc0();
      FUN_004a8c70(local_8,0,(uint *)"ALIAS",&local_30,puVar2);
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004883bc  FUN_004883bc   (82 bytes)   [unnamed]
uint * __cdecl FUN_004883bc(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5048e4);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_00493c34(*param_1,5);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048842c  FUN_0048842c   (113 bytes)   [unnamed]
uint * __cdecl FUN_0048842c(uint *param_1,int width,int height,byte planes,byte bitCount,void *bits)

{
  HBITMAP hBitmap;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504908);
  FUN_00493fdc(param_1);
  hBitmap = CreateBitmap(width,height,(uint)planes,(uint)bitCount,bits);
  *param_1 = (uint)hBitmap;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004884a0  FUN_004884a0   (137 bytes)   [unnamed]
uint * __cdecl FUN_004884a0(uint *param_1,undefined4 *param_2,int cx,int cy,char param_5)

{
  HBITMAP hBitmap;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50492c);
  FUN_00493fdc(param_1);
  if (param_5 == '\0') {
    hBitmap = CreateCompatibleBitmap((HDC)*param_2,cx,cy);
    *param_1 = (uint)hBitmap;
  }
  else {
    hBitmap = CreateDiscardableBitmap((HDC)*param_2,cx,cy);
    *param_1 = (uint)hBitmap;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048852c  FUN_0048852c   (71 bytes)   [unnamed]
uint * __cdecl FUN_0048852c(uint *param_1,uint *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504950);
  FUN_00493fdc(param_1);
  *param_1 = 0;
  FUN_0048882c(param_1,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004885cc  FUN_004885cc   (137 bytes)   [unnamed]
uint * __cdecl FUN_004885cc(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint gdiObject [2];
  
  __InitExceptBlockLDTC(0x504984);
  FUN_00493fdc(param_1);
  if (param_3 == (uint *)0x0) {
    puVar1 = FUN_0049b104(gdiObject,param_2,'\0');
    FUN_00488788(param_1,param_2,puVar1);
    OWL::TGdiObject::_dtor(gdiObject,0);
  }
  else {
    FUN_00488788(param_1,param_2,param_3);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488700  FUN_00488700   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_00488700(undefined4 *param_1)

{
  undefined1 pv [4];
  undefined4 local_18;
  
  GetObjectA((HANDLE)*param_1,0x18,pv);
  return local_18;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488728  FUN_00488728   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_00488728(undefined4 *param_1)

{
  undefined1 pv [8];
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_1,0x18,pv);
  return local_14;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488750  FUN_00488750   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_00488750(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 pv [4];
  undefined4 local_18;
  undefined4 local_14;
  
  GetObjectA((HANDLE)*param_2,0x18,pv);
  *param_1 = local_18;
  param_1[1] = local_14;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488788  FUN_00488788   (164 bytes)   [unnamed]
void __cdecl FUN_00488788(uint *param_1,int param_2,uint *param_3)

{
  HBITMAP hBitmap;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HDC windowDC [10];
  
  __InitExceptBlockLDTC(0x5049e8);
  FUN_004a8760((int *)windowDC);
  FUN_0048d9c0((undefined4*)windowDC,param_3,0);
  RealizePalette(windowDC[0]);
  hBitmap = CreateDIBitmap(windowDC[0],*(BITMAPINFOHEADER **)(param_2 + 9),4,
                          *(void **)(param_2 + 0x15),*(BITMAPINFO **)(param_2 + 9),
                          (uint)*(ushort *)(param_2 + 0x1d));
  *param_1 = (uint)hBitmap;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  OWL::TWindowDC::_dtor((int *)windowDC,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048882c  FUN_0048882c   (526 bytes)   [unnamed]
void __cdecl FUN_0048882c(uint *param_1,uint *param_2)

{
  HBITMAP hBitmap;
  undefined4 *sehChainHead;
  undefined1 pv [4];
  int cx;
  int cy;
  short local_c0;
  short local_be;
  undefined4 unused;
  undefined4 unused2;
  int unused3;
  int unused4;
  undefined4 unused5;
  undefined4 unused6;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HDC windowDC [10];
  HDC memoryDC [10];
  HDC memoryDC2 [10];
  
  __InitExceptBlockLDTC(0x504a64);
  ehContext = 8;
  FUN_00497758((int *)memoryDC2);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x20;
  FUN_00497758((int *)memoryDC);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  GetObjectA((HANDLE)*param_2,0x18,pv);
  if ((local_c0 == 1) && (local_be == 1)) {
    hBitmap = CreateBitmap(cx,cy,1,1,(void *)0x0);
    *param_1 = (uint)hBitmap;
  }
  else {
    ehContext = 0x2c;
    FUN_004a8760((int *)windowDC);
    ehDtorCount = ehDtorCount + 3;
    ehContext = 0x38;
    hBitmap = CreateCompatibleBitmap(windowDC[0],cx,cy);
    *param_1 = (uint)hBitmap;
    ehDtorCount = ehDtorCount + -3;
    OWL::TWindowDC::_dtor((int *)windowDC,0);
    ehContext = 0x14;
  }
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,5);
  FUN_004978c0((undefined4*)memoryDC2,param_2);
  FUN_004978c0((undefined4*)memoryDC,param_1);
  unused5 = 0;
  unused6 = 0;
  unused3 = cx;
  unused4 = cy;
  unused = 0;
  unused2 = 0;
  BitBlt(memoryDC[0],0,0,cx,cy,memoryDC2[0],0,0,0xcc0020);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)memoryDC,2);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)memoryDC2,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488bbc  FUN_00488bbc   (64 bytes)   [unnamed; function defined from prologue-scan]
void __stdcall FUN_00488bbc(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504ac1);
  OWL::TModule::TModule((undefined4 *)&DAT_0051b110,(uint *)"uxtheme.dll",'\x01','\0','\x01');
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488bfc  FUN_00488bfc   (49 bytes)   [unnamed]
void __stdcall FUN_00488bfc(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504ad5);
  OWL::TModule::_dtor((undefined4 *)&DAT_0051b110,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488e74  FUN_00488e74   (95 bytes)   [unnamed]
void __cdecl FUN_00488e74(int param_1,byte param_2)

{
  bool bVar1;
  undefined4 local_14;
  int local_10;
  undefined4 unused;
  int unused2;
  
  bVar1 = FUN_004875a8();
  if (!bVar1) {
    *(byte *)(param_1 + 0x55) = param_2 & 0xf | *(byte *)(param_1 + 0x55) & 0xf0;
    unused = 2;
    local_14 = 2;
    local_10 = ((int)((uint)*(byte *)(param_1 + 0x55) << 0x1c) >> 0x1c) + 1;
    unused2 = local_10;
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
  int x1;
  int y1;
  int local_1c [2];
  int local_14 [2];
  int local_c;
  undefined4 unused;
  
  iVar1 = FUN_00488700(param_2);
  local_c = *(int *)(param_1 + 0x15);
  unused = *(undefined4 *)(param_1 + 0x19);
  iVar1 = iVar1 / local_c;
  uVar2 = FUN_0048a3c4(param_1,iVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    x1 = 0;
    y1 = 0;
    FUN_00488750(local_1c,param_2);
    piVar3 = local_1c;
    FUN_00489f44(local_14,param_1,*(int *)(param_1 + 0x25),0);
    FUN_0048a2b4(*(uint **)(param_1 + 4),param_2,local_14,piVar3,x1,y1);
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
  int x1;
  int y1;
  int local_18;
  int unused;
  int unused2;
  int local_c [2];
  
  if ((*(int *)(param_1 + 0x11) <= *(int *)(param_1 + 0x25)) &&
     (uVar1 = FUN_0048a404(param_1,*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x1d)),
     (char)uVar1 == '\0')) {
    return 0xffffffff;
  }
  FUN_00489f80(&x1,param_1,param_3,0);
  unused = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
  local_18 = *(int *)(param_1 + 0x15);
  piVar2 = &local_18;
  unused2 = local_18;
  FUN_00489f44(local_c,param_1,*(int *)(param_1 + 0x25),0);
  FUN_0048a2b4(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),local_c,piVar2,x1,y1);
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
  undefined4 *sehChainHead;
  int local_60;
  int local_5c;
  int x;
  int local_54;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HDC memoryDC [10];
  
  iVar1 = __InitExceptBlockLDTC(0x504e48);
  if (param_2 < *(int *)(param_1 + 0x25)) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x25) = 0;
    }
    else if (param_2 < *(int *)(param_1 + 0x25)) {
      iVar1 = *(int *)(param_1 + 0x25) + -1;
      if (param_2 < iVar1) {
        FUN_00489f44(&local_60,param_1,param_2,0);
        x = local_60;
        local_54 = local_5c;
        ehContext = 8;
        FUN_00497828((int *)memoryDC,*(uint **)(param_1 + 4));
        ehDtorCount = ehDtorCount + 3;
        ehContext = 0x14;
        BitBlt(memoryDC[0],x,local_54,
               ((*(int *)(param_1 + 0x25) - param_2) + -1) * *(int *)(param_1 + 0x15),
               *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),memoryDC[0],
               x + *(int *)(param_1 + 0x15),local_54,0xcc0020);
        ehDtorCount = ehDtorCount + -3;
        iVar1 = OWL::TMemoryDC::_dtor((int *)memoryDC,2);
      }
      *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
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
  int x1;
  int y1;
  int local_18;
  int unused;
  int unused2;
  int local_c [2];
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x25) <= param_2)) {
    uVar2 = 0;
  }
  else {
    x1 = 0;
    y1 = 0;
    unused = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
    local_18 = *(int *)(param_1 + 0x15);
    piVar3 = &local_18;
    unused2 = local_18;
    FUN_00489f44(local_c,param_1,param_2,0);
    uVar1 = FUN_0048a2b4(*(uint **)(param_1 + 4),param_3,local_c,piVar3,x1,y1);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a2b4  FUN_0048a2b4   (270 bytes)   [unnamed]
uint __cdecl FUN_0048a2b4(uint *param_1,uint *param_2,int *param_3,int *param_4,int x1,int y1)

{
  BOOL ok;
  uint uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HDC memoryDC [10];
  HDC memoryDC2 [10];
  
  __InitExceptBlockLDTC(0x504ea4);
  FUN_00497828((int *)memoryDC2,param_2);
  FUN_00497828((int *)memoryDC,param_1);
  ok = BitBlt(memoryDC[0],*param_3,param_3[1],(*param_3 + *param_4) - *param_3,
                 (param_3[1] + param_4[1]) - param_3[1],memoryDC2[0],x1,y1,0xcc0020);
  uVar2 = (uint)(ok != 0);
  OWL::TMemoryDC::_dtor((int *)memoryDC,2);
  OWL::TMemoryDC::_dtor((int *)memoryDC2,2);
  *sehChainHead = sehPrevFrame;
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
  int cx;
  int cy;
  undefined4 *sehChainHead;
  char cVar6;
  undefined4 sehPrevFrame;
  HDC memoryDC [10];
  HDC memoryDC2 [10];
  uint *local_30;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x504f48);
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    local_30 = (uint *)operator_new();
    if (local_30 != (uint *)0x0) {
      cVar6 = '\0';
      cy = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
      cx = *(int *)(param_1 + 0x15) * param_2;
      piVar3 = FUN_004a8760(windowDC);
      FUN_004884a0(local_30,piVar3,cx,cy,cVar6);
    }
    puVar1 = local_30;
    uVar2 = OWL::TWindowDC::_dtor(windowDC,0);
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00497828((int *)memoryDC2,*(uint **)(param_1 + 4));
      FUN_00497828((int *)memoryDC,puVar1);
      BitBlt(memoryDC[0],0,0,*(int *)(param_1 + 0x15) * *(int *)(param_1 + 0x11),
             *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29),memoryDC2[0],0,0,0xcc0020);
      FUN_00497904((undefined4*)memoryDC2);
      if (*(uint **)(param_1 + 4) != (uint *)0x0) {
        OWL::TBitmap::_dtor(*(uint **)(param_1 + 4),3);
      }
      OWL::TMemoryDC::_dtor((int *)memoryDC,2);
      uVar2 = OWL::TMemoryDC::_dtor((int *)memoryDC2,2);
    }
    *(uint **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 0x11) = param_2;
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    *sehChainHead = sehPrevFrame;
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
HMODULE __stdcall FUN_0048a629(HANDLE hProcess,LPCVOID address)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  CHAR *pCVar4;
  CHAR filename [260];
  _MEMORY_BASIC_INFORMATION memInfo;
  HMODULE hModule;
  
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    SVar2 = VirtualQueryEx(hProcess,address,&memInfo,0x1c);
    if (SVar2 == 0) {
      hModule = (HMODULE)0x0;
    }
    else {
      puVar3 = &DAT_00504fd3;
      pCVar4 = filename;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pCVar4 = pCVar4 + 4;
      }
      GetModuleFileNameA(memInfo.AllocationBase,filename,0x104);
      FUN_0048ab9c();
      hModule = memInfo.AllocationBase;
    }
  }
  return hModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a6d0  FUN_0048a6d0   (423 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0048a6d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPCSTR lpString2;
  char *string2;
  undefined4 *sehChainHead;
  char local_544 [512];
  CHAR local_344 [256];
  CHAR newStr [256];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  CHAR newStr2 [260];
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x5050d7);
  local_2c = 1;
  *param_3 = param_2;
  memset(param_3,0,200);
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),"<no module>");
  }
  else {
    string2 = thunk_strchr(local_544,'\\');
    if (string2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = string2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_00505298);
  }
  ehContext = 8;
  unused = 0x18;
  unused2 = param_2;
  unused3 = 0xff;
  iVar1 = FUN_0048ac00();
  if (iVar1 == 0) {
    string2 = "<no symbol>";
  }
  else {
    string2 = newStr2;
    iVar1 = FUN_0048ac50();
    if (iVar1 == 0) {
      iVar1 = FUN_0048aca0();
      if (iVar1 != 0) {
        string2 = newStr;
      }
    }
    else {
      string2 = newStr;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,"%s + %d bytes",string2,param_3[1]);
      string2 = local_344;
    }
  }
  ehContext = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),string2,0x80);
  *sehChainHead = sehPrevFrame;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a88b  FUN_0048a88b   (62 bytes)   [unnamed]
void __stdcall FUN_0048a88b(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5050fb);
  OWL::TDiagGroupDef::TDiagGroupDef((undefined4 *)&DAT_0051b12c,&DAT_00505117 /* "Def" */,1,'\0');
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048a8c9  FUN_0048a8c9   (86 bytes)   [unnamed]
void __stdcall FUN_0048a8c9(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50510f);
  if (DAT_00504fc8 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b13d,2);
    DAT_00504fc8 = '\0';
  }
  OWL::TDiagBase::_dtor((undefined4 *)&DAT_0051b12c,0);
  *sehChainHead = sehPrevFrame;
  return;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5053e4);
  if (DAT_00504fc8 == '\0') {
    OWL::TModule::TModule((undefined4 *)&DAT_0051b13d,(uint *)"imagehlp.dll",'\x01','\x01','\0');
    DAT_00504fc8 = DAT_00504fc8 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
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
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
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
// 0x0048ba8c  FUN_0048ba8c   (130 bytes)   [unnamed]
char * __cdecl FUN_0048ba8c(char *param_1,HWND hWnd,char param_3)

{
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 txClipboard [3];
  
  __InitExceptBlockLDTC(0x505708);
  FUN_0048bc20(param_1,hWnd);
  if ((param_3 != '\0') && (*param_1 == '\0')) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_0048bb6c;
    objectDtor = 0;
    OWL::TXClipboard::TXClipboard(txClipboard,0x7fd9);
    _ThrowExceptionLDTC((uint *)&DAT_0048bb10,txClipboard,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
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
void __cdecl FUN_0048bc20(undefined4 param_1,HWND hWnd)

{
  BOOL ok;
  
  ok = OpenClipboard(hWnd);
  *(bool *)param_1 = ok != 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048be18  FUN_0048be18   (179 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0048be18(void)

{
  __ftol();
  return;
}

} // namespace tea

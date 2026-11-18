// TEA.exe — runtime / library code "code_0x004a0000"
// 27 functions, 0x004a0094..0x004a31b8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a0094  FUN_004a0094   (133 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_004a0094(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509add);
  if (DAT_00509acc == '\0') {
    FUN_004aba20((uint *)&DAT_0051b430,0x50bfbc,&DAT_0051b1e0,&DAT_0051b1f4);
    _DAT_0051b435 = DAT_0051b1f4;
    _DAT_0051b439 = 0;
    _DAT_0051b43d = 0;
    (*(undefined4 *)&DAT_0051b441) = 0;
    DAT_00509acc = DAT_00509acc + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b430;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a0119  FUN_004a0119   (114 bytes)   [unnamed]
void __stdcall FUN_004a0119(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509b1a);
  if (DAT_00509acc != '\0') {
    if (DAT_0051b441 != (uint *)0x0) {
      OWL::TBitmap::_dtor(DAT_0051b441,3);
    }
    OWL::TBrush::_dtor((uint *)&DAT_0051b430,0);
    DAT_00509acc = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a01ec  FUN_004a01ec   (66 bytes)   [unnamed]
uint * __cdecl FUN_004a01ec(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_0051b1f4) {
    FUN_004aba90(param_1,0x50bfbc,&DAT_0051b1e0,(uint *)&DAT_0051b1f4);
    *(int *)((int)param_1 + 5) = DAT_0051b1f4;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a0230  FUN_004a0230   (185 bytes)   [unnamed]
undefined4 __cdecl FUN_004a0230(int param_1,int *param_2)

{
  uint *bitmap;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509b5c);
  if ((*(int *)(param_1 + 9) < *param_2) || (*(int *)(param_1 + 0xd) < param_2[1])) {
    if (*(int *)(param_1 + 9) < *param_2) {
      *(int *)(param_1 + 9) = *param_2;
    }
    if (*(int *)(param_1 + 0xd) < param_2[1]) {
      *(int *)(param_1 + 0xd) = param_2[1];
    }
    puVar3 = (uint *)operator_new();
    if (puVar3 != (uint *)0x0) {
      FUN_0048842c(puVar3,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd),1,1,(void *)0x0);
    }
    bitmap = *(uint **)(param_1 + 0x11);
    if (bitmap != (uint *)0x0) {
      OWL::TBitmap::_dtor(bitmap,3);
    }
    *(uint **)(param_1 + 0x11) = puVar3;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x11);
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a02ec  FUN_004a02ec   (13 bytes)   [unnamed]
uint * __stdcall FUN_004a02ec(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004a0094();
  puVar1 = FUN_004a01ec(puVar1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a02fc  FUN_004a02fc   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_004a02fc(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_004a0094();
  uVar2 = FUN_004a0230((int)puVar1,param_1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a0314  FUN_004a0314   (208 bytes)   [unnamed]
void __cdecl FUN_004a0314(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6)

{
  PatBlt((HDC)*param_1,0,0,*param_3,param_3[1],0xff0062);
  if (*param_6 != DAT_0051b19c) {
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
    BitBlt((HDC)*param_1,*param_2,param_2[1],param_5[2] - *param_5,param_5[3] - param_5[1],
           (HDC)*param_4,*param_5,param_5[1],0xcc0020);
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a03e4  FUN_004a03e4   (174 bytes)   [unnamed]
void __cdecl FUN_004a03e4(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  FUN_0048d938(param_1,param_4);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  BitBlt((HDC)*param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
         (HDC)*param_2,0,0,0xe20746);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  FUN_0048da64(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a0494  FUN_004a0494   (28 bytes)   [unnamed]
void __cdecl FUN_004a0494(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004a02ec();
  FUN_004a03e4(param_1,param_2,param_3,puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a04b0  FUN_004a04b0   (253 bytes)   [unnamed]
undefined4 __cdecl FUN_004a04b0(int *param_1)

{
  int mode;
  HDC hdc;
  int iVar3;
  uint in_stack_00000014;
  undefined4 local_10;
  
  mode = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (mode != *param_1) {
    SetBkMode((HDC)*param_1,1);
  }
  mode = 1;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  mode = SetBkMode(hdc,mode);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  if ((in_stack_00000014 & 0x400) == 0) {
    (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
    local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  }
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  iVar3 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar3 != *param_1) {
    SetBkMode((HDC)*param_1,mode);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  SetBkMode(hdc,mode);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a05b0  FUN_004a05b0   (1559 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_004a05b0(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  int x1;
  int y1;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int x;
  int y;
  int local_13c;
  int local_138;
  int *unused;
  int *unused2;
  undefined4 unused3;
  undefined4 unused4;
  int unused5;
  int unused6;
  int unused7;
  int unused8;
  int local_100;
  int local_fc;
  int unused9;
  int unused10;
  int local_f0;
  int unused11;
  int local_e8;
  int unused12;
  int unused13;
  int unused14;
  undefined4 unused15;
  undefined4 unused16;
  undefined4 unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int unused21;
  int unused22;
  int local_b8;
  int local_b4;
  int unused23;
  int unused24;
  int unused25;
  int unused26;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  uint brush2 [2];
  HDC memoryDC [10];
  HDC hdc;
  int local_27;
  
  __InitExceptBlockLDTC(0x509c04);
  ehContext = 8;
  FUN_00497828((int *)&hdc,param_1);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  local_94 = param_2[3] - param_2[1];
  local_98 = param_2[2] - *param_2;
  local_a0 = *param_5;
  local_9c = param_5[1];
  y = param_4[1] + local_9c;
  x = *param_4 + local_a0;
  local_138 = y + local_94;
  local_13c = x + local_98;
  unused23 = x;
  unused24 = y;
  unused25 = x;
  unused26 = y;
  FUN_0049448c(&x,param_4);
  local_b8 = *param_5;
  local_b4 = param_5[1];
  if ((param_7 != '\0') || (param_6 == 1)) {
    local_b8 = local_b8 + 1;
    local_b4 = local_b4 + 1;
    FUN_00494454(&x,1,1);
    FUN_0049448c(&x,param_4);
  }
  unused22 = local_138 - y;
  unused21 = local_13c - x;
  local_148 = param_4[3] - param_4[1];
  local_14c = param_4[2] - *param_4;
  unused17 = 0;
  unused18 = 0;
  unused16 = 0;
  unused15 = 0;
  local_154 = 0;
  local_150 = 0;
  ehContext = 0x20;
  local_e8 = local_14c;
  unused12 = local_148;
  unused13 = local_14c;
  unused14 = local_148;
  unused19 = local_14c;
  unused20 = local_148;
  puVar1 = (uint *)FUN_004a02fc(&local_e8);
  FUN_00497828((int *)memoryDC,puVar1);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  unused11 = local_148 - local_150;
  local_f0 = local_14c - local_154;
  FUN_004a0314((undefined4*)memoryDC,&local_b8,&local_f0,(undefined4*)&hdc,param_2,param_9);
  local_fc = param_2[3] - param_2[1];
  local_100 = param_2[2] - *param_2;
  local_158 = local_b4 + local_fc;
  local_15c = local_b8 + local_100;
  unused6 = local_b4;
  unused5 = local_b8;
  x1 = local_b8;
  y1 = local_b4;
  unused7 = local_15c;
  unused8 = local_158;
  unused9 = local_100;
  unused10 = local_fc;
  if (param_6 == 3) {
    (**(code **)(local_27 + 0x20))();
    unused3 = 0;
    unused4 = 0;
    BitBlt(memoryDC[0],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],hdc,0,
           0,0xee0086);
    ehContext = 0x2c;
    FUN_004ab84c(brush2,&DAT_0051b1e4,'\x01');
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x38;
    FUN_0048d938(param_3,brush2);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    unused2 = &x1;
    BitBlt((HDC)*param_3,x,y,local_13c - x,local_138 - y,memoryDC[0]
           ,x1,y1,0xb8074a);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush2,2);
    ehContext = 0x14;
  }
  else {
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    unused = &x1;
    BitBlt((HDC)*param_3,x,y,local_13c - x,local_138 - y,memoryDC[0]
           ,x1,y1,0x8800c6);
    BitBlt((HDC)*param_3,x,y,local_13c - x,local_138 - y,hdc,
           *param_2,param_2[1],0xee0086);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
  }
  if (param_6 == 2) {
    FUN_004a0494(param_3,(undefined4*)memoryDC,param_4);
  }
  else if ((param_8 != '\0') && (*param_10 != (*(uint *)&DAT_0051b19c))) {
    ehContext = 0x44;
    FUN_004ab84c(brush,param_10,'\x01');
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x50;
    FUN_004a03e4(param_3,(undefined4*)memoryDC,param_4,brush);
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    ehContext = 0x14;
  }
  FUN_00497904((undefined4*)memoryDC);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)memoryDC,2);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)&hdc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a0bc8  FUN_004a0bc8   (179 bytes)   [unnamed]
void __cdecl FUN_004a0bc8(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  ICONINFO piconinfo;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint bitmap [2];
  uint bitmap2 [2];
  
  __InitExceptBlockLDTC(0x509c8c);
  GetIconInfo((HICON)*param_1,&piconinfo);
  ehContext = 0x14;
  puVar1 = FUN_004883bc(bitmap,piconinfo.hbmColor,0);
  ehDtorCount = ehDtorCount + 2;
  FUN_0048852c(bitmap2,puVar1);
  OWL::TBitmap::_dtor(bitmap,2);
  ehContext = 8;
  FUN_004a05b0(bitmap2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  ehDtorCount = ehDtorCount + -2;
  OWL::TBitmap::_dtor(bitmap2,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a0c7c  FUN_004a0c7c   (1252 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_004a0c7c(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9)

{
  int mode;
  HDC hdc;
  uint *puVar3;
  int mode2;
  int *piVar5;
  int *piVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  char cVar8;
  int local_e0;
  int local_dc;
  undefined4 local_cc;
  undefined4 unused;
  COLORREF color;
  undefined4 local_bc;
  undefined4 unused2;
  int local_b0;
  int unused3;
  int local_a8;
  int unused4;
  int unused5;
  COLORREF color2;
  COLORREF local_98 [2];
  undefined4 local_90;
  undefined4 unused6;
  int local_88;
  int local_84;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  int memoryDC [10];
  int memoryDC2 [10];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x509cf8);
  piVar5 = param_3;
  piVar6 = &local_e0;
  for (mode2 = 4; mode2 != 0; mode2 = mode2 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_88 = *param_4;
  local_84 = param_4[1];
  if (param_7 == '\0') {
    mode2 = 1;
  }
  else {
    mode2 = 2;
  }
  mode = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (mode != *param_2) {
    SetBkMode((HDC)*param_2,mode2);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  mode2 = SetBkMode(hdc,mode2);
  if ((param_6 != '\0') || (mode = local_dc, param_5 == 1)) {
    local_88 = local_88 + 1;
    local_84 = local_84 + 1;
    mode = local_e0 + 1;
    if ((param_9 & 1) != 0) {
      mode = local_e0 + 2;
    }
    local_e0 = mode;
    mode = local_dc + 1;
    if ((param_9 & 4) != 0) {
      mode = local_dc + 2;
    }
  }
  local_dc = mode;
  switch(param_5) {
  case 0:
    unused6 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      unused6 = local_90;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 1:
    mode = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    if (mode != *param_2) {
      SetBkMode((HDC)*param_2,1);
    }
    mode = 1;
    hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    SetBkMode(hdc,mode);
    hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    local_98[0] = GetBkColor(hdc);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_98[0] = color2;
      if (param_6 != '\0') {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
      }
    }
    if (param_6 == '\0') {
      ehContext = 8;
      FUN_004977c0(memoryDC2,param_2);
      ehDtorCount = ehDtorCount + 3;
      ehContext = 0x20;
      unused4 = param_3[3] - param_3[1];
      local_a8 = param_3[2] - *param_3;
      unused5 = local_a8;
      puVar3 = (uint *)FUN_004a02fc(&local_a8);
      FUN_00497828(memoryDC,puVar3);
      ehDtorCount = ehDtorCount + 3;
      ehContext = 0x14;
      if (param_7 == '\0') {
        param_8 = local_98;
      }
      unused3 = param_3[3] - param_3[1];
      local_b0 = param_3[2] - *param_3;
      FUN_004a0314(memoryDC,&local_88,&local_b0,memoryDC2,param_3,(int *)param_8);
      FUN_004a0494(param_2,memoryDC,param_3);
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
      ehDtorCount = ehDtorCount + -3;
      OWL::TMemoryDC::_dtor(memoryDC,2);
      ehDtorCount = ehDtorCount + -3;
      OWL::TMemoryDC::_dtor(memoryDC2,2);
      ehContext = 0;
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    }
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 2:
    unused2 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      unused2 = local_bc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    ehContext = 0x2c;
    cVar8 = '\x01';
    hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    color = GetTextColor(hdc);
    FUN_004ab84c(brush,&color,cVar8);
    ehDtorCount = ehDtorCount + 2;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x58))();
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 3:
    unused = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      unused = local_cc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    FUN_004a04b0(param_2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 4:
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
  }
  mode = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (mode != *param_2) {
    SetBkMode((HDC)*param_2,mode2);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(hdc,mode2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a1174  FUN_004a1174   (320 bytes)   [unnamed]
void __cdecl FUN_004a1174(undefined4 *param_1,int *param_2,int *param_3,int param_4,char param_5,char param_6)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int local_64 [4];
  int local_54 [4];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 local_2c [2];
  undefined4 unused5;
  undefined4 unused6;
  undefined4 unused7;
  undefined4 unused8;
  undefined4 local_c [2];
  
  if (param_1[1] == 0) {
    FUN_004a0c7c(*param_1,param_2,param_1 + 2,param_3,param_4,param_5,param_6,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    puVar3 = param_1 + 7;
    piVar2 = param_1 + 6;
    piVar1 = param_1 + 2;
    FUN_00488750(local_c,(undefined4 *)*param_1);
    unused7 = 0;
    unused8 = 0;
    unused6 = 0;
    unused5 = 0;
    local_54[0] = 0;
    local_54[1] = 0;
    FUN_004a05b0((uint *)*param_1,local_54,param_2,piVar1,param_3,param_4,param_5,param_6,piVar2,
                 puVar3);
  }
  else if (param_1[1] == 2) {
    puVar3 = param_1 + 7;
    piVar2 = param_1 + 6;
    piVar1 = param_1 + 2;
    FUN_00488750(local_2c,(undefined4 *)*param_1);
    unused3 = 0;
    unused4 = 0;
    unused2 = 0;
    unused = 0;
    local_64[0] = 0;
    local_64[1] = 0;
    FUN_004a0bc8((undefined4 *)*param_1,local_64,param_2,piVar1,param_3,param_4,param_5,param_6,
                 piVar2,puVar3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a12b4  FUN_004a12b4   (145 bytes)   [unnamed]
void __cdecl FUN_004a12b4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7)

{
  if (param_1[1] == 0) {
    FUN_004a0c7c(*param_1,param_2,param_1 + 2,param_4,param_5,param_6,param_7,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    FUN_004a05b0((uint *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  else if (param_1[1] == 2) {
    FUN_004a0bc8((undefined4 *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a153c  FUN_004a153c   (12 bytes)   [unnamed]
void __cdecl FUN_004a153c(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a15a0  FUN_004a15a0   (2214 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004a15a0(void)

{
  undefined *puVar1;
  
  if (DAT_00509dc4 == '\0') {
    _DAT_00509dc0 = 0;
    DAT_00509dc4 = '\x01';
  }
  if (DAT_00509dcc == '\0') {
    _DAT_00509dc8 = 1;
    DAT_00509dcc = '\x01';
  }
  if (DAT_00509dd4 == '\0') {
    _DAT_00509dd0 = 2;
    DAT_00509dd4 = '\x01';
  }
  if (DAT_00509ddc == '\0') {
    _DAT_00509dd8 = 3;
    DAT_00509ddc = '\x01';
  }
  if (DAT_00509de4 == '\0') {
    _DAT_00509de0 = 4;
    DAT_00509de4 = '\x01';
  }
  if (DAT_00509dec == '\0') {
    (*(undefined4 *)&DAT_00509de8) = 5;
    DAT_00509dec = '\x01';
  }
  if (DAT_00509df4 == '\0') {
    (*(undefined4 *)&DAT_00509df0) = 6;
    DAT_00509df4 = '\x01';
  }
  if (DAT_00509dfc == '\0') {
    (*(undefined4 *)&DAT_00509df8) = 7;
    DAT_00509dfc = '\x01';
  }
  if (DAT_00509e04 == '\0') {
    (*(undefined4 *)&DAT_00509e00) = 8;
    DAT_00509e04 = '\x01';
  }
  if (DAT_00509e0c == '\0') {
    _DAT_00509e08 = 9;
    DAT_00509e0c = '\x01';
  }
  if (DAT_00509e14 == '\0') {
    _DAT_00509e10 = 10;
    DAT_00509e14 = '\x01';
  }
  if (DAT_00509e1c == '\0') {
    _DAT_00509e18 = 0xb;
    DAT_00509e1c = '\x01';
  }
  if (DAT_00509e24 == '\0') {
    _DAT_00509e20 = 0xc;
    DAT_00509e24 = '\x01';
  }
  if (DAT_00509e2c == '\0') {
    _DAT_00509e28 = 0xd;
    DAT_00509e2c = '\x01';
  }
  if (DAT_00509e34 == '\0') {
    _DAT_00509e30 = 0xe;
    DAT_00509e34 = '\x01';
  }
  if (DAT_00509e3c == '\0') {
    _DAT_00509e38 = 0xf;
    DAT_00509e3c = '\x01';
  }
  if (DAT_00509e44 == '\0') {
    _DAT_00509e40 = 0x10;
    DAT_00509e44 = '\x01';
  }
  if (DAT_00509e4c == '\0') {
    _DAT_00509e48 = 0x11;
    DAT_00509e4c = '\x01';
  }
  if (DAT_00509e54 == '\0') {
    _DAT_00509e50 = 0x12;
    DAT_00509e54 = '\x01';
  }
  if (DAT_00509e5c == '\0') {
    _DAT_00509e58 = 0x13;
    DAT_00509e5c = '\x01';
  }
  if (DAT_00509e64 == '\0') {
    (*(undefined4 *)&DAT_00509e60) = 0x14;
    DAT_00509e64 = '\x01';
  }
  if (DAT_00509e6c == '\0') {
    (*(undefined4 *)&DAT_00509e68) = 0x15;
    DAT_00509e6c = '\x01';
  }
  if (DAT_00509e74 == '\0') {
    _DAT_00509e70 = 0x16;
    DAT_00509e74 = '\x01';
  }
  if (DAT_00509e7c == '\0') {
    _DAT_00509e78 = 0x17;
    DAT_00509e7c = '\x01';
  }
  if (DAT_00509e84 == '\0') {
    _DAT_00509e80 = 0x18;
    DAT_00509e84 = '\x01';
  }
  if (DAT_00509e8c == '\0') {
    _DAT_00509e88 = 0x19;
    DAT_00509e8c = '\x01';
  }
  if (DAT_00509e94 == '\0') {
    _DAT_00509e90 = 0x1a;
    DAT_00509e94 = '\x01';
  }
  if (DAT_00509e9c == '\0') {
    _DAT_00509e98 = 0x1b;
    DAT_00509e9c = '\x01';
  }
  if (DAT_00509ea4 == '\0') {
    _DAT_00509ea0 = 0x1c;
    DAT_00509ea4 = '\x01';
  }
  if (DAT_00509eac == '\0') {
    _DAT_00509ea8 = 0x1d;
    DAT_00509eac = '\x01';
  }
  if (DAT_00509eb4 == '\0') {
    _DAT_00509eb0 = 0x1e;
    DAT_00509eb4 = '\x01';
  }
  if (DAT_00509ebc == '\0') {
    _DAT_00509eb8 = 0x1f;
    DAT_00509ebc = '\x01';
  }
  if (DAT_00509ec4 == '\0') {
    (*(undefined4 *)&DAT_00509ec0) = 0x20;
    DAT_00509ec4 = '\x01';
  }
  if (DAT_00509ecc == '\0') {
    (*(undefined4 *)&DAT_00509ec8) = 0x21;
    DAT_00509ecc = '\x01';
  }
  if (DAT_00509ed4 == '\0') {
    _DAT_00509ed0 = 0x22;
    DAT_00509ed4 = '\x01';
  }
  if (DAT_00509edc == '\0') {
    _DAT_00509ed8 = 0x23;
    DAT_00509edc = '\x01';
  }
  if (DAT_00509ee4 == '\0') {
    _DAT_00509ee0 = 0x24;
    DAT_00509ee4 = '\x01';
  }
  if (DAT_00509eec == '\0') {
    _DAT_00509ee8 = 0x25;
    DAT_00509eec = '\x01';
  }
  if (DAT_00509ef4 == '\0') {
    _DAT_00509ef0 = 0x26;
    DAT_00509ef4 = '\x01';
  }
  if (DAT_00509efc == '\0') {
    _DAT_00509ef8 = 0x27;
    DAT_00509efc = '\x01';
  }
  if (DAT_00509f04 == '\0') {
    _DAT_00509f00 = 0x28;
    DAT_00509f04 = '\x01';
  }
  if (DAT_00509f0c == '\0') {
    _DAT_00509f08 = 0x29;
    DAT_00509f0c = '\x01';
  }
  if (DAT_00509f14 == '\0') {
    _DAT_00509f10 = 0x2a;
    DAT_00509f14 = '\x01';
  }
  if (DAT_00509f1c == '\0') {
    _DAT_00509f18 = 0x2b;
    DAT_00509f1c = '\x01';
  }
  if (DAT_00509f24 == '\0') {
    _DAT_00509f20 = 0x2c;
    DAT_00509f24 = '\x01';
  }
  if (DAT_00509f2c == '\0') {
    _DAT_00509f28 = 0x2d;
    DAT_00509f2c = '\x01';
  }
  if (DAT_00509f34 == '\0') {
    _DAT_00509f30 = 0x2e;
    DAT_00509f34 = '\x01';
  }
  if (DAT_00509f3c == '\0') {
    _DAT_00509f38 = 0x2f;
    DAT_00509f3c = '\x01';
  }
  if (DAT_00509f44 == '\0') {
    _DAT_00509f40 = 0x30;
    DAT_00509f44 = '\x01';
  }
  if (DAT_00509f4c == '\0') {
    (*(undefined4 *)&DAT_00509f48) = 0x31;
    DAT_00509f4c = '\x01';
  }
  if (DAT_00509f54 == '\0') {
    (*(undefined4 *)&DAT_00509f50) = 0x32;
    DAT_00509f54 = '\x01';
  }
  if (DAT_00509f5c == '\0') {
    _DAT_00509f58 = 0x33;
    DAT_00509f5c = '\x01';
  }
  if (DAT_00509f64 == '\0') {
    _DAT_00509f60 = 0x34;
    DAT_00509f64 = '\x01';
  }
  if (DAT_00509f6c == '\0') {
    _DAT_00509f68 = 0x35;
    DAT_00509f6c = '\x01';
  }
  if (DAT_00509f74 == '\0') {
    _DAT_00509f70 = 0x36;
    DAT_00509f74 = '\x01';
  }
  if (DAT_00509f7c == '\0') {
    _DAT_00509f78 = 0x37;
    DAT_00509f7c = '\x01';
  }
  if (DAT_00509f84 == '\0') {
    _DAT_00509f80 = 0x38;
    DAT_00509f84 = '\x01';
  }
  if (DAT_00509f8c == '\0') {
    _DAT_00509f88 = 0x39;
    DAT_00509f8c = '\x01';
  }
  if (DAT_00509f94 == '\0') {
    _DAT_00509f90 = 0x3a;
    DAT_00509f94 = '\x01';
  }
  if (DAT_00509f9c == '\0') {
    _DAT_00509f98 = 0x3b;
    DAT_00509f9c = '\x01';
  }
  if (DAT_00509fa4 == '\0') {
    _DAT_00509fa0 = 0x3c;
    DAT_00509fa4 = '\x01';
  }
  if (DAT_00509fac == '\0') {
    _DAT_00509fa8 = 0x3d;
    DAT_00509fac = '\x01';
  }
  if (DAT_00509fb4 == '\0') {
    _DAT_00509fb0 = 0x3e;
    DAT_00509fb4 = '\x01';
  }
  if (DAT_00509fbc == '\0') {
    _DAT_00509fb8 = 0x3f;
    DAT_00509fbc = '\x01';
  }
  if (DAT_00509fc4 == '\0') {
    _DAT_00509fc0 = 0x40;
    DAT_00509fc4 = '\x01';
  }
  if (DAT_00509fcc == '\0') {
    _DAT_00509fc8 = 0x41;
    DAT_00509fcc = '\x01';
  }
  if (DAT_00509fd4 == '\0') {
    _DAT_00509fd0 = 0x42;
    DAT_00509fd4 = '\x01';
  }
  if (DAT_00509fdc == '\0') {
    _DAT_00509fd8 = 0x43;
    DAT_00509fdc = '\x01';
  }
  if (DAT_00509fe4 == '\0') {
    _DAT_00509fe0 = 0x44;
    DAT_00509fe4 = '\x01';
  }
  if (DAT_00509fec == '\0') {
    _DAT_00509fe8 = 0x45;
    DAT_00509fec = '\x01';
  }
  if (DAT_00509ff4 == '\0') {
    _DAT_00509ff0 = 0x46;
    DAT_00509ff4 = '\x01';
  }
  if (DAT_00509ffc == '\0') {
    _DAT_00509ff8 = 0x47;
    DAT_00509ffc = '\x01';
  }
  if (DAT_0050a004 == '\0') {
    _DAT_0050a000 = 0x48;
    DAT_0050a004 = '\x01';
  }
  if (DAT_0050a00c == '\0') {
    _DAT_0050a008 = 0x49;
    DAT_0050a00c = '\x01';
  }
  if (DAT_0050a014 == '\0') {
    _DAT_0050a010 = 0x4a;
    DAT_0050a014 = '\x01';
  }
  if (DAT_0050a01c == '\0') {
    _DAT_0050a018 = 0x4b;
    DAT_0050a01c = '\x01';
  }
  if (DAT_0050a024 == '\0') {
    _DAT_0050a020 = 0x4c;
    DAT_0050a024 = '\x01';
  }
  if (DAT_0050a02c == '\0') {
    _DAT_0050a028 = 0x4d;
    DAT_0050a02c = '\x01';
  }
  if (DAT_0050a034 == '\0') {
    _DAT_0050a030 = 0x4e;
    DAT_0050a034 = '\x01';
  }
  if (DAT_0050a03c == '\0') {
    _DAT_0050a038 = 0x4f;
    DAT_0050a03c = '\x01';
  }
  if (DAT_0050a044 == '\0') {
    _DAT_0050a040 = 0x50;
    DAT_0050a044 = '\x01';
  }
  if (DAT_0050a04c == '\0') {
    _DAT_0050a048 = 0x51;
    DAT_0050a04c = '\x01';
  }
  if (DAT_0050a054 == '\0') {
    puVar1 = FUN_0048751c();
    if ((*(uint *)(puVar1 + 4) < 5) &&
       ((puVar1 = FUN_0048751c(), *(int *)(puVar1 + 0x10) != 2 ||
        (puVar1 = FUN_0048751c(), *(uint *)(puVar1 + 4) < 4)))) {
      _DAT_0050a050 = 0x4c;
    }
    else {
      _DAT_0050a050 = 0x53;
    }
    DAT_0050a054 = 1;
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a1e48  FUN_004a1e48   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_004a1e48(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50a05c);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a1e70  FUN_004a1e70   (29 bytes)   [unnamed]
void __cdecl FUN_004a1e70(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5)

{
  FUN_004a1e90(param_1,param_2,param_3,param_4,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a1e90  FUN_004a1e90   (66 bytes)   [unnamed]
undefined4 __cdecl FUN_004a1e90(undefined4 param_1,undefined4 *param_2,LPRECT param_3,UINT param_4,UINT param_5)

{
  BOOL ok;
  DWORD lastError;
  
  if (DAT_0050a058 != '\0') {
    ok = DrawFrameControl((HDC)*param_2,param_3,param_4,param_5);
    if (ok != 0) {
      return CONCAT31((int3)((uint)ok >> 8),1);
    }
    lastError = GetLastError();
    if (lastError != 0x78) {
      return 0;
    }
    DAT_0050a058 = '\0';
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a1f1c  FUN_004a1f1c   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a1f1c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50a0c0);
  *param_1 = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a21c4  InitRichEditStreamer_4a21c4   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4a21c4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50a1dc);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004a4530;
  puVar1 = FUN_004dd5cc(1,0,0x4a40a8);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b448,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a221a  FUN_004a221a   (48 bytes)   [unnamed]
void __stdcall FUN_004a221a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50a1f0);
  OWL::TStreamableClass::_dtor(0x51b448,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a2818  FUN_004a2818   (346 bytes)   [unnamed]
void __cdecl FUN_004a2818(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  tagRECT rect;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 lParam [12];
  int local_c;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x50a4e8);
  if (param_1[7] != 0) {
    if (*(int *)(*(int *)param_1[7] + 0xc) == 0) {
      local_c = param_1[7];
      if (local_c != 0) {
        unused = *(undefined4 *)(local_c + 0xc);
        ehContext = 0x14;
        (*(code *)**(undefined4 **)(local_c + 0xc))();
        ehContext = 8;
      }
    }
    else {
      FUN_004a76a8(*(int *)param_1[7],0x10,0,0);
    }
  }
  param_1[7] = param_2;
  if (((param_1[7] != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_004a7988(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(*param_1,&rect);
    ehContext = 0x20;
    FUN_0049f414(lParam,*(undefined4 *)(*param_1 + 0xc),&rect.left,0x3eb,(uint *)0xffffffff);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_0049f534((int)lParam,(uint *)param_1[0xd],'\x01');
    FUN_004a76a8(*(int *)param_1[7],0x404,0,(LPARAM)lParam);
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a29fc  FUN_004a29fc   (42 bytes)   [unnamed]
LRESULT __stdcall FUN_004a29fc(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
  if (msg == 0x87) {
    lResult = 0x104;
  }
  else {
    lResult = DefWindowProcA(hWnd,msg,wParam,lParam);
  }
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a3194  FUN_004a3194   (36 bytes)   [unnamed]
void __cdecl FUN_004a3194(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x3d) = param_2;
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a31b8  FUN_004a31b8   (352 bytes)   [unnamed]
void __cdecl FUN_004a31b8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined1 rect [12];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *tmpBufferBase [2];
  
  __InitExceptBlockLDTC(0x50a76c);
  GH_PIECE(rect, 0, undefined4) = 0;
  GH_PIECE(rect, 4, undefined4) = 0;
  GH_PIECE(rect, 8, undefined4) = 0;
  local_3c = 0;
  FUN_004a7a30(*param_1,(LPRECT)rect);
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 != 0) {
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)rect);
    ScreenToClient(*(HWND *)(iVar3 + 0xc),(LPPOINT)(rect + 8));
  }
  ehContext = 8;
  FUN_00497298((int *)tmpBufferBase,0x104);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)tmpBufferBase[0],0x104);
  FUN_0048f980(&local_38,param_1[6],tmpBufferBase[0]);
  uVar1 = FUN_004a78f0(*param_1);
  if ((uVar1 & 0x200) == 0) {
    local_3c = GH_PIECE(rect, 4, undefined4) + local_34;
  }
  else {
    uVar2 = -((local_3c - GH_PIECE(rect, 4, undefined4)) - local_34);
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    FUN_00494470((int *)rect,0,iVar3);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      GH_PIECE(rect, 8, undefined4) = GH_PIECE(rect, 0, undefined4) + local_38;
    }
    else {
      GH_PIECE(rect, 0, undefined4) = GH_PIECE(rect, 8, undefined4) - local_38;
    }
  }
  else {
    uVar1 = -((GH_PIECE(rect, 8, undefined4) - GH_PIECE(rect, 0, undefined4)) - local_38);
    iVar3 = (int)uVar1 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
    }
    FUN_00494470((int *)rect,iVar3,0);
  }
  FUN_004a7aa0(*param_1,(HWND)0x0,GH_PIECE(rect, 0, undefined4),GH_PIECE(rect, 4, undefined4),GH_PIECE(rect, 8, undefined4) - GH_PIECE(rect, 0, undefined4),
               local_3c - GH_PIECE(rect, 4, undefined4),4);
  ehDtorCount = ehDtorCount + -2;
  OWL::TTmpBufferBase::_dtor((undefined4*)tmpBufferBase,0);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea

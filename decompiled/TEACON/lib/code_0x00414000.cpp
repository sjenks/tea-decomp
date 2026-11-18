// TEACON.exe — runtime / library code "code_0x00414000"
// 134 functions, 0x00414f4c..0x00417ee0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414f4c  calloc   (43 bytes)   [analysis (usage pattern)]
//   malloc(n*size) then memset 0
undefined4 * __cdecl calloc(int count,int size)

{
  undefined4 *mem;
  
  mem = (undefined4 *)malloc();
  if (mem != (undefined4 *)0x0) {
    memset(mem,0,count * size);
  }
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414f78  operator_delete   (15 bytes)   [analysis (usage pattern)]
//   called on `this` at the end of every deleting destructor
void __stdcall operator_delete(void)

{
  free();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414f88  operator_delete_array   (15 bytes)   [analysis (usage pattern)]
void __stdcall operator_delete_array(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414f98  set_new_handler   (19 bytes)   [analysis (usage pattern)]
undefined4 __cdecl set_new_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_0043469c);
  (*(undefined4 *)&DAT_0043469c) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414fac  operator_new   (144 bytes)   [analysis (usage pattern)]
//   result is null-checked and passed to a constructor
int __stdcall operator_new(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x42e840);
  while (iVar1 = malloc(), iVar1 == 0) {
    if (DAT_0043469c == (code *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_00404c94,(undefined4*)&badAlloc,0,&LAB_00404cec,1,0,0,0);
    }
    else {
      ((code *)DAT_0043469c)();
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041503c  operator_new_array   (15 bytes)   [analysis (usage pattern, less certain)]
int __stdcall operator_new_array(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041504c  FUN_0041504c   (84 bytes)   [unnamed]
void __stdcall FUN_0041504c(void)

{
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x42e888);
  badAlloc = &std::bad_alloc::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00404c94,(undefined4*)&badAlloc,0,&LAB_00404cec,1,0,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004150ac  FUN_004150ac   (63 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004150ac(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e8d0);
  _DAT_004346a0 = &std::bad_alloc::vftable;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004150ec  FUN_004150ec   (49 bytes)   [unnamed]
void __stdcall FUN_004150ec(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e8e4);
  std::bad_alloc::_dtor((undefined4 *)&DAT_004346a0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415120  _vector_delete_ldtc_   (36 bytes)   [analysis (usage pattern)]
//   Borland RTL array destructor helper (ptr, elemSize, count, mode, dtor)
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  FUN_00415144(param_1,param_2,param_3,param_4,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415144  FUN_00415144   (245 bytes, 2 ranges)   [unnamed]
int __cdecl FUN_00415144(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e90c);
  if (param_1 == 0) {
    param_1 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      param_3 = *(int *)(param_1 + -4);
    }
    uVar1 = param_4 & 7;
    iVar2 = (param_3 + -1) * param_2 + param_1;
    while( true ) {
      if (param_3 == 0) break;
      if (uVar1 == 1) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 2) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 3) {
        (*(code *)param_5)(iVar2,2);
      }
      else if (uVar1 == 5) {
        (*(code *)param_5)();
      }
      else {
        FUN_00426acc((uint *)"Illegal mode in _vector_delete_");
      }
      iVar2 = iVar2 - param_2;
      param_3 = param_3 + -1;
    }
    if ((param_4 & 0x10) != 0) {
      param_1 = param_1 + -4;
    }
    if ((param_4 & 8) == 0) {
      *sehChainHead = sehPrevFrame;
    }
    else {
      operator_delete_array();
      param_1 = 0;
      *sehChainHead = sehPrevFrame;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415280  _vector_new_ldtc_   (274 bytes, 2 ranges)   [analysis (usage pattern)]
//   Borland RTL array constructor helper (ptr, elemSize, count, mode, ctor)
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  int local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42e960);
  if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new_array(), param_1 == (int *)0x0)) {
    param_1 = (int *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      *param_1 = param_3;
      param_1 = param_1 + 1;
    }
    if (param_5 == (undefined *)0x0) {
      *sehChainHead = sehPrevFrame;
    }
    else {
      local_2c = param_3;
      piVar2 = param_1;
      while (0 < local_2c) {
        uVar1 = param_4 & 7;
        if (uVar1 == 1) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 2) {
          (*(code *)param_5)();
        }
        else if (uVar1 == 3) {
          (*(code *)param_5)(piVar2);
        }
        else if (uVar1 == 5) {
          (*(code *)param_5)();
        }
        else {
          FUN_00426acc((uint *)"Illegal mode in _vector_new_");
        }
        piVar2 = (int *)((int)piVar2 + param_2);
        local_2c = local_2c + -1;
      }
      *sehChainHead = sehPrevFrame;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041543c  FUN_0041543c   (106 bytes)   [unnamed]
bool FUN_0041543c(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID mem;
  uint dwSize;
  
  if (DAT_0042e9b4 == 0) {
    if ((DAT_0043509c == 2) || (DAT_0043509c == 1)) {
      DAT_0042e9b4 = 0x100000;
    }
    else {
      DAT_0042e9b4 = 0x400000;
    }
  }
  dwSize = (DAT_0042e9b4 + param_1) - 1U & ~(DAT_0042e9b4 - 1U);
  mem = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = mem;
  if (mem != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154a8  FUN_004154a8   (39 bytes)   [unnamed]
bool FUN_004154a8(undefined4 *param_1,SIZE_T size)

{
  LPVOID mem;
  
  mem = VirtualAlloc((LPVOID)*param_1,size,0x1000,4);
  *param_1 = mem;
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004154d0  FUN_004154d0   (75 bytes)   [unnamed]
undefined4 FUN_004154d0(LPVOID address,int param_2)

{
  LPVOID mem;
  LPVOID lpAddress;
  
  lpAddress = address;
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    mem = VirtualAlloc(lpAddress,0x1000,0x1000,4);
    if (mem == (LPVOID)0x0) break;
    lpAddress = (LPVOID)((int)lpAddress + 0x1000);
    param_2 = param_2 + -0x1000;
  }
  FUN_0041551c(address,(int)lpAddress - (int)address);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041551c  FUN_0041551c   (24 bytes)   [unnamed]
undefined4 FUN_0041551c(LPVOID address,SIZE_T size)

{
  BOOL ok;
  
  ok = VirtualFree(address,size,0x4000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415534  FUN_00415534   (25 bytes)   [unnamed]
undefined4 FUN_00415534(LPVOID address)

{
  BOOL ok;
  
  ok = VirtualFree(address,0,0x8000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415570  FUN_00415570   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_00415570(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC procAddress;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA("borlndmm");
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      procAddress = GetProcAddress(hModule,"@Borlndmm@SysGetMem$qqri");
      *param_1 = (int)procAddress;
      procAddress = GetProcAddress(hModule,"@Borlndmm@SysFreeMem$qqrpv");
      *param_2 = (int)procAddress;
      procAddress = GetProcAddress(hModule,"@Borlndmm@SysReallocMem$qqrpvi");
      *param_3 = (int)procAddress;
      if (((*param_1 == 0) || (*param_2 == 0)) || (*param_3 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004155ec  FUN_004155ec   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004155ec(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004155f0  malloc   (16 bytes)   [analysis (usage pattern)]
//   called by operator new in a retry loop
undefined4 __stdcall malloc(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_0042ea64)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415600  free   (16 bytes)   [analysis (usage pattern)]
//   called by operator delete
void __stdcall free(void)

{
  (*(code *)PTR_FUN_0042ea60)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415610  FUN_00415610   (22 bytes)   [unnamed]
undefined4 __stdcall FUN_00415610(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_0042ea68)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415628  FUN_00415628   (72 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00415628(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004155ec();
  if (iVar1 == 0) {
    PTR_FUN_0042ea60 = (undefined*)FUN_00415cc8;
    PTR_FUN_0042ea64 = (undefined*)FUN_00415e38;
    PTR_FUN_0042ea68 = (undefined*)FUN_00416290;
    PTR_LAB_0042ea6c = (undefined*)FUN_00416050;
    _DAT_0042ea5c = 1;
  }
  _DAT_0042ea58 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415670  FUN_00415670   (24 bytes)   [unnamed]
void __cdecl FUN_00415670(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00415628(1);
  (*(code *)PTR_FUN_0042ea60)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415688  FUN_00415688   (24 bytes)   [unnamed]
void __cdecl FUN_00415688(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00415628(1);
  (*(code *)PTR_FUN_0042ea64)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156a0  FUN_004156a0   (30 bytes)   [unnamed]
void __cdecl FUN_004156a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_00415628(1);
  (*(code *)PTR_FUN_0042ea68)(param_2,param_1,uVar1,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156e0  FUN_004156e0   (1 bytes)   [unnamed]
void __stdcall FUN_004156e0(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004156e4  FUN_004156e4   (64 bytes)   [unnamed]
void __stdcall FUN_004156e4(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0xc; iVar2 < (*(int *)&DAT_0042ea80); iVar2 = iVar2 + 4) {
    iVar1 = iVar2 * 2 + DAT_0042ea94;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar2 = (*(int *)&DAT_0042ea80) * 2 + DAT_0042ea94;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415724  FUN_00415724   (255 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00415724(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_2 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[2] = 1;
    param_1[3] = (uint)param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[0x23] = (uint)DAT_0042ea8c;
    param_1[0x24] = 0;
    if (DAT_0042ea8c == (uint *)0x0) {
      _DAT_0042ea90 = param_1;
    }
    else {
      DAT_0042ea8c[0x24] = (uint)param_1;
    }
    DAT_0042ea8c = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if ((*(uint * *)&DAT_0042ea94) == (uint *)0x0) {
      uVar5 = DAT_0042ea80 * 2 + 3 & 0xfffffffc;
      (*(uint * *)&DAT_0042ea94) = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_004156e4();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_0042eaa4;
    if (uVar5 < DAT_0042ea80) {
      puVar2 = (undefined *)((int)(*(uint * *)&DAT_0042ea94) + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415824  FUN_00415824   (235 bytes)   [unnamed]
undefined4 __cdecl FUN_00415824(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = param_2 & 0xfffff000;
  uVar1 = *param_1;
  iVar2 = uVar1 + (int)param_1;
  puVar3 = (uint *)(iVar2 + -4);
  if (uVar4 < uVar1) {
    if ((*(byte *)puVar3 & 2) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)((int)puVar3 - *(int *)(iVar2 + -8));
    if ((*puVar3 & 0xfffffffc) - 0xc < uVar1 - uVar4) {
      return 0xffffffff;
    }
    *puVar3 = *puVar3 - (uVar1 - uVar4);
    *(uint *)((int)puVar3 + (*puVar3 & 0xfffffffc)) = (*puVar3 & 0xfffffffc) + 4;
    *(undefined4 *)((int)puVar3 + (*puVar3 & 0xfffffffc) + 4) = 2;
    if ((*puVar3 & 0xfffffffc) < DAT_0042ea80) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_0042ea94 + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_0042ea94) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_0042ea94 + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar1 = *param_1;
    *puVar3 = *puVar3 + (uVar4 - uVar1) + -4;
    *(undefined4 *)(iVar2 + (*puVar3 & 0xfffffffc)) = 0;
    FUN_00415cf4(iVar2);
    *param_1 = *param_1 + (uVar4 - uVar1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415910  FUN_00415910   (706 bytes)   [unnamed]
undefined4 __cdecl FUN_00415910(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 regHigh;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint *address;
  uint uVar4;
  
  uVar7 = param_1 + 0xfffU & 0xfffff000;
  if (DAT_0042eaa8 == 0) {
    DAT_0042eaa8 = FUN_00416038();
  }
  puVar1 = DAT_0042ea8c;
  if (DAT_0042ea94 == 0) {
    uVar7 = uVar7 + ((*(int *)&DAT_0042ea80) * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_0042ea78;
      if ((uint)((*(int *)&DAT_0042eaac) + DAT_0042ea74) < DAT_0042eaa8) {
        iVar3 = DAT_0042ea74;
      }
      iVar6 = DAT_0042ea78;
      if ((uint)((*(int *)&DAT_0042eaac) + DAT_0042ea74) < DAT_0042eaa8) {
        iVar6 = DAT_0042ea74;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_0042ea78;
        if ((uint)((*(int *)&DAT_0042eaac) + DAT_0042ea74) < DAT_0042eaa8) {
          iVar3 = DAT_0042ea74;
        }
        iVar6 = DAT_0042ea78;
        if ((uint)((*(int *)&DAT_0042eaac) + DAT_0042ea74) < DAT_0042eaa8) {
          iVar6 = DAT_0042ea74;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        (*(int *)&DAT_0042eaac) = (*(int *)&DAT_0042eaac) + (uVar7 - *puVar1);
        FUN_00415824(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        (*(int *)&DAT_0042eaac) = (*(int *)&DAT_0042eaac) + 0x1000;
        FUN_00415824(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_0042ea70;
  if (DAT_0042ea70 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_0041543c(uVar4,(undefined4*)&address,&local_c);
  if (CONCAT31(regHigh,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_0042ea78;
    if ((uint)((*(int *)&DAT_0042eaac) + DAT_0042ea74) < DAT_0042eaa8) {
      iVar3 = DAT_0042ea74;
    }
    iVar6 = DAT_0042ea78;
    if ((uint)((*(int *)&DAT_0042eaac) + DAT_0042ea74) < DAT_0042eaa8) {
      iVar6 = DAT_0042ea74;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_0042ea8c; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == address) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_004154d0((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          (*(int *)&DAT_0042eaac) = (*(int *)&DAT_0042eaac) + iVar3;
          FUN_00415824(puVar1,puVar1[1]);
        }
        iVar6 = FUN_004154d0(address,uVar7 - iVar3);
        if (iVar6 != 0) {
          (*(int *)&DAT_0042eaac) = (*(int *)&DAT_0042eaac) + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)address;
          puVar1[1] = puVar1[1] + local_c;
          FUN_00415824(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_004154d0(address,uVar7);
    if (iVar3 == 0) {
      FUN_00415534(address);
      uVar5 = 0xffffffff;
    }
    else {
      (*(int *)&DAT_0042eaac) = (*(int *)&DAT_0042eaac) + uVar7;
      FUN_00415724(address,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415bd4  FUN_00415bd4   (241 bytes)   [unnamed]
undefined4 __cdecl FUN_00415bd4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T size;
  uint uVar4;
  
  uVar4 = DAT_0042ea88;
  if (DAT_0042eaac < DAT_0042eaa8) {
    uVar4 = DAT_0042ea84;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_0042ea8c; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_00415824(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          size = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_0041551c((LPVOID)puVar2[puVar2[2] + 3],size);
          DAT_0042eaac = DAT_0042eaac - size;
          FUN_00415534((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_0041551c((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_0042eaac = DAT_0042eaac - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415cc8  FUN_00415cc8   (43 bytes)   [unnamed]
void __cdecl FUN_00415cc8(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_00415534((LPVOID)(param_1 + -4));
      return;
    }
    FUN_00415cf4(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415cf4  FUN_00415cf4   (263 bytes)   [unnamed]
void __cdecl FUN_00415cf4(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + -4);
    uVar3 = *puVar2;
    if ((uVar3 & 2) == 0) {
      *puVar2 = *puVar2 | 1;
    }
    else {
      puVar2 = (uint *)((int)puVar2 - *(int *)(param_1 + -8));
      *puVar2 = *puVar2 + (uVar3 & 0xfffffffc) + 4;
      if (puVar2 == (uint *)PTR_DAT_0042eaa4) {
        PTR_DAT_0042eaa4 = *(undefined **)(PTR_DAT_0042eaa4 + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_0042eaa4) {
        PTR_DAT_0042eaa4 = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_0042ea80) {
      uVar5 = (uVar3 * 2 + DAT_0042ea94) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_0042eaa4 + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_0042ea88;
      if (DAT_0042eaac < DAT_0042eaa8) {
        uVar3 = DAT_0042ea84;
      }
      if (uVar3 < *puVar2) {
        FUN_00415bd4(puVar2);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415dfc  FUN_00415dfc   (59 bytes)   [unnamed]
int * __cdecl FUN_00415dfc(int param_1)

{
  bool bVar1;
  undefined3 regHigh;
  uint size;
  int *local_8;
  
  local_8 = (int *)0x0;
  size = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_004154a8((undefined4*)&local_8,size);
  if (CONCAT31(regHigh,bVar1) != 0) {
    *local_8 = size - 4;
    local_8 = local_8 + 1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e38  FUN_00415e38   (39 bytes)   [unnamed]
uint * __cdecl FUN_00415e38(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_00415dfc(param_1);
    return puVar1;
  }
  puVar1 = FUN_00415e60(param_1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e60  FUN_00415e60   (468 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_00415e60(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (param_1 < 0xc) {
      uVar6 = 0xc;
    }
    else {
      uVar6 = param_1 + 3 & 0xfffffffc;
    }
    if (DAT_0042ea94 == 0) {
      FUN_00415910(1);
    }
    puVar1 = PTR_DAT_0042eaa4;
    if (uVar6 < DAT_0042ea80) {
      iVar3 = uVar6 * 2 + DAT_0042ea94;
      puVar4 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar4) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        *(uint *)(puVar4[2] + 4) = uVar6;
        return puVar4 + 1;
      }
      puVar4 = (uint *)PTR_DAT_0042ea9c;
      if ((undefined4 *)PTR_DAT_0042ea9c == &DAT_0042ea98) {
        for (iVar3 = uVar6 * 2 + DAT_0042ea94 + -4; iVar3 == *(int *)(iVar3 + 4); iVar3 = iVar3 + 8)
        {
        }
        puVar4 = (uint *)PTR_DAT_0042eaa4;
        if (*(uint **)(iVar3 + 4) != (uint *)0x0) {
          puVar4 = *(uint **)(iVar3 + 4);
        }
      }
    }
    else {
      uVar8 = *(uint *)PTR_DAT_0042eaa4;
      puVar4 = (uint *)PTR_DAT_0042eaa4;
      if (uVar8 < uVar6) {
        *(undefined4 *)PTR_DAT_0042eaa4 = 0xfffffffd;
        for (puVar4 = *(uint **)(puVar1 + 4); *puVar4 < uVar6; puVar4 = (uint *)puVar4[1]) {
        }
        *(uint *)PTR_DAT_0042eaa4 = uVar8;
        if (puVar4 == (uint *)PTR_DAT_0042eaa4) {
          puVar4 = &DAT_0042ea98;
        }
      }
    }
    if (puVar4 == &DAT_0042ea98) {
      iVar3 = FUN_00415910(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_00415e60(param_1);
      }
      else {
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar8 = *puVar4;
      uVar7 = (uVar8 & 0xfffffffc) - uVar6;
      if (uVar7 < 0x10) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_0042ea80 <= (uVar8 & 0xfffffffc)) {
          PTR_DAT_0042eaa4 = (undefined *)puVar4[1];
        }
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        puVar2 = puVar4 + 1;
        *(uint *)(puVar4[2] + 4) = uVar6;
      }
      else {
        uVar8 = uVar7 - 4;
        *puVar4 = uVar6;
        piVar5 = (int *)((int)puVar4 + uVar6 + 4);
        *piVar5 = uVar7 - 3;
        *(uint *)((int)piVar5 + uVar8) = uVar7;
        if (uVar8 < DAT_0042ea80) {
          iVar3 = uVar8 * 2 + DAT_0042ea94;
          *(undefined4 *)((int)puVar4 + uVar6 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar4 + uVar6 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar4 + uVar6 + 8) + 8) = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          if (puVar4 == (uint *)PTR_DAT_0042eaa4) {
            PTR_DAT_0042eaa4 = (undefined *)puVar4[1];
          }
          uVar6 = puVar4[1];
          *(uint *)(uVar6 + 8) = puVar4[2];
          *(uint *)(puVar4[2] + 4) = uVar6;
        }
        else {
          uVar8 = puVar4[2];
          *(int **)(uVar8 + 4) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 0xc) = uVar8;
          uVar8 = puVar4[1];
          *(int **)(uVar8 + 8) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 8) = uVar8;
          PTR_DAT_0042eaa4 = (undefined *)piVar5;
        }
        puVar2 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416038  FUN_00416038   (24 bytes)   [unnamed]
SIZE_T __stdcall FUN_00416038(void)

{
  _MEMORYSTATUS buffer;
  
  buffer.dwLength = 0x20;
  GlobalMemoryStatus(&buffer);
  return buffer.dwAvailPhys;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416050  FUN_00416050   (96 bytes)   [unnamed]
void __stdcall FUN_00416050(void)

{
  int *piVar1;
  LPVOID address;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = (*(int * *)&DAT_0042ea8c);
  while (piVar5 = piVar1, piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[0x23];
    piVar5[2] = piVar5[2] + -1;
    iVar7 = piVar5[2];
    piVar6 = piVar5 + iVar7 + 3;
    for (; -1 < iVar7; iVar7 = iVar7 + -1) {
      address = (LPVOID)*piVar6;
      iVar3 = *piVar5;
      iVar4 = *piVar6;
      piVar5[1] = iVar4 - (int)piVar5;
      *piVar5 = iVar4 - (int)piVar5;
      FUN_0041551c(address,iVar3 - ((int)address - (int)piVar5));
      FUN_00415534(address);
      piVar6 = piVar6 + -1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004160b0  FUN_004160b0   (296 bytes)   [unnamed]
int __cdecl FUN_004160b0(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int local_8;
  
  puVar4 = (uint *)(param_1 + -4);
  uVar1 = *puVar4 & 0xfffffffc;
  puVar2 = (uint *)((int)puVar4 + uVar1 + 4);
  if (param_2 < 0xc) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = param_2 + 3 & 0xfffffffc;
  }
  uVar6 = *puVar4 & 0xfffffffc;
  if (uVar3 != uVar6) {
    if ((*puVar2 & 1) != 0) {
      uVar6 = uVar6 + (*puVar2 & 0xfffffffc) + 4;
    }
    if (uVar6 < uVar3) {
      param_1 = 0;
    }
    else {
      local_8 = 0;
      if ((*puVar2 & 1) != 0) {
        if (DAT_0042ea80 <= (*puVar2 & 0xfffffffc)) {
          local_8 = *(int *)((int)puVar4 + uVar1 + 0xc);
        }
        if (puVar2 == (uint *)PTR_DAT_0042eaa4) {
          PTR_DAT_0042eaa4 = *(undefined **)((int)puVar4 + uVar1 + 8);
        }
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 8) + 8) =
             *(undefined4 *)((int)puVar4 + uVar1 + 0xc);
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 0xc) + 4) =
             *(undefined4 *)((int)puVar4 + uVar1 + 8);
        puVar2 = (uint *)((int)puVar4 + (*puVar2 & 0xfffffffc) + uVar1 + 8);
        *puVar2 = *puVar2 & 0xfffffffd;
        *puVar4 = (*puVar4 & 2) + uVar6;
      }
      uVar6 = uVar6 - uVar3;
      if (0xf < uVar6) {
        uVar1 = uVar6 - 4;
        uVar3 = (*puVar4 & 2) + uVar3;
        *puVar4 = uVar3;
        uVar3 = uVar3 & 0xfffffffc;
        piVar5 = (int *)((int)puVar4 + uVar3 + 4);
        *piVar5 = uVar6 - 3;
        puVar2 = (uint *)((int)puVar4 + uVar6 + 4 + uVar3);
        *puVar2 = *puVar2 | 2;
        if (uVar1 < DAT_0042ea80) {
          local_8 = uVar1 * 2 + DAT_0042ea94 + -0xc;
        }
        else if (local_8 == 0) {
          local_8 = *(int *)(PTR_DAT_0042eaa4 + 4);
        }
        *(undefined4 *)((int)puVar4 + uVar3 + 8) = *(undefined4 *)(local_8 + 4);
        *(int *)((int)puVar4 + uVar3 + 0xc) = local_8;
        *(int **)(*(int *)((int)puVar4 + uVar3 + 8) + 8) = piVar5;
        *(int **)(local_8 + 4) = piVar5;
        *(uint *)((int)piVar5 + uVar1) = uVar6;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004161d8  FUN_004161d8   (177 bytes, 3 ranges)   [unnamed]
uint * __cdecl FUN_004161d8(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + 0x1003 & 0xfffff000;
  uVar3 = param_1[-1] & 0xfffffffc;
  puVar1 = param_1;
  if (uVar3 != uVar2 - 4) {
    if (uVar3 < uVar2 - 4) {
      puVar1 = FUN_00415e38(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,uVar3);
        FUN_00415cc8((int)param_1);
      }
    }
    else if (uVar2 - 4 < 0x100000) {
      puVar1 = FUN_00415e38(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,param_2);
        FUN_00415cc8((int)param_1);
      }
    }
    else {
      FUN_0041551c((LPVOID)((int)param_1 + (uVar2 - 4)),(uVar3 + 4) - uVar2);
      param_1[-1] = uVar2 - 4;
    }
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416290  FUN_00416290   (150 bytes)   [unnamed]
uint * __cdecl FUN_00416290(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_00415cc8((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_00415e38(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_004160b0((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_00415e38(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_0041ee00(puVar1,param_1,param_2);
        FUN_00415cc8((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_004161d8(param_1,param_2);
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416328  FUN_00416328   (26 bytes)   [unnamed]
uint __cdecl FUN_00416328(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416344  FUN_00416344   (1 bytes)   [unnamed]
void __stdcall FUN_00416344(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416348  FUN_00416348   (1 bytes)   [unnamed]
void __stdcall FUN_00416348(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041662c  FUN_0041662c   (55 bytes)   [unnamed]
void __cdecl FUN_0041662c(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42eacc);
  std::allocator::allocator_417b58(local_30);
  FUN_00417c40(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416664  FUN_00416664   (55 bytes)   [unnamed]
void __cdecl FUN_00416664(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42ead4);
  std::allocator::allocator(local_30);
  FUN_00417b94(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041669c  FUN_0041669c   (152 bytes)   [unnamed]
void __cdecl FUN_0041669c(int str)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = std::string::__data(str);
  if (iVar1 != 0) {
    piVar2 = (int *)std::string::__getRepOf(str);
    iVar1 = FUN_00416754(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)std::string::__getRepOf(str);
      iVar1 = FUN_00416760(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    std::string::__getRepOf(str);
    std::allocator::allocator_416814(local_c);
    FUN_0041683c();
    std::string::size(str);
    std::string::__getRepOf(str);
    std::allocator::allocator_416854(local_14);
    FUN_00416890();
    local_18 = 0;
    FUN_004168a0((int)local_28,str,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416734  std::string::__data   (11 bytes)   [analysis]
//   pointer to the character data
undefined4 __cdecl std::string::__data(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00416740  std::string::__getRepOf   (20 bytes)   [analysis]
//   the rep header of a string (data - 12)
int __cdecl std::string::__getRepOf(int param_1)

{
  int iVar1;
  
  iVar1 = std::string::__data(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416754  FUN_00416754   (11 bytes)   [unnamed]
int __cdecl FUN_00416754(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416760  FUN_00416760   (34 bytes)   [unnamed]
int __cdecl FUN_00416760(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = std::string::__nullref();
  if (param_1 != piVar1) {
    iVar2 = FUN_004167f4(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416784  std::string::__nullref   (6 bytes)   [analysis]
//   the shared empty rep (g_nullStringRep)
undefined4 * __stdcall std::string::__nullref(void)

{
  return &g_nullStringRep;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041678c  FUN_0041678c   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041678c(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fac8);
  FUN_004167c0(param_1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004167c0  FUN_004167c0   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_004167c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fad0);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004167f4  FUN_004167f4   (32 bytes)   [unnamed]
int __cdecl FUN_004167f4(int *param_1)

{
  int *piVar1;
  
  piVar1 = std::string::__nullref();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416814  std::allocator::allocator_416814   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_416814(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fad8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041683c  FUN_0041683c   (15 bytes)   [unnamed]
void __stdcall FUN_0041683c(void)

{
  FUN_0041684c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041684c  FUN_0041684c   (5 bytes)   [unnamed]
void __stdcall FUN_0041684c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416854  std::allocator::allocator_416854   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_416854(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fae0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041687c  std::string::size   (20 bytes)   [analysis]
//   length of the string (rep->length)
undefined4 __cdecl std::string::size(int self)

{
  int rep;
  
  rep = std::string::__getRepOf(self);
  return *(undefined4 *)(rep + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00416890  FUN_00416890   (15 bytes)   [unnamed]
void __stdcall FUN_00416890(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004168a0  FUN_004168a0   (35 bytes)   [unnamed]
int __cdecl FUN_004168a0(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_004168c4(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004168c4  FUN_004168c4   (52 bytes)   [unnamed]
int __cdecl FUN_004168c4(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fae8);
  std::allocator::allocator(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004168f8  std::allocator::allocator   (37 bytes)   [analysis]
//   (empty)
undefined4 __cdecl std::allocator::allocator(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42faf0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416920  FUN_00416920   (58 bytes)   [unnamed]
int * __cdecl FUN_00416920(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0041695c((undefined4 *)&DAT_00430db0);
  piVar2 = (int *)FUN_00416968(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_0041e54c(param_1,(uint *)&DAT_00430db0,'\x01',0x20,(undefined*)FUN_00416980);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041695c  FUN_0041695c   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_0041695c(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416968  FUN_00416968   (23 bytes)   [unnamed]
undefined4 __cdecl FUN_00416968(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041bed0(*param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416980  FUN_00416980   (53 bytes)   [unnamed]
void __cdecl FUN_00416980(int param_1,uint *param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_0041bf00();
    return;
  }
  if (param_1 == 1) {
    FUN_004169b8();
    return;
  }
  FUN_0041bf74(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004169b8  FUN_004169b8   (83 bytes)   [unnamed]
undefined4 * __stdcall FUN_004169b8(void)

{
  undefined4 *facet2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4307e0);
  facet2 = (undefined4 *)operator_new();
  if (facet2 != (undefined4 *)0x0) {
    std::locale::facet::facet_41cdc4(facet2,0,0,1);
  }
  *sehChainHead = sehPrevFrame;
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a0c  FUN_00416a0c   (44 bytes)   [unnamed]
undefined4 * __cdecl FUN_00416a0c(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430830);
  FUN_0041bff4(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416a80  FUN_00416a80   (66 bytes)   [unnamed]
int * __cdecl FUN_00416a80(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x43086c);
  FUN_00419864(param_1,(int *)(param_2 + 0x10));
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416b00  FUN_00416b00   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00416b00(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00416b0c  FUN_00416b0c   (18 bytes)   [unnamed]
int __cdecl FUN_00416b0c(int *param_1,int param_2)

{
  return param_2 * 4 + *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416b20  FUN_00416b20   (101 bytes)   [unnamed]
int * __cdecl FUN_00416b20(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fb18);
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_2 != 0) {
    iVar1 = operator_new_array();
    *param_1 = iVar1;
    do {
      param_2 = param_2 + -1;
      *(undefined4 *)(*param_1 + param_2 * 4) = *param_3;
    } while (param_2 != 0);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416bd0  std::string::operator_assign   (111 bytes)   [analysis]
//   std::string assignment from another string (shares the rep)
int __cdecl std::string::operator_assign(int self,int other)

{
  int *piVar1;
  int iVar2;
  uint *s;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (other != self) {
    piVar1 = (int *)std::string::__getRepOf(other);
    iVar2 = FUN_00416754(piVar1);
    if (iVar2 < 1) {
      s = (uint *)FUN_00416c58(other);
      std::string::assign_cstr(self,s);
    }
    else {
      piVar1 = (int *)std::string::__getRepOf(other);
      FUN_00416c40(piVar1);
      FUN_0041669c(self);
      local_8 = std::string::__data(other);
      FUN_004168a0((int)local_18,self,&local_8);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c40  FUN_00416c40   (21 bytes)   [unnamed]
void __cdecl FUN_00416c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = std::string::__nullref();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c58  FUN_00416c58   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_00416c58(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = std::string::__data(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416c68  std::string::assign_cstr   (376 bytes)   [analysis]
//   assigns a NUL-terminated string
int __cdecl std::string::assign_cstr(int self,uint *s)

{
  bool bVar1;
  undefined1 *puVar2;
  uint *s2;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *rep;
  uint n1;
  undefined4 *sehChainHead;
  undefined4 uVar9;
  code *copyCtor;
  uint uVar11;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_160 [16];
  undefined1 exceptMsg [240];
  int local_60;
  undefined1 local_5a;
  char local_59;
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 logicError [6];
  
  __InitExceptBlockLDTC(0x42fb58);
  if (s == (uint *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar11 = 1;
    copyCtor = std::logic_error::logic_error_copy;
    uVar9 = 0;
    ehContext = 0x14;
    std::allocator::allocator(local_58);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00431a88);
    s2 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,s2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_004079c4,logicError,uVar9,(undefined*)copyCtor,uVar11,throwFlags,throwFile,throwLine);
  }
  uVar9 = FUN_004172e8();
  local_59 = (char)uVar9;
  bVar1 = FUN_00416e3c((char *)s,&local_59);
  if (bVar1) {
    piVar4 = (int *)std::string::__getRepOf(self);
    iVar5 = FUN_00416754(piVar4);
    if (iVar5 == 1) {
      iVar5 = std::string::__getRepOf(self);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_004172e8();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)std::string::__data(self);
      FUN_00416e54(puVar6,puVar2);
    }
    else {
      FUN_0041669c(self);
      piVar4 = std::string::__nullref();
      FUN_00416c40(piVar4);
      rep = std::string::__nullref();
      local_60 = std::string::__rep_data((int)rep);
      FUN_004168a0((int)local_160,self,&local_60);
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar11 = FUN_00416e64(s);
    n1 = std::string::size(self);
    self = FUN_004172f8(self,0,n1,(uint)s,uVar11);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416de0  __rwstd::except_msg_string::msgstr   (8 bytes)   [analysis]
//   the formatted message text
undefined4 __cdecl __rwstd::except_msg_string::msgstr(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416de8  std::logic_error::logic_error_416de8   (83 bytes)   [analysis]
//   constructs a std::logic_error from a message string
//   also: std::logic_error::logic_error_416de8 [rtti:vtable-store]
undefined4 * __cdecl std::logic_error::logic_error_416de8(undefined4 *logicError,int str)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430890);
  std::exception::exception(logicError);
  *logicError = &std::logic_error::vftable;
  FUN_00419008((int)(logicError + 2),str);
  *sehChainHead = sehPrevFrame;
  return logicError;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416e3c  FUN_00416e3c   (21 bytes)   [unnamed]
bool __cdecl FUN_00416e3c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416e54  FUN_00416e54   (15 bytes)   [unnamed]
void __cdecl FUN_00416e54(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416e64  FUN_00416e64   (15 bytes)   [unnamed]
char * __cdecl FUN_00416e64(uint *s)

{
  char *len;
  
  len = strlen(s);
  return len;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416e74  std::string::string_from_cstr   (304 bytes)   [analysis (usage pattern)]
//   std::string(const char*)
int __cdecl std::string::string_from_cstr(int self,uint *s)

{
  undefined1 *msgText;
  uint *s2;
  int *rep;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  uint n;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_15c [16];
  undefined1 exceptMsg [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 logicError [6];
  
  __InitExceptBlockLDTC(0x42fbb4);
  ehContext = 8;
  FUN_00416fc4(self,0);
  if (s == (uint *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = std::logic_error::logic_error_copy;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator(local_58);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00431a88);
    s2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,s2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_004079c4,logicError,objectDtor,(undefined*)copyCtor,n,throwFlags,throwFile,throwLine);
  }
  n = FUN_00416e64(s);
  ehContext = 8;
  rep = std::string::__getRep(self,n,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_004168a0((int)local_15c,self,&local_5c);
  puVar4 = (undefined4 *)std::string::__data(self);
  FUN_00416fa4(puVar4,s,n);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416fa4  FUN_00416fa4   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_00416fa4(undefined4 *param_1,undefined4 *src,uint n)

{
  memcpy(param_1,src,n);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416fc4  FUN_00416fc4   (55 bytes)   [unnamed]
int __cdecl FUN_00416fc4(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fbec);
  std::allocator::allocator_416854(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00416ffc  std::string::__getRep   (191 bytes)   [analysis (usage pattern)]
//   allocates a string representation of the given capacity
int * __cdecl std::string::__getRep(undefined4 alloc,uint capacity,uint length)

{
  int *nullRep;
  int *rep;
  undefined4 *allocArg;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_24 [3];
  undefined1 nul;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (capacity < length) {
    capacity = length;
  }
  if (length == 0 && capacity == 0) {
    nullRep = std::string::__nullref();
    FUN_00416c40(nullRep);
    rep = std::string::__nullref();
  }
  else {
    std::allocator::allocator_416854(local_c);
    rep = (int *)FUN_004170bc();
    allocArg = FUN_00417168(local_24,0);
    nullRep = rep;
    uVar4 = std::allocator::allocator_416814(local_14);
    FUN_0041719c(uVar4,nullRep,allocArg);
    iVar5 = std::string::__rep_data((int)rep);
    nul = 0;
    FUN_00417298(local_c,iVar5,&nul);
    rep[1] = capacity;
    FUN_004172cc(rep,1);
    iVar5 = std::string::__rep_data((int)rep);
    rep[2] = length;
    *(undefined1 *)(iVar5 + length) = 0;
  }
  return rep;
}

// ----------------------------------------------------------------------------------------------------
// 0x004170bc  FUN_004170bc   (106 bytes)   [unnamed]
int __stdcall FUN_004170bc(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 sehPrevFrame;
  undefined4 badAlloc;
  
  __InitExceptBlockLDTC(0x42fc04);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00404cec;
    objectDtor = 0;
    std::bad_alloc::bad_alloc(&badAlloc);
    _ThrowExceptionLDTC((uint *)&DAT_00404c94,&badAlloc,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417168  FUN_00417168   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_00417168(undefined4 *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fc18);
  FUN_004167c0(param_1,param_2 + -1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041719c  FUN_0041719c   (21 bytes)   [unnamed]
void __cdecl FUN_0041719c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_004171b4(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004171b4  FUN_004171b4   (78 bytes)   [unnamed]
void __cdecl FUN_004171b4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fc30);
  puVar1 = (undefined4 *)FUN_00417204(0xc,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00417264(puVar1,param_2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417204  FUN_00417204   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_00417204(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417264  FUN_00417264   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_00417264(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fc50);
  FUN_004167c0(param_1,*param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417298  FUN_00417298   (21 bytes)   [unnamed]
void __cdecl FUN_00417298(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_004172b0(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004172b0  FUN_004172b0   (26 bytes)   [unnamed]
void __cdecl FUN_004172b0(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_00417204(1,param_1);
  *puVar1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004172cc  FUN_004172cc   (25 bytes)   [unnamed]
void __cdecl FUN_004172cc(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = std::string::__nullref();
  if (param_1 != piVar1) {
    *param_1 = param_2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004172e8  FUN_004172e8   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004172e8(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004172ec  std::string::__rep_data   (11 bytes)   [analysis]
//   character data of a rep (rep + 12)
int __cdecl std::string::__rep_data(int rep)

{
  return rep + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004172f8  FUN_004172f8   (40 bytes)   [unnamed]
int __cdecl FUN_004172f8(int str,uint pos,uint n1,uint s,uint param_5)

{
  std::string::replace(str,pos,n1,s,param_5,0,param_5);
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417320  std::string::replace   (1015 bytes)   [analysis]
//   replace(pos, n1, const char *s, n2, ...): with n1 = 0 at the end it appends s
int __cdecl std::string::replace(int self,uint pos,uint n1,uint s,uint n2,uint param_6, uint param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *src;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *sehChainHead;
  undefined4 uVar9;
  undefined *copyCtor;
  uint n;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  int local_a0;
  int *rep;
  uint local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x42fcb0);
  uVar1 = std::string::size(self);
  if ((uVar1 < pos) || (n2 < param_6)) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_004060a8;
    uVar9 = 0;
    ehContext = 0x14;
    std::allocator::allocator(local_80);
    uVar1 = std::string::size(self);
    if (n2 < uVar1) {
      std::string::size(self);
    }
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00431a84);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040604c,outOfRange,uVar9,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_84 = iVar4 - pos;
  if (n1 < local_84) {
    local_84 = n1;
  }
  uVar1 = n2 - param_6;
  if (param_7 < uVar1) {
    uVar1 = param_7;
  }
  iVar4 = std::string::size(self);
  if (g_stringNpos - uVar1 <= iVar4 - local_84) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00405f50;
    uVar9 = 0;
    ehContext = 0x2c;
    std::allocator::allocator(local_8c);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00431a80);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00405ef4,lengthError,uVar9,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_90 = (iVar4 - local_84) + uVar1;
  if (local_90 == 0) {
    FUN_0041669c(self);
    piVar5 = std::string::__nullref();
    FUN_00416c40(piVar5);
    src = std::string::__nullref();
    local_94 = std::string::__rep_data((int)src);
    FUN_004168a0((int)local_290,self,&local_94);
    goto LAB_004176fd;
  }
  iVar4 = std::string::size(self);
  local_98 = (iVar4 - local_84) - pos;
  piVar5 = (int *)std::string::__getRepOf(self);
  iVar4 = FUN_00416754(piVar5);
  if ((iVar4 < 2) && (n = FUN_004177c8(self), local_90 <= n)) {
    if ((s != 0) && (n = std::string::data(self), n <= s)) {
      iVar4 = std::string::data(self);
      iVar7 = std::string::size(self);
      if (s < (uint)(iVar4 + iVar7)) goto LAB_004175bc;
    }
    if (local_98 != 0) {
      n = local_98;
      iVar4 = std::string::__data(self);
      src = (undefined4 *)(iVar4 + pos + n1);
      iVar4 = std::string::__data(self);
      FUN_004177a8((undefined4 *)(iVar4 + pos + uVar1),src,n);
    }
    if (uVar1 != 0) {
      src = (undefined4 *)(s + param_6);
      iVar4 = std::string::__data(self);
      FUN_004177a8((undefined4 *)(iVar4 + pos),src,uVar1);
    }
    iVar4 = std::string::__getRepOf(self);
    uVar1 = local_90;
    *(uint *)(iVar4 + 8) = local_90;
    iVar4 = std::string::__data(self);
    puVar2 = (undefined1 *)(iVar4 + uVar1);
    uVar9 = FUN_004172e8();
    *puVar2 = (char)uVar9;
  }
  else {
LAB_004175bc:
    rep = std::string::__getRep(self,local_90,local_90);
    if (pos != 0) {
      n = pos;
      src = (undefined4 *)std::string::__data(self);
      puVar8 = (undefined4 *)std::string::__rep_data((int)rep);
      FUN_00416fa4(puVar8,src,n);
    }
    if (uVar1 != 0) {
      src = (undefined4 *)(s + param_6);
      n = uVar1;
      iVar4 = std::string::__rep_data((int)rep);
      FUN_00416fa4((undefined4 *)(iVar4 + pos),src,n);
    }
    if (local_98 != 0) {
      n = local_98;
      iVar4 = std::string::__data(self);
      src = (undefined4 *)(iVar4 + pos + n1);
      iVar4 = std::string::__rep_data((int)rep);
      FUN_00416fa4((undefined4 *)(iVar4 + pos + uVar1),src,n);
    }
    FUN_0041669c(self);
    local_a0 = std::string::__rep_data((int)rep);
    FUN_004168a0((int)local_2a0,self,&local_a0);
  }
LAB_004176fd:
  iVar4 = std::string::__data(self);
  *sehChainHead = sehPrevFrame;
  return iVar4 + pos;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417760  std::length_error::length_error   (69 bytes)   [analysis]
//   constructs a std::length_error from a message string
//   also: std::length_error::length_error [rtti:vtable-store]
undefined4 * __cdecl std::length_error::length_error(undefined4 *self,int what)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430908);
  std::logic_error::logic_error_416de8(self,what);
  *self = &std::length_error::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004177a8  FUN_004177a8   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_004177a8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  FUN_0041ee00(param_1,param_2,param_3);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004177c8  FUN_004177c8   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_004177c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = std::string::__getRepOf(param_1);
  uVar2 = FUN_004177e0(iVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004177e0  FUN_004177e0   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004177e0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004177ec  std::string::data   (15 bytes)   [analysis]
//   pointer to the character data
undefined4 __cdecl std::string::data(int self)

{
  undefined4 data2;
  
  data2 = std::string::__data(self);
  return data2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041790c  FUN_0041790c   (152 bytes)   [unnamed]
void __cdecl FUN_0041790c(int str)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004179a4(str);
  if (iVar1 != 0) {
    piVar2 = (int *)std::string::__getRepOf_4179b0(str);
    iVar1 = FUN_004179c4(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)std::string::__getRepOf_4179b0(str);
      iVar1 = FUN_004179d0(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    std::string::__getRepOf_4179b0(str);
    std::allocator::allocator_417a88(local_c);
    FUN_00417ab0();
    std::string::size_417b80(str);
    std::string::__getRepOf_4179b0(str);
    std::allocator::allocator_417ac8(local_14);
    FUN_00417af0();
    local_18 = 0;
    FUN_00417b00((int)local_28,str,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179a4  FUN_004179a4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004179a4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004179b0  std::string::__getRepOf_4179b0   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00416740 (20 bytes; the code occurs several times, e.g. one template instance per type). the rep header of a string (data - 12)
int __cdecl std::string::__getRepOf_4179b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004179a4(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179c4  FUN_004179c4   (11 bytes)   [unnamed]
int __cdecl FUN_004179c4(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179d0  FUN_004179d0   (34 bytes)   [unnamed]
int __cdecl FUN_004179d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004179f4();
  if (param_1 != piVar1) {
    iVar2 = FUN_00417a68(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179f4  FUN_004179f4   (6 bytes)   [unnamed]
undefined * __stdcall FUN_004179f4(void)

{
  return &DAT_0042fd34;
}

// ----------------------------------------------------------------------------------------------------
// 0x004179fc  FUN_004179fc   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_004179fc(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fd48);
  FUN_00417a34(param_1,1);
  *(undefined2 *)(param_1 + 3) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417a34  FUN_00417a34   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_00417a34(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fd50);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417a68  FUN_00417a68   (32 bytes)   [unnamed]
int __cdecl FUN_00417a68(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004179f4();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417a88  std::allocator::allocator_417a88   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_417a88(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fd58);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ab0  FUN_00417ab0   (15 bytes)   [unnamed]
void __stdcall FUN_00417ab0(void)

{
  FUN_00417ac0();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ac0  FUN_00417ac0   (5 bytes)   [unnamed]
void __stdcall FUN_00417ac0(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ac8  std::allocator::allocator_417ac8   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_417ac8(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fd60);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417af0  FUN_00417af0   (15 bytes)   [unnamed]
void __stdcall FUN_00417af0(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417b00  FUN_00417b00   (35 bytes)   [unnamed]
int __cdecl FUN_00417b00(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_00417b24(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417b24  FUN_00417b24   (52 bytes)   [unnamed]
int __cdecl FUN_00417b24(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fd68);
  std::allocator::allocator_417b58(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417b58  std::allocator::allocator_417b58   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_417b58(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fd70);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417b80  std::string::size_417b80   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0041687c (20 bytes; the code occurs several times, e.g. one template instance per type). length of the string (rep->length)
undefined4 __cdecl std::string::size_417b80(int self)

{
  int rep;
  
  rep = std::string::__getRepOf_4179b0(self);
  return *(undefined4 *)(rep + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00417b94  FUN_00417b94   (111 bytes)   [unnamed]
int __cdecl FUN_00417b94(int param_1)

{
  undefined4 *rep;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x42fd90);
  ehContext = 8;
  local_30[1] = 0;
  FUN_00417c04(param_1,local_30 + 1);
  rep = std::string::__nullref();
  local_30[0] = std::string::__rep_data((int)rep);
  FUN_004168a0((int)local_40,param_1,local_30);
  piVar2 = std::string::__nullref();
  FUN_00416c40(piVar2);
  *sehChainHead = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417c04  FUN_00417c04   (58 bytes)   [unnamed]
int __cdecl FUN_00417c04(int param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fdb0);
  std::allocator::allocator_416854(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417c40  FUN_00417c40   (111 bytes)   [unnamed]
int __cdecl FUN_00417c40(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x42fdc8);
  ehContext = 8;
  local_30[1] = 0;
  FUN_00417ccc(param_1,local_30 + 1);
  puVar1 = FUN_004179f4();
  local_30[0] = FUN_00417d08((int)puVar1);
  FUN_00417b00((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_004179f4();
  FUN_00417d14(piVar2);
  *sehChainHead = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ccc  FUN_00417ccc   (58 bytes)   [unnamed]
int __cdecl FUN_00417ccc(int param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x42fde8);
  std::allocator::allocator_417ac8(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417d08  FUN_00417d08   (11 bytes)   [unnamed]
int __cdecl FUN_00417d08(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417d14  FUN_00417d14   (21 bytes)   [unnamed]
void __cdecl FUN_00417d14(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004179f4();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417d8c  FUN_00417d8c   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_00417d8c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430940);
  *param_1 = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e44  FUN_00417e44   (70 bytes)   [unnamed]
int * __cdecl FUN_00417e44(int *param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430958);
  if (DAT_004348a8 == 0) {
    FUN_0041dd4c();
  }
  iVar1 = DAT_004348a8;
  *param_1 = DAT_004348a8;
  FUN_0041c158(iVar1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417eac  FUN_00417eac   (51 bytes)   [unnamed]
void __cdecl FUN_00417eac(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0xc;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ee0  FUN_00417ee0   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_00417ee0(void)

{
  return 0xffffffff;
}

} // namespace tea

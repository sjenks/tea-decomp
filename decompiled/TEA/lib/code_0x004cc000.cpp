// TEA.exe — runtime / library code "code_0x004cc000"
// 163 functions, 0x004cc090..0x004cffa0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004cc090  calloc   (43 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414f4c. malloc(n*size) then memset 0
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
// 0x004cc0bc  operator_delete   (15 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f78 (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called on `this` at the end of every deleting destructor
undefined4 __stdcall operator_delete(void)

{
  undefined4 in_stack_00000004;
  
  free();
  return in_stack_00000004;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc0cc  operator_delete_array   (15 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f88 (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
undefined4 __stdcall operator_delete_array(void)

{
  undefined4 uVar1;
  
  uVar1 = operator_delete();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc0dc  set_new_handler   (19 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00414f98 (19 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
undefined4 __cdecl set_new_handler(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_0051b9f4);
  (*(undefined4 *)&DAT_0051b9f4) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc0f0  operator_new   (144 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00414fac. result is null-checked and passed to a constructor
int __stdcall operator_new(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x512aa4);
  while (iVar1 = malloc(), iVar1 == 0) {
    if (DAT_0051b9f4 == (code *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    else {
      ((code *)DAT_0051b9f4)();
    }
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc180  operator_new_array   (15 bytes)   [analysis (usage pattern, less certain) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x0041503c (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours.
int __stdcall operator_new_array(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc190  FUN_004cc190   (84 bytes)   [unnamed]
void __stdcall FUN_004cc190(void)

{
  undefined **badAlloc;
  
  __InitExceptBlockLDTC(0x512aec);
  badAlloc = &std::bad_alloc::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc1f0  FUN_004cc1f0   (63 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004cc1f0(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512b34);
  _DAT_0051b9f8 = &std::bad_alloc::vftable;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc230  FUN_004cc230   (49 bytes)   [unnamed]
void __stdcall FUN_004cc230(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512b48);
  std::bad_alloc::_dtor((undefined4 *)&DAT_0051b9f8,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc264  _vector_delete_ldtc_   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00415120. Borland RTL array destructor helper (ptr, elemSize, count, mode, dtor)
void __cdecl _vector_delete_ldtc_(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  FUN_004cc288(param_1,param_2,param_3,param_4,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc288  FUN_004cc288   (245 bytes, 2 ranges)   [unnamed]
int __cdecl FUN_004cc288(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512b70);
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
        FUN_004e5f84((uint *)"Illegal mode in _vector_delete_");
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
// 0x004cc3c4  _vector_new_ldtc_   (274 bytes, 2 ranges)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00415280. Borland RTL array constructor helper (ptr, elemSize, count, mode, ctor)
int * __cdecl _vector_new_ldtc_(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  int local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512bc4);
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
          FUN_004e5f84((uint *)"Illegal mode in _vector_new_");
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
// 0x004cc580  FUN_004cc580   (106 bytes)   [unnamed]
bool FUN_004cc580(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID mem;
  uint dwSize;
  
  if (DAT_00512c18 == 0) {
    if ((DAT_0051c3fc == 2) || (DAT_0051c3fc == 1)) {
      DAT_00512c18 = 0x100000;
    }
    else {
      DAT_00512c18 = 0x400000;
    }
  }
  dwSize = (DAT_00512c18 + param_1) - 1U & ~(DAT_00512c18 - 1U);
  mem = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = mem;
  if (mem != (LPVOID)0x0) {
    *param_3 = dwSize;
  }
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc5ec  FUN_004cc5ec   (39 bytes)   [unnamed]
bool FUN_004cc5ec(undefined4 *param_1,SIZE_T size)

{
  LPVOID mem;
  
  mem = VirtualAlloc((LPVOID)*param_1,size,0x1000,4);
  *param_1 = mem;
  return mem != (LPVOID)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc614  FUN_004cc614   (75 bytes)   [unnamed]
undefined4 FUN_004cc614(LPVOID address,int param_2)

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
  FUN_004cc660(address,(int)lpAddress - (int)address);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc660  FUN_004cc660   (24 bytes)   [unnamed]
undefined4 FUN_004cc660(LPVOID address,SIZE_T size)

{
  BOOL ok;
  
  ok = VirtualFree(address,size,0x4000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc678  FUN_004cc678   (25 bytes)   [unnamed]
undefined4 FUN_004cc678(LPVOID address)

{
  BOOL ok;
  
  ok = VirtualFree(address,0,0x8000);
  if (ok != 1) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc6b4  FUN_004cc6b4   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_004cc6b4(int *param_1,int *param_2,int *param_3)

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
// 0x004cc730  FUN_004cc730   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004cc730(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc734  malloc   (16 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004155f0 (16 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called by operator new in a retry loop
undefined4 __stdcall malloc(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00512cc8)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc744  free   (16 bytes)   [analysis (usage pattern) (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00415600 (16 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. called by operator delete
void __stdcall free(void)

{
  (*(code *)PTR_FUN_00512cc4)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc754  FUN_004cc754   (22 bytes)   [unnamed]
undefined4 __stdcall FUN_004cc754(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_00512ccc)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc76c  FUN_004cc76c   (72 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004cc76c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cc730();
  if (iVar1 == 0) {
    PTR_FUN_00512cc4 = (undefined*)FUN_004cce0c;
    PTR_FUN_00512cc8 = (undefined*)FUN_004ccf7c;
    PTR_FUN_00512ccc = (undefined*)FUN_004cd3d4;
    PTR_LAB_00512cd0 = (undefined*)FUN_004cd194;
    _DAT_00512cc0 = 1;
  }
  _DAT_00512cbc = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc7b4  FUN_004cc7b4   (24 bytes)   [unnamed]
void __cdecl FUN_004cc7b4(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_004cc76c(1);
  (*(code *)PTR_FUN_00512cc4)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc7cc  FUN_004cc7cc   (24 bytes)   [unnamed]
void __cdecl FUN_004cc7cc(undefined4 param_1)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_004cc76c(1);
  (*(code *)PTR_FUN_00512cc8)(param_1,extraout_EDX,uVar1,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc7e4  FUN_004cc7e4   (30 bytes)   [unnamed]
void __cdecl FUN_004cc7e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  FUN_004cc76c(1);
  (*(code *)PTR_FUN_00512ccc)(param_2,param_1,uVar1,param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc824  FUN_004cc824   (1 bytes)   [unnamed]
void __stdcall FUN_004cc824(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc828  FUN_004cc828   (64 bytes)   [unnamed]
void __stdcall FUN_004cc828(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0xc; iVar2 < (*(int *)&DAT_00512ce4); iVar2 = iVar2 + 4) {
    iVar1 = iVar2 * 2 + DAT_00512cf8;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar2 = (*(int *)&DAT_00512ce4) * 2 + DAT_00512cf8;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cc868  FUN_004cc868   (255 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_004cc868(uint *param_1,uint param_2,uint param_3)

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
    param_1[0x23] = (uint)DAT_00512cf0;
    param_1[0x24] = 0;
    if (DAT_00512cf0 == (uint *)0x0) {
      _DAT_00512cf4 = param_1;
    }
    else {
      DAT_00512cf0[0x24] = (uint)param_1;
    }
    DAT_00512cf0 = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if ((*(uint * *)&DAT_00512cf8) == (uint *)0x0) {
      uVar5 = DAT_00512ce4 * 2 + 3 & 0xfffffffc;
      (*(uint * *)&DAT_00512cf8) = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_004cc828();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_00512d08;
    if (uVar5 < DAT_00512ce4) {
      puVar2 = (undefined *)((int)(*(uint * *)&DAT_00512cf8) + uVar5 * 2 + -0xc);
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
// 0x004cc968  FUN_004cc968   (235 bytes)   [unnamed]
undefined4 __cdecl FUN_004cc968(uint *param_1,uint param_2)

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
    if ((*puVar3 & 0xfffffffc) < DAT_00512ce4) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_00512cf8 + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_00512cf8) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_00512cf8 + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar1 = *param_1;
    *puVar3 = *puVar3 + (uVar4 - uVar1) + -4;
    *(undefined4 *)(iVar2 + (*puVar3 & 0xfffffffc)) = 0;
    FUN_004cce38(iVar2);
    *param_1 = *param_1 + (uVar4 - uVar1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cca54  FUN_004cca54   (706 bytes)   [unnamed]
undefined4 __cdecl FUN_004cca54(int param_1)

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
  if (DAT_00512d0c == 0) {
    DAT_00512d0c = FUN_004cd17c();
  }
  puVar1 = DAT_00512cf0;
  if (DAT_00512cf8 == 0) {
    uVar7 = uVar7 + ((*(int *)&DAT_00512ce4) * 2 + 0x109fU & 0xfffff000);
  }
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
    if (uVar7 < puVar1[1] - *puVar1) {
      iVar3 = DAT_00512cdc;
      if ((uint)((*(int *)&DAT_00512d10) + DAT_00512cd8) < DAT_00512d0c) {
        iVar3 = DAT_00512cd8;
      }
      iVar6 = DAT_00512cdc;
      if ((uint)((*(int *)&DAT_00512d10) + DAT_00512cd8) < DAT_00512d0c) {
        iVar6 = DAT_00512cd8;
      }
      if (puVar1[1] < (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1) {
        uVar7 = puVar1[1];
      }
      else {
        iVar3 = DAT_00512cdc;
        if ((uint)((*(int *)&DAT_00512d10) + DAT_00512cd8) < DAT_00512d0c) {
          iVar3 = DAT_00512cd8;
        }
        iVar6 = DAT_00512cdc;
        if ((uint)((*(int *)&DAT_00512d10) + DAT_00512cd8) < DAT_00512d0c) {
          iVar6 = DAT_00512cd8;
        }
        uVar7 = (iVar3 + -1 + uVar7 & ~(iVar6 - 1U)) + *puVar1;
      }
      iVar3 = FUN_004cc614((LPVOID)(*puVar1 + (int)puVar1),uVar7 - *puVar1);
      if (iVar3 != 0) {
        (*(int *)&DAT_00512d10) = (*(int *)&DAT_00512d10) + (uVar7 - *puVar1);
        FUN_004cc968(puVar1,uVar7);
        return 0;
      }
      iVar3 = FUN_004cc614((LPVOID)(*puVar1 + (int)puVar1),0x1000);
      if (iVar3 != 0) {
        (*(int *)&DAT_00512d10) = (*(int *)&DAT_00512d10) + 0x1000;
        FUN_004cc968(puVar1,*puVar1 + 0x1000);
        return 0;
      }
      return 0xffffffff;
    }
  }
  uVar4 = DAT_00512cd4;
  if (DAT_00512cd4 <= uVar7 + 0x1000) {
    uVar4 = uVar7 + 0x1000;
  }
  bVar2 = FUN_004cc580(uVar4,(undefined4*)&address,&local_c);
  if (CONCAT31(regHigh,bVar2) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = DAT_00512cdc;
    if ((uint)((*(int *)&DAT_00512d10) + DAT_00512cd8) < DAT_00512d0c) {
      iVar3 = DAT_00512cd8;
    }
    iVar6 = DAT_00512cdc;
    if ((uint)((*(int *)&DAT_00512d10) + DAT_00512cd8) < DAT_00512d0c) {
      iVar6 = DAT_00512cd8;
    }
    uVar7 = uVar7 + iVar3 + 0xfff & ~(iVar6 - 1U);
    for (puVar1 = DAT_00512cf0; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[0x23]) {
      if (((uint *)(puVar1[1] + (int)puVar1) == address) && ((int)puVar1[2] < 0x20)) {
        iVar3 = puVar1[1] - *puVar1;
        if (iVar3 != 0) {
          iVar6 = FUN_004cc614((LPVOID)(*puVar1 + (int)puVar1),iVar3);
          if (iVar6 == 0) {
            return 0xffffffff;
          }
          (*(int *)&DAT_00512d10) = (*(int *)&DAT_00512d10) + iVar3;
          FUN_004cc968(puVar1,puVar1[1]);
        }
        iVar6 = FUN_004cc614(address,uVar7 - iVar3);
        if (iVar6 != 0) {
          (*(int *)&DAT_00512d10) = (*(int *)&DAT_00512d10) + (uVar7 - iVar3);
          uVar4 = puVar1[2];
          puVar1[2] = puVar1[2] + 1;
          puVar1[uVar4 + 3] = (uint)address;
          puVar1[1] = puVar1[1] + local_c;
          FUN_004cc968(puVar1,(uVar7 + *puVar1) - iVar3);
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_004cc614(address,uVar7);
    if (iVar3 == 0) {
      FUN_004cc678(address);
      uVar5 = 0xffffffff;
    }
    else {
      (*(int *)&DAT_00512d10) = (*(int *)&DAT_00512d10) + uVar7;
      FUN_004cc868(address,uVar7,local_c);
      uVar5 = 0;
    }
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ccd18  FUN_004ccd18   (241 bytes)   [unnamed]
undefined4 __cdecl FUN_004ccd18(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  SIZE_T size;
  uint uVar4;
  
  uVar4 = DAT_00512cec;
  if (DAT_00512d10 < DAT_00512d0c) {
    uVar4 = DAT_00512ce8;
  }
  if (uVar4 <= *param_1 - 0xc) {
    for (puVar2 = DAT_00512cf0; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0x23]) {
      if ((int)param_1 + (*param_1 & 0xfffffffc) + 4 == (int)puVar2 + (*puVar2 - 4)) {
        uVar4 = *puVar2 - (*param_1 - 0xc & ~(uVar4 - 1));
        FUN_004cc968(puVar2,uVar4);
        while (uVar4 + (int)puVar2 <= puVar2[puVar2[2] + 2]) {
          puVar2[2] = puVar2[2] - 1;
          size = *puVar2 - (puVar2[puVar2[2] + 3] - (int)puVar2);
          FUN_004cc660((LPVOID)puVar2[puVar2[2] + 3],size);
          DAT_00512d10 = DAT_00512d10 - size;
          FUN_004cc678((LPVOID)puVar2[puVar2[2] + 3]);
          uVar1 = puVar2[puVar2[2] + 3];
          puVar2[1] = uVar1 - (int)puVar2;
          *puVar2 = uVar1 - (int)puVar2;
        }
        FUN_004cc660((LPVOID)(uVar4 + (int)puVar2),*puVar2 - uVar4);
        DAT_00512d10 = DAT_00512d10 - (*puVar2 - uVar4);
        *puVar2 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cce0c  FUN_004cce0c   (43 bytes)   [unnamed]
void __cdecl FUN_004cce0c(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_004cc678((LPVOID)(param_1 + -4));
      return;
    }
    FUN_004cce38(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cce38  FUN_004cce38   (263 bytes)   [unnamed]
void __cdecl FUN_004cce38(int param_1)

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
      if (puVar2 == (uint *)PTR_DAT_00512d08) {
        PTR_DAT_00512d08 = *(undefined **)(PTR_DAT_00512d08 + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_00512d08) {
        PTR_DAT_00512d08 = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_00512ce4) {
      uVar5 = (uVar3 * 2 + DAT_00512cf8) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_00512d08 + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_00512cec;
      if (DAT_00512d10 < DAT_00512d0c) {
        uVar3 = DAT_00512ce8;
      }
      if (uVar3 < *puVar2) {
        FUN_004ccd18(puVar2);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ccf40  FUN_004ccf40   (59 bytes)   [unnamed]
int * __cdecl FUN_004ccf40(int param_1)

{
  bool bVar1;
  undefined3 regHigh;
  uint size;
  int *local_8;
  
  local_8 = (int *)0x0;
  size = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_004cc5ec((undefined4*)&local_8,size);
  if (CONCAT31(regHigh,bVar1) != 0) {
    *local_8 = size - 4;
    local_8 = local_8 + 1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ccf7c  FUN_004ccf7c   (39 bytes)   [unnamed]
uint * __cdecl FUN_004ccf7c(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_004ccf40(param_1);
    return puVar1;
  }
  puVar1 = FUN_004ccfa4(param_1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ccfa4  FUN_004ccfa4   (468 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_004ccfa4(uint param_1)

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
    if (DAT_00512cf8 == 0) {
      FUN_004cca54(1);
    }
    puVar1 = PTR_DAT_00512d08;
    if (uVar6 < DAT_00512ce4) {
      iVar3 = uVar6 * 2 + DAT_00512cf8;
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
      puVar4 = (uint *)PTR_DAT_00512d00;
      if ((undefined4 *)PTR_DAT_00512d00 == &DAT_00512cfc) {
        for (iVar3 = uVar6 * 2 + DAT_00512cf8 + -4; iVar3 == *(int *)(iVar3 + 4); iVar3 = iVar3 + 8)
        {
        }
        puVar4 = (uint *)PTR_DAT_00512d08;
        if (*(uint **)(iVar3 + 4) != (uint *)0x0) {
          puVar4 = *(uint **)(iVar3 + 4);
        }
      }
    }
    else {
      uVar8 = *(uint *)PTR_DAT_00512d08;
      puVar4 = (uint *)PTR_DAT_00512d08;
      if (uVar8 < uVar6) {
        *(undefined4 *)PTR_DAT_00512d08 = 0xfffffffd;
        for (puVar4 = *(uint **)(puVar1 + 4); *puVar4 < uVar6; puVar4 = (uint *)puVar4[1]) {
        }
        *(uint *)PTR_DAT_00512d08 = uVar8;
        if (puVar4 == (uint *)PTR_DAT_00512d08) {
          puVar4 = &DAT_00512cfc;
        }
      }
    }
    if (puVar4 == &DAT_00512cfc) {
      iVar3 = FUN_004cca54(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_004ccfa4(param_1);
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
        if (DAT_00512ce4 <= (uVar8 & 0xfffffffc)) {
          PTR_DAT_00512d08 = (undefined *)puVar4[1];
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
        if (uVar8 < DAT_00512ce4) {
          iVar3 = uVar8 * 2 + DAT_00512cf8;
          *(undefined4 *)((int)puVar4 + uVar6 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar4 + uVar6 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar4 + uVar6 + 8) + 8) = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          if (puVar4 == (uint *)PTR_DAT_00512d08) {
            PTR_DAT_00512d08 = (undefined *)puVar4[1];
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
          PTR_DAT_00512d08 = (undefined *)piVar5;
        }
        puVar2 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd17c  FUN_004cd17c   (24 bytes)   [unnamed]
SIZE_T __stdcall FUN_004cd17c(void)

{
  _MEMORYSTATUS buffer;
  
  buffer.dwLength = 0x20;
  GlobalMemoryStatus(&buffer);
  return buffer.dwAvailPhys;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd194  FUN_004cd194   (96 bytes)   [unnamed]
void __stdcall FUN_004cd194(void)

{
  int *piVar1;
  LPVOID address;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = (*(int * *)&DAT_00512cf0);
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
      FUN_004cc660(address,iVar3 - ((int)address - (int)piVar5));
      FUN_004cc678(address);
      piVar6 = piVar6 + -1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd1f4  FUN_004cd1f4   (296 bytes)   [unnamed]
int __cdecl FUN_004cd1f4(int param_1,uint param_2)

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
        if (DAT_00512ce4 <= (*puVar2 & 0xfffffffc)) {
          local_8 = *(int *)((int)puVar4 + uVar1 + 0xc);
        }
        if (puVar2 == (uint *)PTR_DAT_00512d08) {
          PTR_DAT_00512d08 = *(undefined **)((int)puVar4 + uVar1 + 8);
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
        if (uVar1 < DAT_00512ce4) {
          local_8 = uVar1 * 2 + DAT_00512cf8 + -0xc;
        }
        else if (local_8 == 0) {
          local_8 = *(int *)(PTR_DAT_00512d08 + 4);
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
// 0x004cd31c  FUN_004cd31c   (177 bytes, 3 ranges)   [unnamed]
uint * __cdecl FUN_004cd31c(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + 0x1003 & 0xfffff000;
  uVar3 = param_1[-1] & 0xfffffffc;
  puVar1 = param_1;
  if (uVar3 != uVar2 - 4) {
    if (uVar3 < uVar2 - 4) {
      puVar1 = FUN_004ccf7c(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,uVar3);
        FUN_004cce0c((int)param_1);
      }
    }
    else if (uVar2 - 4 < 0x100000) {
      puVar1 = FUN_004ccf7c(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,param_2);
        FUN_004cce0c((int)param_1);
      }
    }
    else {
      FUN_004cc660((LPVOID)((int)param_1 + (uVar2 - 4)),(uVar3 + 4) - uVar2);
      param_1[-1] = uVar2 - 4;
    }
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd3d4  FUN_004cd3d4   (150 bytes)   [unnamed]
uint * __cdecl FUN_004cd3d4(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_004cce0c((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_004ccf7c(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_004cd1f4((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_004ccf7c(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_004dc7f8(puVar1,param_1,param_2);
        FUN_004cce0c((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_004cd31c(param_1,param_2);
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd46c  FUN_004cd46c   (26 bytes)   [unnamed]
uint __cdecl FUN_004cd46c(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd488  FUN_004cd488   (1 bytes)   [unnamed]
void __stdcall FUN_004cd488(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd48c  FUN_004cd48c   (1 bytes)   [unnamed]
void __stdcall FUN_004cd48c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd750  FUN_004cd750   (55 bytes)   [unnamed]
void __cdecl FUN_004cd750(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512d30);
  std::allocator::allocator_4d030c(local_30);
  FUN_004d03f4(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd788  FUN_004cd788   (55 bytes)   [unnamed]
void __cdecl FUN_004cd788(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x512d38);
  std::allocator::allocator_4ceae8(local_30);
  FUN_004d0348(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd82c  FUN_004cd82c   (36 bytes)   [unnamed]
int __cdecl FUN_004cd82c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004cd850(param_2);
  FUN_004cd870(param_1,*puVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd850  FUN_004cd850   (18 bytes)   [unnamed]
int __cdecl FUN_004cd850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cd864(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd864  FUN_004cd864   (11 bytes)   [unnamed]
int __cdecl FUN_004cd864(int param_1)

{
  return param_1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd870  FUN_004cd870   (43 bytes)   [unnamed]
int __cdecl FUN_004cd870(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d18);
  *(undefined4 *)(param_1 + 8) = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd89c  FUN_004cd89c   (30 bytes)   [unnamed]
int __cdecl FUN_004cd89c(int param_1,int param_2)

{
  FUN_004cd870(param_1,*(undefined4 *)(param_2 + 0x24));
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd8bc  FUN_004cd8bc   (302 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cd8bc(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int i;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 in_stack_ffffff90;
  undefined1 *puVar8;
  undefined4 *local_54 [4];
  undefined4 local_44 [4];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14 [4];
  
  FUN_004cd89c((int)local_14,param_2);
  FUN_004cd82c((int)local_24,param_2);
  bVar1 = FUN_004cd9ec((int)&GHIDRA_STACK(0x0000000c),(int)local_24);
  if (bVar1) {
    FUN_004cd89c((int)local_34,param_2);
    bVar1 = FUN_004cd9ec((int)&GHIDRA_STACK(0x0000001c),(int)local_34);
    if ((bVar1) && (*(int *)(param_2 + 0x28) != 0)) {
      piVar2 = (int *)FUN_004cda08(param_2);
      FUN_004cda28(param_2,*piVar2);
      puVar3 = (undefined4 *)FUN_004cda9c(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      puVar3 = (undefined4 *)FUN_004cda08(param_2);
      uVar4 = FUN_004cdab0();
      *puVar3 = uVar4;
      puVar3 = (undefined4 *)FUN_004cdab4(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_004cd89c((int)local_44,param_2);
      puVar3 = local_44;
      puVar7 = local_14;
      for (i = 4; i != 0; i = i + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_004cd9d0;
    }
  }
  while( true ) {
    puVar8 = &GHIDRA_STACK(0x0000000c);
    uVar4 = 0x4cd9c9;
    bVar1 = FUN_004cdac8((int)puVar8,(int)&GHIDRA_STACK(0x0000001c));
    if (!bVar1) break;
    FUN_004cdae4((undefined4 *)&GHIDRA_STACK(0xffffff90),(undefined4 *)&GHIDRA_STACK(0x0000000c));
    FUN_004cdbb8((undefined4*)local_54,param_2,in_stack_ffffff90,uVar4,puVar8);
    local_54[1] = param_1;
    ppuVar6 = local_54;
    puVar3 = local_14;
    for (i = 4; i != 0; i = i + -1) {
      *puVar3 = *ppuVar6;
      ppuVar6 = ppuVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  }
LAB_004cd9d0:
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cd9ec  FUN_004cd9ec   (25 bytes)   [unnamed]
bool __cdecl FUN_004cd9ec(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cda08  FUN_004cda08   (18 bytes)   [unnamed]
int __cdecl FUN_004cda08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cda1c(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cda1c  FUN_004cda1c   (11 bytes)   [unnamed]
int __cdecl FUN_004cda1c(int param_1)

{
  return param_1 + 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cda28  FUN_004cda28   (78 bytes)   [unnamed]
void __cdecl FUN_004cda28(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  while( true ) {
    bVar2 = FUN_004cda78(&param_2);
    if (bVar2) break;
    piVar3 = (int *)FUN_004cda90(param_2);
    FUN_004cda28(param_1,*piVar3);
    piVar3 = (int *)FUN_004cd864(param_2);
    iVar1 = *piVar3;
    FUN_004ce770(param_1,param_2,'\x01');
    param_2 = iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cda78  FUN_004cda78   (21 bytes)   [unnamed]
bool __cdecl FUN_004cda78(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cdab0();
  return iVar1 == *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cda90  FUN_004cda90   (11 bytes)   [unnamed]
int __cdecl FUN_004cda90(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cda9c  FUN_004cda9c   (18 bytes)   [unnamed]
int __cdecl FUN_004cda9c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cd864(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdab0  FUN_004cdab0   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004cdab0(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdab4  FUN_004cdab4   (18 bytes)   [unnamed]
int __cdecl FUN_004cdab4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004cda90(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdac8  FUN_004cdac8   (25 bytes)   [unnamed]
bool __cdecl FUN_004cdac8(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) != *(int *)(param_2 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdae4  FUN_004cdae4   (63 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cdae4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_004cdb24((int)param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdb24  FUN_004cdb24   (147 bytes)   [unnamed]
int __cdecl FUN_004cdb24(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004cda90(*(int *)(param_1 + 8));
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004cda90(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_004cda1c(iVar4);
      iVar4 = *piVar2;
    }
    piVar2 = (int *)FUN_004cda90(*(int *)(param_1 + 8));
    if (iVar4 != *piVar2) {
      *(int *)(param_1 + 8) = iVar4;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_004cda90(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = *puVar3;
    while( true ) {
      piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) break;
      puVar3 = (undefined4 *)FUN_004cd864(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdbb8  FUN_004cdbb8   (9 bytes)   [unnamed]
undefined4 * __stdcall FUN_004cdbb8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 auStack_48 [4];
  undefined1 local_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  int iStack_14;
  char cStack_d;
  int iStack_c;
  int iStack_8;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  uStack_20 = param_5;
  FUN_004cd89c((int)local_38,param_2);
  bVar1 = FUN_004cdac8((int)&uStack_28,(int)local_38);
  if (bVar1) {
    FUN_004cdae4(auStack_48,&uStack_28);
  }
  FUN_004ce4c0(&iStack_8,param_5);
  iVar6 = iStack_8;
  cStack_d = '\0';
  piVar2 = (int *)FUN_004cd864(iStack_8);
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda90(iVar6);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_004cda1c(iVar6);
      iStack_c = *piVar2;
      FUN_004ce4d0(param_2,iVar6);
      cStack_d = '\x01';
    }
    else {
      piVar2 = (int *)FUN_004cda90(iVar6);
      iStack_c = *piVar2;
    }
  }
  else {
    piVar2 = (int *)FUN_004cda90(iVar6);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_004cd864(iVar6);
      iStack_c = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_004cda90(iVar6);
      iVar6 = *piVar2;
      while( true ) {
        piVar2 = (int *)FUN_004cd864(iVar6);
        bVar1 = FUN_004cda78(piVar2);
        if (bVar1) break;
        piVar2 = (int *)FUN_004cd864(iVar6);
        iVar6 = *piVar2;
      }
      piVar2 = (int *)FUN_004cda90(iVar6);
      iStack_c = *piVar2;
    }
  }
  if ((cStack_d == '\0') && (iVar6 != iStack_8)) {
    piVar2 = (int *)FUN_004cd864(iStack_8);
    piVar2 = (int *)FUN_004cda1c(*piVar2);
    *piVar2 = iVar6;
    puVar3 = (undefined4 *)FUN_004cd864(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_004cd864(iVar6);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_004cda90(iStack_8);
    if (iVar6 == *piVar2) {
      bVar1 = FUN_004cda78(&iStack_c);
      if (!bVar1) {
        piVar2 = (int *)FUN_004cda1c(iStack_c);
        *piVar2 = iVar6;
      }
    }
    else {
      bVar1 = FUN_004cda78(&iStack_c);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cda1c(iVar6);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
        *puVar3 = uVar7;
      }
      piVar2 = (int *)FUN_004cda1c(iVar6);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      *piVar2 = iStack_c;
      puVar3 = (undefined4 *)FUN_004cda90(iStack_8);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_004cda90(iVar6);
      *puVar3 = uVar7;
      piVar2 = (int *)FUN_004cda90(iStack_8);
      piVar2 = (int *)FUN_004cda1c(*piVar2);
      *piVar2 = iVar6;
    }
    piVar2 = (int *)FUN_004cda08(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cda08(param_2);
      *piVar2 = iVar6;
    }
    else {
      piVar2 = (int *)FUN_004cda1c(iStack_8);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cd864(*piVar2);
        *piVar2 = iVar6;
      }
      else {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cda90(*piVar2);
        *piVar2 = iVar6;
      }
    }
    puVar3 = (undefined4 *)FUN_004cda1c(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_004cda1c(iVar6);
    *puVar3 = uVar7;
    bVar1 = FUN_004cda78(&iStack_c);
    if (bVar1) {
      iStack_c = iVar6;
    }
    puVar3 = (undefined4 *)FUN_004ce568(iStack_8);
    puVar4 = (undefined4 *)FUN_004ce568(iVar6);
    FUN_004ce570(puVar4,puVar3);
    iVar6 = iStack_8;
  }
  else if (cStack_d == '\0') {
    puVar3 = (undefined4 *)FUN_004cda1c(iVar6);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_004cda08(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cda08(param_2);
      *piVar2 = iStack_c;
    }
    else {
      piVar2 = (int *)FUN_004cda1c(iStack_8);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cd864(*piVar2);
        *piVar2 = iStack_c;
      }
      else {
        piVar2 = (int *)FUN_004cda1c(iStack_8);
        piVar2 = (int *)FUN_004cda90(*piVar2);
        *piVar2 = iStack_c;
      }
    }
    piVar2 = (int *)FUN_004cda9c(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cda90(iStack_8);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_004cda1c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004cda9c(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_004ce588(iStack_c);
        piVar2 = (int *)FUN_004cda9c(param_2);
        *piVar2 = iVar5;
      }
    }
    piVar2 = (int *)FUN_004cdab4(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004cd864(iStack_8);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_004cda1c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004cdab4(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_004ce5b4(iStack_c);
        piVar2 = (int *)FUN_004cdab4(param_2);
        *piVar2 = iVar5;
      }
    }
  }
  if ((iStack_c != *(int *)(param_2 + 0x24)) && (piVar2 = (int *)FUN_004ce568(iVar6), *piVar2 != 0))
  {
LAB_004ce45f:
    while( true ) {
      piVar2 = (int *)FUN_004cda08(param_2);
      if ((*piVar2 == iStack_c) || (piVar2 = (int *)FUN_004ce568(iStack_c), *piVar2 != 1))
      goto LAB_004ce47e;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      if (*piVar2 == iStack_c) break;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cd864(*piVar2);
      iStack_18 = *piVar2;
      bVar1 = FUN_004cda78(&iStack_18);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
        *puVar3 = 0;
        piVar2 = (int *)FUN_004cda1c(iStack_c);
        iStack_c = *piVar2;
      }
      else {
        piVar2 = (int *)FUN_004ce568(iStack_18);
        if (*piVar2 == 0) {
          puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
          *puVar3 = 1;
          puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
          puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
          *puVar3 = 0;
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          FUN_004ce6a8(param_2,*piVar2);
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          piVar2 = (int *)FUN_004cd864(*piVar2);
          iStack_18 = *piVar2;
        }
        bVar1 = FUN_004cda78(&iStack_18);
        if (bVar1) {
          puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
          *puVar3 = 0;
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          iStack_c = *piVar2;
        }
        else {
          piVar2 = (int *)FUN_004cda90(iStack_18);
          bVar1 = FUN_004cda78(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_004cda90(iStack_18);
            piVar2 = (int *)FUN_004ce568(*puVar3);
            if (*piVar2 == 1) goto LAB_004ce2f5;
LAB_004ce342:
            piVar2 = (int *)FUN_004cd864(iStack_18);
            bVar1 = FUN_004cda78(piVar2);
            if (bVar1) {
LAB_004ce36f:
              piVar2 = (int *)FUN_004cda90(iStack_18);
              bVar1 = FUN_004cda78(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_004cda90(iStack_18);
                puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
                *puVar3 = 1;
              }
              puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
              *puVar3 = 0;
              FUN_004ce5e0(param_2,iStack_18);
              piVar2 = (int *)FUN_004cda1c(iStack_c);
              piVar2 = (int *)FUN_004cd864(*piVar2);
              iStack_18 = *piVar2;
            }
            else {
              puVar3 = (undefined4 *)FUN_004cd864(iStack_18);
              piVar2 = (int *)FUN_004ce568(*puVar3);
              if (*piVar2 == 1) goto LAB_004ce36f;
            }
            bVar1 = FUN_004cda78(&iStack_18);
            if (!bVar1) {
              puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
              puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
              uVar7 = *puVar3;
              puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
              *puVar3 = uVar7;
              puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
              puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
              *puVar3 = 1;
              piVar2 = (int *)FUN_004cd864(iStack_18);
              bVar1 = FUN_004cda78(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_004cd864(iStack_18);
                puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
                *puVar3 = 1;
              }
              piVar2 = (int *)FUN_004cda1c(iStack_c);
              FUN_004ce6a8(param_2,*piVar2);
            }
            goto LAB_004ce47e;
          }
LAB_004ce2f5:
          piVar2 = (int *)FUN_004cd864(iStack_18);
          bVar1 = FUN_004cda78(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_004cd864(iStack_18);
            piVar2 = (int *)FUN_004ce568(*puVar3);
            if (*piVar2 != 1) goto LAB_004ce342;
          }
          puVar3 = (undefined4 *)FUN_004ce568(iStack_18);
          *puVar3 = 0;
          piVar2 = (int *)FUN_004cda1c(iStack_c);
          iStack_c = *piVar2;
        }
      }
    }
    piVar2 = (int *)FUN_004cda1c(iStack_c);
    piVar2 = (int *)FUN_004cda90(*piVar2);
    iStack_14 = *piVar2;
    bVar1 = FUN_004cda78(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_004ce45f;
    }
    piVar2 = (int *)FUN_004ce568(iStack_14);
    if (*piVar2 == 0) {
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = 1;
      puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
      puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      FUN_004ce5e0(param_2,*piVar2);
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cda90(*piVar2);
      iStack_14 = *piVar2;
    }
    bVar1 = FUN_004cda78(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_004ce45f;
    }
    piVar2 = (int *)FUN_004cd864(iStack_14);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
LAB_004ce084:
      piVar2 = (int *)FUN_004cda90(iStack_14);
      bVar1 = FUN_004cda78(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cda90(iStack_14);
        piVar2 = (int *)FUN_004ce568(*puVar3);
        if (*piVar2 != 1) goto LAB_004ce0d1;
      }
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = 0;
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_004ce45f;
    }
    puVar3 = (undefined4 *)FUN_004cd864(iStack_14);
    piVar2 = (int *)FUN_004ce568(*puVar3);
    if (*piVar2 == 1) goto LAB_004ce084;
LAB_004ce0d1:
    piVar2 = (int *)FUN_004cda90(iStack_14);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) {
LAB_004ce0fe:
      piVar2 = (int *)FUN_004cd864(iStack_14);
      bVar1 = FUN_004cda78(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cd864(iStack_14);
        puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
        *puVar3 = 1;
      }
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = 0;
      FUN_004ce6a8(param_2,iStack_14);
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      piVar2 = (int *)FUN_004cda90(*piVar2);
      iStack_14 = *piVar2;
    }
    else {
      puVar3 = (undefined4 *)FUN_004cda90(iStack_14);
      piVar2 = (int *)FUN_004ce568(*puVar3);
      if (*piVar2 == 1) goto LAB_004ce0fe;
    }
    bVar1 = FUN_004cda78(&iStack_14);
    if (!bVar1) {
      puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
      puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_004ce568(iStack_14);
      *puVar3 = uVar7;
      puVar3 = (undefined4 *)FUN_004cda1c(iStack_c);
      puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
      *puVar3 = 1;
      piVar2 = (int *)FUN_004cda90(iStack_14);
      bVar1 = FUN_004cda78(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004cda90(iStack_14);
        puVar3 = (undefined4 *)FUN_004ce568(*puVar3);
        *puVar3 = 1;
      }
      piVar2 = (int *)FUN_004cda1c(iStack_c);
      FUN_004ce5e0(param_2,*piVar2);
    }
LAB_004ce47e:
    puVar3 = (undefined4 *)FUN_004ce568(iStack_c);
    *puVar3 = 1;
  }
  FUN_004ce770(param_2,iVar6,'\x01');
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cdbc1  FUN_004cdbc1   (2295 bytes, 2 ranges)   [unnamed]
undefined4 __stdcall FUN_004cdbc1(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int unaff_EBP;
  undefined4 uVar9;
  
  piVar1 = (int *)(unaff_EBP + -8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
  FUN_004cd89c(in_ECX,iVar2);
  bVar3 = FUN_004cdac8(unaff_EBP + -0x24,unaff_EBP + -0x34);
  if (bVar3) {
    FUN_004cdae4((undefined4 *)(unaff_EBP + -0x44),(undefined4 *)(unaff_EBP + -0x24));
  }
  FUN_004ce4c0((undefined4 *)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + 0x18));
  iVar8 = *(int *)(unaff_EBP + -4);
  *(undefined1 *)(unaff_EBP + -9) = 0;
  piVar4 = (int *)FUN_004cd864(iVar8);
  bVar3 = FUN_004cda78(piVar4);
  if (bVar3) {
    piVar4 = (int *)FUN_004cda90(iVar8);
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_004cda1c(iVar8);
      *piVar1 = *piVar4;
      FUN_004ce4d0(iVar2,iVar8);
      *(undefined1 *)(unaff_EBP + -9) = 1;
    }
    else {
      piVar4 = (int *)FUN_004cda90(iVar8);
      *piVar1 = *piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_004cda90(iVar8);
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_004cd864(iVar8);
      *piVar1 = *piVar4;
    }
    else {
      piVar4 = (int *)FUN_004cda90(iVar8);
      iVar8 = *piVar4;
      while( true ) {
        piVar4 = (int *)FUN_004cd864(iVar8);
        bVar3 = FUN_004cda78(piVar4);
        if (bVar3) break;
        piVar4 = (int *)FUN_004cd864(iVar8);
        iVar8 = *piVar4;
      }
      piVar4 = (int *)FUN_004cda90(iVar8);
      *piVar1 = *piVar4;
    }
  }
  if ((*(char *)(unaff_EBP + -9) == '\0') && (iVar8 != *(int *)(unaff_EBP + -4))) {
    piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -4));
    piVar4 = (int *)FUN_004cda1c(*piVar4);
    *piVar4 = iVar8;
    puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cd864(iVar8);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
    if (iVar8 == *piVar4) {
      bVar3 = FUN_004cda78(piVar1);
      if (!bVar3) {
        piVar4 = (int *)FUN_004cda1c(*piVar1);
        *piVar4 = iVar8;
      }
    }
    else {
      bVar3 = FUN_004cda78(piVar1);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
        *puVar5 = uVar9;
      }
      piVar4 = (int *)FUN_004cda1c(iVar8);
      piVar4 = (int *)FUN_004cd864(*piVar4);
      *piVar4 = *piVar1;
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004cda90(iVar8);
      *puVar5 = uVar9;
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cda1c(*piVar4);
      *piVar4 = iVar8;
    }
    piVar4 = (int *)FUN_004cda08(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      *piVar4 = iVar8;
    }
    else {
      piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cd864(*piVar4);
        *piVar4 = iVar8;
      }
      else {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cda90(*piVar4);
        *piVar4 = iVar8;
      }
    }
    puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
    *puVar5 = uVar9;
    bVar3 = FUN_004cda78(piVar1);
    if (bVar3) {
      *piVar1 = iVar8;
    }
    puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -4));
    puVar6 = (undefined4 *)FUN_004ce568(iVar8);
    FUN_004ce570(puVar6,puVar5);
    iVar8 = *(int *)(unaff_EBP + -4);
  }
  else if (*(char *)(unaff_EBP + -9) == '\0') {
    puVar5 = (undefined4 *)FUN_004cda1c(iVar8);
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004cda08(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      *piVar4 = *piVar1;
    }
    else {
      piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cd864(*piVar4);
        *piVar4 = *piVar1;
      }
      else {
        piVar4 = (int *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004cda90(*piVar4);
        *piVar4 = *piVar1;
      }
    }
    piVar4 = (int *)FUN_004cda9c(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004cda78(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cda9c(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_004ce588(*piVar1);
        piVar4 = (int *)FUN_004cda9c(iVar2);
        *piVar4 = iVar7;
      }
    }
    piVar4 = (int *)FUN_004cdab4(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004cda78(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004cda1c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004cdab4(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_004ce5b4(*piVar1);
        piVar4 = (int *)FUN_004cdab4(iVar2);
        *piVar4 = iVar7;
      }
    }
  }
  if ((*piVar1 != *(int *)(iVar2 + 0x24)) && (piVar4 = (int *)FUN_004ce568(iVar8), *piVar4 != 0)) {
LAB_004ce45f:
    while( true ) {
      piVar4 = (int *)FUN_004cda08(iVar2);
      if ((*piVar4 == *piVar1) || (piVar4 = (int *)FUN_004ce568(*piVar1), *piVar4 != 1))
      goto LAB_004ce47e;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      piVar4 = (int *)FUN_004cd864(*piVar4);
      if (*piVar4 == *piVar1) break;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
      bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
        *puVar5 = 0;
        piVar4 = (int *)FUN_004cda1c(*piVar1);
        *piVar1 = *piVar4;
      }
      else {
        piVar4 = (int *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
        if (*piVar4 == 0) {
          puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
          puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          FUN_004ce6a8(iVar2,*piVar4);
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
          *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
        }
        bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
        if (bVar3) {
          puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          *piVar1 = *piVar4;
        }
        else {
          piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004cda78(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_004ce568(*puVar5);
            if (*piVar4 == 1) goto LAB_004ce2f5;
LAB_004ce342:
            piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
            bVar3 = FUN_004cda78(piVar4);
            if (bVar3) {
LAB_004ce36f:
              piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004cda78(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
                *puVar5 = 1;
              }
              puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = 0;
              FUN_004ce5e0(iVar2,*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004cd864(*piVar4);
              *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
            }
            else {
              puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_004ce568(*puVar5);
              if (*piVar4 == 1) goto LAB_004ce36f;
            }
            bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x14));
            if (!bVar3) {
              puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
              uVar9 = *puVar5;
              puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = uVar9;
              puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
              puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
              *puVar5 = 1;
              piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004cda78(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
                *puVar5 = 1;
              }
              piVar4 = (int *)FUN_004cda1c(*piVar1);
              FUN_004ce6a8(iVar2,*piVar4);
            }
            goto LAB_004ce47e;
          }
LAB_004ce2f5:
          piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004cda78(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_004ce568(*puVar5);
            if (*piVar4 != 1) goto LAB_004ce342;
          }
          puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 0;
          piVar4 = (int *)FUN_004cda1c(*piVar1);
          *piVar1 = *piVar4;
        }
      }
    }
    piVar4 = (int *)FUN_004cda1c(*piVar1);
    puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    piVar4 = (int *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
    if (*piVar4 == 0) {
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 1;
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      FUN_004ce5e0(iVar2,*piVar4);
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
LAB_004ce084:
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
        piVar4 = (int *)FUN_004ce568(*puVar5);
        if (*piVar4 != 1) goto LAB_004ce0d1;
      }
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_004ce45f;
    }
    puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
    piVar4 = (int *)FUN_004ce568(*puVar5);
    if (*piVar4 == 1) goto LAB_004ce084;
LAB_004ce0d1:
    piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004cda78(piVar4);
    if (bVar3) {
LAB_004ce0fe:
      piVar4 = (int *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cd864(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
      }
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      FUN_004ce6a8(iVar2,*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004cda90(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    else {
      puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_004ce568(*puVar5);
      if (*piVar4 == 1) goto LAB_004ce0fe;
    }
    bVar3 = FUN_004cda78((int *)(unaff_EBP + -0x10));
    if (!bVar3) {
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004ce568(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = uVar9;
      puVar5 = (undefined4 *)FUN_004cda1c(*piVar1);
      puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
      *puVar5 = 1;
      piVar4 = (int *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004cda78(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004cda90(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_004ce568(*puVar5);
        *puVar5 = 1;
      }
      piVar4 = (int *)FUN_004cda1c(*piVar1);
      FUN_004ce5e0(iVar2,*piVar4);
    }
LAB_004ce47e:
    puVar5 = (undefined4 *)FUN_004ce568(*piVar1);
    *puVar5 = 1;
  }
  FUN_004ce770(iVar2,iVar8,'\x01');
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar5[1] = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
  return *(undefined4 *)(unaff_EBP + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce4c0  FUN_004ce4c0   (13 bytes)   [unnamed]
void __cdecl FUN_004ce4c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce4d0  FUN_004ce4d0   (152 bytes)   [unnamed]
void __cdecl FUN_004ce4d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_004cda1c(param_2);
  iVar1 = *piVar2;
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    piVar2 = (int *)FUN_004cdab4(param_1);
    *piVar2 = iVar1;
    piVar2 = (int *)FUN_004cda9c(param_1);
    *piVar2 = iVar1;
    puVar3 = (undefined4 *)FUN_004cda08(param_1);
    uVar4 = FUN_004cdab0();
    *puVar3 = uVar4;
  }
  else {
    piVar2 = (int *)FUN_004cd864(iVar1);
    if (param_2 == *piVar2) {
      puVar3 = (undefined4 *)FUN_004cd864(iVar1);
      uVar4 = FUN_004cdab0();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_004cda9c(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_004cda9c(param_1);
        *piVar2 = iVar1;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_004cda90(iVar1);
      uVar4 = FUN_004cdab0();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_004cdab4(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_004cdab4(param_1);
        *piVar2 = iVar1;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce568  FUN_004ce568   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004ce568(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce570  FUN_004ce570   (21 bytes)   [unnamed]
void __cdecl FUN_004ce570(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce588  FUN_004ce588   (41 bytes)   [unnamed]
int __cdecl FUN_004ce588(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_004cd864(param_1);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) break;
    piVar2 = (int *)FUN_004cd864(param_1);
    param_1 = *piVar2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce5b4  FUN_004ce5b4   (41 bytes)   [unnamed]
int __cdecl FUN_004ce5b4(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_004cda90(param_1);
    bVar1 = FUN_004cda78(piVar2);
    if (bVar1) break;
    piVar2 = (int *)FUN_004cda90(param_1);
    param_1 = *piVar2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce5e0  FUN_004ce5e0   (198 bytes)   [unnamed]
void __cdecl FUN_004ce5e0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_004cda90(param_2);
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_004cd864(iVar1);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004cda90(param_2);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004cd864(iVar1);
  bVar2 = FUN_004cda78(piVar3);
  if (!bVar2) {
    piVar3 = (int *)FUN_004cd864(iVar1);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    *piVar3 = param_2;
  }
  puVar4 = (undefined4 *)FUN_004cda1c(param_2);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004cda1c(iVar1);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004cda08(param_1);
  if (param_2 == *piVar3) {
    piVar3 = (int *)FUN_004cda08(param_1);
    *piVar3 = iVar1;
  }
  else {
    piVar3 = (int *)FUN_004cda1c(param_2);
    piVar3 = (int *)FUN_004cd864(*piVar3);
    if (param_2 == *piVar3) {
      piVar3 = (int *)FUN_004cda1c(param_2);
      piVar3 = (int *)FUN_004cd864(*piVar3);
      *piVar3 = iVar1;
    }
    else {
      piVar3 = (int *)FUN_004cda1c(param_2);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      *piVar3 = iVar1;
    }
  }
  piVar3 = (int *)FUN_004cd864(iVar1);
  *piVar3 = param_2;
  piVar3 = (int *)FUN_004cda1c(param_2);
  *piVar3 = iVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce6a8  FUN_004ce6a8   (198 bytes)   [unnamed]
void __cdecl FUN_004ce6a8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_004cd864(param_2);
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_004cda90(iVar1);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004cd864(param_2);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004cda90(iVar1);
  bVar2 = FUN_004cda78(piVar3);
  if (!bVar2) {
    piVar3 = (int *)FUN_004cda90(iVar1);
    piVar3 = (int *)FUN_004cda1c(*piVar3);
    *piVar3 = param_2;
  }
  puVar4 = (undefined4 *)FUN_004cda1c(param_2);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004cda1c(iVar1);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004cda08(param_1);
  if (param_2 == *piVar3) {
    piVar3 = (int *)FUN_004cda08(param_1);
    *piVar3 = iVar1;
  }
  else {
    piVar3 = (int *)FUN_004cda1c(param_2);
    piVar3 = (int *)FUN_004cda90(*piVar3);
    if (param_2 == *piVar3) {
      piVar3 = (int *)FUN_004cda1c(param_2);
      piVar3 = (int *)FUN_004cda90(*piVar3);
      *piVar3 = iVar1;
    }
    else {
      piVar3 = (int *)FUN_004cda1c(param_2);
      piVar3 = (int *)FUN_004cd864(*piVar3);
      *piVar3 = iVar1;
    }
  }
  piVar3 = (int *)FUN_004cda90(iVar1);
  *piVar3 = param_2;
  piVar3 = (int *)FUN_004cda1c(param_2);
  *piVar3 = iVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce770  FUN_004ce770   (84 bytes)   [unnamed]
void __cdecl FUN_004ce770(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined1 local_c [8];
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  if (param_3 != '\0') {
    std::allocator::allocator(local_c);
    iVar1 = FUN_004ce7ec(param_2);
    iVar1 = FUN_004ce7f8(local_c,iVar1);
    FUN_004ce800(local_c,iVar1);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce7c4  std::allocator::allocator   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d20);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce7ec  FUN_004ce7ec   (11 bytes)   [unnamed]
int __cdecl FUN_004ce7ec(int param_1)

{
  return param_1 + 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce7f8  FUN_004ce7f8   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004ce7f8(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce800  FUN_004ce800   (15 bytes)   [unnamed]
void __cdecl FUN_004ce800(undefined4 param_1,int param_2)

{
  FUN_004ce810(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce810  FUN_004ce810   (76 bytes)   [unnamed]
void __cdecl FUN_004ce810(int param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d38);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 8,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce88c  FUN_004ce88c   (152 bytes)   [unnamed]
void __cdecl FUN_004ce88c(int str)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004ce924(str);
  if (iVar1 != 0) {
    piVar2 = (int *)std::string::__getRepOf(str);
    iVar1 = FUN_004ce944(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)std::string::__getRepOf(str);
      iVar1 = FUN_004ce950(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    std::string::__getRepOf(str);
    std::allocator::allocator_4cea04(local_c);
    FUN_004cea2c();
    std::string::size(str);
    std::string::__getRepOf(str);
    std::allocator::allocator_4cea44(local_14);
    FUN_004cea80();
    local_18 = 0;
    FUN_004cea90((int)local_28,str,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce924  FUN_004ce924   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004ce924(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce930  std::string::__getRepOf   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00416740 (20 bytes; the code occurs several times, e.g. one template instance per type). the rep header of a string (data - 12)
int __cdecl std::string::__getRepOf(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce924(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce944  FUN_004ce944   (11 bytes)   [unnamed]
int __cdecl FUN_004ce944(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce950  FUN_004ce950   (34 bytes)   [unnamed]
int __cdecl FUN_004ce950(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    iVar2 = FUN_004ce9e4(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce974  FUN_004ce974   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_004ce974(void)

{
  return &g_nullStringRep;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce97c  FUN_004ce97c   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ce97c(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d6c);
  FUN_004ce9b0(param_1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce9b0  FUN_004ce9b0   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ce9b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d74);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ce9e4  FUN_004ce9e4   (32 bytes)   [unnamed]
int __cdecl FUN_004ce9e4(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea04  std::allocator::allocator_4cea04   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4cea04(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d7c);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea2c  FUN_004cea2c   (15 bytes)   [unnamed]
void __stdcall FUN_004cea2c(void)

{
  FUN_004cea3c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea3c  FUN_004cea3c   (5 bytes)   [unnamed]
void __stdcall FUN_004cea3c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea44  std::allocator::allocator_4cea44   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4cea44(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d84);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea6c  std::string::size   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0041687c (20 bytes; the code occurs several times, e.g. one template instance per type). length of the string (rep->length)
undefined4 __cdecl std::string::size(int self)

{
  int rep;
  
  rep = std::string::__getRepOf(self);
  return *(undefined4 *)(rep + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea80  FUN_004cea80   (15 bytes)   [unnamed]
void __stdcall FUN_004cea80(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cea90  FUN_004cea90   (35 bytes)   [unnamed]
int __cdecl FUN_004cea90(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_004ceab4(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceab4  FUN_004ceab4   (52 bytes)   [unnamed]
int __cdecl FUN_004ceab4(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d8c);
  std::allocator::allocator_4ceae8(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceae8  std::allocator::allocator_4ceae8   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4ceae8(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d94);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceb10  FUN_004ceb10   (120 bytes)   [unnamed]
void __cdecl FUN_004ceb10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  while( true ) {
    iVar1 = param_1 + 8;
    iVar3 = FUN_004ceb88(iVar1);
    if (iVar3 == 0) break;
    FUN_004ceb94(iVar1);
    puVar2 = (undefined4 *)FUN_004ceb88(iVar1);
    FUN_004ceba0((int)local_24,iVar1,puVar2);
    std::allocator::allocator_4cec20(local_c);
    FUN_004cec48();
    std::allocator::allocator_4cec58(local_14);
    FUN_004cec80();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceb88  FUN_004ceb88   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004ceb88(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceb94  FUN_004ceb94   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004ceb94(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceba0  FUN_004ceba0   (35 bytes)   [unnamed]
int __cdecl FUN_004ceba0(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_004cebc4(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cebc4  FUN_004cebc4   (52 bytes)   [unnamed]
int __cdecl FUN_004cebc4(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513d9c);
  std::allocator::allocator_4cebf8(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cebf8  std::allocator::allocator_4cebf8   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4cebf8(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513da4);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cec20  std::allocator::allocator_4cec20   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4cec20(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513dac);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cec48  FUN_004cec48   (15 bytes)   [unnamed]
void __stdcall FUN_004cec48(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cec58  std::allocator::allocator_4cec58   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_4cec58(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513db4);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cec80  FUN_004cec80   (15 bytes)   [unnamed]
void __stdcall FUN_004cec80(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cec90  FUN_004cec90   (89 bytes)   [unnamed]
int __cdecl FUN_004cec90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513dbc);
  iVar1 = FUN_004cecf8(param_2);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = FUN_004cecec(iVar1);
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = FUN_004ced58(param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x18;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cecec  FUN_004cecec   (11 bytes)   [unnamed]
int __cdecl FUN_004cecec(int param_1)

{
  return param_1 + 0x18;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cecf8  FUN_004cecf8   (58 bytes)   [unnamed]
int * __cdecl FUN_004cecf8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ced34(&DAT_00515dfc);
  piVar2 = (int *)FUN_004ced40(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004db7f8(param_1,&DAT_00515dfc,'\x01',0x20,(undefined*)std::basic_istringstream::basic_istringstream);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ced34  FUN_004ced34   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_004ced34(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ced40  FUN_004ced40   (23 bytes)   [unnamed]
undefined4 __cdecl FUN_004ced40(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d8000(*param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ced58  FUN_004ced58   (61 bytes)   [unnamed]
int * __cdecl FUN_004ced58(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_004ced34((undefined4 *)&DAT_00513dc4);
  piVar2 = (int *)FUN_004ced40(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004db7f8(param_1,(uint *)&DAT_00513dc4,'\x01',0x80,(undefined*)FUN_004cedc4);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ced98  FUN_004ced98   (44 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ced98(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51561c);
  FUN_004d8030(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cedc4  FUN_004cedc4   (53 bytes)   [unnamed]
void __cdecl FUN_004cedc4(int param_1,uint *param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_004cee50();
    return;
  }
  if (param_1 == 1) {
    FUN_004cedfc();
    return;
  }
  FUN_004cefbc(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cedfc  FUN_004cedfc   (84 bytes)   [unnamed]
undefined4 * __stdcall FUN_004cedfc(void)

{
  undefined4 *facet;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515634);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    FUN_004cf040(facet,(uint *)("basic_string::__replace_aux(iterator,iterator,InputIterator,InputIterator)" + 0x4b),1);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cee50  FUN_004cee50   (85 bytes)   [unnamed]
undefined4 * __stdcall FUN_004cee50(void)

{
  undefined4 *facet;
  char *pcVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513ddc);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    pcVar2 = FUN_004ceea8();
    FUN_004ceed4(facet,1,pcVar2);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceea8  FUN_004ceea8   (6 bytes)   [unnamed]
undefined * __stdcall FUN_004ceea8(void)

{
  return &DAT_005162a4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ceed4  FUN_004ceed4   (97 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ceed4(undefined4 *facet2,undefined4 param_2,char *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513e0c);
  std::locale::facet::facet(facet2,param_2,0x80);
  FUN_004cef80((int)(facet2 + 4),param_3);
  *facet2 = &PTR_FUN_00515a3c;
  *sehChainHead = sehPrevFrame;
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cef80  FUN_004cef80   (58 bytes)   [unnamed]
int __cdecl FUN_004cef80(int param_1,char *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515688);
  FUN_004d8200(param_1,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cefbc  FUN_004cefbc   (85 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cefbc(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *facet;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513e30);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    FUN_004cf040(facet,param_2,param_3);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf040  FUN_004cf040   (89 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cf040(undefined4 *facet,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513e60);
  pcVar1 = (char *)FUN_004cf09c(facet + 4,param_2);
  FUN_004ceed4(facet,param_3,pcVar1);
  *facet = &PTR_FUN_00515a14;
  *sehChainHead = sehPrevFrame;
  return facet;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf09c  FUN_004cf09c   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004cf09c(undefined4 param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_004d91bc(param_2);
  uVar2 = FUN_004d80dc(puVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf0b8  FUN_004cf0b8   (66 bytes)   [unnamed]
int * __cdecl FUN_004cf0b8(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5156ac);
  FUN_004d354c(param_1,(int *)(param_2 + 0x10));
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf0fc  FUN_004cf0fc   (104 bytes)   [unnamed]
int __cdecl FUN_004cf0fc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int loc;
  
  __InitExceptBlockLDTC(0x513e8c);
  FUN_004cf0b8(&loc,param_3);
  FUN_004cf164(param_1,param_3,&loc);
  std::locale::_dtor(&loc,2);
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf164  FUN_004cf164   (69 bytes)   [unnamed]
int __cdecl FUN_004cf164(int param_1,int param_2,int *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513ea0);
  FUN_004dbb34(param_1,param_2);
  FUN_004cec90(param_1 + 0x260,param_3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf1ac  FUN_004cf1ac   (101 bytes)   [unnamed]
int * __cdecl FUN_004cf1ac(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513eb8);
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
// 0x004cf2b4  FUN_004cf2b4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004cf2b4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf2c0  FUN_004cf2c0   (18 bytes)   [unnamed]
int __cdecl FUN_004cf2c0(int *param_1,int param_2)

{
  return param_2 * 4 + *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf2d4  FUN_004cf2d4   (101 bytes)   [unnamed]
int * __cdecl FUN_004cf2d4(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513edc);
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
// 0x004cf384  std::string::operator_assign   (111 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416bd0. std::string assignment from another string (shares the rep)
int __cdecl std::string::operator_assign(int self,int other)

{
  int *piVar1;
  int iVar2;
  uint *s;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (other != self) {
    piVar1 = (int *)std::string::__getRepOf(other);
    iVar2 = FUN_004ce944(piVar1);
    if (iVar2 < 1) {
      s = (uint *)FUN_004cf40c(other);
      std::string::assign_cstr(self,s);
    }
    else {
      piVar1 = (int *)std::string::__getRepOf(other);
      FUN_004cf3f4(piVar1);
      FUN_004ce88c(self);
      local_8 = FUN_004ce924(other);
      FUN_004cea90((int)local_18,self,&local_8);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf3f4  FUN_004cf3f4   (21 bytes)   [unnamed]
void __cdecl FUN_004cf3f4(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf40c  FUN_004cf40c   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_004cf40c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004ce924(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf41c  std::string::assign_cstr   (376 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416c68. assigns a NUL-terminated string
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
  
  __InitExceptBlockLDTC(0x513f1c);
  if (s == (uint *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar11 = 1;
    copyCtor = std::logic_error::logic_error_copy;
    uVar9 = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_58);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    s2 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,s2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_004113dc,logicError,uVar9,(undefined*)copyCtor,uVar11,throwFlags,throwFile,throwLine);
  }
  uVar9 = FUN_004cfa9c();
  local_59 = (char)uVar9;
  bVar1 = FUN_004cf5f0((char *)s,&local_59);
  if (bVar1) {
    piVar4 = (int *)std::string::__getRepOf(self);
    iVar5 = FUN_004ce944(piVar4);
    if (iVar5 == 1) {
      iVar5 = std::string::__getRepOf(self);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_004cfa9c();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)FUN_004ce924(self);
      FUN_004cf608(puVar6,puVar2);
    }
    else {
      FUN_004ce88c(self);
      piVar4 = FUN_004ce974();
      FUN_004cf3f4(piVar4);
      rep = FUN_004ce974();
      local_60 = std::string::__rep_data((int)rep);
      FUN_004cea90((int)local_160,self,&local_60);
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar11 = FUN_004cf618(s);
    n1 = std::string::size(self);
    self = FUN_004cfaac(self,0,n1,(uint)s,uVar11);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf594  __rwstd::except_msg_string::msgstr   (8 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00416de0 (8 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. the formatted message text
undefined4 __cdecl __rwstd::except_msg_string::msgstr(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf59c  std::logic_error::logic_error_416de8   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416de8. constructs a std::logic_error from a message string
//   also: std::logic_error::logic_error_4cf59c [rtti:vtable-store]
undefined4 * __cdecl std::logic_error::logic_error_416de8(undefined4 *logicError,int str)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5156d0);
  std::exception::exception(logicError);
  *logicError = &std::logic_error::vftable;
  FUN_004d2000((int)(logicError + 2),str);
  *sehChainHead = sehPrevFrame;
  return logicError;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf5f0  FUN_004cf5f0   (21 bytes)   [unnamed]
bool __cdecl FUN_004cf5f0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf608  FUN_004cf608   (15 bytes)   [unnamed]
void __cdecl FUN_004cf608(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf618  FUN_004cf618   (15 bytes)   [unnamed]
char * __cdecl FUN_004cf618(uint *s)

{
  char *len;
  
  len = strlen(s);
  return len;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf628  std::string::string_from_cstr   (304 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416e74. std::string(const char*)
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
  
  __InitExceptBlockLDTC(0x513f78);
  ehContext = 8;
  FUN_004cf778(self,0);
  if (s == (uint *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = std::logic_error::logic_error_copy;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_58);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
    s2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,s2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_004113dc,logicError,objectDtor,(undefined*)copyCtor,n,throwFlags,throwFile,throwLine);
  }
  n = FUN_004cf618(s);
  ehContext = 8;
  rep = std::string::__getRep(self,n,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_004cea90((int)local_15c,self,&local_5c);
  puVar4 = (undefined4 *)FUN_004ce924(self);
  FUN_004cf758(puVar4,s,n);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf758  FUN_004cf758   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cf758(undefined4 *param_1,undefined4 *src,uint n)

{
  memcpy(param_1,src,n);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf778  FUN_004cf778   (55 bytes)   [unnamed]
int __cdecl FUN_004cf778(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513fb0);
  std::allocator::allocator_4cea44(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf7b0  std::string::__getRep   (191 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416ffc. allocates a string representation of the given capacity
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
    nullRep = FUN_004ce974();
    FUN_004cf3f4(nullRep);
    rep = FUN_004ce974();
  }
  else {
    std::allocator::allocator_4cea44(local_c);
    rep = (int *)FUN_004cf870();
    allocArg = FUN_004cf91c(local_24,0);
    nullRep = rep;
    uVar4 = std::allocator::allocator_4cea04(local_14);
    FUN_004cf950(uVar4,nullRep,allocArg);
    iVar5 = std::string::__rep_data((int)rep);
    nul = 0;
    FUN_004cfa4c(local_c,iVar5,&nul);
    rep[1] = capacity;
    FUN_004cfa80(rep,1);
    iVar5 = std::string::__rep_data((int)rep);
    rep[2] = length;
    *(undefined1 *)(iVar5 + length) = 0;
  }
  return rep;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf870  FUN_004cf870   (106 bytes)   [unnamed]
int __stdcall FUN_004cf870(void)

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
  
  __InitExceptBlockLDTC(0x513fc8);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_00404134;
    objectDtor = 0;
    std::bad_alloc::bad_alloc(&badAlloc);
    _ThrowExceptionLDTC((uint *)&DAT_004040dc,&badAlloc,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf91c  FUN_004cf91c   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cf91c(undefined4 *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513fdc);
  FUN_004ce9b0(param_1,param_2 + -1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf950  FUN_004cf950   (21 bytes)   [unnamed]
void __cdecl FUN_004cf950(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_004cf968(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf968  FUN_004cf968   (78 bytes)   [unnamed]
void __cdecl FUN_004cf968(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x513ff4);
  puVar1 = (undefined4 *)FUN_004cf9b8(0xc,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004cfa18(puVar1,param_2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf9b8  FUN_004cf9b8   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_004cf9b8(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfa18  FUN_004cfa18   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cfa18(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x514014);
  FUN_004ce9b0(param_1,*param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfa4c  FUN_004cfa4c   (21 bytes)   [unnamed]
void __cdecl FUN_004cfa4c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_004cfa64(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfa64  FUN_004cfa64   (26 bytes)   [unnamed]
void __cdecl FUN_004cfa64(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_004cf9b8(1,param_1);
  *puVar1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfa80  FUN_004cfa80   (25 bytes)   [unnamed]
void __cdecl FUN_004cfa80(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    *param_1 = param_2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfa9c  FUN_004cfa9c   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004cfa9c(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfaa0  std::string::__rep_data   (11 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004172ec (11 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. character data of a rep (rep + 12)
int __cdecl std::string::__rep_data(int rep)

{
  return rep + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfaac  FUN_004cfaac   (40 bytes)   [unnamed]
int __cdecl FUN_004cfaac(int str,uint pos,uint n1,uint s,uint param_5)

{
  std::string::replace(str,pos,n1,s,param_5,0,param_5);
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cfad4  std::string::replace   (1015 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00417320. replace(pos, n1, const char *s, n2, ...): with n1 = 0 at the end it appends s
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
  
  __InitExceptBlockLDTC(0x514074);
  uVar1 = std::string::size(self);
  if ((uVar1 < pos) || (n2 < param_6)) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_004084c8;
    uVar9 = 0;
    ehContext = 0x14;
    std::allocator::allocator_4ceae8(local_80);
    uVar1 = std::string::size(self);
    if (n2 < uVar1) {
      std::string::size(self);
    }
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_0040846c,outOfRange,uVar9,copyCtor,n,throwFlags,throwFile,throwLine);
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
  if ((*(int *)&g_stringNpos) - uVar1 <= iVar4 - local_84) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00408370;
    uVar9 = 0;
    ehContext = 0x2c;
    std::allocator::allocator_4ceae8(local_8c);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00408314,lengthError,uVar9,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_90 = (iVar4 - local_84) + uVar1;
  if (local_90 == 0) {
    FUN_004ce88c(self);
    piVar5 = FUN_004ce974();
    FUN_004cf3f4(piVar5);
    src = FUN_004ce974();
    local_94 = std::string::__rep_data((int)src);
    FUN_004cea90((int)local_290,self,&local_94);
    goto LAB_004cfeb1;
  }
  iVar4 = std::string::size(self);
  local_98 = (iVar4 - local_84) - pos;
  piVar5 = (int *)std::string::__getRepOf(self);
  iVar4 = FUN_004ce944(piVar5);
  if ((iVar4 < 2) && (n = FUN_004cff7c(self), local_90 <= n)) {
    if ((s != 0) && (n = std::string::data(self), n <= s)) {
      iVar4 = std::string::data(self);
      iVar7 = std::string::size(self);
      if (s < (uint)(iVar4 + iVar7)) goto LAB_004cfd70;
    }
    if (local_98 != 0) {
      n = local_98;
      iVar4 = FUN_004ce924(self);
      src = (undefined4 *)(iVar4 + pos + n1);
      iVar4 = FUN_004ce924(self);
      FUN_004cff5c((undefined4 *)(iVar4 + pos + uVar1),src,n);
    }
    if (uVar1 != 0) {
      src = (undefined4 *)(s + param_6);
      iVar4 = FUN_004ce924(self);
      FUN_004cff5c((undefined4 *)(iVar4 + pos),src,uVar1);
    }
    iVar4 = std::string::__getRepOf(self);
    uVar1 = local_90;
    *(uint *)(iVar4 + 8) = local_90;
    iVar4 = FUN_004ce924(self);
    puVar2 = (undefined1 *)(iVar4 + uVar1);
    uVar9 = FUN_004cfa9c();
    *puVar2 = (char)uVar9;
  }
  else {
LAB_004cfd70:
    rep = std::string::__getRep(self,local_90,local_90);
    if (pos != 0) {
      n = pos;
      src = (undefined4 *)FUN_004ce924(self);
      puVar8 = (undefined4 *)std::string::__rep_data((int)rep);
      FUN_004cf758(puVar8,src,n);
    }
    if (uVar1 != 0) {
      src = (undefined4 *)(s + param_6);
      n = uVar1;
      iVar4 = std::string::__rep_data((int)rep);
      FUN_004cf758((undefined4 *)(iVar4 + pos),src,n);
    }
    if (local_98 != 0) {
      n = local_98;
      iVar4 = FUN_004ce924(self);
      src = (undefined4 *)(iVar4 + pos + n1);
      iVar4 = std::string::__rep_data((int)rep);
      FUN_004cf758((undefined4 *)(iVar4 + pos + uVar1),src,n);
    }
    FUN_004ce88c(self);
    local_a0 = std::string::__rep_data((int)rep);
    FUN_004cea90((int)local_2a0,self,&local_a0);
  }
LAB_004cfeb1:
  iVar4 = FUN_004ce924(self);
  *sehChainHead = sehPrevFrame;
  return iVar4 + pos;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cff14  std::length_error::length_error   (69 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00417760 (69 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. constructs a std::length_error from a message string
//   also: std::length_error::length_error [rtti:vtable-store]
undefined4 * __cdecl std::length_error::length_error(undefined4 *self,int what)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x515748);
  std::logic_error::logic_error_416de8(self,what);
  *self = &std::length_error::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cff5c  FUN_004cff5c   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_004cff5c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  FUN_004dc7f8(param_1,param_2,param_3);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cff7c  FUN_004cff7c   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_004cff7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = std::string::__getRepOf(param_1);
  uVar2 = FUN_004cff94(iVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cff94  FUN_004cff94   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004cff94(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004cffa0  std::string::data   (15 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004177ec (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. pointer to the character data
undefined4 __cdecl std::string::data(int self)

{
  undefined4 data2;
  
  data2 = FUN_004ce924(self);
  return data2;
}

} // namespace tea

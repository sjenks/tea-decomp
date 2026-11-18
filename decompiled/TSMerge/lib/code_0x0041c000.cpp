// TSMerge.exe — runtime / library code "code_0x0041c000"
// 73 functions, 0x0041c0ec..0x0041fd74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c0ec  FUN_0041c0ec   (9 bytes)   [unnamed]
void __stdcall FUN_0041c0ec(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041c0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c0f8  FUN_0041c0f8   (9 bytes)   [unnamed]
void __stdcall FUN_0041c0f8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041c0fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c1d4  FUN_0041c1d4   (186 bytes)   [unnamed]
void __cdecl FUN_0041c1d4(int *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467538);
  if (*(int *)((int)param_1 + 0x3b) != 0) {
    if (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) == 0) {
      if (*(int *)((int)param_1 + 0x3b) != 0) {
        (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x3b) + 0xc))();
      }
    }
    else {
      FUN_0042d1a4(**(int **)((int)param_1 + 0x3b),0x10,0,0);
    }
  }
  *(undefined4 *)((int)param_1 + 0x3b) = param_2;
  if (((*(int *)((int)param_1 + 0x3b) != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) == 0)) {
    FUN_0042d484(**(int **)((int)param_1 + 0x3b),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)((int)param_1 + 0x3b) + 8) + 0x10))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c768  FUN_0041c768   (12 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0041c768(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c798  FUN_0041c798   (45 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c798(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4676bc);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c7c8  FUN_0041c7c8   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041c7c8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4676c4);
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_3 == 1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c800  FUN_0041c800   (21 bytes)   [unnamed]
void __cdecl FUN_0041c800(int *param_1,uint param_2)

{
  FUN_0041c818(*param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c818  FUN_0041c818   (24 bytes)   [unnamed]
void __cdecl FUN_0041c818(int param_1,uint param_2)

{
  if (param_1 == 0) {
    FUN_0041cad0(param_2,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cad0  FUN_0041cad0   (86 bytes)   [unnamed]
void __cdecl FUN_0041cad0(uint param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x467788);
  piVar1 = OWL::TXGdi::TXGdi(local_10,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cb6c  FUN_0041cb6c   (242 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall FUN_0041cb6c(void)

{
  LONG LVar1;
  undefined4 *sehChainHead;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4677e8);
  if (DAT_004677d0 == 0) {
    LVar1 = InterlockedIncrement((LONG *)&DAT_004677d4);
    if (LVar1 == 0) {
      InterlockedIncrement((LONG *)&DAT_004677d4);
      DAT_004677d0 = operator_new();
      if (DAT_004677d0 != 0) {
        *(undefined4 *)(DAT_004677d0 + 1) = 0;
        *(undefined4 *)(DAT_004677d0 + 5) = 0;
        *(undefined4 *)(DAT_004677d0 + 9) = 0;
        *(undefined4 *)(DAT_004677d0 + 0xd) = 0;
        *(undefined4 *)(DAT_004677d0 + 0x12) = 0;
        *(undefined4 *)(DAT_004677d0 + 0x16) = 0x3c;
        *(undefined4 *)(DAT_004677d0 + 0x1a) = 0;
        *(undefined4 *)(DAT_004677d0 + 0x1e) = 0x3c;
        *(undefined4 *)(DAT_004677d0 + 0x22) = 6;
      }
      _DAT_004677d4 = 0xffffffff;
    }
    *sehChainHead = local_2c;
  }
  else {
    *sehChainHead = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cc5e  FUN_0041cc5e   (228 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
LONG __stdcall FUN_0041cc5e(void)

{
  int iVar1;
  LONG LVar2;
  LONG *sehChainHead;
  LONG local_2c;
  
  __InitExceptBlockLDTC(0x467840);
  if ((DAT_004677d0 == 0) || (*(int *)(DAT_004677d0 + 1) != 0)) {
    *sehChainHead = local_2c;
    LVar2 = local_2c;
  }
  else {
    LVar2 = InterlockedIncrement((LONG *)&DAT_0046782c);
    if (LVar2 == 0) {
      LVar2 = InterlockedIncrement((LONG *)&DAT_0046782c);
      iVar1 = DAT_004677d0;
      if (DAT_004677d0 != 0) {
        FUN_0041cd64(DAT_004677d0);
        if (*(int *)(iVar1 + 9) != 0) {
          free();
        }
        FUN_004159ac(iVar1 + 0x11,0);
        LVar2 = operator_delete();
      }
      DAT_004677d0 = 0;
      _DAT_0046782c = 0xffffffff;
    }
    *sehChainHead = local_2c;
  }
  return LVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cd64  FUN_0041cd64   (73 bytes)   [unnamed]
void __cdecl FUN_0041cd64(int param_1)

{
  undefined4 *puVar1;
  int i;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467878);
  for (i = 0; i < *(int *)(param_1 + 1); i = i + 1) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 9) + i * 4);
    *puVar1 = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xd) = puVar1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cdb0  FUN_0041cdb0   (126 bytes)   [unnamed]
undefined4 __cdecl FUN_0041cdb0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x467890);
  if ((param_1 != 0) && (DAT_004677d0 != 0)) {
    local_c[0] = param_1;
    uVar2 = FUN_0041ce7c(DAT_004677d0,local_c);
    if (uVar2 != 0xffffffff) {
      uVar1 = *(undefined4 *)(*(int *)(DAT_004677d0 + 9) + uVar2 * 4);
      *sehChainHead = sehPrevFrame;
      return uVar1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ce7c  FUN_0041ce7c   (135 bytes)   [unnamed]
uint __cdecl FUN_0041ce7c(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar3 = *(int *)(param_1 + 1) - 1;
    while ((uVar1 < uVar3 && (uVar3 != 0xffffffff))) {
      uVar2 = uVar3 + uVar1 >> 1;
      if (*param_2 == **(uint **)(*(int *)(param_1 + 9) + uVar2 * 4)) {
        return uVar2;
      }
      if (*param_2 < **(uint **)(*(int *)(param_1 + 9) + uVar2 * 4)) {
        uVar1 = uVar2 + 1;
      }
      else {
        uVar3 = uVar2 - 1;
      }
    }
    if ((uVar3 != uVar1) || (**(uint **)(*(int *)(param_1 + 9) + uVar1 * 4) != *param_2)) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cf04  FUN_0041cf04   (137 bytes)   [unnamed]
void __cdecl FUN_0041cf04(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint local_c;
  undefined1 unused;
  undefined1 unused2;
  
  __InitExceptBlockLDTC(0x4678c0);
  FUN_0041cb6c();
  if (param_1 != 0) {
    iVar1 = FUN_0041cdb0(param_1);
    if (iVar1 == 0) {
      local_c = param_1;
      unused = param_2;
      unused2 = 1;
      FUN_0041cf90(DAT_004677d0,&local_c);
    }
    else {
      *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cf90  FUN_0041cf90   (6 bytes)   [unnamed]
int __stdcall FUN_0041cf90(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4678e4);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_0041d0bc(param_1,*(int *)(param_1 + 1) + 1);
  }
  iVar3 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  while ((iVar3 != 0 && (**(uint **)(*(int *)(param_1 + 9) + -4 + iVar3 * 4) < *param_2))) {
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar3 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 9) + -4 + iVar3 * 4);
    iVar3 = iVar3 + -1;
  }
  puVar1 = (uint *)(param_1 + 0xd);
  if (*puVar1 == 0) {
    puVar2 = (uint *)FUN_004159f8(param_1 + 0x11,*(uint *)(param_1 + 0x22));
  }
  else {
    puVar2 = (uint *)*puVar1;
    *puVar1 = *puVar2;
  }
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2;
    *(char *)(puVar2 + 1) = (char)param_2[1];
    *(undefined1 *)((int)puVar2 + 5) = *(undefined1 *)((int)param_2 + 5);
  }
  *(uint **)(*(int *)(param_1 + 9) + iVar3 * 4) = puVar2;
  *sehChainHead = sehPrevFrame;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041cf96  FUN_0041cf96   (266 bytes)   [unnamed]
int __stdcall FUN_0041cf96(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *sehChainHead;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x4678e4);
  if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
    FUN_0041d0bc(iVar2,*(int *)(iVar2 + 1) + 1);
  }
  iVar5 = *(int *)(iVar2 + 1);
  *(int *)(iVar2 + 1) = *(int *)(iVar2 + 1) + 1;
  while ((iVar5 != 0 &&
         (**(uint **)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4) < **(uint **)(unaff_EBP + 0xc)))) {
    *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) =
         *(undefined4 *)(*(int *)(iVar2 + 9) + -4 + iVar5 * 4);
    iVar5 = iVar5 + -1;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0xc);
  piVar1 = (int *)(iVar2 + 0xd);
  if (*piVar1 == 0) {
    iVar3 = FUN_004159f8(iVar2 + 0x11,*(uint *)(iVar2 + 0x22));
  }
  else {
    *(int *)(unaff_EBP + -0x34) = *piVar1;
    *piVar1 = **(int **)(unaff_EBP + -0x34);
    iVar3 = *(int *)(unaff_EBP + -0x34);
  }
  *(int *)(unaff_EBP + -0x30) = iVar3;
  *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x30);
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x18) = 0x14;
    **(undefined4 **)(unaff_EBP + -4) = **(undefined4 **)(unaff_EBP + -0x2c);
    *(undefined1 *)(*(int *)(unaff_EBP + -4) + 4) = *(undefined1 *)(*(int *)(unaff_EBP + -0x2c) + 4)
    ;
    *(undefined1 *)(*(int *)(unaff_EBP + -4) + 5) = *(undefined1 *)(*(int *)(unaff_EBP + -0x2c) + 5)
    ;
    *(undefined2 *)(unaff_EBP + -0x18) = 8;
    uVar4 = *(undefined4 *)(unaff_EBP + -4);
  }
  *(undefined4 *)(*(int *)(iVar2 + 9) + iVar5 * 4) = uVar4;
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x28);
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d0bc  FUN_0041d0bc   (155 bytes)   [unnamed]
void __cdecl FUN_0041d0bc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
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
// 0x0041d158  FUN_0041d158   (41 bytes)   [unnamed]
void __cdecl FUN_0041d158(uint param_1)

{
  int iVar1;
  
  FUN_0041cb6c();
  iVar1 = FUN_0041cdb0(param_1);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d184  FUN_0041d184   (293 bytes)   [unnamed]
uint __cdecl FUN_0041d184(uint param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  BOOL ok;
  uint uVar5;
  undefined4 *puVar6;
  uint *sehChainHead;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x467904);
  if (DAT_004677d0 == 0) {
    *sehChainHead = local_28;
    uVar5 = local_28;
  }
  else {
    puVar3 = (uint *)FUN_0041cdb0(param_1);
    uVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      *(char *)((int)puVar3 + 5) = *(char *)((int)puVar3 + 5) + -1;
      bVar2 = *(char *)((int)puVar3 + 5) == '\0';
      uVar5 = (uint)bVar2;
      if (bVar2) {
        ok = DeleteObject((HGDIOBJ)*puVar3);
        if (ok == 0) {
          FUN_0041cad0(0x7fde,*puVar3);
        }
        uVar5 = FUN_0041ce7c(DAT_004677d0,puVar3);
        if (uVar5 != 0xffffffff) {
          puVar1 = *(undefined4 **)(*(int *)(DAT_004677d0 + 9) + uVar5 * 4);
          FUN_004559f4((undefined4 *)(*(int *)(DAT_004677d0 + 9) + uVar5 * 4),
                       (undefined4 *)(*(int *)(DAT_004677d0 + 9) + (uVar5 + 1) * 4),
                       ((*(int *)(DAT_004677d0 + 1) - uVar5) + -1) * 4);
          *(int *)(DAT_004677d0 + 1) = *(int *)(DAT_004677d0 + 1) + -1;
          puVar6 = (undefined4 *)(DAT_004677d0 + 0xd);
          *puVar1 = *puVar6;
          *puVar6 = puVar1;
        }
        uVar5 = FUN_0041cc5e();
      }
    }
    *sehChainHead = local_28;
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d2ac  FUN_0041d2ac   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041d2ac(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46791c);
  FUN_0041c798(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d2fc  FUN_0041d2fc   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041d2fc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467940);
  FUN_0041c7c8(param_1,param_2,param_3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d474  FUN_0041d474   (133 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0041d474(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467964);
  if (param_1 != 0) {
    FUN_0041cd64(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_004159ac(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d590  FUN_0041d590   (130 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_0041d590(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4679a0);
  if (param_1 != 0) {
    FUN_0041cd64(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_004159ac(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d660  FUN_0041d660   (125 bytes)   [unnamed]
void __cdecl FUN_0041d660(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4679dc);
  if (param_1 != 0) {
    FUN_0041cd64(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_004159ac(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d724  FUN_0041d724   (25 bytes)   [unnamed]
void __cdecl FUN_0041d724(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d740  FUN_0041d740   (25 bytes)   [unnamed]
int * __cdecl FUN_0041d740(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d75c  FUN_0041d75c   (179 bytes)   [unnamed]
void __cdecl FUN_0041d75c(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((((*param_1 == 0) && (param_1[2] == 0)) && (param_1[1] == 0)) && (param_1[3] == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (((*param_2 == 0) && (param_2[2] == 0)) && ((param_2[1] == 0 && (param_2[3] == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if (*param_2 < *param_1) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = *param_2;
      }
      *param_1 = iVar2;
      if (param_2[1] < param_1[1]) {
        iVar2 = param_1[1];
      }
      else {
        iVar2 = param_2[1];
      }
      param_1[1] = iVar2;
      if (param_1[2] < param_2[2]) {
        iVar2 = param_1[2];
      }
      else {
        iVar2 = param_2[2];
      }
      param_1[2] = iVar2;
      if (param_1[3] < param_2[3]) {
        iVar2 = param_1[3];
      }
      else {
        iVar2 = param_2[3];
      }
      param_1[3] = iVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d810  FUN_0041d810   (171 bytes)   [unnamed]
void __cdecl FUN_0041d810(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && (param_2[1] == 0)) && (param_2[3] == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (((*param_1 == 0) && (param_1[2] == 0)) && ((param_1[1] == 0 && (param_1[3] == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
    }
    else {
      if (*param_1 < *param_2) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = *param_2;
      }
      *param_1 = iVar2;
      if (param_1[1] < param_2[1]) {
        iVar2 = param_1[1];
      }
      else {
        iVar2 = param_2[1];
      }
      param_1[1] = iVar2;
      if (param_2[2] < param_1[2]) {
        iVar2 = param_1[2];
      }
      else {
        iVar2 = param_2[2];
      }
      param_1[2] = iVar2;
      if (param_2[3] < param_1[3]) {
        iVar2 = param_1[3];
      }
      else {
        iVar2 = param_2[3];
      }
      param_1[3] = iVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d8bc  FUN_0041d8bc   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0041d8bc(int param_1)

{
  if (((*(byte *)(param_1 + 0x1b) & 0xc0) != 0) && ((*(byte *)(param_1 + 0x1a) & 0x80) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d8d6  FUN_0041d8d6   (27 bytes)   [unnamed]
int __cdecl FUN_0041d8d6(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == *(int *)(param_1 + iVar1 * 4)) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d8f1  FUN_0041d8f1   (499 bytes)   [unnamed]
void __cdecl FUN_0041d8f1(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int aiStack_40 [6];
  int unused;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    local_8 = FUN_0041d8d6(param_3,*(int *)(param_1 + 0xc));
    local_c = FUN_0041d8d6(param_1,param_2);
    if ((local_8 != -1) && (local_c != -1)) {
      iVar1 = FUN_0041efc8(param_3);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = FUN_0041d8d6(param_1,*(int *)(param_3 + iVar4 * 4));
          aiStack_40[iVar4] = iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar4 = FUN_0041efc8(param_1);
      local_10 = iVar4 + -1;
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          if ((aiStack_40[iVar5] == -1) && (iVar5 != local_8)) {
            iVar2 = iVar2 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      if (iVar2 + iVar4 + -1 < 4) {
        local_14 = *(int *)(local_c * 4 + param_1 + 0x10);
        iVar4 = local_14 >> 8;
        local_18 = iVar4 * (*(int *)(param_3 + 0x1c) >> 8);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_18;
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            if (aiStack_40[iVar2] != -1) {
              local_1c = iVar4 * (*(int *)(iVar2 * 4 + param_3 + 0x10) >> 8);
              piVar3 = (int *)(aiStack_40[iVar2] * 4 + param_1 + 0x10);
              *piVar3 = *piVar3 + local_1c;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        *(undefined4 *)(param_1 + local_c * 4) = 0;
        while (local_c = local_c + 1, local_c < 3) {
          if (*(int *)(param_1 + local_c * 4) != 0) {
            *(undefined4 *)(param_1 + -4 + local_c * 4) = *(undefined4 *)(param_1 + local_c * 4);
            *(undefined4 *)(param_1 + local_c * 4) = 0;
            *(undefined4 *)(param_1 + 0xc + local_c * 4) =
                 *(undefined4 *)(param_1 + 0x10 + local_c * 4);
          }
        }
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            if ((aiStack_40[iVar2] == -1) && (iVar2 != local_8)) {
              *(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_3 + iVar2 * 4);
              local_20 = (int *)(iVar2 * 4 + param_3 + 0x10);
              local_24 = iVar4 * (*local_20 >> 8);
              unused = local_24;
              *(int *)(param_1 + 0x10 + local_10 * 4) = local_24;
              local_10 = local_10 + 1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        piVar3 = (int *)(param_1 + 0x1c);
        iVar1 = 0x10000 - local_14 >> 8;
        *piVar3 = *piVar3 / iVar1;
        *piVar3 = *piVar3 << 8;
        iVar4 = 0;
        if (0 < local_10) {
          do {
            piVar3 = (int *)(param_1 + 0x10 + iVar4 * 4);
            *piVar3 = *piVar3 / iVar1;
            *piVar3 = *piVar3 << 8;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_10);
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dae4  InitRichEditStreamer_41dae4   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_41dae4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467a0c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0041f0d8;
  puVar1 = FUN_0045666c(1,0,0x412754);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00476c54,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041db3a  FUN_0041db3a   (48 bytes)   [unnamed]
void __stdcall FUN_0041db3a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467a20);
  OWL::TStreamableClass::_dtor(0x476c54,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041db6a  FUN_0041db6a   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041db6a(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467a28);
  *param_1 = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041db94  FUN_0041db94   (63 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041db94(undefined4 *param_1,int numWindows)

{
  HDWP hDwp;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467a40);
  if (numWindows == 0) {
    hDwp = (HDWP)0x0;
  }
  else {
    hDwp = BeginDeferWindowPos(numWindows);
  }
  *param_1 = hDwp;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dbf4  FUN_0041dbf4   (49 bytes)   [unnamed]
bool __cdecl FUN_0041dbf4(int *param_1,HWND hWnd,HWND hWnd2,int x,int y,int cx,int cy, UINT flags)

{
  HDWP hDwp;
  
  hDwp = DeferWindowPos((HDWP)*param_1,hWnd,hWnd2,x,y,cx,cy,flags);
  *param_1 = (int)hDwp;
  return *param_1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dc28  FUN_0041dc28   (32 bytes)   [unnamed]
undefined4 __cdecl FUN_0041dc28(undefined4 *param_1)

{
  BOOL ok;
  
  ok = EndDeferWindowPos((HDWP)*param_1);
  if (ok != 0) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041dcb8  FUN_0041dcb8   (49 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041dcb8(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467bcc);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e018  FUN_0041e018   (172 bytes)   [unnamed]
void __cdecl FUN_0041e018(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int i;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  undefined4 sehPrevFrame;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x467af8);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    for (puVar1 = *(undefined1 **)(param_1 + 0x18); puVar1 != (undefined1 *)0x0;
        puVar1 = *(undefined1 **)(puVar1 + 0x55)) {
      if (param_2 == *(int *)(puVar1 + 1)) {
        *(int *)(puVar1 + 1) = param_2;
        puVar3 = (undefined4 *)(puVar1 + 5);
        for (i = 0xb; i != 0; i = i + -1) {
          *puVar3 = *param_3;
          param_3 = param_3 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        FUN_0041e954(param_1,puVar1);
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
  }
  puVar1 = (undefined1 *)operator_new();
  if (puVar1 != (undefined1 *)0x0) {
    FUN_0041edf0(puVar1,param_2,param_3);
  }
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + 1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e0e8  FUN_0041e0e8   (49 bytes)   [unnamed]
undefined4 __cdecl FUN_0041e0e8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int i;
  undefined4 *puVar4;
  
  iVar1 = FUN_0041e348(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 5);
    for (i = 0xb; i != 0; i = i + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e11c  FUN_0041e11c   (431 bytes)   [unnamed]
undefined4 __cdecl FUN_0041e11c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)(param_1 + 0x18);
  while( true ) {
    if (*piVar3 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(*piVar3 + 1)) break;
    piVar3 = (int *)(*piVar3 + 0x55);
  }
  puVar1 = (undefined1 *)*piVar3;
  *piVar3 = *(int *)(puVar1 + 0x55);
  FUN_0041e954(param_1,puVar1);
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + -1;
  for (puVar2 = *(undefined1 **)(param_1 + 0x18); puVar2 != (undefined1 *)0x0;
      puVar2 = *(undefined1 **)(puVar2 + 0x55)) {
    if (param_2 == *(int *)(puVar2 + 5)) {
      FUN_0041e954(param_1,puVar2);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar1 + 5);
      if (*(int *)(puVar2 + 5) == 0) {
        puVar2[0xb] = puVar1[0xb] & 0xf | puVar2[0xb] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x10)) {
      FUN_0041e954(param_1,puVar2);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
      if (*(int *)(puVar2 + 0x10) == 0) {
        puVar2[0x16] = puVar1[0x16] & 0xf | puVar2[0x16] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x1b)) {
      FUN_0041e954(param_1,puVar2);
      if ((puVar2[0x1f] & 0xf) == 5) {
        puVar2[0x20] = puVar2[0x20] & 0xf0;
      }
      else if ((puVar1[0x1f] & 0xf) == 5) {
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(puVar1 + 5);
        if (*(int *)(puVar2 + 0x1b) == 0) {
          puVar2[0x21] = puVar1[0xb] & 0xf | puVar2[0x21] & 0xf0;
        }
      }
      else {
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(puVar1 + 0x1b);
        if (*(int *)(puVar2 + 0x1b) == 0) {
          puVar2[0x21] = puVar1[0x21] & 0xf | puVar2[0x21] & 0xf0;
        }
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x26)) {
      FUN_0041e954(param_1,puVar2);
      if ((puVar2[0x2a] & 0xf) == 6) {
        puVar2[0x2b] = puVar2[0x2b] & 0xf0;
      }
      else if ((puVar1[0x2a] & 0xf) == 6) {
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)(puVar1 + 0x10);
        if (*(int *)(puVar2 + 0x26) == 0) {
          puVar2[0x2c] = puVar1[0x16] & 0xf | puVar2[0x2c] & 0xf0;
        }
      }
      else {
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)(puVar1 + 0x26);
        if (*(int *)(puVar2 + 0x26) == 0) {
          puVar2[0x2c] = puVar1[0x2c] & 0xf | puVar2[0x2c] & 0xf0;
        }
      }
    }
  }
  uVar4 = operator_delete();
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e348  FUN_0041e348   (32 bytes)   [unnamed]
int __cdecl FUN_0041e348(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 1)) break;
    iVar1 = *(int *)(iVar1 + 0x55);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e368  FUN_0041e368   (36 bytes)   [unnamed]
void __cdecl FUN_0041e368(int param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    iVar2 = FUN_0041ef54(piVar1);
    *(int *)piVar1[3] = iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e38c  FUN_0041e38c   (53 bytes)   [unnamed]
void __cdecl FUN_0041e38c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      for (iVar1 = *(int *)(param_1 + 0x1c); *(int *)(iVar1 + 0x20) != 0;
          iVar1 = *(int *)(iVar1 + 0x20)) {
      }
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e3c4  FUN_0041e3c4   (242 bytes)   [unnamed]
void __cdecl FUN_0041e3c4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  FUN_0041e38c((int)param_1);
  for (iVar1 = param_1[6]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x55)) {
    *(bool *)(iVar1 + 0x39) = *(int *)(iVar1 + 0x35) == 0;
    *(bool *)(iVar1 + 0x42) = *(int *)(iVar1 + 0x3e) == 0;
    *(bool *)(iVar1 + 0x4b) = *(int *)(iVar1 + 0x47) == 0;
    *(bool *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x50) == 0;
  }
  do {
    bVar5 = false;
    piVar2 = (int *)param_1[7];
    piVar4 = (int *)0x0;
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      uVar6 = FUN_0041ef18(piVar3);
      if ((char)uVar6 == '\0') {
        piVar2 = (int *)piVar3[8];
        piVar4 = piVar3;
      }
      else {
        *(undefined1 *)(piVar3[3] + 8) = 1;
        bVar5 = true;
        if (piVar4 == (int *)0x0) {
          param_1[7] = piVar3[8];
        }
        else {
          piVar4[8] = piVar3[8];
        }
        piVar2 = (int *)piVar3[8];
        if (piVar7 == (int *)0x0) {
          param_1[8] = (int)piVar3;
          piVar7 = piVar3;
        }
        else {
          piVar7[8] = (int)piVar3;
          piVar7 = piVar3;
        }
      }
    }
  } while (bVar5);
  if (param_1[7] != 0) {
    FUN_0042e05c(*param_1,0x7fe5);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e4b8  FUN_0041e4b8   (1147 bytes)   [unnamed]
void __cdecl FUN_0041e4b8(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *sehChainHead;
  int local_34;
  int local_30;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467b28);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_0041eeb0(piVar1);
  }
  if ((param_4 == 0) && ((*(byte *)(param_2 + 9) & 0xf) == 2)) {
    local_34 = param_2 + 0x43;
  }
  else if ((param_4 == 1) && ((*(byte *)(param_2 + 0x14) & 0xf) == 3)) {
    local_34 = param_2 + 0x4c;
  }
  else {
    local_34 = param_4 * 9 + param_2 + 0x31;
  }
  if (((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 5) ||
     ((*(byte *)((int)param_3 + 5) & 0xf) == 0)) goto LAB_0041e63f;
  if (*param_3 == 0) {
    iVar2 = param_1[9];
  }
  else {
    iVar2 = FUN_0041e348((int)param_1,*param_3);
    if (iVar2 == 0) {
      operator_delete();
      FUN_0042e05c(*param_1,0x7fe4);
    }
    iVar2 = iVar2 + 0x31;
  }
  uVar4 = *(byte *)((int)param_3 + 6) & 0xf;
  if (uVar4 < 4) {
    *piVar1 = iVar2 + (*(byte *)((int)param_3 + 6) & 0xf) * 9;
    goto LAB_0041e63f;
  }
  if (uVar4 != 4) {
    if (uVar4 - 5 < 2) {
      *piVar1 = ((*(byte *)((int)param_3 + 6) & 0xf) - 3) * 9 + iVar2;
      piVar1[1] = iVar2 + ((*(byte *)((int)param_3 + 6) & 0xf) - 5) * 9;
      piVar1[5] = -0x10000;
      piVar1[7] = 0x10000;
    }
    goto LAB_0041e63f;
  }
  if (param_4 == 0) {
LAB_0041e618:
    *piVar1 = iVar2;
    piVar1[1] = iVar2 + 0x12;
  }
  else if (param_4 == 1) {
LAB_0041e622:
    *piVar1 = iVar2 + 9;
    piVar1[1] = iVar2 + 0x1b;
  }
  else {
    if (param_4 == 2) goto LAB_0041e618;
    if (param_4 == 3) goto LAB_0041e622;
  }
  piVar1[5] = 0x8000;
  piVar1[4] = 0x8000;
LAB_0041e63f:
  iVar2 = (int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c;
  if (iVar2 == 0) {
    if (param_4 == 2) {
      piVar5 = (int *)(*(int *)(param_2 + 1) + 0x28);
    }
    else {
      piVar5 = (int *)(*(int *)(param_2 + 1) + 0x2c);
    }
    piVar1[7] = piVar1[7] + *piVar5 * 0x10000;
  }
  else if (iVar2 == 1) {
    iVar2 = (*(int *)((int)param_3 + 7) << 0x10) / 100 >> 8;
    piVar1[4] = (piVar1[4] >> 8) * iVar2;
    piVar1[7] = (piVar1[7] >> 8) * iVar2;
    if ((*(byte *)((int)param_3 + 6) & 0xf) - 4 < 3) {
      piVar1[5] = (piVar1[5] >> 8) * iVar2;
    }
  }
  else if (iVar2 - 2U < 4) {
    if ((*(byte *)((int)param_3 + 5) & 0xf0) == 0) {
      iVar2 = *(int *)((int)param_3 + 7);
    }
    else {
      iVar2 = FUN_0041ebb4((int)param_1,*(int *)((int)param_3 + 7));
    }
    if ((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 2) {
      iVar2 = -1 - iVar2;
    }
    else if ((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 3) {
      iVar2 = iVar2 + 1;
    }
    piVar1[7] = piVar1[7] + iVar2 * 0x10000;
  }
  if (*piVar1 == 0) {
    local_30 = 0;
  }
  else if (piVar1[1] == 0) {
    local_30 = 1;
  }
  else {
    local_30 = 2;
  }
  bVar3 = *(byte *)(param_3 + 1) & 0xf;
  if (bVar3 == 4) {
    iVar2 = param_2 + 0x31;
    if (param_4 == 0) {
      iVar2 = param_2 + 0x43;
    }
    else if (param_4 == 1) {
      iVar2 = param_2 + 0x4c;
    }
    else if (param_4 == 2) {
      if ((*(byte *)(param_2 + 9) & 0xf) == 2) {
        iVar2 = param_2 + 0x43;
        local_34 = param_2 + 0x31;
      }
    }
    else if (param_4 == 3) {
      if ((*(byte *)(param_2 + 0x14) & 0xf) == 3) {
        iVar2 = param_2 + 0x4c;
        local_34 = param_2 + 0x31;
      }
      else {
        iVar2 = param_2 + 0x3a;
      }
    }
    piVar1[local_30] = iVar2;
    iVar2 = 0;
    if (local_30 != 0) {
      do {
        piVar1[iVar2 + 4] = piVar1[iVar2 + 4] << 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_30);
    }
    piVar1[7] = piVar1[7] << 1;
    piVar1[local_30 + 4] = -0x10000;
  }
  else if (bVar3 == 5) {
    if ((param_4 == 0) || ((*(byte *)(param_2 + 9) & 0xf) == 2)) {
      iVar2 = 0;
      if (local_30 != 0) {
        do {
          piVar1[iVar2 + 4] = -piVar1[iVar2 + 4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      piVar1[7] = -piVar1[7];
      piVar1[7] = piVar1[7] + 0x10000;
      piVar1[local_30] = param_2 + 0x43;
      if (param_4 == 2) {
        local_34 = param_2 + 0x31;
      }
    }
    else {
      piVar1[local_30] = param_2 + 0x31;
      piVar1[7] = piVar1[7] + -0x10000;
      FUN_0041d8f1(*(int *)(param_2 + 0x35),local_34,(int)piVar1);
    }
  }
  else if (bVar3 == 6) {
    if ((param_4 == 1) || ((*(byte *)(param_2 + 0x14) & 0xf) == 3)) {
      iVar2 = 0;
      if (local_30 != 0) {
        do {
          piVar1[iVar2 + 4] = -piVar1[iVar2 + 4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      piVar1[7] = -piVar1[7];
      piVar1[7] = piVar1[7] + 0x10000;
      piVar1[local_30] = param_2 + 0x4c;
      if (param_4 == 3) {
        local_34 = param_2 + 0x3a;
      }
    }
    else {
      piVar1[local_30] = param_2 + 0x3a;
      piVar1[7] = piVar1[7] + -0x10000;
      FUN_0041d8f1(*(int *)(param_2 + 0x3e),local_34,(int)piVar1);
    }
  }
  *(int **)(local_34 + 4) = piVar1;
  piVar1[3] = local_34;
  piVar1[8] = param_1[7];
  param_1[7] = (int)piVar1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e954  FUN_0041e954   (116 bytes)   [unnamed]
void __cdecl FUN_0041e954(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_0041e38c(param_1);
  *param_2 = 0;
  local_8 = 0;
  do {
    iVar1 = puVar3[1];
    *puVar3 = 0;
    if (iVar1 != 0) {
      if (iVar1 == *(int *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x20);
      }
      else {
        for (iVar2 = *(int *)(param_1 + 0x1c); *(int *)(iVar2 + 0x20) != 0;
            iVar2 = *(int *)(iVar2 + 0x20)) {
          if (iVar1 == *(int *)(iVar2 + 0x20)) {
            *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
            break;
          }
        }
      }
      operator_delete();
      puVar3[1] = 0;
    }
    puVar3 = (undefined4 *)((int)puVar3 + 9);
    local_8 = local_8 + 1;
    if (3 < local_8) {
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e9c8  FUN_0041e9c8   (492 bytes)   [unnamed]
void __cdecl FUN_0041e9c8(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    if ((param_2[10] & 0xfU) == 0) {
      if ((param_2[9] & 0xfU) == 0) {
        *(undefined4 *)(param_2 + 0x31) = *(undefined4 *)(*(int *)(param_2 + 1) + 0x20);
      }
      else {
        *(int *)(param_2 + 0x43) =
             *(int *)(*(int *)(param_2 + 1) + 0x20) + *(int *)(*(int *)(param_2 + 1) + 0x28) + -1;
      }
    }
    else if (((int)((uint)(byte)param_2[10] << 0x1c) >> 0x1c == 5) && ((param_2[9] & 0xfU) != 4)) {
      if ((param_2[10] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar1 = FUN_0041ebb4((int)param_1,*(int *)(param_2 + 0xc));
      }
      if ((param_2[9] & 0xfU) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
      }
      *(int *)(param_2 + iVar2 * 9 + 0x31) = iVar1;
    }
    else {
      FUN_0041e4b8(param_1,(int)param_2,(int *)(param_2 + 5),0);
    }
    if ((param_2[0x15] & 0xfU) == 0) {
      if ((param_2[0x14] & 0xfU) == 1) {
        *(undefined4 *)(param_2 + 0x3a) = *(undefined4 *)(*(int *)(param_2 + 1) + 0x24);
      }
      else {
        *(int *)(param_2 + 0x4c) =
             *(int *)(*(int *)(param_2 + 1) + 0x24) + *(int *)(*(int *)(param_2 + 1) + 0x2c) + -1;
      }
    }
    else if (((int)((uint)(byte)param_2[0x15] << 0x1c) >> 0x1c == 5) &&
            ((param_2[0x14] & 0xfU) != 4)) {
      if ((param_2[0x15] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x17);
      }
      else {
        iVar1 = FUN_0041ebb4((int)param_1,*(int *)(param_2 + 0x17));
      }
      if ((param_2[0x14] & 0xfU) == 1) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
      }
      *(int *)(param_2 + iVar2 * 9 + 0x31) = iVar1;
    }
    else {
      FUN_0041e4b8(param_1,(int)param_2,(int *)(param_2 + 0x10),1);
    }
    if (((param_2[0x1f] & 0xfU) == 2) &&
       (((param_2[0x20] & 0xfU) == 0 || ((int)((uint)(byte)param_2[0x20] << 0x1c) >> 0x1c == 5)))) {
      if ((param_2[0x20] & 0xfU) == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 1) + 0x20) + *(int *)(*(int *)(param_2 + 1) + 0x28) + -1
        ;
      }
      else if ((param_2[0x20] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x22);
      }
      else {
        iVar1 = FUN_0041ebb4((int)param_1,*(int *)(param_2 + 0x22));
      }
      *(int *)(param_2 + 0x43) = iVar1;
    }
    else {
      FUN_0041e4b8(param_1,(int)param_2,(int *)(param_2 + 0x1b),2);
    }
    if (((param_2[0x2a] & 0xfU) == 3) &&
       (((param_2[0x2b] & 0xfU) == 0 || ((int)((uint)(byte)param_2[0x2b] << 0x1c) >> 0x1c == 5)))) {
      if ((param_2[0x2b] & 0xfU) == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 1) + 0x24) + *(int *)(*(int *)(param_2 + 1) + 0x2c) + -1
        ;
      }
      else if ((param_2[0x2b] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x2d);
      }
      else {
        iVar1 = FUN_0041ebb4((int)param_1,*(int *)(param_2 + 0x2d));
      }
      *(int *)(param_2 + 0x4c) = iVar1;
    }
    else {
      FUN_0041e4b8(param_1,(int)param_2,(int *)(param_2 + 0x26),3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ebb4  FUN_0041ebb4   (30 bytes)   [unnamed]
int __cdecl FUN_0041ebb4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * *(int *)(param_1 + 0x2d);
  iVar2 = iVar1 + 4;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 0xb;
  }
  return iVar2 >> 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ebd4  FUN_0041ebd4   (147 bytes)   [unnamed]
void __cdecl FUN_0041ebd4(int *param_1)

{
  HGDIOBJ hGdiObject;
  undefined4 *sehChainHead;
  LONG local_68 [14];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint gdiObject [2];
  
  __InitExceptBlockLDTC(0x467b68);
  hGdiObject = (HGDIOBJ)0x0;
  if (*(int *)(*param_1 + 0xc) != 0) {
    hGdiObject = (HGDIOBJ)FUN_0042bbb4(*param_1,0x31,0,0);
  }
  if (hGdiObject == (HGDIOBJ)0x0) {
    hGdiObject = GetStockObject(0xd);
  }
  ehContext = 8;
  FUN_004188f4(gdiObject,hGdiObject,0);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FUN_00418ae8(local_68,gdiObject);
  *(LONG *)((int)param_1 + 0x2d) = local_68[0];
  ehDtorCount = ehDtorCount + -2;
  OWL::TGdiObject::_dtor(gdiObject,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041edf0  FUN_0041edf0   (189 bytes)   [unnamed]
undefined1 * __cdecl FUN_0041edf0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467bb4);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 5) = *param_3;
  *(undefined4 *)(param_1 + 9) = param_3[1];
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_3 + 2);
  param_1[0xf] = *(undefined1 *)((int)param_3 + 10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)param_3 + 0xb);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)param_3 + 0xf);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)((int)param_3 + 0x13);
  param_1[0x1a] = *(undefined1 *)((int)param_3 + 0x15);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((int)param_3 + 0x16);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)((int)param_3 + 0x1a);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)((int)param_3 + 0x1e);
  param_1[0x25] = *(undefined1 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)param_3 + 0x21);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)param_3 + 0x25);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((int)param_3 + 0x29);
  param_1[0x30] = *(undefined1 *)((int)param_3 + 0x2b);
  _vector_new_ldtc_((int *)(param_1 + 0x31),9,4,1,(undefined*)FUN_0041dcb8);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041eeb0  FUN_0041eeb0   (104 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041eeb0(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467bbc);
  _vector_new_ldtc_(param_1 + 4,4,4,1,(undefined*)FUN_0041db6a);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0x10000;
  param_1[5] = 0x10000;
  param_1[4] = 0x10000;
  param_1[3] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ef18  FUN_0041ef18   (60 bytes)   [unnamed]
undefined4 __cdecl FUN_0041ef18(int *param_1)

{
  undefined4 uVar1;
  
  if ((((*param_1 == 0) || (*(char *)(*param_1 + 8) != '\0')) &&
      ((param_1[1] == 0 || (*(char *)(param_1[1] + 8) != '\0')))) &&
     ((param_1[2] == 0 || (*(char *)(param_1[2] + 8) != '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ef54  FUN_0041ef54   (115 bytes)   [unnamed]
int __cdecl FUN_0041ef54(int *param_1)

{
  int local_8;
  
  local_8 = param_1[7];
  if (*param_1 != 0) {
    local_8 = local_8 + param_1[4] * *(int *)*param_1;
  }
  if (param_1[1] != 0) {
    local_8 = local_8 + param_1[5] * *(int *)param_1[1];
  }
  if (param_1[2] != 0) {
    local_8 = local_8 + param_1[6] * *(int *)param_1[2];
  }
  return local_8 >> 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041efc8  FUN_0041efc8   (22 bytes)   [unnamed]
int __cdecl FUN_0041efc8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041efe0  FUN_0041efe0   (248 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041efe0(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467bc4);
  *param_1 = 0;
  *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xf0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) & 0xf0;
  *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0xb) = 0;
  *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xf0 | 1;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xf0 | 1;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf0 | 5;
  *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) & 0xf0 | 5;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xf0;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(byte *)((int)param_1 + 0x27) = *(byte *)((int)param_1 + 0x27) & 0xf0 | 6;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 0xf0 | 6;
  *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) & 0xf0;
  *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) & 0xf | 0x10;
  param_1[10] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f0d8  FUN_0041f0d8   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f0d8(int *param_1)

{
  undefined4 *streamer;
  int *layoutWindow;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467bf4);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      layoutWindow = (int *)operator_new();
      if (layoutWindow == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TLayoutWindow::TLayoutWindow(layoutWindow,0);
        param_1 = (int *)layoutWindow[2];
      }
    }
    OWL::TLayoutWindow::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f2cc  FUN_0041f2cc   (70 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0041f2cc(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467d15);
  if (DAT_00467d04 == '\0') {
    _DAT_00476c64 = 0;
    DAT_00467d04 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476c64;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f363  DestroyRichEditLoader_41f363   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_41f363(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467d29);
  if (DAT_00467d04 != '\0') {
    OWL::_TLocaleCacheList::_dtor((int *)&DAT_00476c64,2);
    DAT_00467d04 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f3f8  FUN_0041f3f8   (68 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f3f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 *puVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467d50);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar2 = param_1;
  piVar1 = (int *)FUN_0041f2cc();
  FUN_0041f908(piVar1,(int)puVar2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f43c  FUN_0041f43c   (18 bytes)   [unnamed]
int __stdcall FUN_0041f43c(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f450  FUN_0041f450   (92 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041f450(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467d68);
  FUN_0041f3f8(param_1,param_2,param_3);
  param_1[4] = param_4;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x15) = param_5;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f4d0  FUN_0041f4d0   (554 bytes)   [unnamed]
uint * __cdecl FUN_0041f4d0(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  HRSRC hResource;
  undefined4 *puVar5;
  HGLOBAL hResData;
  byte *pbVar6;
  byte *pbVar7;
  HMODULE hModule;
  undefined1 uVar9;
  char *s2;
  uint uVar11;
  char *s1;
  undefined4 *sehChainHead;
  LPCSTR lpType;
  HRSRC hResInfo;
  int local_3c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467dac);
  s2 = param_2 + 1;
  uVar11 = 0;
  for (s1 = param_2; *s1 != '\0'; s1 = s1 + 1) {
    uVar11 = uVar11 * 2 ^ (int)*s1;
  }
  puVar3 = (uint *)*param_1;
  hModule = DAT_00467d44;
  do {
    DAT_00467d44 = hModule;
    if (puVar3 == (uint *)0x0) {
      s1 = param_2;
      if (*param_2 != '#') {
        s1 = param_2 + 1;
      }
      lpType = (LPCSTR)0xc9;
      if (hModule == (HMODULE)0x0) {
        iVar2 = 0;
        puVar5 = (undefined4 *)FUN_0041147c();
        iVar2 = FUN_004116c4(puVar5,iVar2);
        hModule = *(HMODULE *)(iVar2 + 0xc);
      }
      hResource = FindResourceA(hModule,s1,lpType);
      if (hResource == (HRSRC)0x0) {
        puVar5 = (undefined4 *)operator_new();
        if (puVar5 != (undefined4 *)0x0) {
          FUN_0041f3f8(puVar5,param_2,uVar11);
        }
        puVar3 = (uint *)0x0;
        *sehChainHead = sehPrevFrame;
      }
      else {
        hModule = DAT_00467d44;
        hResInfo = hResource;
        if (DAT_00467d44 == (HMODULE)0x0) {
          iVar2 = 0;
          puVar5 = (undefined4 *)FUN_0041147c();
          iVar2 = FUN_004116c4(puVar5,iVar2);
          hModule = *(HMODULE *)(iVar2 + 0xc);
        }
        hResData = LoadResource(hModule,hResInfo);
        if (hResData == (HGLOBAL)0x0) {
          puVar3 = (uint *)0x0;
          *sehChainHead = sehPrevFrame;
        }
        else {
          pbVar6 = LockResource(hResData);
          local_3c = 4;
          if (*pbVar6 == 0) {
            FreeResource(hResData);
            puVar5 = (undefined4 *)operator_new();
            if (puVar5 != (undefined4 *)0x0) {
              FUN_0041f3f8(puVar5,param_2,uVar11);
            }
            puVar3 = (uint *)0x0;
            *sehChainHead = sehPrevFrame;
          }
          else {
            if (*pbVar6 < 0x20) {
              pbVar6 = pbVar6 + 1;
            }
            else {
              pbVar6 = pbVar6 + -1;
            }
            do {
              pbVar7 = pbVar6 + 1;
              pbVar6 = pbVar7;
              do {
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (0x1f < bVar1);
              if (local_3c < (int)pbVar6 - (int)pbVar7) {
                local_3c = (int)pbVar6 - (int)pbVar7;
              }
            } while (bVar1 != 0);
            puVar3 = (uint *)FUN_0041f43c();
            if (puVar3 != (uint *)0x0) {
              FUN_0041f450(puVar3,s2,uVar11,hResource,hResData);
            }
            if (*param_2 == '!') {
              uVar9 = 2;
            }
            else {
              uVar9 = 1;
            }
            *(undefined1 *)(puVar3 + 5) = uVar9;
            *sehChainHead = sehPrevFrame;
          }
        }
      }
      return puVar3;
    }
    if (uVar11 == *puVar3) {
      s1 = (char *)puVar3[1];
      if (*s1 != *s2) {
        s1 = s1 + 1;
      }
      iVar2 = FUN_0041faf8(s1,s2);
      if (iVar2 != 0) {
        if (s1 != (char *)puVar3[1]) {
          puVar3 = (uint *)0x0;
        }
        *sehChainHead = sehPrevFrame;
        return puVar3;
      }
    }
    puVar3 = (uint *)puVar3[2];
    hModule = DAT_00467d44;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f724  FUN_0041f724   (430 bytes)   [unnamed]
int __cdecl FUN_0041f724(int param_1,ushort param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  HMODULE hModule;
  int iVar6;
  HRSRC hResInfo;
  ushort local_e;
  byte *local_c;
  HGLOBAL hGlobal;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    hGlobal = *(HGLOBAL *)(param_1 + 0x15);
    *(ushort *)(param_1 + 0xe) = param_2;
  }
  else {
    if ((*(char *)(param_1 + 0x14) == '\x02') && (iVar6 = FUN_0041fa00(param_2), iVar6 != 0)) {
      return *(int *)(param_1 + 4);
    }
    if (param_2 == *(ushort *)(param_1 + 0xc)) {
      return param_1 + 0x15;
    }
    if (param_2 == *(ushort *)(param_1 + 0xe)) {
      if (*(short *)(param_1 + 0xc) != -1) {
        return param_1 + 0x15;
      }
      if (*(char *)(param_1 + 0x14) == '\x02') {
        return *(int *)(param_1 + 4);
      }
      return 0;
    }
    hResInfo = *(HRSRC *)(param_1 + 0x10);
    hModule = DAT_00467d44;
    if (DAT_00467d44 == (HMODULE)0x0) {
      iVar6 = 0;
      puVar3 = (undefined4 *)FUN_0041147c();
      iVar6 = FUN_004116c4(puVar3,iVar6);
      hModule = *(HMODULE *)(iVar6 + 0xc);
    }
    hGlobal = LoadResource(hModule,hResInfo);
    if (hGlobal == (HGLOBAL)0x0) {
      return *(int *)(param_1 + 4);
    }
  }
  pbVar4 = LockResource(hGlobal);
  local_c = (byte *)0x0;
  local_e = 0xffff;
  while (bVar1 = *pbVar4, uVar5 = local_e, pbVar2 = local_c, bVar1 != 0) {
    if (bVar1 < 0x21) {
      uVar5 = (bVar1 - 1) * 0x400 | (ushort)pbVar4[1];
      pbVar4 = pbVar4 + 2;
    }
    else {
      local_e = DAT_00467e1c;
      uVar5 = DAT_00467e1c;
      local_c = pbVar4;
    }
    pbVar2 = pbVar4;
    if (param_2 == uVar5) break;
    if (((char)uVar5 == (char)param_2) &&
       (((char)local_e != (char)param_2 || (uVar5 == (param_2 & 0xff))))) {
      local_e = uVar5;
      local_c = pbVar4;
    }
    for (; 0x1f < *pbVar4; pbVar4 = pbVar4 + 1) {
    }
  }
  local_c = pbVar2;
  local_e = uVar5;
  if (local_c == (byte *)0x0) {
    if (*(char *)(param_1 + 0x14) == '\x02') {
      iVar6 = *(int *)(param_1 + 4);
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    for (; *local_c < 0x20; local_c = local_c + 2) {
    }
    if (*(ushort *)(param_1 + 0xc) != local_e) {
      pbVar4 = (byte *)(param_1 + 0x15);
      for (; 0x1f < *local_c; local_c = local_c + 1) {
        *pbVar4 = *local_c;
        pbVar4 = pbVar4 + 1;
      }
      *pbVar4 = 0;
      *(ushort *)(param_1 + 0xc) = local_e;
      if (param_2 != *(ushort *)(param_1 + 0xc)) {
        *(ushort *)(param_1 + 0xe) = param_2;
      }
    }
    iVar6 = param_1 + 0x15;
  }
  FreeResource(hGlobal);
  return iVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f908  FUN_0041f908   (18 bytes)   [unnamed]
void __cdecl FUN_0041f908(int *param_1,int param_2)

{
  *(int *)(param_2 + 8) = *param_1;
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041f91c  FUN_0041f91c   (225 bytes)   [unnamed]
int __cdecl FUN_0041f91c(int *param_1,ushort param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  
  if (*param_1 == 0) {
    iVar4 = *param_1;
  }
  else {
    uVar5 = DAT_00467e1c;
    if (((param_2 != 0) && (uVar5 = DAT_00467d34, param_2 != 0x800)) &&
       (uVar5 = param_2, param_2 == 0x400)) {
      uVar5 = DAT_00467d3c;
    }
    cVar1 = *(char *)*param_1;
    if ((byte)(cVar1 - 1U) < 2) {
      iVar4 = FUN_0041f724(*param_1 + -0x14,uVar5);
    }
    else if (cVar1 == '!') {
      iVar4 = FUN_0041fa00(uVar5);
      if (iVar4 == 0) {
        pcVar6 = (char *)*param_1;
        puVar2 = (undefined4 *)FUN_0041f2cc();
        puVar3 = FUN_0041f4d0(puVar2,pcVar6);
        if (puVar3 == (uint *)0x0) {
          *param_1 = *param_1 + 1;
          iVar4 = *param_1;
        }
        else {
          *param_1 = (int)(puVar3 + 5);
          iVar4 = FUN_0041f724((int)puVar3,uVar5);
        }
      }
      else {
        iVar4 = *param_1 + 1;
      }
    }
    else if ((cVar1 == '#') || (cVar1 == '@')) {
      pcVar6 = (char *)*param_1;
      puVar2 = (undefined4 *)FUN_0041f2cc();
      puVar3 = FUN_0041f4d0(puVar2,pcVar6);
      if (puVar3 == (uint *)0x0) {
        *param_1 = 0;
        iVar4 = 0;
      }
      else {
        *param_1 = (int)(puVar3 + 5);
        iVar4 = FUN_0041f724((int)puVar3,uVar5);
      }
    }
    else {
      iVar4 = *param_1;
    }
  }
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fa00  FUN_0041fa00   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_0041fa00(ushort param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == DAT_00467e1c) || (param_1 == (DAT_00467e1c & 0xff))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041faf8  FUN_0041faf8   (99 bytes)   [unnamed]
int __cdecl FUN_0041faf8(char *s1,char *s2)

{
  HMODULE hModule;
  int iVar1;
  char *lpProcName;
  
  if (DAT_00467e00 == '\0') {
    lpProcName = "CompareStringA";
    hModule = GetModuleHandleA("kernel32");
    DAT_00467dfc = GetProcAddress(hModule,lpProcName);
    DAT_00467e00 = DAT_00467e00 + '\x01';
  }
  if (DAT_00467dfc == (FARPROC)0x0) {
    iVar1 = strcmp(s1,s2);
  }
  else {
    iVar1 = (*DAT_00467dfc)();
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fb78  FUN_0041fb78   (75 bytes)   [unnamed]
undefined * __stdcall FUN_0041fb78(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467e35);
  if (DAT_00467e24 == '\0') {
    FUN_0041fd74((undefined4 *)&DAT_00476c68);
    DAT_00467e24 = DAT_00467e24 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476c68;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fbc3  FUN_0041fbc3   (361 bytes)   [unnamed]
void __stdcall FUN_0041fbc3(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467e7c);
  if (DAT_00467e24 != '\0') {
    FUN_004159ac(0x476d7f,0);
    FUN_004159ac(0x476d66,0);
    FUN_004159ac(0x476d4d,0);
    FUN_004159ac(0x476d34,0);
    FUN_004159ac(0x476d1b,0);
    FUN_004159ac(0x476d02,0);
    FUN_004159ac(0x476ce9,0);
    FUN_004159ac(0x476cd0,0);
    FUN_004159ac(0x476cb7,0);
    FUN_004159ac(0x476c9e,0);
    FUN_004159ac(0x476c85,0);
    FUN_004159ac(0x476c6c,0);
    DAT_00467e24 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd2c  FUN_0041fd2c   (69 bytes)   [unnamed]
char * __cdecl FUN_0041fd2c(uint *param_1)

{
  char *pcVar1;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_00467f14;
  }
  strlen(param_1);
  pcVar1 = (char *)operator_new_array();
  pcVar1 = FUN_00455bc0(pcVar1,(char *)param_1);
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041fd74  FUN_0041fd74   (1075 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041fd74(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467f28);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0x60;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0x60;
  *(undefined4 *)((int)param_1 + 0x15) = 0x10;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0xc0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0xc0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0x20;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0x180;
  *(undefined4 *)((int)param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0x43) = 0x180;
  *(undefined4 *)((int)param_1 + 0x47) = 0x40;
  *(undefined4 *)((int)param_1 + 0x4b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x200;
  param_1[0x16] = 0;
  param_1[0x17] = 0x200;
  param_1[0x18] = 0x80;
  param_1[0x19] = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0;
  *(undefined4 *)((int)param_1 + 0x6d) = 0x400;
  *(undefined4 *)((int)param_1 + 0x71) = 0;
  *(undefined4 *)((int)param_1 + 0x75) = 0x400;
  *(undefined4 *)((int)param_1 + 0x79) = 0x100;
  *(undefined4 *)((int)param_1 + 0x7d) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0x800;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0x800;
  *(undefined4 *)((int)param_1 + 0x92) = 0x200;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9b) = 0;
  *(undefined4 *)((int)param_1 + 0x9f) = 0xc00;
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  *(undefined4 *)((int)param_1 + 0xa7) = 0xc00;
  *(undefined4 *)((int)param_1 + 0xab) = 0x400;
  *(undefined4 *)((int)param_1 + 0xaf) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x1800;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x1800;
  param_1[0x31] = 0x800;
  param_1[0x32] = 0;
  *(undefined4 *)((int)param_1 + 0xcd) = 0;
  *(undefined4 *)((int)param_1 + 0xd1) = 0x3000;
  *(undefined4 *)((int)param_1 + 0xd5) = 0;
  *(undefined4 *)((int)param_1 + 0xd9) = 0x3000;
  *(undefined4 *)((int)param_1 + 0xdd) = 0x1000;
  *(undefined4 *)((int)param_1 + 0xe1) = 0;
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  *(undefined4 *)((int)param_1 + 0xea) = 0x4000;
  *(undefined4 *)((int)param_1 + 0xee) = 0;
  *(undefined4 *)((int)param_1 + 0xf2) = 0x4000;
  *(undefined4 *)((int)param_1 + 0xf6) = 0x2000;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  *(undefined4 *)((int)param_1 + 0xff) = 0;
  *(undefined4 *)((int)param_1 + 0x103) = 0x8000;
  *(undefined4 *)((int)param_1 + 0x107) = 0;
  *(undefined4 *)((int)param_1 + 0x10b) = 0x8000;
  *(undefined4 *)((int)param_1 + 0x10f) = 0x4000;
  *(undefined4 *)((int)param_1 + 0x113) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x10000;
  param_1[0x48] = 0;
  param_1[0x49] = 0x10000;
  param_1[0x4a] = 0x8000;
  param_1[0x4b] = param_1;
  param_1[0x4c] = (int)param_1 + 0x19;
  param_1[0x4d] = (int)param_1 + 0x32;
  param_1[0x4e] = (int)param_1 + 0x4b;
  param_1[0x4f] = param_1 + 0x19;
  param_1[0x50] = (int)param_1 + 0x7d;
  param_1[0x51] = (int)param_1 + 0x96;
  param_1[0x52] = (int)param_1 + 0xaf;
  param_1[0x53] = param_1 + 0x32;
  param_1[0x54] = (int)param_1 + 0xe1;
  param_1[0x55] = (int)param_1 + 0xfa;
  param_1[0x56] = (int)param_1 + 0x113;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

} // namespace tea

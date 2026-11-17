// TEACON.exe — runtime / library code "code_0x00428000"
// 81 functions, 0x004280a0..0x00429798. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004280a0  FUN_004280a0   (53 bytes)   [unnamed]
void __cdecl FUN_004280a0(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 in_stack_00000000;
  
  FUN_00427e50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000000);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004280d5  FUN_004280d5   (107 bytes)   [unnamed]
void __cdecl FUN_004280d5(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000000;
  
  piVar2 = (int *)FUN_00401140();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_0041fc8c();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    puVar3 = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0x52);
  }
  FUN_00427e50(*(uint **)(iVar1 + 4),puVar3,*(undefined4 *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20)
               ,*(uint *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0xc),param_1,param_2,
               in_stack_00000000);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428140  FUN_00428140   (63 bytes)   [unnamed]
void __cdecl FUN_00428140(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  EXCEPTION_RECORD local_54;
  
  if (param_2 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    param_2 = &local_54;
    local_54.NumberParameters = 0;
  }
  param_2->ExceptionFlags = param_2->ExceptionFlags | 2;
  FUN_0041ff82(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042817f  FUN_0042817f   (101 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_0042817f(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x433a2c);
  if (param_3 == (undefined *)0x0) {
    FUN_00426830("dtorAddr","xx.cpp",0x5b9);
  }
  FUN_00427d02(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004281f4  FUN_004281f4   (136 bytes)   [unnamed]
void __cdecl FUN_004281f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00435104;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_0042817f(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_00435104 = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_00426830("argType","xx.cpp",0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_0042817f(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042827c  FUN_0042827c   (234 bytes)   [unnamed]
/* WARNING: Unable to track spacebase fully for stack */
void __stdcall FUN_0042827c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_00401140();
  if (*piVar4 == 0) {
    FUN_00426830("__CPPexceptionList","xx.cpp",0x629);
  }
  piVar4 = (int *)FUN_00401140();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_00401140();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_00426830(&DAT_00433bec,"xx.cpp",0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_00426830("xdrPtr->xdERRaddr == xl","xx.cpp",0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_004281f4((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_00435108 == 2) {
    FUN_00427ce5(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042836d  FUN_0042836d   (724 bytes)   [unnamed]
void __cdecl FUN_0042836d(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  int *local_c;
  uint local_8;
  
  if (*(int *)(param_3 + 0x28) != param_2) {
    FUN_00426830("dscPtr->xdERRaddr == errPtr","xx.cpp",0x722);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_00426830("dscPtr->xdHtabAdr == hdtPtr","xx.cpp",0x723);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_00426830("dscPtr->xdArgCopy == 0","xx.cpp",0x725);
  }
  puVar6 = *(uint **)(param_1 + 4);
  *(uint **)(param_3 + 0x3c) = puVar6;
  if ((puVar6 != (uint *)0x0) && ((*(byte *)(param_1 + 8) & 0x80) == 0)) {
    bVar7 = (*(byte *)(param_1 + 8) & 1) == 0;
    local_c = (int *)(param_3 + 0x52);
    *(undefined1 *)(param_3 + 0x45) = 1;
    *(int *)(param_3 + 0x40) = *param_4 + param_5;
    uVar1 = (ushort)puVar6[1];
    uVar3 = *puVar6;
    uVar2 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      puVar6 = (uint *)puVar6[2];
      uVar2 = (ushort)puVar6[1];
    }
    local_8 = (uint)uVar2;
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      if (((uVar2 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar3 != *(uint *)(param_3 + 0x10)) {
              FUN_00426830("dscPtr->xdSize == size","xx.cpp",0x7f8);
            }
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            memcpy(*(undefined4 **)(param_3 + 0x40),(undefined4*)&local_c,uVar3);
            bVar7 = true;
          }
        }
        else {
          if (*(int *)(param_3 + 4) != *(int *)(param_3 + 0x14)) {
            FUN_00426830("dscPtr->xdTypeID == dscPtr->xdBase","xx.cpp",0x7b6);
          }
          iVar5 = FUN_0041f958(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar5 == 0) {
            local_c = (int *)FUN_0041fb44((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar5 == 0 || bVar7;
          if ((puVar6[3] & 1) == 0) {
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_00426830("hdtPtr->HDcctrAddr","xx.cpp",2000);
            }
            FUN_00427bbf(*(undefined4 *)(param_3 + 0x40),local_c,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_00426830("mask & TM_IS_PTR","xx.cpp",0x795);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_00426830("dscPtr->xdMask & TM_IS_PTR","xx.cpp",0x796);
          }
          local_c = (int *)*local_c;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_00426830("(dscPtr->xdMask & TM_IS_PTR) == 0","xx.cpp",0x782);
          }
          bVar7 = true;
        }
        iVar5 = FUN_0041f958(*(int **)(param_3 + 0x14),(int *)puVar6);
        piVar4 = local_c;
        if (iVar5 == 0) {
          local_c = (int *)FUN_0041fb44((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          if (local_c != piVar4) {
            bVar7 = true;
          }
        }
        memcpy(*(undefined4 **)(param_3 + 0x40),(undefined4*)&local_c,uVar3);
      }
    }
    else {
      memset(*(undefined4 **)(param_3 + 0x40),0,uVar3);
      bVar7 = true;
    }
    if ((!bVar7) && ((local_8 & 3) != 0)) {
      if ((puVar6[3] & 2) != 0) {
        FUN_0042817f(local_c,(int)puVar6,(undefined *)puVar6[10],(uint)(ushort)puVar6[0xb]);
      }
      *(undefined1 *)(param_3 + 0x44) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428641  FUN_00428641   (358 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00428641(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = &GHIDRA_STACK(0xfffffffc);
  uVar6 = (uint)*(ushort *)(param_1 + 0x10);
  while ((uVar4 = uVar6, uVar4 != 0 && (uVar4 != *(uint *)(puVar5 + 0xc)))) {
    uVar6 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    uVar3 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4 + 2);
    *(ushort *)(*(int *)(puVar5 + 8) + 0x10) = *(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    if (uVar3 == 0) {
      _DAT_0043510c = *(undefined4 *)(*(int *)(puVar5 + -4) + 4 + uVar4 + 4);
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 1;
      FUN_0041ff97();
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 0;
    }
    else if (2 < uVar3 - 1) {
      if (uVar3 == 4) {
        uVar2 = FUN_00401140();
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        while ((puVar1 = (undefined4 *)**(int **)(puVar5 + -0x10), puVar1 != (undefined4 *)0x0 &&
               ((puVar1[10] != *(int *)(puVar5 + 8) || (uVar4 != puVar1[0xc]))))) {
          *(undefined4 **)(puVar5 + -0x10) = puVar1;
        }
        if ((puVar1 == (undefined4 *)0x0) || (puVar1 != (undefined4 *)**(int **)(puVar5 + -0x10))) {
          FUN_00426830("xdrPtr && xdrPtr == *xdrLPP","xx.cpp",0x8ba);
        }
        **(undefined4 **)(puVar5 + -0x10) = *puVar1;
        FUN_004281f4((int)puVar1);
        (*(code *)puVar1[7])();
      }
      else if (uVar3 - 1 == 4) {
        uVar2 = FUN_0042911a(*(int **)(*(int *)(puVar5 + -4) + uVar4 + 8),
                             *(int *)(*(int *)(puVar5 + -4) + uVar4 + 4) + *(int *)(puVar5 + -0xc),
                             *(int *)(puVar5 + 8),*(int *)(puVar5 + -8));
        *(undefined4 *)(puVar5 + -0xc) = uVar2;
      }
      else {
        FUN_00426830("!\"bogus context in Local_unwind()\"","xx.cpp",0x8e9);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004287ac  FUN_004287ac   (19 bytes)   [unnamed]
void __cdecl FUN_004287ac(int param_1)

{
  FUN_00428641(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004287bf  FUN_004287bf   (28 bytes)   [unnamed]
void __cdecl FUN_004287bf(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_00428641((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004287db  FUN_004287db   (69 bytes)   [unnamed]
int * __cdecl FUN_004287db(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_00427af9(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428820  FUN_00428820   (837 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00428820(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined2 in_FS;
  
  puVar8 = &GHIDRA_STACK(0xfffffffc);
  iVar9 = param_1[7];
  piVar6 = (int *)param_2[2];
  if (*param_1 == 0xeedfae6) {
    uVar1 = 0;
  }
  else {
    FUN_00424c5c();
    if ((*(byte *)(param_1 + 1) & 6) == 0) {
      uVar7 = (uint)*(ushort *)(param_2 + 4);
      while (uVar7 != 0) {
        *(uint *)(puVar8 + -8) = (uint)*(ushort *)((int)piVar6 + uVar7);
        *(uint *)(puVar8 + -0x14) = (uint)*(ushort *)((int)piVar6 + uVar7 + 2);
        iVar9 = uVar7 + 4;
        switch(*(undefined4 *)(puVar8 + -0x14)) {
        case 0:
        case 4:
        case 5:
          break;
        case 1:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(puVar8 + -0x28) = *(undefined4 *)(puVar8 + 8);
            *(undefined4 *)(puVar8 + -0x24) = *(undefined4 *)(puVar8 + 0x10);
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            *(undefined1 **)(*(int *)(puVar8 + 0xc) + 0x18) = puVar8 + -0x28;
            _DAT_00435110 = *(undefined4 *)((int)piVar6 + iVar9);
            iVar2 = FUN_0041ff97();
LAB_00428b0b:
            if (iVar2 < 0) {
              if ((*(byte *)(*(int *)(puVar8 + 8) + 4) & 1) != 0) {
                *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -8);
              }
              return 0;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x18) = 0;
              *(undefined4 *)(puVar8 + -0x20) = *(undefined4 *)(puVar8 + -8);
              UNRECOVERED_JUMPTABLE = *(undefined **)((int)piVar6 + iVar9 + 4);
LAB_004289de:
              FUN_00428140(*(PVOID *)(puVar8 + 0xc),*(PEXCEPTION_RECORD *)(puVar8 + 8));
              FUN_00428641(*(int *)(puVar8 + 0xc));
              *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -0x20);
              if (*(int *)(puVar8 + -0x14) == 3) {
                FUN_0042836d(*(int *)(puVar8 + -0x18),*(int *)(puVar8 + 0xc),*(int *)(puVar8 + -4),
                             *(int **)(puVar8 + -0x1c),*(int *)(puVar8 + -0xc));
              }
              iVar9 = FUN_00401140();
              *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffd;
              if ((*DAT_00435108 == 2) && (*(int *)(puVar8 + -0x14) == 3)) {
                pcVar5 = FUN_0041f920(*(int *)(*(int *)(puVar8 + -4) + 4));
                FUN_00427ccd(pcVar5);
                FUN_00427ce5(3,5);
              }
              FUN_00427a7b(UNRECOVERED_JUMPTABLE);
            }
          }
          break;
        case 2:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            iVar2 = *(int *)((int)piVar6 + iVar9);
            goto LAB_00428b0b;
          }
          break;
        case 3:
          if (**(int **)(puVar8 + 8) == 0xeefface) {
            *(undefined4 *)(puVar8 + -0x1c) = *(undefined4 *)((int)piVar6 + iVar9);
            piVar3 = FUN_004287db(*(int *)(puVar8 + -0x1c),*(int *)(puVar8 + -4));
            *(int **)(puVar8 + -0x18) = piVar3;
            if (*(int *)(puVar8 + -0x18) != 0) {
              if (((*DAT_00435108 == 1) || (*DAT_00435108 == 2)) &&
                 ((**(uint **)(puVar8 + 8) < 0xeedface || (0xeefface < **(uint **)(puVar8 + 8))))) {
                FUN_00427ce5(2,3);
              }
              puVar4 = (undefined4 *)FUN_00401140();
              **(undefined4 **)(puVar8 + -4) = *puVar4;
              puVar4 = (undefined4 *)FUN_00401140();
              *puVar4 = *(undefined4 *)(puVar8 + -4);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x28) = *(undefined4 *)(puVar8 + 0xc);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x2c) = *(undefined4 *)(puVar8 + -0x18);
              *(uint *)(*(int *)(puVar8 + -4) + 0x30) = uVar7 + 8;
              *(uint *)(puVar8 + -0x20) = uVar7 + 8;
              UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(puVar8 + -0x18);
              goto LAB_004289de;
            }
          }
          break;
        default:
          FUN_00426830("!\"bogus context in _ExceptionHandler()\"","xx.cpp",0xc00);
        }
        uVar7 = *(uint *)(puVar8 + -8);
      }
      uVar1 = 1;
    }
    else {
      FUN_00428641((int)param_2);
      if ((*param_1 == 0xeefface) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)) {
        for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
          iVar2 = FUN_00427af9(*(int **)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),(int *)*piVar6,
                               (byte)*(undefined4 *)(iVar9 + 0xc));
          if (iVar2 != 0) goto LAB_004288d0;
        }
        puVar4 = (undefined4 *)segment(in_FS,0);
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = *param_2;
        FUN_0041fd00();
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = uVar1;
      }
LAB_004288d0:
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428b7d  FUN_00428b7d   (215 bytes, 3 ranges)   [unnamed]
void __cdecl FUN_00428b7d(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x433a80);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_00426830("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_00426830("varType->tpClass.tpcDtorAddr","xx.cpp",0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_00426830("(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags","xx.cpp",0xc28);
  }
  if ((param_3 & 2) == 0) {
    if (param_4 == 0) {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar2;
  }
  FUN_00427d02(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428c74  FUN_00428c74   (75 bytes)   [unnamed]
void __cdecl FUN_00428c74(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  while (piVar2 = param_3 + -3, param_4 <= piVar2) {
    puVar1 = (undefined4 *)(param_3[-2] + param_1);
    if (in_stack_00000018 != 0) {
      puVar1 = (undefined4 *)*puVar1;
    }
    param_3 = piVar2;
    if ((*(byte *)(*piVar2 + 0xc) & 2) != 0) {
      FUN_00428cbf((int)puVar1,*piVar2,param_2,in_stack_00000014,0,in_stack_0000001c,
                   in_stack_00000020);
      in_stack_00000014 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428cbf  FUN_00428cbf   (688 bytes)   [unnamed]
void __cdecl FUN_00428cbf(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_00426830("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_00428b7d(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_00426830("dtorCnt < varCount","xx.cpp",0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_00426830("IS_STRUC(blType->tpMask)","xx.cpp",0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_00428c74(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_00426830("IS_STRUC(blType->tpMask)","xx.cpp",0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_00428c74(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_00428c74(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar2 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        FUN_00426830("memType","xx.cpp",0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_00426830("memType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xd73);
      }
      local_1c = local_1c * *(int *)(iVar2 + 0x20);
      if (param_4 <= local_1c) break;
      param_4 = param_4 - local_1c;
      piVar6 = piVar6 + 2;
    }
    do {
      iVar2 = *piVar6;
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (local_1c < 2) {
        FUN_00428cbf(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_00428f6f(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_00428c74(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_00428c74(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428f6f  FUN_00428f6f   (292 bytes)   [unnamed]
void __cdecl FUN_00428f6f(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_00426830("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_00426830("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_00426830("vdtCount","xx.cpp",0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_00426830("etdCount <= elemCount || elemCount == 0","xx.cpp",0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_00426830("dtrCount <= vdtCount","xx.cpp",0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_00428cbf(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_00428cbf(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429093  FUN_00429093   (135 bytes)   [unnamed]
int __cdecl FUN_00429093(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_00426830("IS_CLASS(varType->tpMask)","xx.cpp",0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_00426830("((unsigned __far *)vftAddr)[-1] == 0","xx.cpp",0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042911a  FUN_0042911a   (1156 bytes)   [unnamed]
undefined4 __cdecl FUN_0042911a(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_8 = *(int *)(param_3 + 0x1c) - param_2;
    if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 1) & 0x11) == 0) {
        FUN_00426830("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)","xx.cpp",0xe78);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_00426830("dttPtr->dttType->tpMask & TM_IS_PTR","xx.cpp",0xe7c);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_00426830("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xe7d);
      }
      local_8 = *(uint *)(*(int *)(*param_1 + 8) + 0x20);
    }
    if ((*(byte *)((int)param_1 + 5) & 1) == 0) {
      piVar5 = param_1;
      if (((int)local_8 < 1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
        if ((param_1[1] & 3U) != 3) {
          return 0;
        }
        local_c = local_c + 1;
      }
      else {
        for (; *piVar5 != 0; piVar5 = piVar5 + 3) {
          if ((*(byte *)((int)piVar5 + 5) & 0x10) == 0) {
            local_10 = *piVar5;
          }
          else {
            if ((*(byte *)(*piVar5 + 5) & 4) == 0) {
              FUN_00426830("dtvtPtr->dttType->tpMask & TM_IS_ARRAY","xx.cpp",0xed7);
            }
            local_10 = *(int *)(*piVar5 + 8);
          }
          iVar8 = 1;
          if (((((*(byte *)(local_10 + 4) & 0x10) != 0) &&
               (local_10 = *(int *)(local_10 + 8), (*(byte *)(local_10 + 4) & 2) != 0)) &&
              ((*(byte *)(local_10 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar5 + 1) & 8) != 0)) {
            iVar6 = 0;
            if ((*(byte *)(local_10 + 0xc) & 2) == 0) {
              FUN_00426830("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xef7);
            }
            if ((*(byte *)(piVar5 + 1) & 4) == 0) {
              local_14 = (int *)piVar5[2];
            }
            else {
              local_14 = (int *)(param_4 + piVar5[2]);
            }
            iVar1 = *local_14;
            if ((*(byte *)((int)piVar5 + 5) & 0x10) != 0) {
              iVar6 = local_14[1];
            }
            local_14 = (int *)iVar1;
            if ((*(byte *)(piVar5 + 1) & 0x40) != 0) {
              local_14 = (int *)(iVar1 + 4);
            }
            local_14 = (int *)FUN_00429093((int)local_14,&local_10,iVar6);
          }
          iVar6 = local_10;
          if ((*(byte *)(local_10 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_10 + 0xc);
            iVar6 = *(int *)(local_10 + 8);
          }
          if ((*(byte *)(iVar6 + 0xc) & 2) == 0) {
            FUN_00426830("elemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xf22);
          }
          uVar7 = iVar8 * *(int *)(iVar6 + 0x20);
          if (local_8 <= uVar7) goto LAB_00429355;
          local_8 = local_8 - uVar7;
        }
        piVar5 = piVar5 + -3;
      }
LAB_00429355:
      do {
        local_18 = *piVar5;
        uVar7 = piVar5[1];
        if ((uVar7 & 4) == 0) {
          local_1c = (int *)piVar5[2];
        }
        else {
          local_1c = (int *)(param_4 + piVar5[2]);
        }
        if ((uVar7 & 0x1000) != 0) {
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00426830("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xf52);
          }
          local_18 = *(int *)(local_18 + 8);
        }
        if ((uVar7 & 0x11) != 0) {
          iVar8 = 0;
          if ((*(byte *)(local_18 + 4) & 0x10) == 0) {
            FUN_00426830("varType->tpMask & TM_IS_PTR","xx.cpp",0xf5c);
          }
          local_18 = *(int *)(local_18 + 8);
          local_20 = (int *)*local_1c;
          if ((uVar7 & 0x1000) != 0) {
            iVar8 = local_1c[1];
          }
          local_1c = local_20;
          if ((uVar7 & 0x48) == 0x40) {
            local_1c = local_20 + 1;
          }
          if ((((*(byte *)(local_18 + 4) & 2) != 0) && ((*(byte *)(local_18 + 0xc) & 0x20) != 0)) &&
             ((uVar7 & 8) != 0)) {
            local_20 = (int *)FUN_00429093((int)local_1c,&local_18,iVar8);
            local_1c = local_20;
          }
        }
        if (local_c == 0) {
          if ((uVar7 & 0x400) == 0) {
            uVar4 = 0;
          }
          else {
            if (*(short *)(local_18 + 0x10) == 0) {
              uVar4 = 0;
            }
            else {
              piVar9 = (int *)((uint)*(ushort *)(local_18 + 0x10) + local_18);
              if (piVar9 == (int *)0x0) {
                FUN_00426830(&DAT_0043424d,"xx.cpp",0xf92);
              }
              uVar4 = *(uint *)(*piVar9 + 0x20);
            }
            if (local_8 < uVar4) {
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
            }
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00428cbf((int)local_1c,local_18,uVar4,local_8,1,param_4,param_3);
          }
          else {
            FUN_00428f6f((int)local_1c,local_18,local_8,param_4,param_3);
          }
          if ((((uVar7 & 0x400) != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
             (*(char *)(param_3 + 0x20) != -1)) {
            (**(code **)(*local_1c + -8))(local_1c);
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((uVar7 & 0x48) == 0x48) {
            local_20 = local_20 + -1;
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            if (*(int *)(local_18 + 0x14) == 0) {
              operator_delete();
            }
            else {
              FUN_00427dd2(local_20,*(undefined **)(local_18 + 0x14),
                           (uint)*(ushort *)(local_18 + 0x18));
            }
          }
          else {
            local_18 = *(int *)(local_18 + 8);
            if (*(int *)(local_18 + 0x1c) == 0) {
              operator_delete_array();
            }
            else {
              FUN_00427dd2(local_20,*(undefined **)(local_18 + 0x1c),
                           (uint)*(ushort *)(local_18 + 0x1a));
            }
          }
        }
        local_8 = 0;
        bVar2 = param_1 < piVar5;
        piVar5 = piVar5 + -3;
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      if (((*(byte *)(*param_1 + 4) & 2) == 0) || ((*(byte *)(*param_1 + 0xc) & 2) == 0)) {
        FUN_00426830("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)","xx.cpp",0xe8b);
      }
      uVar3 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042959e  FUN_0042959e   (84 bytes)   [unnamed]
uint __cdecl FUN_0042959e(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  if (**(short **)(param_1 + 4) == 0x25ff) {
    iVar1 = **(int **)(*(int *)(param_1 + 4) + 2);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
  }
  iVar1 = FUN_0041f0ac((byte *)(iVar1 + -8),(byte *)"**BCCxh1",8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x004295f4  ADVAPI32.DLL::RegCloseKey   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCloseKey
LSTATUS __stdcall import_RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004295f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004295fa  ADVAPI32.DLL::RegCreateKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCreateKeyExA
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004295fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCreateKeyExA(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429600  ADVAPI32.DLL::RegOpenKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegOpenKeyExA
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429606  ADVAPI32.DLL::RegQueryValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryValueExA
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042960c  KERNEL32.DLL::CloseHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CloseHandle
BOOL __stdcall import_CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042960c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429612  KERNEL32.DLL::CreateFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileA
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429618  KERNEL32.DLL::DeleteFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::DeleteFileA
BOOL __stdcall import_DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429624  KERNEL32.DLL::ExitProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExitProcess
void __stdcall import_ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00429624. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042962a  KERNEL32.DLL::FileTimeToLocalFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FileTimeToLocalFileTime
BOOL __stdcall import_FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042962a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429630  KERNEL32.DLL::FileTimeToSystemTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FileTimeToSystemTime
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429636  KERNEL32.DLL::FindClose   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindClose
BOOL __stdcall import_FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042963c  KERNEL32.DLL::FindFirstFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindFirstFileA
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042963c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429642  KERNEL32.DLL::GetACP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetACP
UINT __stdcall import_GetACP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetACP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429648  KERNEL32.DLL::GetCPInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCPInfo
BOOL __stdcall import_GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042964e  KERNEL32.DLL::GetCommandLineA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCommandLineA
LPSTR __stdcall import_GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042964e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429654  KERNEL32.DLL::GetCurrentThreadId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentThreadId
DWORD __stdcall import_GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042965a  KERNEL32.DLL::GetDateFormatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetDateFormatA
int __stdcall import_GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr, int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042965a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429660  KERNEL32.DLL::GetEnvironmentStrings   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetEnvironmentStrings
LPCH __stdcall import_GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429666  KERNEL32.DLL::GetFileAttributesA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesA
DWORD __stdcall import_GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042966c  KERNEL32.DLL::GetFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileTime
BOOL __stdcall import_GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429672  KERNEL32.DLL::GetFileType   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileType
DWORD __stdcall import_GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429678  KERNEL32.DLL::GetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLastError
DWORD __stdcall import_GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042967e  KERNEL32.DLL::GetLocalTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocalTime
void __stdcall import_GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x0042967e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429684  KERNEL32.DLL::GetLocaleInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocaleInfoA
int __stdcall import_GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042968a  KERNEL32.DLL::GetModuleFileNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleFileNameA
DWORD __stdcall import_GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042968a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429690  KERNEL32.DLL::GetModuleHandleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleHandleA
HMODULE __stdcall import_GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429696  KERNEL32.DLL::GetOEMCP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetOEMCP
UINT __stdcall import_GetOEMCP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetOEMCP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042969c  KERNEL32.DLL::GetPrivateProfileStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetPrivateProfileStringA
DWORD __stdcall import_GetPrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize, LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042969c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296a2  KERNEL32.DLL::GetProcAddress   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetProcAddress
FARPROC __stdcall import_GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296ae  KERNEL32.DLL::GetStartupInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStartupInfoA
void __stdcall import_GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004296ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296b4  KERNEL32.DLL::GetStdHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStdHandle
HANDLE __stdcall import_GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296ba  KERNEL32.DLL::GetStringTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeA
BOOL __stdcall import_GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296c0  KERNEL32.DLL::GetStringTypeW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeW
BOOL __stdcall import_GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296c6  KERNEL32.DLL::GetSystemDefaultLangID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetSystemDefaultLangID
LANGID __stdcall import_GetSystemDefaultLangID(void)

{
  LANGID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetSystemDefaultLangID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296cc  KERNEL32.DLL::GetTimeFormatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTimeFormatA
int __stdcall import_GetTimeFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpTime,LPCSTR lpFormat,LPSTR lpTimeStr, int cchTime)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTimeFormatA(Locale,dwFlags,lpTime,lpFormat,lpTimeStr,cchTime);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296d2  KERNEL32.DLL::GetUserDefaultLCID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetUserDefaultLCID
LCID __stdcall import_GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296d8  KERNEL32.DLL::GetVersion   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersion
DWORD __stdcall import_GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296e4  KERNEL32.DLL::GlobalMemoryStatus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalMemoryStatus
void __stdcall import_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    /* WARNING: Could not recover jumptable at 0x004296e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GlobalMemoryStatus(lpBuffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296f6  KERNEL32.DLL::IsValidLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsValidLocale
BOOL __stdcall import_IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004296fc  KERNEL32.DLL::LCMapStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LCMapStringA
int __stdcall import_LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004296fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042970e  KERNEL32.DLL::MultiByteToWideChar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MultiByteToWideChar
int __stdcall import_MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte, LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042970e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429714  KERNEL32.DLL::RaiseException   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RaiseException
void __stdcall import_RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments, ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x00429714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042971a  KERNEL32.DLL::ReadFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ReadFile
BOOL __stdcall import_ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042971a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429720  KERNEL32.DLL::RtlUnwind   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RtlUnwind
void __stdcall import_RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00429720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429726  KERNEL32.DLL::SetConsoleCtrlHandler   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetConsoleCtrlHandler
BOOL __stdcall import_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042972c  KERNEL32.DLL::SetFilePointer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetFilePointer
DWORD __stdcall import_SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042972c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429732  KERNEL32.DLL::SetHandleCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetHandleCount
UINT __stdcall import_SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429738  KERNEL32.DLL::SetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetLastError
void __stdcall import_SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x00429738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042973e  KERNEL32.DLL::SetThreadLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetThreadLocale
BOOL __stdcall import_SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042973e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042974a  KERNEL32.DLL::TlsFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsFree
BOOL __stdcall import_TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042974a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429750  KERNEL32.DLL::TlsGetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsGetValue
LPVOID __stdcall import_TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429756  KERNEL32.DLL::TlsSetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsSetValue
BOOL __stdcall import_TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042975c  KERNEL32.DLL::UnhandledExceptionFilter   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnhandledExceptionFilter
LONG __stdcall import_UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042975c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429762  KERNEL32.DLL::VirtualAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualAlloc
LPVOID __stdcall import_VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429768  KERNEL32.DLL::VirtualFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualFree
BOOL __stdcall import_VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042976e  KERNEL32.DLL::WideCharToMultiByte   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WideCharToMultiByte
int __stdcall import_WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar, LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042976e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429774  KERNEL32.DLL::WriteFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WriteFile
BOOL __stdcall import_WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042977c  COMDLG32.DLL::GetFileTitleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to COMDLG32.DLL::GetFileTitleA
short __stdcall import_GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = GetFileTitleA(param_1,Buf,cchSize);
  return sVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429784  SHFOLDER.DLL::SHGetFolderPathA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHFOLDER.DLL::SHGetFolderPathA
int __stdcall import_SHGetFolderPathA(...)

{
  /* jump through the import table to SHFOLDER.DLL::SHGetFolderPathA; Ghidra has no prototype for it,
     so its arguments and result are not recovered here or at its call sites */
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042978c  USER32.DLL::EnumThreadWindows   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnumThreadWindows
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042978c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429792  USER32.DLL::MessageBoxA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxA
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429798  USER32.DLL::wsprintfA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::wsprintfA
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wsprintfA(param_1,param_2);
  return iVar1;
}

} // namespace tea

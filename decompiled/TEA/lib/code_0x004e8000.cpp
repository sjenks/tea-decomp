// TEA.exe — runtime / library code "code_0x004e8000"
// 360 functions, 0x004e8265..0x004e9a60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004e8265  FUN_004e8265   (358 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004e8265(int param_1)

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
      _DAT_0051c47c = *(undefined4 *)(*(int *)(puVar5 + -4) + 4 + uVar4 + 4);
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 1;
      FUN_004ddd4b();
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 0;
    }
    else if (2 < uVar3 - 1) {
      if (uVar3 == 4) {
        uVar2 = __getTlsBlock();
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        while ((puVar1 = (undefined4 *)**(int **)(puVar5 + -0x10), puVar1 != (undefined4 *)0x0 &&
               ((puVar1[10] != *(int *)(puVar5 + 8) || (uVar4 != puVar1[0xc]))))) {
          *(undefined4 **)(puVar5 + -0x10) = puVar1;
        }
        if ((puVar1 == (undefined4 *)0x0) || (puVar1 != (undefined4 *)**(int **)(puVar5 + -0x10))) {
          FUN_004e5ce8("xdrPtr && xdrPtr == *xdrLPP","xx.cpp",0x8ba);
        }
        **(undefined4 **)(puVar5 + -0x10) = *puVar1;
        FUN_004e7e18((int)puVar1);
        (*(code *)puVar1[7])();
      }
      else if (uVar3 - 1 == 4) {
        uVar2 = FUN_004e8d3e(*(int **)(*(int *)(puVar5 + -4) + uVar4 + 8),
                             *(int *)(*(int *)(puVar5 + -4) + uVar4 + 4) + *(int *)(puVar5 + -0xc),
                             *(int *)(puVar5 + 8),*(int *)(puVar5 + -8));
        *(undefined4 *)(puVar5 + -0xc) = uVar2;
      }
      else {
        FUN_004e5ce8("!\"bogus context in Local_unwind()\"","xx.cpp",0x8e9);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e83d0  FUN_004e83d0   (19 bytes)   [unnamed]
void __cdecl FUN_004e83d0(int param_1)

{
  FUN_004e8265(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e83e3  FUN_004e83e3   (28 bytes)   [unnamed]
void __cdecl FUN_004e83e3(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_004e8265((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e83ff  FUN_004e83ff   (69 bytes)   [unnamed]
int * __cdecl FUN_004e83ff(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_004e771d(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e8444  FUN_004e8444   (837 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_004e8444(int *param_1,undefined4 *param_2)

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
    FUN_004e3bec();
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
            _DAT_0051c480 = *(undefined4 *)((int)piVar6 + iVar9);
            iVar2 = FUN_004ddd4b();
LAB_004e872f:
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
LAB_004e8602:
              FUN_004e7d64(*(PVOID *)(puVar8 + 0xc),*(PEXCEPTION_RECORD *)(puVar8 + 8));
              FUN_004e8265(*(int *)(puVar8 + 0xc));
              *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -0x20);
              if (*(int *)(puVar8 + -0x14) == 3) {
                FUN_004e7f91(*(int *)(puVar8 + -0x18),*(int *)(puVar8 + 0xc),*(int *)(puVar8 + -4),
                             *(int **)(puVar8 + -0x1c),*(int *)(puVar8 + -0xc));
              }
              iVar9 = __getTlsBlock();
              *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffd;
              if ((*DAT_0051c478 == 2) && (*(int *)(puVar8 + -0x14) == 3)) {
                pcVar5 = FUN_004dd388(*(int *)(*(int *)(puVar8 + -4) + 4));
                FUN_004e78f1(pcVar5);
                FUN_004e7909(3,5);
              }
              FUN_004e769f(UNRECOVERED_JUMPTABLE);
            }
          }
          break;
        case 2:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            iVar2 = *(int *)((int)piVar6 + iVar9);
            goto LAB_004e872f;
          }
          break;
        case 3:
          if (**(int **)(puVar8 + 8) == 0xeefface) {
            *(undefined4 *)(puVar8 + -0x1c) = *(undefined4 *)((int)piVar6 + iVar9);
            piVar3 = FUN_004e83ff(*(int *)(puVar8 + -0x1c),*(int *)(puVar8 + -4));
            *(int **)(puVar8 + -0x18) = piVar3;
            if (*(int *)(puVar8 + -0x18) != 0) {
              if (((*DAT_0051c478 == 1) || (*DAT_0051c478 == 2)) &&
                 ((**(uint **)(puVar8 + 8) < 0xeedface || (0xeefface < **(uint **)(puVar8 + 8))))) {
                FUN_004e7909(2,3);
              }
              puVar4 = (undefined4 *)__getTlsBlock();
              **(undefined4 **)(puVar8 + -4) = *puVar4;
              puVar4 = (undefined4 *)__getTlsBlock();
              *puVar4 = *(undefined4 *)(puVar8 + -4);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x28) = *(undefined4 *)(puVar8 + 0xc);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x2c) = *(undefined4 *)(puVar8 + -0x18);
              *(uint *)(*(int *)(puVar8 + -4) + 0x30) = uVar7 + 8;
              *(uint *)(puVar8 + -0x20) = uVar7 + 8;
              UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(puVar8 + -0x18);
              goto LAB_004e8602;
            }
          }
          break;
        default:
          FUN_004e5ce8("!\"bogus context in _ExceptionHandler()\"","xx.cpp",0xc00);
        }
        uVar7 = *(uint *)(puVar8 + -8);
      }
      uVar1 = 1;
    }
    else {
      FUN_004e8265((int)param_2);
      if ((*param_1 == 0xeefface) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)) {
        for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
          iVar2 = FUN_004e771d(*(int **)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),(int *)*piVar6,
                               (byte)*(undefined4 *)(iVar9 + 0xc));
          if (iVar2 != 0) goto LAB_004e84f4;
        }
        puVar4 = (undefined4 *)segment(in_FS,0);
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = *param_2;
        FUN_004ddab4();
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = uVar1;
      }
LAB_004e84f4:
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e87a1  FUN_004e87a1   (215 bytes, 3 ranges)   [unnamed]
void __cdecl FUN_004e87a1(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x519078);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_004e5ce8("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_004e5ce8("varType->tpClass.tpcDtorAddr","xx.cpp",0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_004e5ce8("(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags","xx.cpp",0xc28);
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
  FUN_004e7926(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e8898  FUN_004e8898   (75 bytes)   [unnamed]
void __cdecl FUN_004e8898(int param_1,uint param_2,int *param_3,int *param_4)

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
      FUN_004e88e3((int)puVar1,*piVar2,param_2,in_stack_00000014,0,in_stack_0000001c,
                   in_stack_00000020);
      in_stack_00000014 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e88e3  FUN_004e88e3   (688 bytes)   [unnamed]
void __cdecl FUN_004e88e3(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7)

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
    FUN_004e5ce8("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_004e87a1(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_004e5ce8("dtorCnt < varCount","xx.cpp",0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_004e5ce8("IS_STRUC(blType->tpMask)","xx.cpp",0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_004e8898(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_004e5ce8("IS_STRUC(blType->tpMask)","xx.cpp",0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_004e8898(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_004e8898(param_1,param_3,local_14,piVar3);
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
        FUN_004e5ce8("memType","xx.cpp",0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_004e5ce8("memType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xd73);
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
        FUN_004e88e3(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_004e8b93(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_004e8898(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_004e8898(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e8b93  FUN_004e8b93   (292 bytes)   [unnamed]
void __cdecl FUN_004e8b93(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_004e5ce8("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_004e5ce8("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_004e5ce8("vdtCount","xx.cpp",0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_004e5ce8("etdCount <= elemCount || elemCount == 0","xx.cpp",0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_004e5ce8("dtrCount <= vdtCount","xx.cpp",0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_004e88e3(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_004e88e3(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e8cb7  FUN_004e8cb7   (135 bytes)   [unnamed]
int __cdecl FUN_004e8cb7(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_004e5ce8("IS_CLASS(varType->tpMask)","xx.cpp",0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_004e5ce8("((unsigned __far *)vftAddr)[-1] == 0","xx.cpp",0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e8d3e  FUN_004e8d3e   (1156 bytes)   [unnamed]
undefined4 __cdecl FUN_004e8d3e(int *param_1,int param_2,int param_3,int param_4)

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
        FUN_004e5ce8("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)","xx.cpp",0xe78);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_004e5ce8("dttPtr->dttType->tpMask & TM_IS_PTR","xx.cpp",0xe7c);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_004e5ce8("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xe7d);
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
              FUN_004e5ce8("dtvtPtr->dttType->tpMask & TM_IS_ARRAY","xx.cpp",0xed7);
            }
            local_10 = *(int *)(*piVar5 + 8);
          }
          iVar8 = 1;
          if (((((*(byte *)(local_10 + 4) & 0x10) != 0) &&
               (local_10 = *(int *)(local_10 + 8), (*(byte *)(local_10 + 4) & 2) != 0)) &&
              ((*(byte *)(local_10 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar5 + 1) & 8) != 0)) {
            iVar6 = 0;
            if ((*(byte *)(local_10 + 0xc) & 2) == 0) {
              FUN_004e5ce8("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xef7);
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
            local_14 = (int *)FUN_004e8cb7((int)local_14,&local_10,iVar6);
          }
          iVar6 = local_10;
          if ((*(byte *)(local_10 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_10 + 0xc);
            iVar6 = *(int *)(local_10 + 8);
          }
          if ((*(byte *)(iVar6 + 0xc) & 2) == 0) {
            FUN_004e5ce8("elemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xf22);
          }
          uVar7 = iVar8 * *(int *)(iVar6 + 0x20);
          if (local_8 <= uVar7) goto LAB_004e8f79;
          local_8 = local_8 - uVar7;
        }
        piVar5 = piVar5 + -3;
      }
LAB_004e8f79:
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
            FUN_004e5ce8("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xf52);
          }
          local_18 = *(int *)(local_18 + 8);
        }
        if ((uVar7 & 0x11) != 0) {
          iVar8 = 0;
          if ((*(byte *)(local_18 + 4) & 0x10) == 0) {
            FUN_004e5ce8("varType->tpMask & TM_IS_PTR","xx.cpp",0xf5c);
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
            local_20 = (int *)FUN_004e8cb7((int)local_1c,&local_18,iVar8);
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
                FUN_004e5ce8(&DAT_00519845,"xx.cpp",0xf92);
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
            FUN_004e88e3((int)local_1c,local_18,uVar4,local_8,1,param_4,param_3);
          }
          else {
            FUN_004e8b93((int)local_1c,local_18,local_8,param_4,param_3);
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
              FUN_004e79f6(local_20,*(undefined **)(local_18 + 0x14),
                           (uint)*(ushort *)(local_18 + 0x18));
            }
          }
          else {
            local_18 = *(int *)(local_18 + 8);
            if (*(int *)(local_18 + 0x1c) == 0) {
              operator_delete_array();
            }
            else {
              FUN_004e79f6(local_20,*(undefined **)(local_18 + 0x1c),
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
        FUN_004e5ce8("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)","xx.cpp",0xe8b);
      }
      uVar3 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e91c2  FUN_004e91c2   (84 bytes)   [unnamed]
uint __cdecl FUN_004e91c2(int param_1)

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
  iVar1 = FUN_004dcb2c((byte *)(iVar1 + -8),(byte *)"**BCCxh1",8);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9218  ADVAPI32.DLL::RegCloseKey   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCloseKey
LSTATUS __stdcall import_RegCloseKey(HKEY hKey)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004e9218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegCloseKey(hKey);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e921e  ADVAPI32.DLL::RegCreateKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegCreateKeyExA
LSTATUS __stdcall import_RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions, REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult, LPDWORD lpdwDisposition)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004e921e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegCreateKeyExA(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9224  ADVAPI32.DLL::RegOpenKeyExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegOpenKeyExA
LSTATUS __stdcall import_RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004e9224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e922a  ADVAPI32.DLL::RegQueryInfoKeyA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryInfoKeyA
LSTATUS __stdcall import_RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004e922a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegQueryInfoKeyA(hKey,lpClass,lpcchClass,lpReserved,lpcSubKeys,lpcbMaxSubKeyLen,
                           lpcbMaxClassLen,lpcValues,lpcbMaxValueNameLen,lpcbMaxValueLen,
                           lpcbSecurityDescriptor,lpftLastWriteTime);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9230  ADVAPI32.DLL::RegQueryValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegQueryValueExA
LSTATUS __stdcall import_RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData, LPDWORD lpcbData)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004e9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9236  ADVAPI32.DLL::RegSetValueExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to ADVAPI32.DLL::RegSetValueExA
LSTATUS __stdcall import_RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS regStatus;
  
                    /* WARNING: Could not recover jumptable at 0x004e9236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  regStatus = RegSetValueExA(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return regStatus;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e923c  KERNEL32.DLL::CloseHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CloseHandle
BOOL __stdcall import_CloseHandle(HANDLE hObject)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = CloseHandle(hObject);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9242  KERNEL32.DLL::CreateFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileA
HANDLE __stdcall import_CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE hFile;
  
                    /* WARNING: Could not recover jumptable at 0x004e9242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFile = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return hFile;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9248  KERNEL32.DLL::CreateFileW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateFileW
HANDLE __stdcall import_CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e924e  KERNEL32.DLL::CreateProcessA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::CreateProcessA
BOOL __stdcall import_CreateProcessA(LPCSTR lpApplicationName,LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment, LPCSTR lpCurrentDirectory,LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e924e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = CreateProcessA(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9254  KERNEL32.DLL::DeleteFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::DeleteFileA
BOOL __stdcall import_DeleteFileA(LPCSTR lpFileName)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteFileA(lpFileName);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e925a  KERNEL32.DLL::DuplicateHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::DuplicateHandle
BOOL __stdcall import_DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e925a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9266  KERNEL32.DLL::ExitProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExitProcess
void __stdcall import_ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004e9266. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e926c  KERNEL32.DLL::ExpandEnvironmentStringsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ExpandEnvironmentStringsA
DWORD __stdcall import_ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ExpandEnvironmentStringsA(lpSrc,lpDst,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9272  KERNEL32.DLL::FileTimeToLocalFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FileTimeToLocalFileTime
BOOL __stdcall import_FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9278  KERNEL32.DLL::FileTimeToSystemTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FileTimeToSystemTime
BOOL __stdcall import_FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e927e  KERNEL32.DLL::FindClose   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindClose
BOOL __stdcall import_FindClose(HANDLE hFindFile)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e927e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FindClose(hFindFile);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9284  KERNEL32.DLL::FindFirstFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindFirstFileA
HANDLE __stdcall import_FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE hFind;
  
                    /* WARNING: Could not recover jumptable at 0x004e9284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFind = FindFirstFileA(lpFileName,lpFindFileData);
  return hFind;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e928a  KERNEL32.DLL::FindNextFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindNextFileA
BOOL __stdcall import_FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e928a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FindNextFileA(hFindFile,lpFindFileData);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9290  KERNEL32.DLL::FindResourceA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindResourceA
HRSRC __stdcall import_FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC hResource;
  
                    /* WARNING: Could not recover jumptable at 0x004e9290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hResource = FindResourceA(hModule,lpName,lpType);
  return hResource;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9296  KERNEL32.DLL::FindResourceExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FindResourceExA
HRSRC __stdcall import_FindResourceExA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,WORD wLanguage)

{
  HRSRC hResource;
  
                    /* WARNING: Could not recover jumptable at 0x004e9296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hResource = FindResourceExA(hModule,lpType,lpName,wLanguage);
  return hResource;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e929c  KERNEL32.DLL::FlushFileBuffers   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FlushFileBuffers
BOOL __stdcall import_FlushFileBuffers(HANDLE hFile)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FlushFileBuffers(hFile);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92a2  KERNEL32.DLL::FormatMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FormatMessageA
DWORD __stdcall import_FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer, DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92a8  KERNEL32.DLL::FreeLibrary   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FreeLibrary
BOOL __stdcall import_FreeLibrary(HMODULE hLibModule)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e92a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FreeLibrary(hLibModule);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92ae  KERNEL32.DLL::FreeResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::FreeResource
BOOL __stdcall import_FreeResource(HGLOBAL hResData)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e92ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = FreeResource(hResData);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92b4  KERNEL32.DLL::GetACP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetACP
UINT __stdcall import_GetACP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetACP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92ba  KERNEL32.DLL::GetCPInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCPInfo
BOOL __stdcall import_GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e92ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetCPInfo(CodePage,lpCPInfo);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92c0  KERNEL32.DLL::GetCommandLineA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCommandLineA
LPSTR __stdcall import_GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92c6  KERNEL32.DLL::GetCurrentProcess   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentProcess
HANDLE __stdcall import_GetCurrentProcess(void)

{
  HANDLE hProcess;
  
                    /* WARNING: Could not recover jumptable at 0x004e92c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hProcess = GetCurrentProcess();
  return hProcess;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92cc  KERNEL32.DLL::GetCurrentProcessId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentProcessId
DWORD __stdcall import_GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92d2  KERNEL32.DLL::GetCurrentThreadId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetCurrentThreadId
DWORD __stdcall import_GetCurrentThreadId(void)

{
  DWORD threadId;
  
                    /* WARNING: Could not recover jumptable at 0x004e92d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  threadId = GetCurrentThreadId();
  return threadId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92d8  KERNEL32.DLL::GetDateFormatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetDateFormatA
int __stdcall import_GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr, int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92de  KERNEL32.DLL::GetDriveTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetDriveTypeA
UINT __stdcall import_GetDriveTypeA(LPCSTR lpRootPathName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDriveTypeA(lpRootPathName);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92e4  KERNEL32.DLL::GetEnvironmentStrings   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetEnvironmentStrings
LPCH __stdcall import_GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92ea  KERNEL32.DLL::GetFileAttributesA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesA
DWORD __stdcall import_GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD attributes;
  
                    /* WARNING: Could not recover jumptable at 0x004e92ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  attributes = GetFileAttributesA(lpFileName);
  return attributes;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92f0  KERNEL32.DLL::GetFileAttributesW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileAttributesW
DWORD __stdcall import_GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92f6  KERNEL32.DLL::GetFileSize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileSize
DWORD __stdcall import_GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD fileSize;
  
                    /* WARNING: Could not recover jumptable at 0x004e92f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fileSize = GetFileSize(hFile,lpFileSizeHigh);
  return fileSize;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e92fc  KERNEL32.DLL::GetFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileTime
BOOL __stdcall import_GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e92fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9302  KERNEL32.DLL::GetFileType   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFileType
DWORD __stdcall import_GetFileType(HANDLE hFile)

{
  DWORD fileType;
  
                    /* WARNING: Could not recover jumptable at 0x004e9302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fileType = GetFileType(hFile);
  return fileType;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9308  KERNEL32.DLL::GetFullPathNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetFullPathNameA
DWORD __stdcall import_GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e930e  KERNEL32.DLL::GetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLastError
DWORD __stdcall import_GetLastError(void)

{
  DWORD lastError;
  
                    /* WARNING: Could not recover jumptable at 0x004e930e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lastError = GetLastError();
  return lastError;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9314  KERNEL32.DLL::GetLocalTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocalTime
void __stdcall import_GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x004e9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e931a  KERNEL32.DLL::GetLocaleInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetLocaleInfoA
int __stdcall import_GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e931a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9320  KERNEL32.DLL::GetModuleFileNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleFileNameA
DWORD __stdcall import_GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9326  KERNEL32.DLL::GetModuleHandleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetModuleHandleA
HMODULE __stdcall import_GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE hModule;
  
                    /* WARNING: Could not recover jumptable at 0x004e9326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hModule = GetModuleHandleA(lpModuleName);
  return hModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e932c  KERNEL32.DLL::GetOEMCP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetOEMCP
UINT __stdcall import_GetOEMCP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e932c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetOEMCP();
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9332  KERNEL32.DLL::GetPrivateProfileStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetPrivateProfileStringA
DWORD __stdcall import_GetPrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize, LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9338  KERNEL32.DLL::GetProcAddress   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetProcAddress
FARPROC __stdcall import_GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC procAddress;
  
                    /* WARNING: Could not recover jumptable at 0x004e9338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  procAddress = GetProcAddress(hModule,lpProcName);
  return procAddress;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9344  KERNEL32.DLL::GetStartupInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStartupInfoA
void __stdcall import_GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004e9344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e934a  KERNEL32.DLL::GetStdHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStdHandle
HANDLE __stdcall import_GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e934a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9350  KERNEL32.DLL::GetStringTypeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeA
BOOL __stdcall import_GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetStringTypeA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9356  KERNEL32.DLL::GetStringTypeW   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetStringTypeW
BOOL __stdcall import_GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e935c  KERNEL32.DLL::GetSystemDefaultLangID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetSystemDefaultLangID
LANGID __stdcall import_GetSystemDefaultLangID(void)

{
  LANGID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetSystemDefaultLangID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9362  KERNEL32.DLL::GetSystemTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetSystemTime
void __stdcall import_GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x004e9362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9368  KERNEL32.DLL::GetTickCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTickCount
DWORD __stdcall import_GetTickCount(void)

{
  DWORD tickCount;
  
                    /* WARNING: Could not recover jumptable at 0x004e9368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tickCount = GetTickCount();
  return tickCount;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e936e  KERNEL32.DLL::GetTimeFormatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTimeFormatA
int __stdcall import_GetTimeFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpTime,LPCSTR lpFormat,LPSTR lpTimeStr, int cchTime)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e936e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTimeFormatA(Locale,dwFlags,lpTime,lpFormat,lpTimeStr,cchTime);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9374  KERNEL32.DLL::GetTimeZoneInformation   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetTimeZoneInformation
DWORD __stdcall import_GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e937a  KERNEL32.DLL::GetUserDefaultLCID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetUserDefaultLCID
LCID __stdcall import_GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e937a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9386  KERNEL32.DLL::GetVersion   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersion
DWORD __stdcall import_GetVersion(void)

{
  DWORD version;
  
                    /* WARNING: Could not recover jumptable at 0x004e9386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  version = GetVersion();
  return version;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e938c  KERNEL32.DLL::GetVersionExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetVersionExA
BOOL __stdcall import_GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetVersionExA(lpVersionInformation);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9392  KERNEL32.DLL::GetWindowsDirectoryA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GetWindowsDirectoryA
UINT __stdcall import_GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9398  KERNEL32.DLL::GlobalAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalAlloc
HGLOBAL __stdcall import_GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x004e9398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = GlobalAlloc(uFlags,dwBytes);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e939e  KERNEL32.DLL::GlobalFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalFree
HGLOBAL __stdcall import_GlobalFree(HGLOBAL hMem)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x004e939e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = GlobalFree(hMem);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93a4  KERNEL32.DLL::GlobalHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalHandle
HGLOBAL __stdcall import_GlobalHandle(LPCVOID pMem)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x004e93a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = GlobalHandle(pMem);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93aa  KERNEL32.DLL::GlobalLock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalLock
LPVOID __stdcall import_GlobalLock(HGLOBAL hMem)

{
  LPVOID lockedMem;
  
                    /* WARNING: Could not recover jumptable at 0x004e93aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lockedMem = GlobalLock(hMem);
  return lockedMem;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93b0  KERNEL32.DLL::GlobalMemoryStatus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalMemoryStatus
void __stdcall import_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    /* WARNING: Could not recover jumptable at 0x004e93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GlobalMemoryStatus(lpBuffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93b6  KERNEL32.DLL::GlobalSize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalSize
SIZE_T __stdcall import_GlobalSize(HGLOBAL hMem)

{
  SIZE_T memSize;
  
                    /* WARNING: Could not recover jumptable at 0x004e93b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memSize = GlobalSize(hMem);
  return memSize;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93bc  KERNEL32.DLL::GlobalUnlock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::GlobalUnlock
BOOL __stdcall import_GlobalUnlock(HGLOBAL hMem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e93bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GlobalUnlock(hMem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93c2  KERNEL32.DLL::HeapAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapAlloc
LPVOID __stdcall import_HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID mem;
  
                    /* WARNING: Could not recover jumptable at 0x004e93c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mem = HeapAlloc(hHeap,dwFlags,dwBytes);
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93c8  KERNEL32.DLL::HeapCreate   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapCreate
HANDLE __stdcall import_HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e93c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93ce  KERNEL32.DLL::HeapDestroy   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapDestroy
BOOL __stdcall import_HeapDestroy(HANDLE hHeap)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e93ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = HeapDestroy(hHeap);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93d4  KERNEL32.DLL::HeapFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::HeapFree
BOOL __stdcall import_HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e93d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = HeapFree(hHeap,dwFlags,lpMem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93da  KERNEL32.DLL::InterlockedIncrement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::InterlockedIncrement
LONG __stdcall import_InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e93da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93e0  KERNEL32.DLL::IsBadReadPtr   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsBadReadPtr
BOOL __stdcall import_IsBadReadPtr(void *lp,UINT_PTR ucb)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e93e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsBadReadPtr(lp,ucb);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93e6  KERNEL32.DLL::IsValidLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::IsValidLocale
BOOL __stdcall import_IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e93e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsValidLocale(Locale,dwFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93ec  KERNEL32.DLL::LCMapStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LCMapStringA
int __stdcall import_LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e93ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93f8  KERNEL32.DLL::LoadLibraryA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LoadLibraryA
HMODULE __stdcall import_LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE hModule;
  
                    /* WARNING: Could not recover jumptable at 0x004e93f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hModule = LoadLibraryA(lpLibFileName);
  return hModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e93fe  KERNEL32.DLL::LoadResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LoadResource
HGLOBAL __stdcall import_LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL hGlobal;
  
                    /* WARNING: Could not recover jumptable at 0x004e93fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGlobal = LoadResource(hModule,hResInfo);
  return hGlobal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9404  KERNEL32.DLL::LocalFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalFree
HLOCAL __stdcall import_LocalFree(HLOCAL hMem)

{
  HLOCAL hLocal;
  
                    /* WARNING: Could not recover jumptable at 0x004e9404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hLocal = LocalFree(hMem);
  return hLocal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e940a  KERNEL32.DLL::LocalHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalHandle
HLOCAL __stdcall import_LocalHandle(LPCVOID pMem)

{
  HLOCAL hLocal;
  
                    /* WARNING: Could not recover jumptable at 0x004e940a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hLocal = LocalHandle(pMem);
  return hLocal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9410  KERNEL32.DLL::LocalLock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalLock
LPVOID __stdcall import_LocalLock(HLOCAL hMem)

{
  LPVOID lockedMem;
  
                    /* WARNING: Could not recover jumptable at 0x004e9410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lockedMem = LocalLock(hMem);
  return lockedMem;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9416  KERNEL32.DLL::LocalReAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalReAlloc
HLOCAL __stdcall import_LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags)

{
  HLOCAL hLocal;
  
                    /* WARNING: Could not recover jumptable at 0x004e9416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hLocal = LocalReAlloc(hMem,uBytes,uFlags);
  return hLocal;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e941c  KERNEL32.DLL::LocalUnlock   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LocalUnlock
BOOL __stdcall import_LocalUnlock(HLOCAL hMem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e941c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = LocalUnlock(hMem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9422  KERNEL32.DLL::LockFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LockFile
BOOL __stdcall import_LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9428  KERNEL32.DLL::LockResource   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::LockResource
LPVOID __stdcall import_LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e942e  KERNEL32.DLL::MoveFileA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MoveFileA
BOOL __stdcall import_MoveFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e942e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = MoveFileA(lpExistingFileName,lpNewFileName);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9434  KERNEL32.DLL::MulDiv   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MulDiv
int __stdcall import_MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int scaled;
  
                    /* WARNING: Could not recover jumptable at 0x004e9434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  scaled = MulDiv(nNumber,nNumerator,nDenominator);
  return scaled;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e943a  KERNEL32.DLL::MultiByteToWideChar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::MultiByteToWideChar
int __stdcall import_MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte, LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e943a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9440  KERNEL32.DLL::RaiseException   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RaiseException
void __stdcall import_RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments, ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004e9440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9446  KERNEL32.DLL::ReadFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::ReadFile
BOOL __stdcall import_ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e944c  KERNEL32.DLL::RtlUnwind   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::RtlUnwind
void __stdcall import_RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x004e944c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9452  KERNEL32.DLL::SetConsoleCtrlHandler   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetConsoleCtrlHandler
BOOL __stdcall import_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9458  KERNEL32.DLL::SetEndOfFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetEndOfFile
BOOL __stdcall import_SetEndOfFile(HANDLE hFile)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetEndOfFile(hFile);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e945e  KERNEL32.DLL::SetErrorMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetErrorMode
UINT __stdcall import_SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e945e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9464  KERNEL32.DLL::SetFilePointer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetFilePointer
DWORD __stdcall import_SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD filePos;
  
                    /* WARNING: Could not recover jumptable at 0x004e9464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  filePos = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return filePos;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e946a  KERNEL32.DLL::SetHandleCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetHandleCount
UINT __stdcall import_SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e946a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9470  KERNEL32.DLL::SetLastError   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetLastError
void __stdcall import_SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x004e9470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9476  KERNEL32.DLL::SetThreadLocale   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SetThreadLocale
BOOL __stdcall import_SetThreadLocale(LCID Locale)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetThreadLocale(Locale);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e947c  KERNEL32.DLL::SystemTimeToFileTime   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::SystemTimeToFileTime
BOOL __stdcall import_SystemTimeToFileTime(SYSTEMTIME *lpSystemTime,LPFILETIME lpFileTime)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e947c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SystemTimeToFileTime(lpSystemTime,lpFileTime);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9488  KERNEL32.DLL::TlsFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsFree
BOOL __stdcall import_TlsFree(DWORD dwTlsIndex)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TlsFree(dwTlsIndex);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e948e  KERNEL32.DLL::TlsGetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsGetValue
LPVOID __stdcall import_TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID tlsValue;
  
                    /* WARNING: Could not recover jumptable at 0x004e948e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  tlsValue = TlsGetValue(dwTlsIndex);
  return tlsValue;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9494  KERNEL32.DLL::TlsSetValue   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::TlsSetValue
BOOL __stdcall import_TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TlsSetValue(dwTlsIndex,lpTlsValue);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e949a  KERNEL32.DLL::UnhandledExceptionFilter   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnhandledExceptionFilter
LONG __stdcall import_UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e949a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94a0  KERNEL32.DLL::UnlockFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::UnlockFile
BOOL __stdcall import_UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,DWORD nNumberOfBytesToUnlockLow ,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e94a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94a6  KERNEL32.DLL::VirtualAlloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualAlloc
LPVOID __stdcall import_VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID mem;
  
                    /* WARNING: Could not recover jumptable at 0x004e94a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mem = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94ac  KERNEL32.DLL::VirtualFree   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualFree
BOOL __stdcall import_VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e94ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = VirtualFree(lpAddress,dwSize,dwFreeType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94b2  KERNEL32.DLL::VirtualQueryEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::VirtualQueryEx
SIZE_T __stdcall import_VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQueryEx(hProcess,lpAddress,lpBuffer,dwLength);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94b8  KERNEL32.DLL::WideCharToMultiByte   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WideCharToMultiByte
int __stdcall import_WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar, LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94be  KERNEL32.DLL::WinExec   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WinExec
UINT __stdcall import_WinExec(LPCSTR lpCmdLine,UINT uCmdShow)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = WinExec(lpCmdLine,uCmdShow);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94c4  KERNEL32.DLL::WriteFile   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WriteFile
BOOL __stdcall import_WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e94c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94ca  KERNEL32.DLL::WritePrivateProfileStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::WritePrivateProfileStringA
BOOL __stdcall import_WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e94ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94d0  KERNEL32.DLL::lstrcatA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcatA
LPSTR __stdcall import_lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94d6  KERNEL32.DLL::lstrcpyA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcpyA
LPSTR __stdcall import_lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94dc  KERNEL32.DLL::lstrcpynA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrcpynA
LPSTR __stdcall import_lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94e2  KERNEL32.DLL::lstrlenA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to KERNEL32.DLL::lstrlenA
int __stdcall import_lstrlenA(LPCSTR lpString)

{
  int len;
  
                    /* WARNING: Could not recover jumptable at 0x004e94e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  len = lstrlenA(lpString);
  return len;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94e8  COMDLG32.DLL::GetFileTitleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to COMDLG32.DLL::GetFileTitleA
short __stdcall import_GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = GetFileTitleA(param_1,Buf,cchSize);
  return sVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94f0  GDI32.DLL::BitBlt   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::BitBlt
BOOL __stdcall import_BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94f6  GDI32.DLL::CombineRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CombineRgn
int __stdcall import_CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,iMode);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e94fc  GDI32.DLL::CreateBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateBitmap
HBITMAP __stdcall import_CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x004e94fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateBitmap(nWidth,nHeight,nPlanes,nBitCount,lpBits);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9502  GDI32.DLL::CreateBrushIndirect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateBrushIndirect
HBRUSH __stdcall import_CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x004e9502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = CreateBrushIndirect(plbrush);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9508  GDI32.DLL::CreateCompatibleBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateCompatibleBitmap
HBITMAP __stdcall import_CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x004e9508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateCompatibleBitmap(hdc,cx,cy);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e950e  GDI32.DLL::CreateCompatibleDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateCompatibleDC
HDC __stdcall import_CreateCompatibleDC(HDC hdc)

{
  HDC hdc2;
  
                    /* WARNING: Could not recover jumptable at 0x004e950e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc2 = CreateCompatibleDC(hdc);
  return hdc2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9514  GDI32.DLL::CreateDCA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDCA
HDC __stdcall import_CreateDCA(LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR pszPort,DEVMODEA *pdm)

{
  HDC hdc;
  
                    /* WARNING: Could not recover jumptable at 0x004e9514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc = CreateDCA(pwszDriver,pwszDevice,pszPort,pdm);
  return hdc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e951a  GDI32.DLL::CreateDIBPatternBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDIBPatternBrush
HBRUSH __stdcall import_CreateDIBPatternBrush(HGLOBAL h,UINT iUsage)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x004e951a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = CreateDIBPatternBrush(h,iUsage);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9520  GDI32.DLL::CreateDIBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDIBitmap
HBITMAP __stdcall import_CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi, UINT iUsage)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x004e9520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateDIBitmap(hdc,pbmih,flInit,pjBits,pbmi,iUsage);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9526  GDI32.DLL::CreateDiscardableBitmap   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateDiscardableBitmap
HBITMAP __stdcall import_CreateDiscardableBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP hBitmap;
  
                    /* WARNING: Could not recover jumptable at 0x004e9526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBitmap = CreateDiscardableBitmap(hdc,cx,cy);
  return hBitmap;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e952c  GDI32.DLL::CreateFontA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateFontA
HFONT __stdcall import_CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic, DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision ,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName)

{
  HFONT hFont;
  
                    /* WARNING: Could not recover jumptable at 0x004e952c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFont = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut
                       ,iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
  return hFont;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9532  GDI32.DLL::CreateFontIndirectA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateFontIndirectA
HFONT __stdcall import_CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT hFont;
  
                    /* WARNING: Could not recover jumptable at 0x004e9532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hFont = CreateFontIndirectA(lplf);
  return hFont;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9538  GDI32.DLL::CreatePalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreatePalette
HPALETTE __stdcall import_CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE hPalette;
  
                    /* WARNING: Could not recover jumptable at 0x004e9538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hPalette = CreatePalette(plpal);
  return hPalette;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e953e  GDI32.DLL::CreatePen   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreatePen
HPEN __stdcall import_CreatePen(int iStyle,int cWidth,COLORREF color)

{
  HPEN hPen;
  
                    /* WARNING: Could not recover jumptable at 0x004e953e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hPen = CreatePen(iStyle,cWidth,color);
  return hPen;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9544  GDI32.DLL::CreateRectRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateRectRgn
HRGN __stdcall import_CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN hRgn;
  
                    /* WARNING: Could not recover jumptable at 0x004e9544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hRgn = CreateRectRgn(x1,y1,x2,y2);
  return hRgn;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e954a  GDI32.DLL::CreateRectRgnIndirect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateRectRgnIndirect
HRGN __stdcall import_CreateRectRgnIndirect(RECT *lprect)

{
  HRGN hRgn;
  
                    /* WARNING: Could not recover jumptable at 0x004e954a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hRgn = CreateRectRgnIndirect(lprect);
  return hRgn;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9550  GDI32.DLL::CreateSolidBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::CreateSolidBrush
HBRUSH __stdcall import_CreateSolidBrush(COLORREF color)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x004e9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = CreateSolidBrush(color);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9556  GDI32.DLL::DPtoLP   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DPtoLP
BOOL __stdcall import_DPtoLP(HDC hdc,LPPOINT lppt,int c)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DPtoLP(hdc,lppt,c);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e955c  GDI32.DLL::DeleteDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DeleteDC
BOOL __stdcall import_DeleteDC(HDC hdc)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteDC(hdc);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9562  GDI32.DLL::DeleteObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::DeleteObject
BOOL __stdcall import_DeleteObject(HGDIOBJ ho)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteObject(ho);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9568  GDI32.DLL::EndDoc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::EndDoc
int __stdcall import_EndDoc(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EndDoc(hdc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e956e  GDI32.DLL::EndPage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::EndPage
int __stdcall import_EndPage(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e956e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = EndPage(hdc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9574  GDI32.DLL::Escape   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::Escape
int __stdcall import_Escape(HDC hdc,int iEscape,int cjIn,LPCSTR pvIn,LPVOID pvOut)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Escape(hdc,iEscape,cjIn,pvIn,pvOut);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e957a  GDI32.DLL::ExtTextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ExtTextOutA
BOOL __stdcall import_ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e957a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ExtTextOutA(hdc,x,y,options,lprect,lpString,c,lpDx);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9580  GDI32.DLL::GetBkColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetBkColor
COLORREF __stdcall import_GetBkColor(HDC hdc)

{
  COLORREF color;
  
                    /* WARNING: Could not recover jumptable at 0x004e9580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color = GetBkColor(hdc);
  return color;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9586  GDI32.DLL::GetClipRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetClipRgn
int __stdcall import_GetClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipRgn(hdc,hrgn);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e958c  GDI32.DLL::GetCurrentObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetCurrentObject
HGDIOBJ __stdcall import_GetCurrentObject(HDC hdc,UINT type)

{
  HGDIOBJ hGdiObject;
  
                    /* WARNING: Could not recover jumptable at 0x004e958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGdiObject = GetCurrentObject(hdc,type);
  return hGdiObject;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9592  GDI32.DLL::GetCurrentPositionEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetCurrentPositionEx
BOOL __stdcall import_GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetCurrentPositionEx(hdc,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9598  GDI32.DLL::GetDeviceCaps   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetDeviceCaps
int __stdcall import_GetDeviceCaps(HDC hdc,int index)

{
  int deviceCap;
  
                    /* WARNING: Could not recover jumptable at 0x004e9598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  deviceCap = GetDeviceCaps(hdc,index);
  return deviceCap;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e959e  GDI32.DLL::GetObjectA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetObjectA
int __stdcall import_GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e959e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95a4  GDI32.DLL::GetStockObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetStockObject
HGDIOBJ __stdcall import_GetStockObject(int i)

{
  HGDIOBJ hGdiObject;
  
                    /* WARNING: Could not recover jumptable at 0x004e95a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGdiObject = GetStockObject(i);
  return hGdiObject;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95aa  GDI32.DLL::GetSystemPaletteEntries   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetSystemPaletteEntries
UINT __stdcall import_GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemPaletteEntries(hdc,iStart,cEntries,pPalEntries);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95b0  GDI32.DLL::GetTextAlign   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextAlign
UINT __stdcall import_GetTextAlign(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetTextAlign(hdc);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95b6  GDI32.DLL::GetTextColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextColor
COLORREF __stdcall import_GetTextColor(HDC hdc)

{
  COLORREF color;
  
                    /* WARNING: Could not recover jumptable at 0x004e95b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color = GetTextColor(hdc);
  return color;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95bc  GDI32.DLL::GetTextExtentPoint32A   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextExtentPoint32A
BOOL __stdcall import_GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetTextExtentPoint32A(hdc,lpString,c,psizl);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95c2  GDI32.DLL::GetTextFaceA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextFaceA
int __stdcall import_GetTextFaceA(HDC hdc,int c,LPSTR lpName)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTextFaceA(hdc,c,lpName);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95c8  GDI32.DLL::GetTextMetricsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetTextMetricsA
BOOL __stdcall import_GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetTextMetricsA(hdc,lptm);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95ce  GDI32.DLL::GetViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetViewportExtEx
BOOL __stdcall import_GetViewportExtEx(HDC hdc,LPSIZE lpsize)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetViewportExtEx(hdc,lpsize);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95d4  GDI32.DLL::GetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetViewportOrgEx
BOOL __stdcall import_GetViewportOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetViewportOrgEx(hdc,lppoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95da  GDI32.DLL::GetWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetWindowExtEx
BOOL __stdcall import_GetWindowExtEx(HDC hdc,LPSIZE lpsize)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetWindowExtEx(hdc,lpsize);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95e0  GDI32.DLL::GetWindowOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::GetWindowOrgEx
BOOL __stdcall import_GetWindowOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetWindowOrgEx(hdc,lppoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95e6  GDI32.DLL::IntersectClipRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::IntersectClipRect
int __stdcall import_IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e95e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95ec  GDI32.DLL::LineTo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::LineTo
BOOL __stdcall import_LineTo(HDC hdc,int x,int y)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = LineTo(hdc,x,y);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95f2  GDI32.DLL::MoveToEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::MoveToEx
BOOL __stdcall import_MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = MoveToEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95f8  GDI32.DLL::OffsetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::OffsetViewportOrgEx
BOOL __stdcall import_OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = OffsetViewportOrgEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e95fe  GDI32.DLL::PatBlt   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::PatBlt
BOOL __stdcall import_PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e95fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = PatBlt(hdc,x,y,w,h,rop);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9604  GDI32.DLL::Polyline   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::Polyline
BOOL __stdcall import_Polyline(HDC hdc,POINT *apt,int cpt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = Polyline(hdc,apt,cpt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e960a  GDI32.DLL::RealizePalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::RealizePalette
UINT __stdcall import_RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e960a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9610  GDI32.DLL::Rectangle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::Rectangle
BOOL __stdcall import_Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = Rectangle(hdc,left,top,right,bottom);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9616  GDI32.DLL::ResetDCA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ResetDCA
HDC __stdcall import_ResetDCA(HDC hdc,DEVMODEA *lpdm)

{
  HDC hdc2;
  
                    /* WARNING: Could not recover jumptable at 0x004e9616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc2 = ResetDCA(hdc,lpdm);
  return hdc2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e961c  GDI32.DLL::RestoreDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::RestoreDC
BOOL __stdcall import_RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e961c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = RestoreDC(hdc,nSavedDC);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9622  GDI32.DLL::SaveDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SaveDC
int __stdcall import_SaveDC(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SaveDC(hdc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9628  GDI32.DLL::ScaleViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ScaleViewportExtEx
BOOL __stdcall import_ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScaleViewportExtEx(hdc,xn,dx,yn,yd,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e962e  GDI32.DLL::ScaleWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::ScaleWindowExtEx
BOOL __stdcall import_ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e962e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScaleWindowExtEx(hdc,xn,xd,yn,yd,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9634  GDI32.DLL::SelectClipRgn   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectClipRgn
int __stdcall import_SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SelectClipRgn(hdc,hrgn);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e963a  GDI32.DLL::SelectObject   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectObject
HGDIOBJ __stdcall import_SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ hGdiObject;
  
                    /* WARNING: Could not recover jumptable at 0x004e963a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hGdiObject = SelectObject(hdc,h);
  return hGdiObject;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9640  GDI32.DLL::SelectPalette   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SelectPalette
HPALETTE __stdcall import_SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd)

{
  HPALETTE hPalette;
  
                    /* WARNING: Could not recover jumptable at 0x004e9640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hPalette = SelectPalette(hdc,hPal,bForceBkgd);
  return hPalette;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9646  GDI32.DLL::SetAbortProc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetAbortProc
int __stdcall import_SetAbortProc(HDC hdc,ABORTPROC proc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetAbortProc(hdc,proc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e964c  GDI32.DLL::SetBkColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetBkColor
COLORREF __stdcall import_SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF color2;
  
                    /* WARNING: Could not recover jumptable at 0x004e964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color2 = SetBkColor(hdc,color);
  return color2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9652  GDI32.DLL::SetBkMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetBkMode
int __stdcall import_SetBkMode(HDC hdc,int mode)

{
  int prevBkMode;
  
                    /* WARNING: Could not recover jumptable at 0x004e9652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  prevBkMode = SetBkMode(hdc,mode);
  return prevBkMode;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9658  GDI32.DLL::SetMapMode   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetMapMode
int __stdcall import_SetMapMode(HDC hdc,int iMode)

{
  int prevMapMode;
  
                    /* WARNING: Could not recover jumptable at 0x004e9658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  prevMapMode = SetMapMode(hdc,iMode);
  return prevMapMode;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e965e  GDI32.DLL::SetPixel   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetPixel
COLORREF __stdcall import_SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF color2;
  
                    /* WARNING: Could not recover jumptable at 0x004e965e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color2 = SetPixel(hdc,x,y,color);
  return color2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9664  GDI32.DLL::SetTextAlign   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetTextAlign
UINT __stdcall import_SetTextAlign(HDC hdc,UINT align)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTextAlign(hdc,align);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e966a  GDI32.DLL::SetTextColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetTextColor
COLORREF __stdcall import_SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF color2;
  
                    /* WARNING: Could not recover jumptable at 0x004e966a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  color2 = SetTextColor(hdc,color);
  return color2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9670  GDI32.DLL::SetViewportExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetViewportExtEx
BOOL __stdcall import_SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetViewportExtEx(hdc,x,y,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9676  GDI32.DLL::SetViewportOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetViewportOrgEx
BOOL __stdcall import_SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetViewportOrgEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e967c  GDI32.DLL::SetWindowExtEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetWindowExtEx
BOOL __stdcall import_SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowExtEx(hdc,x,y,lpsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9682  GDI32.DLL::SetWindowOrgEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::SetWindowOrgEx
BOOL __stdcall import_SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowOrgEx(hdc,x,y,lppt);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9688  GDI32.DLL::StartDocA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::StartDocA
int __stdcall import_StartDocA(HDC hdc,DOCINFOA *lpdi)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StartDocA(hdc,lpdi);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e968e  GDI32.DLL::StartPage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::StartPage
int __stdcall import_StartPage(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e968e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StartPage(hdc);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9694  GDI32.DLL::TextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to GDI32.DLL::TextOutA
BOOL __stdcall import_TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TextOutA(hdc,x,y,lpString,c);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e969c  SHELL32.DLL::SHBrowseForFolderA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHBrowseForFolderA
LPITEMIDLIST __stdcall import_SHBrowseForFolderA(LPBROWSEINFOA lpbi)

{
  LPITEMIDLIST pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e969c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = SHBrowseForFolderA(lpbi);
  return pIVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96a2  SHELL32.DLL::SHGetMalloc   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetMalloc
HRESULT __stdcall import_SHGetMalloc(IMalloc **ppMalloc)

{
  HRESULT hr;
  
                    /* WARNING: Could not recover jumptable at 0x004e96a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hr = SHGetMalloc(ppMalloc);
  return hr;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96a8  SHELL32.DLL::SHGetSpecialFolderLocation   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetSpecialFolderLocation
HRESULT __stdcall import_SHGetSpecialFolderLocation(HWND hwnd,int csidl,LPITEMIDLIST *ppidl)

{
  HRESULT hr;
  
                    /* WARNING: Could not recover jumptable at 0x004e96a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hr = SHGetSpecialFolderLocation(hwnd,csidl,ppidl);
  return hr;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96ae  SHELL32.DLL::ShellExecuteA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::ShellExecuteA
HINSTANCE __stdcall import_ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory, INT nShowCmd)

{
  HINSTANCE hInstance;
  
                    /* WARNING: Could not recover jumptable at 0x004e96ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hInstance = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return hInstance;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96b4  SHELL32.DLL::SHGetPathFromIDListA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHELL32.DLL::SHGetPathFromIDListA
BOOL __stdcall import_SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e96b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SHGetPathFromIDListA(pidl,pszPath);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96bc  SHFOLDER.DLL::SHGetFolderPathA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to SHFOLDER.DLL::SHGetFolderPathA
int __stdcall import_SHGetFolderPathA(...)

{
  /* jump through the import table to SHFOLDER.DLL::SHGetFolderPathA; Ghidra has no prototype for it,
     so its arguments and result are not recovered here or at its call sites */
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96c4  USER32.DLL::AppendMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::AppendMenuA
BOOL __stdcall import_AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e96c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = AppendMenuA(hMenu,uFlags,uIDNewItem,lpNewItem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96ca  USER32.DLL::BeginDeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BeginDeferWindowPos
HDWP __stdcall import_BeginDeferWindowPos(int nNumWindows)

{
  HDWP hDwp;
  
                    /* WARNING: Could not recover jumptable at 0x004e96ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hDwp = BeginDeferWindowPos(nNumWindows);
  return hDwp;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96d0  USER32.DLL::BeginPaint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BeginPaint
HDC __stdcall import_BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC hdc;
  
                    /* WARNING: Could not recover jumptable at 0x004e96d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc = BeginPaint(hWnd,lpPaint);
  return hdc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96d6  USER32.DLL::BringWindowToTop   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::BringWindowToTop
BOOL __stdcall import_BringWindowToTop(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e96d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = BringWindowToTop(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96dc  USER32.DLL::CallWindowProcA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CallWindowProcA
LRESULT __stdcall import_CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004e96dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96e2  USER32.DLL::CheckMenuItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CheckMenuItem
DWORD __stdcall import_CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e96e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96e8  USER32.DLL::ClientToScreen   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ClientToScreen
BOOL __stdcall import_ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e96e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ClientToScreen(hWnd,lpPoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96ee  USER32.DLL::CloseClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CloseClipboard
BOOL __stdcall import_CloseClipboard(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e96ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = CloseClipboard();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96f4  USER32.DLL::CopyIcon   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CopyIcon
HICON __stdcall import_CopyIcon(HICON hIcon)

{
  HICON hIcon2;
  
                    /* WARNING: Could not recover jumptable at 0x004e96f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hIcon2 = CopyIcon(hIcon);
  return hIcon2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e96fa  USER32.DLL::CreateDialogIndirectParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateDialogIndirectParamA
HWND __stdcall import_CreateDialogIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e96fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = CreateDialogIndirectParamA(hInstance,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9700  USER32.DLL::CreateDialogParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateDialogParamA
HWND __stdcall import_CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e9700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = CreateDialogParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9706  USER32.DLL::CreateMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateMenu
HMENU __stdcall import_CreateMenu(void)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004e9706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = CreateMenu();
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e970c  USER32.DLL::CreatePopupMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreatePopupMenu
HMENU __stdcall import_CreatePopupMenu(void)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004e970c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = CreatePopupMenu();
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9712  USER32.DLL::CreateWindowExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::CreateWindowExA
HWND __stdcall import_CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y, int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam )

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e9712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9718  USER32.DLL::DdeClientTransaction   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeClientTransaction
HDDEDATA __stdcall import_DdeClientTransaction(LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,DWORD dwTimeout, LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e971e  USER32.DLL::DdeConnect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeConnect
HCONV __stdcall import_DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e971e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9724  USER32.DLL::DdeCreateStringHandleA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeCreateStringHandleA
HSZ __stdcall import_DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e972a  USER32.DLL::DdeDisconnect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeDisconnect
BOOL __stdcall import_DdeDisconnect(HCONV hConv)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e972a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DdeDisconnect(hConv);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9730  USER32.DLL::DdeFreeStringHandle   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeFreeStringHandle
BOOL __stdcall import_DdeFreeStringHandle(DWORD idInst,HSZ hsz)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DdeFreeStringHandle(idInst,hsz);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9736  USER32.DLL::DdeInitializeA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeInitializeA
UINT __stdcall import_DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e973c  USER32.DLL::DdeUninitialize   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DdeUninitialize
BOOL __stdcall import_DdeUninitialize(DWORD idInst)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e973c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DdeUninitialize(idInst);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9742  USER32.DLL::DefWindowProcA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DefWindowProcA
LRESULT __stdcall import_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004e9742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9748  USER32.DLL::DeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DeferWindowPos
HDWP __stdcall import_DeferWindowPos(HDWP hWinPosInfo,HWND hWnd,HWND hWndInsertAfter,int x,int y,int cx,int cy,UINT uFlags )

{
  HDWP hDwp;
  
                    /* WARNING: Could not recover jumptable at 0x004e9748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hDwp = DeferWindowPos(hWinPosInfo,hWnd,hWndInsertAfter,x,y,cx,cy,uFlags);
  return hDwp;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e974e  USER32.DLL::DeleteMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DeleteMenu
BOOL __stdcall import_DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e974e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DeleteMenu(hMenu,uPosition,uFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9754  USER32.DLL::DestroyCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyCursor
BOOL __stdcall import_DestroyCursor(HCURSOR hCursor)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DestroyCursor(hCursor);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e975a  USER32.DLL::DestroyMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyMenu
BOOL __stdcall import_DestroyMenu(HMENU hMenu)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e975a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DestroyMenu(hMenu);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9760  USER32.DLL::DestroyWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DestroyWindow
BOOL __stdcall import_DestroyWindow(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DestroyWindow(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9766  USER32.DLL::DialogBoxIndirectParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DialogBoxIndirectParamA
INT_PTR __stdcall import_DialogBoxIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  INT_PTR IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = DialogBoxIndirectParamA(hInstance,hDialogTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return IVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e976c  USER32.DLL::DialogBoxParamA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DialogBoxParamA
INT_PTR __stdcall import_DialogBoxParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc, LPARAM dwInitParam)

{
  INT_PTR dialogResult;
  
                    /* WARNING: Could not recover jumptable at 0x004e976c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dialogResult = DialogBoxParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return dialogResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9772  USER32.DLL::DispatchMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DispatchMessageA
LRESULT __stdcall import_DispatchMessageA(MSG *lpMsg)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004e9772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = DispatchMessageA(lpMsg);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9778  USER32.DLL::DrawEdge   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawEdge
BOOL __stdcall import_DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawEdge(hdc,qrc,edge,grfFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e977e  USER32.DLL::DrawFocusRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawFocusRect
BOOL __stdcall import_DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e977e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawFocusRect(hDC,lprc);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9784  USER32.DLL::DrawFrameControl   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawFrameControl
BOOL __stdcall import_DrawFrameControl(HDC hdc,LPRECT param_2,UINT param_3,UINT param_4)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawFrameControl(hdc,param_2,param_3,param_4);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e978a  USER32.DLL::DrawIcon   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawIcon
BOOL __stdcall import_DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e978a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawIcon(hDC,X,Y,hIcon);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9790  USER32.DLL::DrawMenuBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawMenuBar
BOOL __stdcall import_DrawMenuBar(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = DrawMenuBar(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9796  USER32.DLL::DrawTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawTextA
int __stdcall import_DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextA(hdc,lpchText,cchText,lprc,format);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e979c  USER32.DLL::DrawTextExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::DrawTextExA
int __stdcall import_DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextExA(hdc,lpchText,cchText,lprc,format,lpdtp);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97a2  USER32.DLL::EmptyClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EmptyClipboard
BOOL __stdcall import_EmptyClipboard(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EmptyClipboard();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97a8  USER32.DLL::EnableMenuItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableMenuItem
BOOL __stdcall import_EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97ae  USER32.DLL::EnableScrollBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableScrollBar
BOOL __stdcall import_EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnableScrollBar(hWnd,wSBflags,wArrows);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97b4  USER32.DLL::EnableWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnableWindow
BOOL __stdcall import_EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnableWindow(hWnd,bEnable);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97ba  USER32.DLL::EndDeferWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndDeferWindowPos
BOOL __stdcall import_EndDeferWindowPos(HDWP hWinPosInfo)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EndDeferWindowPos(hWinPosInfo);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97c0  USER32.DLL::EndDialog   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndDialog
BOOL __stdcall import_EndDialog(HWND hDlg,INT_PTR nResult)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EndDialog(hDlg,nResult);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97c6  USER32.DLL::EndPaint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EndPaint
BOOL __stdcall import_EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EndPaint(hWnd,lpPaint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97cc  USER32.DLL::EnumChildWindows   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnumChildWindows
BOOL __stdcall import_EnumChildWindows(HWND hWndParent,WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnumChildWindows(hWndParent,lpEnumFunc,lParam);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97d2  USER32.DLL::EnumThreadWindows   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::EnumThreadWindows
BOOL __stdcall import_EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97d8  USER32.DLL::FillRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FillRect
int __stdcall import_FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e97d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97de  USER32.DLL::FindWindowA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FindWindowA
HWND __stdcall import_FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e97de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = FindWindowA(lpClassName,lpWindowName);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97e4  USER32.DLL::FrameRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::FrameRect
int __stdcall import_FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e97e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97ea  USER32.DLL::GetActiveWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetActiveWindow
HWND __stdcall import_GetActiveWindow(void)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e97ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetActiveWindow();
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97f0  USER32.DLL::GetClassInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClassInfoA
BOOL __stdcall import_GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97f6  USER32.DLL::GetClassNameA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClassNameA
int __stdcall import_GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e97f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e97fc  USER32.DLL::GetClientRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetClientRect
BOOL __stdcall import_GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e97fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetClientRect(hWnd,lpRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9802  USER32.DLL::GetCursorPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetCursorPos
BOOL __stdcall import_GetCursorPos(LPPOINT lpPoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetCursorPos(lpPoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9808  USER32.DLL::GetDesktopWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDesktopWindow
HWND __stdcall import_GetDesktopWindow(void)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e9808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetDesktopWindow();
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e980e  USER32.DLL::GetDlgCtrlID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDlgCtrlID
int __stdcall import_GetDlgCtrlID(HWND hWnd)

{
  int ctrlId;
  
                    /* WARNING: Could not recover jumptable at 0x004e980e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ctrlId = GetDlgCtrlID(hWnd);
  return ctrlId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9814  USER32.DLL::GetDlgItem   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetDlgItem
HWND __stdcall import_GetDlgItem(HWND hDlg,int nIDDlgItem)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e9814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetDlgItem(hDlg,nIDDlgItem);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e981a  USER32.DLL::GetFocus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetFocus
HWND __stdcall import_GetFocus(void)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e981a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = GetFocus();
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9820  USER32.DLL::GetIconInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetIconInfo
BOOL __stdcall import_GetIconInfo(HICON hIcon,PICONINFO piconinfo)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetIconInfo(hIcon,piconinfo);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9826  USER32.DLL::GetKeyState   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetKeyState
SHORT __stdcall import_GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e982c  USER32.DLL::GetMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenu
HMENU __stdcall import_GetMenu(HWND hWnd)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004e982c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = GetMenu(hWnd);
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9832  USER32.DLL::GetMenuItemCount   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuItemCount
int __stdcall import_GetMenuItemCount(HMENU hMenu)

{
  int itemCount;
  
                    /* WARNING: Could not recover jumptable at 0x004e9832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  itemCount = GetMenuItemCount(hMenu);
  return itemCount;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9838  USER32.DLL::GetMenuItemID   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuItemID
UINT __stdcall import_GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT itemId;
  
                    /* WARNING: Could not recover jumptable at 0x004e9838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  itemId = GetMenuItemID(hMenu,nPos);
  return itemId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e983e  USER32.DLL::GetMenuState   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMenuState
UINT __stdcall import_GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT menuState;
  
                    /* WARNING: Could not recover jumptable at 0x004e983e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  menuState = GetMenuState(hMenu,uId,uFlags);
  return menuState;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9844  USER32.DLL::GetMonitorInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetMonitorInfoA
BOOL __stdcall import_GetMonitorInfoA(HMONITOR hMonitor,LPMONITORINFO lpmi)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetMonitorInfoA(hMonitor,lpmi);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e984a  USER32.DLL::GetParent   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetParent
HWND __stdcall import_GetParent(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004e984a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = GetParent(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9850  USER32.DLL::GetScrollInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetScrollInfo
BOOL __stdcall import_GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetScrollInfo(hwnd,nBar,lpsi);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9856  USER32.DLL::GetSubMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSubMenu
HMENU __stdcall import_GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU hMenu2;
  
                    /* WARNING: Could not recover jumptable at 0x004e9856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu2 = GetSubMenu(hMenu,nPos);
  return hMenu2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e985c  USER32.DLL::GetSysColor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSysColor
DWORD __stdcall import_GetSysColor(int nIndex)

{
  DWORD sysColor;
  
                    /* WARNING: Could not recover jumptable at 0x004e985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sysColor = GetSysColor(nIndex);
  return sysColor;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9862  USER32.DLL::GetSysColorBrush   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSysColorBrush
HBRUSH __stdcall import_GetSysColorBrush(int nIndex)

{
  HBRUSH hBrush;
  
                    /* WARNING: Could not recover jumptable at 0x004e9862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hBrush = GetSysColorBrush(nIndex);
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9868  USER32.DLL::GetSystemMetrics   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSystemMetrics
int __stdcall import_GetSystemMetrics(int nIndex)

{
  int metric;
  
                    /* WARNING: Could not recover jumptable at 0x004e9868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  metric = GetSystemMetrics(nIndex);
  return metric;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e986e  USER32.DLL::GetTopWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetTopWindow
HWND __stdcall import_GetTopWindow(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004e986e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = GetTopWindow(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9874  USER32.DLL::GetWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindow
HWND __stdcall import_GetWindow(HWND hWnd,UINT uCmd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004e9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = GetWindow(hWnd,uCmd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e987a  USER32.DLL::GetWindowDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowDC
HDC __stdcall import_GetWindowDC(HWND hWnd)

{
  HDC hdc;
  
                    /* WARNING: Could not recover jumptable at 0x004e987a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hdc = GetWindowDC(hWnd);
  return hdc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9880  USER32.DLL::GetWindowLongA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowLongA
LONG __stdcall import_GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG windowLong;
  
                    /* WARNING: Could not recover jumptable at 0x004e9880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  windowLong = GetWindowLongA(hWnd,nIndex);
  return windowLong;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9886  USER32.DLL::GetWindowPlacement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowPlacement
BOOL __stdcall import_GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetWindowPlacement(hWnd,lpwndpl);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e988c  USER32.DLL::GetWindowRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowRect
BOOL __stdcall import_GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e988c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GetWindowRect(hWnd,lpRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9892  USER32.DLL::GetWindowTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowTextA
int __stdcall import_GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int textLen;
  
                    /* WARNING: Could not recover jumptable at 0x004e9892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  textLen = GetWindowTextA(hWnd,lpString,nMaxCount);
  return textLen;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9898  USER32.DLL::GetWindowTextLengthA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowTextLengthA
int __stdcall import_GetWindowTextLengthA(HWND hWnd)

{
  int textLen;
  
                    /* WARNING: Could not recover jumptable at 0x004e9898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  textLen = GetWindowTextLengthA(hWnd);
  return textLen;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e989e  USER32.DLL::GetWindowThreadProcessId   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetWindowThreadProcessId
DWORD __stdcall import_GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e989e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98a4  USER32.DLL::GrayStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GrayStringA
BOOL __stdcall import_GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y, int nWidth,int nHeight)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = GrayStringA(hDC,hBrush,lpOutputFunc,lpData,nCount,X,Y,nWidth,nHeight);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98aa  USER32.DLL::HideCaret   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::HideCaret
BOOL __stdcall import_HideCaret(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = HideCaret(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98b0  USER32.DLL::InsertMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InsertMenuA
BOOL __stdcall import_InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = InsertMenuA(hMenu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98b6  USER32.DLL::InsertMenuItemA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InsertMenuItemA
BOOL __stdcall import_InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = InsertMenuItemA(hmenu,item,fByPosition,lpmi);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98bc  USER32.DLL::InvalidateRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::InvalidateRect
BOOL __stdcall import_InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = InvalidateRect(hWnd,lpRect,bErase);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98c2  USER32.DLL::IsCharUpperA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsCharUpperA
BOOL __stdcall import_IsCharUpperA(CHAR ch)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsCharUpperA(ch);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98c8  USER32.DLL::IsChild   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsChild
BOOL __stdcall import_IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsChild(hWndParent,hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98ce  USER32.DLL::IsClipboardFormatAvailable   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsClipboardFormatAvailable
BOOL __stdcall import_IsClipboardFormatAvailable(UINT format)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsClipboardFormatAvailable(format);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98d4  USER32.DLL::IsDialogMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsDialogMessageA
BOOL __stdcall import_IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsDialogMessageA(hDlg,lpMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98da  USER32.DLL::IsIconic   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsIconic
BOOL __stdcall import_IsIconic(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsIconic(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98e0  USER32.DLL::IsMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsMenu
BOOL __stdcall import_IsMenu(HMENU hMenu)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsMenu(hMenu);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98e6  USER32.DLL::IsWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindow
BOOL __stdcall import_IsWindow(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsWindow(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98ec  USER32.DLL::IsWindowEnabled   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindowEnabled
BOOL __stdcall import_IsWindowEnabled(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsWindowEnabled(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98f2  USER32.DLL::IsWindowVisible   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsWindowVisible
BOOL __stdcall import_IsWindowVisible(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsWindowVisible(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98f8  USER32.DLL::IsZoomed   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::IsZoomed
BOOL __stdcall import_IsZoomed(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = IsZoomed(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e98fe  USER32.DLL::KillTimer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::KillTimer
BOOL __stdcall import_KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e98fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = KillTimer(hWnd,uIDEvent);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9904  USER32.DLL::LoadAcceleratorsA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadAcceleratorsA
HACCEL __stdcall import_LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName)

{
  HACCEL hAccel;
  
                    /* WARNING: Could not recover jumptable at 0x004e9904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hAccel = LoadAcceleratorsA(hInstance,lpTableName);
  return hAccel;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e990a  USER32.DLL::LoadCursorA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadCursorA
HCURSOR __stdcall import_LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR hCursor;
  
                    /* WARNING: Could not recover jumptable at 0x004e990a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hCursor = LoadCursorA(hInstance,lpCursorName);
  return hCursor;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9910  USER32.DLL::LoadIconA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadIconA
HICON __stdcall import_LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON hIcon;
  
                    /* WARNING: Could not recover jumptable at 0x004e9910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hIcon = LoadIconA(hInstance,lpIconName);
  return hIcon;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9916  USER32.DLL::LoadImageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadImageA
HANDLE __stdcall import_LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadImageA(hInst,name,type,cx,cy,fuLoad);
  return pvVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e991c  USER32.DLL::LoadMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadMenuA
HMENU __stdcall import_LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004e991c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = LoadMenuA(hInstance,lpMenuName);
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9922  USER32.DLL::LoadStringA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::LoadStringA
int __stdcall import_LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9928  USER32.DLL::MapDialogRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MapDialogRect
BOOL __stdcall import_MapDialogRect(HWND hDlg,LPRECT lpRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = MapDialogRect(hDlg,lpRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e992e  USER32.DLL::MapWindowPoints   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MapWindowPoints
int __stdcall import_MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e992e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MapWindowPoints(hWndFrom,hWndTo,lpPoints,cPoints);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9934  USER32.DLL::MessageBeep   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBeep
BOOL __stdcall import_MessageBeep(UINT uType)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = MessageBeep(uType);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e993a  USER32.DLL::MessageBoxA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxA
int __stdcall import_MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int choice;
  
                    /* WARNING: Could not recover jumptable at 0x004e993a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  choice = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return choice;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9940  USER32.DLL::MessageBoxExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MessageBoxExA
int __stdcall import_MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxExA(hWnd,lpText,lpCaption,uType,wLanguageId);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9946  USER32.DLL::ModifyMenuA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ModifyMenuA
BOOL __stdcall import_ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ModifyMenuA(hMnu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e994c  USER32.DLL::MonitorFromRect   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MonitorFromRect
HMONITOR __stdcall import_MonitorFromRect(LPCRECT lprc,DWORD dwFlags)

{
  HMONITOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = MonitorFromRect(lprc,dwFlags);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9952  USER32.DLL::MsgWaitForMultipleObjects   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::MsgWaitForMultipleObjects
DWORD __stdcall import_MsgWaitForMultipleObjects(DWORD nCount,HANDLE *pHandles,BOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = MsgWaitForMultipleObjects(nCount,pHandles,fWaitAll,dwMilliseconds,dwWakeMask);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9958  USER32.DLL::OpenClipboard   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::OpenClipboard
BOOL __stdcall import_OpenClipboard(HWND hWndNewOwner)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = OpenClipboard(hWndNewOwner);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e995e  USER32.DLL::PeekMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PeekMessageA
BOOL __stdcall import_PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e995e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9964  USER32.DLL::PostMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PostMessageA
BOOL __stdcall import_PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = PostMessageA(hWnd,Msg,wParam,lParam);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e996a  USER32.DLL::PostQuitMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::PostQuitMessage
void __stdcall import_PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004e996a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9970  USER32.DLL::RedrawWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RedrawWindow
BOOL __stdcall import_RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9976  USER32.DLL::RegisterClassA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RegisterClassA
ATOM __stdcall import_RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM atom;
  
                    /* WARNING: Could not recover jumptable at 0x004e9976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  atom = RegisterClassA(lpWndClass);
  return atom;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e997c  USER32.DLL::RegisterWindowMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::RegisterWindowMessageA
UINT __stdcall import_RegisterWindowMessageA(LPCSTR lpString)

{
  UINT msgId;
  
                    /* WARNING: Could not recover jumptable at 0x004e997c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  msgId = RegisterWindowMessageA(lpString);
  return msgId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9982  USER32.DLL::ReleaseCapture   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ReleaseCapture
BOOL __stdcall import_ReleaseCapture(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ReleaseCapture();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9988  USER32.DLL::ReleaseDC   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ReleaseDC
int __stdcall import_ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e998e  USER32.DLL::ScreenToClient   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ScreenToClient
BOOL __stdcall import_ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScreenToClient(hWnd,lpPoint);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9994  USER32.DLL::ScrollWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ScrollWindow
BOOL __stdcall import_ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e999a  USER32.DLL::SendDlgItemMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SendDlgItemMessageA
LRESULT __stdcall import_SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004e999a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = SendDlgItemMessageA(hDlg,nIDDlgItem,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99a0  USER32.DLL::SendMessageA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SendMessageA
LRESULT __stdcall import_SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
                    /* WARNING: Could not recover jumptable at 0x004e99a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lResult = SendMessageA(hWnd,Msg,wParam,lParam);
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99a6  USER32.DLL::SetActiveWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetActiveWindow
HWND __stdcall import_SetActiveWindow(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004e99a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = SetActiveWindow(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99ac  USER32.DLL::SetCapture   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetCapture
HWND __stdcall import_SetCapture(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004e99ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = SetCapture(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99b2  USER32.DLL::SetClipboardData   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetClipboardData
HANDLE __stdcall import_SetClipboardData(UINT uFormat,HANDLE hMem)

{
  HANDLE hClipData;
  
                    /* WARNING: Could not recover jumptable at 0x004e99b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hClipData = SetClipboardData(uFormat,hMem);
  return hClipData;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99b8  USER32.DLL::SetCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetCursor
HCURSOR __stdcall import_SetCursor(HCURSOR hCursor)

{
  HCURSOR hCursor2;
  
                    /* WARNING: Could not recover jumptable at 0x004e99b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hCursor2 = SetCursor(hCursor);
  return hCursor2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99be  USER32.DLL::SetFocus   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetFocus
HWND __stdcall import_SetFocus(HWND hWnd)

{
  HWND hWnd2;
  
                    /* WARNING: Could not recover jumptable at 0x004e99be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd2 = SetFocus(hWnd);
  return hWnd2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99c4  USER32.DLL::SetMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetMenu
BOOL __stdcall import_SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e99c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetMenu(hWnd,hMenu);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99ca  USER32.DLL::SetMenuItemInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetMenuItemInfoA
BOOL __stdcall import_SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e99ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetMenuItemInfoA(hmenu,item,fByPositon,lpmii);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99d0  USER32.DLL::SetParent   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetParent
HWND __stdcall import_SetParent(HWND hWndChild,HWND hWndNewParent)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e99d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = SetParent(hWndChild,hWndNewParent);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99d6  USER32.DLL::SetScrollInfo   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetScrollInfo
int __stdcall import_SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollInfo(hwnd,nBar,lpsi,redraw);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99dc  USER32.DLL::SetTimer   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetTimer
UINT_PTR __stdcall import_SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR timerId;
  
                    /* WARNING: Could not recover jumptable at 0x004e99dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  timerId = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return timerId;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99e2  USER32.DLL::SetWindowLongA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowLongA
LONG __stdcall import_SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG prevWindowLong;
  
                    /* WARNING: Could not recover jumptable at 0x004e99e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  prevWindowLong = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return prevWindowLong;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99e8  USER32.DLL::SetWindowPlacement   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowPlacement
BOOL __stdcall import_SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e99e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowPlacement(hWnd,lpwndpl);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99ee  USER32.DLL::SetWindowPos   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowPos
BOOL __stdcall import_SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e99ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99f4  USER32.DLL::SetWindowTextA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowTextA
BOOL __stdcall import_SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e99f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SetWindowTextA(hWnd,lpString);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e99fa  USER32.DLL::SetWindowsHookExA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SetWindowsHookExA
HHOOK __stdcall import_SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a00  USER32.DLL::ShowCaret   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowCaret
BOOL __stdcall import_ShowCaret(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ShowCaret(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a06  USER32.DLL::ShowCursor   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowCursor
int __stdcall import_ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a0c  USER32.DLL::ShowScrollBar   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowScrollBar
BOOL __stdcall import_ShowScrollBar(HWND hWnd,int wBar,BOOL bShow)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ShowScrollBar(hWnd,wBar,bShow);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a12  USER32.DLL::ShowWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::ShowWindow
BOOL __stdcall import_ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = ShowWindow(hWnd,nCmdShow);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a18  USER32.DLL::SystemParametersInfoA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::SystemParametersInfoA
BOOL __stdcall import_SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a1e  USER32.DLL::TabbedTextOutA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TabbedTextOutA
LONG __stdcall import_TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions, INT *lpnTabStopPositions,int nTabOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = TabbedTextOutA(hdc,x,y,lpString,chCount,nTabPositions,lpnTabStopPositions,nTabOrigin);
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a24  USER32.DLL::TrackPopupMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TrackPopupMenu
BOOL __stdcall import_TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a2a  USER32.DLL::TranslateAcceleratorA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateAcceleratorA
int __stdcall import_TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg)

{
  int translated;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  translated = TranslateAcceleratorA(hWnd,hAccTable,lpMsg);
  return translated;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a30  USER32.DLL::TranslateMDISysAccel   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateMDISysAccel
BOOL __stdcall import_TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TranslateMDISysAccel(hWndClient,lpMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a36  USER32.DLL::TranslateMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::TranslateMessage
BOOL __stdcall import_TranslateMessage(MSG *lpMsg)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = TranslateMessage(lpMsg);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a3c  USER32.DLL::UnhookWindowsHookEx   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UnhookWindowsHookEx
BOOL __stdcall import_UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UnhookWindowsHookEx(hhk);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a42  USER32.DLL::UnregisterClassA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UnregisterClassA
BOOL __stdcall import_UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UnregisterClassA(lpClassName,hInstance);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a48  USER32.DLL::UpdateWindow   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::UpdateWindow
BOOL __stdcall import_UpdateWindow(HWND hWnd)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = UpdateWindow(hWnd);
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a4e  USER32.DLL::WaitMessage   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::WaitMessage
BOOL __stdcall import_WaitMessage(void)

{
  BOOL ok;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ok = WaitMessage();
  return ok;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a54  USER32.DLL::WindowFromPoint   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::WindowFromPoint
HWND __stdcall import_WindowFromPoint(POINT Point)

{
  HWND hWnd;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hWnd = WindowFromPoint(Point);
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a5a  USER32.DLL::wsprintfA   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::wsprintfA
int __cdecl import_wsprintfA(LPSTR param_1,LPCSTR param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wsprintfA(param_1,param_2);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e9a60  USER32.DLL::GetSystemMenu   (6 bytes)   [unnamed]
//   import stub: a jump through the import table to USER32.DLL::GetSystemMenu
HMENU __stdcall import_GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU hMenu;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  hMenu = GetSystemMenu(hWnd,bRevert);
  return hMenu;
}

} // namespace tea

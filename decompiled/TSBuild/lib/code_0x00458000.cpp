// TSBuild.exe — runtime / library code "code_0x00458000"
// 184 functions, 0x0045800c..0x0045bfec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045800c  FUN_0045800c   (302 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045800c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 in_stack_ffffff90;
  undefined1 *puVar8;
  undefined4 *local_54 [4];
  undefined4 local_44 [4];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14 [4];
  
  FUN_00457fec((int)local_14,param_2);
  FUN_00457f7c((int)local_24,param_2);
  bVar1 = FUN_0045813c((int)&GHIDRA_STACK(0x0000000c),(int)local_24);
  if (bVar1) {
    FUN_00457fec((int)local_34,param_2);
    bVar1 = FUN_0045813c((int)&GHIDRA_STACK(0x0000001c),(int)local_34);
    if ((bVar1) && (*(int *)(param_2 + 0x28) != 0)) {
      piVar2 = (int *)FUN_00458158(param_2);
      FUN_00458178(param_2,*piVar2);
      puVar3 = (undefined4 *)FUN_004581ec(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      puVar3 = (undefined4 *)FUN_00458158(param_2);
      uVar4 = FUN_00458200();
      *puVar3 = uVar4;
      puVar3 = (undefined4 *)FUN_00458204(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_00457fec((int)local_44,param_2);
      puVar3 = local_44;
      puVar7 = local_14;
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00458120;
    }
  }
  while( true ) {
    puVar8 = &GHIDRA_STACK(0x0000000c);
    uVar4 = 0x458119;
    bVar1 = FUN_00458218((int)puVar8,(int)&GHIDRA_STACK(0x0000001c));
    if (!bVar1) break;
    FUN_00458234((undefined4 *)&GHIDRA_STACK(0xffffff90),(undefined4 *)&GHIDRA_STACK(0x0000000c));
    FUN_00458308((undefined4*)local_54,param_2,in_stack_ffffff90,uVar4,puVar8);
    local_54[1] = param_1;
    ppuVar6 = local_54;
    puVar3 = local_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *ppuVar6;
      ppuVar6 = ppuVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  }
LAB_00458120:
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045813c  FUN_0045813c   (25 bytes)   [unnamed]
bool __cdecl FUN_0045813c(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458158  FUN_00458158   (18 bytes)   [unnamed]
int __cdecl FUN_00458158(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045816c(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045816c  FUN_0045816c   (11 bytes)   [unnamed]
int __cdecl FUN_0045816c(int param_1)

{
  return param_1 + 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458178  FUN_00458178   (78 bytes)   [unnamed]
void __cdecl FUN_00458178(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  while( true ) {
    bVar2 = FUN_004581c8(&param_2);
    if (bVar2) break;
    piVar3 = (int *)FUN_004581e0(param_2);
    FUN_00458178(param_1,*piVar3);
    piVar3 = (int *)FUN_00457fb4(param_2);
    iVar1 = *piVar3;
    FUN_00458ec0(param_1,param_2,'\x01');
    param_2 = iVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004581c8  FUN_004581c8   (21 bytes)   [unnamed]
bool __cdecl FUN_004581c8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00458200();
  return iVar1 == *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004581e0  FUN_004581e0   (11 bytes)   [unnamed]
int __cdecl FUN_004581e0(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004581ec  FUN_004581ec   (18 bytes)   [unnamed]
int __cdecl FUN_004581ec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00457fb4(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458200  FUN_00458200   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_00458200(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458204  FUN_00458204   (18 bytes)   [unnamed]
int __cdecl FUN_00458204(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004581e0(*(int *)(param_1 + 0x24));
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458218  FUN_00458218   (25 bytes)   [unnamed]
bool __cdecl FUN_00458218(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) != *(int *)(param_2 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458234  FUN_00458234   (63 bytes)   [unnamed]
undefined4 * __cdecl FUN_00458234(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_00458274((int)param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458274  FUN_00458274   (147 bytes)   [unnamed]
int __cdecl FUN_00458274(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004581e0(*(int *)(param_1 + 8));
  bVar1 = FUN_004581c8(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_0045816c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004581e0(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_0045816c(iVar4);
      iVar4 = *piVar2;
    }
    piVar2 = (int *)FUN_004581e0(*(int *)(param_1 + 8));
    if (iVar4 != *piVar2) {
      *(int *)(param_1 + 8) = iVar4;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_004581e0(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = *puVar3;
    while( true ) {
      piVar2 = (int *)FUN_00457fb4(*(int *)(param_1 + 8));
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) break;
      puVar3 = (undefined4 *)FUN_00457fb4(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458308  FUN_00458308   (9 bytes)   [unnamed]
undefined4 * __stdcall FUN_00458308(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5)

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
  FUN_00457fec((int)local_38,param_2);
  bVar1 = FUN_00458218((int)&uStack_28,(int)local_38);
  if (bVar1) {
    FUN_00458234(auStack_48,&uStack_28);
  }
  FUN_00458c10(&iStack_8,param_5);
  iVar6 = iStack_8;
  cStack_d = '\0';
  piVar2 = (int *)FUN_00457fb4(iStack_8);
  bVar1 = FUN_004581c8(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004581e0(iVar6);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_0045816c(iVar6);
      iStack_c = *piVar2;
      FUN_00458c20(param_2,iVar6);
      cStack_d = '\x01';
    }
    else {
      piVar2 = (int *)FUN_004581e0(iVar6);
      iStack_c = *piVar2;
    }
  }
  else {
    piVar2 = (int *)FUN_004581e0(iVar6);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_00457fb4(iVar6);
      iStack_c = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_004581e0(iVar6);
      iVar6 = *piVar2;
      while( true ) {
        piVar2 = (int *)FUN_00457fb4(iVar6);
        bVar1 = FUN_004581c8(piVar2);
        if (bVar1) break;
        piVar2 = (int *)FUN_00457fb4(iVar6);
        iVar6 = *piVar2;
      }
      piVar2 = (int *)FUN_004581e0(iVar6);
      iStack_c = *piVar2;
    }
  }
  if ((cStack_d == '\0') && (iVar6 != iStack_8)) {
    piVar2 = (int *)FUN_00457fb4(iStack_8);
    piVar2 = (int *)FUN_0045816c(*piVar2);
    *piVar2 = iVar6;
    puVar3 = (undefined4 *)FUN_00457fb4(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_00457fb4(iVar6);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_004581e0(iStack_8);
    if (iVar6 == *piVar2) {
      bVar1 = FUN_004581c8(&iStack_c);
      if (!bVar1) {
        piVar2 = (int *)FUN_0045816c(iStack_c);
        *piVar2 = iVar6;
      }
    }
    else {
      bVar1 = FUN_004581c8(&iStack_c);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_0045816c(iVar6);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
        *puVar3 = uVar7;
      }
      piVar2 = (int *)FUN_0045816c(iVar6);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      *piVar2 = iStack_c;
      puVar3 = (undefined4 *)FUN_004581e0(iStack_8);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_004581e0(iVar6);
      *puVar3 = uVar7;
      piVar2 = (int *)FUN_004581e0(iStack_8);
      piVar2 = (int *)FUN_0045816c(*piVar2);
      *piVar2 = iVar6;
    }
    piVar2 = (int *)FUN_00458158(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_00458158(param_2);
      *piVar2 = iVar6;
    }
    else {
      piVar2 = (int *)FUN_0045816c(iStack_8);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_00457fb4(*piVar2);
        *piVar2 = iVar6;
      }
      else {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_004581e0(*piVar2);
        *piVar2 = iVar6;
      }
    }
    puVar3 = (undefined4 *)FUN_0045816c(iStack_8);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_0045816c(iVar6);
    *puVar3 = uVar7;
    bVar1 = FUN_004581c8(&iStack_c);
    if (bVar1) {
      iStack_c = iVar6;
    }
    puVar3 = (undefined4 *)FUN_00458cb8(iStack_8);
    puVar4 = (undefined4 *)FUN_00458cb8(iVar6);
    FUN_00458cc0(puVar4,puVar3);
    iVar6 = iStack_8;
  }
  else if (cStack_d == '\0') {
    puVar3 = (undefined4 *)FUN_0045816c(iVar6);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
    *puVar3 = uVar7;
    piVar2 = (int *)FUN_00458158(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_00458158(param_2);
      *piVar2 = iStack_c;
    }
    else {
      piVar2 = (int *)FUN_0045816c(iStack_8);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      if (*piVar2 == iStack_8) {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_00457fb4(*piVar2);
        *piVar2 = iStack_c;
      }
      else {
        piVar2 = (int *)FUN_0045816c(iStack_8);
        piVar2 = (int *)FUN_004581e0(*piVar2);
        *piVar2 = iStack_c;
      }
    }
    piVar2 = (int *)FUN_004581ec(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_004581e0(iStack_8);
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_0045816c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_004581ec(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_00458cd8(iStack_c);
        piVar2 = (int *)FUN_004581ec(param_2);
        *piVar2 = iVar5;
      }
    }
    piVar2 = (int *)FUN_00458204(param_2);
    if (*piVar2 == iStack_8) {
      piVar2 = (int *)FUN_00457fb4(iStack_8);
      bVar1 = FUN_004581c8(piVar2);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_0045816c(iStack_8);
        uVar7 = *puVar3;
        puVar3 = (undefined4 *)FUN_00458204(param_2);
        *puVar3 = uVar7;
      }
      else {
        iVar5 = FUN_00458d04(iStack_c);
        piVar2 = (int *)FUN_00458204(param_2);
        *piVar2 = iVar5;
      }
    }
  }
  if ((iStack_c != *(int *)(param_2 + 0x24)) && (piVar2 = (int *)FUN_00458cb8(iVar6), *piVar2 != 0))
  {
LAB_00458baf:
    while( true ) {
      piVar2 = (int *)FUN_00458158(param_2);
      if ((*piVar2 == iStack_c) || (piVar2 = (int *)FUN_00458cb8(iStack_c), *piVar2 != 1))
      goto LAB_00458bce;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      if (*piVar2 == iStack_c) break;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_00457fb4(*piVar2);
      iStack_18 = *piVar2;
      bVar1 = FUN_004581c8(&iStack_18);
      if (bVar1) {
        puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
        *puVar3 = 0;
        piVar2 = (int *)FUN_0045816c(iStack_c);
        iStack_c = *piVar2;
      }
      else {
        piVar2 = (int *)FUN_00458cb8(iStack_18);
        if (*piVar2 == 0) {
          puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
          *puVar3 = 1;
          puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
          puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
          *puVar3 = 0;
          piVar2 = (int *)FUN_0045816c(iStack_c);
          FUN_00458df8(param_2,*piVar2);
          piVar2 = (int *)FUN_0045816c(iStack_c);
          piVar2 = (int *)FUN_00457fb4(*piVar2);
          iStack_18 = *piVar2;
        }
        bVar1 = FUN_004581c8(&iStack_18);
        if (bVar1) {
          puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
          *puVar3 = 0;
          piVar2 = (int *)FUN_0045816c(iStack_c);
          iStack_c = *piVar2;
        }
        else {
          piVar2 = (int *)FUN_004581e0(iStack_18);
          bVar1 = FUN_004581c8(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_004581e0(iStack_18);
            piVar2 = (int *)FUN_00458cb8(*puVar3);
            if (*piVar2 == 1) goto LAB_00458a45;
LAB_00458a92:
            piVar2 = (int *)FUN_00457fb4(iStack_18);
            bVar1 = FUN_004581c8(piVar2);
            if (bVar1) {
LAB_00458abf:
              piVar2 = (int *)FUN_004581e0(iStack_18);
              bVar1 = FUN_004581c8(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_004581e0(iStack_18);
                puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
                *puVar3 = 1;
              }
              puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
              *puVar3 = 0;
              FUN_00458d30(param_2,iStack_18);
              piVar2 = (int *)FUN_0045816c(iStack_c);
              piVar2 = (int *)FUN_00457fb4(*piVar2);
              iStack_18 = *piVar2;
            }
            else {
              puVar3 = (undefined4 *)FUN_00457fb4(iStack_18);
              piVar2 = (int *)FUN_00458cb8(*puVar3);
              if (*piVar2 == 1) goto LAB_00458abf;
            }
            bVar1 = FUN_004581c8(&iStack_18);
            if (!bVar1) {
              puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
              puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
              uVar7 = *puVar3;
              puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
              *puVar3 = uVar7;
              puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
              puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
              *puVar3 = 1;
              piVar2 = (int *)FUN_00457fb4(iStack_18);
              bVar1 = FUN_004581c8(piVar2);
              if (!bVar1) {
                puVar3 = (undefined4 *)FUN_00457fb4(iStack_18);
                puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
                *puVar3 = 1;
              }
              piVar2 = (int *)FUN_0045816c(iStack_c);
              FUN_00458df8(param_2,*piVar2);
            }
            goto LAB_00458bce;
          }
LAB_00458a45:
          piVar2 = (int *)FUN_00457fb4(iStack_18);
          bVar1 = FUN_004581c8(piVar2);
          if (!bVar1) {
            puVar3 = (undefined4 *)FUN_00457fb4(iStack_18);
            piVar2 = (int *)FUN_00458cb8(*puVar3);
            if (*piVar2 != 1) goto LAB_00458a92;
          }
          puVar3 = (undefined4 *)FUN_00458cb8(iStack_18);
          *puVar3 = 0;
          piVar2 = (int *)FUN_0045816c(iStack_c);
          iStack_c = *piVar2;
        }
      }
    }
    piVar2 = (int *)FUN_0045816c(iStack_c);
    piVar2 = (int *)FUN_004581e0(*piVar2);
    iStack_14 = *piVar2;
    bVar1 = FUN_004581c8(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_00458baf;
    }
    piVar2 = (int *)FUN_00458cb8(iStack_14);
    if (*piVar2 == 0) {
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = 1;
      puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
      puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      FUN_00458d30(param_2,*piVar2);
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_004581e0(*piVar2);
      iStack_14 = *piVar2;
    }
    bVar1 = FUN_004581c8(&iStack_14);
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_00458baf;
    }
    piVar2 = (int *)FUN_00457fb4(iStack_14);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
LAB_004587d4:
      piVar2 = (int *)FUN_004581e0(iStack_14);
      bVar1 = FUN_004581c8(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004581e0(iStack_14);
        piVar2 = (int *)FUN_00458cb8(*puVar3);
        if (*piVar2 != 1) goto LAB_00458821;
      }
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = 0;
      piVar2 = (int *)FUN_0045816c(iStack_c);
      iStack_c = *piVar2;
      goto LAB_00458baf;
    }
    puVar3 = (undefined4 *)FUN_00457fb4(iStack_14);
    piVar2 = (int *)FUN_00458cb8(*puVar3);
    if (*piVar2 == 1) goto LAB_004587d4;
LAB_00458821:
    piVar2 = (int *)FUN_004581e0(iStack_14);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) {
LAB_0045884e:
      piVar2 = (int *)FUN_00457fb4(iStack_14);
      bVar1 = FUN_004581c8(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_00457fb4(iStack_14);
        puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
        *puVar3 = 1;
      }
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = 0;
      FUN_00458df8(param_2,iStack_14);
      piVar2 = (int *)FUN_0045816c(iStack_c);
      piVar2 = (int *)FUN_004581e0(*piVar2);
      iStack_14 = *piVar2;
    }
    else {
      puVar3 = (undefined4 *)FUN_004581e0(iStack_14);
      piVar2 = (int *)FUN_00458cb8(*puVar3);
      if (*piVar2 == 1) goto LAB_0045884e;
    }
    bVar1 = FUN_004581c8(&iStack_14);
    if (!bVar1) {
      puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
      puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)FUN_00458cb8(iStack_14);
      *puVar3 = uVar7;
      puVar3 = (undefined4 *)FUN_0045816c(iStack_c);
      puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
      *puVar3 = 1;
      piVar2 = (int *)FUN_004581e0(iStack_14);
      bVar1 = FUN_004581c8(piVar2);
      if (!bVar1) {
        puVar3 = (undefined4 *)FUN_004581e0(iStack_14);
        puVar3 = (undefined4 *)FUN_00458cb8(*puVar3);
        *puVar3 = 1;
      }
      piVar2 = (int *)FUN_0045816c(iStack_c);
      FUN_00458d30(param_2,*piVar2);
    }
LAB_00458bce:
    puVar3 = (undefined4 *)FUN_00458cb8(iStack_c);
    *puVar3 = 1;
  }
  FUN_00458ec0(param_2,iVar6,'\x01');
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458311  FUN_00458311   (2295 bytes, 2 ranges)   [unnamed]
undefined4 __stdcall FUN_00458311(void)

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
  FUN_00457fec(in_ECX,iVar2);
  bVar3 = FUN_00458218(unaff_EBP + -0x24,unaff_EBP + -0x34);
  if (bVar3) {
    FUN_00458234((undefined4 *)(unaff_EBP + -0x44),(undefined4 *)(unaff_EBP + -0x24));
  }
  FUN_00458c10((undefined4 *)(unaff_EBP + -4),*(undefined4 *)(unaff_EBP + 0x18));
  iVar8 = *(int *)(unaff_EBP + -4);
  *(undefined1 *)(unaff_EBP + -9) = 0;
  piVar4 = (int *)FUN_00457fb4(iVar8);
  bVar3 = FUN_004581c8(piVar4);
  if (bVar3) {
    piVar4 = (int *)FUN_004581e0(iVar8);
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_0045816c(iVar8);
      *piVar1 = *piVar4;
      FUN_00458c20(iVar2,iVar8);
      *(undefined1 *)(unaff_EBP + -9) = 1;
    }
    else {
      piVar4 = (int *)FUN_004581e0(iVar8);
      *piVar1 = *piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_004581e0(iVar8);
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
      piVar4 = (int *)FUN_00457fb4(iVar8);
      *piVar1 = *piVar4;
    }
    else {
      piVar4 = (int *)FUN_004581e0(iVar8);
      iVar8 = *piVar4;
      while( true ) {
        piVar4 = (int *)FUN_00457fb4(iVar8);
        bVar3 = FUN_004581c8(piVar4);
        if (bVar3) break;
        piVar4 = (int *)FUN_00457fb4(iVar8);
        iVar8 = *piVar4;
      }
      piVar4 = (int *)FUN_004581e0(iVar8);
      *piVar1 = *piVar4;
    }
  }
  if ((*(char *)(unaff_EBP + -9) == '\0') && (iVar8 != *(int *)(unaff_EBP + -4))) {
    piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
    piVar4 = (int *)FUN_0045816c(*piVar4);
    *piVar4 = iVar8;
    puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_00457fb4(iVar8);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -4));
    if (iVar8 == *piVar4) {
      bVar3 = FUN_004581c8(piVar1);
      if (!bVar3) {
        piVar4 = (int *)FUN_0045816c(*piVar1);
        *piVar4 = iVar8;
      }
    }
    else {
      bVar3 = FUN_004581c8(piVar1);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_0045816c(iVar8);
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
        *puVar5 = uVar9;
      }
      piVar4 = (int *)FUN_0045816c(iVar8);
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      *piVar4 = *piVar1;
      puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_004581e0(iVar8);
      *puVar5 = uVar9;
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_0045816c(*piVar4);
      *piVar4 = iVar8;
    }
    piVar4 = (int *)FUN_00458158(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_00458158(iVar2);
      *piVar4 = iVar8;
    }
    else {
      piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_00457fb4(*piVar4);
        *piVar4 = iVar8;
      }
      else {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004581e0(*piVar4);
        *piVar4 = iVar8;
      }
    }
    puVar5 = (undefined4 *)FUN_0045816c(*(int *)(unaff_EBP + -4));
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_0045816c(iVar8);
    *puVar5 = uVar9;
    bVar3 = FUN_004581c8(piVar1);
    if (bVar3) {
      *piVar1 = iVar8;
    }
    puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -4));
    puVar6 = (undefined4 *)FUN_00458cb8(iVar8);
    FUN_00458cc0(puVar6,puVar5);
    iVar8 = *(int *)(unaff_EBP + -4);
  }
  else if (*(char *)(unaff_EBP + -9) == '\0') {
    puVar5 = (undefined4 *)FUN_0045816c(iVar8);
    uVar9 = *puVar5;
    puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
    *puVar5 = uVar9;
    piVar4 = (int *)FUN_00458158(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_00458158(iVar2);
      *piVar4 = *piVar1;
    }
    else {
      piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      if (*piVar4 == *(int *)(unaff_EBP + -4)) {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_00457fb4(*piVar4);
        *piVar4 = *piVar1;
      }
      else {
        piVar4 = (int *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        piVar4 = (int *)FUN_004581e0(*piVar4);
        *piVar4 = *piVar1;
      }
    }
    piVar4 = (int *)FUN_004581ec(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004581c8(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_004581ec(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_00458cd8(*piVar1);
        piVar4 = (int *)FUN_004581ec(iVar2);
        *piVar4 = iVar7;
      }
    }
    piVar4 = (int *)FUN_00458204(iVar2);
    if (*piVar4 == *(int *)(unaff_EBP + -4)) {
      piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -4));
      bVar3 = FUN_004581c8(piVar4);
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_0045816c(*(int *)(unaff_EBP + -4));
        uVar9 = *puVar5;
        puVar5 = (undefined4 *)FUN_00458204(iVar2);
        *puVar5 = uVar9;
      }
      else {
        iVar7 = FUN_00458d04(*piVar1);
        piVar4 = (int *)FUN_00458204(iVar2);
        *piVar4 = iVar7;
      }
    }
  }
  if ((*piVar1 != *(int *)(iVar2 + 0x24)) && (piVar4 = (int *)FUN_00458cb8(iVar8), *piVar4 != 0)) {
LAB_00458baf:
    while( true ) {
      piVar4 = (int *)FUN_00458158(iVar2);
      if ((*piVar4 == *piVar1) || (piVar4 = (int *)FUN_00458cb8(*piVar1), *piVar4 != 1))
      goto LAB_00458bce;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      piVar4 = (int *)FUN_00457fb4(*piVar4);
      if (*piVar4 == *piVar1) break;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00457fb4(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
      bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x14));
      if (bVar3) {
        puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
        *puVar5 = 0;
        piVar4 = (int *)FUN_0045816c(*piVar1);
        *piVar1 = *piVar4;
      }
      else {
        piVar4 = (int *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
        if (*piVar4 == 0) {
          puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 1;
          puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
          puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
          *puVar5 = 0;
          piVar4 = (int *)FUN_0045816c(*piVar1);
          FUN_00458df8(iVar2,*piVar4);
          piVar4 = (int *)FUN_0045816c(*piVar1);
          puVar5 = (undefined4 *)FUN_00457fb4(*piVar4);
          *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
        }
        bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x14));
        if (bVar3) {
          puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
          *puVar5 = 0;
          piVar4 = (int *)FUN_0045816c(*piVar1);
          *piVar1 = *piVar4;
        }
        else {
          piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004581c8(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_00458cb8(*puVar5);
            if (*piVar4 == 1) goto LAB_00458a45;
LAB_00458a92:
            piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
            bVar3 = FUN_004581c8(piVar4);
            if (bVar3) {
LAB_00458abf:
              piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004581c8(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
                *puVar5 = 1;
              }
              puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = 0;
              FUN_00458d30(iVar2,*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_0045816c(*piVar1);
              puVar5 = (undefined4 *)FUN_00457fb4(*piVar4);
              *(undefined4 *)(unaff_EBP + -0x14) = *puVar5;
            }
            else {
              puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
              piVar4 = (int *)FUN_00458cb8(*puVar5);
              if (*piVar4 == 1) goto LAB_00458abf;
            }
            bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x14));
            if (!bVar3) {
              puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
              puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
              uVar9 = *puVar5;
              puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
              *puVar5 = uVar9;
              puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
              puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
              *puVar5 = 1;
              piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
              bVar3 = FUN_004581c8(piVar4);
              if (!bVar3) {
                puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
                puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
                *puVar5 = 1;
              }
              piVar4 = (int *)FUN_0045816c(*piVar1);
              FUN_00458df8(iVar2,*piVar4);
            }
            goto LAB_00458bce;
          }
LAB_00458a45:
          piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
          bVar3 = FUN_004581c8(piVar4);
          if (!bVar3) {
            puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x14));
            piVar4 = (int *)FUN_00458cb8(*puVar5);
            if (*piVar4 != 1) goto LAB_00458a92;
          }
          puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x14));
          *puVar5 = 0;
          piVar4 = (int *)FUN_0045816c(*piVar1);
          *piVar1 = *piVar4;
        }
      }
    }
    piVar4 = (int *)FUN_0045816c(*piVar1);
    puVar5 = (undefined4 *)FUN_004581e0(*piVar4);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_00458baf;
    }
    piVar4 = (int *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
    if (*piVar4 == 0) {
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 1;
      puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      FUN_00458d30(iVar2,*piVar4);
      piVar4 = (int *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_004581e0(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x10));
    if (bVar3) {
      puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_00458baf;
    }
    piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
LAB_004587d4:
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004581c8(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
        piVar4 = (int *)FUN_00458cb8(*puVar5);
        if (*piVar4 != 1) goto LAB_00458821;
      }
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      piVar4 = (int *)FUN_0045816c(*piVar1);
      *piVar1 = *piVar4;
      goto LAB_00458baf;
    }
    puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
    piVar4 = (int *)FUN_00458cb8(*puVar5);
    if (*piVar4 == 1) goto LAB_004587d4;
LAB_00458821:
    piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
    bVar3 = FUN_004581c8(piVar4);
    if (bVar3) {
LAB_0045884e:
      piVar4 = (int *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004581c8(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_00457fb4(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 1;
      }
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = 0;
      FUN_00458df8(iVar2,*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_004581e0(*piVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
    }
    else {
      puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
      piVar4 = (int *)FUN_00458cb8(*puVar5);
      if (*piVar4 == 1) goto LAB_0045884e;
    }
    bVar3 = FUN_004581c8((int *)(unaff_EBP + -0x10));
    if (!bVar3) {
      puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      uVar9 = *puVar5;
      puVar5 = (undefined4 *)FUN_00458cb8(*(undefined4 *)(unaff_EBP + -0x10));
      *puVar5 = uVar9;
      puVar5 = (undefined4 *)FUN_0045816c(*piVar1);
      puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
      *puVar5 = 1;
      piVar4 = (int *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
      bVar3 = FUN_004581c8(piVar4);
      if (!bVar3) {
        puVar5 = (undefined4 *)FUN_004581e0(*(int *)(unaff_EBP + -0x10));
        puVar5 = (undefined4 *)FUN_00458cb8(*puVar5);
        *puVar5 = 1;
      }
      piVar4 = (int *)FUN_0045816c(*piVar1);
      FUN_00458d30(iVar2,*piVar4);
    }
LAB_00458bce:
    puVar5 = (undefined4 *)FUN_00458cb8(*piVar1);
    *puVar5 = 1;
  }
  FUN_00458ec0(iVar2,iVar8,'\x01');
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar5[1] = *(undefined4 *)(unaff_EBP + -0x20);
  *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8) = *(undefined4 *)(unaff_EBP + -0x1c);
  return *(undefined4 *)(unaff_EBP + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458c10  FUN_00458c10   (13 bytes)   [unnamed]
void __cdecl FUN_00458c10(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458c20  FUN_00458c20   (152 bytes)   [unnamed]
void __cdecl FUN_00458c20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_0045816c(param_2);
  iVar1 = *piVar2;
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    piVar2 = (int *)FUN_00458204(param_1);
    *piVar2 = iVar1;
    piVar2 = (int *)FUN_004581ec(param_1);
    *piVar2 = iVar1;
    puVar3 = (undefined4 *)FUN_00458158(param_1);
    uVar4 = FUN_00458200();
    *puVar3 = uVar4;
  }
  else {
    piVar2 = (int *)FUN_00457fb4(iVar1);
    if (param_2 == *piVar2) {
      puVar3 = (undefined4 *)FUN_00457fb4(iVar1);
      uVar4 = FUN_00458200();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_004581ec(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_004581ec(param_1);
        *piVar2 = iVar1;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_004581e0(iVar1);
      uVar4 = FUN_00458200();
      *puVar3 = uVar4;
      piVar2 = (int *)FUN_00458204(param_1);
      if (param_2 == *piVar2) {
        piVar2 = (int *)FUN_00458204(param_1);
        *piVar2 = iVar1;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458cb8  FUN_00458cb8   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_00458cb8(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458cc0  FUN_00458cc0   (21 bytes)   [unnamed]
void __cdecl FUN_00458cc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458cd8  FUN_00458cd8   (41 bytes)   [unnamed]
int __cdecl FUN_00458cd8(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_00457fb4(param_1);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) break;
    piVar2 = (int *)FUN_00457fb4(param_1);
    param_1 = *piVar2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458d04  FUN_00458d04   (41 bytes)   [unnamed]
int __cdecl FUN_00458d04(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  while( true ) {
    piVar2 = (int *)FUN_004581e0(param_1);
    bVar1 = FUN_004581c8(piVar2);
    if (bVar1) break;
    piVar2 = (int *)FUN_004581e0(param_1);
    param_1 = *piVar2;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458d30  FUN_00458d30   (198 bytes)   [unnamed]
void __cdecl FUN_00458d30(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_004581e0(param_2);
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_00457fb4(iVar1);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_004581e0(param_2);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_00457fb4(iVar1);
  bVar2 = FUN_004581c8(piVar3);
  if (!bVar2) {
    piVar3 = (int *)FUN_00457fb4(iVar1);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    *piVar3 = param_2;
  }
  puVar4 = (undefined4 *)FUN_0045816c(param_2);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_0045816c(iVar1);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_00458158(param_1);
  if (param_2 == *piVar3) {
    piVar3 = (int *)FUN_00458158(param_1);
    *piVar3 = iVar1;
  }
  else {
    piVar3 = (int *)FUN_0045816c(param_2);
    piVar3 = (int *)FUN_00457fb4(*piVar3);
    if (param_2 == *piVar3) {
      piVar3 = (int *)FUN_0045816c(param_2);
      piVar3 = (int *)FUN_00457fb4(*piVar3);
      *piVar3 = iVar1;
    }
    else {
      piVar3 = (int *)FUN_0045816c(param_2);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      *piVar3 = iVar1;
    }
  }
  piVar3 = (int *)FUN_00457fb4(iVar1);
  *piVar3 = param_2;
  piVar3 = (int *)FUN_0045816c(param_2);
  *piVar3 = iVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458df8  FUN_00458df8   (198 bytes)   [unnamed]
void __cdecl FUN_00458df8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)FUN_00457fb4(param_2);
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_004581e0(iVar1);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_00457fb4(param_2);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_004581e0(iVar1);
  bVar2 = FUN_004581c8(piVar3);
  if (!bVar2) {
    piVar3 = (int *)FUN_004581e0(iVar1);
    piVar3 = (int *)FUN_0045816c(*piVar3);
    *piVar3 = param_2;
  }
  puVar4 = (undefined4 *)FUN_0045816c(param_2);
  uVar5 = *puVar4;
  puVar4 = (undefined4 *)FUN_0045816c(iVar1);
  *puVar4 = uVar5;
  piVar3 = (int *)FUN_00458158(param_1);
  if (param_2 == *piVar3) {
    piVar3 = (int *)FUN_00458158(param_1);
    *piVar3 = iVar1;
  }
  else {
    piVar3 = (int *)FUN_0045816c(param_2);
    piVar3 = (int *)FUN_004581e0(*piVar3);
    if (param_2 == *piVar3) {
      piVar3 = (int *)FUN_0045816c(param_2);
      piVar3 = (int *)FUN_004581e0(*piVar3);
      *piVar3 = iVar1;
    }
    else {
      piVar3 = (int *)FUN_0045816c(param_2);
      piVar3 = (int *)FUN_00457fb4(*piVar3);
      *piVar3 = iVar1;
    }
  }
  piVar3 = (int *)FUN_004581e0(iVar1);
  *piVar3 = param_2;
  piVar3 = (int *)FUN_0045816c(param_2);
  *piVar3 = iVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458ec0  FUN_00458ec0   (84 bytes)   [unnamed]
void __cdecl FUN_00458ec0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined1 local_c [8];
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  if (param_3 != '\0') {
    FUN_00458f14(local_c);
    iVar1 = FUN_00458f3c(param_2);
    iVar1 = FUN_00458f48(local_c,iVar1);
    FUN_00458f50(local_c,iVar1);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f14  FUN_00458f14   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00458f14(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485b94);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f3c  FUN_00458f3c   (11 bytes)   [unnamed]
int __cdecl FUN_00458f3c(int param_1)

{
  return param_1 + 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f48  FUN_00458f48   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_00458f48(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f50  FUN_00458f50   (15 bytes)   [unnamed]
void __cdecl FUN_00458f50(undefined4 param_1,int param_2)

{
  FUN_00458f60(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f60  FUN_00458f60   (76 bytes)   [unnamed]
void __cdecl FUN_00458f60(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x485bac);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 8,2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458fdc  FUN_00458fdc   (152 bytes)   [unnamed]
void __cdecl FUN_00458fdc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_00459074(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00459080(param_1);
    iVar1 = FUN_00459094(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00459080(param_1);
      iVar1 = FUN_004590a0(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_00459080(param_1);
    FUN_00459154(local_c);
    FUN_0045917c();
    FUN_004591bc(param_1);
    FUN_00459080(param_1);
    FUN_00459194(local_14);
    FUN_004591d0();
    local_18 = 0;
    FUN_004591e0((int)local_28,param_1,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459074  FUN_00459074   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00459074(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00459080  FUN_00459080   (20 bytes)   [unnamed]
int __cdecl FUN_00459080(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00459074(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459094  FUN_00459094   (11 bytes)   [unnamed]
int __cdecl FUN_00459094(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004590a0  FUN_004590a0   (34 bytes)   [unnamed]
int __cdecl FUN_004590a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_004590c4();
  if (param_1 != piVar1) {
    iVar2 = FUN_00459134(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004590c4  FUN_004590c4   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_004590c4(void)

{
  return &DAT_00485bcc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004590cc  FUN_004590cc   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_004590cc(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485be0);
  FUN_00459100(param_1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459100  FUN_00459100   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_00459100(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485be8);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459134  FUN_00459134   (32 bytes)   [unnamed]
int __cdecl FUN_00459134(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004590c4();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459154  FUN_00459154   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00459154(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485bf0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045917c  FUN_0045917c   (15 bytes)   [unnamed]
void __stdcall FUN_0045917c(void)

{
  FUN_0045918c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045918c  FUN_0045918c   (5 bytes)   [unnamed]
void __stdcall FUN_0045918c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459194  FUN_00459194   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00459194(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485bf8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004591bc  FUN_004591bc   (20 bytes)   [unnamed]
undefined4 __cdecl FUN_004591bc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00459080(param_1);
  return *(undefined4 *)(iVar1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004591d0  FUN_004591d0   (15 bytes)   [unnamed]
void __stdcall FUN_004591d0(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004591e0  FUN_004591e0   (35 bytes)   [unnamed]
int __cdecl FUN_004591e0(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_00459204(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459204  FUN_00459204   (52 bytes)   [unnamed]
int __cdecl FUN_00459204(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c00);
  FUN_00459238(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459238  FUN_00459238   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00459238(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c08);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459260  FUN_00459260   (120 bytes)   [unnamed]
void __cdecl FUN_00459260(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_24 [16];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  while( true ) {
    iVar1 = param_1 + 8;
    iVar3 = FUN_004592d8(iVar1);
    if (iVar3 == 0) break;
    FUN_004592e4(iVar1);
    puVar2 = (undefined4 *)FUN_004592d8(iVar1);
    FUN_004592f0((int)local_24,iVar1,puVar2);
    FUN_00459370(local_c);
    FUN_00459398();
    FUN_004593a8(local_14);
    FUN_004593d0();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004592d8  FUN_004592d8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004592d8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004592e4  FUN_004592e4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_004592e4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004592f0  FUN_004592f0   (35 bytes)   [unnamed]
int __cdecl FUN_004592f0(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_00459314(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459314  FUN_00459314   (52 bytes)   [unnamed]
int __cdecl FUN_00459314(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c10);
  FUN_00459348(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459348  FUN_00459348   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00459348(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c18);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459370  FUN_00459370   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00459370(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c20);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459398  FUN_00459398   (15 bytes)   [unnamed]
void __stdcall FUN_00459398(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004593a8  FUN_004593a8   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_004593a8(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c28);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004593d0  FUN_004593d0   (15 bytes)   [unnamed]
void __stdcall FUN_004593d0(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004593e0  FUN_004593e0   (89 bytes)   [unnamed]
int __cdecl FUN_004593e0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c30);
  iVar1 = FUN_00459448(param_2);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = FUN_0045943c(iVar1);
  *(int *)(param_1 + 0xc) = iVar1;
  iVar1 = FUN_004594a8(param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x18;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045943c  FUN_0045943c   (11 bytes)   [unnamed]
int __cdecl FUN_0045943c(int param_1)

{
  return param_1 + 0x18;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459448  FUN_00459448   (58 bytes)   [unnamed]
int * __cdecl FUN_00459448(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00459484((undefined4 *)&DAT_00487b30);
  piVar2 = (int *)FUN_00459490(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004665a4(param_1,(uint *)&DAT_00487b30,'\x01',0x20,&LAB_0041bf74);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459484  FUN_00459484   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_00459484(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459490  FUN_00459490   (23 bytes)   [unnamed]
undefined4 __cdecl FUN_00459490(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00462da0(*param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004594a8  FUN_004594a8   (61 bytes)   [unnamed]
int * __cdecl FUN_004594a8(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_00459484((undefined4 *)&DAT_00485c38);
  piVar2 = (int *)FUN_00459490(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004665a4(param_1,(uint *)&DAT_00485c38,'\x01',0x80,(undefined*)FUN_00459514);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004594e8  FUN_004594e8   (44 bytes)   [unnamed]
undefined4 * __cdecl FUN_004594e8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4872f4);
  FUN_00462dd0(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459514  FUN_00459514   (53 bytes)   [unnamed]
void __cdecl FUN_00459514(int param_1,uint *param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_004595a0();
    return;
  }
  if (param_1 == 1) {
    FUN_0045954c();
    return;
  }
  FUN_0045970c(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045954c  FUN_0045954c   (84 bytes)   [unnamed]
undefined4 * __stdcall FUN_0045954c(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x48730c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00459790(puVar1,(uint *)("basic_string::__replace_aux(iterator,iterator,InputIterator,InputIterator)" + 0x4b),1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004595a0  FUN_004595a0   (85 bytes)   [unnamed]
undefined4 * __stdcall FUN_004595a0(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x485c50);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = FUN_004595f8();
    FUN_00459624(puVar1,1,pcVar2);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004595f8  FUN_004595f8   (6 bytes)   [unnamed]
undefined * __stdcall FUN_004595f8(void)

{
  return &DAT_00487fd8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459624  FUN_00459624   (97 bytes)   [unnamed]
undefined4 * __cdecl FUN_00459624(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485c80);
  FUN_00459688(param_1,param_2,0x80);
  FUN_004596d0((int)(param_1 + 4),param_3);
  *param_1 = &PTR_FUN_00487770;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459688  FUN_00459688   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_00459688(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48733c);
  FUN_00462dfc(param_1,param_2,param_3);
  *param_1 = &std::locale::facet::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004596d0  FUN_004596d0   (58 bytes)   [unnamed]
int __cdecl FUN_004596d0(int param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487360);
  FUN_00462fa0(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045970c  FUN_0045970c   (85 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045970c(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x485ca4);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00459790(puVar1,param_2,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459790  FUN_00459790   (89 bytes)   [unnamed]
undefined4 * __cdecl FUN_00459790(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485cd4);
  pcVar1 = (char *)FUN_004597ec(param_1 + 4,param_2);
  FUN_00459624(param_1,param_3,pcVar1);
  *param_1 = &PTR_FUN_00487748;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004597ec  FUN_004597ec   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004597ec(undefined4 param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00463f68(param_2);
  uVar2 = FUN_00462e7c(puVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459808  FUN_00459808   (66 bytes)   [unnamed]
int * __cdecl FUN_00459808(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487384);
  FUN_0045defc(param_1,(int *)(param_2 + 0x10));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045984c  FUN_0045984c   (104 bytes)   [unnamed]
int __cdecl FUN_0045984c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x485d00);
  FUN_00459808(&local_8,param_3);
  FUN_004598b4(param_1,param_3,&local_8);
  std::locale::_dtor(&local_8,2);
  *(undefined4 *)(param_1 + 0x278) = param_2;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004598b4  FUN_004598b4   (69 bytes)   [unnamed]
int __cdecl FUN_004598b4(int param_1,int param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485d14);
  FUN_004668e0(param_1,param_2);
  FUN_004593e0(param_1 + 0x260,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004598fc  FUN_004598fc   (101 bytes)   [unnamed]
int * __cdecl FUN_004598fc(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485d2c);
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
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459a04  FUN_00459a04   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00459a04(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00459a10  FUN_00459a10   (18 bytes)   [unnamed]
int __cdecl FUN_00459a10(int *param_1,int param_2)

{
  return param_2 * 4 + *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459a24  FUN_00459a24   (101 bytes)   [unnamed]
int * __cdecl FUN_00459a24(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485d50);
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
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459ad4  FUN_00459ad4   (111 bytes)   [unnamed]
int __cdecl FUN_00459ad4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (param_2 != param_1) {
    piVar1 = (int *)FUN_00459080(param_2);
    iVar2 = FUN_00459094(piVar1);
    if (iVar2 < 1) {
      puVar3 = (uint *)FUN_00459b5c(param_2);
      FUN_00459b6c(param_1,puVar3);
    }
    else {
      piVar1 = (int *)FUN_00459080(param_2);
      FUN_00459b44(piVar1);
      FUN_00458fdc(param_1);
      local_8 = FUN_00459074(param_2);
      FUN_004591e0((int)local_18,param_1,&local_8);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459b44  FUN_00459b44   (21 bytes)   [unnamed]
void __cdecl FUN_00459b44(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004590c4();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459b5c  FUN_00459b5c   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_00459b5c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00459074(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459b6c  FUN_00459b6c   (376 bytes)   [unnamed]
int __cdecl FUN_00459b6c(int param_1,uint *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_160 [16];
  undefined1 local_150 [240];
  int local_60;
  undefined1 local_5a;
  char local_59;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x485d90);
  if (param_2 == (uint *)0x0) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    pcVar10 = FUN_0045642c;
    uVar9 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    puVar2 = FUN_004670cc(local_150,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar9,(undefined*)pcVar10,uVar11,uVar12,uVar13,uVar14);
  }
  uVar9 = FUN_0045a1ec();
  local_59 = (char)uVar9;
  bVar1 = FUN_00459d40((char *)param_2,&local_59);
  if (bVar1) {
    piVar4 = (int *)FUN_00459080(param_1);
    iVar5 = FUN_00459094(piVar4);
    if (iVar5 == 1) {
      iVar5 = FUN_00459080(param_1);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_0045a1ec();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)FUN_00459074(param_1);
      FUN_00459d58(puVar6,puVar2);
    }
    else {
      FUN_00458fdc(param_1);
      piVar4 = FUN_004590c4();
      FUN_00459b44(piVar4);
      puVar7 = FUN_004590c4();
      local_60 = FUN_0045a1f0((int)puVar7);
      FUN_004591e0((int)local_160,param_1,&local_60);
    }
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar11 = FUN_00459d68(param_2);
    uVar8 = FUN_004591bc(param_1);
    param_1 = FUN_0045a1fc(param_1,0,uVar8,(uint)param_2,uVar11);
    *in_FS_OFFSET = local_50;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459ce4  FUN_00459ce4   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_00459ce4(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459cec  FUN_00459cec   (83 bytes)   [unnamed]
undefined4 * __cdecl FUN_00459cec(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4873a8);
  FUN_00462e84(param_1);
  *param_1 = &std::logic_error::vftable;
  FUN_0045c9d8((int)(param_1 + 2),param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459d40  FUN_00459d40   (21 bytes)   [unnamed]
bool __cdecl FUN_00459d40(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459d58  FUN_00459d58   (15 bytes)   [unnamed]
void __cdecl FUN_00459d58(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459d68  FUN_00459d68   (15 bytes)   [unnamed]
char * __cdecl FUN_00459d68(uint *param_1)

{
  char *pcVar1;
  
  pcVar1 = strlen(param_1);
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459d78  std::string::string_from_cstr   (304 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416e74. std::string(const char*)
int __cdecl std::string::string_from_cstr(int param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x485dec);
  local_40 = 8;
  FUN_00459ec8(param_1,0);
  if (param_2 == (uint *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0045642c;
    uVar5 = 0;
    local_40 = 0x2c;
    FUN_00459238(local_58);
    puVar1 = FUN_004670cc(local_14c,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    std::string::_dtor((int)local_2c,2);
    local_40 = 0x20;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar5,(undefined*)pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  uVar7 = FUN_00459d68(param_2);
  local_40 = 8;
  piVar3 = std::string::__getRep(param_1,uVar7,uVar7);
  local_5c = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_15c,param_1,&local_5c);
  puVar4 = (undefined4 *)FUN_00459074(param_1);
  FUN_00459ea8(puVar4,param_2,uVar7);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459ea8  FUN_00459ea8   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_00459ea8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459ec8  FUN_00459ec8   (55 bytes)   [unnamed]
int __cdecl FUN_00459ec8(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485e24);
  FUN_00459194(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459f00  std::string::__getRep   (191 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416ffc. allocates a string representation of the given capacity
int * __cdecl std::string::__getRep(undefined4 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_24 [3];
  undefined1 local_15;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  if (param_3 == 0 && param_2 == 0) {
    piVar1 = FUN_004590c4();
    FUN_00459b44(piVar1);
    piVar2 = FUN_004590c4();
  }
  else {
    FUN_00459194(local_c);
    piVar2 = (int *)FUN_00459fc0();
    puVar3 = FUN_0045a06c(local_24,0);
    piVar1 = piVar2;
    uVar4 = FUN_00459154(local_14);
    FUN_0045a0a0(uVar4,piVar1,puVar3);
    iVar5 = FUN_0045a1f0((int)piVar2);
    local_15 = 0;
    FUN_0045a19c(local_c,iVar5,&local_15);
    piVar2[1] = param_2;
    FUN_0045a1d0(piVar2,1);
    iVar5 = FUN_0045a1f0((int)piVar2);
    piVar2[2] = param_3;
    *(undefined1 *)(iVar5 + param_3) = 0;
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459fc0  FUN_00459fc0   (106 bytes)   [unnamed]
int __stdcall FUN_00459fc0(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_2c;
  undefined4 local_8;
  
  __InitExceptBlockLDTC(0x485e3c);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_0040eb80;
    uVar2 = 0;
    FUN_0045a02c(&local_8);
    FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a02c  FUN_0045a02c   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a02c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4873d8);
  FUN_00462e84(param_1);
  *param_1 = &std::bad_alloc::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a06c  FUN_0045a06c   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a06c(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485e50);
  FUN_00459100(param_1,param_2 + -1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a0a0  FUN_0045a0a0   (21 bytes)   [unnamed]
void __cdecl FUN_0045a0a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0045a0b8(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a0b8  FUN_0045a0b8   (78 bytes)   [unnamed]
void __cdecl FUN_0045a0b8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x485e68);
  puVar1 = (undefined4 *)FUN_0045a108(0xc,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0045a168(puVar1,param_2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a108  FUN_0045a108   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a108(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a168  FUN_0045a168   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a168(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485e88);
  FUN_00459100(param_1,*param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a19c  FUN_0045a19c   (21 bytes)   [unnamed]
void __cdecl FUN_0045a19c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_0045a1b4(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a1b4  FUN_0045a1b4   (26 bytes)   [unnamed]
void __cdecl FUN_0045a1b4(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_0045a108(1,param_1);
  *puVar1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a1d0  FUN_0045a1d0   (25 bytes)   [unnamed]
void __cdecl FUN_0045a1d0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FUN_004590c4();
  if (param_1 != piVar1) {
    *param_1 = param_2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a1ec  FUN_0045a1ec   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_0045a1ec(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a1f0  FUN_0045a1f0   (11 bytes)   [unnamed]
int __cdecl FUN_0045a1f0(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a1fc  FUN_0045a1fc   (40 bytes)   [unnamed]
int __cdecl FUN_0045a1fc(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_0045a224(param_1,param_2,param_3,param_4,param_5,0,param_5);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a224  FUN_0045a224   (1015 bytes)   [unnamed]
int __cdecl FUN_0045a224(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [240];
  undefined1 local_190 [240];
  int local_a0;
  int *local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x485ee8);
  uVar1 = FUN_004591bc(param_1);
  if ((uVar1 < param_2) || (param_5 < param_6)) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    puVar10 = &LAB_004021bc;
    uVar9 = 0;
    local_68 = 0x14;
    FUN_00459238(local_80);
    uVar1 = FUN_004591bc(param_1);
    if (param_5 < uVar1) {
      FUN_004591bc(param_1);
    }
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_190,PTR_s_string_index_out_of_range_in_fun_00488a60);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_2c,2);
    local_68 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar9,puVar10,uVar11,uVar12,uVar13,uVar14);
  }
  iVar4 = FUN_004591bc(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  uVar1 = param_5 - param_6;
  if (param_7 < uVar1) {
    uVar1 = param_7;
  }
  iVar4 = FUN_004591bc(param_1);
  if (DAT_00485f20 - uVar1 <= iVar4 - local_84) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    puVar10 = &LAB_00402064;
    uVar9 = 0;
    local_68 = 0x2c;
    FUN_00459238(local_8c);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_280,PTR_s_resulting_length_is_invalid_in_f_00488a5c);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    std::string::string_from_cstr((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a664(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x20;
    FUN_00471ae8((uint *)&DAT_00402008,local_44,uVar9,puVar10,uVar11,uVar12,uVar13,uVar14);
  }
  iVar4 = FUN_004591bc(param_1);
  local_90 = (iVar4 - local_84) + uVar1;
  if (local_90 == 0) {
    FUN_00458fdc(param_1);
    piVar5 = FUN_004590c4();
    FUN_00459b44(piVar5);
    puVar6 = FUN_004590c4();
    local_94 = FUN_0045a1f0((int)puVar6);
    FUN_004591e0((int)local_290,param_1,&local_94);
    goto LAB_0045a601;
  }
  iVar4 = FUN_004591bc(param_1);
  local_98 = (iVar4 - local_84) - param_2;
  piVar5 = (int *)FUN_00459080(param_1);
  iVar4 = FUN_00459094(piVar5);
  if ((iVar4 < 2) && (uVar11 = FUN_0045a6cc(param_1), local_90 <= uVar11)) {
    if ((param_4 != 0) && (uVar11 = FUN_0045a6f0(param_1), uVar11 <= param_4)) {
      iVar4 = FUN_0045a6f0(param_1);
      iVar7 = FUN_004591bc(param_1);
      if (param_4 < (uint)(iVar4 + iVar7)) goto LAB_0045a4c0;
    }
    if (local_98 != 0) {
      uVar11 = local_98;
      iVar4 = FUN_00459074(param_1);
      puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
      iVar4 = FUN_00459074(param_1);
      FUN_0045a6ac((undefined4 *)(iVar4 + param_2 + uVar1),puVar6,uVar11);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)(param_4 + param_6);
      iVar4 = FUN_00459074(param_1);
      FUN_0045a6ac((undefined4 *)(iVar4 + param_2),puVar6,uVar1);
    }
    iVar4 = FUN_00459080(param_1);
    uVar1 = local_90;
    *(uint *)(iVar4 + 8) = local_90;
    iVar4 = FUN_00459074(param_1);
    puVar2 = (undefined1 *)(iVar4 + uVar1);
    uVar9 = FUN_0045a1ec();
    *puVar2 = (char)uVar9;
  }
  else {
LAB_0045a4c0:
    local_9c = std::string::__getRep(param_1,local_90,local_90);
    if (param_2 != 0) {
      uVar11 = param_2;
      puVar6 = (undefined4 *)FUN_00459074(param_1);
      puVar8 = (undefined4 *)FUN_0045a1f0((int)local_9c);
      FUN_00459ea8(puVar8,puVar6,uVar11);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)(param_4 + param_6);
      uVar11 = uVar1;
      iVar4 = FUN_0045a1f0((int)local_9c);
      FUN_00459ea8((undefined4 *)(iVar4 + param_2),puVar6,uVar11);
    }
    if (local_98 != 0) {
      uVar11 = local_98;
      iVar4 = FUN_00459074(param_1);
      puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
      iVar4 = FUN_0045a1f0((int)local_9c);
      FUN_00459ea8((undefined4 *)(iVar4 + param_2 + uVar1),puVar6,uVar11);
    }
    FUN_00458fdc(param_1);
    local_a0 = FUN_0045a1f0((int)local_9c);
    FUN_004591e0((int)local_2a0,param_1,&local_a0);
  }
LAB_0045a601:
  iVar4 = FUN_00459074(param_1);
  *in_FS_OFFSET = local_78;
  return iVar4 + param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a61c  FUN_0045a61c   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a61c(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4873fc);
  FUN_00459cec(param_1,param_2);
  *param_1 = &std::out_of_range::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a664  FUN_0045a664   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a664(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487420);
  FUN_00459cec(param_1,param_2);
  *param_1 = &std::length_error::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a6ac  FUN_0045a6ac   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a6ac(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  FUN_004675a4(param_1,param_2,param_3);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a6cc  FUN_0045a6cc   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a6cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00459080(param_1);
  uVar2 = FUN_0045a6e4(iVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a6e4  FUN_0045a6e4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a6e4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a6f0  FUN_0045a6f0   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a6f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00459074(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a810  FUN_0045a810   (152 bytes)   [unnamed]
void __cdecl FUN_0045a810(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0045a8a8(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0045a8b4(param_1);
    iVar1 = FUN_0045a8c8(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0045a8b4(param_1);
      iVar1 = FUN_0045a8d4(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0045a8b4(param_1);
    FUN_0045a98c(local_c);
    FUN_0045a9b4();
    FUN_0045aa84(param_1);
    FUN_0045a8b4(param_1);
    FUN_0045a9cc(local_14);
    FUN_0045a9f4();
    local_18 = 0;
    FUN_0045aa04((int)local_28,param_1,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a8a8  FUN_0045a8a8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a8a8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a8b4  FUN_0045a8b4   (20 bytes)   [unnamed]
int __cdecl FUN_0045a8b4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045a8a8(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a8c8  FUN_0045a8c8   (11 bytes)   [unnamed]
int __cdecl FUN_0045a8c8(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a8d4  FUN_0045a8d4   (34 bytes)   [unnamed]
int __cdecl FUN_0045a8d4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0045a8f8();
  if (param_1 != piVar1) {
    iVar2 = FUN_0045a96c(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a8f8  FUN_0045a8f8   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0045a8f8(void)

{
  return &DAT_00485f6c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a900  FUN_0045a900   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a900(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485f80);
  FUN_0045a938(param_1,1);
  *(undefined2 *)(param_1 + 3) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a938  FUN_0045a938   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045a938(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485f88);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a96c  FUN_0045a96c   (32 bytes)   [unnamed]
int __cdecl FUN_0045a96c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0045a8f8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a98c  FUN_0045a98c   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a98c(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485f90);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a9b4  FUN_0045a9b4   (15 bytes)   [unnamed]
void __stdcall FUN_0045a9b4(void)

{
  FUN_0045a9c4();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a9c4  FUN_0045a9c4   (5 bytes)   [unnamed]
void __stdcall FUN_0045a9c4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a9cc  FUN_0045a9cc   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a9cc(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485f98);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a9f4  FUN_0045a9f4   (15 bytes)   [unnamed]
void __stdcall FUN_0045a9f4(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aa04  FUN_0045aa04   (35 bytes)   [unnamed]
int __cdecl FUN_0045aa04(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_0045aa28(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aa28  FUN_0045aa28   (52 bytes)   [unnamed]
int __cdecl FUN_0045aa28(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485fa0);
  FUN_0045aa5c(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aa5c  FUN_0045aa5c   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0045aa5c(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485fa8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aa84  FUN_0045aa84   (20 bytes)   [unnamed]
undefined4 __cdecl FUN_0045aa84(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045a8b4(param_1);
  return *(undefined4 *)(iVar1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aa98  FUN_0045aa98   (111 bytes)   [unnamed]
int __cdecl FUN_0045aa98(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x485fc8);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0045ab08(param_1,local_30 + 1);
  puVar1 = FUN_004590c4();
  local_30[0] = FUN_0045a1f0((int)puVar1);
  FUN_004591e0((int)local_40,param_1,local_30);
  piVar2 = FUN_004590c4();
  FUN_00459b44(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ab08  FUN_0045ab08   (58 bytes)   [unnamed]
int __cdecl FUN_0045ab08(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x485fe8);
  FUN_00459194(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ab44  FUN_0045ab44   (111 bytes)   [unnamed]
int __cdecl FUN_0045ab44(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x486000);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0045abd0(param_1,local_30 + 1);
  puVar1 = FUN_0045a8f8();
  local_30[0] = FUN_0045ac0c((int)puVar1);
  FUN_0045aa04((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_0045a8f8();
  FUN_0045ac18(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045abd0  FUN_0045abd0   (58 bytes)   [unnamed]
int __cdecl FUN_0045abd0(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486020);
  FUN_0045a9cc(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ac0c  FUN_0045ac0c   (11 bytes)   [unnamed]
int __cdecl FUN_0045ac0c(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ac18  FUN_0045ac18   (21 bytes)   [unnamed]
void __cdecl FUN_0045ac18(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0045a8f8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ac30  FUN_0045ac30   (237 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045ac30(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x486058);
  FUN_0045ad88(param_1);
  *param_1 = &std::basic_filebuf_char::vftable;
  uVar1 = FUN_0045ae74();
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xf] = puVar2;
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ad20  FUN_0045ad20   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045ad20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x487434);
  *param_1 = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ad88  FUN_0045ad88   (79 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045ad88(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4860b8);
  *param_1 = &std::basic_streambuf_char::vftable;
  FUN_0045add8(param_1 + 8);
  FUN_0045ae40((int)param_1,'\x01');
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045add8  FUN_0045add8   (70 bytes)   [unnamed]
int * __cdecl FUN_0045add8(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48744c);
  if (DAT_0048d084 == 0) {
    FUN_00465da4();
  }
  iVar1 = DAT_0048d084;
  *param_1 = DAT_0048d084;
  FUN_00462f14(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ae40  FUN_0045ae40   (51 bytes)   [unnamed]
void __cdecl FUN_0045ae40(int param_1,char param_2)

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
// 0x0045ae74  FUN_0045ae74   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_0045ae74(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ae7c  FUN_0045ae7c   (275 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045ae7c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4860fc);
  FUN_0045ad88(param_1);
  *param_1 = &std::basic_filebuf_char::vftable;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200;
  param_1[0xd] = 0;
  uVar1 = operator_new_array();
  param_1[0x10] = uVar1;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xf] = puVar2;
  if (param_2 == 0) {
    param_1[1] = 4;
  }
  else if (param_2 < 3) {
    param_1[1] = 8;
  }
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b014  FUN_0045b014   (358 bytes)   [unnamed]
int * __cdecl FUN_0045b014(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x486184);
  operator_delete();
  operator_delete();
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xe] = (int)puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0045ad20(puVar2,0);
  }
  param_1[0xf] = (int)puVar2;
  param_1[0xd] = 0;
  bVar1 = FUN_0045b180(param_1,param_1[9]);
  if ((bVar1) && (iVar3 = FUN_0045ae74(), iVar3 != param_1[9])) {
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      FUN_0045b17c();
      (**(code **)(*param_1 + 0x24))();
    }
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    param_1[0xb] = 0;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = FUN_0045ae74();
    if (iVar3 == param_1[9]) {
      param_1 = (int *)0x0;
      *in_FS_OFFSET = local_30;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) != '\0') {
        FUN_0045b17c();
        (**(code **)(*param_1 + 0x24))();
      }
      operator_delete_array();
      param_1[0x10] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      param_1[0xb] = 0;
      iVar3 = FUN_0045b190(param_1,param_1[9]);
      if (iVar3 == -1) {
        param_1 = (int *)0x0;
        *in_FS_OFFSET = local_30;
      }
      else {
        iVar3 = FUN_0045ae74();
        param_1[9] = iVar3;
        *in_FS_OFFSET = local_30;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b17c  FUN_0045b17c   (4 bytes)   [unnamed]
undefined4 __stdcall FUN_0045b17c(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b180  FUN_0045b180   (15 bytes)   [unnamed]
bool __cdecl FUN_0045b180(undefined4 param_1,int param_2)

{
  return param_2 < 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b190  FUN_0045b190   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b190(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_00468ad4(param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b200  FUN_0045b200   (104 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045b200(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4861f0);
  if (param_2 == 0) {
    *param_1 = param_1 + 3;
    FUN_0045b2c8(param_1 + 3);
  }
  param_1[1] = &std::basic_istream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_004876b8;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b268  FUN_0045b268   (95 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045b268(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486214);
  if (param_2 == 0) {
    *param_1 = param_1 + 2;
    FUN_0045b2c8(param_1 + 2);
  }
  param_1[1] = &std::basic_ostream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0048769c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b2c8  FUN_0045b2c8   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045b2c8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486238);
  FUN_00463c18(param_1);
  *param_1 = &std::basic_ios_char::vftable;
  FUN_0045b330((int)param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b330  FUN_0045b330   (79 bytes)   [unnamed]
void __cdecl FUN_0045b330(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1002;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 6;
  uVar1 = FUN_0045b380(param_1);
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b380  FUN_0045b380   (99 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b380(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x48625c);
  FUN_00459808(&local_8,param_1);
  piVar1 = (int *)FUN_00459448(&local_8);
  uVar2 = FUN_0045b3e4(piVar1);
  std::locale::_dtor(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b3e4  FUN_0045b3e4   (21 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b3e4(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b3fc  FUN_0045b3fc   (21 bytes)   [unnamed]
void __cdecl FUN_0045b3fc(int param_1,uint param_2)

{
  FUN_0045b414(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b414  FUN_0045b414   (637 bytes)   [unnamed]
void __cdecl FUN_0045b414(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_388 [240];
  undefined1 local_298 [240];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [16];
  undefined4 local_6c [6];
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x4862f4);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_0045b694(param_1);
  uVar2 = FUN_0045b6a0(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_0045b694(param_1);
    uVar2 = FUN_0045b6a0(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      pcVar7 = FUN_00421afc;
      uVar6 = 0;
      local_90 = 0x14;
      FUN_00459238(local_a8);
      puVar3 = FUN_004670cc(local_1a8,PTR_s_iostream_object_has_failbit_set_0048782c);
      puVar4 = (uint *)FUN_00459ce4(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_2c,puVar4);
      local_84 = local_84 + 1;
      FUN_0046392c(local_1c,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_2c,2);
      local_90 = 8;
      FUN_00471ae8((uint *)&DAT_00421a94,local_1c,uVar6,(undefined*)pcVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_0045b694(param_1);
    uVar2 = FUN_0045b6a0(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      pcVar7 = FUN_00421afc;
      uVar6 = 0;
      local_90 = 0x2c;
      FUN_00459238(local_b0);
      puVar3 = FUN_004670cc(local_298,PTR_s_iostream_object_has_badbit_set_00487830);
      puVar4 = (uint *)FUN_00459ce4(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_54,puVar4);
      local_84 = local_84 + 1;
      FUN_0046392c(local_44,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_54,2);
      local_90 = 0x20;
      FUN_00471ae8((uint *)&DAT_00421a94,local_44,uVar6,(undefined*)pcVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_0045b694(param_1);
    uVar2 = FUN_0045b6a0(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      pcVar7 = FUN_00421afc;
      uVar6 = 0;
      local_90 = 0x44;
      FUN_00459238(local_b8);
      puVar3 = FUN_004670cc(local_388,PTR_s_iostream_object_has_eofbit_set_00487834);
      puVar4 = (uint *)FUN_00459ce4(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_7c,puVar4);
      local_84 = local_84 + 1;
      FUN_0046392c(local_6c,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_7c,2);
      local_90 = 0x38;
      FUN_00471ae8((uint *)&DAT_00421a94,local_6c,uVar6,(undefined*)pcVar7,uVar1,uVar8,uVar9,uVar10);
    }
  }
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b694  FUN_0045b694   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b694(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b6a0  FUN_0045b6a0   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b6a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b6ac  FUN_0045b6ac   (266 bytes)   [unnamed]
int * __cdecl FUN_0045b6ac(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if ((param_3 & 0x20) != 0) {
    uVar3 = param_3 & 0xffffffdf | 1;
  }
  iVar1 = FUN_0045ae74();
  if (iVar1 == param_1[9]) {
    param_1[1] = param_3;
    FUN_0045ae40((int)param_1,'\0');
    uVar3 = *(uint *)(&DAT_004877ac + (uVar3 & 0xffffff3f) * 4);
    if (uVar3 == 0xffffffff) {
      param_1 = (int *)0x0;
    }
    else {
      if ((param_3 & 8) != 0) {
        if ((param_3 & 0x40) != 0) {
          uVar3 = uVar3 & 0xfffffeff;
        }
        if ((param_3 & 0x80) != 0) {
          uVar3 = uVar3 | 0x400;
        }
      }
      iVar1 = thunk_FUN_00468c7c(param_2,uVar3,param_4);
      param_1[9] = iVar1;
      iVar2 = FUN_0045ae74();
      if (iVar1 == iVar2) {
        param_1 = (int *)0x0;
      }
      else {
        operator_delete_array();
        iVar1 = operator_new_array();
        param_1[0x10] = iVar1;
        if ((param_3 & 0x20) != 0) {
          iVar1 = FUN_0045b7b8(param_1,param_1[9],0,2);
          param_1[0xd] = iVar1;
          if (iVar1 == -1) {
            FUN_0045b014(param_1);
            operator_delete_array();
            param_1[0x10] = 0;
            iVar1 = FUN_0045ae74();
            param_1[9] = iVar1;
            param_1 = (int *)0x0;
          }
        }
      }
    }
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b7b8  FUN_0045b7b8   (25 bytes)   [unnamed]
DWORD __cdecl FUN_0045b7b8(undefined4 param_1,uint param_2,LONG param_3,int param_4)

{
  DWORD DVar1;
  
  DVar1 = thunk_FUN_00468c04(param_2,param_3,param_4);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b7d4  FUN_0045b7d4   (24 bytes)   [unnamed]
void __cdecl FUN_0045b7d4(int param_1,uint param_2)

{
  FUN_0045b3fc(param_1,*(uint *)(param_1 + 0x30) | param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b958  FUN_0045b958   (174 bytes)   [unnamed]
int * __cdecl FUN_0045b958(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4863c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    FUN_0045b2c8(param_1 + 0x14);
  }
  FUN_0045b200(param_1,1);
  param_1[1] = (int)&std::basic_ifstream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00487670;
  FUN_0045ac30(param_1 + 3);
  FUN_0045b330(*param_1,param_1 + 3);
  FUN_0045ba08(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ba08  FUN_0045ba08   (69 bytes)   [unnamed]
void __cdecl FUN_0045ba08(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0045b3fc(*param_1,0);
  piVar1 = FUN_0045b6ac(param_1 + 3,param_2,param_3 | 4,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0045b7d4(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045baf0  FUN_0045baf0   (175 bytes)   [unnamed]
int * __cdecl FUN_0045baf0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486408);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 3);
    FUN_0045b2c8(param_1 + 3);
  }
  param_1[1] = (int)&std::basic_istream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_004876b8;
  param_1[2] = 0;
  if (param_3 == 0) {
    FUN_0045b330(*param_1,0);
  }
  else {
    uVar1 = FUN_0045bba0(param_3);
    if ((uVar1 & 4) == 0) {
      FUN_0045b330(*param_1,0);
    }
    else {
      FUN_0045b330(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bba0  FUN_0045bba0   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045bba0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bbac  FUN_0045bbac   (166 bytes)   [unnamed]
int * __cdecl FUN_0045bbac(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x48642c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_0045b2c8(param_1 + 2);
  }
  param_1[1] = (int)&std::basic_ostream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0048769c;
  if (param_3 == 0) {
    FUN_0045b330(*param_1,0);
  }
  else {
    uVar1 = FUN_0045bba0(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_0045b330(*param_1,0);
    }
    else {
      FUN_0045b330(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bc54  FUN_0045bc54   (385 bytes)   [unnamed]
undefined4 * __cdecl FUN_0045bc54(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x486460);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_0045be3c(*param_2);
  if (!bVar1) {
    FUN_0045b7d4(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_0045bdc2;
  }
  iVar2 = FUN_0045be50(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0045be50(*param_2);
    FUN_0045be5c(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_0045bdd8(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_00459808(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_00459448(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_0045bea8(*param_2);
        local_30 = FUN_0045beb4(piVar3);
        local_34 = FUN_0045b17c();
        bVar1 = FUN_0045bde4(&local_30,&local_34);
        if (bVar1) {
LAB_0045bd51:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_0045bdfc(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_0045bd51;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x0045bd5e;
        piVar3 = (int *)FUN_0045bea8(*param_2);
        FUN_0045bf10(piVar3);
      } while( true );
    }
  }
  goto LAB_0045bd98;
code_r0x0045bd5e:
  local_38 = FUN_0045b17c();
  bVar1 = FUN_0045bde4(&local_30,&local_38);
  if (bVar1) {
    FUN_0045b7d4(*param_2,2);
  }
  local_10 = local_10 + -1;
  std::locale::_dtor(&local_8,2);
LAB_0045bd98:
  bVar1 = FUN_0045be3c(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_0045b7d4(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_0045bdc2:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bdd8  FUN_0045bdd8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045bdd8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bde4  FUN_0045bde4   (21 bytes)   [unnamed]
bool __cdecl FUN_0045bde4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bdfc  FUN_0045bdfc   (28 bytes)   [unnamed]
bool __cdecl FUN_0045bdfc(int param_1,uint param_2,byte param_3)

{
  return (*(uint *)(*(int *)(param_1 + 0x20) + (uint)param_3 * 4) & param_2) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045be3c  FUN_0045be3c   (18 bytes)   [unnamed]
bool __cdecl FUN_0045be3c(int param_1)

{
  return *(int *)(param_1 + 0x30) == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045be50  FUN_0045be50   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045be50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045be5c  FUN_0045be5c   (57 bytes)   [unnamed]
int * __cdecl FUN_0045be5c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0045bea8(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0045bea8(*param_1);
    iVar1 = FUN_0045be98(piVar2);
    if (iVar1 == -1) {
      FUN_0045b7d4(*param_1,1);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045be98  FUN_0045be98   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0045be98(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bea8  FUN_0045bea8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045bea8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045beb4  FUN_0045beb4   (55 bytes)   [unnamed]
undefined4 __cdecl FUN_0045beb4(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  int *piVar6;
  
  uVar2 = FUN_0045bef8((int)param_1);
  piVar6 = param_1;
  uVar3 = FUN_0045bf04((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0045bef8((int)param_1);
    uVar1 = FUN_0045beec(puVar5);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x1c))(*param_1,extraout_EDX,piVar6,param_1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045beec  FUN_0045beec   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0045beec(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bef8  FUN_0045bef8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045bef8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bf04  FUN_0045bf04   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0045bf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bf10  FUN_0045bf10   (67 bytes)   [unnamed]
void __cdecl FUN_0045bf10(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_0045b17c();
  piVar2 = &local_c;
  local_8 = FUN_0045bf54(param_1);
  bVar1 = FUN_0045bde4(&local_8,piVar2);
  if (bVar1) {
    FUN_0045b17c();
  }
  else {
    FUN_0045beb4(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bf54  FUN_0045bf54   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_0045bf54(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 uStack_8;
  
  uVar2 = FUN_0045bef8((int)param_1);
  uVar3 = FUN_0045bf04((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0045bef8((int)param_1);
    uStack_8 = CONCAT13(*puVar5,(undefined3)uStack_8);
    FUN_0045bfa0((int)param_1,1);
    uVar1 = FUN_0045beec((undefined1 *)((int)&uStack_8 + 3));
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x20))();
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bfa0  FUN_0045bfa0   (14 bytes)   [unnamed]
void __cdecl FUN_0045bfa0(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bfec  FUN_0045bfec   (26 bytes)   [unnamed]
void __cdecl FUN_0045bfec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

} // namespace tea

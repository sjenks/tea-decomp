// TSBuild.exe — runtime / library code "code_0x00428000"
// 82 functions, 0x00428078..0x0042bfc4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00428078  FUN_00428078   (137 bytes)   [unnamed]
void __cdecl FUN_00428078(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  __InitExceptBlockLDTC(0x47b69c);
  FUN_00427ce0();
  if (param_1 != 0) {
    iVar1 = FUN_00427f24(param_1);
    if (iVar1 == 0) {
      local_c = param_1;
      local_8 = param_2;
      local_7 = 1;
      FUN_00428104(DAT_0047b5ac,&local_c);
    }
    else {
      *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428104  FUN_00428104   (6 bytes)   [unnamed]
int __stdcall FUN_00428104(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  
  __InitExceptBlockLDTC(0x47b6c0);
  if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
    FUN_00428230(param_1,*(int *)(param_1 + 1) + 1);
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
    puVar2 = (uint *)FUN_00420a1c(param_1 + 0x11,*(uint *)(param_1 + 0x22));
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
  *in_FS_OFFSET = uStack_2c;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042810a  FUN_0042810a   (266 bytes)   [unnamed]
int __stdcall FUN_0042810a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x47b6c0);
  if (*(uint *)(iVar2 + 5) <= *(uint *)(iVar2 + 1)) {
    FUN_00428230(iVar2,*(int *)(iVar2 + 1) + 1);
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
    iVar3 = FUN_00420a1c(iVar2 + 0x11,*(uint *)(iVar2 + 0x22));
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
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x28);
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428230  FUN_00428230   (155 bytes)   [unnamed]
void __cdecl FUN_00428230(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_00456ea4();
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
// 0x004282cc  FUN_004282cc   (41 bytes)   [unnamed]
void __cdecl FUN_004282cc(uint param_1)

{
  int iVar1;
  
  FUN_00427ce0();
  iVar1 = FUN_00427f24(param_1);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004282f8  FUN_004282f8   (293 bytes)   [unnamed]
uint __cdecl FUN_004282f8(uint param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b6e0);
  if (DAT_0047b5ac == 0) {
    *in_FS_OFFSET = local_28;
    uVar5 = local_28;
  }
  else {
    puVar3 = (uint *)FUN_00427f24(param_1);
    uVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      *(char *)((int)puVar3 + 5) = *(char *)((int)puVar3 + 5) + -1;
      bVar2 = *(char *)((int)puVar3 + 5) == '\0';
      uVar5 = (uint)bVar2;
      if (bVar2) {
        BVar4 = DeleteObject((HGDIOBJ)*puVar3);
        if (BVar4 == 0) {
          FUN_00427c44(0x7fde,*puVar3);
        }
        uVar5 = FUN_00427ff0(DAT_0047b5ac,puVar3);
        if (uVar5 != 0xffffffff) {
          puVar1 = *(undefined4 **)(*(int *)(DAT_0047b5ac + 9) + uVar5 * 4);
          FUN_004675a4((undefined4 *)(*(int *)(DAT_0047b5ac + 9) + uVar5 * 4),
                       (undefined4 *)(*(int *)(DAT_0047b5ac + 9) + (uVar5 + 1) * 4),
                       ((*(int *)(DAT_0047b5ac + 1) - uVar5) + -1) * 4);
          *(int *)(DAT_0047b5ac + 1) = *(int *)(DAT_0047b5ac + 1) + -1;
          puVar6 = (undefined4 *)(DAT_0047b5ac + 0xd);
          *puVar1 = *puVar6;
          *puVar6 = puVar1;
        }
        uVar5 = FUN_00427dd2();
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428420  FUN_00428420   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_00428420(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b6f8);
  FUN_0042790c(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428470  FUN_00428470   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_00428470(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b71c);
  FUN_0042793c(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004285e8  FUN_004285e8   (133 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004285e8(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b740);
  if (param_1 != 0) {
    FUN_00427ed8(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_004209d0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428704  FUN_00428704   (130 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00428704(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b77c);
  if (param_1 != 0) {
    FUN_00427ed8(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_004209d0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004287d4  FUN_004287d4   (125 bytes)   [unnamed]
void __cdecl FUN_004287d4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b7b8);
  if (param_1 != 0) {
    FUN_00427ed8(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_004209d0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428898  FUN_00428898   (25 bytes)   [unnamed]
void __cdecl FUN_00428898(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004288b4  FUN_004288b4   (25 bytes)   [unnamed]
int * __cdecl FUN_004288b4(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004288d0  FUN_004288d0   (179 bytes)   [unnamed]
void __cdecl FUN_004288d0(int *param_1,int *param_2)

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
// 0x00428984  FUN_00428984   (171 bytes)   [unnamed]
void __cdecl FUN_00428984(int *param_1,int *param_2)

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
// 0x00428a30  FUN_00428a30   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00428a30(int param_1)

{
  if (((*(byte *)(param_1 + 0x1b) & 0xc0) != 0) && ((*(byte *)(param_1 + 0x1a) & 0x80) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00428a4a  FUN_00428a4a   (27 bytes)   [unnamed]
int __cdecl FUN_00428a4a(int param_1,int param_2)

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
// 0x00428a65  FUN_00428a65   (499 bytes)   [unnamed]
void __cdecl FUN_00428a65(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int aiStack_40 [6];
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    local_8 = FUN_00428a4a(param_3,*(int *)(param_1 + 0xc));
    local_c = FUN_00428a4a(param_1,param_2);
    if ((local_8 != -1) && (local_c != -1)) {
      iVar1 = FUN_0042a13c(param_3);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = FUN_00428a4a(param_1,*(int *)(param_3 + iVar4 * 4));
          aiStack_40[iVar4] = iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar4 = FUN_0042a13c(param_1);
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
              local_28 = local_24;
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
// 0x00428c58  FUN_00428c58   (86 bytes)   [unnamed]
void __stdcall FUN_00428c58(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b7e8);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0042a24c;
  puVar1 = FUN_00468310(1,0,0x41d778);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c6fc,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428cae  FUN_00428cae   (48 bytes)   [unnamed]
void __stdcall FUN_00428cae(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b7fc);
  OWL::TStreamableClass::_dtor(0x48c6fc,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428cde  FUN_00428cde   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_00428cde(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b804);
  *param_1 = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428d08  FUN_00428d08   (63 bytes)   [unnamed]
undefined4 * __cdecl FUN_00428d08(undefined4 *param_1,int param_2)

{
  HDWP pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b81c);
  if (param_2 == 0) {
    pvVar1 = (HDWP)0x0;
  }
  else {
    pvVar1 = BeginDeferWindowPos(param_2);
  }
  *param_1 = pvVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428d68  FUN_00428d68   (49 bytes)   [unnamed]
bool __cdecl FUN_00428d68(int *param_1,HWND param_2,HWND param_3,int param_4,int param_5,int param_6,int param_7, UINT param_8)

{
  HDWP pvVar1;
  
  pvVar1 = DeferWindowPos((HDWP)*param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = (int)pvVar1;
  return *param_1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428d9c  FUN_00428d9c   (32 bytes)   [unnamed]
undefined4 __cdecl FUN_00428d9c(undefined4 *param_1)

{
  BOOL BVar1;
  
  BVar1 = EndDeferWindowPos((HDWP)*param_1);
  if (BVar1 != 0) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428e2c  FUN_00428e2c   (49 bytes)   [unnamed]
undefined4 * __cdecl FUN_00428e2c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b9a8);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042918c  FUN_0042918c   (172 bytes)   [unnamed]
void __cdecl FUN_0042918c(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_2c;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x47b8d4);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    for (puVar1 = *(undefined1 **)(param_1 + 0x18); puVar1 != (undefined1 *)0x0;
        puVar1 = *(undefined1 **)(puVar1 + 0x55)) {
      if (param_2 == *(int *)(puVar1 + 1)) {
        *(int *)(puVar1 + 1) = param_2;
        puVar3 = (undefined4 *)(puVar1 + 5);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *param_3;
          param_3 = param_3 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        FUN_00429ac8(param_1,puVar1);
        *in_FS_OFFSET = local_2c;
        return;
      }
    }
  }
  puVar1 = (undefined1 *)operator_new();
  if (puVar1 != (undefined1 *)0x0) {
    FUN_00429f64(puVar1,param_2,param_3);
  }
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + 1;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042925c  FUN_0042925c   (49 bytes)   [unnamed]
undefined4 __cdecl FUN_0042925c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004294bc(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 5);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429290  FUN_00429290   (431 bytes)   [unnamed]
undefined4 __cdecl FUN_00429290(int param_1,int param_2)

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
  FUN_00429ac8(param_1,puVar1);
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + -1;
  for (puVar2 = *(undefined1 **)(param_1 + 0x18); puVar2 != (undefined1 *)0x0;
      puVar2 = *(undefined1 **)(puVar2 + 0x55)) {
    if (param_2 == *(int *)(puVar2 + 5)) {
      FUN_00429ac8(param_1,puVar2);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar1 + 5);
      if (*(int *)(puVar2 + 5) == 0) {
        puVar2[0xb] = puVar1[0xb] & 0xf | puVar2[0xb] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x10)) {
      FUN_00429ac8(param_1,puVar2);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
      if (*(int *)(puVar2 + 0x10) == 0) {
        puVar2[0x16] = puVar1[0x16] & 0xf | puVar2[0x16] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x1b)) {
      FUN_00429ac8(param_1,puVar2);
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
      FUN_00429ac8(param_1,puVar2);
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
// 0x004294bc  FUN_004294bc   (32 bytes)   [unnamed]
int __cdecl FUN_004294bc(int param_1,int param_2)

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
// 0x004294dc  FUN_004294dc   (36 bytes)   [unnamed]
void __cdecl FUN_004294dc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    iVar2 = FUN_0042a0c8(piVar1);
    *(int *)piVar1[3] = iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429500  FUN_00429500   (53 bytes)   [unnamed]
void __cdecl FUN_00429500(int param_1)

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
// 0x00429538  FUN_00429538   (242 bytes)   [unnamed]
void __cdecl FUN_00429538(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  FUN_00429500((int)param_1);
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
      uVar6 = FUN_0042a08c(piVar3);
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
    FUN_004391f0(*param_1,0x7fe5);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042962c  FUN_0042962c   (1147 bytes)   [unnamed]
void __cdecl FUN_0042962c(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47b904);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_0042a024(piVar1);
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
     ((*(byte *)((int)param_3 + 5) & 0xf) == 0)) goto LAB_004297b3;
  if (*param_3 == 0) {
    iVar2 = param_1[9];
  }
  else {
    iVar2 = FUN_004294bc((int)param_1,*param_3);
    if (iVar2 == 0) {
      operator_delete();
      FUN_004391f0(*param_1,0x7fe4);
    }
    iVar2 = iVar2 + 0x31;
  }
  uVar4 = *(byte *)((int)param_3 + 6) & 0xf;
  if (uVar4 < 4) {
    *piVar1 = iVar2 + (*(byte *)((int)param_3 + 6) & 0xf) * 9;
    goto LAB_004297b3;
  }
  if (uVar4 != 4) {
    if (uVar4 - 5 < 2) {
      *piVar1 = ((*(byte *)((int)param_3 + 6) & 0xf) - 3) * 9 + iVar2;
      piVar1[1] = iVar2 + ((*(byte *)((int)param_3 + 6) & 0xf) - 5) * 9;
      piVar1[5] = -0x10000;
      piVar1[7] = 0x10000;
    }
    goto LAB_004297b3;
  }
  if (param_4 == 0) {
LAB_0042978c:
    *piVar1 = iVar2;
    piVar1[1] = iVar2 + 0x12;
  }
  else if (param_4 == 1) {
LAB_00429796:
    *piVar1 = iVar2 + 9;
    piVar1[1] = iVar2 + 0x1b;
  }
  else {
    if (param_4 == 2) goto LAB_0042978c;
    if (param_4 == 3) goto LAB_00429796;
  }
  piVar1[5] = 0x8000;
  piVar1[4] = 0x8000;
LAB_004297b3:
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
      iVar2 = FUN_00429d28((int)param_1,*(int *)((int)param_3 + 7));
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
      FUN_00428a65(*(int *)(param_2 + 0x35),local_34,(int)piVar1);
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
      FUN_00428a65(*(int *)(param_2 + 0x3e),local_34,(int)piVar1);
    }
  }
  *(int **)(local_34 + 4) = piVar1;
  piVar1[3] = local_34;
  piVar1[8] = param_1[7];
  param_1[7] = (int)piVar1;
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429ac8  FUN_00429ac8   (116 bytes)   [unnamed]
void __cdecl FUN_00429ac8(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_00429500(param_1);
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
// 0x00429b3c  FUN_00429b3c   (492 bytes)   [unnamed]
void __cdecl FUN_00429b3c(int *param_1,char *param_2)

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
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0xc));
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
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 5),0);
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
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0x17));
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
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 0x10),1);
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
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0x22));
      }
      *(int *)(param_2 + 0x43) = iVar1;
    }
    else {
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 0x1b),2);
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
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0x2d));
      }
      *(int *)(param_2 + 0x4c) = iVar1;
    }
    else {
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 0x26),3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429d28  FUN_00429d28   (30 bytes)   [unnamed]
int __cdecl FUN_00429d28(int param_1,int param_2)

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
// 0x00429d48  FUN_00429d48   (147 bytes)   [unnamed]
void __cdecl FUN_00429d48(int *param_1)

{
  HGDIOBJ pvVar1;
  undefined4 *in_FS_OFFSET;
  LONG local_68 [14];
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x47b944);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(int *)(*param_1 + 0xc) != 0) {
    pvVar1 = (HGDIOBJ)FUN_00436d48(*param_1,0x31,0,0);
  }
  if (pvVar1 == (HGDIOBJ)0x0) {
    pvVar1 = GetStockObject(0xd);
  }
  local_20 = 8;
  FUN_00423a68(local_c,pvVar1,0);
  local_14 = local_14 + 2;
  local_20 = 0x14;
  FUN_00423c5c(local_68,local_c);
  *(LONG *)((int)param_1 + 0x2d) = local_68[0];
  local_14 = local_14 + -2;
  OWL::TGdiObject::_dtor(local_c,0);
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429ddc  FUN_00429ddc   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00429ddc(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b964);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TLayoutWindow::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041d778,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429e44  FUN_00429e44   (265 bytes)   [unnamed]
int * __cdecl FUN_00429e44(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b97c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x41;
    *(int *)((int)param_1 + 0x41) = (int)param_1 + 0x35;
    *(int *)((int)param_1 + 0x45) = (int)param_1 + 0x39;
    param_1[1] = (int)param_1 + 0x35;
    param_1[2] = (int)param_1 + 0x39;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
    *(undefined ***)((int)param_1 + 0x35) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x39) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042fbbc((int *)((int)param_1 + 0x41),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&OWL::TLayoutWindow::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ba3c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047ba48;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ba54;
  param_1[4] = 0;
  param_1[5] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429f64  FUN_00429f64   (189 bytes)   [unnamed]
undefined1 * __cdecl FUN_00429f64(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b990);
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
  _vector_new_ldtc_((int *)(param_1 + 0x31),9,4,1,(undefined*)FUN_00428e2c);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a024  FUN_0042a024   (104 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a024(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b998);
  _vector_new_ldtc_(param_1 + 4,4,4,1,(undefined*)FUN_00428cde);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0x10000;
  param_1[5] = 0x10000;
  param_1[4] = 0x10000;
  param_1[3] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a08c  FUN_0042a08c   (60 bytes)   [unnamed]
undefined4 __cdecl FUN_0042a08c(int *param_1)

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
// 0x0042a0c8  FUN_0042a0c8   (115 bytes)   [unnamed]
int __cdecl FUN_0042a0c8(int *param_1)

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
// 0x0042a13c  FUN_0042a13c   (22 bytes)   [unnamed]
int __cdecl FUN_0042a13c(int param_1)

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
// 0x0042a154  FUN_0042a154   (248 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a154(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47b9a0);
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
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a24c  FUN_0042a24c   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a24c(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47b9d0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00429e44(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00429ddc(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a440  FUN_0042a440   (70 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0042a440(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47baf1);
  if (DAT_0047bae0 == '\0') {
    _DAT_0048c70c = 0;
    DAT_0047bae0 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c70c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a4d7  FUN_0042a4d7   (64 bytes)   [unnamed]
void __stdcall FUN_0042a4d7(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bb05);
  if (DAT_0047bae0 != '\0') {
    OWL::_TLocaleCacheList::_dtor((int *)&DAT_0048c70c,2);
    DAT_0047bae0 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a56c  FUN_0042a56c   (68 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a56c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bb2c);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar2 = param_1;
  piVar1 = (int *)FUN_0042a440();
  FUN_0042aa7c(piVar1,(int)puVar2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a5b0  FUN_0042a5b0   (18 bytes)   [unnamed]
int __stdcall FUN_0042a5b0(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a5c4  FUN_0042a5c4   (92 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042a5c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bb44);
  FUN_0042a56c(param_1,param_2,param_3);
  param_1[4] = param_4;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x15) = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a644  FUN_0042a644   (554 bytes)   [unnamed]
uint * __cdecl FUN_0042a644(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  HRSRC pHVar4;
  undefined4 *puVar5;
  HGLOBAL hResData;
  byte *pbVar6;
  byte *pbVar7;
  HMODULE pHVar8;
  undefined1 uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *in_FS_OFFSET;
  LPCSTR lpType;
  HRSRC hResInfo;
  int local_3c;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x47bb88);
  pcVar10 = param_2 + 1;
  uVar11 = 0;
  for (pcVar12 = param_2; *pcVar12 != '\0'; pcVar12 = pcVar12 + 1) {
    uVar11 = uVar11 * 2 ^ (int)*pcVar12;
  }
  puVar3 = (uint *)*param_1;
  pHVar8 = DAT_0047bb20;
  do {
    DAT_0047bb20 = pHVar8;
    if (puVar3 == (uint *)0x0) {
      pcVar12 = param_2;
      if (*param_2 != '#') {
        pcVar12 = param_2 + 1;
      }
      lpType = (LPCSTR)0xc9;
      if (pHVar8 == (HMODULE)0x0) {
        iVar2 = 0;
        puVar5 = (undefined4 *)FUN_0041c4a0();
        iVar2 = FUN_0041c6e8(puVar5,iVar2);
        pHVar8 = *(HMODULE *)(iVar2 + 0xc);
      }
      pHVar4 = FindResourceA(pHVar8,pcVar12,lpType);
      if (pHVar4 == (HRSRC)0x0) {
        puVar5 = (undefined4 *)operator_new();
        if (puVar5 != (undefined4 *)0x0) {
          FUN_0042a56c(puVar5,param_2,uVar11);
        }
        puVar3 = (uint *)0x0;
        *in_FS_OFFSET = local_34;
      }
      else {
        pHVar8 = DAT_0047bb20;
        hResInfo = pHVar4;
        if (DAT_0047bb20 == (HMODULE)0x0) {
          iVar2 = 0;
          puVar5 = (undefined4 *)FUN_0041c4a0();
          iVar2 = FUN_0041c6e8(puVar5,iVar2);
          pHVar8 = *(HMODULE *)(iVar2 + 0xc);
        }
        hResData = LoadResource(pHVar8,hResInfo);
        if (hResData == (HGLOBAL)0x0) {
          puVar3 = (uint *)0x0;
          *in_FS_OFFSET = local_34;
        }
        else {
          pbVar6 = LockResource(hResData);
          local_3c = 4;
          if (*pbVar6 == 0) {
            FreeResource(hResData);
            puVar5 = (undefined4 *)operator_new();
            if (puVar5 != (undefined4 *)0x0) {
              FUN_0042a56c(puVar5,param_2,uVar11);
            }
            puVar3 = (uint *)0x0;
            *in_FS_OFFSET = local_34;
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
            puVar3 = (uint *)FUN_0042a5b0();
            if (puVar3 != (uint *)0x0) {
              FUN_0042a5c4(puVar3,pcVar10,uVar11,pHVar4,hResData);
            }
            if (*param_2 == '!') {
              uVar9 = 2;
            }
            else {
              uVar9 = 1;
            }
            *(undefined1 *)(puVar3 + 5) = uVar9;
            *in_FS_OFFSET = local_34;
          }
        }
      }
      return puVar3;
    }
    if (uVar11 == *puVar3) {
      pcVar12 = (char *)puVar3[1];
      if (*pcVar12 != *pcVar10) {
        pcVar12 = pcVar12 + 1;
      }
      iVar2 = FUN_0042ac6c(pcVar12,pcVar10);
      if (iVar2 != 0) {
        if (pcVar12 != (char *)puVar3[1]) {
          puVar3 = (uint *)0x0;
        }
        *in_FS_OFFSET = local_34;
        return puVar3;
      }
    }
    puVar3 = (uint *)puVar3[2];
    pHVar8 = DAT_0047bb20;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a898  FUN_0042a898   (430 bytes)   [unnamed]
int __cdecl FUN_0042a898(int param_1,ushort param_2)

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
  HGLOBAL local_8;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    local_8 = *(HGLOBAL *)(param_1 + 0x15);
    *(ushort *)(param_1 + 0xe) = param_2;
  }
  else {
    if ((*(char *)(param_1 + 0x14) == '\x02') && (iVar6 = FUN_0042ab74(param_2), iVar6 != 0)) {
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
    hModule = DAT_0047bb20;
    if (DAT_0047bb20 == (HMODULE)0x0) {
      iVar6 = 0;
      puVar3 = (undefined4 *)FUN_0041c4a0();
      iVar6 = FUN_0041c6e8(puVar3,iVar6);
      hModule = *(HMODULE *)(iVar6 + 0xc);
    }
    local_8 = LoadResource(hModule,hResInfo);
    if (local_8 == (HGLOBAL)0x0) {
      return *(int *)(param_1 + 4);
    }
  }
  pbVar4 = LockResource(local_8);
  local_c = (byte *)0x0;
  local_e = 0xffff;
  while (bVar1 = *pbVar4, uVar5 = local_e, pbVar2 = local_c, bVar1 != 0) {
    if (bVar1 < 0x21) {
      uVar5 = (bVar1 - 1) * 0x400 | (ushort)pbVar4[1];
      pbVar4 = pbVar4 + 2;
    }
    else {
      local_e = DAT_0047bbf8;
      uVar5 = DAT_0047bbf8;
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
  FreeResource(local_8);
  return iVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa7c  FUN_0042aa7c   (18 bytes)   [unnamed]
void __cdecl FUN_0042aa7c(int *param_1,int param_2)

{
  *(int *)(param_2 + 8) = *param_1;
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aa90  FUN_0042aa90   (225 bytes)   [unnamed]
int __cdecl FUN_0042aa90(int *param_1,ushort param_2)

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
    uVar5 = DAT_0047bbf8;
    if (((param_2 != 0) && (uVar5 = DAT_0047bb10, param_2 != 0x800)) &&
       (uVar5 = param_2, param_2 == 0x400)) {
      uVar5 = DAT_0047bb18;
    }
    cVar1 = *(char *)*param_1;
    if ((byte)(cVar1 - 1U) < 2) {
      iVar4 = FUN_0042a898(*param_1 + -0x14,uVar5);
    }
    else if (cVar1 == '!') {
      iVar4 = FUN_0042ab74(uVar5);
      if (iVar4 == 0) {
        pcVar6 = (char *)*param_1;
        puVar2 = (undefined4 *)FUN_0042a440();
        puVar3 = FUN_0042a644(puVar2,pcVar6);
        if (puVar3 == (uint *)0x0) {
          *param_1 = *param_1 + 1;
          iVar4 = *param_1;
        }
        else {
          *param_1 = (int)(puVar3 + 5);
          iVar4 = FUN_0042a898((int)puVar3,uVar5);
        }
      }
      else {
        iVar4 = *param_1 + 1;
      }
    }
    else if ((cVar1 == '#') || (cVar1 == '@')) {
      pcVar6 = (char *)*param_1;
      puVar2 = (undefined4 *)FUN_0042a440();
      puVar3 = FUN_0042a644(puVar2,pcVar6);
      if (puVar3 == (uint *)0x0) {
        *param_1 = 0;
        iVar4 = 0;
      }
      else {
        *param_1 = (int)(puVar3 + 5);
        iVar4 = FUN_0042a898((int)puVar3,uVar5);
      }
    }
    else {
      iVar4 = *param_1;
    }
  }
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ab74  FUN_0042ab74   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_0042ab74(ushort param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == DAT_0047bbf8) || (param_1 == (DAT_0047bbf8 & 0xff))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ac6c  FUN_0042ac6c   (99 bytes)   [unnamed]
int __cdecl FUN_0042ac6c(char *param_1,char *param_2)

{
  HMODULE hModule;
  int iVar1;
  char *lpProcName;
  
  if (DAT_0047bbdc == '\0') {
    lpProcName = "CompareStringA";
    hModule = GetModuleHandleA("kernel32");
    DAT_0047bbd8 = GetProcAddress(hModule,lpProcName);
    DAT_0047bbdc = DAT_0047bbdc + '\x01';
  }
  if (DAT_0047bbd8 == (FARPROC)0x0) {
    iVar1 = FUN_004679a4(param_1,param_2);
  }
  else {
    iVar1 = (*DAT_0047bbd8)();
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042acec  FUN_0042acec   (75 bytes)   [unnamed]
undefined * __stdcall FUN_0042acec(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bc11);
  if (DAT_0047bc00 == '\0') {
    FUN_0042aee8((undefined4 *)&DAT_0048c710);
    DAT_0047bc00 = DAT_0047bc00 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c710;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ad37  FUN_0042ad37   (361 bytes)   [unnamed]
void __stdcall FUN_0042ad37(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bc58);
  if (DAT_0047bc00 != '\0') {
    FUN_004209d0(0x48c827,0);
    FUN_004209d0(0x48c80e,0);
    FUN_004209d0(0x48c7f5,0);
    FUN_004209d0(0x48c7dc,0);
    FUN_004209d0(0x48c7c3,0);
    FUN_004209d0(0x48c7aa,0);
    FUN_004209d0(0x48c791,0);
    FUN_004209d0(0x48c778,0);
    FUN_004209d0(0x48c75f,0);
    FUN_004209d0(0x48c746,0);
    FUN_004209d0(0x48c72d,0);
    FUN_004209d0(0x48c714,0);
    DAT_0047bc00 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aea0  FUN_0042aea0   (69 bytes)   [unnamed]
char * __cdecl FUN_0042aea0(uint *param_1)

{
  char *pcVar1;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_0047bcf0;
  }
  strlen(param_1);
  pcVar1 = (char *)operator_new_array();
  pcVar1 = FUN_00467770(pcVar1,(char *)param_1);
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042aee8  FUN_0042aee8   (1075 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042aee8(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bd04);
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
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b3f0  FUN_0042b3f0   (153 bytes)   [unnamed]
int * __cdecl FUN_0042b3f0(int *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bed8);
  iVar4 = 0;
  do {
    if (param_2 < (int)(&DAT_0047bc28)[iVar4]) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  if (iVar4 < 0xc) {
    puVar2 = FUN_0042acec();
    piVar1 = *(int **)(puVar2 + iVar4 * 4 + 300);
    if (*piVar1 == 0) {
      piVar3 = (int *)FUN_00420a1c((int)(piVar1 + 1),*(uint *)((int)piVar1 + 0x15));
    }
    else {
      piVar3 = (int *)*piVar1;
      *piVar1 = *piVar3;
    }
    *param_1 = (int)piVar3;
    param_1[1] = iVar4;
  }
  else {
    iVar4 = operator_new_array();
    *param_1 = iVar4;
    param_1[1] = -1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b6a4  FUN_0042b6a4   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0042b6a4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bfb1);
  if (DAT_0047bfa0 == '\0') {
    FUN_0042b780(0x48c86c);
    DAT_0047bfa0 = DAT_0047bfa0 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c86c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b6ed  FUN_0042b6ed   (64 bytes)   [unnamed]
void __stdcall FUN_0042b6ed(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bfc5);
  if (DAT_0047bfa0 != '\0') {
    OWL::TMemDCCache::_dtor(0x48c86c,2);
    DAT_0047bfa0 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b780  FUN_0042b780   (70 bytes)   [unnamed]
int __cdecl FUN_0042b780(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47bfe0);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 5) = 0;
    *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b824  FUN_0042b824   (88 bytes)   [unnamed]
undefined4 __cdecl FUN_0042b824(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar2 * 5) == 0) {
      hdc = GetWindowDC((HWND)0x0);
      pHVar1 = CreateCompatibleDC(hdc);
      *(HDC *)(param_1 + iVar2 * 5) = pHVar1;
      ReleaseDC((HWND)0x0,hdc);
    }
    if (*(char *)(param_1 + 4 + iVar2 * 5) == '\0') break;
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 4 + iVar2 * 5) = 1;
  return *(undefined4 *)(param_1 + iVar2 * 5);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b87c  FUN_0042b87c   (51 bytes)   [unnamed]
void __cdecl FUN_0042b87c(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < 0x10 && (*(int *)(param_1 + iVar1 * 5) != 0)); iVar1 = iVar1 + 1) {
    if (param_2 == *(int *)(param_1 + iVar1 * 5)) {
      *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
      return;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b8b0  FUN_0042b8b0   (71 bytes)   [unnamed]
int * __cdecl FUN_0042b8b0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c004);
  FUN_00421638(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_0042b9d8(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b918  FUN_0042b918   (102 bytes)   [unnamed]
int * __cdecl FUN_0042b918(int *param_1,undefined4 *param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c028);
  FUN_00421638(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  pHVar1 = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)pHVar1;
  FUN_00427974(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b980  FUN_0042b980   (85 bytes)   [unnamed]
int * __cdecl FUN_0042b980(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c04c);
  FUN_00421638(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_0042b9d8(param_1);
  FUN_0042ba18(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042b9d8  FUN_0042b9d8   (63 bytes)   [unnamed]
void __cdecl FUN_0042b9d8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  HDC pHVar3;
  
  puVar1 = FUN_0042b6a4();
  iVar2 = FUN_0042b824((int)puVar1);
  *param_1 = iVar2;
  if (*param_1 == 0) {
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    *param_1 = (int)pHVar3;
    FUN_00427974(param_1,0x7fe3);
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba18  FUN_0042ba18   (67 bytes)   [unnamed]
void __cdecl FUN_0042ba18(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_004282cc(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 0x21) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x21) = pvVar1;
      }
      else {
        FUN_004282f8((uint)pvVar1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ba5c  FUN_0042ba5c   (42 bytes)   [unnamed]
void __cdecl FUN_0042ba5c(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x21) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x21));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x21) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bb1c  FUN_0042bb1c   (91 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042bb1c(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c100);
  *param_1 = &OWL::TMenu::vftable;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_2 != 0;
  FUN_0042bd98((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bb94  FUN_0042bb94   (109 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042bb94(undefined4 *param_1,int *param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c130);
  *param_1 = &OWL::TMenu::vftable;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_3 != 0;
  FUN_0042bd98((int)param_1,0x7fe8);
  FUN_0042bdc0((int)param_1,param_2,0,-1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bc04  FUN_0042bc04   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042bc04(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c160);
  *param_1 = &OWL::TMenu::vftable;
  param_1[1] = param_2;
  *(bool *)(param_1 + 2) = param_3 != 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bc50  FUN_0042bc50   (94 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042bc50(undefined4 *param_1,HWND param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c184);
  *param_1 = &OWL::TMenu::vftable;
  pHVar1 = GetMenu(param_2);
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_3 != 0;
  FUN_0042bd98((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bce8  FUN_0042bce8   (169 bytes, 2 ranges)   [unnamed]
UINT __cdecl FUN_0042bce8(int param_1,int param_2)

{
  UINT UVar1;
  HMENU pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x47c1c4);
  UVar1 = GetMenuItemID(*(HMENU *)(param_1 + 4),param_2);
  if (UVar1 == 0xffffffff) {
    pHVar2 = GetSubMenu(*(HMENU *)(param_1 + 4),param_2);
    if (pHVar2 == (HMENU)0x0) {
      UVar1 = 0;
      *in_FS_OFFSET = local_34;
    }
    else {
      FUN_0042bc04(local_10,pHVar2,0);
      UVar1 = FUN_0042bce8((int)local_10,0);
      UVar1 = UVar1 - 1;
      OWL::TMenu::_dtor(local_10,2);
      *in_FS_OFFSET = local_34;
    }
  }
  else {
    *in_FS_OFFSET = local_34;
  }
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bd98  FUN_0042bd98   (23 bytes)   [unnamed]
void __cdecl FUN_0042bd98(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0042c1c4(param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdc0  FUN_0042bdc0   (409 bytes)   [unnamed]
int * __cdecl FUN_0042bdc0(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  UINT uFlags;
  HMENU pHVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  CHAR local_14c [256];
  UINT local_4c;
  UINT_PTR local_48;
  int local_44;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  int local_1c [3];
  int local_10 [3];
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x47c220);
  if (param_4 < 0) {
    iVar2 = GetMenuItemCount((HMENU)param_2[1]);
    piVar1 = (int *)(iVar2 - param_3);
    param_4 = (int)piVar1;
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      uFlags = GetMenuState((HMENU)param_2[1],param_3 + iVar2,0x400);
      if (uFlags == 0xffffffff) {
        *in_FS_OFFSET = local_40;
        return (int *)local_40;
      }
      (**(code **)(*param_2 + 4))();
      FUN_0045032c();
      if ((uFlags & 0x10) == 0) {
        local_4c = FUN_0042bce8((int)param_2,param_3 + iVar2);
        piVar1 = (int *)AppendMenuA(*(HMENU *)(param_1 + 4),uFlags,local_4c,local_14c);
      }
      else {
        local_30 = 8;
        iVar4 = 0;
        local_44 = param_3 + iVar2;
        pHVar3 = GetSubMenu((HMENU)param_2[1],local_44);
        FUN_0042bc04(local_10,pHVar3,iVar4);
        local_24 = local_24 + 1;
        local_30 = 0x20;
        FUN_0042bb1c(local_1c,0);
        local_24 = local_24 + 1;
        local_30 = 0x14;
        FUN_0042bdc0((int)local_1c,local_10,0,-1);
        local_48 = (**(code **)(local_1c[0] + 4))();
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags & 0x10,local_48,local_14c);
        local_24 = local_24 + -1;
        OWL::TMenu::_dtor(local_1c,2);
        local_24 = local_24 + -1;
        piVar1 = local_10;
        OWL::TMenu::_dtor(piVar1,2);
        local_30 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  *in_FS_OFFSET = local_40;
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bf5c  FUN_0042bf5c   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042bf5c(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c25c);
  pHVar1 = CreatePopupMenu();
  FUN_0042bc04(param_1,pHVar1,param_2);
  *param_1 = &OWL::TPopupMenu::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bfc4  FUN_0042bfc4   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_0042bfc4(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47c280);
  FUN_004230f0(param_1,param_2,DAT_00484890);
  *param_1 = &OWL::TXMenu::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

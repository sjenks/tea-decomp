// TSMerge.exe — runtime / library code "code_0x0044c000"
// 166 functions, 0x0044c01c..0x0044fd18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044c01c  FUN_0044c01c   (43 bytes)   [unnamed]
void __cdecl FUN_0044c01c(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_0044b888((LPVOID)(param_1 + -4));
      return;
    }
    FUN_0044c048(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c048  FUN_0044c048   (263 bytes)   [unnamed]
void __cdecl FUN_0044c048(int param_1)

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
      if (puVar2 == (uint *)PTR_DAT_00470d4c) {
        PTR_DAT_00470d4c = *(undefined **)(PTR_DAT_00470d4c + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_00470d4c) {
        PTR_DAT_00470d4c = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_00470d28) {
      uVar5 = (uVar3 * 2 + DAT_00470d3c) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_00470d4c + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_00470d30;
      if (DAT_00470d54 < DAT_00470d50) {
        uVar3 = DAT_00470d2c;
      }
      if (uVar3 < *puVar2) {
        FUN_0044bf28(puVar2);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c150  FUN_0044c150   (59 bytes)   [unnamed]
int * __cdecl FUN_0044c150(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar2 = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_0044b7fc((undefined4*)&local_8,uVar2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *local_8 = uVar2 - 4;
    local_8 = local_8 + 1;
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c18c  FUN_0044c18c   (39 bytes)   [unnamed]
uint * __cdecl FUN_0044c18c(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_0044c150(param_1);
    return puVar1;
  }
  puVar1 = FUN_0044c1b4(param_1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c1b4  FUN_0044c1b4   (468 bytes, 2 ranges)   [unnamed]
uint * __cdecl FUN_0044c1b4(uint param_1)

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
    if (DAT_00470d3c == 0) {
      FUN_0044bc64(1);
    }
    puVar1 = PTR_DAT_00470d4c;
    if (uVar6 < DAT_00470d28) {
      iVar3 = uVar6 * 2 + DAT_00470d3c;
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
      puVar4 = (uint *)PTR_DAT_00470d44;
      if ((undefined4 *)PTR_DAT_00470d44 == &DAT_00470d40) {
        for (iVar3 = uVar6 * 2 + DAT_00470d3c + -4; iVar3 == *(int *)(iVar3 + 4); iVar3 = iVar3 + 8)
        {
        }
        puVar4 = (uint *)PTR_DAT_00470d4c;
        if (*(uint **)(iVar3 + 4) != (uint *)0x0) {
          puVar4 = *(uint **)(iVar3 + 4);
        }
      }
    }
    else {
      uVar8 = *(uint *)PTR_DAT_00470d4c;
      puVar4 = (uint *)PTR_DAT_00470d4c;
      if (uVar8 < uVar6) {
        *(undefined4 *)PTR_DAT_00470d4c = 0xfffffffd;
        for (puVar4 = *(uint **)(puVar1 + 4); *puVar4 < uVar6; puVar4 = (uint *)puVar4[1]) {
        }
        *(uint *)PTR_DAT_00470d4c = uVar8;
        if (puVar4 == (uint *)PTR_DAT_00470d4c) {
          puVar4 = &DAT_00470d40;
        }
      }
    }
    if (puVar4 == &DAT_00470d40) {
      iVar3 = FUN_0044bc64(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_0044c1b4(param_1);
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
        if (DAT_00470d28 <= (uVar8 & 0xfffffffc)) {
          PTR_DAT_00470d4c = (undefined *)puVar4[1];
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
        if (uVar8 < DAT_00470d28) {
          iVar3 = uVar8 * 2 + DAT_00470d3c;
          *(undefined4 *)((int)puVar4 + uVar6 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar4 + uVar6 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar4 + uVar6 + 8) + 8) = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          if (puVar4 == (uint *)PTR_DAT_00470d4c) {
            PTR_DAT_00470d4c = (undefined *)puVar4[1];
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
          PTR_DAT_00470d4c = (undefined *)piVar5;
        }
        puVar2 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c38c  FUN_0044c38c   (24 bytes)   [unnamed]
SIZE_T __stdcall FUN_0044c38c(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c3a4  FUN_0044c3a4   (96 bytes)   [unnamed]
void __stdcall FUN_0044c3a4(void)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = (*(int * *)&DAT_00470d34);
  while (piVar5 = piVar1, piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[0x23];
    piVar5[2] = piVar5[2] + -1;
    iVar7 = piVar5[2];
    piVar6 = piVar5 + iVar7 + 3;
    for (; -1 < iVar7; iVar7 = iVar7 + -1) {
      pvVar2 = (LPVOID)*piVar6;
      iVar3 = *piVar5;
      iVar4 = *piVar6;
      piVar5[1] = iVar4 - (int)piVar5;
      *piVar5 = iVar4 - (int)piVar5;
      FUN_0044b870(pvVar2,iVar3 - ((int)pvVar2 - (int)piVar5));
      FUN_0044b888(pvVar2);
      piVar6 = piVar6 + -1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c404  FUN_0044c404   (296 bytes)   [unnamed]
int __cdecl FUN_0044c404(int param_1,uint param_2)

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
        if (DAT_00470d28 <= (*puVar2 & 0xfffffffc)) {
          local_8 = *(int *)((int)puVar4 + uVar1 + 0xc);
        }
        if (puVar2 == (uint *)PTR_DAT_00470d4c) {
          PTR_DAT_00470d4c = *(undefined **)((int)puVar4 + uVar1 + 8);
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
        if (uVar1 < DAT_00470d28) {
          local_8 = uVar1 * 2 + DAT_00470d3c + -0xc;
        }
        else if (local_8 == 0) {
          local_8 = *(int *)(PTR_DAT_00470d4c + 4);
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
// 0x0044c52c  FUN_0044c52c   (177 bytes, 3 ranges)   [unnamed]
uint * __cdecl FUN_0044c52c(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 + 0x1003 & 0xfffff000;
  uVar3 = param_1[-1] & 0xfffffffc;
  puVar1 = param_1;
  if (uVar3 != uVar2 - 4) {
    if (uVar3 < uVar2 - 4) {
      puVar1 = FUN_0044c18c(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,uVar3);
        FUN_0044c01c((int)param_1);
      }
    }
    else if (uVar2 - 4 < 0x100000) {
      puVar1 = FUN_0044c18c(param_2);
      if (puVar1 != (uint *)0x0) {
        memcpy(puVar1,param_1,param_2);
        FUN_0044c01c((int)param_1);
      }
    }
    else {
      FUN_0044b870((LPVOID)((int)param_1 + (uVar2 - 4)),(uVar3 + 4) - uVar2);
      param_1[-1] = uVar2 - 4;
    }
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c5e4  FUN_0044c5e4   (150 bytes)   [unnamed]
uint * __cdecl FUN_0044c5e4(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_0044c01c((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_0044c18c(param_2);
  }
  else if ((param_1[-1] & 0xfffffffc) < 0x100000) {
    iVar2 = FUN_0044c404((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_0044c18c(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_004559f4(puVar1,param_1,param_2);
        FUN_0044c01c((int)param_1);
      }
    }
  }
  else {
    puVar1 = FUN_0044c52c(param_1,param_2);
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c67c  FUN_0044c67c   (26 bytes)   [unnamed]
uint __cdecl FUN_0044c67c(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -4) & 0xfffffffc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c698  FUN_0044c698   (1 bytes)   [unnamed]
void __stdcall FUN_0044c698(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c69c  FUN_0044c69c   (1 bytes)   [unnamed]
void __stdcall FUN_0044c69c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c960  FUN_0044c960   (55 bytes)   [unnamed]
void __cdecl FUN_0044c960(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_30 [8];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470d74);
  FUN_0044de00(local_30);
  FUN_0044dee8(param_1);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c998  FUN_0044c998   (55 bytes)   [unnamed]
void __cdecl FUN_0044c998(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_30 [8];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x470d7c);
  FUN_0044cc2c(local_30);
  FUN_0044de3c(param_1);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c9d0  FUN_0044c9d0   (152 bytes)   [unnamed]
void __cdecl FUN_0044c9d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0044ca68(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0044ca74(param_1);
    iVar1 = FUN_0044ca88(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0044ca74(param_1);
      iVar1 = FUN_0044ca94(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0044ca74(param_1);
    FUN_0044cb48(local_c);
    FUN_0044cb70();
    FUN_0044cbb0(param_1);
    FUN_0044ca74(param_1);
    FUN_0044cb88(local_14);
    FUN_0044cbc4();
    local_18 = 0;
    FUN_0044cbd4((int)local_28,param_1,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca68  FUN_0044ca68   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ca68(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca74  FUN_0044ca74   (20 bytes)   [unnamed]
int __cdecl FUN_0044ca74(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044ca68(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca88  FUN_0044ca88   (11 bytes)   [unnamed]
int __cdecl FUN_0044ca88(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca94  FUN_0044ca94   (34 bytes)   [unnamed]
int __cdecl FUN_0044ca94(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0044cab8();
  if (param_1 != piVar1) {
    iVar2 = FUN_0044cb28(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cab8  FUN_0044cab8   (6 bytes)   [unnamed]
undefined4 * __stdcall FUN_0044cab8(void)

{
  return &DAT_00471d5c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cac0  FUN_0044cac0   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044cac0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471d70);
  FUN_0044caf4(param_1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044caf4  FUN_0044caf4   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044caf4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471d78);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cb28  FUN_0044cb28   (32 bytes)   [unnamed]
int __cdecl FUN_0044cb28(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0044cab8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cb48  FUN_0044cb48   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cb48(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471d80);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cb70  FUN_0044cb70   (15 bytes)   [unnamed]
void __stdcall FUN_0044cb70(void)

{
  FUN_0044cb80();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cb80  FUN_0044cb80   (5 bytes)   [unnamed]
void __stdcall FUN_0044cb80(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cb88  FUN_0044cb88   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cb88(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471d88);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cbb0  FUN_0044cbb0   (20 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cbb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044ca74(param_1);
  return *(undefined4 *)(iVar1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cbc4  FUN_0044cbc4   (15 bytes)   [unnamed]
void __stdcall FUN_0044cbc4(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cbd4  FUN_0044cbd4   (35 bytes)   [unnamed]
int __cdecl FUN_0044cbd4(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_0044cbf8(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cbf8  FUN_0044cbf8   (52 bytes)   [unnamed]
int __cdecl FUN_0044cbf8(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471d90);
  FUN_0044cc2c(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc2c  FUN_0044cc2c   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cc2c(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471d98);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc54  FUN_0044cc54   (58 bytes)   [unnamed]
int * __cdecl FUN_0044cc54(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0044cc90((undefined4 *)&DAT_004733a0);
  piVar2 = (int *)FUN_0044cc9c(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_00455140(param_1,(uint *)&DAT_004733a0,'\x01',0x20,&LAB_00410f50);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc90  FUN_0044cc90   (10 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cc90(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc9c  FUN_0044cc9c   (23 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cc9c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00452e94(*param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ccb4  FUN_0044ccb4   (44 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044ccb4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472de4);
  FUN_00452ec4(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cce0  FUN_0044cce0   (72 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044cce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472dfc);
  FUN_00452ef0(param_1,param_2,param_3);
  *param_1 = &std::locale::facet::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cd28  FUN_0044cd28   (66 bytes)   [unnamed]
int * __cdecl FUN_0044cd28(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472e20);
  FUN_004502e8(param_1,(int *)(param_2 + 0x10));
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cda8  FUN_0044cda8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cda8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cdb4  FUN_0044cdb4   (18 bytes)   [unnamed]
int __cdecl FUN_0044cdb4(int *param_1,int param_2)

{
  return param_2 * 4 + *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cdc8  FUN_0044cdc8   (101 bytes)   [unnamed]
int * __cdecl FUN_0044cdc8(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471dc0);
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
// 0x0044ce78  FUN_0044ce78   (111 bytes)   [unnamed]
int __cdecl FUN_0044ce78(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (param_2 != param_1) {
    piVar1 = (int *)FUN_0044ca74(param_2);
    iVar2 = FUN_0044ca88(piVar1);
    if (iVar2 < 1) {
      puVar3 = (uint *)FUN_0044cf00(param_2);
      FUN_0044cf10(param_1,puVar3);
    }
    else {
      piVar1 = (int *)FUN_0044ca74(param_2);
      FUN_0044cee8(piVar1);
      FUN_0044c9d0(param_1);
      local_8 = FUN_0044ca68(param_2);
      FUN_0044cbd4((int)local_18,param_1,&local_8);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cee8  FUN_0044cee8   (21 bytes)   [unnamed]
void __cdecl FUN_0044cee8(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0044cab8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cf00  FUN_0044cf00   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0044cf00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044ca68(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cf10  FUN_0044cf10   (376 bytes)   [unnamed]
int __cdecl FUN_0044cf10(int param_1,uint *param_2)

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
  
  __InitExceptBlockLDTC(0x471e00);
  if (param_2 == (uint *)0x0) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    pcVar10 = FUN_0044aeec;
    uVar9 = 0;
    local_40 = 0x14;
    FUN_0044cc2c(local_58);
    puVar2 = FUN_00455640(local_150,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0044d090(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    std::string::_dtor((int)local_2c,2);
    local_40 = 8;
    FUN_0045ed74((uint *)&DAT_00404790,local_1c,uVar9,(undefined*)pcVar10,uVar11,uVar12,uVar13,uVar14);
  }
  uVar9 = FUN_0044d590();
  local_59 = (char)uVar9;
  bVar1 = FUN_0044d0e4((char *)param_2,&local_59);
  if (bVar1) {
    piVar4 = (int *)FUN_0044ca74(param_1);
    iVar5 = FUN_0044ca88(piVar4);
    if (iVar5 == 1) {
      iVar5 = FUN_0044ca74(param_1);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_0044d590();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)FUN_0044ca68(param_1);
      FUN_0044d0fc(puVar6,puVar2);
    }
    else {
      FUN_0044c9d0(param_1);
      piVar4 = FUN_0044cab8();
      FUN_0044cee8(piVar4);
      puVar7 = FUN_0044cab8();
      local_60 = FUN_0044d594((int)puVar7);
      FUN_0044cbd4((int)local_160,param_1,&local_60);
    }
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar11 = FUN_0044d10c(param_2);
    uVar8 = FUN_0044cbb0(param_1);
    param_1 = FUN_0044d5a0(param_1,0,uVar8,(uint)param_2,uVar11);
    *in_FS_OFFSET = local_50;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d088  FUN_0044d088   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_0044d088(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d090  FUN_0044d090   (83 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d090(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472e44);
  FUN_00452f44(param_1);
  *param_1 = &std::logic_error::vftable;
  FUN_0044fa64((int)(param_1 + 2),param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d0e4  FUN_0044d0e4   (21 bytes)   [unnamed]
bool __cdecl FUN_0044d0e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d0fc  FUN_0044d0fc   (15 bytes)   [unnamed]
void __cdecl FUN_0044d0fc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d10c  FUN_0044d10c   (15 bytes)   [unnamed]
char * __cdecl FUN_0044d10c(uint *param_1)

{
  char *pcVar1;
  
  pcVar1 = strlen(param_1);
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d11c  std::string::string_from_cstr   (304 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x471e5c);
  local_40 = 8;
  FUN_0044d26c(param_1,0);
  if (param_2 == (uint *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0044aeec;
    uVar5 = 0;
    local_40 = 0x2c;
    FUN_0044cc2c(local_58);
    puVar1 = FUN_00455640(local_14c,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    puVar2 = (uint *)FUN_0044d088(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_0044d090(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    std::string::_dtor((int)local_2c,2);
    local_40 = 0x20;
    FUN_0045ed74((uint *)&DAT_00404790,local_1c,uVar5,(undefined*)pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  uVar7 = FUN_0044d10c(param_2);
  local_40 = 8;
  piVar3 = std::string::__getRep(param_1,uVar7,uVar7);
  local_5c = FUN_0044d594((int)piVar3);
  FUN_0044cbd4((int)local_15c,param_1,&local_5c);
  puVar4 = (undefined4 *)FUN_0044ca68(param_1);
  FUN_0044d24c(puVar4,param_2,uVar7);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d24c  FUN_0044d24c   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d24c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d26c  FUN_0044d26c   (55 bytes)   [unnamed]
int __cdecl FUN_0044d26c(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471e94);
  FUN_0044cb88(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d2a4  std::string::__getRep   (191 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
    piVar1 = FUN_0044cab8();
    FUN_0044cee8(piVar1);
    piVar2 = FUN_0044cab8();
  }
  else {
    FUN_0044cb88(local_c);
    piVar2 = (int *)FUN_0044d364();
    puVar3 = FUN_0044d410(local_24,0);
    piVar1 = piVar2;
    uVar4 = FUN_0044cb48(local_14);
    FUN_0044d444(uVar4,piVar1,puVar3);
    iVar5 = FUN_0044d594((int)piVar2);
    local_15 = 0;
    FUN_0044d540(local_c,iVar5,&local_15);
    piVar2[1] = param_2;
    FUN_0044d574(piVar2,1);
    iVar5 = FUN_0044d594((int)piVar2);
    piVar2[2] = param_3;
    *(undefined1 *)(iVar5 + param_3) = 0;
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d364  FUN_0044d364   (106 bytes)   [unnamed]
int __stdcall FUN_0044d364(void)

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
  
  __InitExceptBlockLDTC(0x471eac);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &LAB_004068bc;
    uVar2 = 0;
    FUN_0044d3d0(&local_8);
    FUN_0045ed74((uint *)&DAT_00406864,&local_8,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
  }
  *in_FS_OFFSET = local_2c;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d3d0  FUN_0044d3d0   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d3d0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472e74);
  FUN_00452f44(param_1);
  *param_1 = &std::bad_alloc::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d410  FUN_0044d410   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d410(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471ec0);
  FUN_0044caf4(param_1,param_2 + -1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d444  FUN_0044d444   (21 bytes)   [unnamed]
void __cdecl FUN_0044d444(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0044d45c(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d45c  FUN_0044d45c   (78 bytes)   [unnamed]
void __cdecl FUN_0044d45c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x471ed8);
  puVar1 = (undefined4 *)FUN_0044d4ac(0xc,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044d50c(puVar1,param_2);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d4ac  FUN_0044d4ac   (8 bytes)   [unnamed]
undefined4 __cdecl FUN_0044d4ac(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d50c  FUN_0044d50c   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d50c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471ef8);
  FUN_0044caf4(param_1,*param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d540  FUN_0044d540   (21 bytes)   [unnamed]
void __cdecl FUN_0044d540(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  FUN_0044d558(param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d558  FUN_0044d558   (26 bytes)   [unnamed]
void __cdecl FUN_0044d558(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_0044d4ac(1,param_1);
  *puVar1 = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d574  FUN_0044d574   (25 bytes)   [unnamed]
void __cdecl FUN_0044d574(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0044cab8();
  if (param_1 != piVar1) {
    *param_1 = param_2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d590  FUN_0044d590   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_0044d590(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d594  FUN_0044d594   (11 bytes)   [unnamed]
int __cdecl FUN_0044d594(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d5a0  FUN_0044d5a0   (40 bytes)   [unnamed]
int __cdecl FUN_0044d5a0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_0044d5c8(param_1,param_2,param_3,param_4,param_5,0,param_5);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d5c8  FUN_0044d5c8   (1015 bytes)   [unnamed]
int __cdecl FUN_0044d5c8(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7)

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
  
  __InitExceptBlockLDTC(0x471f58);
  uVar1 = FUN_0044cbb0(param_1);
  if ((uVar1 < param_2) || (param_5 < param_6)) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    puVar10 = &LAB_00403038;
    uVar9 = 0;
    local_68 = 0x14;
    FUN_0044cc2c(local_80);
    uVar1 = FUN_0044cbb0(param_1);
    if (param_5 < uVar1) {
      FUN_0044cbb0(param_1);
    }
    FUN_0044cbb0(param_1);
    puVar2 = FUN_00455640(local_190,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0044d9c0(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_2c,2);
    local_68 = 8;
    FUN_0045ed74((uint *)&DAT_00402fdc,local_1c,uVar9,puVar10,uVar11,uVar12,uVar13,uVar14);
  }
  iVar4 = FUN_0044cbb0(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  uVar1 = param_5 - param_6;
  if (param_7 < uVar1) {
    uVar1 = param_7;
  }
  iVar4 = FUN_0044cbb0(param_1);
  if (DAT_00471f90 - uVar1 <= iVar4 - local_84) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    puVar10 = &LAB_00402ee0;
    uVar9 = 0;
    local_68 = 0x2c;
    FUN_0044cc2c(local_8c);
    FUN_0044cbb0(param_1);
    puVar2 = FUN_00455640(local_280,PTR_s_resulting_length_is_invalid_in_f_00474070);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    std::string::string_from_cstr((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0044da08(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x20;
    FUN_0045ed74((uint *)&DAT_00402e84,local_44,uVar9,puVar10,uVar11,uVar12,uVar13,uVar14);
  }
  iVar4 = FUN_0044cbb0(param_1);
  local_90 = (iVar4 - local_84) + uVar1;
  if (local_90 == 0) {
    FUN_0044c9d0(param_1);
    piVar5 = FUN_0044cab8();
    FUN_0044cee8(piVar5);
    puVar6 = FUN_0044cab8();
    local_94 = FUN_0044d594((int)puVar6);
    FUN_0044cbd4((int)local_290,param_1,&local_94);
    goto LAB_0044d9a5;
  }
  iVar4 = FUN_0044cbb0(param_1);
  local_98 = (iVar4 - local_84) - param_2;
  piVar5 = (int *)FUN_0044ca74(param_1);
  iVar4 = FUN_0044ca88(piVar5);
  if ((iVar4 < 2) && (uVar11 = FUN_0044da70(param_1), local_90 <= uVar11)) {
    if ((param_4 != 0) && (uVar11 = FUN_0044da94(param_1), uVar11 <= param_4)) {
      iVar4 = FUN_0044da94(param_1);
      iVar7 = FUN_0044cbb0(param_1);
      if (param_4 < (uint)(iVar4 + iVar7)) goto LAB_0044d864;
    }
    if (local_98 != 0) {
      uVar11 = local_98;
      iVar4 = FUN_0044ca68(param_1);
      puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
      iVar4 = FUN_0044ca68(param_1);
      FUN_0044da50((undefined4 *)(iVar4 + param_2 + uVar1),puVar6,uVar11);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)(param_4 + param_6);
      iVar4 = FUN_0044ca68(param_1);
      FUN_0044da50((undefined4 *)(iVar4 + param_2),puVar6,uVar1);
    }
    iVar4 = FUN_0044ca74(param_1);
    uVar1 = local_90;
    *(uint *)(iVar4 + 8) = local_90;
    iVar4 = FUN_0044ca68(param_1);
    puVar2 = (undefined1 *)(iVar4 + uVar1);
    uVar9 = FUN_0044d590();
    *puVar2 = (char)uVar9;
  }
  else {
LAB_0044d864:
    local_9c = std::string::__getRep(param_1,local_90,local_90);
    if (param_2 != 0) {
      uVar11 = param_2;
      puVar6 = (undefined4 *)FUN_0044ca68(param_1);
      puVar8 = (undefined4 *)FUN_0044d594((int)local_9c);
      FUN_0044d24c(puVar8,puVar6,uVar11);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)(param_4 + param_6);
      uVar11 = uVar1;
      iVar4 = FUN_0044d594((int)local_9c);
      FUN_0044d24c((undefined4 *)(iVar4 + param_2),puVar6,uVar11);
    }
    if (local_98 != 0) {
      uVar11 = local_98;
      iVar4 = FUN_0044ca68(param_1);
      puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
      iVar4 = FUN_0044d594((int)local_9c);
      FUN_0044d24c((undefined4 *)(iVar4 + param_2 + uVar1),puVar6,uVar11);
    }
    FUN_0044c9d0(param_1);
    local_a0 = FUN_0044d594((int)local_9c);
    FUN_0044cbd4((int)local_2a0,param_1,&local_a0);
  }
LAB_0044d9a5:
  iVar4 = FUN_0044ca68(param_1);
  *in_FS_OFFSET = local_78;
  return iVar4 + param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d9c0  FUN_0044d9c0   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d9c0(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472e98);
  FUN_0044d090(param_1,param_2);
  *param_1 = &std::out_of_range::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da08  FUN_0044da08   (69 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044da08(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472ebc);
  FUN_0044d090(param_1,param_2);
  *param_1 = &std::length_error::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da50  FUN_0044da50   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044da50(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  FUN_004559f4(param_1,param_2,param_3);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da70  FUN_0044da70   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_0044da70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0044ca74(param_1);
  uVar2 = FUN_0044da88(iVar1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da88  FUN_0044da88   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044da88(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da94  FUN_0044da94   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0044da94(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044ca68(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dbb4  FUN_0044dbb4   (152 bytes)   [unnamed]
void __cdecl FUN_0044dbb4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0044dc4c(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0044dc58(param_1);
    iVar1 = FUN_0044dc6c(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0044dc58(param_1);
      iVar1 = FUN_0044dc78(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_0044dc58(param_1);
    FUN_0044dd30(local_c);
    FUN_0044dd58();
    FUN_0044de28(param_1);
    FUN_0044dc58(param_1);
    FUN_0044dd70(local_14);
    FUN_0044dd98();
    local_18 = 0;
    FUN_0044dda8((int)local_28,param_1,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dc4c  FUN_0044dc4c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044dc4c(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dc58  FUN_0044dc58   (20 bytes)   [unnamed]
int __cdecl FUN_0044dc58(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044dc4c(param_1);
  return iVar1 + -0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dc6c  FUN_0044dc6c   (11 bytes)   [unnamed]
int __cdecl FUN_0044dc6c(int *param_1)

{
  return *param_1 + 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dc78  FUN_0044dc78   (34 bytes)   [unnamed]
int __cdecl FUN_0044dc78(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0044dc9c();
  if (param_1 != piVar1) {
    iVar2 = FUN_0044dd10(param_1);
    return iVar2;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dc9c  FUN_0044dc9c   (6 bytes)   [unnamed]
undefined * __stdcall FUN_0044dc9c(void)

{
  return &DAT_00471fdc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dca4  FUN_0044dca4   (54 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044dca4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471ff0);
  FUN_0044dcdc(param_1,1);
  *(undefined2 *)(param_1 + 3) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dcdc  FUN_0044dcdc   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044dcdc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x471ff8);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dd10  FUN_0044dd10   (32 bytes)   [unnamed]
int __cdecl FUN_0044dd10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044dc9c();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dd30  FUN_0044dd30   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0044dd30(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472000);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dd58  FUN_0044dd58   (15 bytes)   [unnamed]
void __stdcall FUN_0044dd58(void)

{
  FUN_0044dd68();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dd68  FUN_0044dd68   (5 bytes)   [unnamed]
void __stdcall FUN_0044dd68(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dd70  FUN_0044dd70   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0044dd70(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472008);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dd98  FUN_0044dd98   (15 bytes)   [unnamed]
void __stdcall FUN_0044dd98(void)

{
  operator_delete();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dda8  FUN_0044dda8   (35 bytes)   [unnamed]
int __cdecl FUN_0044dda8(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 8) = *param_3;
  FUN_0044ddcc(param_1,param_2);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ddcc  FUN_0044ddcc   (52 bytes)   [unnamed]
int __cdecl FUN_0044ddcc(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472010);
  FUN_0044de00(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044de00  FUN_0044de00   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0044de00(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472018);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044de28  FUN_0044de28   (20 bytes)   [unnamed]
undefined4 __cdecl FUN_0044de28(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044dc58(param_1);
  return *(undefined4 *)(iVar1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044de3c  FUN_0044de3c   (111 bytes)   [unnamed]
int __cdecl FUN_0044de3c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x472038);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0044deac(param_1,local_30 + 1);
  puVar1 = FUN_0044cab8();
  local_30[0] = FUN_0044d594((int)puVar1);
  FUN_0044cbd4((int)local_40,param_1,local_30);
  piVar2 = FUN_0044cab8();
  FUN_0044cee8(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044deac  FUN_0044deac   (58 bytes)   [unnamed]
int __cdecl FUN_0044deac(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472058);
  FUN_0044cb88(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dee8  FUN_0044dee8   (111 bytes)   [unnamed]
int __cdecl FUN_0044dee8(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x472070);
  local_18 = 8;
  local_30[1] = 0;
  FUN_0044df74(param_1,local_30 + 1);
  puVar1 = FUN_0044dc9c();
  local_30[0] = FUN_0044dfb0((int)puVar1);
  FUN_0044dda8((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_0044dc9c();
  FUN_0044dfbc(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044df74  FUN_0044df74   (58 bytes)   [unnamed]
int __cdecl FUN_0044df74(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472090);
  FUN_0044dd70(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dfb0  FUN_0044dfb0   (11 bytes)   [unnamed]
int __cdecl FUN_0044dfb0(int param_1)

{
  return param_1 + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dfbc  FUN_0044dfbc   (21 bytes)   [unnamed]
void __cdecl FUN_0044dfbc(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044dc9c();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dfd4  FUN_0044dfd4   (237 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044dfd4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4720c8);
  FUN_0044e12c(param_1);
  *param_1 = &std::basic_filebuf_char::vftable;
  uVar1 = FUN_0044e218();
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xf] = puVar2;
  *in_FS_OFFSET = local_30;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e0c4  FUN_0044e0c4   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e0c4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472ed0);
  *param_1 = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e12c  FUN_0044e12c   (79 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e12c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472128);
  *param_1 = &std::basic_streambuf_char::vftable;
  FUN_0044e17c(param_1 + 8);
  FUN_0044e1e4((int)param_1,'\x01');
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e17c  FUN_0044e17c   (70 bytes)   [unnamed]
int * __cdecl FUN_0044e17c(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472ee8);
  if (DAT_004775d4 == 0) {
    FUN_00454940();
  }
  iVar1 = DAT_004775d4;
  *param_1 = DAT_004775d4;
  FUN_00452fd4(iVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e1e4  FUN_0044e1e4   (51 bytes)   [unnamed]
void __cdecl FUN_0044e1e4(int param_1,char param_2)

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
// 0x0044e218  FUN_0044e218   (8 bytes)   [unnamed]
undefined4 __stdcall FUN_0044e218(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e220  FUN_0044e220   (275 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e220(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x47216c);
  FUN_0044e12c(param_1);
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
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xe] = puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
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
// 0x0044e3b8  FUN_0044e3b8   (358 bytes)   [unnamed]
int * __cdecl FUN_0044e3b8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4721f4);
  operator_delete();
  operator_delete();
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xe] = (int)puVar2;
  puVar2 = (undefined4 *)operator_new();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0044e0c4(puVar2,0);
  }
  param_1[0xf] = (int)puVar2;
  param_1[0xd] = 0;
  bVar1 = FUN_0044e524(param_1,param_1[9]);
  if ((bVar1) && (iVar3 = FUN_0044e218(), iVar3 != param_1[9])) {
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      FUN_0044e520();
      (**(code **)(*param_1 + 0x24))();
    }
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    param_1[0xb] = 0;
    *in_FS_OFFSET = local_30;
  }
  else {
    iVar3 = FUN_0044e218();
    if (iVar3 == param_1[9]) {
      param_1 = (int *)0x0;
      *in_FS_OFFSET = local_30;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) != '\0') {
        FUN_0044e520();
        (**(code **)(*param_1 + 0x24))();
      }
      operator_delete_array();
      param_1[0x10] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((int)param_1 + 0x29) = 0;
      param_1[0xb] = 0;
      iVar3 = FUN_0044e534(param_1,param_1[9]);
      if (iVar3 == -1) {
        param_1 = (int *)0x0;
        *in_FS_OFFSET = local_30;
      }
      else {
        iVar3 = FUN_0044e218();
        param_1[9] = iVar3;
        *in_FS_OFFSET = local_30;
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e520  FUN_0044e520   (4 bytes)   [unnamed]
undefined4 __stdcall FUN_0044e520(void)

{
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e524  FUN_0044e524   (15 bytes)   [unnamed]
bool __cdecl FUN_0044e524(undefined4 param_1,int param_2)

{
  return param_2 < 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e534  FUN_0044e534   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e534(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_00456e30(param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e5a4  FUN_0044e5a4   (104 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e5a4(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472260);
  if (param_2 == 0) {
    *param_1 = param_1 + 3;
    FUN_0044e66c(param_1 + 3);
  }
  param_1[1] = &std::basic_istream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00473090;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e60c  FUN_0044e60c   (95 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e60c(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472284);
  if (param_2 == 0) {
    *param_1 = param_1 + 2;
    FUN_0044e66c(param_1 + 2);
  }
  param_1[1] = &std::basic_ostream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00473074;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e66c  FUN_0044e66c   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e66c(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4722a8);
  FUN_00453658(param_1);
  *param_1 = &std::basic_ios_char::vftable;
  FUN_0044e6d4((int)param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e6d4  FUN_0044e6d4   (79 bytes)   [unnamed]
void __cdecl FUN_0044e6d4(int param_1,undefined4 param_2)

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
  uVar1 = FUN_0044e724(param_1);
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e724  FUN_0044e724   (99 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e724(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  int local_8;
  
  __InitExceptBlockLDTC(0x4722cc);
  FUN_0044cd28(&local_8,param_1);
  piVar1 = (int *)FUN_0044cc54(&local_8);
  uVar2 = FUN_0044e788(piVar1);
  std::locale::_dtor(&local_8,2);
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e788  FUN_0044e788   (21 bytes)   [unnamed]
undefined4 __cdecl FUN_0044e788(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e7a0  FUN_0044e7a0   (21 bytes)   [unnamed]
void __cdecl FUN_0044e7a0(int param_1,uint param_2)

{
  FUN_0044e7b8(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e7b8  FUN_0044e7b8   (637 bytes)   [unnamed]
void __cdecl FUN_0044e7b8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
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
  
  __InitExceptBlockLDTC(0x472364);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_0044ea38(param_1);
  uVar2 = FUN_0044ea44(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004086e0;
      uVar6 = 0;
      local_90 = 0x14;
      FUN_0044cc2c(local_a8);
      puVar3 = FUN_00455640(local_1a8,PTR_s_iostream_object_has_failbit_set_00473194);
      puVar4 = (uint *)FUN_0044d088(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_2c,puVar4);
      local_84 = local_84 + 1;
      FUN_0045336c(local_1c,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_2c,2);
      local_90 = 8;
      FUN_0045ed74((uint *)&DAT_00408678,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004086e0;
      uVar6 = 0;
      local_90 = 0x2c;
      FUN_0044cc2c(local_b0);
      puVar3 = FUN_00455640(local_298,PTR_s_iostream_object_has_badbit_set_00473198);
      puVar4 = (uint *)FUN_0044d088(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_54,puVar4);
      local_84 = local_84 + 1;
      FUN_0045336c(local_44,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_54,2);
      local_90 = 0x20;
      FUN_0045ed74((uint *)&DAT_00408678,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004086e0;
      uVar6 = 0;
      local_90 = 0x44;
      FUN_0044cc2c(local_b8);
      puVar3 = FUN_00455640(local_388,PTR_s_iostream_object_has_eofbit_set_0047319c);
      puVar4 = (uint *)FUN_0044d088(puVar3);
      iVar5 = std::string::string_from_cstr((int)local_7c,puVar4);
      local_84 = local_84 + 1;
      FUN_0045336c(local_6c,iVar5);
      local_84 = local_84 + 2;
      std::string::_dtor((int)local_7c,2);
      local_90 = 0x38;
      FUN_0045ed74((uint *)&DAT_00408678,local_6c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
  }
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ea38  FUN_0044ea38   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ea38(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ea44  FUN_0044ea44   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ea44(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ea50  FUN_0044ea50   (266 bytes)   [unnamed]
int * __cdecl FUN_0044ea50(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if ((param_3 & 0x20) != 0) {
    uVar3 = param_3 & 0xffffffdf | 1;
  }
  iVar1 = FUN_0044e218();
  if (iVar1 == param_1[9]) {
    param_1[1] = param_3;
    FUN_0044e1e4((int)param_1,'\0');
    uVar3 = *(uint *)(&DAT_00473114 + (uVar3 & 0xffffff3f) * 4);
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
      iVar1 = thunk_FUN_00456f50(param_2,uVar3,param_4);
      param_1[9] = iVar1;
      iVar2 = FUN_0044e218();
      if (iVar1 == iVar2) {
        param_1 = (int *)0x0;
      }
      else {
        operator_delete_array();
        iVar1 = operator_new_array();
        param_1[0x10] = iVar1;
        if ((param_3 & 0x20) != 0) {
          iVar1 = FUN_0044eb5c(param_1,param_1[9],0,2);
          param_1[0xd] = iVar1;
          if (iVar1 == -1) {
            FUN_0044e3b8(param_1);
            operator_delete_array();
            param_1[0x10] = 0;
            iVar1 = FUN_0044e218();
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
// 0x0044eb5c  FUN_0044eb5c   (25 bytes)   [unnamed]
DWORD __cdecl FUN_0044eb5c(undefined4 param_1,uint param_2,LONG param_3,int param_4)

{
  DWORD DVar1;
  
  DVar1 = thunk_FUN_00456ed8(param_2,param_3,param_4);
  return DVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb78  FUN_0044eb78   (24 bytes)   [unnamed]
void __cdecl FUN_0044eb78(int param_1,uint param_2)

{
  FUN_0044e7a0(param_1,*(uint *)(param_1 + 0x30) | param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ecfc  FUN_0044ecfc   (174 bytes)   [unnamed]
int * __cdecl FUN_0044ecfc(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472430);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    FUN_0044e66c(param_1 + 0x14);
  }
  FUN_0044e5a4(param_1,1);
  param_1[1] = (int)&std::basic_ifstream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00473048;
  FUN_0044dfd4(param_1 + 3);
  FUN_0044e6d4(*param_1,param_1 + 3);
  FUN_0044edac(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044edac  FUN_0044edac   (69 bytes)   [unnamed]
void __cdecl FUN_0044edac(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0044e7a0(*param_1,0);
  piVar1 = FUN_0044ea50(param_1 + 3,param_2,param_3 | 4,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0044eb78(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ee94  FUN_0044ee94   (175 bytes)   [unnamed]
int * __cdecl FUN_0044ee94(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472478);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 3);
    FUN_0044e66c(param_1 + 3);
  }
  param_1[1] = (int)&std::basic_istream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00473090;
  param_1[2] = 0;
  if (param_3 == 0) {
    FUN_0044e6d4(*param_1,0);
  }
  else {
    uVar1 = FUN_0044ef44(param_3);
    if ((uVar1 & 4) == 0) {
      FUN_0044e6d4(*param_1,0);
    }
    else {
      FUN_0044e6d4(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef44  FUN_0044ef44   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ef44(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef50  FUN_0044ef50   (166 bytes)   [unnamed]
int * __cdecl FUN_0044ef50(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47249c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_0044e66c(param_1 + 2);
  }
  param_1[1] = (int)&std::basic_ostream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_00473074;
  if (param_3 == 0) {
    FUN_0044e6d4(*param_1,0);
  }
  else {
    uVar1 = FUN_0044ef44(param_3);
    if ((uVar1 & 8) == 0) {
      FUN_0044e6d4(*param_1,0);
    }
    else {
      FUN_0044e6d4(*param_1,param_3);
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eff8  FUN_0044eff8   (385 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044eff8(undefined4 *param_1,int *param_2,char param_3)

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
  
  __InitExceptBlockLDTC(0x4724d0);
  local_1c = 8;
  *param_1 = param_2;
  bVar1 = FUN_0044f1e0(*param_2);
  if (!bVar1) {
    FUN_0044eb78(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_0044f166;
  }
  iVar2 = FUN_0044f1f4(*param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0044f1f4(*param_2);
    FUN_0044f200(piVar3);
  }
  if (param_3 == '\0') {
    uVar4 = FUN_0044f17c(*param_2);
    if ((uVar4 & 0x1000) != 0) {
      local_1c = 0x14;
      FUN_0044cd28(&local_8,*param_2);
      local_10 = local_10 + 1;
      iVar2 = FUN_0044cc54(&local_8);
      local_1c = 8;
      do {
        piVar3 = (int *)FUN_0044f24c(*param_2);
        local_30 = FUN_0044f258(piVar3);
        local_34 = FUN_0044e520();
        bVar1 = FUN_0044f188(&local_30,&local_34);
        if (bVar1) {
LAB_0044f0f5:
          bVar1 = false;
        }
        else {
          bVar1 = FUN_0044f1a0(iVar2,1,(byte)local_30);
          if (!bVar1) goto LAB_0044f0f5;
          bVar1 = true;
        }
        if (!bVar1) goto code_r0x0044f102;
        piVar3 = (int *)FUN_0044f24c(*param_2);
        FUN_0044f2b4(piVar3);
      } while( true );
    }
  }
  goto LAB_0044f13c;
code_r0x0044f102:
  local_38 = FUN_0044e520();
  bVar1 = FUN_0044f188(&local_30,&local_38);
  if (bVar1) {
    FUN_0044eb78(*param_2,2);
  }
  local_10 = local_10 + -1;
  std::locale::_dtor(&local_8,2);
LAB_0044f13c:
  bVar1 = FUN_0044f1e0(*param_2);
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    FUN_0044eb78(*param_2,4);
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_0044f166:
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f17c  FUN_0044f17c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f17c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f188  FUN_0044f188   (21 bytes)   [unnamed]
bool __cdecl FUN_0044f188(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1a0  FUN_0044f1a0   (28 bytes)   [unnamed]
bool __cdecl FUN_0044f1a0(int param_1,uint param_2,byte param_3)

{
  return (*(uint *)(*(int *)(param_1 + 0x20) + (uint)param_3 * 4) & param_2) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1e0  FUN_0044f1e0   (18 bytes)   [unnamed]
bool __cdecl FUN_0044f1e0(int param_1)

{
  return *(int *)(param_1 + 0x30) == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1f4  FUN_0044f1f4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f1f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f200  FUN_0044f200   (57 bytes)   [unnamed]
int * __cdecl FUN_0044f200(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0044f24c(*param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0044f24c(*param_1);
    iVar1 = FUN_0044f23c(piVar2);
    if (iVar1 == -1) {
      FUN_0044eb78(*param_1,1);
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f23c  FUN_0044f23c   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f23c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f24c  FUN_0044f24c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f24c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f258  FUN_0044f258   (55 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f258(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  int *piVar6;
  
  uVar2 = FUN_0044f29c((int)param_1);
  piVar6 = param_1;
  uVar3 = FUN_0044f2a8((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0044f29c((int)param_1);
    uVar1 = FUN_0044f290(puVar5);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x1c))(*param_1,extraout_EDX,piVar6,param_1);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f290  FUN_0044f290   (11 bytes)   [unnamed]
undefined1 __cdecl FUN_0044f290(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f29c  FUN_0044f29c   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f29c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f2a8  FUN_0044f2a8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f2a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f2b4  FUN_0044f2b4   (67 bytes)   [unnamed]
void __cdecl FUN_0044f2b4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_0044e520();
  piVar2 = &local_c;
  local_8 = FUN_0044f2f8(param_1);
  bVar1 = FUN_0044f188(&local_8,piVar2);
  if (bVar1) {
    FUN_0044e520();
  }
  else {
    FUN_0044f258(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f2f8  FUN_0044f2f8   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f2f8(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 uStack_8;
  
  uVar2 = FUN_0044f29c((int)param_1);
  uVar3 = FUN_0044f2a8((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0044f29c((int)param_1);
    uStack_8 = CONCAT13(*puVar5,(undefined3)uStack_8);
    FUN_0044f344((int)param_1,1);
    uVar1 = FUN_0044f290((undefined1 *)((int)&uStack_8 + 3));
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x20))();
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f344  FUN_0044f344   (14 bytes)   [unnamed]
void __cdecl FUN_0044f344(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f370  FUN_0044f370   (26 bytes)   [unnamed]
void __cdecl FUN_0044f370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f38c  FUN_0044f38c   (23 bytes)   [unnamed]
void __cdecl FUN_0044f38c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f3a4  FUN_0044f3a4   (14 bytes)   [unnamed]
void __cdecl FUN_0044f3a4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f3d0  FUN_0044f3d0   (174 bytes)   [unnamed]
int * __cdecl FUN_0044f3d0(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472500);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x13);
    FUN_0044e66c(param_1 + 0x13);
  }
  FUN_0044e60c(param_1,1);
  param_1[1] = (int)&std::basic_ofstream_char::vftable;
  *(undefined ***)*param_1 = &PTR_LAB_0047302c;
  FUN_0044dfd4(param_1 + 2);
  FUN_0044e6d4(*param_1,param_1 + 2);
  FUN_0044f480(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f480  FUN_0044f480   (69 bytes)   [unnamed]
void __cdecl FUN_0044f480(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0044e7a0(*param_1,0);
  piVar1 = FUN_0044ea50(param_1 + 2,param_2,param_3 | 8,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0044eb78(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f568  FUN_0044f568   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044f568(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x472548);
  local_18 = 8;
  *param_1 = param_2;
  iVar3 = FUN_0044f1f4(*param_2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_0044f1f4(*param_2);
    FUN_0044f200(piVar4);
  }
  cVar1 = FUN_0044f650();
  if (cVar1 != '\0') {
    bVar2 = FUN_0044f65c((undefined *)param_2);
    if (bVar2) {
      FUN_004577dc((int *)&DAT_004746a0);
    }
    bVar2 = FUN_0044f670(param_2);
    if (bVar2) {
      FUN_004577dc((int *)&DAT_004746b8);
    }
  }
  iVar3 = FUN_0044f24c(*param_2);
  if (iVar3 != 0) {
    iVar3 = FUN_0044f24c(*param_2);
    uVar5 = FUN_0044ef44(iVar3);
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)FUN_0044f24c(*param_2);
      FUN_0044f6a8(local_34,piVar4);
    }
  }
  bVar2 = FUN_0044f1e0(*param_2);
  *(bool *)(param_1 + 1) = bVar2;
  if (!bVar2) {
    FUN_0044eb78(*param_2,1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f650  FUN_0044f650   (10 bytes)   [unnamed]
undefined1 __stdcall FUN_0044f650(void)

{
  return (*(undefined1 *)&DAT_00473200);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f65c  FUN_0044f65c   (19 bytes)   [unnamed]
bool __cdecl FUN_0044f65c(undefined *param_1)

{
  return param_1 == &DAT_004774f8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f670  FUN_0044f670   (19 bytes)   [unnamed]
bool __cdecl FUN_0044f670(undefined4 *param_1)

{
  return param_1 == &DAT_00477538;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f6a8  FUN_0044f6a8   (39 bytes)   [unnamed]
undefined4 __cdecl FUN_0044f6a8(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0xc))();
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f6d0  FUN_0044f6d0   (465 bytes)   [unnamed]
int __cdecl FUN_0044f6d0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_27c [16];
  undefined1 local_26c [240];
  undefined1 local_17c [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x4725c4);
  local_68 = 8;
  FUN_0044d26c(param_1,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    pcVar6 = FUN_0044aeec;
    uVar5 = 0;
    local_68 = 0x2c;
    FUN_0044cc2c(local_80);
    puVar1 = FUN_00455640(local_17c,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    puVar2 = (uint *)FUN_0044d088(puVar1);
    std::string::string_from_cstr((int)local_2c,puVar2);
    local_5c = local_5c + 1;
    FUN_0044d090(local_1c,(int)local_2c);
    local_5c = local_5c + 2;
    std::string::_dtor((int)local_2c,2);
    local_68 = 0x20;
    FUN_0045ed74((uint *)&DAT_00404790,local_1c,uVar5,(undefined*)pcVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if (param_3 == (*(uint *)&DAT_00471f90)) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00402ee0;
    uVar5 = 0;
    local_68 = 0x44;
    FUN_0044cc2c(local_88);
    puVar1 = FUN_00455640(local_26c,PTR_s_invalid_string_size_parameter_in_00474068);
    puVar2 = (uint *)FUN_0044d088(puVar1);
    std::string::string_from_cstr((int)local_54,puVar2);
    local_5c = local_5c + 1;
    FUN_0044da08(local_44,(int)local_54);
    local_5c = local_5c + 3;
    std::string::_dtor((int)local_54,2);
    local_68 = 0x38;
    FUN_0045ed74((uint *)&DAT_00402e84,local_44,uVar5,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  piVar3 = std::string::__getRep(param_1,param_3,param_3);
  local_8c = FUN_0044d594((int)piVar3);
  FUN_0044cbd4((int)local_27c,param_1,&local_8c);
  puVar4 = (undefined4 *)FUN_0044ca68(param_1);
  FUN_0044d24c(puVar4,param_2,param_3);
  *in_FS_OFFSET = local_78;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8a4  FUN_0044f8a4   (373 bytes)   [unnamed]
int __cdecl FUN_0044f8a4(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x472650);
  local_40 = 8;
  FUN_0044d26c(param_1,0);
  uVar1 = FUN_0044cbb0(param_2);
  if (uVar1 < param_3) {
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar1 = 1;
    puVar10 = &LAB_00403038;
    uVar9 = 0;
    local_40 = 0x2c;
    FUN_0044cc2c(local_58);
    FUN_0044cbb0(param_2);
    puVar2 = FUN_00455640(local_14c,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    std::string::string_from_cstr((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0044d9c0(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    std::string::_dtor((int)local_2c,2);
    local_40 = 0x20;
    FUN_0045ed74((uint *)&DAT_00402fdc,local_1c,uVar9,puVar10,uVar1,uVar11,uVar12,uVar13);
  }
  iVar4 = FUN_0044cbb0(param_2);
  uVar1 = iVar4 - param_3;
  local_40 = 8;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_4 == (*(uint *)&DAT_00471f90)) {
    param_4 = 0;
  }
  uVar8 = uVar1;
  if (uVar1 < param_4) {
    uVar8 = param_4;
  }
  piVar5 = std::string::__getRep(param_1,uVar8,uVar1);
  local_5c = FUN_0044d594((int)piVar5);
  FUN_0044cbd4((int)local_15c,param_1,&local_5c);
  iVar4 = FUN_0044ca68(param_2);
  puVar6 = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)FUN_0044ca68(param_1);
  FUN_0044d24c(puVar7,puVar6,uVar1);
  *in_FS_OFFSET = local_50;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fa1c  FUN_0044fa1c   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044fa1c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472f0c);
  FUN_0044cce0(param_1,param_2,0x20);
  *param_1 = &PTR_FUN_00472ff0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fa64  FUN_0044fa64   (226 bytes)   [unnamed]
int __cdecl FUN_0044fa64(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x472698);
  local_18 = 8;
  FUN_0044cc2c(local_34);
  local_2c = 0;
  FUN_0044deac(param_1,&local_2c);
  piVar1 = (int *)FUN_0044ca74(param_2);
  iVar2 = FUN_0044ca88(piVar1);
  if (iVar2 < 1) {
    uVar3 = FUN_0044cbb0(param_2);
    piVar1 = std::string::__getRep(param_1,uVar3,uVar3);
    local_3c = FUN_0044d594((int)piVar1);
    FUN_0044cbd4((int)local_5c,param_1,&local_3c);
    puVar4 = (undefined4 *)FUN_0044cf00(param_2);
    puVar5 = (undefined4 *)FUN_0044ca68(param_1);
    FUN_0044d24c(puVar5,puVar4,uVar3);
  }
  else {
    local_38 = FUN_0044ca68(param_2);
    FUN_0044cbd4((int)local_4c,param_1,&local_38);
    piVar1 = (int *)FUN_0044ca74(param_1);
    FUN_0044cee8(piVar1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fb48  FUN_0044fb48   (129 bytes)   [unnamed]
int __cdecl FUN_0044fb48(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)operator_new_array();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    operator_delete_array();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fbcc  FUN_0044fbcc   (53 bytes)   [unnamed]
void __cdecl FUN_0044fbcc(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_0044fc04();
    return;
  }
  if (param_1 == 1) {
    FUN_0044fc8c();
    return;
  }
  FUN_0044fca4(0,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fc04  FUN_0044fc04   (79 bytes)   [unnamed]
undefined4 * __stdcall FUN_0044fc04(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4726c8);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044fa1c(puVar1,1);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fc8c  FUN_0044fc8c   (22 bytes)   [unnamed]
void __stdcall FUN_0044fc8c(void)

{
  FUN_0044fca4(0,&DAT_00471081,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fca4  FUN_0044fca4   (81 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044fca4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4726f8);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044fa1c(puVar1,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fcf8  FUN_0044fcf8   (10 bytes)   [unnamed]
undefined1 __cdecl FUN_0044fcf8(undefined1 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fd04  FUN_0044fd04   (18 bytes)   [unnamed]
bool __cdecl FUN_0044fd04(int param_1)

{
  return *(int *)(param_1 + 0x24) != -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fd18  FUN_0044fd18   (18 bytes)   [unnamed]
undefined4 __cdecl FUN_0044fd18(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_0044fd04(param_1 + 8);
  return CONCAT31(extraout_var,bVar1);
}

} // namespace tea

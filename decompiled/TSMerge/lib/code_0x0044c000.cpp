// TSMerge.exe — runtime / library code "code_0x0044c000"
// 153 functions, 0x0044c01c..0x0044fd18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
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
  undefined3 regHigh;
  uint size;
  int *local_8;
  
  local_8 = (int *)0x0;
  size = param_1 + 0x1003U & 0xfffff000;
  bVar1 = FUN_0044b7fc((undefined4*)&local_8,size);
  if (CONCAT31(regHigh,bVar1) != 0) {
    *local_8 = size - 4;
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
  _MEMORYSTATUS buffer;
  
  buffer.dwLength = 0x20;
  GlobalMemoryStatus(&buffer);
  return buffer.dwAvailPhys;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c3a4  FUN_0044c3a4   (96 bytes)   [unnamed]
void __stdcall FUN_0044c3a4(void)

{
  int *piVar1;
  LPVOID address;
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
      address = (LPVOID)*piVar6;
      iVar3 = *piVar5;
      iVar4 = *piVar6;
      piVar5[1] = iVar4 - (int)piVar5;
      *piVar5 = iVar4 - (int)piVar5;
      FUN_0044b870(address,iVar3 - ((int)address - (int)piVar5));
      FUN_0044b888(address);
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
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470d74);
  std::allocator::allocator_44de00(local_30);
  FUN_0044dee8(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c998  FUN_0044c998   (55 bytes)   [unnamed]
void __cdecl FUN_0044c998(int param_1)

{
  undefined4 *sehChainHead;
  undefined1 local_30 [8];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470d7c);
  std::allocator::allocator_44cc2c(local_30);
  FUN_0044de3c(param_1);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044c9d0  FUN_0044c9d0   (152 bytes)   [unnamed]
void __cdecl FUN_0044c9d0(int str)

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
    iVar1 = FUN_0044ca88(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)std::string::__getRepOf(str);
      iVar1 = FUN_0044ca94(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    std::string::__getRepOf(str);
    std::allocator::allocator(local_c);
    FUN_0044cb70();
    std::string::size(str);
    std::string::__getRepOf(str);
    std::allocator::allocator_44cb88(local_14);
    FUN_0044cbc4();
    local_18 = 0;
    FUN_0044cbd4((int)local_28,str,&local_18);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca68  std::string::__data   (11 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00416734 (11 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. pointer to the character data
undefined4 __cdecl std::string::__data(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca74  std::string::__getRepOf   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00416740 (20 bytes; the code occurs several times, e.g. one template instance per type). the rep header of a string (data - 12)
int __cdecl std::string::__getRepOf(int param_1)

{
  int iVar1;
  
  iVar1 = std::string::__data(param_1);
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
  return &g_nullStringRep;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cac0  FUN_0044cac0   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044cac0(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471d70);
  FUN_0044caf4(param_1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044caf4  FUN_0044caf4   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044caf4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471d78);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *sehChainHead = sehPrevFrame;
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
// 0x0044cb48  std::allocator::allocator   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471d80);
  *sehChainHead = sehPrevFrame;
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
// 0x0044cb88  std::allocator::allocator_44cb88   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_44cb88(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471d88);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cbb0  std::string::size   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0041687c (20 bytes; the code occurs several times, e.g. one template instance per type). length of the string (rep->length)
undefined4 __cdecl std::string::size(int self)

{
  int rep;
  
  rep = std::string::__getRepOf(self);
  return *(undefined4 *)(rep + 8);
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471d90);
  std::allocator::allocator_44cc2c(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cc2c  std::allocator::allocator_44cc2c   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_44cc2c(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471d98);
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472de4);
  FUN_00452ec4(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cd28  FUN_0044cd28   (66 bytes)   [unnamed]
int * __cdecl FUN_0044cd28(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472e20);
  FUN_004502e8(param_1,(int *)(param_2 + 0x10));
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ce78  std::string::operator_assign   (111 bytes)   [analysis (matched TEACON.exe)]
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
    iVar2 = FUN_0044ca88(piVar1);
    if (iVar2 < 1) {
      s = (uint *)FUN_0044cf00(other);
      std::string::assign_cstr(self,s);
    }
    else {
      piVar1 = (int *)std::string::__getRepOf(other);
      FUN_0044cee8(piVar1);
      FUN_0044c9d0(self);
      local_8 = std::string::__data(other);
      FUN_0044cbd4((int)local_18,self,&local_8);
    }
  }
  return self;
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
  
  uVar1 = std::string::__data(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cf10  std::string::assign_cstr   (376 bytes)   [analysis (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x471e00);
  if (s == (uint *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    uVar11 = 1;
    copyCtor = std::logic_error::logic_error;
    uVar9 = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_58);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    s2 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,s2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00404790,logicError,uVar9,(undefined*)copyCtor,uVar11,throwFlags,throwFile,throwLine);
  }
  uVar9 = FUN_0044d590();
  local_59 = (char)uVar9;
  bVar1 = FUN_0044d0e4((char *)s,&local_59);
  if (bVar1) {
    piVar4 = (int *)std::string::__getRepOf(self);
    iVar5 = FUN_0044ca88(piVar4);
    if (iVar5 == 1) {
      iVar5 = std::string::__getRepOf(self);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_0044d590();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)std::string::__data(self);
      FUN_0044d0fc(puVar6,puVar2);
    }
    else {
      FUN_0044c9d0(self);
      piVar4 = FUN_0044cab8();
      FUN_0044cee8(piVar4);
      rep = FUN_0044cab8();
      local_60 = std::string::__rep_data((int)rep);
      FUN_0044cbd4((int)local_160,self,&local_60);
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar11 = FUN_0044d10c(s);
    n1 = std::string::size(self);
    self = FUN_0044d5a0(self,0,n1,(uint)s,uVar11);
    *sehChainHead = sehPrevFrame;
  }
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d088  __rwstd::except_msg_string::msgstr   (8 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00416de0 (8 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. the formatted message text
undefined4 __cdecl __rwstd::except_msg_string::msgstr(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d090  std::logic_error::logic_error_416de8   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00416de8. constructs a std::logic_error from a message string
//   also: std::logic_error::logic_error_44d090 [rtti:vtable-store]
undefined4 * __cdecl std::logic_error::logic_error_416de8(undefined4 *logicError,int str)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472e44);
  std::exception::exception(logicError);
  *logicError = &std::logic_error::vftable;
  FUN_0044fa64((int)(logicError + 2),str);
  *sehChainHead = sehPrevFrame;
  return logicError;
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
char * __cdecl FUN_0044d10c(uint *s)

{
  char *len;
  
  len = strlen(s);
  return len;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d11c  std::string::string_from_cstr   (304 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x471e5c);
  ehContext = 8;
  FUN_0044d26c(self,0);
  if (s == (uint *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = std::logic_error::logic_error;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_44cc2c(local_58);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    s2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,s2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00404790,logicError,objectDtor,(undefined*)copyCtor,n,throwFlags,throwFile,throwLine);
  }
  n = FUN_0044d10c(s);
  ehContext = 8;
  rep = std::string::__getRep(self,n,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_15c,self,&local_5c);
  puVar4 = (undefined4 *)std::string::__data(self);
  FUN_0044d24c(puVar4,s,n);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d24c  FUN_0044d24c   (29 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d24c(undefined4 *param_1,undefined4 *src,uint n)

{
  memcpy(param_1,src,n);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d26c  FUN_0044d26c   (55 bytes)   [unnamed]
int __cdecl FUN_0044d26c(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471e94);
  std::allocator::allocator_44cb88(param_1);
  *(undefined4 *)(param_1 + 8) = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d2a4  std::string::__getRep   (191 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
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
    nullRep = FUN_0044cab8();
    FUN_0044cee8(nullRep);
    rep = FUN_0044cab8();
  }
  else {
    std::allocator::allocator_44cb88(local_c);
    rep = (int *)FUN_0044d364();
    allocArg = FUN_0044d410(local_24,0);
    nullRep = rep;
    uVar4 = std::allocator::allocator(local_14);
    FUN_0044d444(uVar4,nullRep,allocArg);
    iVar5 = std::string::__rep_data((int)rep);
    nul = 0;
    FUN_0044d540(local_c,iVar5,&nul);
    rep[1] = capacity;
    FUN_0044d574(rep,1);
    iVar5 = std::string::__rep_data((int)rep);
    rep[2] = length;
    *(undefined1 *)(iVar5 + length) = 0;
  }
  return rep;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d364  FUN_0044d364   (106 bytes)   [unnamed]
int __stdcall FUN_0044d364(void)

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
  
  __InitExceptBlockLDTC(0x471eac);
  iVar1 = operator_new();
  if (iVar1 == 0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = &LAB_004068bc;
    objectDtor = 0;
    std::bad_alloc::bad_alloc(&badAlloc);
    _ThrowExceptionLDTC((uint *)&DAT_00406864,&badAlloc,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  *sehChainHead = sehPrevFrame;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d410  FUN_0044d410   (51 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044d410(undefined4 *param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471ec0);
  FUN_0044caf4(param_1,param_2 + -1);
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471ed8);
  puVar1 = (undefined4 *)FUN_0044d4ac(0xc,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0044d50c(puVar1,param_2);
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471ef8);
  FUN_0044caf4(param_1,*param_2);
  *sehChainHead = sehPrevFrame;
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
// 0x0044d594  std::string::__rep_data   (11 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004172ec (11 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. character data of a rep (rep + 12)
int __cdecl std::string::__rep_data(int rep)

{
  return rep + 0xc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d5a0  FUN_0044d5a0   (40 bytes)   [unnamed]
int __cdecl FUN_0044d5a0(int str,uint pos,uint n1,uint s,uint param_5)

{
  std::string::replace(str,pos,n1,s,param_5,0,param_5);
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d5c8  std::string::replace   (1015 bytes)   [analysis (matched TEACON.exe)]
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
  
  __InitExceptBlockLDTC(0x471f58);
  uVar1 = std::string::size(self);
  if ((uVar1 < pos) || (n2 < param_6)) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00403038;
    uVar9 = 0;
    ehContext = 0x14;
    std::allocator::allocator_44cc2c(local_80);
    uVar1 = std::string::size(self);
    if (n2 < uVar1) {
      std::string::size(self);
    }
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str2,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 8;
    _ThrowExceptionLDTC((uint *)&DAT_00402fdc,outOfRange,uVar9,copyCtor,n,throwFlags,throwFile,throwLine);
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
    copyCtor = &LAB_00402ee0;
    uVar9 = 0;
    ehContext = 0x2c;
    std::allocator::allocator_44cc2c(local_8c);
    std::string::size(self);
    puVar2 = __rwstd::except_msg_string::format(exceptMsg,PTR_s_resulting_length_is_invalid_in_f_00474070);
    puVar3 = (uint *)__rwstd::except_msg_string::msgstr(puVar2);
    std::string::string_from_cstr((int)str,puVar3);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,lengthError,uVar9,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(self);
  local_90 = (iVar4 - local_84) + uVar1;
  if (local_90 == 0) {
    FUN_0044c9d0(self);
    piVar5 = FUN_0044cab8();
    FUN_0044cee8(piVar5);
    src = FUN_0044cab8();
    local_94 = std::string::__rep_data((int)src);
    FUN_0044cbd4((int)local_290,self,&local_94);
    goto LAB_0044d9a5;
  }
  iVar4 = std::string::size(self);
  local_98 = (iVar4 - local_84) - pos;
  piVar5 = (int *)std::string::__getRepOf(self);
  iVar4 = FUN_0044ca88(piVar5);
  if ((iVar4 < 2) && (n = FUN_0044da70(self), local_90 <= n)) {
    if ((s != 0) && (n = std::string::data(self), n <= s)) {
      iVar4 = std::string::data(self);
      iVar7 = std::string::size(self);
      if (s < (uint)(iVar4 + iVar7)) goto LAB_0044d864;
    }
    if (local_98 != 0) {
      n = local_98;
      iVar4 = std::string::__data(self);
      src = (undefined4 *)(iVar4 + pos + n1);
      iVar4 = std::string::__data(self);
      FUN_0044da50((undefined4 *)(iVar4 + pos + uVar1),src,n);
    }
    if (uVar1 != 0) {
      src = (undefined4 *)(s + param_6);
      iVar4 = std::string::__data(self);
      FUN_0044da50((undefined4 *)(iVar4 + pos),src,uVar1);
    }
    iVar4 = std::string::__getRepOf(self);
    uVar1 = local_90;
    *(uint *)(iVar4 + 8) = local_90;
    iVar4 = std::string::__data(self);
    puVar2 = (undefined1 *)(iVar4 + uVar1);
    uVar9 = FUN_0044d590();
    *puVar2 = (char)uVar9;
  }
  else {
LAB_0044d864:
    rep = std::string::__getRep(self,local_90,local_90);
    if (pos != 0) {
      n = pos;
      src = (undefined4 *)std::string::__data(self);
      puVar8 = (undefined4 *)std::string::__rep_data((int)rep);
      FUN_0044d24c(puVar8,src,n);
    }
    if (uVar1 != 0) {
      src = (undefined4 *)(s + param_6);
      n = uVar1;
      iVar4 = std::string::__rep_data((int)rep);
      FUN_0044d24c((undefined4 *)(iVar4 + pos),src,n);
    }
    if (local_98 != 0) {
      n = local_98;
      iVar4 = std::string::__data(self);
      src = (undefined4 *)(iVar4 + pos + n1);
      iVar4 = std::string::__rep_data((int)rep);
      FUN_0044d24c((undefined4 *)(iVar4 + pos + uVar1),src,n);
    }
    FUN_0044c9d0(self);
    local_a0 = std::string::__rep_data((int)rep);
    FUN_0044cbd4((int)local_2a0,self,&local_a0);
  }
LAB_0044d9a5:
  iVar4 = std::string::__data(self);
  *sehChainHead = sehPrevFrame;
  return iVar4 + pos;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da08  std::length_error::length_error   (69 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x00417760 (69 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. constructs a std::length_error from a message string
//   also: std::length_error::length_error [rtti:vtable-store]
undefined4 * __cdecl std::length_error::length_error(undefined4 *self,int what)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472ebc);
  std::logic_error::logic_error_416de8(self,what);
  *self = &std::length_error::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
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
  
  iVar1 = std::string::__getRepOf(param_1);
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
// 0x0044da94  std::string::data   (15 bytes)   [analysis (position-matched TEACON.exe)]
//   same masked bytes as TEACON.exe 0x004177ec (15 bytes — too short or too common to be unique on its own), confirmed by its position between identical neighbours. pointer to the character data
undefined4 __cdecl std::string::data(int self)

{
  undefined4 data2;
  
  data2 = std::string::__data(self);
  return data2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dbb4  FUN_0044dbb4   (152 bytes)   [unnamed]
void __cdecl FUN_0044dbb4(int str)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_0044dc4c(str);
  if (iVar1 != 0) {
    piVar2 = (int *)std::string::__getRepOf_44dc58(str);
    iVar1 = FUN_0044dc6c(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)std::string::__getRepOf_44dc58(str);
      iVar1 = FUN_0044dc78(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    std::string::__getRepOf_44dc58(str);
    std::allocator::allocator_44dd30(local_c);
    FUN_0044dd58();
    std::string::size_44de28(str);
    std::string::__getRepOf_44dc58(str);
    std::allocator::allocator_44dd70(local_14);
    FUN_0044dd98();
    local_18 = 0;
    FUN_0044dda8((int)local_28,str,&local_18);
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
// 0x0044dc58  std::string::__getRepOf_44dc58   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00416740 (20 bytes; the code occurs several times, e.g. one template instance per type). the rep header of a string (data - 12)
int __cdecl std::string::__getRepOf_44dc58(int param_1)

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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471ff0);
  FUN_0044dcdc(param_1,1);
  *(undefined2 *)(param_1 + 3) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dcdc  FUN_0044dcdc   (52 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044dcdc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x471ff8);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *sehChainHead = sehPrevFrame;
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
// 0x0044dd30  std::allocator::allocator_44dd30   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_44dd30(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472000);
  *sehChainHead = sehPrevFrame;
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
// 0x0044dd70  std::allocator::allocator_44dd70   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_44dd70(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472008);
  *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472010);
  std::allocator::allocator_44de00(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044de00  std::allocator::allocator_44de00   (37 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x004168f8 (37 bytes; the code occurs several times, e.g. one template instance per type). (empty)
undefined4 __cdecl std::allocator::allocator_44de00(undefined4 param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472018);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044de28  std::string::size_44de28   (20 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0041687c (20 bytes; the code occurs several times, e.g. one template instance per type). length of the string (rep->length)
undefined4 __cdecl std::string::size_44de28(int self)

{
  int rep;
  
  rep = std::string::__getRepOf_44dc58(self);
  return *(undefined4 *)(rep + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044de3c  FUN_0044de3c   (111 bytes)   [unnamed]
int __cdecl FUN_0044de3c(int param_1)

{
  undefined4 *rep;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x472038);
  ehContext = 8;
  local_30[1] = 0;
  FUN_0044deac(param_1,local_30 + 1);
  rep = FUN_0044cab8();
  local_30[0] = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_40,param_1,local_30);
  piVar2 = FUN_0044cab8();
  FUN_0044cee8(piVar2);
  *sehChainHead = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044deac  FUN_0044deac   (58 bytes)   [unnamed]
int __cdecl FUN_0044deac(int param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472058);
  std::allocator::allocator_44cb88(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dee8  FUN_0044dee8   (111 bytes)   [unnamed]
int __cdecl FUN_0044dee8(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *sehChainHead;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x472070);
  ehContext = 8;
  local_30[1] = 0;
  FUN_0044df74(param_1,local_30 + 1);
  puVar1 = FUN_0044dc9c();
  local_30[0] = FUN_0044dfb0((int)puVar1);
  FUN_0044dda8((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_0044dc9c();
  FUN_0044dfbc(piVar2);
  *sehChainHead = local_30[2];
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044df74  FUN_0044df74   (58 bytes)   [unnamed]
int __cdecl FUN_0044df74(int param_1,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472090);
  std::allocator::allocator_44dd70(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *sehChainHead = sehPrevFrame;
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
// 0x0044e0c4  FUN_0044e0c4   (42 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044e0c4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472ed0);
  *param_1 = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e17c  FUN_0044e17c   (70 bytes)   [unnamed]
int * __cdecl FUN_0044e17c(int *param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472ee8);
  if (DAT_004775d4 == 0) {
    FUN_00454940();
  }
  iVar1 = DAT_004775d4;
  *param_1 = DAT_004775d4;
  FUN_00452fd4(iVar1);
  *sehChainHead = sehPrevFrame;
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
// 0x0044e3b8  FUN_0044e3b8   (358 bytes)   [unnamed]
int * __cdecl FUN_0044e3b8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
    *sehChainHead = sehPrevFrame;
  }
  else {
    iVar3 = FUN_0044e218();
    if (iVar3 == param_1[9]) {
      param_1 = (int *)0x0;
      *sehChainHead = sehPrevFrame;
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
        *sehChainHead = sehPrevFrame;
      }
      else {
        iVar3 = FUN_0044e218();
        param_1[9] = iVar3;
        *sehChainHead = sehPrevFrame;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int loc;
  
  __InitExceptBlockLDTC(0x4722cc);
  FUN_0044cd28(&loc,param_1);
  piVar1 = (int *)FUN_0044cc54(&loc);
  uVar2 = FUN_0044e788(piVar1);
  std::locale::_dtor(&loc,2);
  *sehChainHead = sehPrevFrame;
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
  undefined1 *msgText;
  uint *puVar4;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  undefined1 exceptMsg3 [240];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 failure2 [6];
  undefined1 str2 [16];
  undefined4 failure3 [6];
  undefined1 str3 [16];
  undefined4 failure4 [6];
  
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
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar1 = 1;
      copyCtor = &LAB_004086e0;
      objectDtor = 0;
      ehContext = 0x14;
      std::allocator::allocator_44cc2c(local_a8);
      msgText = __rwstd::except_msg_string::format(exceptMsg3,PTR_s_iostream_object_has_failbit_set_00473194);
      puVar4 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
      iVar5 = std::string::string_from_cstr((int)str3,puVar4);
      ehDtorCount = ehDtorCount + 1;
      std::ios_base::failure::failure(failure4,iVar5);
      ehDtorCount = ehDtorCount + 2;
      std::string::_dtor((int)str3,2);
      ehContext = 8;
      _ThrowExceptionLDTC((uint *)&DAT_00408678,failure4,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
    }
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar1 = 1;
      copyCtor = &LAB_004086e0;
      objectDtor = 0;
      ehContext = 0x2c;
      std::allocator::allocator_44cc2c(local_b0);
      msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_iostream_object_has_badbit_set_00473198);
      puVar4 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
      iVar5 = std::string::string_from_cstr((int)str2,puVar4);
      ehDtorCount = ehDtorCount + 1;
      std::ios_base::failure::failure(failure3,iVar5);
      ehDtorCount = ehDtorCount + 2;
      std::string::_dtor((int)str2,2);
      ehContext = 0x20;
      _ThrowExceptionLDTC((uint *)&DAT_00408678,failure3,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
    }
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      throwLine = 0;
      throwFile = 0;
      throwFlags = 0;
      uVar1 = 1;
      copyCtor = &LAB_004086e0;
      objectDtor = 0;
      ehContext = 0x44;
      std::allocator::allocator_44cc2c(local_b8);
      msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_iostream_object_has_eofbit_set_0047319c);
      puVar4 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
      iVar5 = std::string::string_from_cstr((int)str,puVar4);
      ehDtorCount = ehDtorCount + 1;
      std::ios_base::failure::failure(failure2,iVar5);
      ehDtorCount = ehDtorCount + 2;
      std::string::_dtor((int)str,2);
      ehContext = 0x38;
      _ThrowExceptionLDTC((uint *)&DAT_00408678,failure2,objectDtor,copyCtor,uVar1,throwFlags,throwFile,throwLine);
    }
  }
  *sehChainHead = sehPrevFrame;
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
int * __cdecl FUN_0044ea50(int *param_1,LPCSTR fileName,uint param_3,uint param_4)

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
      iVar1 = thunk_FUN_00456f50(fileName,uVar3,param_4);
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
DWORD __cdecl FUN_0044eb5c(undefined4 param_1,uint param_2,LONG lDistanceToMove,int param_4)

{
  DWORD DVar1;
  
  DVar1 = thunk_FUN_00456ed8(param_2,lDistanceToMove,param_4);
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
// 0x0044edac  FUN_0044edac   (69 bytes)   [unnamed]
void __cdecl FUN_0044edac(int *param_1,LPCSTR fileName,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0044e7a0(*param_1,0);
  piVar1 = FUN_0044ea50(param_1 + 3,fileName,param_3 | 4,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0044eb78(*param_1,4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef44  FUN_0044ef44   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0044ef44(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eff8  FUN_0044eff8   (385 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044eff8(undefined4 *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  int local_38;
  int local_34;
  int local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int loc;
  
  __InitExceptBlockLDTC(0x4724d0);
  ehContext = 8;
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
      ehContext = 0x14;
      FUN_0044cd28(&loc,*param_2);
      ehDtorCount = ehDtorCount + 1;
      iVar2 = FUN_0044cc54(&loc);
      ehContext = 8;
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
  ehDtorCount = ehDtorCount + -1;
  std::locale::_dtor(&loc,2);
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
  *sehChainHead = sehPrevFrame;
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
  undefined3 regHigh;
  undefined4 extraout_EDX;
  int *piVar6;
  
  uVar2 = FUN_0044f29c((int)param_1);
  piVar6 = param_1;
  uVar3 = FUN_0044f2a8((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0044f29c((int)param_1);
    uVar1 = FUN_0044f290(puVar5);
    uVar4 = CONCAT31(regHigh,uVar1);
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
  undefined3 regHigh;
  undefined4 uStack_8;
  
  uVar2 = FUN_0044f29c((int)param_1);
  uVar3 = FUN_0044f2a8((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_0044f29c((int)param_1);
    uStack_8 = CONCAT13(*puVar5,(undefined3)uStack_8);
    FUN_0044f344((int)param_1,1);
    uVar1 = FUN_0044f290((undefined1 *)((int)&uStack_8 + 3));
    uVar4 = CONCAT31(regHigh,uVar1);
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
// 0x0044f480  FUN_0044f480   (69 bytes)   [unnamed]
void __cdecl FUN_0044f480(int *param_1,LPCSTR fileName,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0044e7a0(*param_1,0);
  piVar1 = FUN_0044ea50(param_1 + 2,fileName,param_3 | 8,param_4);
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
  undefined4 *sehChainHead;
  undefined1 local_34 [12];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x472548);
  ehContext = 8;
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
  *sehChainHead = sehPrevFrame;
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
// 0x0044f6d0  std::string::string_from_buf   (465 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00418dec. std::string(const char *s, size_type n)
int __cdecl std::string::string_from_buf(int self,undefined4 *s,uint n)

{
  undefined1 *msgText;
  uint *puVar2;
  int *rep;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  code *copyCtor;
  undefined *copyCtor2;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 local_27c [16];
  undefined1 exceptMsg [240];
  undefined1 exceptMsg2 [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [16];
  undefined4 lengthError [6];
  undefined1 str2 [16];
  undefined4 logicError [6];
  
  __InitExceptBlockLDTC(0x4725c4);
  ehContext = 8;
  FUN_0044d26c(self,0);
  if (s == (undefined4 *)0x0) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor = std::logic_error::logic_error;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_44cc2c(local_80);
    msgText = __rwstd::except_msg_string::format(exceptMsg2,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    puVar2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,puVar2);
    ehDtorCount = ehDtorCount + 1;
    std::logic_error::logic_error_416de8(logicError,(int)str2);
    ehDtorCount = ehDtorCount + 2;
    std::string::_dtor((int)str2,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00404790,logicError,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  if (n == (*(uint *)&g_stringNpos)) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    copyCtorMask = 1;
    copyCtor2 = &LAB_00402ee0;
    objectDtor = 0;
    ehContext = 0x44;
    std::allocator::allocator_44cc2c(local_88);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_invalid_string_size_parameter_in_00474068);
    puVar2 = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str,puVar2);
    ehDtorCount = ehDtorCount + 1;
    std::length_error::length_error(lengthError,(int)str);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str,2);
    ehContext = 0x38;
    _ThrowExceptionLDTC((uint *)&DAT_00402e84,lengthError,objectDtor,copyCtor2,copyCtorMask,throwFlags,throwFile,throwLine);
  }
  rep = std::string::__getRep(self,n,n);
  local_8c = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_27c,self,&local_8c);
  puVar4 = (undefined4 *)std::string::__data(self);
  FUN_0044d24c(puVar4,s,n);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8a4  FUN_0044f8a4   (373 bytes)   [unnamed]
int __cdecl FUN_0044f8a4(int param_1,int str,uint param_3,uint param_4)

{
  uint n;
  undefined1 *msgText;
  uint *s;
  int iVar4;
  int *rep;
  undefined4 *src;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
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
  undefined1 str2 [16];
  undefined4 outOfRange [6];
  
  __InitExceptBlockLDTC(0x472650);
  ehContext = 8;
  FUN_0044d26c(param_1,0);
  n = std::string::size(str);
  if (n < param_3) {
    throwLine = 0;
    throwFile = 0;
    throwFlags = 0;
    n = 1;
    copyCtor = &LAB_00403038;
    objectDtor = 0;
    ehContext = 0x2c;
    std::allocator::allocator_44cc2c(local_58);
    std::string::size(str);
    msgText = __rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00474074);
    s = (uint *)__rwstd::except_msg_string::msgstr(msgText);
    std::string::string_from_cstr((int)str2,s);
    ehDtorCount = ehDtorCount + 1;
    std::out_of_range::out_of_range(outOfRange,(int)str2);
    ehDtorCount = ehDtorCount + 3;
    std::string::_dtor((int)str2,2);
    ehContext = 0x20;
    _ThrowExceptionLDTC((uint *)&DAT_00402fdc,outOfRange,objectDtor,copyCtor,n,throwFlags,throwFile,throwLine);
  }
  iVar4 = std::string::size(str);
  n = iVar4 - param_3;
  ehContext = 8;
  if (param_4 < n) {
    n = param_4;
  }
  if (param_4 == (*(uint *)&g_stringNpos)) {
    param_4 = 0;
  }
  uVar8 = n;
  if (n < param_4) {
    uVar8 = param_4;
  }
  rep = std::string::__getRep(param_1,uVar8,n);
  local_5c = std::string::__rep_data((int)rep);
  FUN_0044cbd4((int)local_15c,param_1,&local_5c);
  iVar4 = std::string::__data(str);
  src = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)std::string::__data(param_1);
  FUN_0044d24c(puVar7,src,n);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fa1c  FUN_0044fa1c   (71 bytes)   [unnamed]
undefined4 * __cdecl FUN_0044fa1c(undefined4 *facet2,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472f0c);
  std::locale::facet::facet(facet2,param_2,0x20);
  *facet2 = &PTR_FUN_00472ff0;
  *sehChainHead = sehPrevFrame;
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fa64  FUN_0044fa64   (226 bytes)   [unnamed]
int __cdecl FUN_0044fa64(int param_1,int str)

{
  int *piVar1;
  int iVar2;
  uint n;
  undefined4 *src;
  undefined4 *puVar5;
  undefined4 *sehChainHead;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x472698);
  ehContext = 8;
  std::allocator::allocator_44cc2c(local_34);
  local_2c = 0;
  FUN_0044deac(param_1,&local_2c);
  piVar1 = (int *)std::string::__getRepOf(str);
  iVar2 = FUN_0044ca88(piVar1);
  if (iVar2 < 1) {
    n = std::string::size(str);
    piVar1 = std::string::__getRep(param_1,n,n);
    local_3c = std::string::__rep_data((int)piVar1);
    FUN_0044cbd4((int)local_5c,param_1,&local_3c);
    src = (undefined4 *)FUN_0044cf00(str);
    puVar5 = (undefined4 *)std::string::__data(param_1);
    FUN_0044d24c(puVar5,src,n);
  }
  else {
    local_38 = std::string::__data(str);
    FUN_0044cbd4((int)local_4c,param_1,&local_38);
    piVar1 = (int *)std::string::__getRepOf(param_1);
    FUN_0044cee8(piVar1);
  }
  *sehChainHead = sehPrevFrame;
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
  undefined4 *facet;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4726c8);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    FUN_0044fa1c(facet,1);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
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
  undefined4 *facet;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4726f8);
  facet = (undefined4 *)operator_new();
  if (facet != (undefined4 *)0x0) {
    FUN_0044fa1c(facet,param_3);
  }
  *sehChainHead = sehPrevFrame;
  return facet;
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
  undefined3 regHigh;
  
  bVar1 = FUN_0044fd04(param_1 + 8);
  return CONCAT31(regHigh,bVar1);
}

} // namespace tea

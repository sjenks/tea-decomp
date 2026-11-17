// TEA.exe — application module "TSDictionaryDefinitionRetriever"
// 11 functions, 0x0040c84c..0x0040e240. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040c84c  TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever   (185 bytes)   [notes+analysis]
//   constructor(list, dictionaryIndex, FILETIME* out): opens the dictionary file for reading and reports its timestamp
int * __cdecl TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  LPCSTR pCVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ec06c);
  *param_1 = *(int *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  puVar1 = (uint *)FUN_00408c98(param_2,param_3);
  std::string::string_from_cstr((int)(param_1 + 2),puVar1);
  param_1[6] = 0;
  pCVar2 = (LPCSTR)(**(code **)(*(int *)*param_1 + 0x18))();
  iVar3 = (**(code **)(*(int *)*param_1 + 0xc))();
  if (iVar3 != 0) {
    piVar4 = fopen(pCVar2,&DAT_004eb416);
    param_1[6] = (int)piVar4;
  }
  if (param_4 != (undefined4 *)0x0) {
    iVar3 = *param_1;
    *param_4 = *(undefined4 *)(iVar3 + 0x2008);
    param_4[1] = *(undefined4 *)(iVar3 + 0x200c);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c938  TSDictionaryDefinitionRetriever::~TSDictionaryDefinitionRetriever   (204 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryDefinitionRetriever::_dtor
void __cdecl TSDictionaryDefinitionRetriever::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ec0a8);
  if (param_1 == 0) goto LAB_0040c9f3;
  FUN_004de7cc(*(int **)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x10) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c9e3;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
LAB_0040c9e3:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0040c9f3:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ca04  TSDictionaryDefinitionRetriever::ReadDefinition   (4373 bytes)   [notes]
//   reads and decodes one definition record at a file offset (XOR 0xBD per your notes). Entry checked; body not read
/* WARNING: Removing unreachable block (ram,0x0040cd8b) */
/* WARNING: Removing unreachable block (ram,0x0040ce6e) */
/* WARNING: Removing unreachable block (ram,0x0040ce1d) */
/* WARNING: Removing unreachable block (ram,0x0040ce64) */
/* WARNING: Removing unreachable block (ram,0x0040ceed) */
/* WARNING: Removing unreachable block (ram,0x0040cf11) */
/* WARNING: Removing unreachable block (ram,0x0040cf1c) */
/* WARNING: Removing unreachable block (ram,0x0040cf40) */
/* WARNING: Removing unreachable block (ram,0x0040cf2a) */
/* WARNING: Removing unreachable block (ram,0x0040cf39) */
/* WARNING: Removing unreachable block (ram,0x0040cf32) */
/* WARNING: Removing unreachable block (ram,0x0040cf45) */
/* WARNING: Removing unreachable block (ram,0x0040cf49) */
/* WARNING: Removing unreachable block (ram,0x0040cf97) */
/* WARNING: Removing unreachable block (ram,0x0040cb17) */
/* WARNING: Removing unreachable block (ram,0x0040cb43) */
/* WARNING: Removing unreachable block (ram,0x0040cc25) */
/* WARNING: Removing unreachable block (ram,0x0040cbd4) */
/* WARNING: Removing unreachable block (ram,0x0040cc1b) */
/* WARNING: Removing unreachable block (ram,0x0040cca4) */
/* WARNING: Removing unreachable block (ram,0x0040ccc8) */
/* WARNING: Removing unreachable block (ram,0x0040ccd3) */
/* WARNING: Removing unreachable block (ram,0x0040ccf7) */
/* WARNING: Removing unreachable block (ram,0x0040cce1) */
/* WARNING: Removing unreachable block (ram,0x0040ccf0) */
/* WARNING: Removing unreachable block (ram,0x0040cce9) */
/* WARNING: Removing unreachable block (ram,0x0040ccfc) */
/* WARNING: Removing unreachable block (ram,0x0040cd00) */
/* WARNING: Removing unreachable block (ram,0x0040cd4e) */
/* WARNING: Removing unreachable block (ram,0x0040d1ee) */
/* WARNING: Removing unreachable block (ram,0x0040d2dd) */
/* WARNING: Removing unreachable block (ram,0x0040d286) */
/* WARNING: Removing unreachable block (ram,0x0040d2d0) */
/* WARNING: Removing unreachable block (ram,0x0040d362) */
/* WARNING: Removing unreachable block (ram,0x0040d389) */
/* WARNING: Removing unreachable block (ram,0x0040d397) */
/* WARNING: Removing unreachable block (ram,0x0040d3be) */
/* WARNING: Removing unreachable block (ram,0x0040d3a8) */
/* WARNING: Removing unreachable block (ram,0x0040d3b7) */
/* WARNING: Removing unreachable block (ram,0x0040d3b0) */
/* WARNING: Removing unreachable block (ram,0x0040d3c3) */
/* WARNING: Removing unreachable block (ram,0x0040d3c7) */
/* WARNING: Removing unreachable block (ram,0x0040d421) */
/* WARNING: Removing unreachable block (ram,0x0040d45e) */
/* WARNING: Removing unreachable block (ram,0x0040d55f) */
/* WARNING: Removing unreachable block (ram,0x0040d4ff) */
/* WARNING: Removing unreachable block (ram,0x0040d552) */
/* WARNING: Removing unreachable block (ram,0x0040d5f0) */
/* WARNING: Removing unreachable block (ram,0x0040d61a) */
/* WARNING: Removing unreachable block (ram,0x0040d628) */
/* WARNING: Removing unreachable block (ram,0x0040d64f) */
/* WARNING: Removing unreachable block (ram,0x0040d639) */
/* WARNING: Removing unreachable block (ram,0x0040d648) */
/* WARNING: Removing unreachable block (ram,0x0040d641) */
/* WARNING: Removing unreachable block (ram,0x0040d654) */
/* WARNING: Removing unreachable block (ram,0x0040d658) */
/* WARNING: Removing unreachable block (ram,0x0040d6b2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TSDictionaryDefinitionRetriever::ReadDefinition(int param_1,LONG param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint local_97c [131];
  undefined4 local_770;
  undefined4 local_760;
  undefined4 local_510;
  undefined4 local_500;
  undefined *local_2b0;
  undefined4 *local_2a0;
  undefined4 *local_29c;
  int *local_298;
  char *local_294;
  uint local_290;
  int local_28c;
  int local_288;
  uint local_284;
  uint local_280;
  undefined4 *local_27c;
  undefined4 *local_278;
  uint local_274;
  int local_270;
  int *local_26c;
  int *local_268;
  uint local_264;
  int *local_260;
  int local_25c;
  undefined4 *local_258;
  undefined4 local_254;
  int local_250;
  uint local_24c;
  undefined1 local_245;
  uint local_244;
  uint local_1fc;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  uint local_1ac;
  int local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  int local_198;
  undefined4 *local_194;
  undefined4 local_190;
  int local_18c;
  uint local_188;
  undefined1 local_181;
  uint local_180;
  uint local_138;
  undefined1 *local_f0;
  undefined *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined2 local_d0;
  int local_c4;
  int local_bc;
  int local_68;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ec1b0);
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (iVar5 = fseek(*(int **)(param_1 + 0x18),param_2,0), iVar5 == 0)) {
    FUN_004cf384(param_3,param_1 + 8);
    *(LONG *)(param_3 + 0x78) = param_2;
    FUN_0040db1c(param_3 + 0x18,0);
    FUN_0040db1c(param_3 + 0x38,0);
    piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_e4 = FUN_004df398(*(int **)(param_1 + 0x18));
    }
    else {
      piVar1 = *(int **)(param_1 + 0x18);
      pbVar3 = (byte *)*piVar1;
      *piVar1 = *piVar1 + 1;
      local_e4 = (uint)*pbVar3;
    }
    if (local_e4 == 0xffffffff) {
      *in_FS_OFFSET = local_e0;
      return;
    }
    local_e8 = 0;
    local_f0 = local_14;
    local_ec = &DAT_00513d64;
    local_c = (undefined4 *)&DAT_00513d64;
    local_2b0 = &DAT_00513d64;
    local_c4 = local_c4 + 1;
    local_d0 = 0x20;
    uVar6 = 0xbd;
    while ((uVar2 = local_e4 - 1, bVar4 = 0 < (int)local_e4, local_e4 = uVar2, bVar4 &&
           (uVar6 != 0xffffffff))) {
      if (local_c[-1] == 0) {
        std::string::replace_fill((int)local_14,local_c[-1],0,-local_c[-1],0);
      }
      else {
        local_138 = local_c[-1];
        local_180 = local_c[-1];
        local_181 = 0;
        local_188 = local_180;
        if (local_138 < local_180) {
          local_188 = local_138;
        }
        FUN_004cfad4((int)local_14,0,local_188,(uint)&local_181,0,0,0);
      }
      if (local_c + -3 != &DAT_00513d58) {
        local_c[-3] = 0;
      }
      while( true ) {
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar6 = FUN_004df398(*(int **)(param_1 + 0x18));
        }
        else {
          piVar1 = *(int **)(param_1 + 0x18);
          pbVar3 = (byte *)*piVar1;
          *piVar1 = *piVar1 + 1;
          uVar6 = (uint)*pbVar3;
        }
        if ((uVar6 == 0xffffffff) || (uVar6 == 0xbd)) break;
        std::string::replace_fill((int)local_14,local_c[-1],0,1,(byte)uVar6 ^ 0xbd);
      }
      if (*(int *)(param_3 + 0x20) == *(int *)(param_3 + 0x30)) {
        FUN_0040e240(param_3 + 0x18,*(int *)(param_3 + 0x20),(int)local_14);
      }
      else {
        local_18c = *(int *)(param_3 + 0x20);
        local_68 = local_18c;
        if (local_18c != 0) {
          local_d0 = 0xa4;
          local_190 = 0;
          *(undefined4 *)(local_18c + 8) = 0;
          if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
            uVar6 = local_c[-1];
            local_1a4 = std::string::__getRep(local_18c,uVar6,uVar6);
            local_1a0 = local_1a4 + 3;
            *(int **)(local_68 + 8) = local_1a0;
            local_1a8 = local_68;
            local_510 = *(undefined4 *)(local_68 + 8);
            local_1b0 = local_c;
            local_1b4 = *(undefined4 **)(local_68 + 8);
            local_1ac = uVar6;
            memcpy(local_1b4,local_c,uVar6);
          }
          else {
            local_194 = local_c;
            *(undefined4 **)(local_18c + 8) = local_c;
            local_500 = *(undefined4 *)(local_18c + 8);
            local_19c = (int *)(*(int *)(local_18c + 8) + -0xc);
            local_198 = local_18c;
            if (local_19c != &DAT_00513d58) {
              *local_19c = *local_19c + 1;
            }
          }
          local_d0 = 0x98;
        }
        *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 0x10;
      }
      if (local_c[-1] == 0) {
        std::string::replace_fill((int)local_14,local_c[-1],0,-local_c[-1],0);
      }
      else {
        local_1fc = local_c[-1];
        local_244 = local_c[-1];
        local_245 = 0;
        local_24c = local_244;
        if (local_1fc < local_244) {
          local_24c = local_1fc;
        }
        FUN_004cfad4((int)local_14,0,local_24c,(uint)&local_245,0,0,0);
      }
      if (local_c + -3 != &DAT_00513d58) {
        local_c[-3] = 0;
      }
      while( true ) {
        piVar1 = (int *)(*(int *)(param_1 + 0x18) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar6 = FUN_004df398(*(int **)(param_1 + 0x18));
        }
        else {
          piVar1 = *(int **)(param_1 + 0x18);
          pbVar3 = (byte *)*piVar1;
          *piVar1 = *piVar1 + 1;
          uVar6 = (uint)*pbVar3;
        }
        if ((uVar6 == 0xffffffff) || (uVar6 == 0xbd)) break;
        std::string::replace_fill((int)local_14,local_c[-1],0,1,(byte)uVar6 ^ 0xbd);
      }
      if (*(int *)(param_3 + 0x40) == *(int *)(param_3 + 0x50)) {
        FUN_0040e240(param_3 + 0x38,*(int *)(param_3 + 0x40),(int)local_14);
      }
      else {
        local_250 = *(int *)(param_3 + 0x40);
        local_bc = local_250;
        if (local_250 != 0) {
          local_d0 = 0x134;
          local_254 = 0;
          *(undefined4 *)(local_250 + 8) = 0;
          if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
            local_264 = local_c[-1];
            local_26c = std::string::__getRep(local_250,local_264,local_264);
            local_268 = local_26c + 3;
            *(int **)(local_bc + 8) = local_268;
            local_270 = local_bc;
            local_770 = *(undefined4 *)(local_bc + 8);
            local_274 = local_264;
            local_278 = local_c;
            local_27c = *(undefined4 **)(local_bc + 8);
            memcpy(local_27c,local_c,local_264);
          }
          else {
            local_258 = local_c;
            *(undefined4 **)(local_250 + 8) = local_c;
            local_760 = *(undefined4 *)(local_250 + 8);
            local_260 = (int *)(*(int *)(local_250 + 8) + -0xc);
            local_25c = local_250;
            if (local_260 != &DAT_00513d58) {
              *local_260 = *local_260 + 1;
            }
          }
          local_d0 = 0x128;
        }
        *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 0x10;
      }
    }
    do {
      local_280 = FUN_004ded48((char *)local_97c,1,0x200,*(int **)(param_1 + 0x18));
      if (local_280 == 0) break;
      local_284 = 0;
      local_d0 = 0x20;
      if (local_280 != 0) {
        do {
          *(byte *)((int)local_97c + local_284) = *(byte *)((int)local_97c + local_284) ^ 0xbd;
          local_284 = local_284 + 1;
        } while (local_284 < local_280);
      }
      *(undefined1 *)((int)local_97c + local_280) = 0;
      local_288 = *(int *)(*(int *)(param_3 + 0x70) + -4);
      local_d0 = 0x20;
      local_28c = param_3 + 0x68;
      local_290 = *(uint *)(*(int *)(param_3 + 0x70) + -4);
      local_294 = strlen(local_97c);
      FUN_004cfad4(local_28c,local_290,0,(uint)local_97c,(uint)local_294,0,(uint)local_294);
    } while (local_280 <= (uint)(*(int *)(*(int *)(param_3 + 0x70) + -4) - local_288));
    local_c4 = local_c4 + -1;
    if (local_c != (undefined4 *)0x0) {
      if (local_c[-3] != -1) {
        local_298 = local_c + -3;
        if (local_298 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (local_298 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *local_298 = *local_298 + -1;
          iVar5 = *local_298 + 1;
        }
        if (iVar5 != 0) goto LAB_0040db0a;
      }
      local_29c = local_c + -3;
      local_2a0 = local_c + -3;
      operator_delete();
    }
  }
LAB_0040db0a:
  *in_FS_OFFSET = local_e0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040db1c  FUN_0040db1c   (352 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040db83) */
void __cdecl FUN_0040db1c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4ec318);
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  if ((uint)(iVar3 >> 4) < param_2) {
    local_c = &DAT_00513d64;
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_0040dc7c(param_1,*(int *)(param_1 + 8),param_2 - (iVar3 >> 4),(int)local_14);
    if (local_c != (undefined *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar3 = *piVar4 + 1;
        }
        if (iVar3 != 0) goto LAB_0040dc6c;
      }
      operator_delete();
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = iVar3 - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (param_2 < (uint)(iVar2 >> 4)) {
      iVar5 = param_2 * 0x10 + *(int *)(param_1 + 4);
      iVar1 = FUN_0040e20c(iVar3,iVar3,iVar5);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar3 - iVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar3 >> 4) * -0x10;
      FUN_0040b4f0(param_1,iVar1,iVar2);
    }
  }
LAB_0040dc6c:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dc7c  FUN_0040dc7c   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040dc7c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4ec374);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if ((uint)(iVar2 >> 4) < param_3) {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      local_3c = iVar1 >> 4;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = operator_new();
      if (iVar1 == 0) {
        local_1c = 8;
        local_8 = &std::bad_alloc::vftable;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0040df24(*(int *)(param_1 + 4),param_2,iVar1);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040e0cc((iVar2 >> 4) * 0x10 + iVar1,param_3,param_4);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040df24(param_2,*(int *)(param_1 + 8),((iVar2 >> 4) + param_3) * 0x10 + iVar1);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0040b4f0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(int *)(param_1 + 0x18) = local_38 * 0x10 + iVar1;
      *(uint *)(param_1 + 8) = (iVar2 >> 4) * 0x10 + iVar1 + param_3 * 0x10;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar2 = iVar1 - param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      if (param_3 < (uint)(iVar2 >> 4)) {
        FUN_0040df24(iVar1 + param_3 * -0x10,iVar1,iVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        FUN_0040e070(param_2,iVar1 + param_3 * -0x10,iVar1);
        FUN_0040e0a0(param_2,param_3 * 0x10 + param_2,param_4);
      }
      else {
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        iVar2 = param_3 - (iVar2 >> 4);
        FUN_0040e0cc(iVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 0x10;
        FUN_0040df24(param_2,iVar1,param_3 * 0x10 + param_2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 0x10;
        FUN_0040e0a0(param_2,iVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040df24  FUN_0040df24   (293 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040df24(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ec3c4);
  while (iVar4 = param_3, iVar3 = param_1, iVar3 != param_2) {
    param_3 = iVar4 + 0x10;
    param_1 = iVar3 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = std::string::__getRep(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e070  FUN_0040e070   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040e070(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    FUN_004cf384(param_3,param_2);
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e0a0  FUN_0040e0a0   (43 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040e0a0(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_004cf384(param_1,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e0cc  FUN_0040e0cc   (279 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040e0cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ec42c);
  iVar1 = param_1;
  while (param_1 = iVar1, iVar2 = param_2 + -1, param_2 != 0) {
    iVar1 = param_1 + 0x10;
    param_2 = iVar2;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar3 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar4 = std::string::__getRep(param_1,uVar3,uVar3);
        *(int **)(param_1 + 8) = piVar4 + 3;
        memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_3 + 8),uVar3);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
        piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e20c  FUN_0040e20c   (50 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040e20c(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_004cf384(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e240  FUN_0040e240   (893 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040e240(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x4ec4b4);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = (iVar3 >> 4) * 2;
    }
    iVar4 = operator_new();
    if (iVar4 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0040df24(*(int *)(param_1 + 4),param_2,iVar4);
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = (iVar5 >> 4) * 0x10 + iVar4;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar6 = std::string::__getRep(iVar5,uVar1,uVar1);
        *(int **)(iVar5 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(iVar5 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 8);
        piVar6 = (int *)(*(int *)(iVar5 + 8) + -0xc);
        if (piVar6 != &DAT_00513d58) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0040df24(param_2,*(int *)(param_1 + 8),(iVar5 >> 4) * 0x10 + iVar4 + 0x10);
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0040b4f0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(int *)(param_1 + 0x18) = iVar3 * 0x10 + iVar4;
    *(int *)(param_1 + 8) = (iVar5 >> 4) * 0x10 + iVar4 + 0x10;
    *(int *)(param_1 + 4) = iVar4;
  }
  else {
    local_8 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar3 + -8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar3 + -8) + -4);
        piVar6 = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(local_8 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(local_8 + 8),*(undefined4 **)(iVar3 + -8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + -8);
        piVar6 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar6 != &DAT_00513d58) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    FUN_0040e070(param_2,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8));
    FUN_004cf384(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

} // namespace tea

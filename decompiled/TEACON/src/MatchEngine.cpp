// TEACON.exe — application module "MatchEngine"
// 44 functions, 0x0040784c..0x0040ebec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040784c  MatchEngine::~MatchEngine   (200 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as MatchEngine::_dtor
void __cdecl MatchEngine::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42bb98);
  if (param_1 == 0) goto LAB_00407903;
  if (*(int *)(param_1 + 0x1010) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1010) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x1010) + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004078e4;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x1010) = 0;
  }
LAB_004078e4:
  Pattern::_dtor(param_1,2);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00407903:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407a80  std::logic_error::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::logic_error::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00407a8c  std::vector<TSDictionaryList::Dictionary *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_TSDictionaryList_Dictionary_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_TSDictionaryList_Dictionary_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004052f4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407ae0  FUN_00407ae0   (3508 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00407c7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00407ae0(int param_1,int param_2)

{
  char *pcVar1;
  HANDLE hFindFile;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 local_608 [248];
  undefined4 local_510;
  int *local_500;
  int *local_4f0;
  undefined1 local_4e8 [264];
  undefined4 local_3e0;
  undefined4 local_3d0;
  undefined4 local_3c0;
  _WIN32_FIND_DATAA local_3b8;
  undefined1 *local_270;
  int *local_260;
  int *local_250;
  int *local_240;
  int *local_23c;
  int *local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined1 *local_22c;
  undefined1 *local_228;
  int *local_224;
  undefined1 *local_220;
  undefined4 local_21c;
  int local_218;
  int local_214;
  int *local_210;
  uint local_20c;
  undefined1 local_205;
  uint local_204;
  undefined1 *local_200;
  undefined4 local_1fc;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  int *local_1e8;
  uint local_1e4;
  undefined1 *local_1e0;
  int *local_1dc;
  int *local_1d8;
  uint local_1d4;
  int *local_1d0;
  undefined1 *local_1cc;
  int *local_1c8;
  undefined4 local_1c4;
  uint *local_1b8;
  uint local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  int *local_198;
  uint local_194;
  undefined1 *local_190;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  undefined1 *local_17c;
  int *local_178;
  undefined4 local_174;
  uint *local_168;
  int *local_15c;
  int *local_158;
  int *local_154;
  undefined1 *local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  int *local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int *local_11c;
  char *local_110;
  int local_10c;
  uint local_108;
  undefined1 *local_104;
  undefined1 *local_100;
  undefined4 local_fc;
  int *local_f8;
  undefined4 *local_f4;
  uint local_f0;
  undefined1 *local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int *local_dc;
  undefined1 *local_d8;
  int *local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int *local_8c;
  undefined1 local_84 [8];
  int *local_7c;
  undefined **local_74 [2];
  undefined1 local_6c [8];
  int *local_64;
  undefined **local_5c [2];
  undefined1 local_54 [8];
  int *local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  undefined1 *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x42c04c);
  local_b8 = 0x14;
  local_cc = param_2;
  local_d0 = 0;
  local_c = (int *)0x0;
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    local_e0 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_e8 = std::string::__getRep(local_14,local_e0,local_e0);
    local_260 = local_e8 + 3;
    local_f0 = local_e0;
    local_f4 = *(undefined4 **)(local_cc + 8);
    local_f8 = local_260;
    local_ec = local_14;
    local_e4 = local_260;
    local_c = local_260;
    memcpy(local_260,local_f4,local_e0);
  }
  else {
    local_250 = *(int **)(param_2 + 8);
    local_dc = local_250 + -3;
    local_d8 = local_14;
    local_d4 = local_250;
    local_c = local_250;
    if (local_dc != &DAT_0042fab4) {
      *local_dc = *local_dc + 1;
    }
  }
  local_fc = 0;
  local_104 = local_24;
  local_100 = &DAT_0042fac0;
  local_1c = &DAT_0042fac0;
  local_270 = &DAT_0042fac0;
  local_ac = local_ac + 2;
  local_b8 = 8;
  local_10c = 0;
  while( true ) {
    uVar4 = (*(uint *)&DAT_0042fce8);
    if ((uint)local_c[-1] < (*(uint *)&DAT_0042fce8)) {
      uVar4 = local_c[-1];
    }
    local_110 = FUN_00408894((char *)local_c,'\\',uVar4);
    local_108 = (*(uint *)&DAT_0042fce8);
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)local_c;
    }
    if (local_108 == (*(uint *)&DAT_0042fce8)) break;
    if (local_108 < local_c[-1] - 1U) {
      if (local_10c != 0) {
        pcVar1 = strlen((uint *)&DAT_0042be01);
        FUN_00417320((int)local_24,0,0,0x42be01,(uint)pcVar1,0,(uint)pcVar1);
      }
      hFindFile = FindFirstFileA((LPCSTR)local_c,&local_3b8);
      local_b8 = 8;
      if (hFindFile == (HANDLE)0xffffffff) {
        local_b8 = 0x68;
        FUN_004088c0(param_1,(int)local_14,(int)local_24);
        local_b8 = 0x74;
        local_ac = local_ac + -1;
        if (local_1c != (undefined1 *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar3 = (int *)(local_1c + -0xc);
            if (piVar3 == &DAT_0042fab4) {
              iVar2 = 1;
            }
            else if (piVar3 == &DAT_0042fab4) {
              iVar2 = 1;
            }
            else {
              *piVar3 = *piVar3 + -1;
              iVar2 = *piVar3 + 1;
            }
            if (iVar2 != 0) goto LAB_00407f65;
          }
          local_144 = local_1c + -0xc;
          local_148 = local_1c + -0xc;
          operator_delete();
          local_14c = 0;
          local_150 = local_24;
          local_1c = (undefined1 *)0x0;
          local_3e0 = 0;
        }
LAB_00407f65:
        local_ac = local_ac + -1;
        if (local_c != (int *)0x0) {
          if (local_c[-3] != -1) {
            local_154 = local_c + -3;
            if (local_154 == &DAT_0042fab4) {
              iVar2 = 1;
            }
            else if (local_154 == &DAT_0042fab4) {
              iVar2 = 1;
            }
            else {
              *local_154 = *local_154 + -1;
              iVar2 = *local_154 + 1;
            }
            if (iVar2 != 0) goto LAB_00408011;
          }
          local_158 = local_c + -3;
          local_15c = local_c + -3;
          operator_delete();
        }
LAB_00408011:
        *in_FS_OFFSET = local_c8;
        return param_1;
      }
      FindClose(hFindFile);
      local_b8 = 0x44;
      puVar11 = local_24;
      iVar2 = std::string::string_from_cstr((int)local_34,(uint *)local_3b8.cFileName);
      local_ac = local_ac + 1;
      FUN_004088c0((int)local_44,iVar2,(int)puVar11);
      local_ac = local_ac + 1;
      FUN_00416bd0((int)local_24,(int)local_44);
      local_ac = local_ac + -1;
      if (local_3c != 0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_11c = (int *)(local_3c + -0xc);
          if (local_11c == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else if (local_11c == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else {
            *local_11c = *local_11c + -1;
            iVar2 = *local_11c + 1;
          }
          if (iVar2 != 0) goto LAB_00407df3;
        }
        local_120 = local_3c + -0xc;
        local_124 = local_3c + -0xc;
        operator_delete();
        local_128 = 0;
        local_12c = local_44;
        local_3c = 0;
        local_3c0 = 0;
      }
LAB_00407df3:
      local_b8 = 8;
      local_ac = local_ac + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          local_130 = (int *)(local_2c + -0xc);
          if (local_130 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else if (local_130 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar2 = *local_130 + 1;
          }
          if (iVar2 != 0) goto LAB_00408029;
        }
        local_134 = local_2c + -0xc;
        local_138 = local_2c + -0xc;
        operator_delete();
        local_13c = 0;
        local_140 = local_34;
        local_2c = 0;
        local_3d0 = 0;
      }
    }
LAB_00408029:
    uVar4 = local_108;
    if ((*(uint *)&DAT_0042fce8) - 0xe < local_108) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      puVar6 = &LAB_00405f50;
      uVar5 = 0;
      local_b8 = 0xa4;
      local_168 = (uint *)FUN_0041ea4c(local_4e8,PTR_s_invalid_string_size_parameter_in_00431a78);
      std::string::string_from_cstr((int)local_84,local_168);
      local_ac = local_ac + 2;
      local_5c[0] = &std::logic_error::vftable;
      local_174 = 0;
      local_4c = (int *)0x0;
      local_b8 = 0xb0;
      if (local_7c[-3] == -1 || local_7c[-3] + 1 < 0) {
        local_184 = local_7c[-1];
        local_18c = std::string::__getRep(local_54,local_184,local_184);
        local_190 = local_54;
        local_500 = local_18c + 3;
        local_194 = local_184;
        local_198 = local_7c;
        local_19c = local_500;
        local_188 = local_500;
        local_4c = local_500;
        memcpy(local_500,local_7c,local_184);
      }
      else {
        local_17c = local_54;
        local_178 = local_7c;
        local_4c = local_7c;
        local_4f0 = local_7c;
        local_180 = local_7c + -3;
        if (local_180 != &DAT_0042fab4) {
          *local_180 = *local_180 + 1;
        }
      }
      local_b8 = 0xa4;
      local_5c[0] = &std::length_error::vftable;
      local_ac = local_ac + 2;
      if (local_7c != (int *)0x0) {
        if (local_7c[-3] != -1) {
          local_1a0 = local_7c + -3;
          if (local_1a0 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else if (local_1a0 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else {
            *local_1a0 = *local_1a0 + -1;
            iVar2 = *local_1a0 + 1;
          }
          if (iVar2 != 0) goto LAB_00408283;
        }
        local_1a4 = local_7c + -3;
        local_1a8 = local_7c + -3;
        operator_delete();
        local_1ac = 0;
        local_1b0 = local_84;
        local_7c = (int *)0x0;
        local_510 = 0;
      }
LAB_00408283:
      local_b8 = 0x98;
      FUN_004280a0((uint *)&DAT_00405ef4,(undefined4*)local_5c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
    }
    if (uVar4 < (uint)local_c[-1]) {
      local_1b4 = local_c[-1] - uVar4;
      if ((uint)local_c[-1] < uVar4) {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004060a8;
        uVar5 = 0;
        local_b8 = 0xd4;
        local_1b8 = (uint *)FUN_0041ea4c(local_608,PTR_s_string_index_out_of_range_in_fun_00431a84);
        std::string::string_from_cstr((int)local_94,local_1b8);
        local_ac = local_ac + 2;
        local_74[0] = &std::logic_error::vftable;
        local_1c4 = 0;
        local_64 = (int *)0x0;
        local_b8 = 0xe0;
        if (local_8c[-3] == -1 || local_8c[-3] + 1 < 0) {
          local_1d4 = local_8c[-1];
          local_1dc = std::string::__getRep(local_6c,local_1d4,local_1d4);
          local_1e0 = local_6c;
          local_1ec = local_1dc + 3;
          local_1e4 = local_1d4;
          local_1e8 = local_8c;
          local_1d8 = local_1ec;
          local_64 = local_1ec;
          memcpy(local_1ec,local_8c,local_1d4);
        }
        else {
          local_1cc = local_6c;
          local_1c8 = local_8c;
          local_64 = local_8c;
          local_1d0 = local_8c + -3;
          if (local_1d0 != &DAT_0042fab4) {
            *local_1d0 = *local_1d0 + 1;
          }
        }
        local_b8 = 0xd4;
        local_74[0] = &std::out_of_range::vftable;
        local_ac = local_ac + 2;
        if (local_8c != (int *)0x0) {
          if (local_8c[-3] != -1) {
            local_1f0 = local_8c + -3;
            if (local_1f0 == &DAT_0042fab4) {
              iVar2 = 1;
            }
            else if (local_1f0 == &DAT_0042fab4) {
              iVar2 = 1;
            }
            else {
              *local_1f0 = *local_1f0 + -1;
              iVar2 = *local_1f0 + 1;
            }
            if (iVar2 != 0) goto LAB_00408526;
          }
          local_1f4 = local_8c + -3;
          local_1f8 = local_8c + -3;
          operator_delete();
          local_1fc = 0;
          local_200 = local_94;
          local_8c = (int *)0x0;
        }
LAB_00408526:
        local_b8 = 0x98;
        FUN_004280a0((uint *)&DAT_0040604c,(undefined4*)local_74,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
      }
      local_204 = local_c[-1] - uVar4;
      local_205 = 0;
      local_20c = local_204;
      if (local_1b4 < local_204) {
        local_20c = local_1b4;
      }
      FUN_00417320((int)local_14,uVar4,local_20c,(uint)&local_205,0,0,0);
    }
    else {
      std::string::replace_fill((int)local_14,local_c[-1],0,uVar4 - local_c[-1],0);
    }
    if (local_c + -3 != &DAT_0042fab4) {
      local_c[-3] = 0;
    }
    local_10c = 1;
  }
  local_b8 = 0x104;
  puVar11 = local_24;
  FUN_00408b40((int)local_a4,(int)local_14);
  local_ac = local_ac + 1;
  FUN_004088c0(param_1,(int)local_a4,(int)puVar11);
  local_b8 = 0x110;
  local_ac = local_ac + -1;
  if (local_9c != 0) {
    if (*(int *)(local_9c + -0xc) != -1) {
      local_210 = (int *)(local_9c + -0xc);
      if (local_210 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_210 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_210 = *local_210 + -1;
        iVar2 = *local_210 + 1;
      }
      if (iVar2 != 0) goto LAB_0040871f;
    }
    local_214 = local_9c + -0xc;
    local_218 = local_9c + -0xc;
    operator_delete();
    local_21c = 0;
    local_220 = local_a4;
    local_9c = 0;
  }
LAB_0040871f:
  local_ac = local_ac + -1;
  if (local_1c != (undefined1 *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_224 = (int *)(local_1c + -0xc);
      if (local_224 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_224 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_224 = *local_224 + -1;
        iVar2 = *local_224 + 1;
      }
      if (iVar2 != 0) goto LAB_004087ce;
    }
    local_228 = local_1c + -0xc;
    local_22c = local_1c + -0xc;
    operator_delete();
    local_230 = 0;
    local_234 = local_24;
    local_1c = (undefined1 *)0x0;
  }
LAB_004087ce:
  local_ac = local_ac + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_238 = local_c + -3;
      if (local_238 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (local_238 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *local_238 = *local_238 + -1;
        iVar2 = *local_238 + 1;
      }
      if (iVar2 != 0) goto LAB_0040887a;
    }
    local_23c = local_c + -3;
    local_240 = local_c + -3;
    operator_delete();
  }
LAB_0040887a:
  *in_FS_OFFSET = local_c8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408894  FUN_00408894   (41 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
char * __cdecl FUN_00408894(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (param_2 == *pcVar1) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004088c0  FUN_004088c0   (638 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004088c0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x42c1b8);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar2 = std::string::append((int)local_14,param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00408b23;
    }
    operator_delete();
  }
LAB_00408b23:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408b40  FUN_00408b40   (899 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00408b40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x42c234);
  local_c = 0;
  FUN_0041b484((int)local_14,1);
  puVar5 = local_14;
  local_1c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_1c = std::string::__getRep(local_24,uVar1,uVar1);
    local_1c = local_1c + 3;
    memcpy(local_1c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_1c = *(int **)(param_2 + 8);
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_0042fab4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = std::string::append((int)local_24,(int)puVar5);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_0042fab4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00408df9;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00408df9:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00408ea8;
    }
    operator_delete();
  }
LAB_00408ea8:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ec4  GetFileTitleString   (315 bytes)   [analysis]
//   GetFileTitleA wrapper returning a std::string
//   file placement: inferred (address adjacency)
int __cdecl GetFileTitleString(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_43c [250];
  undefined4 *local_54;
  undefined4 *local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x42c2b0);
  sVar3 = GetFileTitleA(*(LPCSTR *)(param_2 + 8),(LPSTR)local_43c,1000);
  if (sVar3 == 0) {
    local_18 = 8;
    std::string::string_from_cstr(param_1,local_43c);
    *in_FS_OFFSET = local_28;
  }
  else {
    local_18 = 0x14;
    local_34 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      local_44 = std::string::__getRep(param_1,uVar2,uVar2);
      local_40 = local_44 + 3;
      *(int **)(param_1 + 8) = local_40;
      local_48 = param_1;
      local_50 = *(undefined4 **)(param_2 + 8);
      local_54 = *(undefined4 **)(param_1 + 8);
      local_4c = uVar2;
      memcpy(local_54,local_50,uVar2);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar4 != &DAT_0042fab4) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409000  FUN_00409000   (156 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00409017) */
bool __cdecl FUN_00409000(int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_memchr(*(char **)(param_1 + 8),':',*(int *)(*(int *)(param_1 + 8) + -4));
  iVar2 = DAT_0042fce8;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(param_1 + 8);
  }
  if (iVar2 == DAT_0042fce8) {
    if ((*(int *)(*(char **)(param_1 + 8) + -4) == 0) || (**(char **)(param_1 + 8) != '\\')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = *(char *)(*(int *)(param_1 + 8) + iVar2 + 1) != '\\';
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040909c  GetProgramDirectory   (362 bytes)   [analysis]
//   GetModuleFileNameA, truncated after the last backslash
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004091e6) */
int __cdecl GetProgramDirectory(int param_1)

{
  DWORD DVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_154 [68];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x42c318);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_154,0x104);
  *(undefined1 *)((int)local_154 + DVar1) = 0;
  puVar2 = thunk_strrchr(local_154,'\\');
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 **)(param_1 + 8) = &DAT_0042fac0;
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_28 = 8;
  iVar3 = FUN_00418dec((int)local_14,local_154,(int)puVar2 + (1 - (int)local_154));
  local_1c = local_1c + 1;
  FUN_00407ae0(param_1,iVar3);
  local_28 = 0x14;
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040919d;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0040919d:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409208  FUN_00409208   (1106 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00409208(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x42c3c8);
  if ((*(int *)(*(int *)(param_2 + 8) + -4) == 0) ||
     (bVar1 = FUN_00409000(param_2), CONCAT31(extraout_var,bVar1) == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar5 = std::string::__getRep(param_1,uVar6,uVar6);
      *(int **)(param_1 + 8) = piVar5 + 3;
      memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar6);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar5 != &DAT_0042fab4) {
        *piVar5 = *piVar5 + 1;
      }
    }
    *in_FS_OFFSET = local_58;
    return param_1;
  }
  local_c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar6,uVar6);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar6);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_0042fab4) {
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = local_c[-1];
LAB_004094b5:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)local_c[-1] < uVar6) {
      uVar6 = local_c[-1];
    }
    pcVar3 = FUN_00408894((char *)local_c,';',uVar6);
    iVar4 = DAT_0042fce8;
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)local_c;
    }
    if (iVar4 == DAT_0042fce8) break;
    GetProgramDirectory((int)local_24);
    FUN_0041acdc((int)local_14,iVar4 + 1,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_004094b5;
      }
      operator_delete();
      local_1c = 0;
    }
  } while( true );
  puVar7 = local_14;
  GetProgramDirectory((int)local_34);
  FUN_004088c0(param_1,(int)local_34,(int)puVar7);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar5 = (int *)(local_2c + -0xc);
      if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004095ac;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_004095ac:
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0040963f;
    }
    operator_delete();
  }
LAB_0040963f:
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040965c  ReadFileTime   (102 bytes)   [analysis]
//   opens the file read-only and calls GetFileTime
//   file placement: inferred (address adjacency)
bool __cdecl ReadFileTime(int param_1,char param_2,LPFILETIME param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  LPFILETIME lpLastWriteTime;
  bool bVar2;
  
  bVar2 = false;
  hFile = CreateFileA(*(LPCSTR *)(param_1 + 8),0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    if (param_2 == '\0') {
      lpLastWriteTime = (LPFILETIME)0x0;
    }
    else {
      lpLastWriteTime = param_3;
      param_3 = (LPFILETIME)0x0;
    }
    BVar1 = GetFileTime(hFile,param_3,(LPFILETIME)0x0,lpLastWriteTime);
    bVar2 = BVar1 != 0;
    CloseHandle(hFile);
  }
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409948  std::locale::~locale   (110 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::_dtor(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x42c464);
  if (param_1 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a37c  MatchEngine::CompilePattern   (2748 bytes)   [notes (structure checked)]
//   recursive [template][;anagram] parser; mutually recursive with CompileTemplate / CompileAnagram. Not read line by line
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl MatchEngine::CompilePattern(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_390 [248];
  undefined4 local_298;
  int *local_288;
  undefined1 local_270 [240];
  int *local_180;
  undefined4 *local_17c;
  int local_178;
  int local_174 [2];
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  undefined4 *local_154;
  int local_150;
  uint local_14c;
  undefined1 local_145;
  uint local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  uint local_124;
  undefined1 *local_120;
  int *local_11c;
  int *local_118;
  uint local_114;
  int *local_110;
  undefined1 *local_10c;
  int *local_108;
  undefined4 local_104;
  uint *local_f8;
  uint local_f4;
  undefined1 *local_f0;
  undefined4 local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  uint local_d4;
  undefined1 *local_d0;
  int *local_cc;
  int *local_c8;
  uint local_c4;
  int *local_c0;
  undefined1 *local_bc;
  int *local_b8;
  undefined4 local_b4;
  uint *local_a8;
  uint local_a4;
  undefined1 local_9d;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  char *local_80;
  char local_79;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [8];
  int *local_4c;
  undefined1 local_44 [8];
  int *local_3c;
  undefined **local_34 [2];
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x42c61c);
  local_79 = *(int *)(*(int *)(param_3 + 8) + -4) != 0;
  iVar6 = 0;
  local_80 = (char *)*param_2;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = -1;
  local_94 = 0;
  local_98 = *(int *)(*(int *)(param_3 + 8) + -4);
  uVar1 = FUN_0040a360((int)param_1,0xf9);
  std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar1);
  std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
  std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
  if (((*local_80 != ';') && (*local_80 != ')')) &&
     (iVar6 = MatchEngine::CompileTemplate((int)param_1,(int *)&local_80,param_3,&local_90,param_5,&local_88),
     iVar6 == -1)) {
    *in_FS_OFFSET = local_78;
    return -1;
  }
  if (*local_80 != ';') goto LAB_0040aae3;
  local_80 = local_80 + 1;
  local_94 = *(int *)(*(int *)(param_3 + 8) + -4);
  std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0xf4);
  local_9c = FUN_004067a0(param_1[1099],param_1[0x44c]);
  local_9d = (undefined1)local_9c;
  std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(undefined1)local_9c);
  local_a4 = *(int *)(*(int *)(param_3 + 8) + -4) + 4;
  if (DAT_0042fce8 - 0xeU < local_a4) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00405f50;
    uVar1 = 0;
    local_68 = 0x14;
    local_a8 = (uint *)FUN_0041ea4c(local_270,PTR_s_invalid_string_size_parameter_in_00431a78);
    std::string::string_from_cstr((int)local_44,local_a8);
    local_5c = local_5c + 2;
    local_1c[0] = &std::logic_error::vftable;
    local_b4 = 0;
    local_c = (int *)0x0;
    local_68 = 0x20;
    if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
      local_c4 = local_3c[-1];
      local_cc = std::string::__getRep(local_14,local_c4,local_c4);
      local_d0 = local_14;
      local_288 = local_cc + 3;
      local_d4 = local_c4;
      local_d8 = local_3c;
      local_dc = local_288;
      local_c8 = local_288;
      local_c = local_288;
      memcpy(local_288,local_3c,local_c4);
    }
    else {
      local_bc = local_14;
      local_b8 = local_3c;
      local_c = local_3c;
      local_c0 = local_3c + -3;
      if (local_c0 != &DAT_0042fab4) {
        *local_c0 = *local_c0 + 1;
      }
    }
    local_68 = 0x14;
    local_1c[0] = &std::length_error::vftable;
    local_5c = local_5c + 2;
    if (local_3c != (int *)0x0) {
      if (local_3c[-3] != -1) {
        local_e0 = local_3c + -3;
        if (local_e0 == &DAT_0042fab4) {
          iVar4 = 1;
        }
        else if (local_e0 == &DAT_0042fab4) {
          iVar4 = 1;
        }
        else {
          *local_e0 = *local_e0 + -1;
          iVar4 = *local_e0 + 1;
        }
        if (iVar4 != 0) goto LAB_0040a75c;
      }
      local_e4 = local_3c + -3;
      local_e8 = local_3c + -3;
      operator_delete();
      local_ec = 0;
      local_f0 = local_44;
      local_3c = (int *)0x0;
      local_298 = 0;
    }
LAB_0040a75c:
    local_68 = 8;
    FUN_004280a0((uint *)&DAT_00405ef4,(undefined4*)local_1c,uVar1,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  if (local_a4 < *(uint *)(*(int *)(param_3 + 8) + -4)) {
    local_f4 = *(int *)(*(int *)(param_3 + 8) + -4) - local_a4;
    if (*(uint *)(*(int *)(param_3 + 8) + -4) < local_a4) {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_004060a8;
      uVar1 = 0;
      local_68 = 0x44;
      local_f8 = (uint *)FUN_0041ea4c(local_390,PTR_s_string_index_out_of_range_in_fun_00431a84);
      std::string::string_from_cstr((int)local_54,local_f8);
      local_5c = local_5c + 2;
      local_34[0] = &std::logic_error::vftable;
      local_104 = 0;
      local_24 = (int *)0x0;
      local_68 = 0x50;
      if (local_4c[-3] == -1 || local_4c[-3] + 1 < 0) {
        local_114 = local_4c[-1];
        local_11c = std::string::__getRep(local_2c,local_114,local_114);
        local_120 = local_2c;
        local_12c = local_11c + 3;
        local_124 = local_114;
        local_128 = local_4c;
        local_118 = local_12c;
        local_24 = local_12c;
        memcpy(local_12c,local_4c,local_114);
      }
      else {
        local_10c = local_2c;
        local_108 = local_4c;
        local_24 = local_4c;
        local_110 = local_4c + -3;
        if (local_110 != &DAT_0042fab4) {
          *local_110 = *local_110 + 1;
        }
      }
      local_68 = 0x44;
      local_34[0] = &std::out_of_range::vftable;
      local_5c = local_5c + 2;
      if (local_4c != (int *)0x0) {
        if (local_4c[-3] != -1) {
          local_130 = local_4c + -3;
          if (local_130 == &DAT_0042fab4) {
            iVar4 = 1;
          }
          else if (local_130 == &DAT_0042fab4) {
            iVar4 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar4 = *local_130 + 1;
          }
          if (iVar4 != 0) goto LAB_0040a9f3;
        }
        local_134 = local_4c + -3;
        local_138 = local_4c + -3;
        operator_delete();
        local_13c = 0;
        local_140 = local_54;
        local_4c = (int *)0x0;
      }
LAB_0040a9f3:
      local_68 = 8;
      FUN_004280a0((uint *)&DAT_0040604c,(undefined4*)local_34,uVar1,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    local_144 = *(int *)(*(int *)(param_3 + 8) + -4) - local_a4;
    local_145 = 0;
    local_14c = local_144;
    if (local_f4 < local_144) {
      local_14c = local_f4;
    }
    FUN_00417320(param_3,local_a4,local_14c,(uint)&local_145,0,0,0);
  }
  else {
    std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
                 local_a4 - *(int *)(*(int *)(param_3 + 8) + -4),0);
  }
  puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar2 != &DAT_0042fab4) {
    *puVar2 = 0;
  }
  local_84 = MatchEngine::CompileAnagram(param_1,(undefined4*)&local_80,param_3,&local_8c,local_88);
  if (local_84 == -1) {
    *in_FS_OFFSET = local_78;
    return -1;
  }
  if (local_79 != '\0') {
    *param_5 = *(int *)(*(int *)(param_3 + 8) + -4) + 1;
  }
LAB_0040aae3:
  if (((iVar6 == 0) && (local_88 == 0)) && (local_88 = local_8c, iVar6 = local_84, 0 < local_8c)) {
    *param_4 = local_98;
  }
  if (iVar6 < 0x81) {
    if (0 < local_88) {
      if ((local_8c < 15000) && (iVar6 < local_84 + local_8c)) {
        local_88 = (local_84 + local_8c) - iVar6;
      }
      if (-1 < local_90) {
        *param_4 = local_98;
      }
      local_150 = local_98;
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_0041a7fc(param_3);
      }
      local_154 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (local_154 != &DAT_0042fab4) {
        *local_154 = 0xffffffff;
      }
      puVar3 = (undefined1 *)(*(int *)(param_3 + 8) + local_150);
      uVar1 = FUN_0040a360((int)param_1,0xfa);
      *puVar3 = (char)uVar1;
      *param_6 = *param_6 + local_88;
    }
    if (-1 < local_90) {
      local_158 = local_90;
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_0041a7fc(param_3);
      }
      puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar2 != &DAT_0042fab4) {
        *puVar2 = 0xffffffff;
      }
      if (*(char *)(*(int *)(param_3 + 8) + local_158) == -0xe) {
        local_15c = local_90;
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_0041a7fc(param_3);
        }
        puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar2 != &DAT_0042fab4) {
          *puVar2 = 0xffffffff;
        }
        *(undefined1 *)(*(int *)(param_3 + 8) + local_15c) = 0xf3;
      }
      else {
        local_160 = local_90;
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_0041a7fc(param_3);
        }
        puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar2 != &DAT_0042fab4) {
          *puVar2 = 0xffffffff;
        }
        if (*(char *)(*(int *)(param_3 + 8) + local_160) == -6) {
          local_164 = local_90;
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_0041a7fc(param_3);
          }
          puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar2 != &DAT_0042fab4) {
            *puVar2 = 0xffffffff;
          }
          *(undefined1 *)(*(int *)(param_3 + 8) + local_164) = 0xfb;
        }
      }
    }
    local_168 = local_98 + 1;
    if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
      FUN_0041a7fc(param_3);
    }
    puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
    if (puVar2 != &DAT_0042fab4) {
      *puVar2 = 0xffffffff;
    }
    *(char *)(*(int *)(param_3 + 8) + local_168) = (char)iVar6;
    local_16c = local_98 + 2;
    if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
      FUN_0041a7fc(param_3);
    }
    puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
    if (puVar2 != &DAT_0042fab4) {
      *puVar2 = 0xffffffff;
    }
    if (local_88 < 0x65) {
      uVar5 = (undefined1)local_88;
    }
    else {
      uVar5 = 0x65;
    }
    *(undefined1 *)(*(int *)(param_3 + 8) + local_16c) = uVar5;
    if (local_94 != 0) {
      local_174[0] = local_84;
      uVar8 = 0;
      local_180 = local_174;
      do {
        local_178 = local_94 + uVar8 + 2;
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_0041a7fc(param_3);
        }
        local_17c = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (local_17c != &DAT_0042fab4) {
          *local_17c = 0xffffffff;
        }
        *(char *)(*(int *)(param_3 + 8) + local_178) = (char)*local_180;
        uVar8 = uVar8 + 1;
        local_180 = (int *)((int)local_180 + 1);
      } while (uVar8 < 4);
    }
    std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0xfc);
    *param_2 = (int)local_80;
    *in_FS_OFFSET = local_78;
  }
  else {
    *(undefined1 *)(param_1 + 0x409) = 4;
    iVar6 = -1;
    *in_FS_OFFSET = local_78;
  }
  return iVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ae38  MatchEngine::CompileTemplate   (2202 bytes, 2 ranges)   [notes (inferred)]
//   template-side compiler (choice lists, escapes per your notes). Role inferred from call structure
int __cdecl MatchEngine::CompileTemplate(int param_1,int *param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 local_58;
  char local_38;
  int local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)*param_2;
  local_c = 0;
  local_10 = 0;
  iVar12 = 0;
  do {
    while( true ) {
      iVar10 = local_c;
      bVar2 = *local_8;
      if ((bVar2 == 0x3b) || (bVar2 == 0x29)) goto LAB_0040b659;
      if (bVar2 == 0x5d) {
        *(undefined1 *)(param_1 + 0x1024) = 9;
        return -1;
      }
      if (*local_8 == 0x5e) {
        *(undefined1 *)(param_1 + 0x1024) = 0xc;
        return -1;
      }
      if (*local_8 == 0) {
        *(undefined1 *)(param_1 + 0x1024) = 7;
        return -1;
      }
      uVar4 = (undefined1)iVar12;
      if (*local_8 == 0x28) break;
      if (*local_8 == 0x2a) {
        *param_6 = 15000;
        if (local_c != 0) {
          iVar10 = local_c + 1;
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_0041a7fc(param_3);
          }
          puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar11 != &DAT_0042fab4) {
            *puVar11 = 0xffffffff;
          }
          *(undefined1 *)(*(int *)(param_3 + 8) + iVar10) = uVar4;
          local_10 = local_10 + iVar12;
        }
        local_8 = local_8 + 1;
        local_c = *(int *)(*(int *)(param_3 + 8) + -4);
        *param_4 = local_c;
        uVar5 = FUN_0040a360(param_1,0xf2);
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
        *param_5 = *(int *)(*(int *)(param_3 + 8) + -4);
        iVar12 = MatchEngine::CompileTemplate(param_1,(int *)&local_8,param_3,param_4,param_5,param_6);
        if (iVar12 == -1) {
          return -1;
        }
        goto LAB_0040b659;
      }
      if (*local_8 == 0x5b) {
        if (local_c == 0) {
          local_c = *(int *)(*(int *)(param_3 + 8) + -4);
          uVar5 = FUN_0040a360(param_1,0xf1);
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
          iVar12 = 0;
        }
        else {
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_0041a7fc(param_3);
          }
          puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar11 != &DAT_0042fab4) {
            *puVar11 = 0xffffffff;
          }
          puVar8 = (undefined1 *)(*(int *)(param_3 + 8) + iVar10);
          uVar5 = FUN_0040a360(param_1,0xf1);
          *puVar8 = (char)uVar5;
        }
        if (local_8[1] == 0x5e) {
          local_8 = local_8 + 1;
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)iVar12 | 0xc0);
        }
        else {
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)iVar12 | 0x40);
        }
        if (local_8[1] == 0x5d) {
          *(undefined1 *)(param_1 + 0x1024) = 0xe;
          return -1;
        }
        iVar10 = *(int *)(*(int *)(param_3 + 8) + -4);
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
        while( true ) {
          local_8 = local_8 + 1;
          pcVar6 = thunk_FUN_0041ef2c(PTR_s_ptr_0042c4bc,*local_8);
          if (pcVar6 != (char *)0x0) break;
          if ((*local_8 == 0x5c) && (local_8[1] != 0)) {
            local_8 = local_8 + 1;
          }
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) +
                                   *(int *)(param_1 + 0x1130) * 4) + 8 + (uint)*local_8 * 8);
          if (iVar7 == 0xff) break;
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)iVar7);
        }
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_0041a7fc(param_3);
        }
        puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar11 != &DAT_0042fab4) {
          *puVar11 = 0xffffffff;
        }
        local_38 = (char)iVar10;
        *(char *)(*(int *)(param_3 + 8) + iVar10) =
             *(char *)(*(int *)(param_3 + 8) + -4) - (local_38 + '\x01');
        if (*local_8 != 0x5d) {
          if ((*local_8 == 0x29) && (local_8[1] == 0)) {
            *(undefined1 *)(param_1 + 0x1024) = 5;
          }
          else {
            *(undefined1 *)(param_1 + 0x1024) = 2;
          }
          return -1;
        }
      }
      else if ((*local_8 < 0x30) || (0x39 < *local_8)) {
        bVar3 = false;
        if (*local_8 == 0x5c) {
          bVar3 = true;
          pbVar1 = local_8 + 2;
          local_8 = local_8 + 1;
          if (*pbVar1 == 0) {
            *(undefined1 *)(param_1 + 0x1024) = 0xd;
            return -1;
          }
        }
        iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) +
                                  *(int *)(param_1 + 0x1130) * 4) + 8 + (uint)*local_8 * 8);
        if (((iVar10 == 0xff) && ((bVar3 || ((*local_8 != 0x2e && (*local_8 != 0x3f)))))) ||
           ((iVar10 != 0xff && (bVar3)))) {
          if (local_c != 0) {
            iVar9 = local_c + 1;
            iVar7 = *(int *)(*(int *)(param_3 + 8) + -0xc);
            if (iVar7 != 0 && 0 < iVar7 + 1) {
              FUN_0041a7fc(param_3);
            }
            puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
            if (puVar11 != &DAT_0042fab4) {
              *puVar11 = 0xffffffff;
            }
            *(undefined1 *)(*(int *)(param_3 + 8) + iVar9) = uVar4;
            local_10 = local_10 + iVar12;
            local_c = 0;
          }
          if (iVar10 == 0xff) {
            uVar5 = FUN_0040a360(param_1,0xff);
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,*local_8);
            *(undefined1 *)(param_1 + 0x1025 + (uint)*local_8) = 0xff;
          }
          else {
            uVar5 = FUN_0040a360(param_1,0xfe);
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,*local_8);
            *(undefined1 *)(param_1 + 0x1025 + (uint)*local_8) = 0xfe;
            local_8 = local_8 + -1;
          }
          iVar12 = -1;
        }
        else {
          if (local_c == 0) {
            local_c = *(int *)(*(int *)(param_3 + 8) + -4);
            uVar5 = FUN_0040a360(param_1,0xf0);
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
            iVar12 = 0;
          }
          if ((iVar10 != 0xff) && ((bVar3 || ((*local_8 != 0x2e && (*local_8 != 0x3f)))))) {
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)iVar12);
            local_58 = (undefined1)iVar10;
            std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_58);
          }
        }
      }
      else {
        if (local_c == 0) {
          local_c = *(int *)(*(int *)(param_3 + 8) + -4);
          uVar5 = FUN_0040a360(param_1,0xf1);
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar5);
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
          iVar12 = 0;
        }
        else {
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_0041a7fc(param_3);
          }
          puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar11 != &DAT_0042fab4) {
            *puVar11 = 0xffffffff;
          }
          puVar8 = (undefined1 *)(*(int *)(param_3 + 8) + iVar10);
          uVar5 = FUN_0040a360(param_1,0xf1);
          *puVar8 = (char)uVar5;
        }
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)iVar12 | 0x80);
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,*local_8 - 0x30);
      }
      iVar10 = *(int *)(*(int *)(param_3 + 8) + -4);
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_0041a7fc(param_3);
      }
      puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar11 != &DAT_0042fab4) {
        *puVar11 = 0xffffffff;
      }
      if (*(char *)(*(int *)(param_3 + 8) + iVar10 + -2) == -1) {
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_0041a7fc(param_3);
        }
        puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar11 != &DAT_0042fab4) {
          *puVar11 = 0xffffffff;
        }
        if (*(char *)(*(int *)(param_3 + 8) + iVar10 + -1) != ' ') goto LAB_0040b63c;
      }
      else {
LAB_0040b63c:
        *param_5 = iVar10;
      }
      iVar12 = iVar12 + 1;
      local_8 = local_8 + 1;
    }
    if (local_c != 0) {
      iVar7 = local_c + 1;
      iVar10 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar10 != 0 && 0 < iVar10 + 1) {
        FUN_0041a7fc(param_3);
      }
      puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar11 != &DAT_0042fab4) {
        *puVar11 = 0xffffffff;
      }
      *(undefined1 *)(*(int *)(param_3 + 8) + iVar7) = uVar4;
      local_10 = local_10 + iVar12;
      local_c = 0;
    }
    local_8 = local_8 + 1;
    local_14 = 0;
    iVar12 = MatchEngine::CompilePattern((int *)param_1,(int *)&local_8,param_3,param_4,param_5,&local_14);
    if (iVar12 == -1) {
      return -1;
    }
    local_10 = local_10 + iVar12;
    local_8 = local_8 + 1;
  } while (local_14 < 1);
  *param_6 = *param_6 + local_14;
  iVar12 = MatchEngine::CompileTemplate(param_1,(int *)&local_8,param_3,param_4,param_5,param_6);
  if (iVar12 == -1) {
    local_10 = -1;
  }
  else {
    local_10 = local_10 + iVar12;
LAB_0040b659:
    if (local_c != 0) {
      iVar10 = local_c + 1;
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_0041a7fc(param_3);
      }
      puVar11 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar11 != &DAT_0042fab4) {
        *puVar11 = 0xffffffff;
      }
      *(char *)(*(int *)(param_3 + 8) + iVar10) = (char)iVar12;
      local_10 = local_10 + iVar12;
    }
    std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0xfc);
    *param_2 = (int)local_8;
  }
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b6d8  MatchEngine::CompileAnagram   (3470 bytes)   [notes (inferred)]
//   anagram-side compiler; uses the Pattern pool. Role inferred from call structure
/* WARNING: Removing unreachable block (ram,0x0040b7df) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl MatchEngine::CompileAnagram(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *in_FS_OFFSET;
  int local_524 [251];
  char acStack_138 [20];
  undefined4 *local_124;
  int local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118;
  undefined1 local_117;
  char local_116;
  undefined1 local_115;
  int local_114;
  int local_110;
  byte local_109;
  char local_108 [16];
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int local_e0;
  int local_d4;
  int local_d0;
  undefined4 *local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  char local_b9;
  int local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  int *local_a4;
  undefined1 *local_98;
  undefined1 *local_94;
  int *local_90;
  int local_8c;
  undefined1 *local_80;
  undefined1 *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined1 *local_c;
  
  __InitExceptBlockLDTC(0x42c6d0);
  piVar8 = local_524;
  local_4c = (byte *)*param_2;
  local_50 = -1;
  local_54 = 0;
  local_58 = 0;
  do {
    *piVar8 = 0;
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  for (; *local_4c != 0x29; local_4c = local_4c + 1) {
    if (*local_4c == 0x5c) {
      pbVar1 = local_4c + 2;
      local_4c = local_4c + 1;
      if (*pbVar1 == 0) {
        *(undefined1 *)(param_1 + 0x409) = 0xd;
        *in_FS_OFFSET = local_48;
        return -1;
      }
    }
    else {
      if (*local_4c == 0x3b) {
        *(undefined1 *)(param_1 + 0x409) = 6;
        *in_FS_OFFSET = local_48;
        return -1;
      }
      if (*local_4c == 0) {
        *(undefined1 *)(param_1 + 0x409) = 7;
        *in_FS_OFFSET = local_48;
        return -1;
      }
      if (*local_4c == 0x28) {
        local_60 = 0;
        local_68 = local_14;
        local_64 = &DAT_0042fac0;
        local_c = &DAT_0042fac0;
        local_2c = local_2c + 1;
        local_38 = 0x20;
        local_4c = local_4c + 1;
        local_74 = MatchEngine::CompilePattern(param_1,(int *)&local_4c,(int)local_14,&local_6c,&local_70,param_4);
        if (local_74 == -1) {
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_c != (undefined1 *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              local_78 = (int *)(local_c + -0xc);
              if (local_78 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (local_78 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *local_78 = *local_78 + -1;
                iVar5 = *local_78 + 1;
              }
              if (iVar5 != 0) goto LAB_0040b8ac;
            }
            local_7c = local_c + -0xc;
            local_80 = local_c + -0xc;
            operator_delete();
          }
LAB_0040b8ac:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_8c = Pattern::Add(param_1,(int)local_14);
        if (local_8c < 0) {
          *(undefined1 *)(param_1 + 0x409) = 3;
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_c != (undefined1 *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              local_90 = (int *)(local_c + -0xc);
              if (local_90 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (local_90 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *local_90 = *local_90 + -1;
                iVar5 = *local_90 + 1;
              }
              if (iVar5 != 0) goto LAB_0040b991;
            }
            local_94 = local_c + -0xc;
            local_98 = local_c + -0xc;
            operator_delete();
          }
LAB_0040b991:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_524[local_8c] = local_524[local_8c] + 1;
        local_54 = local_54 + local_74;
        local_2c = local_2c + -1;
        if (local_c != (undefined1 *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            local_a4 = (int *)(local_c + -0xc);
            if (local_a4 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else if (local_a4 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else {
              *local_a4 = *local_a4 + -1;
              iVar7 = *local_a4 + 1;
            }
            if (iVar7 != 0) goto LAB_0040ba63;
          }
          local_a8 = local_c + -0xc;
          local_ac = local_c + -0xc;
          operator_delete();
          local_b0 = 0;
          local_c = (undefined1 *)0x0;
          local_b4 = local_14;
        }
LAB_0040ba63:
        local_38 = 0;
      }
    }
  }
  piVar8 = local_524;
  local_58 = 0;
  do {
    if (0 < *piVar8) {
      local_b8 = Pattern::At((int)param_1,(byte)local_58);
      local_b9 = **(char **)(local_b8 + 8);
      if (local_b9 == -6) {
        local_50 = *(int *)(*(int *)(param_3 + 8) + -4);
      }
      uVar4 = FUN_0040a360((int)param_1,0xfa);
      local_ba = (undefined1)uVar4;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_ba);
      local_bb = (undefined1)*piVar8;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_bb);
      local_bc = (byte)local_58;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
    }
    *piVar8 = 0;
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  for (local_4c = (byte *)*param_2; (bVar2 = *local_4c, bVar2 != 0 && (bVar2 != 0x29));
      local_4c = local_4c + 1) {
    if (bVar2 == 0x5c) {
      local_4c = local_4c + 1;
    }
    else if (*local_4c == 0x28) {
      iVar7 = 1;
      do {
        pbVar1 = local_4c + 1;
        if ((*pbVar1 == 0x5c) && (local_4c[2] != 0)) {
          pbVar1 = local_4c + 3;
        }
        local_4c = pbVar1;
        bVar2 = *local_4c;
        if (bVar2 != 0) {
          if (bVar2 == 0x28) {
            iVar7 = iVar7 + 1;
          }
          else if (bVar2 == 0x29) {
            iVar7 = iVar7 + -1;
          }
        }
      } while (0 < iVar7);
    }
    else {
      if (*local_4c == 0x5d) {
        *(undefined1 *)(param_1 + 0x409) = 9;
        *in_FS_OFFSET = local_48;
        return -1;
      }
      if (*local_4c == 0x5b) {
        pbVar1 = local_4c + 1;
        if (*pbVar1 == 0x5e) {
          local_4c = local_4c + 1;
        }
        local_c0 = (uint)(*pbVar1 != 0x5e);
        if (local_4c[1] == 0x5d) {
          *(undefined1 *)(param_1 + 0x409) = 0xe;
          *in_FS_OFFSET = local_48;
          return -1;
        }
        local_38 = 0x50;
        local_1c = 0;
        FUN_0041b484((int)local_24,0x100);
        local_2c = local_2c + 1;
        local_38 = 0x68;
        while( true ) {
          local_4c = local_4c + 1;
          pcVar9 = thunk_FUN_0041ef2c(PTR_s_ptr_0042c4bc,*local_4c);
          if (pcVar9 != (char *)0x0) break;
          if ((*local_4c == 0x5c) && (local_4c[1] != 0)) {
            local_4c = local_4c + 1;
          }
          local_c4 = *(int *)(*(int *)(*(int *)(param_1[1099] + 0xc) + param_1[0x44c] * 4) + 8 +
                             (uint)*local_4c * 8);
          local_38 = 0x68;
          if (local_c4 == 0xff) break;
          local_c8 = local_c4;
          if (1 < *(int *)(local_1c + -0xc) + 1) {
            FUN_0041a7fc((int)local_24);
          }
          local_cc = (undefined4 *)(local_1c + -0xc);
          if (local_cc != &DAT_0042fab4) {
            *local_cc = 0xffffffff;
          }
          *(undefined1 *)(local_1c + local_c8) = (undefined1)local_c0;
        }
        iVar7 = Pattern::Add(param_1,(int)local_24);
        if (iVar7 < 0) {
          *(undefined1 *)(param_1 + 0x409) = 3;
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_1c != 0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              piVar8 = (int *)(local_1c + -0xc);
              if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *piVar8 = *piVar8 + -1;
                iVar5 = *piVar8 + 1;
              }
              if (iVar5 != 0) goto LAB_0040bdc9;
            }
            local_d0 = local_1c + -0xc;
            local_d4 = local_1c + -0xc;
            operator_delete();
          }
LAB_0040bdc9:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_524[iVar7] = local_524[iVar7] + 1;
        if (*local_4c != 0x5d) {
          if ((*local_4c == 0x29) && (local_4c[1] == 0)) {
            *(undefined1 *)(param_1 + 0x409) = 5;
          }
          else {
            *(undefined1 *)(param_1 + 0x409) = 2;
          }
          iVar7 = -1;
          local_2c = local_2c + -1;
          if (local_1c != 0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              piVar8 = (int *)(local_1c + -0xc);
              if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else if (piVar8 == &DAT_0042fab4) {
                iVar5 = 1;
              }
              else {
                *piVar8 = *piVar8 + -1;
                iVar5 = *piVar8 + 1;
              }
              if (iVar5 != 0) goto LAB_0040be97;
            }
            local_e0 = local_1c + -0xc;
            operator_delete();
          }
LAB_0040be97:
          *in_FS_OFFSET = local_48;
          return iVar7;
        }
        local_54 = local_54 + 1;
        local_2c = local_2c + -1;
        if (local_1c != 0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar8 = (int *)(local_1c + -0xc);
            if (piVar8 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else if (piVar8 == &DAT_0042fab4) {
              iVar7 = 1;
            }
            else {
              *piVar8 = *piVar8 + -1;
              iVar7 = *piVar8 + 1;
            }
            if (iVar7 != 0) goto LAB_0040bf43;
          }
          local_ec = local_1c + -0xc;
          local_f0 = local_1c + -0xc;
          operator_delete();
          local_f4 = 0;
          local_1c = 0;
          local_f8 = local_24;
        }
LAB_0040bf43:
        local_38 = 0;
      }
    }
  }
  piVar8 = local_524;
  local_58 = 0;
  do {
    if (0 < *piVar8) {
      uVar4 = FUN_0040a360((int)param_1,0xf7);
      local_108[0xf] = (char)uVar4;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_108[0xf]);
      local_108[0xe] = (char)*piVar8;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_108[0xe]);
      local_108[0xd] = (byte)local_58;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
    }
    *piVar8 = 0;
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  pcVar9 = local_108;
  local_4c = (byte *)*param_2;
  local_58 = 0;
  do {
    *pcVar9 = '\0';
    local_58 = local_58 + 1;
    pcVar9 = pcVar9 + 1;
  } while (local_58 < 10);
  for (; (bVar2 = *local_4c, bVar2 != 0 && (bVar2 != 0x29)); local_4c = local_4c + 1) {
    if (bVar2 == 0x28) {
      iVar7 = 1;
      do {
        pbVar1 = local_4c + 1;
        if ((*pbVar1 == 0x5c) && (local_4c[2] != 0)) {
          pbVar1 = local_4c + 3;
        }
        local_4c = pbVar1;
        bVar2 = *local_4c;
        if (bVar2 != 0) {
          if (bVar2 == 0x28) {
            iVar7 = iVar7 + 1;
          }
          else if (bVar2 == 0x29) {
            iVar7 = iVar7 + -1;
          }
        }
        pbVar1 = local_4c;
      } while (0 < iVar7);
    }
    else {
      pbVar1 = local_4c;
      if (*local_4c == 0x5b) {
        while (local_4c = pbVar1, pbVar1 = local_4c + 1, *pbVar1 != 0x5d) {
          if ((*pbVar1 == 0x5c) && (local_4c[2] != 0)) {
            pbVar1 = local_4c + 2;
          }
        }
      }
      else if (*local_4c == 0x2a) {
        local_50 = -1;
        *param_4 = 15000;
      }
      else {
        bVar2 = *local_4c;
        if ((bVar2 < 0x30) || (0x39 < bVar2)) {
          if (bVar2 != 0x20) {
            bVar3 = false;
            if ((*local_4c == 0x5c) && (local_4c[1] != 0)) {
              bVar3 = true;
              local_4c = local_4c + 1;
            }
            local_109 = *local_4c;
            local_110 = param_1[0x44c];
            local_114 = *(int *)(*(int *)(*(int *)(param_1[1099] + 0xc) + param_1[0x44c] * 4) + 8 +
                                (uint)*local_4c * 8);
            if ((local_114 == 0xff) && ((bVar3 || ((*local_4c != 0x2e && (*local_4c != 0x3f)))))) {
              *(undefined1 *)(param_1 + 0x409) = 0xb;
              *in_FS_OFFSET = local_48;
              return -1;
            }
            if ((local_114 == 0xff) || ((!bVar3 && ((*local_4c == 0x2e || (*local_4c == 0x3f)))))) {
              FUN_0040a360((int)param_1,0xf2);
            }
            else {
              local_524[local_114] = local_524[local_114] + 1;
            }
            local_54 = local_54 + 1;
            pbVar1 = local_4c;
          }
        }
        else {
          acStack_138[bVar2] = acStack_138[bVar2] + '\x01';
          local_54 = local_54 + 1;
          pbVar1 = local_4c;
        }
      }
    }
    local_4c = pbVar1;
  }
  pcVar9 = local_108;
  local_58 = 0;
  do {
    if (*pcVar9 != '\0') break;
    local_58 = local_58 + 1;
    pcVar9 = pcVar9 + 1;
  } while (local_58 < 10);
  if (local_58 < 10) {
    uVar4 = FUN_0040a360((int)param_1,0xf8);
    local_115 = (undefined1)uVar4;
    std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_115);
    local_58 = 0;
    pcVar9 = local_108;
    do {
      local_116 = *pcVar9;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_116);
      local_58 = local_58 + 1;
      pcVar9 = pcVar9 + 1;
    } while (local_58 < 10);
  }
  iVar7 = 0;
  local_5c = 0;
  local_58 = 0;
  piVar8 = local_524;
  do {
    iVar5 = *piVar8;
    if (0 < iVar5) {
      local_5c = local_5c + 1;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    local_58 = local_58 + 1;
    piVar8 = piVar8 + 1;
  } while (local_58 < 0x100);
  if (iVar7 < 2) {
    if (iVar7 == 1) {
      uVar4 = FUN_0040a360((int)param_1,0xf5);
      local_11a = (undefined1)uVar4;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_11a);
      local_11b = (undefined1)local_5c;
      std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(undefined1)local_5c);
      local_58 = 0;
      piVar8 = local_524;
      do {
        if (0 < *piVar8) {
          local_11c = (byte)local_58;
          std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
        }
        local_58 = local_58 + 1;
        piVar8 = piVar8 + 1;
      } while (local_58 < 0x100);
    }
  }
  else {
    uVar4 = FUN_0040a360((int)param_1,0xf6);
    local_117 = (undefined1)uVar4;
    std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_117);
    local_58 = 0;
    piVar8 = local_524;
    do {
      if (0 < *piVar8) {
        local_118 = (undefined1)*piVar8;
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,local_118);
        local_119 = (byte)local_58;
        std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(byte)local_58);
      }
      local_58 = local_58 + 1;
      piVar8 = piVar8 + 1;
    } while (local_58 < 0x100);
  }
  *param_2 = local_4c;
  if ((-1 < local_50) && (param_5 == 0)) {
    local_120 = local_50;
    if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
      FUN_0041a7fc(param_3);
    }
    local_124 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
    if (local_124 != &DAT_0042fab4) {
      *local_124 = 0xffffffff;
    }
    puVar6 = (undefined1 *)(*(int *)(param_3 + 8) + local_120);
    uVar4 = FUN_0040a360((int)param_1,0xfb);
    *puVar6 = (char)uVar4;
  }
  *in_FS_OFFSET = local_48;
  return local_54;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c468  MatchEngine::Compile   (4431 bytes)   [notes+analysis]
//   compiles one leaf pattern and selects the fast-path matcher stored at +0x114c
/* WARNING: Removing unreachable block (ram,0x0040c568) */
/* WARNING: Removing unreachable block (ram,0x0040c65f) */
/* WARNING: Removing unreachable block (ram,0x0040c60b) */
/* WARNING: Removing unreachable block (ram,0x0040c652) */
/* WARNING: Removing unreachable block (ram,0x0040c6f6) */
/* WARNING: Removing unreachable block (ram,0x0040c729) */
/* WARNING: Removing unreachable block (ram,0x0040c734) */
/* WARNING: Removing unreachable block (ram,0x0040c774) */
/* WARNING: Removing unreachable block (ram,0x0040c74d) */
/* WARNING: Removing unreachable block (ram,0x0040c76d) */
/* WARNING: Removing unreachable block (ram,0x0040c75a) */
/* WARNING: Removing unreachable block (ram,0x0040c779) */
/* WARNING: Removing unreachable block (ram,0x0040c77d) */
/* WARNING: Removing unreachable block (ram,0x0040c7cb) */
/* WARNING: Removing unreachable block (ram,0x0040c80b) */
/* WARNING: Removing unreachable block (ram,0x0040c902) */
/* WARNING: Removing unreachable block (ram,0x0040c8ae) */
/* WARNING: Removing unreachable block (ram,0x0040c8f5) */
/* WARNING: Removing unreachable block (ram,0x0040c999) */
/* WARNING: Removing unreachable block (ram,0x0040c9cc) */
/* WARNING: Removing unreachable block (ram,0x0040c9d7) */
/* WARNING: Removing unreachable block (ram,0x0040ca17) */
/* WARNING: Removing unreachable block (ram,0x0040c9f0) */
/* WARNING: Removing unreachable block (ram,0x0040ca10) */
/* WARNING: Removing unreachable block (ram,0x0040c9fd) */
/* WARNING: Removing unreachable block (ram,0x0040ca1c) */
/* WARNING: Removing unreachable block (ram,0x0040ca20) */
/* WARNING: Removing unreachable block (ram,0x0040ca6e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl MatchEngine::Compile(int *param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  int *local_5c0;
  int *local_5b0;
  undefined1 local_5a8 [816];
  uint local_278;
  uint local_274;
  uint local_270;
  undefined1 local_269;
  undefined1 *local_268;
  undefined4 local_264;
  int *local_260;
  int *local_25c;
  int *local_258;
  int *local_254;
  int *local_250;
  uint local_24c;
  undefined1 *local_248;
  int *local_244;
  int *local_240;
  uint local_23c;
  int *local_238;
  undefined1 *local_234;
  int *local_230;
  undefined4 local_22c;
  uint *local_220;
  uint local_21c;
  undefined4 *local_218;
  uint local_214;
  undefined4 *local_210;
  uint local_20c;
  byte local_205;
  undefined4 local_204;
  undefined1 local_200;
  uint local_1fc;
  undefined1 local_1f5;
  undefined1 *local_1f4;
  undefined4 local_1f0;
  int *local_1ec;
  int *local_1e8;
  int *local_1e4;
  int *local_1e0;
  int *local_1dc;
  uint local_1d8;
  undefined1 *local_1d4;
  int *local_1d0;
  int *local_1cc;
  uint local_1c8;
  int *local_1c4;
  undefined1 *local_1c0;
  int *local_1bc;
  undefined4 local_1b8;
  uint *local_1ac;
  int local_1a8;
  undefined4 *local_1a4;
  uint local_1a0;
  uint local_19c;
  int *local_198;
  undefined4 *local_194;
  int *local_190;
  int local_18c;
  undefined4 *local_188;
  uint local_184;
  undefined1 local_17d;
  uint local_17c;
  uint local_12c;
  uint local_dc;
  int local_d8;
  int local_d4;
  undefined4 *local_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int *local_9c;
  undefined **local_94 [2];
  undefined1 local_8c [8];
  int *local_84;
  undefined1 local_7c [8];
  int *local_74;
  undefined **local_6c [2];
  undefined1 local_64 [8];
  int *local_5c;
  
  bVar9 = 0;
  __InitExceptBlockLDTC(0x42c814);
  param_1[1099] = param_2;
  param_1[0x44c] = param_3;
  memset((undefined4 *)((int)param_1 + 0x1025),0,0x100);
  local_cc = strlen(param_4);
  local_d0 = (undefined4 *)operator_new_array();
  uVar4 = 0xffffffff;
  do {
    puVar7 = param_4;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    puVar7 = (uint *)((int)param_4 + (uint)bVar9 * -2 + 1);
    uVar5 = *param_4;
    param_4 = puVar7;
  } while ((char)uVar5 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)((int)puVar7 - uVar4);
  puVar8 = local_d0;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar9 * -2 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  *(char *)((int)local_d0 + (int)local_cc) = ')';
  ((undefined1 *)((int)local_d0 + 1))[(int)local_cc] = 0;
  local_d4 = 0;
  *(undefined1 *)(param_1 + 0x409) = 0;
  param_1[0x408] = 0;
  *(undefined1 *)(param_1 + 0x451) = 0xfd;
  param_1[0x452] = 0;
  Pattern::Clear(param_1);
  local_d8 = -1;
  local_dc = (*(uint *)&DAT_0042fce8);
  if (*(int *)(param_1[0x404] + -4) == 0) {
    std::string::replace_fill((int)(param_1 + 0x402),*(uint *)(param_1[0x404] + -4),0,
                 -*(int *)(param_1[0x404] + -4),0);
  }
  else {
    local_12c = *(uint *)(param_1[0x404] + -4);
    local_17c = *(uint *)(param_1[0x404] + -4);
    local_17d = 0;
    local_184 = local_17c;
    if (local_12c < local_17c) {
      local_184 = local_12c;
    }
    FUN_00417320((int)(param_1 + 0x402),0,local_184,(uint)&local_17d,0,0,0);
  }
  local_188 = (undefined4 *)(param_1[0x404] + -0xc);
  if (local_188 != &DAT_0042fab4) {
    *local_188 = 0;
  }
  iVar2 = MatchEngine::CompilePattern(param_1,(int *)&local_d0,(int)(param_1 + 0x402),&local_d8,(int *)&local_dc,
                       &local_d4);
  if (iVar2 != -1) {
    if (*(char *)((int)local_d0 + 1) == '\0') {
      if (local_d4 + iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x409) = 1;
        iVar2 = -1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x409) = 8;
      iVar2 = -1;
    }
  }
  if (-1 < local_d8) {
    local_190 = param_1 + 0x402;
    local_18c = local_d8;
    if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
      FUN_0041a7fc((int)local_190);
    }
    local_194 = (undefined4 *)(local_190[2] + -0xc);
    if (local_194 != &DAT_0042fab4) {
      *local_194 = 0xffffffff;
    }
    *(undefined1 *)(local_190[2] + local_18c) = 0xfb;
  }
  operator_delete_array();
  if (iVar2 == -1) {
    *in_FS_OFFSET = local_c8;
  }
  else {
    param_1[0x406] = iVar2;
    param_1[0x407] = iVar2 + local_d4;
    if (0x65 < param_1[0x407]) {
      param_1[0x407] = 0x65;
    }
    param_1[0x408] = 1;
    local_198 = param_1 + 0x402;
    std::string::replace_fill((int)local_198,*(uint *)(param_1[0x404] + -4),0,1,0xfd);
    param_1[0x453] = (int)MatchEngine::MatchGeneral;
    if (param_1[0x452] == 2) {
      cVar1 = (char)param_1[0x451];
      if (cVar1 == -0x10) {
        param_1[0x453] = (int)MatchEngine::MatchFixedTemplate;
      }
      else if (cVar1 == -0xb) {
        param_1[0x453] = (int)MatchEngine::MatchDistinctAnagram;
      }
      else if (cVar1 == -10) {
        param_1[0x453] = (int)MatchEngine::MatchMultiAnagram;
      }
    }
    for (local_19c = 0; (int)local_19c < *(int *)(param_1[0x404] + -4); local_19c = local_19c + 1) {
      local_1a0 = local_19c;
      if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
        FUN_0041a7fc((int)(param_1 + 0x402));
      }
      local_1a4 = (undefined4 *)(param_1[0x404] + -0xc);
      if (local_1a4 != &DAT_0042fab4) {
        *local_1a4 = 0xffffffff;
      }
      bVar9 = *(byte *)(param_1[0x404] + local_1a0);
      if (0xee < bVar9) {
        if (bVar9 == 0xff) {
          local_1a8 = local_19c + 1;
          if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
            FUN_0041a7fc((int)(param_1 + 0x402));
          }
          uVar4 = local_19c;
          if ((undefined4 *)(param_1[0x404] + -0xc) != &DAT_0042fab4) {
            *(undefined4 *)(param_1[0x404] + -0xc) = 0xffffffff;
          }
          if (*(char *)(param_1[0x404] + local_1a8) != ' ') break;
          local_dc = local_dc - 2;
          if (*(uint *)(param_1[0x404] + -4) < local_19c) {
            uVar14 = 0;
            uVar13 = 0;
            uVar12 = 0;
            uVar5 = 1;
            puVar11 = &LAB_004060a8;
            uVar10 = 0;
            local_b8 = 0x80;
            local_1ac = (uint *)FUN_0041ea4c(local_5a8,
                                             PTR_s_string_index_out_of_range_in_fun_00431a84);
            std::string::string_from_cstr((int)local_7c,local_1ac);
            local_ac = local_ac + 2;
            local_6c[0] = &std::logic_error::vftable;
            local_1b8 = 0;
            local_5c = (int *)0x0;
            local_b8 = 0x8c;
            if (local_74[-3] == -1 || local_74[-3] + 1 < 0) {
              local_1c8 = local_74[-1];
              local_1d0 = std::string::__getRep(local_64,local_1c8,local_1c8);
              local_1d4 = local_64;
              local_5c0 = local_1d0 + 3;
              local_1d8 = local_1c8;
              local_1dc = local_74;
              local_1e0 = local_5c0;
              local_1cc = local_5c0;
              local_5c = local_5c0;
              memcpy(local_5c0,local_74,local_1c8);
            }
            else {
              local_1c0 = local_64;
              local_1bc = local_74;
              local_5c = local_74;
              local_5b0 = local_74;
              local_1c4 = local_74 + -3;
              if (local_1c4 != &DAT_0042fab4) {
                *local_1c4 = *local_1c4 + 1;
              }
            }
            local_b8 = 0x80;
            local_6c[0] = &std::out_of_range::vftable;
            local_ac = local_ac + 2;
            if (local_74 != (int *)0x0) {
              if (local_74[-3] != -1) {
                local_1e4 = local_74 + -3;
                if (local_1e4 == &DAT_0042fab4) {
                  iVar2 = 1;
                }
                else if (local_1e4 == &DAT_0042fab4) {
                  iVar2 = 1;
                }
                else {
                  *local_1e4 = *local_1e4 + -1;
                  iVar2 = *local_1e4 + 1;
                }
                if (iVar2 != 0) goto LAB_0040cffc;
              }
              local_1e8 = local_74 + -3;
              local_1ec = local_74 + -3;
              operator_delete();
              local_1f0 = 0;
              local_1f4 = local_7c;
              local_74 = (int *)0x0;
              local_5d0 = 0;
            }
LAB_0040cffc:
            local_b8 = 0x74;
            FUN_004280a0((uint *)&DAT_0040604c,(undefined4*)local_6c,uVar10,puVar11,uVar5,uVar12,uVar13,uVar14);
          }
          local_1fc = *(int *)(param_1[0x404] + -4) - uVar4;
          local_1f5 = 0;
          if (2 < local_1fc) {
            local_1fc = 2;
          }
          FUN_00417320((int)(param_1 + 0x402),uVar4,local_1fc,(uint)&local_1f5,0,0,0);
          local_19c = local_19c - 1;
        }
        else if (((bVar9 != 0xf9) && (bVar9 != 0xfa)) && (bVar9 != 0xfb)) break;
      }
    }
    uVar4 = *(uint *)(param_1[0x404] + -4);
    do {
      while( true ) {
        do {
          uVar5 = uVar4;
          uVar4 = uVar5 - 1;
          if ((int)uVar5 < 1) goto LAB_0040d4d1;
          local_204 = DAT_0042c4c0;
          local_200 = DAT_0042c4c4;
          local_20c = uVar4;
          if (*(int *)(param_1[0x404] + -0xc) != 0 && 0 < *(int *)(param_1[0x404] + -0xc) + 1) {
            FUN_0041a7fc((int)(param_1 + 0x402));
          }
          local_210 = (undefined4 *)(param_1[0x404] + -0xc);
          if (local_210 != &DAT_0042fab4) {
            *local_210 = 0xffffffff;
          }
          local_205 = *(byte *)(param_1[0x404] + local_20c);
        } while (local_205 < 0xef);
        if (local_205 != 0xff) break;
        local_214 = uVar5;
        if (1 < *(int *)(param_1[0x404] + -0xc) + 1) {
          FUN_0041a7fc((int)(param_1 + 0x402));
        }
        local_218 = (undefined4 *)(param_1[0x404] + -0xc);
        if (local_218 != &DAT_0042fab4) {
          *local_218 = 0xffffffff;
        }
        if (*(char *)(param_1[0x404] + local_214) != ' ') goto LAB_0040d4d1;
        if ((int)uVar4 < (int)local_dc) {
          local_dc = local_dc - 2;
        }
        local_21c = uVar4;
        if (*(uint *)(param_1[0x404] + -4) < uVar4) {
          uVar14 = 0;
          uVar13 = 0;
          uVar12 = 0;
          uVar4 = 1;
          puVar11 = &LAB_004060a8;
          uVar10 = 0;
          local_b8 = 0xbc;
          local_220 = (uint *)FUN_0041ea4c(local_6c8,PTR_s_string_index_out_of_range_in_fun_00431a84
                                          );
          std::string::string_from_cstr((int)local_a4,local_220);
          local_ac = local_ac + 2;
          local_94[0] = &std::logic_error::vftable;
          local_22c = 0;
          local_84 = (int *)0x0;
          local_b8 = 200;
          if (local_9c[-3] == -1 || local_9c[-3] + 1 < 0) {
            local_23c = local_9c[-1];
            local_244 = std::string::__getRep(local_8c,local_23c,local_23c);
            local_248 = local_8c;
            local_254 = local_244 + 3;
            local_24c = local_23c;
            local_250 = local_9c;
            local_240 = local_254;
            local_84 = local_254;
            memcpy(local_254,local_9c,local_23c);
          }
          else {
            local_234 = local_8c;
            local_230 = local_9c;
            local_84 = local_9c;
            local_238 = local_9c + -3;
            if (local_238 != &DAT_0042fab4) {
              *local_238 = *local_238 + 1;
            }
          }
          local_b8 = 0xbc;
          local_94[0] = &std::out_of_range::vftable;
          local_ac = local_ac + 2;
          if (local_9c != (int *)0x0) {
            if (local_9c[-3] != -1) {
              local_258 = local_9c + -3;
              if (local_258 == &DAT_0042fab4) {
                iVar2 = 1;
              }
              else if (local_258 == &DAT_0042fab4) {
                iVar2 = 1;
              }
              else {
                *local_258 = *local_258 + -1;
                iVar2 = *local_258 + 1;
              }
              if (iVar2 != 0) goto LAB_0040d43d;
            }
            local_25c = local_9c + -3;
            local_260 = local_9c + -3;
            operator_delete();
            local_264 = 0;
            local_268 = local_a4;
            local_9c = (int *)0x0;
          }
LAB_0040d43d:
          local_b8 = 0xb0;
          FUN_004280a0((uint *)&DAT_0040604c,(undefined4*)local_94,uVar10,puVar11,uVar4,uVar12,uVar13,uVar14);
        }
        local_270 = *(int *)(param_1[0x404] + -4) - local_21c;
        local_269 = 0;
        if (2 < local_270) {
          local_270 = 2;
        }
        FUN_00417320((int)(param_1 + 0x402),local_21c,local_270,(uint)&local_269,0,0,0);
        uVar4 = uVar5 - 2;
      }
      pcVar3 = thunk_FUN_0041ef2c((char *)&local_204,local_205);
    } while (pcVar3 == (char *)0x0);
LAB_0040d4d1:
    pcVar3 = thunk_memchr((char *)((int)param_1 + 0x1025),-2,0x100);
    param_1[0x44a] = (uint)(pcVar3 != (char *)0x0);
    pcVar3 = thunk_memchr((char *)((int)param_1 + 0x1025),-1,0x100);
    if (pcVar3 != (char *)0x0) {
      param_1[0x44a] = 1;
      if (param_5 == 0) {
        uVar4 = 0;
        do {
          if (*(char *)((int)param_1 + uVar4 + 0x1025) == '\0') {
            *(undefined1 *)((int)param_1 + uVar4 + 0x1025) = 0xff;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x100);
      }
      if (local_dc != (*(uint *)&DAT_0042fce8)) {
        local_274 = local_dc;
        std::string::replace_fill((int)(param_1 + 0x402),local_dc,0,1,0xff);
        local_278 = local_dc + 1;
        std::string::replace_fill((int)(param_1 + 0x402),local_278,0,1,0);
      }
    }
    *in_FS_OFFSET = local_c8;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d5b8  MatchEngine::IsValid   (14 bytes)   [analysis]
//   returns the int at +0x1020; MatchEngineSet::Compile treats 0 as a compile failure
undefined4 __cdecl MatchEngine::IsValid(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1020);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d5c8  MatchEngine::GetStatus   (14 bytes)   [analysis]
//   returns the status byte at +0x1024
undefined1 __cdecl MatchEngine::GetStatus(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1024);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d5d8  MatchEngine::MatchEngine   (191 bytes)   [analysis]
//   constructor: Pattern pool, empty bytecode string, shortest=1, longest=100, matcher=MatchGeneral
/* WARNING: Removing unreachable block (ram,0x0040d629) */
undefined4 * __cdecl MatchEngine::MatchEngine(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42c910);
  Pattern::Pattern(param_1);
  param_1[0x404] = 0;
  param_1[0x404] = &DAT_0042fac0;
  param_1[0x408] = 0;
  *(undefined1 *)(param_1 + 0x409) = 1;
  param_1[1099] = 0;
  param_1[0x44c] = 0xffffffff;
  param_1[0x44d] = 1;
  param_1[0x44e] = 100;
  param_1[0x453] = MatchEngine::MatchGeneral;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d6b4  MatchEngine::SetShortest   (51 bytes)   [analysis]
//   clamps to 1..100 and stores at +0x1134
void __cdecl MatchEngine::SetShortest(int param_1,int param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x1134) = 1;
    return;
  }
  if (99 < param_2) {
    *(undefined4 *)(param_1 + 0x1134) = 100;
    return;
  }
  *(int *)(param_1 + 0x1134) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d6e8  MatchEngine::SetLongest   (51 bytes)   [analysis]
//   clamps to 1..100 and stores at +0x1138
void __cdecl MatchEngine::SetLongest(int param_1,int param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x1138) = 1;
    return;
  }
  if (99 < param_2) {
    *(undefined4 *)(param_1 + 0x1138) = 100;
    return;
  }
  *(int *)(param_1 + 0x1138) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d71c  MatchEngine::SetWordLength   (31 bytes)   [analysis]
//   stores the candidate length (+0x113c) and the slack over the template minimum (+0x1140)
void __cdecl MatchEngine::SetWordLength(int param_1,int param_2)

{
  *(int *)(param_1 + 0x113c) = param_2;
  *(int *)(param_1 + 0x1140) = param_2 - *(int *)(param_1 + 0x1018);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d73c  MatchEngine::MatchWord   (262 bytes)   [analysis]
//   builds the punctuation-prefix and filtered raw buffers when needed, then calls the selected matcher
bool __cdecl MatchEngine::MatchWord(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *local_c;
  char local_5;
  
  MatchEngine::ResetMatchState();
  if (*(int *)(param_1 + 0x1128) == 0) {
LAB_0040d80f:
    iVar2 = (**(code **)(param_1 + 0x114c))
                      (param_1,*(int *)(param_1 + 0x1010) + 3,param_2,0,
                       *(undefined4 *)(param_1 + 0x1140),*(undefined4 *)(param_1 + 0x113c));
    return iVar2 != 0;
  }
  pcVar3 = (char *)(param_2 + 0x80);
  pbVar4 = (byte *)(param_2 + 0x100);
  local_5 = '\0';
  local_c = (byte *)(param_2 + 1000);
LAB_0040d77b:
  bVar1 = *local_c;
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x112c) + 0xc) + *(int *)(param_1 + 0x1130) * 4)
               + 8 + (uint)bVar1 * 8) == 0xff) {
    if ((pcVar3 == (char *)(param_2 + *(int *)(param_1 + 0x113c) + 0x80U)) &&
       ((bVar1 == 0 || (bVar1 == 0x20)))) {
      *pcVar3 = local_5;
LAB_0040d80c:
      *pbVar4 = 0;
      goto LAB_0040d80f;
    }
    if (*(char *)(param_1 + 0x1025 + (uint)bVar1) == -1) {
      *pbVar4 = bVar1;
      pbVar4 = pbVar4 + 1;
      local_5 = local_5 + '\x01';
    }
  }
  else {
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
    *pcVar3 = local_5;
    pcVar3 = pcVar3 + 1;
    if ((char *)(param_2 + *(int *)(param_1 + 0x113c) + 0x80U) < pcVar3) goto LAB_0040d80c;
  }
  local_c = local_c + 1;
  goto LAB_0040d77b;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d844  MatchEngine::FormatBalance   (255 bytes)   [notes]
//   renders the anagram balance table as text. Entry checked; body only skimmed
void __cdecl MatchEngine::FormatBalance(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  uint local_8;
  
  if (DAT_00434680 == 1) {
    local_8 = 0;
    do {
      bVar1 = true;
      piVar5 = &DAT_00434280;
      local_10 = 0;
      do {
        if ((*piVar5 != 0) && (0 < *piVar5 == local_8)) {
          if (bVar1) {
            if (local_8 == 0) {
              std::string::replace_fill(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,0x2d);
            }
            else {
              std::string::replace_fill(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,0x2b);
            }
            bVar1 = false;
          }
          if (local_8 == 0) {
            iVar2 = -*piVar5;
          }
          else {
            iVar2 = *piVar5;
          }
          iVar4 = 0;
          if (0 < iVar2) {
            do {
              uVar3 = FUN_00406780(*(int *)(param_1 + 0x112c),*(int *)(param_1 + 0x1130),local_10);
              std::string::replace_fill(param_2,*(uint *)(*(int *)(param_2 + 8) + -4),0,1,(char)uVar3);
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar2);
          }
        }
        local_10 = local_10 + 1;
        piVar5 = piVar5 + 1;
      } while (local_10 < 0x100);
      local_8 = local_8 + 1;
    } while ((int)local_8 < 2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d944  MatchEngine::GetMinLength   (28 bytes)   [analysis]
//   max(shortest setting, compiled min_len)
int __cdecl MatchEngine::GetMinLength(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1134);
  if (*(int *)(param_1 + 0x1134) < *(int *)(param_1 + 0x1018)) {
    iVar1 = *(int *)(param_1 + 0x1018);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d960  MatchEngine::GetMaxLength   (28 bytes)   [analysis]
//   min(longest setting, compiled max_len)
int __cdecl MatchEngine::GetMaxLength(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x101c);
  if (*(int *)(param_1 + 0x1138) < *(int *)(param_1 + 0x101c)) {
    iVar1 = *(int *)(param_1 + 0x1138);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da78  MatchEngine::ResetMatchState   (15 bytes)   [analysis]
//   clears the variable-binding flag and the balance flag before a match
void __stdcall MatchEngine::ResetMatchState(void)

{
  DAT_00434684 = 0;
  (*(undefined4 *)&DAT_00434680) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040da88  FUN_0040da88   (87 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040dac6) */
int __cdecl FUN_0040da88(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42c934);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 8) = &DAT_0042fac0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dc80  MatchEngine::MatchFixedTemplate   (32 bytes)   [notes+analysis]
//   fast path: (offset, letter) pairs compared in sequence until an opcode >= 0xf0
byte * MatchEngine::MatchFixedTemplate(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 1);
  do {
    bVar1 = pcVar2[1];
    if (0xef < bVar1) {
      return (byte *)(pcVar2 + 1);
    }
    pcVar2 = pcVar2 + 2;
  } while (*(char *)(param_3 + (uint)bVar1) == *pcVar2);
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dca0  MatchEngine::MatchDistinctAnagram   (114 bytes)   [notes]
//   fast path for anagrams of distinct letters. Entry checked; body not read
byte * MatchEngine::MatchDistinctAnagram(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char local_104 [256];
  
  uVar3 = (uint)*(byte *)(param_2 + 7);
  pbVar2 = (byte *)(param_2 + 8);
  memset((undefined4 *)local_104,0,(uint)*(byte *)(param_2 + 1));
  for (; *param_3 != 0xff; param_3 = param_3 + 1) {
    local_104[*param_3] = local_104[*param_3] + '\x01';
  }
  do {
    if ((int)uVar3 < 1) {
      return pbVar2;
    }
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (local_104[bVar1] != '\0');
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dd14  MatchEngine::MatchMultiAnagram   (99 bytes)   [notes]
//   fast path for anagrams with repeated letters. Entry checked; body not read
byte * MatchEngine::MatchMultiAnagram(undefined4 param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte local_104 [256];
  
  pbVar1 = (byte *)(param_2 + 6);
  memset((undefined4 *)local_104,0,(uint)*(byte *)(param_2 + 1));
  for (; *param_3 != 0xff; param_3 = param_3 + 1) {
    local_104[*param_3] = local_104[*param_3] + 1;
  }
  do {
    pbVar2 = pbVar1 + 1;
    pbVar1 = pbVar1 + 2;
    if (0xef < *pbVar2) {
      return pbVar1;
    }
  } while (*pbVar2 <= local_104[*pbVar1]);
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dd78  MatchEngine::RunTemplateVM   (1659 bytes, 2 ranges)   [notes]
//   backtracking template bytecode interpreter. Entry checked; body not read
byte * MatchEngine::RunTemplateVM(int param_1,byte *param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  int local_64;
  uint local_48;
  undefined4 local_40;
  byte local_1c [12];
  byte local_10 [12];
  
  __InitExceptBlockLDTC(0x42cdd0);
  local_10[0] = (*(byte *)&DAT_00434684);
  if ((*(byte *)&DAT_00434684) == 1) {
    VariableValues::Save(local_10);
  }
  do {
    while( true ) {
      while( true ) {
        bVar2 = *param_2;
        pbVar8 = param_2 + 1;
        if (bVar2 == 0xfc) {
          local_10[0] = local_10[0] | 2;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        if (bVar2 != 0xf0) break;
        bVar2 = *pbVar8;
        param_2 = MatchEngine::MatchFixedTemplate(param_1,(int)param_2,(int)param_3);
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        param_3 = param_3 + bVar2;
      }
      if (bVar2 == 0xf1) break;
      if (bVar2 == 0xf3) {
        pbVar8 = param_2 + 2;
        bVar2 = param_3[param_5 + 0x80];
        while (param_2 = MatchEngine::RunTemplateVM(param_1,pbVar8,param_3 + param_5,param_4,0),
              param_2 == (byte *)0x0) {
          if ((int)(uint)bVar2 <= param_4) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              (*(byte *)&DAT_00434684) = 0;
            }
            else if (local_10[0] == 1) {
              VariableValues::Restore(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
          param_4 = param_4 + 1;
        }
      }
      else if (bVar2 == 0xf2) {
        pbVar8 = param_2 + 2;
        while( true ) {
          bVar2 = param_3[0x80];
          for (; (param_2 = MatchEngine::RunTemplateVM(param_1,pbVar8,param_3,param_4,param_5),
                 param_2 == (byte *)0x0 && (param_4 < (int)(uint)bVar2)); param_4 = param_4 + 1) {
          }
          if (param_2 != (byte *)0x0) break;
          if (param_5 == 0) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              (*(byte *)&DAT_00434684) = 0;
            }
            else if (local_10[0] == 1) {
              VariableValues::Restore(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
          param_3 = param_3 + 1;
          param_5 = param_5 + -1;
        }
      }
      else if (bVar2 == 0xf9) {
        bVar2 = *pbVar8;
        param_2 = MatchEngine::MatchGeneral(param_1,(char *)(param_2 + 3),param_3,param_4,0,(uint)bVar2);
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        param_3 = param_3 + bVar2;
      }
      else if (bVar2 == 0xfb) {
        bVar2 = *pbVar8;
        if ((int)(uint)param_2[2] < param_5) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        pbVar8 = MatchEngine::MatchGeneral(param_1,(char *)(param_2 + 3),param_3,param_4,param_5,
                              (uint)bVar2 + param_5);
        if ((pbVar8 == (byte *)0x0) ||
           (param_2 = MatchEngine::RunTemplateVM(param_1,pbVar8,param_3 + (uint)bVar2 + param_5,param_4,0),
           param_2 == (byte *)0x0)) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
      }
      else if (bVar2 == 0xfa) {
        local_48 = (uint)*pbVar8;
        bVar2 = param_2[2];
        pbVar8 = param_2 + 3;
        local_64 = 0;
        while( true ) {
          local_1c[0] = (*(byte *)&DAT_00434684);
          if ((*(byte *)&DAT_00434684) == 1) {
            VariableValues::Save(local_1c);
          }
          pbVar7 = MatchEngine::MatchGeneral(param_1,(char *)pbVar8,param_3,param_4,local_64,local_48);
          if ((pbVar7 != (byte *)0x0) &&
             (param_2 = MatchEngine::RunTemplateVM(param_1,pbVar7,param_3 + local_48,param_4,param_5),
             param_2 != (byte *)0x0)) break;
          local_48 = local_48 + 1;
          param_5 = param_5 + -1;
          local_64 = local_64 + 1;
          if ((param_5 < 0) || ((int)(uint)bVar2 < local_64)) {
            pbVar8 = (byte *)0x0;
            if (local_1c[0] == 0) {
              (*(byte *)&DAT_00434684) = 0;
            }
            else if (local_1c[0] == 1) {
              VariableValues::Restore(local_1c);
            }
            if (local_10[0] == 0) {
              (*(byte *)&DAT_00434684) = 0;
            }
            else if (local_10[0] == 1) {
              VariableValues::Restore(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
          if (local_1c[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_1c[0] == 1) {
            VariableValues::Restore(local_1c);
          }
        }
        local_1c[0] = local_1c[0] | 2;
        if (local_1c[0] == 0) {
          (*(byte *)&DAT_00434684) = 0;
        }
        else if (local_1c[0] == 1) {
          VariableValues::Restore(local_1c);
        }
      }
      else {
        iVar1 = param_4 + 0x100;
        if (bVar2 == 0xff) {
          param_4 = param_4 + 1;
        }
        param_2 = param_2 + 2;
        if (*pbVar8 != param_3[iVar1]) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
      }
    }
    bVar2 = *pbVar8;
    param_2 = param_2 + 2;
    while (bVar4 = *param_2, bVar4 < 0xf0) {
      pbVar8 = param_2 + 1;
      if ((bVar4 & 0x40) == 0) {
        if ((bVar4 & 0x80) == 0) {
          param_2 = param_2 + 2;
          if (param_3[bVar4] != *pbVar8) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              (*(byte *)&DAT_00434684) = 0;
            }
            else if (local_10[0] == 1) {
              VariableValues::Restore(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
        }
        else {
          param_2 = param_2 + 2;
          bVar9 = VariableValues::Bind((uint)*pbVar8,param_3[bVar4 & 0xffffff7f]);
          if (CONCAT31(extraout_var,bVar9) == 0) {
            pbVar8 = (byte *)0x0;
            if (local_10[0] == 0) {
              (*(byte *)&DAT_00434684) = 0;
            }
            else if (local_10[0] == 1) {
              VariableValues::Restore(local_10);
            }
            *in_FS_OFFSET = local_40;
            return pbVar8;
          }
        }
      }
      else {
        param_2 = param_2 + 2;
        bVar9 = (bVar4 & 0x80) != 0;
        uVar5 = (uint)*pbVar8;
        do {
          uVar6 = uVar5 - 1;
          if ((int)uVar5 < 1) break;
          bVar3 = *param_2;
          param_2 = param_2 + 1;
          uVar5 = uVar6;
        } while (param_3[bVar4 & 0x3f] != bVar3);
        if (-1 < (int)uVar6 == bVar9) {
          pbVar8 = (byte *)0x0;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_40;
          return pbVar8;
        }
        if (!bVar9) {
          while (0 < (int)uVar6) {
            param_2 = param_2 + 1;
            uVar6 = uVar6 - 1;
          }
        }
      }
    }
    param_3 = param_3 + bVar2;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e3f8  MatchEngine::AnagramSingleLetters   (54 bytes)   [notes+analysis]
//   anagram opcode 0xf5 operand walker: <count> <letter...>
byte * MatchEngine::AnagramSingleLetters(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = (uint)*param_2;
  pbVar5 = param_2 + 1;
  do {
    uVar3 = uVar2 - 1;
    if ((int)uVar2 < 1) {
      return pbVar5;
    }
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    uVar2 = uVar3;
    pbVar5 = pbVar4;
  } while ((*(char *)(param_3 + (uint)bVar1) != '\0') ||
          (bVar6 = param_4 < 0, param_4 = param_4 + 1, bVar6));
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e430  MatchEngine::AnagramMultiLetters   (67 bytes)   [notes+analysis]
//   anagram opcode 0xf6: (multiplicity, letter) pairs checked against the letter histogram with an omission budget
byte * MatchEngine::AnagramMultiLetters(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  
  while( true ) {
    bVar1 = *param_2;
    if (0xef < bVar1) {
      return param_2;
    }
    if ((*(byte *)(param_3 + (uint)param_2[1]) < bVar1) &&
       (param_4 = param_4 + ((uint)bVar1 - (uint)*(byte *)(param_3 + (uint)param_2[1])), 0 < param_4
       )) break;
    param_2 = param_2 + 2;
  }
  return (byte *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e474  FUN_0040e474   (10 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int FUN_0040e474(undefined4 param_1,int param_2)

{
  return param_2 + -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e480  MatchEngine::AnagramChoiceLists   (239 bytes)   [notes]
//   anagram opcode 0xf7 solver. Entry checked; body not read
int MatchEngine::AnagramChoiceLists(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6, int param_7,undefined4 param_8)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = (char *)(param_6 + param_4);
  pcVar3 = (char *)(param_3 + param_4);
  do {
    if (param_4 < 0) {
      if (param_7 < 0) {
        if (param_5 < 2) {
          iVar2 = (*(code *)(&PTR_FUN_0042c990)[*param_2])
                            (param_1,param_2 + 1,param_3,param_7 + 1,param_8);
        }
        else {
          iVar2 = MatchEngine::AnagramChoiceLists(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7 + 1,
                               param_8);
        }
      }
      else {
        iVar2 = 0;
      }
      return iVar2;
    }
    if ((*pcVar3 != '\0') && (*pcVar1 != '\0')) {
      *pcVar3 = *pcVar3 + -1;
      if (param_5 < 2) {
        iVar2 = (*(code *)(&PTR_FUN_0042c990)[*param_2])
                          (param_1,param_2 + 1,param_3,param_7,param_8);
      }
      else {
        iVar2 = MatchEngine::AnagramChoiceLists(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7,param_8);
      }
      *pcVar3 = *pcVar3 + '\x01';
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_4 = param_4 + -1;
    pcVar1 = pcVar1 + -1;
    pcVar3 = pcVar3 + -1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e570  MatchEngine::AnagramChoiceListsOp   (67 bytes)   [analysis]
//   fetches the Pattern pool slot and calls AnagramChoiceLists
void MatchEngine::AnagramChoiceListsOp(int param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = Pattern::At(param_1,param_2[1]);
  MatchEngine::AnagramChoiceLists(param_1,param_2 + 2,param_3,param_5 + -1,(uint)*param_2,*(int *)(iVar1 + 8),param_4,
               param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e5b4  MatchEngine::AnagramVariables   (332 bytes)   [notes]
//   anagram opcode 0xf8. Entry checked; body not read
int MatchEngine::AnagramVariables(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte local_11;
  
  pbVar5 = (byte *)(param_2 + param_4);
  while ((param_4 < 10 &&
         ((local_11 = *pbVar5, local_11 == 0 || (pcVar1 = VariableValues::Get(param_4), *pcVar1 != -2)))))
  {
    param_4 = param_4 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_4 < 10) {
    for (pbVar5 = param_3; pbVar5 < param_3 + param_6; pbVar5 = pbVar5 + 1) {
      if (*pbVar5 != 0) {
        iVar2 = VariableValues::IsLetterBound((char)pbVar5 - (char)param_3);
        if (iVar2 == 0) {
          iVar2 = (uint)local_11 - (uint)*pbVar5;
          if (iVar2 < 1) {
            *pbVar5 = *pbVar5 - local_11;
          }
          else {
            if (0 < param_5 + iVar2) goto LAB_0040e6c2;
            param_5 = param_5 + iVar2;
            *pbVar5 = 0;
          }
          pcVar1 = VariableValues::Get(param_4);
          *pcVar1 = (char)pbVar5 - (char)param_3;
          iVar3 = MatchEngine::AnagramVariables(param_1,param_2,param_3,param_4 + 1,param_5,param_6);
          puVar4 = VariableValues::Get(param_4);
          *puVar4 = 0xfe;
          *pbVar5 = local_11 - (char)iVar2;
          if (0 < iVar2) {
            param_5 = param_5 - iVar2;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      }
LAB_0040e6c2:
    }
    if ((int)(param_5 + (uint)local_11) < 1) {
      iVar2 = MatchEngine::AnagramVariables(param_1,param_2,param_3,param_4 + 1,param_5 + (uint)local_11,param_6);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (*(code *)(&PTR_FUN_0042c990)[*(byte *)(param_2 + 10)])
                      (param_1,param_2 + 0xb,param_3,param_5,param_6);
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e700  FUN_0040e700   (155 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int FUN_0040e700(undefined4 param_1,byte *param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *local_14;
  
  iVar4 = 0;
  local_14 = param_2;
  do {
    bVar1 = *local_14;
    if (bVar1 != 0) {
      pbVar3 = VariableValues::Get(iVar4);
      bVar2 = *pbVar3;
      if (bVar2 != 0xfe) {
        if (param_3[bVar2] < bVar1) {
          param_4 = param_4 + ((uint)bVar1 - (uint)param_3[bVar2]);
          if (0 < param_4) {
            return 0;
          }
          param_3[bVar2] = 0;
        }
        else {
          param_3[bVar2] = param_3[bVar2] - bVar1;
        }
      }
    }
    iVar4 = iVar4 + 1;
    local_14 = local_14 + 1;
  } while (iVar4 < 10);
  iVar4 = MatchEngine::AnagramVariables(param_1,(int)param_2,param_3,0,param_4,param_5);
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e79c  MatchEngine::AnagramSubPattern   (698 bytes)   [notes]
//   anagram opcode 0xfa. Entry checked; body not read
int MatchEngine::AnagramSubPattern(int param_1,byte *param_2,int param_3,char param_4,int param_5,int param_6, int param_7,uint param_8,int param_9,undefined4 param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  byte *local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_34;
  byte local_10 [12];
  
  __InitExceptBlockLDTC(0x42cedc);
  local_44 = (uint)*(byte *)(param_6 + 1);
  local_48 = (uint)*(byte *)(param_6 + 2);
  local_4c = 0x7fffffff;
  if ((param_4 == -5) && (param_5 == 1)) {
    if ((int)param_8 < 0) {
      local_44 = local_44 + local_48;
      local_4c = 0;
    }
    else if ((int)local_48 < (int)param_8) {
      local_44 = local_44 + local_48;
      local_4c = 0;
    }
    else {
      local_48 = param_8;
      local_4c = 1;
    }
  }
  else if ((int)(param_9 - local_44) < (int)local_48) {
    local_48 = param_9 - local_44;
  }
  do {
    if (((int)local_48 < 0) || (local_4c == 0)) {
      local_44 = param_8 + local_44;
      if ((int)local_44 < 1) {
        if (param_5 < 2) {
          pbVar1 = MatchEngine::RunAnagramVM(param_1,param_2,(byte *)param_3,param_7,local_44,param_9,param_10);
          *in_FS_OFFSET = local_34;
        }
        else {
          pbVar1 = (byte *)MatchEngine::AnagramSubPattern(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7
                                        ,local_44,param_9,param_10);
          *in_FS_OFFSET = local_34;
        }
      }
      else {
        pbVar1 = (byte *)0x0;
        *in_FS_OFFSET = local_34;
      }
      return (int)pbVar1;
    }
    for (iVar3 = param_9 - (local_44 + local_48); -1 < iVar3; iVar3 = iVar3 + -1) {
      local_10[0] = (*(byte *)&DAT_00434684);
      if ((*(byte *)&DAT_00434684) == 1) {
        VariableValues::Save(local_10);
      }
      pbVar1 = (byte *)(param_3 + iVar3);
      pbVar2 = pbVar1 + local_48 + local_44;
      for (; (pbVar1 < pbVar2 && ((*pbVar1 & 0x80) == 0)); pbVar1 = pbVar1 + 1) {
      }
      if ((pbVar2 == pbVar1) &&
         (pbVar1 = MatchEngine::MatchGeneral(param_1,(char *)(param_6 + 3),(byte *)(param_3 + iVar3),param_7,
                                local_48,local_44 + local_48), pbVar1 != (byte *)0x0)) {
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (param_5 < 2) {
          local_50 = MatchEngine::RunAnagramVM(param_1,param_2,(byte *)param_3,param_7,param_8 - local_48,param_9
                                  ,param_10);
        }
        else {
          local_50 = (byte *)MatchEngine::AnagramSubPattern(param_1,param_2,param_3,param_4,param_5 + -1,param_6,
                                          param_7,param_8 - local_48,param_9,param_10);
        }
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (local_50 != (byte *)0x0) {
          local_10[0] = local_10[0] | 2;
          if (local_10[0] == 0) {
            (*(byte *)&DAT_00434684) = 0;
          }
          else if (local_10[0] == 1) {
            VariableValues::Restore(local_10);
          }
          *in_FS_OFFSET = local_34;
          return (int)local_50;
        }
      }
      if (local_10[0] == 0) {
        (*(byte *)&DAT_00434684) = 0;
      }
      else if (local_10[0] == 1) {
        VariableValues::Restore(local_10);
      }
    }
    local_4c = local_4c + -1;
    local_48 = local_48 - 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ea58  MatchEngine::RunAnagramVM   (200 bytes)   [notes]
//   anagram bytecode interpreter. Entry checked; body not read
byte * MatchEngine::RunAnagramVM(int param_1,byte *param_2,byte *param_3,undefined4 param_4,uint param_5, int param_6,undefined4 param_7)

{
  int iVar1;
  char local_10c [259];
  byte local_9;
  int local_8;
  
  local_9 = *param_2;
  if (local_9 != 0xfc) {
    local_8 = param_1;
    if ((local_9 == 0xfa) || (local_9 == 0xfb)) {
      iVar1 = Pattern::At(param_1,param_2[2]);
      param_2 = (byte *)MatchEngine::AnagramSubPattern(local_8,param_2 + 3,(int)param_3,local_9,(uint)param_2[1],
                                     *(int *)(iVar1 + 8),param_4,param_5,param_6,param_7);
    }
    else {
      memset((undefined4 *)local_10c,0,0x100);
      while (0 < param_6) {
        local_10c[*param_3] = local_10c[*param_3] + '\x01';
        param_3 = param_3 + 1;
        param_6 = param_6 + -1;
      }
      param_2 = (byte *)(*(code *)(&PTR_FUN_0042c990)[local_9])
                                  (local_8,param_2 + 1,local_10c,param_5,param_7);
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eb20  MatchEngine::ComputeBalance   (124 bytes, 2 ranges)   [notes+analysis]
//   fills the 256-entry balance table: +1 per candidate letter, minus the letters the anagram consumed
void MatchEngine::ComputeBalance(char *param_1,byte *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  DAT_00434680 = DAT_00434680 + 1;
  memset(&DAT_00434280,0,0x400);
  cVar1 = *param_1;
  pbVar3 = (byte *)(param_1 + 1);
  if ((cVar1 == -0xb) || (cVar1 == -10)) {
    while (0 < param_3) {
      (&DAT_00434280)[*param_2] = (&DAT_00434280)[*param_2] + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    if (cVar1 == -0xb) {
      pbVar4 = (byte *)(param_1 + 2);
      uVar2 = (uint)*pbVar3;
      while (0 < (int)uVar2) {
        (&DAT_00434280)[*pbVar4] = (&DAT_00434280)[*pbVar4] + -1;
        pbVar4 = pbVar4 + 1;
        uVar2 = uVar2 - 1;
      }
    }
    else {
      for (; *pbVar3 < 0xf0; pbVar3 = pbVar3 + 2) {
        (&DAT_00434280)[pbVar3[1]] = (&DAT_00434280)[pbVar3[1]] - (uint)*pbVar3;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ebec  MatchEngine::MatchGeneral   (401 bytes, 2 ranges)   [analysis]
//   default matcher installed by the constructor; snapshots variable bindings around the template VM
byte * MatchEngine::MatchGeneral(int param_1,char *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  byte local_10 [12];
  
  __InitExceptBlockLDTC(0x42cf34);
  local_10[0] = (*(byte *)&DAT_00434684);
  if ((*(byte *)&DAT_00434684) == 1) {
    VariableValues::Save(local_10);
  }
  while( true ) {
    pbVar1 = (byte *)(param_2 + 1);
    if (*param_2 == 0xfc) {
      local_10[0] = local_10[0] | 2;
      if (local_10[0] == 0) {
        (*(byte *)&DAT_00434684) = 0;
      }
      else if (local_10[0] == 1) {
        VariableValues::Restore(local_10);
      }
      *in_FS_OFFSET = local_34;
      return pbVar1;
    }
    if (*param_2 == 0xf4) break;
    param_2 = (char *)MatchEngine::RunTemplateVM(param_1,(byte *)param_2,param_3,param_4,param_5);
    if ((byte *)param_2 == (byte *)0x0) {
      pbVar1 = (byte *)0x0;
      if (local_10[0] == 0) {
        (*(byte *)&DAT_00434684) = 0;
      }
      else if (local_10[0] == 1) {
        VariableValues::Restore(local_10);
      }
      *in_FS_OFFSET = local_34;
      return pbVar1;
    }
  }
  pbVar1 = MatchEngine::RunAnagramVM(param_1,(byte *)(param_2 + 6),param_3,param_4,
                        param_6 - *(int *)(param_2 + 2),param_6,(uint)*pbVar1);
  if (pbVar1 != (byte *)0x0) {
    MatchEngine::ComputeBalance(param_2 + 6,param_3,param_6);
    local_10[0] = local_10[0] | 2;
    pbVar1 = pbVar1 + 1;
    if (local_10[0] == 0) {
      (*(byte *)&DAT_00434684) = 0;
    }
    else if (local_10[0] == 1) {
      VariableValues::Restore(local_10);
    }
    *in_FS_OFFSET = local_34;
    return pbVar1;
  }
  pbVar1 = (byte *)0x0;
  if (local_10[0] == 0) {
    (*(byte *)&DAT_00434684) = 0;
  }
  else if (local_10[0] == 1) {
    VariableValues::Restore(local_10);
  }
  *in_FS_OFFSET = local_34;
  return pbVar1;
}

} // namespace tea

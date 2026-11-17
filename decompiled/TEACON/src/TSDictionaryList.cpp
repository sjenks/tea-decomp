// TEACON.exe — application module "TSDictionaryList"
// 31 functions, 0x00405280..0x00407768. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00405280  TSDictionaryList::~TSDictionaryList   (115 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::_dtor
void __cdecl TSDictionaryList::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b654);
  if (param_1 != 0) {
    operator_delete_array();
    FUN_004052f4(param_1 + 8,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004052f4  FUN_004052f4   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004052f4(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040530c  FUN_0040530c   (3045 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405497) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_0040530c(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_418 [248];
  undefined4 local_320;
  int *local_310;
  int *local_300;
  undefined1 local_2f8 [248];
  int *local_200;
  int *local_1e0;
  int *local_1dc;
  undefined1 *local_1d8;
  undefined4 local_1d4;
  int *local_1d0;
  int *local_1cc;
  undefined1 *local_1c8;
  undefined4 local_1c4;
  int *local_1c0;
  int *local_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  undefined4 *local_1a0;
  undefined4 *local_19c;
  int *local_198;
  uint local_194;
  undefined1 local_18d;
  uint local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  uint local_16c;
  undefined1 *local_168;
  int *local_164;
  int *local_160;
  uint local_15c;
  int *local_158;
  undefined1 *local_154;
  int *local_150;
  undefined4 local_14c;
  uint *local_140;
  uint local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  int *local_124;
  int *local_120;
  uint local_11c;
  undefined1 *local_118;
  int *local_114;
  int *local_110;
  uint local_10c;
  int *local_108;
  undefined1 *local_104;
  int *local_100;
  undefined4 local_fc;
  uint *local_f0;
  int *local_ec;
  int local_e8;
  undefined1 local_e1;
  uint local_e0;
  int *local_dc;
  int *local_d8;
  uint local_d4;
  undefined1 *local_d0;
  int *local_cc;
  int *local_c8;
  undefined1 *local_c4;
  int *local_c0;
  undefined4 *local_bc;
  undefined4 local_b0;
  undefined2 local_a0;
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  int *local_7c;
  undefined1 local_78 [8];
  int *local_70;
  undefined1 local_68 [8];
  int *local_60;
  undefined **local_58 [2];
  undefined1 local_50 [8];
  int *local_48;
  undefined **local_40 [2];
  undefined1 local_38 [8];
  int *local_30;
  undefined1 local_28 [8];
  int *local_20;
  undefined4 *local_18;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x42b738);
  local_a0 = 8;
  std::string::string_from_cstr((int)local_14,param_1);
  local_94 = local_94 + 1;
  local_a0 = 0x14;
  local_18 = (undefined4 *)operator_new();
  if (local_18 != (undefined4 *)0x0) {
    local_a0 = 0x2c;
    FUN_004051bc(local_18,param_1);
  }
  local_a0 = 0x14;
  local_bc = local_18;
  if ((char)*param_1 != '\0') {
LAB_004053ad:
    do {
      local_a0 = 0x44;
      local_20 = (int *)0x0;
      if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
        uVar3 = local_c[-1];
        local_cc = std::string::__getRep(local_28,uVar3,uVar3);
        local_200 = local_cc + 3;
        local_d8 = local_c;
        local_dc = local_200;
        local_d4 = uVar3;
        local_d0 = local_28;
        local_c8 = local_200;
        local_20 = local_200;
        memcpy(local_200,local_c,uVar3);
      }
      else {
        local_c0 = local_c;
        local_20 = local_c;
        piVar4 = local_c + -3;
        local_c4 = local_28;
        if (piVar4 != &DAT_0042fab4) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_94 = local_94 + 1;
      local_a0 = 0x38;
      local_e1 = 0x3b;
      local_e8 = local_20[-1];
      local_ec = local_20;
      pcVar1 = thunk_memchr((char *)local_20,';',local_e8);
      uVar3 = (*(uint *)&DAT_0042fce8);
      if (pcVar1 != (char *)0x0) {
        uVar3 = (int)pcVar1 - (int)local_20;
      }
      local_e0 = uVar3;
      if (uVar3 != (*(uint *)&DAT_0042fce8)) {
        if ((*(uint *)&DAT_0042fce8) - 0xe < uVar3) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_00405f50;
          uVar5 = 0;
          local_a0 = 0x68;
          local_f0 = (uint *)FUN_0041ea4c(local_2f8,PTR_s_invalid_string_size_parameter_in_00431a78)
          ;
          std::string::string_from_cstr((int)local_68,local_f0);
          local_94 = local_94 + 2;
          local_40[0] = &std::logic_error::vftable;
          local_fc = 0;
          local_30 = (int *)0x0;
          local_a0 = 0x74;
          if (local_60[-3] == -1 || local_60[-3] + 1 < 0) {
            local_10c = local_60[-1];
            local_114 = std::string::__getRep(local_38,local_10c,local_10c);
            local_118 = local_38;
            local_310 = local_114 + 3;
            local_11c = local_10c;
            local_120 = local_60;
            local_124 = local_310;
            local_110 = local_310;
            local_30 = local_310;
            memcpy(local_310,local_60,local_10c);
          }
          else {
            local_104 = local_38;
            local_100 = local_60;
            local_30 = local_60;
            local_300 = local_60;
            local_108 = local_60 + -3;
            if (local_108 != &DAT_0042fab4) {
              *local_108 = *local_108 + 1;
            }
          }
          local_a0 = 0x68;
          local_40[0] = &std::length_error::vftable;
          local_94 = local_94 + 2;
          if (local_60 != (int *)0x0) {
            if (local_60[-3] != -1) {
              local_128 = local_60 + -3;
              if (local_128 == &DAT_0042fab4) {
                iVar2 = 1;
              }
              else if (local_128 == &DAT_0042fab4) {
                iVar2 = 1;
              }
              else {
                *local_128 = *local_128 + -1;
                iVar2 = *local_128 + 1;
              }
              if (iVar2 != 0) goto LAB_00405772;
            }
            local_12c = local_60 + -3;
            local_130 = local_60 + -3;
            operator_delete();
            local_134 = 0;
            local_138 = local_68;
            local_60 = (int *)0x0;
            local_320 = 0;
          }
LAB_00405772:
          local_a0 = 0x5c;
          FUN_004280a0((uint *)&DAT_00405ef4,(undefined4*)local_40,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if (uVar3 < (uint)local_20[-1]) {
          local_13c = local_20[-1] - uVar3;
          if ((uint)local_20[-1] < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_004060a8;
            uVar5 = 0;
            local_a0 = 0x98;
            local_140 = (uint *)FUN_0041ea4c(local_418,
                                             PTR_s_string_index_out_of_range_in_fun_00431a84);
            std::string::string_from_cstr((int)local_78,local_140);
            local_94 = local_94 + 2;
            local_58[0] = &std::logic_error::vftable;
            local_14c = 0;
            local_48 = (int *)0x0;
            local_a0 = 0xa4;
            if (local_70[-3] == -1 || local_70[-3] + 1 < 0) {
              local_15c = local_70[-1];
              local_164 = std::string::__getRep(local_50,local_15c,local_15c);
              local_168 = local_50;
              local_174 = local_164 + 3;
              local_16c = local_15c;
              local_170 = local_70;
              local_160 = local_174;
              local_48 = local_174;
              memcpy(local_174,local_70,local_15c);
            }
            else {
              local_154 = local_50;
              local_150 = local_70;
              local_48 = local_70;
              local_158 = local_70 + -3;
              if (local_158 != &DAT_0042fab4) {
                *local_158 = *local_158 + 1;
              }
            }
            local_a0 = 0x98;
            local_58[0] = &std::out_of_range::vftable;
            local_94 = local_94 + 2;
            if (local_70 != (int *)0x0) {
              if (local_70[-3] != -1) {
                local_178 = local_70 + -3;
                if (local_178 == &DAT_0042fab4) {
                  iVar2 = 1;
                }
                else if (local_178 == &DAT_0042fab4) {
                  iVar2 = 1;
                }
                else {
                  *local_178 = *local_178 + -1;
                  iVar2 = *local_178 + 1;
                }
                if (iVar2 != 0) goto LAB_00405a14;
              }
              local_17c = local_70 + -3;
              local_180 = local_70 + -3;
              operator_delete();
              local_184 = 0;
              local_188 = local_78;
              local_70 = (int *)0x0;
            }
LAB_00405a14:
            local_a0 = 0x5c;
            FUN_004280a0((uint *)&DAT_0040604c,(undefined4*)local_58,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          local_18c = local_20[-1] - uVar3;
          local_18d = 0;
          local_194 = local_18c;
          if (local_13c < local_18c) {
            local_194 = local_13c;
          }
          FUN_00417320((int)local_28,uVar3,local_194,(uint)&local_18d,0,0,0);
        }
        else {
          std::string::replace_fill((int)local_28,local_20[-1],0,uVar3 - local_20[-1],0);
        }
        if (local_20 + -3 != &DAT_0042fab4) {
          local_20[-3] = 0;
        }
      }
      uVar3 = 0;
      while( true ) {
        iVar2 = (int)(*(undefined4 * *)&DAT_0042b5ec) - DAT_0042b5e8;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        if ((uint)(iVar2 >> 2) <= uVar3) goto LAB_00405b06;
        local_198 = *(int **)(uVar3 * 4 + DAT_0042b5e8);
        pcVar1 = (char *)(**(code **)(*local_198 + 0x10))();
        iVar2 = FUN_0041f178((char *)local_20,pcVar1);
        if (iVar2 == 0) break;
        uVar3 = uVar3 + 1;
      }
      local_198[0x804] = local_198[0x804] + 1;
LAB_00405b06:
      iVar2 = (int)(*(undefined4 * *)&DAT_0042b5ec) - DAT_0042b5e8;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if ((uint)(iVar2 >> 2) <= uVar3) {
        local_7c = (int *)operator_new();
        if (local_7c != (int *)0x0) {
          local_a0 = 0xd4;
          TSDictionaryList::Dictionary::Dictionary(local_7c,(int)local_28);
          local_a0 = 200;
        }
        local_198 = local_7c;
        (**(code **)(*local_7c + 4))();
        if ((*(undefined4 * *)&DAT_0042b5ec) == (*(undefined4 * *)&DAT_0042b5fc)) {
          FUN_004061d0(0x42b5e4,(*(undefined4 * *)&DAT_0042b5ec),(undefined4*)&local_198);
        }
        else {
          local_19c = (*(undefined4 * *)&DAT_0042b5ec);
          local_1a0 = (*(undefined4 * *)&DAT_0042b5ec);
          *(*(undefined4 * *)&DAT_0042b5ec) = local_198;
          (*(undefined4 * *)&DAT_0042b5ec) = (*(undefined4 * *)&DAT_0042b5ec) + 1;
        }
      }
      if (local_bc[4] == local_bc[8]) {
        FUN_004061d0((int)(local_bc + 2),(undefined4 *)local_bc[4],(undefined4*)&local_198);
      }
      else {
        local_1a8 = (undefined4 *)local_bc[4];
        *local_1a8 = local_198;
        local_bc[4] = local_bc[4] + 4;
        local_1a4 = local_1a8;
      }
      if (local_e0 == (*(uint *)&DAT_0042fce8)) goto code_r0x00405c13;
      local_a0 = 0xe0;
      FUN_0041b368((int)local_8c,(int)local_14,local_e0 + 1,(*(uint *)&DAT_0042fce8));
      local_94 = local_94 + 1;
      FUN_00416bd0((int)local_14,(int)local_8c);
      local_94 = local_94 + -1;
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar4 = (int *)(local_84 + -0xc);
          if (piVar4 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else if (piVar4 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar2 = *piVar4 + 1;
          }
          if (iVar2 != 0) goto LAB_00405d8c;
        }
        local_1ac = local_84 + -0xc;
        local_1b0 = local_84 + -0xc;
        operator_delete();
        local_1b4 = 0;
        local_1b8 = local_8c;
        local_84 = 0;
      }
LAB_00405d8c:
      local_a0 = 0x38;
      local_94 = local_94 + -1;
      if (local_20 != (int *)0x0) {
        if (local_20[-3] != -1) {
          piVar4 = local_20 + -3;
          if (piVar4 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else if (piVar4 == &DAT_0042fab4) {
            iVar2 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar2 = *piVar4 + 1;
          }
          if (iVar2 != 0) goto LAB_004053ad;
        }
        local_1cc = local_20 + -3;
        local_1d0 = local_20 + -3;
        operator_delete();
        local_1d4 = 0;
        local_1d8 = local_28;
      }
    } while( true );
  }
LAB_00405e36:
  local_94 = local_94 + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00405ed3;
    }
    local_1dc = local_c + -3;
    local_1e0 = local_c + -3;
    operator_delete();
  }
LAB_00405ed3:
  *in_FS_OFFSET = local_b0;
  return local_bc;
code_r0x00405c13:
  local_94 = local_94 + -1;
  if (local_20 != (int *)0x0) {
    if (local_20[-3] != -1) {
      piVar4 = local_20 + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00405e36;
    }
    local_1bc = local_20 + -3;
    local_1c0 = local_20 + -3;
    operator_delete();
    local_1c4 = 0;
    local_20 = (int *)0x0;
    local_1c8 = local_28;
  }
  goto LAB_00405e36;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061d0  FUN_004061d0   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004061d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x42b884);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004280a0((uint *)&DAT_00404c94,(undefined4*)&local_8,0,&LAB_00404cec,1,0,0,0);
    }
    FUN_004063cc(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004063cc(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004052f4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004063a8(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004063a8  FUN_004063a8   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004063a8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004063cc  FUN_004063cc   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004063cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b8c4);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040644c  FUN_0040644c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040644c(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406464  TSDictionaryList::ReleaseDictionaries   (201 bytes)   [analysis]
//   drops one reference on every listed Dictionary in the shared cache and deletes those reaching zero
void __cdecl TSDictionaryList::ReleaseDictionaries(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x42b8f8);
  if (param_1 != 0) {
    for (piVar4 = *(int **)(param_1 + 0xc); piVar4 < *(int **)(param_1 + 0x10); piVar4 = piVar4 + 1)
    {
      piVar3 = (int *)FUN_00406564((*(int * *)&DAT_0042b5e8),(*(int * *)&DAT_0042b5ec),piVar4);
      puVar2 = (undefined4 *)*piVar3;
      piVar1 = puVar2 + 0x804;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
        if (piVar3 + 1 != (*(int * *)&DAT_0042b5ec)) {
          FUN_00406584(piVar3 + 1,(*(int * *)&DAT_0042b5ec),piVar3);
        }
        (*(int * *)&DAT_0042b5ec) = (*(int * *)&DAT_0042b5ec) + -1;
      }
    }
    if (param_1 != 0) {
      TSDictionaryList::_dtor(param_1,3);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406564  FUN_00406564   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00406564(int *param_1,int *param_2,int *param_3)

{
  for (; (param_2 != param_1 && (*param_3 != *param_1)); param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406584  FUN_00406584   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00406584(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004065a8  TSDictionaryList::GetCount   (29 bytes)   [analysis]
//   number of dictionaries (vector size)
int __cdecl TSDictionaryList::GetCount(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  return iVar1 >> 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004065c8  FUN_004065c8   (56 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004065c8(int param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar3 = TSDictionaryList::GetCount(param_1);
    if (iVar3 <= iVar4) {
      return 0;
    }
    uVar1 = FUN_00406600(param_1,iVar4);
    if (CONCAT31(extraout_var,uVar1) == 0) break;
    iVar4 = iVar4 + 1;
  }
  uVar2 = FUN_00406720(param_1,iVar4);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406600  FUN_00406600   (252 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040663e) */
/* WARNING: Removing unreachable block (ram,0x00406695) */
/* WARNING: Removing unreachable block (ram,0x004066a4) */
/* WARNING: Removing unreachable block (ram,0x0040669d) */
undefined1 __cdecl FUN_00406600(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x42b950);
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x1c))();
  if (DAT_0042fab4 == -1) {
    operator_delete();
  }
  *in_FS_OFFSET = local_38;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004066fc  FUN_004066fc   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004066fc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0xc))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406720  FUN_00406720   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00406720(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x10))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406744  TSDictionaryList::GetNumLengths   (26 bytes)   [analysis]
//   dictionary header num_lengths (u16 at Dictionary+0x240c)
undefined2 __cdecl TSDictionaryList::GetNumLengths(int param_1,int param_2)

{
  return *(undefined2 *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x240c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00406760  TSDictionaryList::GetWordStreamOffset   (29 bytes)   [analysis]
//   word_stream_offsets[length] (u32 table at Dictionary+0x2410)
undefined4 __cdecl TSDictionaryList::GetWordStreamOffset(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x2410 + param_3 * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00406780  FUN_00406780   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00406780(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x2bf8 + param_3));
}

// ----------------------------------------------------------------------------------------------------
// 0x004067a0  FUN_004067a0   (26 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004067a0(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x2bf4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00406814  TSDictionaryList::Dictionary::Dictionary   (315 bytes)   [analysis]
//   constructor: installs the vtable, copies the path string
undefined4 * __cdecl TSDictionaryList::Dictionary::Dictionary(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b998);
  *param_1 = &TSDictionaryList::Dictionary::vftable;
  param_1[0x801] = 0;
  param_1[0x804] = 1;
  *(undefined2 *)(param_1 + 0xb7e) = 0;
  param_1[0xb7f] = 0;
  param_1[0xbe7] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar3 = std::string::__getRep(param_1 + 0xbe5,uVar2,uVar2);
    param_1[0xbe7] = piVar3 + 3;
    memcpy((undefined4 *)param_1[0xbe7],*(undefined4 **)(param_2 + 8),uVar2);
  }
  else {
    param_1[0xbe7] = *(undefined4 *)(param_2 + 8);
    piVar3 = (int *)(param_1[0xbe7] + -0xc);
    if (piVar3 != &DAT_0042fab4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  memset(param_1 + 0xb80,0,0x194);
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406950  TSDictionaryList::Dictionary::~Dictionary   (218 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::Dictionary::_dtor
void __cdecl TSDictionaryList::Dictionary::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b9d4);
  if (param_1 == (int *)0x0) goto LAB_00406a19;
  *param_1 = (int)&TSDictionaryList::Dictionary::vftable;
  (**(code **)(*param_1 + 4))();
  if (param_1[0xbe7] != 0) {
    if (*(int *)(param_1[0xbe7] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xbe7] + -0xc);
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
      if (iVar1 != 0) goto LAB_00406a09;
    }
    operator_delete();
    param_1[0xbe7] = 0;
  }
LAB_00406a09:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00406a19:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406a2c  TSDictionaryList::Dictionary::Load   (1774 bytes)   [notes+analysis]
//   vtable slot 1. Reads the .tsd header (magic TSD0/TSD1), Huffman table and calibration matrix; builds the 8-bit lookahead decode tables
//   also: TSDictionaryList::Dictionary::vf1 [rtti:vtable]
int * __cdecl TSDictionaryList::Dictionary::Load(int *param_1,int param_2)

{
  short sVar1;
  char *pcVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  char cVar14;
  LPFILETIME p_Var15;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  short local_64;
  byte local_62;
  char local_61;
  int local_60;
  byte local_5c [3];
  char local_59;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  bVar13 = 0;
  __InitExceptBlockLDTC(0x42ba04);
  param_1[0x801] = 0;
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  piVar11 = param_1;
  uVar5 = (**(code **)(*param_1 + 8))();
  if (param_2 == 0) {
    *in_FS_OFFSET = local_38;
    return local_38;
  }
  puVar6 = (uint *)(**(code **)(*param_1 + 0x18))(uVar5,*param_1,piVar11,param_1);
  local_40 = fopen((LPCSTR)puVar6,&DAT_0042b445);
  if (local_40 == (int *)0x0) goto LAB_00406b50;
  p_Var15 = (LPFILETIME)(param_1 + 0x802);
  cVar14 = '\x01';
  local_28 = 8;
  std::string::string_from_cstr((int)local_14,puVar6);
  local_1c = local_1c + 1;
  bVar3 = ReadFileTime((int)local_14,cVar14,p_Var15);
  uVar8 = (uint)(CONCAT31(extraout_var,bVar3) == 0);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar11 = (int *)(local_c + -0xc);
      if (piVar11 == &DAT_0042fab4) {
        iVar7 = 1;
      }
      else if (piVar11 == &DAT_0042fab4) {
        iVar7 = 1;
      }
      else {
        *piVar11 = *piVar11 + -1;
        iVar7 = *piVar11 + 1;
      }
      if (iVar7 != 0) goto LAB_00406b4b;
    }
    local_4c = local_c + -0xc;
    local_50 = local_c + -0xc;
    operator_delete();
    local_54 = 0;
    local_58 = local_14;
    local_c = 0;
  }
LAB_00406b4b:
  if (uVar8 == 0) {
    uVar8 = FUN_00420d9c((char *)local_5c,1,4,local_40);
    if ((uVar8 != 4) ||
       ((uVar8 = FUN_0041f04c(&DAT_0042bc20 /* "TSD0TSD1Nobody" */,local_5c,4), uVar8 != 0 &&
        (uVar8 = FUN_0041f04c((byte *)"TSD1Nobody",local_5c,4), uVar8 != 0)))) {
      piVar11 = (int *)FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar11;
    }
    param_1[0x8ff] = local_59 + -0x30;
    uVar8 = FUN_00420d9c((char *)(param_1 + 0x903),2,1,local_40);
    if (uVar8 != 1) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar8 = 1000;
    if (param_1[0x8ff] == 0) {
      uVar8 = 0x50;
      piVar11 = param_1 + 0x9ce;
      for (uVar4 = 0; uVar4 < *(ushort *)(param_1 + 0x903); uVar4 = uVar4 + 1) {
        *piVar11 = -1;
        piVar11[0x65] = -1;
        piVar11[0xca] = 0;
        piVar11 = piVar11 + 1;
      }
      memset(param_1 + 0x900,0,0xc);
    }
    else {
      uVar9 = FUN_00420d9c((char *)(param_1 + 0x900),4,3,local_40);
      if ((((uVar9 != 3) ||
           (uVar9 = FUN_00420d9c((char *)(param_1 + 0x9ce),4,(uint)*(ushort *)(param_1 + 0x903),
                                 local_40), uVar9 != *(ushort *)(param_1 + 0x903))) ||
          (uVar9 = FUN_00420d9c((char *)(param_1 + 0xa33),4,(uint)*(ushort *)(param_1 + 0x903),
                                local_40), uVar9 != *(ushort *)(param_1 + 0x903))) ||
         (uVar9 = FUN_00420d9c((char *)(param_1 + 0xa98),4,(uint)*(ushort *)(param_1 + 0x903),
                               local_40), uVar9 != *(ushort *)(param_1 + 0x903))) {
        piVar11 = (int *)FUN_004207fc(local_40);
        *in_FS_OFFSET = local_38;
        return piVar11;
      }
    }
    uVar9 = FUN_00420d9c((char *)(param_1 + 0x904),4,(uint)*(ushort *)(param_1 + 0x903),local_40);
    if (((uVar9 != *(ushort *)(param_1 + 0x903)) ||
        (uVar9 = FUN_00420d9c((char *)(param_1 + 0x969),4,(uint)*(ushort *)(param_1 + 0x903),
                              local_40), uVar9 != *(ushort *)(param_1 + 0x903))) ||
       (uVar9 = FUN_00420d9c((char *)(param_1 + 0x805),1,uVar8,local_40), uVar8 != uVar9)) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar8 = FUN_00420d9c((char *)(param_1 + 0xafd),2,1,local_40);
    if ((uVar8 != 1) ||
       (uVar8 = FUN_00420d9c((char *)((int)param_1 + 0x2bf6),2,1,local_40), uVar8 != 1)) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    sVar1 = (short)param_1[0xafd];
    if ((((sVar1 < 0) || (0xfd < sVar1)) || (*(short *)((int)param_1 + 0x2bf6) < 1)) ||
       ((0xfd < *(short *)((int)param_1 + 0x2bf6) || (*(short *)((int)param_1 + 0x2bf6) < sVar1))))
    {
      piVar11 = (int *)FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar11;
    }
    piVar11 = param_1 + 1;
    local_3c = 0;
    piVar12 = param_1 + 0xafe;
    do {
      *(undefined1 *)piVar12 = 0x21;
      *piVar11 = 0;
      piVar12 = (int *)((int)piVar12 + 1);
      piVar11[1] = 0xff;
      local_3c = local_3c + 1;
      piVar11 = piVar11 + 2;
    } while (local_3c < 0x100);
    piVar11 = param_1 + local_3c * 2 + 1;
    for (; local_3c < 0x300; local_3c = local_3c + 1) {
      *piVar11 = -1;
      piVar11[1] = -1;
      piVar11 = piVar11 + 2;
    }
    local_60 = 0x101;
    piVar11 = param_1 + 0xb3e;
    local_3c = 0;
    puVar6 = (uint *)(param_1 + 1);
    do {
      uVar8 = FUN_00420d9c(&local_61,1,1,local_40);
      if (((uVar8 != 1) || (uVar8 = FUN_00420d9c((char *)&local_62,1,1,local_40), uVar8 != 1)) ||
         ((uVar8 = FUN_00420d9c((char *)&local_64,2,1,local_40), uVar8 != 1 ||
          (uVar8 = FUN_00420d9c((char *)&local_68,4,1,local_40), uVar8 != 1)))) {
        FUN_004207fc(local_40);
        *in_FS_OFFSET = local_38;
        return local_38;
      }
      if (local_62 != 0) {
        iVar7 = 0x100;
        local_6c = (uint)local_62;
        while (1 < (int)local_6c) {
          if (param_1[iVar7 * 2 + 1] < 0) {
            param_1[iVar7 * 2 + 1] = local_60;
            local_60 = local_60 + 1;
          }
          if (param_1[iVar7 * 2 + 2] < 0) {
            param_1[iVar7 * 2 + 2] = local_60;
            local_60 = local_60 + 1;
          }
          iVar7 = param_1[iVar7 * 2 + (local_68 >> ((byte)(local_6c - 1) & 0x1f) & 1) + 1];
          local_6c = local_6c - 1;
        }
        param_1[iVar7 * 2 + (local_68 & 1) + 1] = local_3c;
        *puVar6 = (uint)local_62;
      }
      if (-1 < local_64) {
        puVar6[1] = (int)local_64;
        *(char *)((int)param_1 + local_64 + 0x2bf8) = local_61;
      }
      *(char *)piVar11 = local_61;
      local_3c = local_3c + 1;
      piVar11 = (int *)((int)piVar11 + 1);
      puVar6 = puVar6 + 2;
    } while (local_3c < 0x100);
    piVar11 = param_1 + 0x601;
    local_70 = 0;
    do {
      iVar10 = 0;
      local_74 = local_70;
      for (iVar7 = 0x100; (iVar10 < 8 && (0xff < iVar7)); iVar7 = param_1[iVar7 * 2 + uVar8 + 1]) {
        uVar8 = local_74 & 1;
        iVar10 = iVar10 + 1;
        local_74 = (int)local_74 >> 1;
      }
      *piVar11 = iVar7;
      piVar11[0x100] = param_1[iVar7 * 2 + 1];
      local_70 = local_70 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)local_70 < 0x100);
    uVar8 = FUN_00420d9c((char *)(param_1 + 0xb7e),2,1,local_40);
    if (uVar8 != 1) {
      FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    iVar7 = operator_new_array();
    param_1[0xb7f] = iVar7;
    if (iVar7 == 0) {
      piVar11 = (int *)FUN_004207fc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar11;
    }
    for (iVar7 = 0; iVar7 < (int)(uint)*(ushort *)(param_1 + 0xb7e); iVar7 = iVar7 + 1) {
      uVar5 = operator_new_array();
      *(undefined4 *)(param_1[0xb7f] + iVar7 * 4) = uVar5;
    }
    iVar7 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(param_1 + 0xb7e) <= iVar7) {
        piVar11 = (int *)FUN_004207fc(local_40);
        param_1[0x801] = 1;
        *in_FS_OFFSET = local_38;
        return piVar11;
      }
      pcVar2 = *(char **)(param_1[0xb7f] + iVar7 * 4);
      if ((pcVar2 == (char *)0x0) ||
         (uVar8 = FUN_00420d9c(pcVar2,1,(int)(short)param_1[0xafd],local_40),
         uVar8 != (int)(short)param_1[0xafd])) break;
      iVar7 = iVar7 + 1;
    }
    piVar11 = (int *)FUN_004207fc(local_40);
    *in_FS_OFFSET = local_38;
    return piVar11;
  }
LAB_00406b50:
  piVar11 = (int *)"-- DICTIONARY FILE NOT FOUND --";
  piVar12 = param_1 + 0x805;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = *piVar11;
    piVar11 = piVar11 + (uint)bVar13 * -2 + 1;
    piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
  }
  *in_FS_OFFSET = local_38;
  return param_1 + 0x805;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040711c  TSDictionaryList::Dictionary::Unload   (132 bytes)   [analysis]
//   vtable slot 2. Frees the calibration matrix and clears the loaded state
//   also: TSDictionaryList::Dictionary::vf2 [rtti:vtable]
undefined4 * __cdecl TSDictionaryList::Dictionary::Unload(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2dfc) != 0) {
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(param_1 + 0x2df8); iVar1 = iVar1 + 1) {
      operator_delete_array();
    }
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2dfc) = 0;
  }
  uVar4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x2e00);
  do {
    operator_delete_array();
    *puVar2 = 0;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 < 0x65);
  pcVar3 = "-- INVALID DICTIONARY FILE --";
  puVar2 = (undefined4 *)(param_1 + 0x2014);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)pcVar3;
  return (undefined4 *)(param_1 + 0x2014);
}

// ----------------------------------------------------------------------------------------------------
// 0x004071a0  TSDictionaryList::Dictionary::EnsureCurrent   (94 bytes)   [analysis]
//   vtable slot 3. Reloads when the file's timestamp no longer matches; returns the loaded flag
//   also: TSDictionaryList::Dictionary::vf3 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::EnsureCurrent(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  _FILETIME local_c;
  
  bVar1 = ReadFileTime((int)(param_1 + 0xbe5),'\x01',&local_c);
  if (((CONCAT31(extraout_var,bVar1) == 0) || (local_c.dwLowDateTime != param_1[0x802])) ||
     (local_c.dwHighDateTime != param_1[0x803])) {
    (**(code **)(*param_1 + 4))();
    (**(code **)(*param_1 + 4))();
  }
  return param_1[0x801];
}

// ----------------------------------------------------------------------------------------------------
// 0x00407200  TSDictionaryList::Dictionary::vf4   (14 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl TSDictionaryList::Dictionary::vf4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2f9c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00407210  TSDictionaryList::Dictionary::GetFileTitle   (66 bytes)   [analysis]
//   vtable slot 5
//   also: TSDictionaryList::Dictionary::vf5 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetFileTitle(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42ba34);
  GetFileTitleString(param_1,param_2 + 0x2f94);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407254  TSDictionaryList::Dictionary::vf6   (14 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl TSDictionaryList::Dictionary::vf6(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2f9c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00407264  TSDictionaryList::Dictionary::GetCounts   (102 bytes)   [analysis]
//   vtable slot 10. Sums the per-length count tables into four totals
//   also: TSDictionaryList::Dictionary::vf10 [rtti:vtable]
void __cdecl TSDictionaryList::Dictionary::GetCounts(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  piVar1 = (int *)(param_1 + 0x25a8);
  for (iVar2 = 1; iVar2 < (int)(uint)*(ushort *)(param_1 + 0x240c); iVar2 = iVar2 + 1) {
    if (0 < *piVar1) {
      *param_2 = *param_2 + *piVar1;
      if (*param_4 == 0) {
        *param_4 = iVar2;
      }
      *param_5 = iVar2;
    }
    *param_3 = *param_3 + piVar1[0x12f];
    piVar1 = piVar1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004072cc  TSDictionaryList::Dictionary::GetSummaryText   (603 bytes)   [analysis]
//   vtable slot 7. Formats the Headwords / Definitions / Description text
//   also: TSDictionaryList::Dictionary::vf7 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl TSDictionaryList::Dictionary::GetSummaryText(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_f0 [27];
  undefined4 local_84;
  int local_78;
  int local_64;
  undefined1 local_59;
  undefined1 *local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x42ba78);
  local_38 = 8;
  (**(code **)(*param_1 + 0x14))();
  local_2c = local_2c + 1;
  FUN_00416bd0(param_2,(int)local_24);
  local_2c = local_2c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00407382;
    }
    local_4c = local_1c + -0xc;
    local_50 = local_1c + -0xc;
    operator_delete();
    local_54 = 0;
    local_58 = local_24;
    local_1c = 0;
    local_84 = 0;
  }
LAB_00407382:
  iVar1 = (**(code **)(*param_1 + 0xc))();
  local_59 = iVar1 != 0;
  if ((bool)local_59) {
    (**(code **)(*param_1 + 0x28))();
    FUN_00421660((undefined1 *)local_f0,(byte *)"\nHeadwords: %d");
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = strlen(local_f0);
    FUN_00417320(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    if (0 < local_64) {
      FUN_00421660((undefined1 *)local_f0,(byte *)"\nDefinitions: %d");
      uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
      pcVar2 = strlen(local_f0);
      FUN_00417320(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    }
  }
  local_38 = 0x2c;
  iVar1 = std::string::string_from_cstr((int)local_14,(uint *)(param_1 + 0x805));
  local_2c = local_2c + 1;
  local_38 = 0x20;
  if (*(int *)(local_c + -4) != 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = strlen((uint *)"\nDescription: ");
    FUN_00417320(param_2,uVar3,0,0x42b4a6,(uint)pcVar2,0,(uint)pcVar2);
    iVar1 = std::string::append(param_2,(int)local_14);
  }
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),local_59);
  local_2c = local_2c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_00407515;
    }
    local_78 = local_c + -0xc;
    operator_delete();
  }
LAB_00407515:
  *in_FS_OFFSET = local_48;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407528  TSDictionaryList::Dictionary::GetFileDateText   (575 bytes)   [analysis]
//   vtable slot 8. Formats the file time with GetDateFormatA
//   also: TSDictionaryList::Dictionary::vf8 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetFileDateText(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_474 [250];
  _SYSTEMTIME local_8c;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  _FILETIME local_40;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x42bafc);
  FileTimeToLocalFileTime((FILETIME *)(param_2 + 0x2008),&local_40);
  FileTimeToSystemTime(&local_40,&local_8c);
  GetDateFormatA(0x400,2,&local_8c,(LPCSTR)0x0,(LPSTR)local_474,1000);
  local_28 = 0x14;
  std::string::string_from_cstr((int)local_14,local_474);
  local_1c = local_1c + 1;
  local_28 = 8;
  std::string::replace_fill((int)local_14,local_c[-1],0,1,0x20);
  GetTimeFormatA(0x400,0,&local_8c,(LPCSTR)0x0,(LPSTR)local_474,1000);
  uVar1 = local_c[-1];
  pcVar2 = strlen(local_474);
  FUN_00417320((int)local_14,uVar1,0,(uint)local_474,(uint)pcVar2,0,(uint)pcVar2);
  local_28 = 0x20;
  local_4c = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_5c = std::string::__getRep(param_1,uVar1,uVar1);
    local_58 = local_5c + 3;
    *(int **)(param_1 + 8) = local_58;
    local_60 = param_1;
    local_68 = local_c;
    local_6c = *(undefined4 **)(param_1 + 8);
    local_64 = uVar1;
    memcpy(local_6c,local_c,uVar1);
  }
  else {
    local_50 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_54 = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
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
      if (iVar3 != 0) goto LAB_0040774c;
    }
    local_70 = local_c + -3;
    local_74 = local_c + -3;
    operator_delete();
  }
LAB_0040774c:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407768  TSDictionaryList::Dictionary::GetDescription   (73 bytes)   [analysis]
//   vtable slot 9. Returns the header description string (Dictionary+0x2014)
//   also: TSDictionaryList::Dictionary::vf9 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetDescription(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42bb5c);
  std::string::string_from_cstr(param_1,(uint *)(param_2 + 0x2014));
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

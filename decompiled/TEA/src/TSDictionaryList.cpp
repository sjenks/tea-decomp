// TEA.exe — application module "TSDictionaryList"
// 63 functions, 0x004076a8..0x0040c800. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004076a8  TSDictionaryList::~TSDictionaryList   (115 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::_dtor
void __cdecl TSDictionaryList::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb510);
  if (param_1 != 0) {
    operator_delete_array();
    FUN_0040771c(param_1 + 8,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040771c  FUN_0040771c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040771c(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407734  FUN_00407734   (3037 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004078bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_00407734(uint *param_1)

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
  
  __InitExceptBlockLDTC(0x4eb5f4);
  local_a0 = 8;
  std::string::string_from_cstr((int)local_14,param_1);
  local_94 = local_94 + 1;
  local_a0 = 0x14;
  local_18 = (undefined4 *)operator_new();
  if (local_18 != (undefined4 *)0x0) {
    local_a0 = 0x2c;
    FUN_004075e4(local_18,param_1);
  }
  local_a0 = 0x14;
  local_bc = local_18;
  if ((char)*param_1 != '\0') {
LAB_004077d5:
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
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_94 = local_94 + 1;
      local_a0 = 0x38;
      local_e1 = 0x3b;
      local_e8 = local_20[-1];
      local_ec = local_20;
      pcVar1 = thunk_memchr((char *)local_20,';',local_e8);
      uVar3 = DAT_005140ac;
      if (pcVar1 != (char *)0x0) {
        uVar3 = (int)pcVar1 - (int)local_20;
      }
      local_e0 = uVar3;
      if (uVar3 != 0xffffffff) {
        if (DAT_005140ac - 0xe < uVar3) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_00408370;
          uVar5 = 0;
          local_a0 = 0x68;
          local_f0 = (uint *)FUN_004dc320(local_2f8,PTR_s_invalid_string_size_parameter_in_00516d20)
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
            if (local_108 != &DAT_00513d58) {
              *local_108 = *local_108 + 1;
            }
          }
          local_a0 = 0x68;
          local_40[0] = &std::length_error::vftable;
          local_94 = local_94 + 2;
          if (local_60 != (int *)0x0) {
            if (local_60[-3] != -1) {
              local_128 = local_60 + -3;
              if (local_128 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_128 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_128 = *local_128 + -1;
                iVar2 = *local_128 + 1;
              }
              if (iVar2 != 0) goto LAB_00407b97;
            }
            local_12c = local_60 + -3;
            local_130 = local_60 + -3;
            operator_delete();
            local_134 = 0;
            local_138 = local_68;
            local_60 = (int *)0x0;
            local_320 = 0;
          }
LAB_00407b97:
          local_a0 = 0x5c;
          FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_40,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if (uVar3 < (uint)local_20[-1]) {
          local_13c = local_20[-1] - uVar3;
          if ((uint)local_20[-1] < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_004084c8;
            uVar5 = 0;
            local_a0 = 0x98;
            local_140 = (uint *)FUN_004dc320(local_418,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
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
              if (local_158 != &DAT_00513d58) {
                *local_158 = *local_158 + 1;
              }
            }
            local_a0 = 0x98;
            local_58[0] = &std::out_of_range::vftable;
            local_94 = local_94 + 2;
            if (local_70 != (int *)0x0) {
              if (local_70[-3] != -1) {
                local_178 = local_70 + -3;
                if (local_178 == &DAT_00513d58) {
                  iVar2 = 1;
                }
                else if (local_178 == &DAT_00513d58) {
                  iVar2 = 1;
                }
                else {
                  *local_178 = *local_178 + -1;
                  iVar2 = *local_178 + 1;
                }
                if (iVar2 != 0) goto LAB_00407e39;
              }
              local_17c = local_70 + -3;
              local_180 = local_70 + -3;
              operator_delete();
              local_184 = 0;
              local_188 = local_78;
              local_70 = (int *)0x0;
            }
LAB_00407e39:
            local_a0 = 0x5c;
            FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_58,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          local_18c = local_20[-1] - uVar3;
          local_18d = 0;
          local_194 = local_18c;
          if (local_13c < local_18c) {
            local_194 = local_13c;
          }
          FUN_004cfad4((int)local_28,uVar3,local_194,(uint)&local_18d,0,0,0);
        }
        else {
          std::string::replace_fill((int)local_28,local_20[-1],0,uVar3 - local_20[-1],0);
        }
        if (local_20 + -3 != &DAT_00513d58) {
          local_20[-3] = 0;
        }
      }
      uVar3 = 0;
      while( true ) {
        iVar2 = (int)(*(undefined4 * *)&DAT_004eb4a8) - DAT_004eb4a4;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        if ((uint)(iVar2 >> 2) <= uVar3) goto LAB_00407f2b;
        local_198 = *(int **)(uVar3 * 4 + DAT_004eb4a4);
        pcVar1 = (char *)(**(code **)(*local_198 + 0x10))();
        iVar2 = FUN_004dcbf8((char *)local_20,pcVar1);
        if (iVar2 == 0) break;
        uVar3 = uVar3 + 1;
      }
      local_198[0x804] = local_198[0x804] + 1;
LAB_00407f2b:
      iVar2 = (int)(*(undefined4 * *)&DAT_004eb4a8) - DAT_004eb4a4;
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
        if ((*(undefined4 * *)&DAT_004eb4a8) == (*(undefined4 * *)&DAT_004eb4b8)) {
          FUN_004085f0(0x4eb4a0,(*(undefined4 * *)&DAT_004eb4a8),(undefined4*)&local_198);
        }
        else {
          local_19c = (*(undefined4 * *)&DAT_004eb4a8);
          local_1a0 = (*(undefined4 * *)&DAT_004eb4a8);
          *(*(undefined4 * *)&DAT_004eb4a8) = local_198;
          (*(undefined4 * *)&DAT_004eb4a8) = (*(undefined4 * *)&DAT_004eb4a8) + 1;
        }
      }
      if (local_bc[4] == local_bc[8]) {
        FUN_004085f0((int)(local_bc + 2),(undefined4 *)local_bc[4],(undefined4*)&local_198);
      }
      else {
        local_1a8 = (undefined4 *)local_bc[4];
        *local_1a8 = local_198;
        local_bc[4] = local_bc[4] + 4;
        local_1a4 = local_1a8;
      }
      if (local_e0 == 0xffffffff) goto code_r0x00408033;
      local_a0 = 0xe0;
      FUN_004d6118((int)local_8c,(int)local_14,local_e0 + 1,DAT_005140ac);
      local_94 = local_94 + 1;
      FUN_004cf384((int)local_14,(int)local_8c);
      local_94 = local_94 + -1;
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar4 = (int *)(local_84 + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar2 = *piVar4 + 1;
          }
          if (iVar2 != 0) goto LAB_004081ac;
        }
        local_1ac = local_84 + -0xc;
        local_1b0 = local_84 + -0xc;
        operator_delete();
        local_1b4 = 0;
        local_1b8 = local_8c;
        local_84 = 0;
      }
LAB_004081ac:
      local_a0 = 0x38;
      local_94 = local_94 + -1;
      if (local_20 != (int *)0x0) {
        if (local_20[-3] != -1) {
          piVar4 = local_20 + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar2 = *piVar4 + 1;
          }
          if (iVar2 != 0) goto LAB_004077d5;
        }
        local_1cc = local_20 + -3;
        local_1d0 = local_20 + -3;
        operator_delete();
        local_1d4 = 0;
        local_1d8 = local_28;
      }
    } while( true );
  }
LAB_00408256:
  local_94 = local_94 + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004082f3;
    }
    local_1dc = local_c + -3;
    local_1e0 = local_c + -3;
    operator_delete();
  }
LAB_004082f3:
  *in_FS_OFFSET = local_b0;
  return local_bc;
code_r0x00408033:
  local_94 = local_94 + -1;
  if (local_20 != (int *)0x0) {
    if (local_20[-3] != -1) {
      piVar4 = local_20 + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00408256;
    }
    local_1bc = local_20 + -3;
    local_1c0 = local_20 + -3;
    operator_delete();
    local_1c4 = 0;
    local_20 = (int *)0x0;
    local_1c8 = local_28;
  }
  goto LAB_00408256;
}

// ----------------------------------------------------------------------------------------------------
// 0x004085f0  FUN_004085f0   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004085f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4eb740);
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
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_004087ec(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004087ec(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0040771c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004087c8(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004087c8  FUN_004087c8   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004087c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004087ec  FUN_004087ec   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004087ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb780);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040886c  FUN_0040886c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040886c(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408884  TSDictionaryList::ReleaseDictionaries   (201 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406464. drops one reference on every listed Dictionary in the shared cache and deletes those reaching zero
void __cdecl TSDictionaryList::ReleaseDictionaries(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x4eb7b4);
  if (param_1 != 0) {
    for (piVar4 = *(int **)(param_1 + 0xc); piVar4 < *(int **)(param_1 + 0x10); piVar4 = piVar4 + 1)
    {
      piVar3 = (int *)FUN_00408984((*(int * *)&DAT_004eb4a4),DAT_004eb4a8,piVar4);
      puVar2 = (undefined4 *)*piVar3;
      piVar1 = puVar2 + 0x804;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
        if (piVar3 + 1 != DAT_004eb4a8) {
          FUN_004089a4(piVar3 + 1,DAT_004eb4a8,piVar3);
        }
        DAT_004eb4a8 = DAT_004eb4a8 + -1;
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
// 0x00408984  FUN_00408984   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00408984(int *param_1,int *param_2,int *param_3)

{
  for (; (param_2 != param_1 && (*param_3 != *param_1)); param_1 = param_1 + 1) {
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004089a4  FUN_004089a4   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004089a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004089c8  FUN_004089c8   (332 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __stdcall FUN_004089c8(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4eb81c);
  piVar4 = (*(int * *)&DAT_004eb4a4);
  do {
    piVar1 = DAT_004eb4a8;
    piVar5 = (*(int * *)&DAT_004eb4a4);
    if (DAT_004eb4a8 <= piVar4) {
      puVar3 = FUN_004089a4(DAT_004eb4a8,DAT_004eb4a8,(*(int * *)&DAT_004eb4a4));
      piVar4 = DAT_004eb4a8;
      iVar6 = (int)piVar1 - (int)piVar5;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 3;
      }
      DAT_004eb4a8 = DAT_004eb4a8 + -(iVar6 >> 2);
      FUN_0040771c(&DAT_004eb4a0,(int)puVar3,(int)piVar4);
      *in_FS_OFFSET = local_40;
      return;
    }
    piVar5 = (int *)*piVar4;
    puVar2 = (uint *)(**(code **)(*piVar5 + 0x10))();
    std::string::string_from_cstr((int)local_14,puVar2);
    if (piVar5 != (int *)0x0) {
      (**(code **)*piVar5)();
    }
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar5 = (int *)(local_c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar6 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar6 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar6 = *piVar5 + 1;
        }
        if (iVar6 != 0) goto LAB_00408aa7;
      }
      operator_delete();
      local_c = 0;
    }
LAB_00408aa7:
    piVar4 = piVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00408b14  TSDictionaryList::GetCount   (29 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004065a8. number of dictionaries (vector size)
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
// 0x00408b34  FUN_00408b34   (56 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408b34(int param_1)

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
    uVar1 = FUN_00408b6c(param_1,iVar4);
    if (CONCAT31(extraout_var,uVar1) == 0) break;
    iVar4 = iVar4 + 1;
  }
  uVar2 = FUN_00408c98(param_1,iVar4);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408b6c  FUN_00408b6c   (252 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00408baa) */
/* WARNING: Removing unreachable block (ram,0x00408c01) */
/* WARNING: Removing unreachable block (ram,0x00408c10) */
/* WARNING: Removing unreachable block (ram,0x00408c09) */
undefined1 __cdecl FUN_00408b6c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x4eb880);
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x1c))();
  if (DAT_00513d58 == -1) {
    operator_delete();
  }
  *in_FS_OFFSET = local_38;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408c68  FUN_00408c68   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408c68(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0xc))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408c8c  FUN_00408c8c   (10 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408c8c(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408c98  FUN_00408c98   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408c98(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x10))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408cbc  FUN_00408cbc   (79 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408cbc(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb8c8);
  (**(code **)(**(int **)(param_3 * 4 + *(int *)(param_2 + 0xc)) + 0x14))();
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408d0c  FUN_00408d0c   (79 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408d0c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb8ec);
  (**(code **)(**(int **)(param_3 * 4 + *(int *)(param_2 + 0xc)) + 0x20))();
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408d5c  FUN_00408d5c   (79 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408d5c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb910);
  (**(code **)(**(int **)(param_3 * 4 + *(int *)(param_2 + 0xc)) + 0x24))();
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408dac  FUN_00408dac   (44 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00408dac(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408dd8  FUN_00408dd8   (7 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00408dd8(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408de0  TSDictionaryList::GetNumLengths   (26 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406744. dictionary header num_lengths (u16 at Dictionary+0x240c)
undefined2 __cdecl TSDictionaryList::GetNumLengths(int param_1,int param_2)

{
  return *(undefined2 *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x240c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408dfc  FUN_00408dfc   (37 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00408dfc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  return *(int *)(iVar1 + 0x2404) < *(int *)(iVar1 + 0x2408);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408e24  FUN_00408e24   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00408e24(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x28))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408e54  FUN_00408e54   (44 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408e54(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  if ((int)(uint)*(ushort *)(iVar1 + 0x240c) <= param_3) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x25a4 + param_3 * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408e80  TSDictionaryList::GetWordStreamOffset   (29 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406760. word_stream_offsets[length] (u32 table at Dictionary+0x2410)
undefined4 __cdecl TSDictionaryList::GetWordStreamOffset(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x2410 + param_3 * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ea0  FUN_00408ea0   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00408ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x2bf8 + param_3));
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ec0  FUN_00408ec0   (26 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00408ec0(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x2bf4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00408edc  FUN_00408edc   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00408edc(int param_1,int param_2)

{
  return *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) + 0x2cf8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00408ef4  TSDictionaryList::CollectDefinitionOffsets   (1012 bytes)   [notes]
//   gathers direct-definition and full-text occurrence offsets for a matched word. Entry checked; body not read
//   file placement: inferred (address adjacency)
uint __cdecl TSDictionaryList::CollectDefinitionOffsets(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint local_460 [128];
  uint local_260 [128];
  int *local_60;
  uint *local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  char *local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  LPCSTR local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 1;
  local_c = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  local_10 = (LPCSTR)(**(code **)(*local_c + 0x18))();
  iVar2 = (**(code **)(*local_c + 0xc))();
  if ((iVar2 != 0) && (local_14 = fopen(local_10,&DAT_004eb416), local_14 != (int *)0x0)) {
    local_18 = 0;
    if (param_6 == 2) {
      local_1c = (int *)local_c[param_4 + 0xb80];
      if (local_1c == (int *)0x0) {
        local_20 = local_c[param_4 + 0xa98];
        pcVar3 = (char *)operator_new_array();
        iVar2 = fseek(local_14,local_c[param_4 + 0xa33],0);
        if ((iVar2 == 0) && (uVar4 = FUN_004ded48(pcVar3,4,local_20,local_14), uVar4 == local_20)) {
          local_24 = 0;
          iVar2 = 0;
          if (0 < (int)local_20) {
            do {
              if ((pcVar3[iVar2 * 4 + 3] & 0x80U) == 0) {
                if (param_5 == local_24) {
                  local_28 = pcVar3 + iVar2 * 4;
                  if (*(int *)(param_7 + 8) == *(int *)(param_7 + 0x18)) {
                    FUN_004092e8(param_7,*(undefined4 **)(param_7 + 8),(undefined4 *)local_28);
                  }
                  else {
                    local_30 = *(undefined4 **)(param_7 + 8);
                    *local_30 = *(undefined4 *)local_28;
                    *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
                    local_2c = local_30;
                  }
                }
              }
              else {
                if (param_5 == local_24) {
                  local_18 = *(uint *)(pcVar3 + iVar2 * 4) & 0x7fffffff;
                }
                local_24 = local_24 + 1;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)local_20);
          }
          local_1c = (int *)operator_new_array();
          iVar2 = local_c[param_4 + 0xa33];
          *local_1c = iVar2;
          local_34 = 1;
          local_60 = local_1c + 1;
          for (iVar5 = 0; iVar2 = iVar2 + 4, iVar5 < (int)(local_20 - 1); iVar5 = iVar5 + 1) {
            if ((pcVar3[iVar5 * 4 + 3] & 0x80U) != 0) {
              *local_60 = iVar2;
              local_60 = local_60 + 1;
            }
          }
          local_c[param_4 + 0xb80] = (int)local_1c;
        }
        operator_delete_array();
      }
      else {
        iVar2 = fseek(local_14,local_1c[param_5],0);
        if (iVar2 == 0) {
          do {
            local_38 = FUN_004ded48((char *)local_260,4,0x80,local_14);
            if (local_38 == 0) goto LAB_00409162;
            puVar6 = local_260;
            for (uVar4 = 0; uVar4 < local_38; uVar4 = uVar4 + 1) {
              local_18 = *puVar6;
              if ((local_18 & 0x80000000) != 0) break;
              puVar1 = *(uint **)(param_7 + 8);
              if (puVar1 == *(uint **)(param_7 + 0x18)) {
                FUN_004092e8(param_7,puVar1,&local_18);
              }
              else {
                local_3c = puVar1;
                local_40 = puVar1;
                *puVar1 = local_18;
                *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
              }
              puVar6 = puVar6 + 1;
            }
          } while ((local_18 & 0x80000000) == 0);
          local_18 = local_18 & 0x7fffffff;
        }
      }
LAB_00409162:
      if ((local_c[0x900] <= (int)local_18) && ((int)local_18 < local_c[0x902])) {
        if (*(int *)(param_7 + 8) == *(int *)(param_7 + 0x18)) {
          FUN_004092e8(param_7,*(undefined4 **)(param_7 + 8),&local_18);
        }
        else {
          local_48 = *(uint **)(param_7 + 8);
          *local_48 = local_18;
          *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
          local_44 = local_48;
        }
        local_18 = 0;
      }
    }
    else {
      local_4c = local_c[param_4 + 0x9ce] + param_5 * 4;
      iVar2 = fseek(local_14,local_4c,0);
      if ((iVar2 != 0) || (uVar4 = FUN_004ded48((char *)&local_18,4,1,local_14), uVar4 != 1)) {
        local_18 = 0;
      }
    }
    local_8 = (uint)(local_18 != 0x7fffffff);
    if (((param_3 != 0) && (local_8 != 0)) && (local_18 != 0)) {
      uVar4 = fseek(local_14,local_18,0);
      while (uVar4 == 0) {
        local_50 = FUN_004ded48((char *)local_460,4,0x80,local_14);
        if (local_50 == 0) break;
        uVar4 = 0;
        puVar6 = local_460;
        while ((uVar4 < local_50 && ((local_18 & 0x80000000) == 0))) {
          local_18 = *puVar6;
          local_54 = *puVar6 & 0x7fffffff;
          puVar1 = *(uint **)(param_7 + 8);
          if (puVar1 == *(uint **)(param_7 + 0x18)) {
            FUN_004092e8(param_7,puVar1,&local_54);
          }
          else {
            local_58 = puVar1;
            local_5c = puVar1;
            *puVar1 = local_54;
            *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
          }
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = local_18 & 0x80000000;
      }
    }
    FUN_004de7cc(local_14);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004092e8  FUN_004092e8   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004092e8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4eb954);
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
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_004094e4(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004094e4(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0040957c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004094c0(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004094c0  FUN_004094c0   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004094c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004094e4  FUN_004094e4   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004094e4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb994);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409564  FUN_00409564   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409564(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040957c  FUN_0040957c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040957c(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00409594  FUN_00409594   (1608 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00409623) */
/* WARNING: Removing unreachable block (ram,0x004097dc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffa610 : 0x004097ea */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00409594(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *in_FS_OFFSET;
  uint local_59f8;
  int local_59d8;
  undefined4 local_59d4;
  undefined4 local_59b0;
  int local_59ac;
  int local_59a8;
  undefined4 local_5998;
  int local_5990 [8];
  undefined4 local_5970 [258];
  uint local_5568 [3770];
  undefined4 uStackY_1a80;
  int local_1170;
  int local_1164 [1028];
  int local_154;
  undefined1 local_14 [8];
  uint *local_c;
  int local_8;
  
  iVar5 = 5;
  do {
    local_8 = iVar5;
    iVar5 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x4eba44);
  local_59d8 = 0;
  do {
    iVar5 = TSDictionaryList::GetCount(param_1);
    if (iVar5 <= local_59d8) {
      *in_FS_OFFSET = local_59d4;
      return;
    }
    iVar5 = FUN_00408c68(param_1,local_59d8);
    if (iVar5 != 0) {
      local_c = (uint *)&DAT_00513d64;
      for (pbVar7 = *(byte **)(param_2 + 8);
          pbVar7 < (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4));
          pbVar7 = pbVar7 + 1) {
        iVar5 = *(int *)(**(int **)(param_1 + 0xc) + 8 + (uint)*pbVar7 * 8);
        if (iVar5 != 0xff) {
          uVar2 = FUN_00408ea0(param_1,0,iVar5);
          std::string::replace_fill((int)local_14,local_c[-1],0,1,(char)uVar2);
        }
      }
      MatchEngine::MatchEngine(local_1164);
      MatchEngine::Compile(local_1164,param_1,local_59d8,local_c,0);
      iVar5 = MatchEngine::IsValid((int)local_1164);
      if (iVar5 != 0) {
        InputEngine::InputEngine(local_5970,param_1,local_59d8);
        bVar1 = InputEngine::StartLength((int)local_5970,local_c[-1]);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          iVar5 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4);
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0x7f;
          }
          uVar3 = iVar5 >> 7;
          MatchEngine::SetWordLength((int)local_1164,local_c[-1]);
          while (pcVar4 = (char *)InputEngine::NextWord((int)local_5970,(int)local_1164), *pcVar4 != -1) {
            iVar5 = InputEngine::GetLinkGroupIndex((int)local_5970);
            if (iVar5 != -1) {
              local_59ac = 0;
              local_59a8 = 0;
              local_5998 = 0;
              local_59b0 = 0x100;
              uStackY_1a80 = 0x40982c;
              TSDictionaryList::CollectDefinitionOffsets(param_1,local_59d8,0,local_c[-1],iVar5,local_1170,(int)&local_59b0);
              local_59f8 = 0;
              while( true ) {
                iVar5 = local_59a8 - local_59ac;
                if (iVar5 < 0) {
                  iVar5 = iVar5 + 3;
                }
                if ((uint)(iVar5 >> 2) <= local_59f8) break;
                iVar5 = *(int *)(local_59f8 * 4 + local_59ac);
                uVar8 = uVar3;
                while( true ) {
                  iVar6 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4);
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 0x7f;
                  }
                  if (((uint)(iVar6 >> 7) <= uVar8) ||
                     (*(int *)(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x78) == iVar5)) break;
                  uVar8 = uVar8 + 1;
                }
                iVar6 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4);
                if (iVar6 < 0) {
                  iVar6 = iVar6 + 0x7f;
                }
                if ((uint)(iVar6 >> 7) <= uVar8) {
                  FUN_00409d44(param_3,uVar8 + 1);
                  *(int *)(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x10) = local_59d8;
                  *(int *)(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x78) = iVar5;
                  FUN_004cf41c(uVar8 * 0x80 + *(int *)(param_3 + 4) + 0x58,local_5568);
                }
                local_59f8 = local_59f8 + 1;
              }
              FUN_0040957c(&local_59b0,local_59ac,local_59a8);
              operator_delete();
            }
          }
          TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(local_5990,param_1,local_59d8,(undefined4 *)0x0);
          while( true ) {
            iVar5 = *(int *)(param_3 + 4);
            iVar6 = *(int *)(param_3 + 8) - iVar5;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0x7f;
            }
            if ((uint)(iVar6 >> 7) <= uVar3) break;
            TSDictionaryDefinitionRetriever::ReadDefinition((int)local_5990,*(LONG *)(uVar3 * 0x80 + iVar5 + 0x78),uVar3 * 0x80 + iVar5
                        );
            uVar3 = uVar3 + 1;
          }
          TSDictionaryDefinitionRetriever::_dtor((int)local_5990,2);
        }
        InputEngine::_dtor((int)local_5970,2);
      }
      if (local_154 != 0) {
        if (*(int *)(local_154 + -0xc) != -1) {
          piVar9 = (int *)(local_154 + -0xc);
          if (piVar9 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar9 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar9 = *piVar9 + -1;
            iVar5 = *piVar9 + 1;
          }
          if (iVar5 != 0) goto LAB_00409aed;
        }
        operator_delete();
        local_154 = 0;
      }
LAB_00409aed:
      Pattern::_dtor((int)local_1164,2);
      if (local_c != (uint *)0x0) {
        if (local_c[-3] != 0xffffffff) {
          puVar10 = local_c + -3;
          if (puVar10 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (puVar10 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *puVar10 = *puVar10 - 1;
            iVar5 = *puVar10 + 1;
          }
          if (iVar5 != 0) goto LAB_00409bb0;
        }
        operator_delete();
        local_c = (uint *)0x0;
      }
    }
LAB_00409bb0:
    local_59d8 = local_59d8 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00409d44  FUN_00409d44   (663 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00409d44(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a8;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_6c [4];
  int local_68;
  int local_64;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  int local_24;
  int local_14;
  
  __InitExceptBlockLDTC(0x4ebb04);
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7f;
  }
  if (param_2 <= (uint)(iVar3 >> 7)) {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = iVar3 - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if (param_2 < (uint)(iVar2 >> 7)) {
      iVar5 = param_2 * 0x80 + *(int *)(param_1 + 4);
      iVar1 = FUN_0040b5a8(iVar3,iVar3,iVar5);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar3 - iVar5;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7f;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar3 >> 7) * -0x80;
      FUN_0040b62c(param_1,iVar1,iVar2);
    }
    goto LAB_00409fc8;
  }
  iVar3 = FUN_00473df0((int)local_84);
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
  FUN_0040a04c(param_1,*(int *)(param_1 + 8),param_2 - (iVar2 >> 7),iVar3);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar4 = (int *)(local_14 + -0xc);
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
      if (iVar3 != 0) goto LAB_00409e34;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_00409e34:
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar4 = (int *)(local_24 + -0xc);
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
      if (iVar3 != 0) goto LAB_00409eb0;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_00409eb0:
  FUN_0040b4f0(local_4c,local_48,local_44);
  operator_delete();
  FUN_0040b4f0(local_6c,local_68,local_64);
  operator_delete();
  if (local_7c != 0) {
    if (*(int *)(local_7c + -0xc) != -1) {
      piVar4 = (int *)(local_7c + -0xc);
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
      if (iVar3 != 0) goto LAB_00409fc8;
    }
    operator_delete();
  }
LAB_00409fc8:
  *in_FS_OFFSET = local_a8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a04c  FUN_0040a04c   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040a04c(int param_1,int param_2,uint param_3,int param_4)

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
  
  __InitExceptBlockLDTC(0x4ebb84);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if ((uint)(iVar2 >> 7) < param_3) {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      local_3c = iVar1 >> 7;
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
      FUN_0040a2f4(*(int *)(param_1 + 4),param_2,iVar1);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040ae88((iVar2 >> 7) * 0x80 + iVar1,param_3,param_4);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040a2f4(param_2,*(int *)(param_1 + 8),((iVar2 >> 7) + param_3) * 0x80 + iVar1);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040b62c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(int *)(param_1 + 0x18) = local_38 * 0x80 + iVar1;
      *(uint *)(param_1 + 8) = (iVar2 >> 7) * 0x80 + iVar1 + param_3 * 0x80;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar2 = iVar1 - param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      if (param_3 < (uint)(iVar2 >> 7)) {
        FUN_0040a2f4(iVar1 + param_3 * -0x80,iVar1,iVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x80;
        FUN_0040ab04(param_2,iVar1 + param_3 * -0x80,iVar1);
        FUN_0040ae0c(param_2,param_3 * 0x80 + param_2,param_4);
      }
      else {
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x7f;
        }
        iVar2 = param_3 - (iVar2 >> 7);
        FUN_0040ae88(iVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 0x80;
        FUN_0040a2f4(param_2,iVar1,param_3 * 0x80 + param_2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 0x80;
        FUN_0040ae0c(param_2,iVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a2f4  FUN_0040a2f4   (1615 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040a451) */
/* WARNING: Removing unreachable block (ram,0x0040a55e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0040a459 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0040a2f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4ebc08);
  while (iVar3 = param_3, iVar2 = param_1, iVar2 != param_2) {
    param_1 = iVar2 + 0x80;
    param_3 = iVar3 + 0x80;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
        piVar5 = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(iVar3 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
        piVar5 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        local_8 = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x1c) = iVar4;
      iVar4 = FUN_0040a988(*(int *)(iVar2 + 0x1c),*(int *)(iVar2 + 0x20),*(int *)(iVar3 + 0x1c));
      *(int *)(iVar3 + 0x20) = iVar4;
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x3c) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0x40;
      iVar4 = operator_new();
      if (iVar4 == 0) {
        local_c = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(iVar3 + 0x3c) = iVar4;
      iVar4 = FUN_0040a988(*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x40),*(int *)(iVar3 + 0x3c));
      *(int *)(iVar3 + 0x40) = iVar4;
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x60) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x60) + -4);
        piVar5 = std::string::__getRep(iVar3 + 0x58,uVar1,uVar1);
        *(int **)(iVar3 + 0x60) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x60),*(undefined4 **)(iVar2 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
        piVar5 = (int *)(*(int *)(iVar3 + 0x60) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x70) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x70) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar2 + 0x70) + -4);
        piVar5 = std::string::__getRep(iVar3 + 0x68,uVar1,uVar1);
        *(int **)(iVar3 + 0x70) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar3 + 0x70),*(undefined4 **)(iVar2 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
        piVar5 = (int *)(*(int *)(iVar3 + 0x70) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
      *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
    }
  }
  *in_FS_OFFSET = local_34;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040a988  FUN_0040a988   (293 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040a988(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ebca0);
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
// 0x0040aad4  FUN_0040aad4   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040aad4(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040aaec  FUN_0040aaec   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040aaec(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x80) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ab04  FUN_0040ab04   (131 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040ab04(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    FUN_004cf384(param_3 + -0x80,param_2 + -0x80);
    FUN_0040ab88(param_3 + -0x68,param_2 + -0x68);
    FUN_0040ab88(param_3 + -0x48,param_2 + -0x48);
    FUN_004cf384(param_3 + -0x28,param_2 + -0x28);
    FUN_004cf384(param_3 + -0x18,param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x70) = *(undefined4 *)(param_2 + -0x70);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    param_2 = param_2 + -0x80;
    param_3 = param_3 + -0x80;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ab88  FUN_0040ab88   (558 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040ab88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4ebd08);
  if (param_2 == param_1) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    if ((uint)(iVar1 >> 4) < (uint)(iVar2 >> 4)) {
      iVar2 = operator_new();
      if (iVar2 == 0) {
        local_8 = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      iVar1 = FUN_0040a988(*(int *)(param_2 + 4),*(int *)(param_2 + 8),iVar2);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0040b4f0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(int *)(param_1 + 4) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      iVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if ((uint)(iVar2 >> 4) < (uint)(iVar1 >> 4)) {
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        FUN_0040add8(*(int *)(param_2 + 4),(iVar2 >> 4) * 0x10 + *(int *)(param_2 + 4),
                     *(int *)(param_1 + 4));
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 0xf;
        }
        FUN_0040a988((iVar1 >> 4) * 0x10 + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
                     (iVar2 >> 4) * 0x10 + *(int *)(param_1 + 4));
      }
      else {
        iVar2 = FUN_0040add8(*(int *)(param_2 + 4),*(int *)(param_2 + 8),*(int *)(param_1 + 4));
        FUN_0040b4f0(param_1,iVar2,*(int *)(param_1 + 8));
      }
    }
    iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    *(int *)(param_1 + 8) = (iVar2 >> 4) * 0x10 + *(int *)(param_1 + 4);
    *in_FS_OFFSET = local_2c;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040add8  FUN_0040add8   (50 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040add8(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_004cf384(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ae0c  FUN_0040ae0c   (121 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040ae0c(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_004cf384(param_1,param_3);
    FUN_0040ab88(param_1 + 0x18,param_3 + 0x18);
    FUN_0040ab88(param_1 + 0x38,param_3 + 0x38);
    FUN_004cf384(param_1 + 0x58,param_3 + 0x58);
    FUN_004cf384(param_1 + 0x68,param_3 + 0x68);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 0x78);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ae88  FUN_0040ae88   (1601 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040afd7) */
/* WARNING: Removing unreachable block (ram,0x0040b0e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x0040afdf */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0040ae88(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4ebd8c);
  iVar2 = param_1;
  while (param_1 = iVar2, iVar3 = param_2 + -1, param_2 != 0) {
    iVar2 = param_1 + 0x80;
    param_2 = iVar3;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
        *(int **)(param_1 + 8) = piVar4 + 3;
        memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
        piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0x40;
      iVar3 = operator_new();
      if (iVar3 == 0) {
        local_8 = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
      iVar3 = FUN_0040a988(*(int *)(param_3 + 0x1c),*(int *)(param_3 + 0x20),
                           *(int *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x20) = iVar3;
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0x40;
      iVar3 = operator_new();
      if (iVar3 == 0) {
        local_c = &std::bad_alloc::vftable;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
      }
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar3 = FUN_0040a988(*(int *)(param_3 + 0x3c),*(int *)(param_3 + 0x40),
                           *(int *)(param_1 + 0x3c));
      *(int *)(param_1 + 0x40) = iVar3;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x60) = 0;
      iVar3 = *(int *)(*(int *)(param_3 + 0x60) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 0x60) + -4);
        piVar4 = std::string::__getRep(param_1 + 0x58,uVar1,uVar1);
        *(int **)(param_1 + 0x60) = piVar4 + 3;
        memcpy(*(undefined4 **)(param_1 + 0x60),*(undefined4 **)(param_3 + 0x60),uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x60);
        piVar4 = (int *)(*(int *)(param_1 + 0x60) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      iVar3 = *(int *)(*(int *)(param_3 + 0x70) + -0xc);
      if (iVar3 == -1 || iVar3 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 0x70) + -4);
        piVar4 = std::string::__getRep(param_1 + 0x68,uVar1,uVar1);
        *(int **)(param_1 + 0x70) = piVar4 + 3;
        memcpy(*(undefined4 **)(param_1 + 0x70),*(undefined4 **)(param_3 + 0x70),uVar1);
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x70);
        piVar4 = (int *)(*(int *)(param_1 + 0x70) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b4f0  FUN_0040b4f0   (182 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040b4f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ebdf4);
joined_r0x0040b509:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x0040b52c;
  goto LAB_0040b559;
code_r0x0040b52c:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
  if (piVar3 == &DAT_00513d58) {
    iVar2 = 1;
  }
  else if (piVar3 == &DAT_00513d58) {
    iVar2 = 1;
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3 + 1;
  }
  if (iVar2 == 0) {
LAB_0040b559:
    operator_delete();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x0040b509;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b5a8  FUN_0040b5a8   (131 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040b5a8(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_004cf384(param_3,param_1);
    FUN_0040ab88(param_3 + 0x18,param_1 + 0x18);
    FUN_0040ab88(param_3 + 0x38,param_1 + 0x38);
    FUN_004cf384(param_3 + 0x58,param_1 + 0x58);
    FUN_004cf384(param_3 + 0x68,param_1 + 0x68);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_3 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    param_3 = param_3 + 0x80;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b62c  FUN_0040b62c   (639 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040b62c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ebe18);
joined_r0x0040b648:
  do {
    do {
      iVar1 = param_2;
      if (iVar1 == param_3) {
        *in_FS_OFFSET = local_2c;
        return;
      }
      param_2 = iVar1 + 0x80;
    } while (iVar1 == 0);
    if (*(int *)(iVar1 + 0x70) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x70) + -0xc) != -1) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x70) + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_0040b6f3;
      }
      operator_delete();
      *(undefined4 *)(iVar1 + 0x70) = 0;
    }
LAB_0040b6f3:
    if (*(int *)(iVar1 + 0x60) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x60) + -0xc) != -1) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x60) + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_0040b77d;
      }
      operator_delete();
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
LAB_0040b77d:
    FUN_0040b4f0(iVar1 + 0x38,*(int *)(iVar1 + 0x3c),*(int *)(iVar1 + 0x40));
    operator_delete();
    FUN_0040b4f0(iVar1 + 0x18,*(int *)(iVar1 + 0x1c),*(int *)(iVar1 + 0x20));
    operator_delete();
  } while (*(int *)(iVar1 + 8) == 0);
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
    piVar2 = (int *)(*(int *)(iVar1 + 8) + -0xc);
    if (piVar2 == &DAT_00513d58) {
      iVar3 = 1;
    }
    else if (piVar2 == &DAT_00513d58) {
      iVar3 = 1;
    }
    else {
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2 + 1;
    }
    if (iVar3 != 0) goto joined_r0x0040b648;
  }
  operator_delete();
  *(undefined4 *)(iVar1 + 8) = 0;
  goto joined_r0x0040b648;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040b8ac  TSDictionaryList::Dictionary::Dictionary   (315 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406814. constructor: installs the vtable, copies the path string
undefined4 * __cdecl TSDictionaryList::Dictionary::Dictionary(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ebe84);
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
    if (piVar3 != &DAT_00513d58) {
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
// 0x0040b9e8  TSDictionaryList::Dictionary::~Dictionary   (218 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryList::Dictionary::_dtor
void __cdecl TSDictionaryList::Dictionary::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ebec0);
  if (param_1 == (int *)0x0) goto LAB_0040bab1;
  *param_1 = (int)&TSDictionaryList::Dictionary::vftable;
  (**(code **)(*param_1 + 4))();
  if (param_1[0xbe7] != 0) {
    if (*(int *)(param_1[0xbe7] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xbe7] + -0xc);
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
      if (iVar1 != 0) goto LAB_0040baa1;
    }
    operator_delete();
    param_1[0xbe7] = 0;
  }
LAB_0040baa1:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0040bab1:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040bac4  TSDictionaryList::Dictionary::Load   (1774 bytes)   [notes+analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00406a2c. vtable slot 1. Reads the .tsd header (magic TSD0/TSD1), Huffman table and calibration matrix; builds the 8-bit lookahead decode tables
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
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  int iVar13;
  LPFILETIME p_Var14;
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
  
  bVar12 = 0;
  __InitExceptBlockLDTC(0x4ebef0);
  param_1[0x801] = 0;
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  piVar10 = param_1;
  uVar5 = (**(code **)(*param_1 + 8))();
  if (param_2 == 0) {
    *in_FS_OFFSET = local_38;
    return local_38;
  }
  puVar6 = (uint *)(**(code **)(*param_1 + 0x18))(uVar5,*param_1,piVar10,param_1);
  local_40 = fopen((LPCSTR)puVar6,&DAT_004eb416);
  if (local_40 == (int *)0x0) goto LAB_0040bbe8;
  p_Var14 = (LPFILETIME)(param_1 + 0x802);
  iVar13 = 1;
  local_28 = 8;
  std::string::string_from_cstr((int)local_14,puVar6);
  local_1c = local_1c + 1;
  bVar3 = FUN_004378c0((int)local_14,iVar13,p_Var14);
  uVar7 = (uint)(CONCAT31(extraout_var,bVar3) == 0);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar10 = (int *)(local_c + -0xc);
      if (piVar10 == &DAT_00513d58) {
        iVar13 = 1;
      }
      else if (piVar10 == &DAT_00513d58) {
        iVar13 = 1;
      }
      else {
        *piVar10 = *piVar10 + -1;
        iVar13 = *piVar10 + 1;
      }
      if (iVar13 != 0) goto LAB_0040bbe3;
    }
    local_4c = local_c + -0xc;
    local_50 = local_c + -0xc;
    operator_delete();
    local_54 = 0;
    local_58 = local_14;
    local_c = 0;
  }
LAB_0040bbe3:
  if (uVar7 == 0) {
    uVar7 = FUN_004ded48((char *)local_5c,1,4,local_40);
    if ((uVar7 != 4) ||
       ((uVar7 = FUN_004dcac0(&DAT_004ecb00 /* "TSD0TSD1" */,local_5c,4), uVar7 != 0 &&
        (uVar7 = FUN_004dcac0(&DAT_004ecb04 /* "TSD1" */,local_5c,4), uVar7 != 0)))) {
      piVar10 = (int *)FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar10;
    }
    param_1[0x8ff] = local_59 + -0x30;
    uVar7 = FUN_004ded48((char *)(param_1 + 0x903),2,1,local_40);
    if (uVar7 != 1) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar7 = 1000;
    if (param_1[0x8ff] == 0) {
      uVar7 = 0x50;
      piVar10 = param_1 + 0x9ce;
      for (uVar4 = 0; uVar4 < *(ushort *)(param_1 + 0x903); uVar4 = uVar4 + 1) {
        *piVar10 = -1;
        piVar10[0x65] = -1;
        piVar10[0xca] = 0;
        piVar10 = piVar10 + 1;
      }
      memset(param_1 + 0x900,0,0xc);
    }
    else {
      uVar8 = FUN_004ded48((char *)(param_1 + 0x900),4,3,local_40);
      if ((((uVar8 != 3) ||
           (uVar8 = FUN_004ded48((char *)(param_1 + 0x9ce),4,(uint)*(ushort *)(param_1 + 0x903),
                                 local_40), uVar8 != *(ushort *)(param_1 + 0x903))) ||
          (uVar8 = FUN_004ded48((char *)(param_1 + 0xa33),4,(uint)*(ushort *)(param_1 + 0x903),
                                local_40), uVar8 != *(ushort *)(param_1 + 0x903))) ||
         (uVar8 = FUN_004ded48((char *)(param_1 + 0xa98),4,(uint)*(ushort *)(param_1 + 0x903),
                               local_40), uVar8 != *(ushort *)(param_1 + 0x903))) {
        piVar10 = (int *)FUN_004de7cc(local_40);
        *in_FS_OFFSET = local_38;
        return piVar10;
      }
    }
    uVar8 = FUN_004ded48((char *)(param_1 + 0x904),4,(uint)*(ushort *)(param_1 + 0x903),local_40);
    if (((uVar8 != *(ushort *)(param_1 + 0x903)) ||
        (uVar8 = FUN_004ded48((char *)(param_1 + 0x969),4,(uint)*(ushort *)(param_1 + 0x903),
                              local_40), uVar8 != *(ushort *)(param_1 + 0x903))) ||
       (uVar8 = FUN_004ded48((char *)(param_1 + 0x805),1,uVar7,local_40), uVar7 != uVar8)) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    uVar7 = FUN_004ded48((char *)(param_1 + 0xafd),2,1,local_40);
    if ((uVar7 != 1) ||
       (uVar7 = FUN_004ded48((char *)((int)param_1 + 0x2bf6),2,1,local_40), uVar7 != 1)) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    sVar1 = (short)param_1[0xafd];
    if ((((sVar1 < 0) || (0xfd < sVar1)) || (*(short *)((int)param_1 + 0x2bf6) < 1)) ||
       ((0xfd < *(short *)((int)param_1 + 0x2bf6) || (*(short *)((int)param_1 + 0x2bf6) < sVar1))))
    {
      piVar10 = (int *)FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar10;
    }
    piVar10 = param_1 + 1;
    local_3c = 0;
    piVar11 = param_1 + 0xafe;
    do {
      *(undefined1 *)piVar11 = 0x21;
      *piVar10 = 0;
      piVar11 = (int *)((int)piVar11 + 1);
      piVar10[1] = 0xff;
      local_3c = local_3c + 1;
      piVar10 = piVar10 + 2;
    } while (local_3c < 0x100);
    piVar10 = param_1 + local_3c * 2 + 1;
    for (; local_3c < 0x300; local_3c = local_3c + 1) {
      *piVar10 = -1;
      piVar10[1] = -1;
      piVar10 = piVar10 + 2;
    }
    local_60 = 0x101;
    piVar10 = param_1 + 0xb3e;
    local_3c = 0;
    puVar6 = (uint *)(param_1 + 1);
    do {
      uVar7 = FUN_004ded48(&local_61,1,1,local_40);
      if (((uVar7 != 1) || (uVar7 = FUN_004ded48((char *)&local_62,1,1,local_40), uVar7 != 1)) ||
         ((uVar7 = FUN_004ded48((char *)&local_64,2,1,local_40), uVar7 != 1 ||
          (uVar7 = FUN_004ded48((char *)&local_68,4,1,local_40), uVar7 != 1)))) {
        FUN_004de7cc(local_40);
        *in_FS_OFFSET = local_38;
        return local_38;
      }
      if (local_62 != 0) {
        iVar13 = 0x100;
        local_6c = (uint)local_62;
        while (1 < (int)local_6c) {
          if (param_1[iVar13 * 2 + 1] < 0) {
            param_1[iVar13 * 2 + 1] = local_60;
            local_60 = local_60 + 1;
          }
          if (param_1[iVar13 * 2 + 2] < 0) {
            param_1[iVar13 * 2 + 2] = local_60;
            local_60 = local_60 + 1;
          }
          iVar13 = param_1[iVar13 * 2 + (local_68 >> ((byte)(local_6c - 1) & 0x1f) & 1) + 1];
          local_6c = local_6c - 1;
        }
        param_1[iVar13 * 2 + (local_68 & 1) + 1] = local_3c;
        *puVar6 = (uint)local_62;
      }
      if (-1 < local_64) {
        puVar6[1] = (int)local_64;
        *(char *)((int)param_1 + local_64 + 0x2bf8) = local_61;
      }
      *(char *)piVar10 = local_61;
      local_3c = local_3c + 1;
      piVar10 = (int *)((int)piVar10 + 1);
      puVar6 = puVar6 + 2;
    } while (local_3c < 0x100);
    piVar10 = param_1 + 0x601;
    local_70 = 0;
    do {
      iVar9 = 0;
      local_74 = local_70;
      for (iVar13 = 0x100; (iVar9 < 8 && (0xff < iVar13)); iVar13 = param_1[iVar13 * 2 + uVar7 + 1])
      {
        uVar7 = local_74 & 1;
        iVar9 = iVar9 + 1;
        local_74 = (int)local_74 >> 1;
      }
      *piVar10 = iVar13;
      piVar10[0x100] = param_1[iVar13 * 2 + 1];
      local_70 = local_70 + 1;
      piVar10 = piVar10 + 1;
    } while ((int)local_70 < 0x100);
    uVar7 = FUN_004ded48((char *)(param_1 + 0xb7e),2,1,local_40);
    if (uVar7 != 1) {
      FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return local_38;
    }
    iVar13 = operator_new_array();
    param_1[0xb7f] = iVar13;
    if (iVar13 == 0) {
      piVar10 = (int *)FUN_004de7cc(local_40);
      *in_FS_OFFSET = local_38;
      return piVar10;
    }
    for (iVar13 = 0; iVar13 < (int)(uint)*(ushort *)(param_1 + 0xb7e); iVar13 = iVar13 + 1) {
      uVar5 = operator_new_array();
      *(undefined4 *)(param_1[0xb7f] + iVar13 * 4) = uVar5;
    }
    iVar13 = 0;
    while( true ) {
      if ((int)(uint)*(ushort *)(param_1 + 0xb7e) <= iVar13) {
        piVar10 = (int *)FUN_004de7cc(local_40);
        param_1[0x801] = 1;
        *in_FS_OFFSET = local_38;
        return piVar10;
      }
      pcVar2 = *(char **)(param_1[0xb7f] + iVar13 * 4);
      if ((pcVar2 == (char *)0x0) ||
         (uVar7 = FUN_004ded48(pcVar2,1,(int)(short)param_1[0xafd],local_40),
         uVar7 != (int)(short)param_1[0xafd])) break;
      iVar13 = iVar13 + 1;
    }
    piVar10 = (int *)FUN_004de7cc(local_40);
    *in_FS_OFFSET = local_38;
    return piVar10;
  }
LAB_0040bbe8:
  piVar10 = (int *)"-- DICTIONARY FILE NOT FOUND --";
  piVar11 = param_1 + 0x805;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *piVar11 = *piVar10;
    piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
    piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
  }
  *in_FS_OFFSET = local_38;
  return param_1 + 0x805;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c1b4  TSDictionaryList::Dictionary::Unload   (132 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040711c. vtable slot 2. Frees the calibration matrix and clears the loaded state
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
// 0x0040c238  TSDictionaryList::Dictionary::EnsureCurrent   (94 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004071a0. vtable slot 3. Reloads when the file's timestamp no longer matches; returns the loaded flag
//   also: TSDictionaryList::Dictionary::vf3 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::EnsureCurrent(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  _FILETIME local_c;
  
  bVar1 = FUN_004378c0((int)(param_1 + 0xbe5),1,&local_c);
  if (((CONCAT31(extraout_var,bVar1) == 0) || (local_c.dwLowDateTime != param_1[0x802])) ||
     (local_c.dwHighDateTime != param_1[0x803])) {
    (**(code **)(*param_1 + 4))();
    (**(code **)(*param_1 + 4))();
  }
  return param_1[0x801];
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c298  TSDictionaryList::Dictionary::vf4   (14 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl TSDictionaryList::Dictionary::vf4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2f9c);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c2a8  TSDictionaryList::Dictionary::GetFileTitle   (66 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407210. vtable slot 5
//   also: TSDictionaryList::Dictionary::vf5 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetFileTitle(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ebf20);
  FUN_00436e14(param_1,param_2 + 0x2f94);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c2ec  TSDictionaryList::Dictionary::vf6   (14 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl TSDictionaryList::Dictionary::vf6(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2f9c);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c2fc  TSDictionaryList::Dictionary::GetCounts   (102 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407264. vtable slot 10. Sums the per-length count tables into four totals
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
// 0x0040c364  TSDictionaryList::Dictionary::GetSummaryText   (603 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004072cc. vtable slot 7. Formats the Headwords / Definitions / Description text
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
  
  __InitExceptBlockLDTC(0x4ebf64);
  local_38 = 8;
  (**(code **)(*param_1 + 0x14))();
  local_2c = local_2c + 1;
  FUN_004cf384(param_2,(int)local_24);
  local_2c = local_2c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c41a;
    }
    local_4c = local_1c + -0xc;
    local_50 = local_1c + -0xc;
    operator_delete();
    local_54 = 0;
    local_58 = local_24;
    local_1c = 0;
    local_84 = 0;
  }
LAB_0040c41a:
  iVar1 = (**(code **)(*param_1 + 0xc))();
  local_59 = iVar1 != 0;
  if ((bool)local_59) {
    (**(code **)(*param_1 + 0x28))();
    FUN_004e0344((undefined1 *)local_f0,(byte *)"\nHeadwords: %d");
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = strlen(local_f0);
    FUN_004cfad4(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    if (0 < local_64) {
      FUN_004e0344((undefined1 *)local_f0,(byte *)"\nDefinitions: %d");
      uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
      pcVar2 = strlen(local_f0);
      FUN_004cfad4(param_2,uVar3,0,(uint)local_f0,(uint)pcVar2,0,(uint)pcVar2);
    }
  }
  local_38 = 0x2c;
  iVar1 = std::string::string_from_cstr((int)local_14,(uint *)(param_1 + 0x805));
  local_2c = local_2c + 1;
  local_38 = 0x20;
  if (*(int *)(local_c + -4) != 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 8) + -4);
    pcVar2 = strlen((uint *)"\nDescription: ");
    FUN_004cfad4(param_2,uVar3,0,0x4eb477,(uint)pcVar2,0,(uint)pcVar2);
    iVar1 = std::string::append(param_2,(int)local_14);
  }
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),local_59);
  local_2c = local_2c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_0040c5ad;
    }
    local_78 = local_c + -0xc;
    operator_delete();
  }
LAB_0040c5ad:
  *in_FS_OFFSET = local_48;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c5c0  TSDictionaryList::Dictionary::GetFileDateText   (575 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407528. vtable slot 8. Formats the file time with GetDateFormatA
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
  
  __InitExceptBlockLDTC(0x4ebfe8);
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
  FUN_004cfad4((int)local_14,uVar1,0,(uint)local_474,(uint)pcVar2,0,(uint)pcVar2);
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
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
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
      if (iVar3 != 0) goto LAB_0040c7e4;
    }
    local_70 = local_c + -3;
    local_74 = local_c + -3;
    operator_delete();
  }
LAB_0040c7e4:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c800  TSDictionaryList::Dictionary::GetDescription   (73 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00407768. vtable slot 9. Returns the header description string (Dictionary+0x2014)
//   also: TSDictionaryList::Dictionary::vf9 [rtti:vtable]
int __cdecl TSDictionaryList::Dictionary::GetDescription(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ec048);
  std::string::string_from_cstr(param_1,(uint *)(param_2 + 0x2014));
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

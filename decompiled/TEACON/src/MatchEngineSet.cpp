// TEACON.exe — application module "MatchEngineSet"
// 22 functions, 0x00411f58..0x00414ab4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411f58  MatchEngineSet::~MatchEngineSet   (243 bytes)   [rtti:dtor destructor]
//   written in code as MatchEngineSet::_dtor
void __cdecl MatchEngineSet::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42e1f0);
  if (param_1 == 0) goto LAB_0041203a;
  FUN_00413e18(param_1);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
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
      if (iVar1 != 0) goto LAB_00412000;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00412000:
  FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  operator_delete();
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0041203a:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041204c  MatchEngineSet::Compile   (5025 bytes)   [notes+analysis]
//   splits the expanded query on & | ! ( ), creates one MatchEngine per leaf and calls MatchEngine::Compile; returns the first leaf's error status
/* WARNING: Removing unreachable block (ram,0x0041209b) */
/* WARNING: Removing unreachable block (ram,0x00412178) */
/* WARNING: Removing unreachable block (ram,0x00412124) */
/* WARNING: Removing unreachable block (ram,0x0041216b) */
/* WARNING: Removing unreachable block (ram,0x0041220f) */
/* WARNING: Removing unreachable block (ram,0x00412228) */
/* WARNING: Removing unreachable block (ram,0x00412233) */
/* WARNING: Removing unreachable block (ram,0x00412257) */
/* WARNING: Removing unreachable block (ram,0x00412241) */
/* WARNING: Removing unreachable block (ram,0x00412250) */
/* WARNING: Removing unreachable block (ram,0x00412249) */
/* WARNING: Removing unreachable block (ram,0x0041225c) */
/* WARNING: Removing unreachable block (ram,0x00412260) */
/* WARNING: Removing unreachable block (ram,0x004122ae) */
/* WARNING: Removing unreachable block (ram,0x00412d0d) */
/* WARNING: Removing unreachable block (ram,0x00412e0e) */
/* WARNING: Removing unreachable block (ram,0x00412dae) */
/* WARNING: Removing unreachable block (ram,0x00412e01) */
/* WARNING: Removing unreachable block (ram,0x00412eb7) */
/* WARNING: Removing unreachable block (ram,0x00412ee1) */
/* WARNING: Removing unreachable block (ram,0x00412eef) */
/* WARNING: Removing unreachable block (ram,0x00412f16) */
/* WARNING: Removing unreachable block (ram,0x00412f00) */
/* WARNING: Removing unreachable block (ram,0x00412f0f) */
/* WARNING: Removing unreachable block (ram,0x00412f08) */
/* WARNING: Removing unreachable block (ram,0x00412f1b) */
/* WARNING: Removing unreachable block (ram,0x00412f1f) */
/* WARNING: Removing unreachable block (ram,0x00412f79) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined1 __cdecl MatchEngineSet::Compile(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_618 [248];
  undefined4 local_520;
  int *local_510;
  int *local_500;
  undefined1 local_4f8 [544];
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  undefined1 *local_2c8;
  undefined4 local_2c4;
  uint *local_2c0;
  uint *local_2bc;
  uint *local_2b8;
  int local_2b4;
  byte local_2ad;
  int local_2ac;
  byte local_2a5;
  undefined4 *local_2a4;
  undefined4 *local_2a0;
  undefined4 local_29c;
  undefined4 *local_298;
  undefined4 *local_294;
  int *local_290;
  uint local_28c;
  undefined1 local_285 [73];
  int local_23c;
  byte local_235;
  undefined4 *local_234;
  undefined4 *local_230;
  undefined4 local_22c;
  byte local_225;
  uint local_224;
  undefined1 local_21d;
  uint local_21c;
  undefined1 *local_218;
  undefined4 local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_200;
  uint local_1fc;
  undefined1 *local_1f8;
  int *local_1f4;
  int *local_1f0;
  uint local_1ec;
  int *local_1e8;
  undefined1 *local_1e4;
  int *local_1e0;
  undefined4 local_1dc;
  uint *local_1d0;
  uint local_1cc;
  undefined1 *local_1c8;
  undefined4 local_1c4;
  int *local_1c0;
  int *local_1bc;
  int *local_1b8;
  int *local_1b4;
  int *local_1b0;
  uint local_1ac;
  undefined1 *local_1a8;
  int *local_1a4;
  int *local_1a0;
  uint local_19c;
  int *local_198;
  undefined1 *local_194;
  int *local_190;
  undefined4 local_18c;
  uint *local_180;
  uint *local_17c;
  int local_178;
  uint *local_174;
  int local_170;
  char local_169;
  int local_168;
  uint local_164;
  uint *local_160;
  uint local_15c;
  uint *local_158;
  int local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  byte local_13d;
  int local_13c;
  char *local_138;
  uint local_134;
  uint local_e8;
  uint local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined2 local_cc;
  int local_c0;
  int *local_b8;
  undefined1 local_8c [8];
  int *local_84;
  undefined1 local_7c [8];
  int *local_74;
  undefined **local_6c [2];
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x42e2f8);
  FUN_00413e18(param_1);
  local_e0 = 0;
  local_e4 = 0;
  uVar5 = local_e4;
  do {
    while( true ) {
      uVar4 = (*(uint *)&DAT_0042fce8);
      local_e8 = uVar5;
      if (uVar5 <= *(uint *)(*(int *)(param_4 + 8) + -4)) {
        local_138 = (char *)(*(int *)(param_4 + 8) + uVar5);
        iVar3 = FUN_0041f118(local_138,&DAT_0042e040);
        local_134 = iVar3 + local_e8;
        uVar4 = local_134;
        if (*(uint *)(*(int *)(param_4 + 8) + -4) <= local_134) {
          uVar4 = (*(uint *)&DAT_0042fce8);
        }
      }
      if (((uVar4 == (*(uint *)&DAT_0042fce8)) || (uVar4 == 0)) ||
         (local_13c = uVar4 - 1, *(char *)(*(int *)(param_4 + 8) + local_13c) != '\\')) break;
      uVar5 = uVar4 + 1;
    }
    local_cc = 0x50;
    uVar5 = (*(uint *)&DAT_0042fce8);
    if (uVar4 != (*(uint *)&DAT_0042fce8)) {
      uVar5 = uVar4 - local_e4;
    }
    FUN_0041b368((int)local_14,param_4,local_e4,uVar5);
    local_c0 = local_c0 + 1;
    local_cc = 0x44;
    local_13d = 3;
    if (uVar4 != (*(uint *)&DAT_0042fce8)) {
      if (*(char *)(*(int *)(param_4 + 8) + uVar4) == '&') {
        local_13d = 2;
      }
      else {
        local_13d = 1;
      }
      local_e4 = uVar4 + 1;
      local_144 = uVar4;
    }
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    for (uVar5 = 0; uVar5 < local_c[-1]; uVar5 = uVar5 + 1) {
      if (uVar5 == 0) {
LAB_0041245b:
        local_15c = uVar5;
        if (1 < (int)(local_c[-3] + 1)) {
          FUN_0041a7fc((int)local_14);
        }
        local_160 = local_c + -3;
        if (local_160 != &DAT_0042fab4) {
          *local_160 = 0xffffffff;
        }
        cVar1 = *(char *)((int)local_c + local_15c);
        local_cc = 0x44;
        if (cVar1 == '(') {
          local_14c = local_14c + 1;
        }
        else if (cVar1 == ')') {
          local_150 = local_150 + 1;
        }
        else if (cVar1 == '!') {
          local_148 = local_14c;
        }
      }
      else {
        local_154 = uVar5 - 1;
        if (1 < (int)(local_c[-3] + 1)) {
          FUN_0041a7fc((int)local_14);
        }
        local_158 = local_c + -3;
        if (local_158 != &DAT_0042fab4) {
          *local_158 = 0xffffffff;
        }
        if (*(char *)((int)local_c + local_154) != '\\') goto LAB_0041245b;
      }
    }
    local_164 = local_150;
    if (local_14c < local_150) {
      local_164 = local_14c;
    }
    local_cc = 0x44;
    if (local_14c - local_164 < local_148) {
      local_164 = local_14c - local_148;
    }
    local_14c = local_14c - local_164;
    local_150 = local_150 - local_164;
    local_168 = 0;
    while (uVar5 = local_c[-1], uVar5 != 0) {
      local_170 = uVar5 - 1;
      if (1 < (int)(local_c[-3] + 1)) {
        FUN_0041a7fc((int)local_14);
      }
      local_174 = local_c + -3;
      if (local_174 != &DAT_0042fab4) {
        *local_174 = 0xffffffff;
      }
      local_169 = *(char *)((int)local_c + local_170);
      local_cc = 0x44;
      if ((local_150 == 0) || (local_169 != ')')) {
LAB_00412635:
        if (local_169 != ' ') break;
      }
      else {
        if (uVar5 != 1) {
          local_178 = uVar5 - 2;
          if (1 < (int)(local_c[-3] + 1)) {
            FUN_0041a7fc((int)local_14);
          }
          local_17c = local_c + -3;
          if (local_17c != &DAT_0042fab4) {
            *local_17c = 0xffffffff;
          }
          if (*(char *)((int)local_c + local_178) == '\\') goto LAB_00412635;
        }
        local_168 = local_168 + 1;
        local_150 = local_150 + -1;
      }
      uVar5 = uVar5 - 1;
      if ((*(uint *)&DAT_0042fce8) - 0xe < uVar5) {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar7 = &LAB_00405f50;
        uVar6 = 0;
        local_cc = 0x68;
        local_180 = (uint *)FUN_0041ea4c(local_4f8,PTR_s_invalid_string_size_parameter_in_00431a78);
        std::string::string_from_cstr((int)local_7c,local_180);
        local_c0 = local_c0 + 2;
        local_54[0] = &std::logic_error::vftable;
        local_18c = 0;
        local_44 = (int *)0x0;
        local_cc = 0x74;
        if (local_74[-3] == -1 || local_74[-3] + 1 < 0) {
          local_19c = local_74[-1];
          local_1a4 = std::string::__getRep(local_4c,local_19c,local_19c);
          local_1a8 = local_4c;
          local_510 = local_1a4 + 3;
          local_1ac = local_19c;
          local_1b0 = local_74;
          local_1b4 = local_510;
          local_1a0 = local_510;
          local_44 = local_510;
          memcpy(local_510,local_74,local_19c);
        }
        else {
          local_194 = local_4c;
          local_190 = local_74;
          local_44 = local_74;
          local_500 = local_74;
          local_198 = local_74 + -3;
          if (local_198 != &DAT_0042fab4) {
            *local_198 = *local_198 + 1;
          }
        }
        local_cc = 0x68;
        local_54[0] = &std::length_error::vftable;
        local_c0 = local_c0 + 2;
        if (local_74 != (int *)0x0) {
          if (local_74[-3] != -1) {
            local_1b8 = local_74 + -3;
            if (local_1b8 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_1b8 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_1b8 = *local_1b8 + -1;
              iVar3 = *local_1b8 + 1;
            }
            if (iVar3 != 0) goto LAB_0041289c;
          }
          local_1bc = local_74 + -3;
          local_1c0 = local_74 + -3;
          operator_delete();
          local_1c4 = 0;
          local_1c8 = local_7c;
          local_74 = (int *)0x0;
          local_520 = 0;
        }
LAB_0041289c:
        local_cc = 0x5c;
        FUN_004280a0((uint *)&DAT_00405ef4,(undefined4*)local_54,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
      }
      if (uVar5 < local_c[-1]) {
        local_1cc = local_c[-1] - uVar5;
        if (local_c[-1] < uVar5) {
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 1;
          puVar7 = &LAB_004060a8;
          uVar6 = 0;
          local_cc = 0x98;
          local_1d0 = (uint *)FUN_0041ea4c(local_618,PTR_s_string_index_out_of_range_in_fun_00431a84
                                          );
          std::string::string_from_cstr((int)local_8c,local_1d0);
          local_c0 = local_c0 + 2;
          local_6c[0] = &std::logic_error::vftable;
          local_1dc = 0;
          local_5c = (int *)0x0;
          local_cc = 0xa4;
          if (local_84[-3] == -1 || local_84[-3] + 1 < 0) {
            local_1ec = local_84[-1];
            local_1f4 = std::string::__getRep(local_64,local_1ec,local_1ec);
            local_1f8 = local_64;
            local_204 = local_1f4 + 3;
            local_1fc = local_1ec;
            local_200 = local_84;
            local_1f0 = local_204;
            local_5c = local_204;
            memcpy(local_204,local_84,local_1ec);
          }
          else {
            local_1e4 = local_64;
            local_1e0 = local_84;
            local_5c = local_84;
            local_1e8 = local_84 + -3;
            if (local_1e8 != &DAT_0042fab4) {
              *local_1e8 = *local_1e8 + 1;
            }
          }
          local_cc = 0x98;
          local_6c[0] = &std::out_of_range::vftable;
          local_c0 = local_c0 + 2;
          if (local_84 != (int *)0x0) {
            if (local_84[-3] != -1) {
              local_208 = local_84 + -3;
              if (local_208 == &DAT_0042fab4) {
                iVar3 = 1;
              }
              else if (local_208 == &DAT_0042fab4) {
                iVar3 = 1;
              }
              else {
                *local_208 = *local_208 + -1;
                iVar3 = *local_208 + 1;
              }
              if (iVar3 != 0) goto LAB_00412b21;
            }
            local_20c = local_84 + -3;
            local_210 = local_84 + -3;
            operator_delete();
            local_214 = 0;
            local_218 = local_8c;
            local_84 = (int *)0x0;
          }
LAB_00412b21:
          local_cc = 0x5c;
          FUN_004280a0((uint *)&DAT_0040604c,(undefined4*)local_6c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
        }
        local_21c = local_c[-1] - uVar5;
        local_21d = 0;
        local_224 = local_21c;
        if (local_1cc < local_21c) {
          local_224 = local_1cc;
        }
        FUN_00417320((int)local_14,uVar5,local_224,(uint)&local_21d,0,0,0);
      }
      else {
        std::string::replace_fill((int)local_14,local_c[-1],0,uVar5 - local_c[-1],0);
      }
      if (local_c + -3 != &DAT_0042fab4) {
        local_c[-3] = 0;
      }
    }
    local_225 = 0;
    local_cc = 0x44;
    while (local_c[-1] != 0) {
      if (1 < (int)(local_c[-3] + 1)) {
        FUN_0041a7fc((int)local_14);
      }
      if (local_c + -3 != &DAT_0042fab4) {
        local_c[-3] = 0xffffffff;
      }
      cVar1 = (char)*local_c;
      local_cc = 0x44;
      if ((local_14c == 0) || (cVar1 != '(')) {
        if (cVar1 == '!') {
          local_225 = local_225 ^ 8;
        }
        else if (cVar1 != ' ') break;
      }
      else {
        local_22c = 0;
        if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x18)) {
          FUN_004134dc(param_1,*(undefined4 **)(param_1 + 8),&local_22c);
        }
        else {
          local_234 = *(undefined4 **)(param_1 + 8);
          *local_234 = 0;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
          local_230 = local_234;
        }
        local_235 = local_225 | 4;
        local_23c = param_1 + 0x20;
        std::string::replace_fill(local_23c,*(uint *)(*(int *)(param_1 + 0x28) + -4),0,1,local_225 | 4);
        local_e0 = local_e0 + 1;
        local_225 = 0;
        local_14c = local_14c + -1;
      }
      local_28c = local_c[-1];
      local_285[0] = 0;
      if (1 < local_28c) {
        local_28c = 1;
      }
      FUN_00417320((int)local_14,0,local_28c,(uint)local_285,0,0,0);
    }
    local_b8 = (int *)operator_new();
    if (local_b8 != (int *)0x0) {
      local_cc = 0x110;
      MatchEngine::MatchEngine(local_b8);
    }
    local_cc = 0x44;
    local_290 = local_b8;
    MatchEngine::SetShortest((int)local_b8,param_5);
    MatchEngine::SetLongest((int)local_290,param_6);
    MatchEngine::Compile(local_290,param_2,param_3,local_c,param_7);
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x18)) {
      FUN_004134dc(param_1,*(undefined4 **)(param_1 + 8),(undefined4*)&local_290);
    }
    else {
      local_298 = *(undefined4 **)(param_1 + 8);
      *local_298 = local_290;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
      local_294 = local_298;
    }
    if (0x1f < local_e0) {
      local_e0 = 0x10000;
    }
    local_e0 = local_e0 - local_168;
    if (local_e0 < 0) {
      local_e0 = -0x10000;
    }
    for (; local_168 != 0; local_168 = local_168 + -1) {
      local_29c = 0;
      if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x18)) {
        FUN_004134dc(param_1,*(undefined4 **)(param_1 + 8),&local_29c);
      }
      else {
        local_2a4 = *(undefined4 **)(param_1 + 8);
        *local_2a4 = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
        local_2a0 = local_2a4;
      }
      local_2a5 = local_225 | 5;
      local_2ac = param_1 + 0x20;
      std::string::replace_fill(local_2ac,*(uint *)(*(int *)(param_1 + 0x28) + -4),0,1,local_225 | 5);
      local_225 = 0;
    }
    local_2ad = local_13d | local_225;
    local_2b4 = param_1 + 0x20;
    local_13d = local_2ad;
    std::string::replace_fill(local_2b4,*(uint *)(*(int *)(param_1 + 0x28) + -4),0,1,local_2ad);
    local_c0 = local_c0 + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        local_2b8 = local_c + -3;
        if (local_2b8 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (local_2b8 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *local_2b8 = *local_2b8 - 1;
          iVar3 = *local_2b8 + 1;
        }
        if (iVar3 != 0) goto LAB_004132c1;
      }
      local_2bc = local_c + -3;
      local_2c0 = local_c + -3;
      operator_delete();
      local_2c4 = 0;
      local_2c8 = local_14;
      local_c = (uint *)0x0;
    }
LAB_004132c1:
    local_cc = 0;
    uVar5 = local_e4;
    if (uVar4 == (*(uint *)&DAT_0042fce8)) {
      if (local_e0 < 1) {
        if (-1 < local_e0) {
          local_2cc = 0;
          while( true ) {
            iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
            if (iVar3 < 0) {
              iVar3 = iVar3 + 3;
            }
            if ((uint)(iVar3 >> 2) <= local_2cc) break;
            local_2d0 = local_2cc;
            if (*(int *)(*(int *)(param_1 + 4) + local_2cc * 4) != 0) {
              local_2d4 = local_2cc;
              iVar3 = MatchEngine::IsValid(*(int *)(*(int *)(param_1 + 4) + local_2cc * 4));
              if (iVar3 == 0) {
                local_2d8 = local_2cc;
                uVar2 = MatchEngine::GetStatus(*(int *)(*(int *)(param_1 + 4) + local_2cc * 4));
                *(undefined1 *)(param_1 + 0x30) = uVar2;
                *in_FS_OFFSET = local_dc;
                return uVar2;
              }
            }
            local_2cc = local_2cc + 1;
          }
          *(undefined1 *)(param_1 + 0x30) = 0;
          *in_FS_OFFSET = local_dc;
          return 0;
        }
        *(undefined1 *)(param_1 + 0x30) = 8;
        uVar2 = 8;
        *in_FS_OFFSET = local_dc;
      }
      else {
        *(undefined1 *)(param_1 + 0x30) = 7;
        uVar2 = 7;
        *in_FS_OFFSET = local_dc;
      }
      return uVar2;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004133f0  FUN_004133f0   (236 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004133f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42e6ec);
  *param_1 = &std::exception::vftable;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    piVar3 = std::string::__getRep(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    memcpy((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_0042fab4) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *param_1 = &std::logic_error::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004134dc  FUN_004134dc   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004134dc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x42e450);
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
    FUN_004136d8(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004136d8(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004136b4(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004136b4  FUN_004136b4   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004136b4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004136d8  FUN_004136d8   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004136d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42e490);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413758  FUN_00413758   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00413758(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413770  FUN_00413770   (146 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00413770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 1;
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  uVar3 = iVar2 >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + uVar4 * 4);
      if (iVar2 != 0) {
        iVar1 = MatchEngine::GetMinLength(iVar2);
        if (iVar1 <= param_2) {
          iVar2 = MatchEngine::GetMaxLength(iVar2);
          if (param_2 <= iVar2) {
            MatchEngine::SetWordLength(*(int *)(*(int *)(param_1 + 4) + uVar4 * 4),param_2);
            goto LAB_004137f2;
          }
        }
        if (uVar3 == 1) {
          local_8 = 0;
        }
      }
LAB_004137f2:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413804  FUN_00413804   (1439 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00413834) */
/* WARNING: Removing unreachable block (ram,0x00413914) */
/* WARNING: Removing unreachable block (ram,0x004138c0) */
/* WARNING: Removing unreachable block (ram,0x00413907) */
/* WARNING: Removing unreachable block (ram,0x004139ab) */
/* WARNING: Removing unreachable block (ram,0x004139cf) */
/* WARNING: Removing unreachable block (ram,0x004139da) */
/* WARNING: Removing unreachable block (ram,0x004139fe) */
/* WARNING: Removing unreachable block (ram,0x004139e8) */
/* WARNING: Removing unreachable block (ram,0x004139f7) */
/* WARNING: Removing unreachable block (ram,0x004139f0) */
/* WARNING: Removing unreachable block (ram,0x00413a03) */
/* WARNING: Removing unreachable block (ram,0x00413a07) */
/* WARNING: Removing unreachable block (ram,0x00413a55) */
/* WARNING: Removing unreachable block (ram,0x00413a92) */
/* WARNING: Removing unreachable block (ram,0x00413b7a) */
/* WARNING: Removing unreachable block (ram,0x00413b26) */
/* WARNING: Removing unreachable block (ram,0x00413b6d) */
/* WARNING: Removing unreachable block (ram,0x00413c11) */
/* WARNING: Removing unreachable block (ram,0x00413c35) */
/* WARNING: Removing unreachable block (ram,0x00413c40) */
/* WARNING: Removing unreachable block (ram,0x00413c64) */
/* WARNING: Removing unreachable block (ram,0x00413c4e) */
/* WARNING: Removing unreachable block (ram,0x00413c5d) */
/* WARNING: Removing unreachable block (ram,0x00413c56) */
/* WARNING: Removing unreachable block (ram,0x00413c69) */
/* WARNING: Removing unreachable block (ram,0x00413c6d) */
/* WARNING: Removing unreachable block (ram,0x00413cbb) */
void __cdecl FUN_00413804(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_111;
  uint local_110;
  uint local_c4;
  undefined4 local_78;
  
  __InitExceptBlockLDTC(0x42e4f8);
  if (*(int *)(*(int *)(param_3 + 8) + -4) == 0) {
    std::string::replace_fill(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
                 -*(int *)(*(int *)(param_3 + 8) + -4),0);
  }
  else {
    local_c4 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_110 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_111 = 0;
    uVar3 = local_110;
    if (local_c4 < local_110) {
      uVar3 = local_c4;
    }
    FUN_00417320(param_3,0,uVar3,(uint)&local_111,0,0,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar1 != &DAT_0042fab4) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((iVar2 >> 2 == 1) &&
     (MatchEngine::FormatBalance(**(int **)(param_1 + 4),param_3), *(int *)(*(int *)(param_3 + 8) + -4) != 0)) {
    FUN_0041acdc(param_3,0,param_2);
  }
  *in_FS_OFFSET = local_78;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413da4  FUN_00413da4   (115 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00413da4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  
  *param_2 = 0x65;
  *param_3 = 0;
  iVar5 = 1;
  do {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(param_1 + 4);
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0) {
      pbVar3 = (byte *)0x0;
    }
    else {
      pbVar3 = *(byte **)(param_1 + 0x28);
    }
    uVar2 = MatchEngineSet::EvalLogic('\x01',0,iVar5,pbVar3,piVar4);
    if (uVar2 != 0) {
      if (*param_2 == 0x65) {
        *param_2 = iVar5;
      }
      *param_3 = iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x65);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00413e18  FUN_00413e18   (1613 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00413f58) */
/* WARNING: Removing unreachable block (ram,0x0041403d) */
/* WARNING: Removing unreachable block (ram,0x00413fec) */
/* WARNING: Removing unreachable block (ram,0x00414033) */
/* WARNING: Removing unreachable block (ram,0x004140bc) */
/* WARNING: Removing unreachable block (ram,0x004140e0) */
/* WARNING: Removing unreachable block (ram,0x004140eb) */
/* WARNING: Removing unreachable block (ram,0x0041410f) */
/* WARNING: Removing unreachable block (ram,0x004140f9) */
/* WARNING: Removing unreachable block (ram,0x00414108) */
/* WARNING: Removing unreachable block (ram,0x00414101) */
/* WARNING: Removing unreachable block (ram,0x00414114) */
/* WARNING: Removing unreachable block (ram,0x00414118) */
/* WARNING: Removing unreachable block (ram,0x00414166) */
/* WARNING: Removing unreachable block (ram,0x00414199) */
/* WARNING: Removing unreachable block (ram,0x00414282) */
/* WARNING: Removing unreachable block (ram,0x0041422e) */
/* WARNING: Removing unreachable block (ram,0x00414275) */
/* WARNING: Removing unreachable block (ram,0x00414319) */
/* WARNING: Removing unreachable block (ram,0x0041433d) */
/* WARNING: Removing unreachable block (ram,0x00414348) */
/* WARNING: Removing unreachable block (ram,0x0041436c) */
/* WARNING: Removing unreachable block (ram,0x00414356) */
/* WARNING: Removing unreachable block (ram,0x00414365) */
/* WARNING: Removing unreachable block (ram,0x0041435e) */
/* WARNING: Removing unreachable block (ram,0x00414371) */
/* WARNING: Removing unreachable block (ram,0x00414375) */
/* WARNING: Removing unreachable block (ram,0x004143c3) */
void __cdecl FUN_00413e18(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_125;
  uint local_124;
  uint local_d8;
  int local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int *local_80;
  undefined4 local_7c;
  undefined2 local_6c;
  int local_60;
  int local_8;
  
  __InitExceptBlockLDTC(0x42e5d0);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) {
      FUN_00414468(param_1,0);
      local_d8 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
      if (local_d8 == 0) {
        std::string::replace_fill(param_1 + 0x20,0,0,0,0);
      }
      else {
        local_124 = *(uint *)(*(int *)(param_1 + 0x28) + -4);
        local_125 = 0;
        uVar4 = local_124;
        if (local_d8 < local_124) {
          uVar4 = local_d8;
        }
        FUN_00417320(param_1 + 0x20,0,uVar4,(uint)&local_125,0,0,0);
      }
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + -0xc);
      if (puVar1 != &DAT_0042fab4) {
        *puVar1 = 0;
      }
      *in_FS_OFFSET = local_7c;
      return;
    }
    iVar2 = *(int *)(uVar4 * 4 + *(int *)(param_1 + 4));
    local_8 = iVar2;
    if (iVar2 != 0) {
      local_6c = 0x14;
      local_60 = local_60 + -1;
      if (*(int *)(iVar2 + 0x1010) != 0) {
        if (*(int *)(*(int *)(iVar2 + 0x1010) + -0xc) != -1) {
          local_80 = (int *)(*(int *)(iVar2 + 0x1010) + -0xc);
          if (local_80 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else if (local_80 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else {
            *local_80 = *local_80 + -1;
            iVar3 = *local_80 + 1;
          }
          if (iVar3 != 0) goto LAB_00413ef7;
        }
        local_84 = *(int *)(iVar2 + 0x1010) + -0xc;
        local_88 = *(int *)(iVar2 + 0x1010) + -0xc;
        operator_delete();
        local_8c = 0;
        *(undefined4 *)(iVar2 + 0x1010) = 0;
        local_90 = iVar2 + 0x1008;
      }
LAB_00413ef7:
      local_60 = local_60 + -0x101;
      Pattern::_dtor(local_8,2);
      operator_delete();
      local_6c = 8;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00414468  FUN_00414468   (157 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414468(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  if ((uint)(iVar3 >> 2) < param_2) {
    local_8 = 0;
    iVar3 = (int)*(undefined4 **)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00414508(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_0041484c(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_004050b4(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414508  FUN_00414508   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00414508(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x42e698);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - (int)puVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) < param_3) {
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      local_3c = iVar2 >> 2;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar1 = (undefined4 *)operator_new();
      if (puVar1 == (undefined4 *)0x0) {
        local_1c = 8;
        local_8 = &std::bad_alloc::vftable;
        local_10 = local_10 + 2;
        FUN_004280a0((uint *)&DAT_00404c94,(undefined4*)&local_8,0,&LAB_00404cec,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_004136d8(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004147d0(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004136d8(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      operator_delete();
      *(undefined4 **)(param_1 + 0x18) = puVar1 + local_38;
      *(undefined4 **)(param_1 + 8) = puVar1 + (iVar2 >> 2) + param_3;
      *(undefined4 **)(param_1 + 4) = puVar1;
    }
    else {
      iVar2 = (int)puVar1 - (int)param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if (param_3 < (uint)(iVar2 >> 2)) {
        FUN_004136d8(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_004136b4(param_2,puVar1 + -param_3,puVar1);
        FUN_004147b0(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_004147d0(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_004136d8(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_004147b0(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004147b0  FUN_004147b0   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004147b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004147d0  FUN_004147d0   (85 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004147d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42e6d8);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041484c  FUN_0041484c   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0041484c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414870  FUN_00414870   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00414870(byte *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00414888(param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414888  FUN_00414888   (374 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
bool __cdecl FUN_00414888(byte *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  int local_8;
  
  DAT_00434698 = 0;
  _DAT_00434694 = 0;
  for (pbVar4 = PTR_s_TEAWIN_0042e708; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
    FUN_00414a00(*pbVar4,&DAT_00434694,&DAT_0042e700);
  }
  local_8 = 0;
  for (pbVar4 = param_1; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
  }
  while (param_1 < pbVar4) {
    pbVar4 = pbVar4 + -1;
    bVar3 = *pbVar4;
    uVar2 = (uint)bVar3;
    iVar1 = FUN_004225cc((uint)bVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0042428c((uint)bVar3);
    }
    iVar1 = FUN_00422548(uVar2 & 0xff);
    if (iVar1 != 0) {
      local_8 = local_8 + 1;
      FUN_00414a00((byte)uVar2,&DAT_00434694,&DAT_0042e700);
    }
  }
  pbVar4 = param_1;
  pcVar6 = param_2;
  if (0 < local_8) {
    do {
      do {
        while (pbVar5 = pbVar4, *pbVar5 != 0) {
          pbVar4 = pbVar5 + 1;
        }
        pbVar4 = param_1;
      } while (pbVar5 <= param_1);
      do {
        pbVar5 = pbVar5 + -1;
        bVar3 = *pbVar5;
        uVar2 = (uint)bVar3;
        iVar1 = FUN_004225cc((uint)bVar3);
        if (iVar1 != 0) {
          uVar2 = FUN_0042428c((uint)bVar3);
        }
        iVar1 = FUN_00422548(uVar2 & 0xff);
        if (iVar1 != 0) {
          bVar3 = (byte)((char)uVar2 + -0x41 + (char)((ulonglong)DAT_00434698 % 0x1a)) % 0x1a + 0x41
          ;
          if (((uint)bVar3 != (int)*pcVar6) &&
             (uVar2 = FUN_00424238((uint)bVar3), uVar2 != (int)*pcVar6)) {
            return false;
          }
          pcVar6 = pcVar6 + 1;
          FUN_00414a00(bVar3,&DAT_00434694,&DAT_0042e700);
          if (pcVar6 == param_2 + 10) {
            return *pcVar6 == '\0';
          }
        }
      } while (param_1 < pbVar5);
    } while( true );
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a00  FUN_00414a00   (129 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00414a00(byte param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int local_c;
  
  local_c = 0;
  do {
    bVar1 = *param_2;
    uVar5 = 0;
    iVar2 = 7;
    pbVar3 = param_2 + 7;
    do {
      uVar5 = (uint)*pbVar3 * 2 + (uint)(uVar5 != 0);
      iVar2 = iVar2 + -1;
      *pbVar3 = (byte)uVar5;
      pbVar3 = pbVar3 + -1;
      uVar5 = uVar5 & 0x100;
    } while (-1 < iVar2);
    if (((bVar1 ^ param_1) & 0x80) != 0) {
      iVar2 = 0;
      pbVar3 = param_3;
      pbVar4 = param_2;
      do {
        *pbVar4 = *pbVar4 ^ *pbVar3;
        iVar2 = iVar2 + 1;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (iVar2 < 8);
    }
    param_1 = param_1 << 1;
    local_c = local_c + 1;
  } while (local_c < 8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a84  FUN_00414a84   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00414a84(byte *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00414888(param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a9c  FUN_00414a9c   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00414a9c(byte *param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_00414888(param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00414ab4  FUN_00414ab4   (784 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00414afb) */
/* WARNING: Removing unreachable block (ram,0x00414b9f) */
/* WARNING: Removing unreachable block (ram,0x00414c60) */
/* WARNING: Removing unreachable block (ram,0x00414c28) */
/* WARNING: Removing unreachable block (ram,0x00414c59) */
/* WARNING: Removing unreachable block (ram,0x00414cbb) */
/* WARNING: Removing unreachable block (ram,0x00414cdf) */
/* WARNING: Removing unreachable block (ram,0x00414cea) */
/* WARNING: Removing unreachable block (ram,0x00414d0e) */
/* WARNING: Removing unreachable block (ram,0x00414cf8) */
/* WARNING: Removing unreachable block (ram,0x00414d07) */
/* WARNING: Removing unreachable block (ram,0x00414d00) */
/* WARNING: Removing unreachable block (ram,0x00414d13) */
/* WARNING: Removing unreachable block (ram,0x00414d17) */
/* WARNING: Removing unreachable block (ram,0x00414d65) */
int __cdecl FUN_00414ab4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  uint local_1cc [67];
  undefined4 local_c0;
  undefined1 local_b5 [101];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  
  __InitExceptBlockLDTC(0x42e7a4);
  local_40 = 8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 8) = &DAT_0042fac0;
  local_c0 = *(undefined4 *)(param_1 + 8);
  local_34 = local_34 + 1;
  iVar2 = import_SHGetFolderPathA();
  if (iVar2 == 0) {
    FUN_00416c68(param_1,local_1cc);
    std::string::append(param_1,param_2);
    iVar2 = thunk_FUN_0041ffa0(*(LPCSTR *)(param_1 + 8),0);
    if (iVar2 == 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      pcVar3 = strlen((uint *)"\\common.ini");
      FUN_00417320(param_1,uVar1,0,0x42e734,(uint)pcVar3,0,(uint)pcVar3);
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_b5[0] = 0;
      uVar4 = (*(uint *)&DAT_0042fce8);
      if (uVar1 <= (*(uint *)&DAT_0042fce8)) {
        uVar4 = uVar1;
      }
      FUN_00417320(param_1,0,uVar4,(uint)local_b5,0,0,0);
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

} // namespace tea

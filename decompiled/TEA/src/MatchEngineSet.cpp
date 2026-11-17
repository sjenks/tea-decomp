// TEA.exe — application module "MatchEngineSet"
// 28 functions, 0x00477d64..0x0047ab54. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00477d64  MatchEngineSet::~MatchEngineSet   (243 bytes)   [rtti:dtor destructor]
//   written in code as MatchEngineSet::_dtor
void __cdecl MatchEngineSet::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5008c0);
  if (param_1 == 0) goto LAB_00477e46;
  FUN_0047a0fc(param_1);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
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
      if (iVar1 != 0) goto LAB_00477e0c;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00477e0c:
  FUN_0045f0c4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  operator_delete();
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00477e46:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00477e58  MatchEngineSet::Compile   (5016 bytes)   [notes+analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). Splits the query on & | ! ( ) and compiles one MatchEngine per leaf
/* WARNING: Removing unreachable block (ram,0x00477ea7) */
/* WARNING: Removing unreachable block (ram,0x00477f84) */
/* WARNING: Removing unreachable block (ram,0x00477f30) */
/* WARNING: Removing unreachable block (ram,0x00477f77) */
/* WARNING: Removing unreachable block (ram,0x0047801b) */
/* WARNING: Removing unreachable block (ram,0x00478034) */
/* WARNING: Removing unreachable block (ram,0x0047803f) */
/* WARNING: Removing unreachable block (ram,0x00478063) */
/* WARNING: Removing unreachable block (ram,0x0047804d) */
/* WARNING: Removing unreachable block (ram,0x0047805c) */
/* WARNING: Removing unreachable block (ram,0x00478055) */
/* WARNING: Removing unreachable block (ram,0x00478068) */
/* WARNING: Removing unreachable block (ram,0x0047806c) */
/* WARNING: Removing unreachable block (ram,0x004780ba) */
/* WARNING: Removing unreachable block (ram,0x00478b0d) */
/* WARNING: Removing unreachable block (ram,0x00478c0e) */
/* WARNING: Removing unreachable block (ram,0x00478bae) */
/* WARNING: Removing unreachable block (ram,0x00478c01) */
/* WARNING: Removing unreachable block (ram,0x00478cb7) */
/* WARNING: Removing unreachable block (ram,0x00478ce1) */
/* WARNING: Removing unreachable block (ram,0x00478cef) */
/* WARNING: Removing unreachable block (ram,0x00478d16) */
/* WARNING: Removing unreachable block (ram,0x00478d00) */
/* WARNING: Removing unreachable block (ram,0x00478d0f) */
/* WARNING: Removing unreachable block (ram,0x00478d08) */
/* WARNING: Removing unreachable block (ram,0x00478d1b) */
/* WARNING: Removing unreachable block (ram,0x00478d1f) */
/* WARNING: Removing unreachable block (ram,0x00478d79) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl MatchEngineSet::Compile(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  
  __InitExceptBlockLDTC(0x5009c8);
  FUN_0047a0fc(param_1);
  local_e0 = 0;
  local_e4 = 0;
  uVar4 = local_e4;
  do {
    while( true ) {
      uVar5 = DAT_005140ac;
      local_e8 = uVar4;
      if (uVar4 <= *(uint *)(*(int *)(param_4 + 8) + -4)) {
        local_138 = (char *)(*(int *)(param_4 + 8) + uVar4);
        iVar2 = FUN_004dcb98(local_138,&DAT_005007e4);
        local_134 = iVar2 + local_e8;
        uVar5 = local_134;
        if (*(uint *)(*(int *)(param_4 + 8) + -4) <= local_134) {
          uVar5 = DAT_005140ac;
        }
      }
      if (((uVar5 == 0xffffffff) || (uVar5 == 0)) ||
         (local_13c = uVar5 - 1, *(char *)(*(int *)(param_4 + 8) + local_13c) != '\\')) break;
      uVar4 = uVar5 + 1;
    }
    local_cc = 0x50;
    if (uVar5 == 0xffffffff) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = uVar5 - local_e4;
    }
    FUN_004d6118((int)local_14,param_4,local_e4,uVar4);
    local_c0 = local_c0 + 1;
    local_cc = 0x44;
    local_13d = 3;
    if (uVar5 != 0xffffffff) {
      if (*(char *)(*(int *)(param_4 + 8) + uVar5) == '&') {
        local_13d = 2;
      }
      else {
        local_13d = 1;
      }
      local_e4 = uVar5 + 1;
      local_144 = uVar5;
    }
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    for (uVar4 = 0; uVar4 < local_c[-1]; uVar4 = uVar4 + 1) {
      if (uVar4 == 0) {
LAB_0047825b:
        local_15c = uVar4;
        if (1 < (int)(local_c[-3] + 1)) {
          FUN_004d48d8((int)local_14);
        }
        local_160 = local_c + -3;
        if (local_160 != &DAT_00513d58) {
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
        local_154 = uVar4 - 1;
        if (1 < (int)(local_c[-3] + 1)) {
          FUN_004d48d8((int)local_14);
        }
        local_158 = local_c + -3;
        if (local_158 != &DAT_00513d58) {
          *local_158 = 0xffffffff;
        }
        if (*(char *)((int)local_c + local_154) != '\\') goto LAB_0047825b;
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
    while (uVar4 = local_c[-1], uVar4 != 0) {
      local_170 = uVar4 - 1;
      if (1 < (int)(local_c[-3] + 1)) {
        FUN_004d48d8((int)local_14);
      }
      local_174 = local_c + -3;
      if (local_174 != &DAT_00513d58) {
        *local_174 = 0xffffffff;
      }
      local_169 = *(char *)((int)local_c + local_170);
      local_cc = 0x44;
      if ((local_150 == 0) || (local_169 != ')')) {
LAB_00478435:
        if (local_169 != ' ') break;
      }
      else {
        if (uVar4 != 1) {
          local_178 = uVar4 - 2;
          if (1 < (int)(local_c[-3] + 1)) {
            FUN_004d48d8((int)local_14);
          }
          local_17c = local_c + -3;
          if (local_17c != &DAT_00513d58) {
            *local_17c = 0xffffffff;
          }
          if (*(char *)((int)local_c + local_178) == '\\') goto LAB_00478435;
        }
        local_168 = local_168 + 1;
        local_150 = local_150 + -1;
      }
      uVar4 = uVar4 - 1;
      if (DAT_005140ac - 0xe < uVar4) {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        puVar6 = &LAB_00408370;
        uVar3 = 0;
        local_cc = 0x68;
        local_180 = (uint *)FUN_004dc320(local_4f8,PTR_s_invalid_string_size_parameter_in_00516d20);
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
          if (local_198 != &DAT_00513d58) {
            *local_198 = *local_198 + 1;
          }
        }
        local_cc = 0x68;
        local_54[0] = &std::length_error::vftable;
        local_c0 = local_c0 + 2;
        if (local_74 != (int *)0x0) {
          if (local_74[-3] != -1) {
            local_1b8 = local_74 + -3;
            if (local_1b8 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1b8 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1b8 = *local_1b8 + -1;
              iVar2 = *local_1b8 + 1;
            }
            if (iVar2 != 0) goto LAB_0047869c;
          }
          local_1bc = local_74 + -3;
          local_1c0 = local_74 + -3;
          operator_delete();
          local_1c4 = 0;
          local_1c8 = local_7c;
          local_74 = (int *)0x0;
          local_520 = 0;
        }
LAB_0047869c:
        local_cc = 0x5c;
        FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_54,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
      }
      if (uVar4 < local_c[-1]) {
        local_1cc = local_c[-1] - uVar4;
        if (local_c[-1] < uVar4) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_004084c8;
          uVar3 = 0;
          local_cc = 0x98;
          local_1d0 = (uint *)FUN_004dc320(local_618,PTR_s_string_index_out_of_range_in_fun_00516d2c
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
            if (local_1e8 != &DAT_00513d58) {
              *local_1e8 = *local_1e8 + 1;
            }
          }
          local_cc = 0x98;
          local_6c[0] = &std::out_of_range::vftable;
          local_c0 = local_c0 + 2;
          if (local_84 != (int *)0x0) {
            if (local_84[-3] != -1) {
              local_208 = local_84 + -3;
              if (local_208 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_208 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_208 = *local_208 + -1;
                iVar2 = *local_208 + 1;
              }
              if (iVar2 != 0) goto LAB_00478921;
            }
            local_20c = local_84 + -3;
            local_210 = local_84 + -3;
            operator_delete();
            local_214 = 0;
            local_218 = local_8c;
            local_84 = (int *)0x0;
          }
LAB_00478921:
          local_cc = 0x5c;
          FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_6c,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        local_21c = local_c[-1] - uVar4;
        local_21d = 0;
        local_224 = local_21c;
        if (local_1cc < local_21c) {
          local_224 = local_1cc;
        }
        FUN_004cfad4((int)local_14,uVar4,local_224,(uint)&local_21d,0,0,0);
      }
      else {
        std::string::replace_fill((int)local_14,local_c[-1],0,uVar4 - local_c[-1],0);
      }
      if (local_c + -3 != &DAT_00513d58) {
        local_c[-3] = 0;
      }
    }
    local_225 = 0;
    local_cc = 0x44;
    while (local_c[-1] != 0) {
      if (1 < (int)(local_c[-3] + 1)) {
        FUN_004d48d8((int)local_14);
      }
      if (local_c + -3 != &DAT_00513d58) {
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
          FUN_004791f0(param_1,*(undefined4 **)(param_1 + 8),&local_22c);
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
      FUN_004cfad4((int)local_14,0,local_28c,(uint)local_285,0,0,0);
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
      FUN_004791f0(param_1,*(undefined4 **)(param_1 + 8),(undefined4*)&local_290);
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
        FUN_004791f0(param_1,*(undefined4 **)(param_1 + 8),&local_29c);
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
        if (local_2b8 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_2b8 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_2b8 = *local_2b8 - 1;
          iVar2 = *local_2b8 + 1;
        }
        if (iVar2 != 0) goto LAB_004790c1;
      }
      local_2bc = local_c + -3;
      local_2c0 = local_c + -3;
      operator_delete();
      local_2c4 = 0;
      local_2c8 = local_14;
      local_c = (uint *)0x0;
    }
LAB_004790c1:
    local_cc = 0;
    uVar4 = local_e4;
    if (uVar5 == 0xffffffff) {
      if (local_e0 < 1) {
        if (-1 < local_e0) {
          local_2cc = 0;
          while( true ) {
            iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
            if (iVar2 < 0) {
              iVar2 = iVar2 + 3;
            }
            if ((uint)(iVar2 >> 2) <= local_2cc) break;
            local_2d0 = local_2cc;
            if (*(int *)(*(int *)(param_1 + 4) + local_2cc * 4) != 0) {
              local_2d4 = local_2cc;
              iVar2 = MatchEngine::IsValid(*(int *)(*(int *)(param_1 + 4) + local_2cc * 4));
              if (iVar2 == 0) {
                local_2d8 = local_2cc;
                uVar3 = MatchEngine::GetStatus(*(int *)(*(int *)(param_1 + 4) + local_2cc * 4));
                *(undefined4 *)(param_1 + 0x30) = uVar3;
                *in_FS_OFFSET = local_dc;
                return uVar3;
              }
            }
            local_2cc = local_2cc + 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 0;
          *in_FS_OFFSET = local_dc;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x30) = 8;
        uVar3 = 8;
        *in_FS_OFFSET = local_dc;
      }
      else {
        *(undefined4 *)(param_1 + 0x30) = 7;
        uVar3 = 7;
        *in_FS_OFFSET = local_dc;
      }
      return uVar3;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004791f0  FUN_004791f0   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004791f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x500b20);
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
    FUN_004793ec(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004793ec(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0045f0c4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004793c8(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004793c8  FUN_004793c8   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004793c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004793ec  FUN_004793ec   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004793ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x500b60);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047946c  FUN_0047946c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047946c(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479484  FUN_00479484   (146 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00479484(int param_1,int param_2)

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
            goto LAB_00479506;
          }
        }
        if (uVar3 == 1) {
          local_8 = 0;
        }
      }
LAB_00479506:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479518  FUN_00479518   (1439 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00479548) */
/* WARNING: Removing unreachable block (ram,0x00479628) */
/* WARNING: Removing unreachable block (ram,0x004795d4) */
/* WARNING: Removing unreachable block (ram,0x0047961b) */
/* WARNING: Removing unreachable block (ram,0x004796bf) */
/* WARNING: Removing unreachable block (ram,0x004796e3) */
/* WARNING: Removing unreachable block (ram,0x004796ee) */
/* WARNING: Removing unreachable block (ram,0x00479712) */
/* WARNING: Removing unreachable block (ram,0x004796fc) */
/* WARNING: Removing unreachable block (ram,0x0047970b) */
/* WARNING: Removing unreachable block (ram,0x00479704) */
/* WARNING: Removing unreachable block (ram,0x00479717) */
/* WARNING: Removing unreachable block (ram,0x0047971b) */
/* WARNING: Removing unreachable block (ram,0x00479769) */
/* WARNING: Removing unreachable block (ram,0x004797a6) */
/* WARNING: Removing unreachable block (ram,0x0047988e) */
/* WARNING: Removing unreachable block (ram,0x0047983a) */
/* WARNING: Removing unreachable block (ram,0x00479881) */
/* WARNING: Removing unreachable block (ram,0x00479925) */
/* WARNING: Removing unreachable block (ram,0x00479949) */
/* WARNING: Removing unreachable block (ram,0x00479954) */
/* WARNING: Removing unreachable block (ram,0x00479978) */
/* WARNING: Removing unreachable block (ram,0x00479962) */
/* WARNING: Removing unreachable block (ram,0x00479971) */
/* WARNING: Removing unreachable block (ram,0x0047996a) */
/* WARNING: Removing unreachable block (ram,0x0047997d) */
/* WARNING: Removing unreachable block (ram,0x00479981) */
/* WARNING: Removing unreachable block (ram,0x004799cf) */
void __cdecl FUN_00479518(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_111;
  uint local_110;
  uint local_c4;
  undefined4 local_78;
  
  __InitExceptBlockLDTC(0x500bc8);
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
    FUN_004cfad4(param_3,0,uVar3,(uint)&local_111,0,0,0);
  }
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar1 != &DAT_00513d58) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((iVar2 >> 2 == 1) &&
     (MatchEngine::FormatBalance(**(int **)(param_1 + 4),param_3), *(int *)(*(int *)(param_3 + 8) + -4) != 0)) {
    FUN_004d5a8c(param_3,0,param_2);
  }
  *in_FS_OFFSET = local_78;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479ab8  FUN_00479ab8   (80 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00479ab8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    iVar1 = *(int *)(uVar2 * 4 + *(int *)(param_1 + 4));
    if (iVar1 != 0) {
      MatchEngine::SetShortest(iVar1,param_2);
      MatchEngine::SetLongest(iVar1,param_3);
    }
    uVar2 = uVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479b08  FUN_00479b08   (115 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00479b08(int param_1,int *param_2,int *param_3)

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
    uVar2 = MatchEngineSet::EvalLogic(1,0,iVar5,pbVar3,piVar4);
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
// 0x00479b7c  FUN_00479b7c   (87 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00479b7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    iVar1 = *(int *)(uVar3 * 4 + *(int *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar1 = MatchEngine::GetLengthKind(iVar1);
      local_8 = local_8 + iVar1;
    }
    uVar3 = uVar3 + 1;
  }
  if (local_8 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479bd4  FUN_00479bd4   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00479bd4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  FUN_00479c14(param_2,iVar1 >> 2);
  FUN_0047a0d8(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),
               *(undefined4 **)(param_2 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479c14  FUN_00479c14   (157 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00479c14(int param_1,uint param_2)

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
    FUN_00479cb4(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_0047a0b4(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_00410d88(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479cb4  FUN_00479cb4   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00479cb4(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

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
  
  __InitExceptBlockLDTC(0x500c6c);
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
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_00479f5c(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0047a038(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_00479f5c(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_00410d88(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
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
        FUN_00479f5c(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_00479ff4(param_2,puVar1 + -param_3,puVar1);
        FUN_0047a018(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_0047a038(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_00479f5c(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_0047a018(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479f5c  FUN_00479f5c   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00479f5c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x500cac);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479fdc  FUN_00479fdc   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00479fdc(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00479ff4  FUN_00479ff4   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00479ff4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a018  FUN_0047a018   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047a018(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a038  FUN_0047a038   (85 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047a038(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x500ce0);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a0b4  FUN_0047a0b4   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0047a0b4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a0d8  FUN_0047a0d8   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0047a0d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a0fc  FUN_0047a0fc   (1613 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047a23c) */
/* WARNING: Removing unreachable block (ram,0x0047a321) */
/* WARNING: Removing unreachable block (ram,0x0047a2d0) */
/* WARNING: Removing unreachable block (ram,0x0047a317) */
/* WARNING: Removing unreachable block (ram,0x0047a3a0) */
/* WARNING: Removing unreachable block (ram,0x0047a3c4) */
/* WARNING: Removing unreachable block (ram,0x0047a3cf) */
/* WARNING: Removing unreachable block (ram,0x0047a3f3) */
/* WARNING: Removing unreachable block (ram,0x0047a3dd) */
/* WARNING: Removing unreachable block (ram,0x0047a3ec) */
/* WARNING: Removing unreachable block (ram,0x0047a3e5) */
/* WARNING: Removing unreachable block (ram,0x0047a3f8) */
/* WARNING: Removing unreachable block (ram,0x0047a3fc) */
/* WARNING: Removing unreachable block (ram,0x0047a44a) */
/* WARNING: Removing unreachable block (ram,0x0047a47d) */
/* WARNING: Removing unreachable block (ram,0x0047a566) */
/* WARNING: Removing unreachable block (ram,0x0047a512) */
/* WARNING: Removing unreachable block (ram,0x0047a559) */
/* WARNING: Removing unreachable block (ram,0x0047a5fd) */
/* WARNING: Removing unreachable block (ram,0x0047a621) */
/* WARNING: Removing unreachable block (ram,0x0047a62c) */
/* WARNING: Removing unreachable block (ram,0x0047a650) */
/* WARNING: Removing unreachable block (ram,0x0047a63a) */
/* WARNING: Removing unreachable block (ram,0x0047a649) */
/* WARNING: Removing unreachable block (ram,0x0047a642) */
/* WARNING: Removing unreachable block (ram,0x0047a655) */
/* WARNING: Removing unreachable block (ram,0x0047a659) */
/* WARNING: Removing unreachable block (ram,0x0047a6a7) */
void __cdecl FUN_0047a0fc(int param_1)

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
  
  __InitExceptBlockLDTC(0x500d58);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) {
      FUN_0047a74c(param_1,0);
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
        FUN_004cfad4(param_1 + 0x20,0,uVar4,(uint)&local_125,0,0,0);
      }
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + -0xc);
      if (puVar1 != &DAT_00513d58) {
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
          if (local_80 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_80 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_80 = *local_80 + -1;
            iVar3 = *local_80 + 1;
          }
          if (iVar3 != 0) goto LAB_0047a1db;
        }
        local_84 = *(int *)(iVar2 + 0x1010) + -0xc;
        local_88 = *(int *)(iVar2 + 0x1010) + -0xc;
        operator_delete();
        local_8c = 0;
        *(undefined4 *)(iVar2 + 0x1010) = 0;
        local_90 = iVar2 + 0x1008;
      }
LAB_0047a1db:
      local_60 = local_60 + -0x101;
      Pattern::_dtor(local_8,2);
      operator_delete();
      local_6c = 8;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a74c  FUN_0047a74c   (157 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047a74c(int param_1,uint param_2)

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
    FUN_0047a7ec(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_0047ab30(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_0045f0c4(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047a7ec  FUN_0047a7ec   (646 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0047a7ec(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

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
  
  __InitExceptBlockLDTC(0x500e20);
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
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_004793ec(*(undefined4 **)(param_1 + 4),param_2,puVar1);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0047aab4(puVar1 + (iVar2 >> 2),param_3,param_4);
      iVar2 = (int)param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_004793ec(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar2 >> 2) + param_3);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      FUN_0045f0c4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
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
        FUN_004793ec(puVar1 + -param_3,puVar1,puVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
        FUN_004793c8(param_2,puVar1 + -param_3,puVar1);
        FUN_0047aa94(param_2,param_2 + param_3,param_4);
      }
      else {
        iVar2 = (int)puVar1 - (int)param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = param_3 - (iVar2 >> 2);
        FUN_0047aab4(puVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 4;
        FUN_004793ec(param_2,puVar1,param_2 + param_3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 4;
        FUN_0047aa94(param_2,puVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047aa94  FUN_0047aa94   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047aa94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047aab4  FUN_0047aab4   (85 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047aab4(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x500e60);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ab30  FUN_0047ab30   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0047ab30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ab54  FUN_0047ab54   (548 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047acd8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0047ace0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_0047ab54(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x500ea8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb8);
    param_1[0xb8] = (int)(param_1 + 0xb5);
    param_1[0xb9] = (int)(param_1 + 0xb6);
    param_1[1] = (int)(param_1 + 0xb5);
    param_1[2] = (int)(param_1 + 0xb6);
    param_1[0xb4] = 0;
    param_1[0xb7] = 0;
    param_1[0xb5] = (int)&OWL::TEventHandler::vftable;
    param_1[0xb6] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb8,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x270;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x270;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_00413cf4(param_1,1,0x500e7e,uVar1,param_4,(uint *)0x3444,1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x270;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x270;
  param_1[3] = (int)&TEAStartupTipsViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00501250;
  *(undefined ***)param_1[2] = &PTR_LAB_0050125c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501268;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x18] = 0x40;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_004179f0(param_1 + 0x24,0,param_1,0x119e);
  FUN_004179f0(param_1 + 0x56,0,param_1,0x3458);
  FUN_004ac4b8(param_1 + 0x88,0,*param_1,0x2eae,0,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea

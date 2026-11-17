// rea decompile_all
// name: FUN_0041204c
// address: 0x41204c
// body: available
// range: 0x41204c-0x4133ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

undefined1 __cdecl
FUN_0041204c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
  
  FUN_0041f3fc(0x42e2f8);
  FUN_00413e18(param_1);
  local_e0 = 0;
  local_e4 = 0;
  uVar5 = local_e4;
  do {
    while( true ) {
      uVar4 = DAT_0042fce8;
      local_e8 = uVar5;
      if (uVar5 <= *(uint *)(*(int *)(param_4 + 8) + -4)) {
        local_138 = (char *)(*(int *)(param_4 + 8) + uVar5);
        iVar3 = FUN_0041f118(local_138,&DAT_0042e040);
        local_134 = iVar3 + local_e8;
        uVar4 = local_134;
        if (*(uint *)(*(int *)(param_4 + 8) + -4) <= local_134) {
          uVar4 = DAT_0042fce8;
        }
      }
      if (((uVar4 == DAT_0042fce8) || (uVar4 == 0)) ||
         (local_13c = uVar4 - 1, *(char *)(*(int *)(param_4 + 8) + local_13c) != '\\')) break;
      uVar5 = uVar4 + 1;
    }
    local_cc = 0x50;
    uVar5 = DAT_0042fce8;
    if (uVar4 != DAT_0042fce8) {
      uVar5 = uVar4 - local_e4;
    }
    FUN_0041b368((int)local_14,param_4,local_e4,uVar5);
    local_c0 = local_c0 + 1;
    local_cc = 0x44;
    local_13d = 3;
    if (uVar4 != DAT_0042fce8) {
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
      if (DAT_0042fce8 - 0xe < uVar5) {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar7 = &LAB_00405f50;
        uVar6 = 0;
        local_cc = 0x68;
        local_180 = (uint *)FUN_0041ea4c(local_4f8,PTR_s_invalid_string_size_parameter_in_00431a78);
        FUN_00416e74((int)local_7c,local_180);
        local_c0 = local_c0 + 2;
        local_54[0] = &PTR_FUN_0042bc04;
        local_18c = 0;
        local_44 = (int *)0x0;
        local_cc = 0x74;
        if (local_74[-3] == -1 || local_74[-3] + 1 < 0) {
          local_19c = local_74[-1];
          local_1a4 = FUN_00416ffc(local_4c,local_19c,local_19c);
          local_1a8 = local_4c;
          local_510 = local_1a4 + 3;
          local_1ac = local_19c;
          local_1b0 = local_74;
          local_1b4 = local_510;
          local_1a0 = local_510;
          local_44 = local_510;
          FUN_0041eddc(local_510,local_74,local_19c);
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
        local_54[0] = &PTR_FUN_0042bc18;
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
          FUN_00414f78();
          local_1c4 = 0;
          local_1c8 = local_7c;
          local_74 = (int *)0x0;
          local_520 = 0;
        }
LAB_0041289c:
        local_cc = 0x5c;
        FUN_004280a0((uint *)&DAT_00405ef4,local_54,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
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
          FUN_00416e74((int)local_8c,local_1d0);
          local_c0 = local_c0 + 2;
          local_6c[0] = &PTR_FUN_0042bc04;
          local_1dc = 0;
          local_5c = (int *)0x0;
          local_cc = 0xa4;
          if (local_84[-3] == -1 || local_84[-3] + 1 < 0) {
            local_1ec = local_84[-1];
            local_1f4 = FUN_00416ffc(local_64,local_1ec,local_1ec);
            local_1f8 = local_64;
            local_204 = local_1f4 + 3;
            local_1fc = local_1ec;
            local_200 = local_84;
            local_1f0 = local_204;
            local_5c = local_204;
            FUN_0041eddc(local_204,local_84,local_1ec);
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
          local_6c[0] = &PTR_FUN_0042bbf0;
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
            FUN_00414f78();
            local_214 = 0;
            local_218 = local_8c;
            local_84 = (int *)0x0;
          }
LAB_00412b21:
          local_cc = 0x5c;
          FUN_004280a0((uint *)&DAT_0040604c,local_6c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
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
        FUN_0041ae90((int)local_14,local_c[-1],0,uVar5 - local_c[-1],0);
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
        FUN_0041ae90(local_23c,*(uint *)(*(int *)(param_1 + 0x28) + -4),0,1,local_225 | 4);
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
    local_b8 = (int *)FUN_00414fac();
    if (local_b8 != (int *)0x0) {
      local_cc = 0x110;
      FUN_0040d5d8(local_b8);
    }
    local_cc = 0x44;
    local_290 = local_b8;
    FUN_0040d6b4((int)local_b8,param_5);
    FUN_0040d6e8((int)local_290,param_6);
    FUN_0040c468(local_290,param_2,param_3,local_c,param_7);
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x18)) {
      FUN_004134dc(param_1,*(undefined4 **)(param_1 + 8),&local_290);
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
      FUN_0041ae90(local_2ac,*(uint *)(*(int *)(param_1 + 0x28) + -4),0,1,local_225 | 5);
      local_225 = 0;
    }
    local_2ad = local_13d | local_225;
    local_2b4 = param_1 + 0x20;
    local_13d = local_2ad;
    FUN_0041ae90(local_2b4,*(uint *)(*(int *)(param_1 + 0x28) + -4),0,1,local_2ad);
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
      FUN_00414f78();
      local_2c4 = 0;
      local_2c8 = local_14;
      local_c = (uint *)0x0;
    }
LAB_004132c1:
    local_cc = 0;
    uVar5 = local_e4;
    if (uVar4 == DAT_0042fce8) {
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
              iVar3 = FUN_0040d5b8(*(int *)(*(int *)(param_1 + 4) + local_2cc * 4));
              if (iVar3 == 0) {
                local_2d8 = local_2cc;
                uVar2 = FUN_0040d5c8(*(int *)(*(int *)(param_1 + 4) + local_2cc * 4));
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


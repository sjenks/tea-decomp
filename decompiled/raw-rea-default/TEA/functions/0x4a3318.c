// rea decompile_all
// name: FUN_004a3318
// address: 0x4a3318
// body: available
// range: 0x4a3318-0x4a3e06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_004a3318(undefined4 param_1,uint *param_2,UINT param_3)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_444 [248];
  undefined4 local_34c;
  int *local_33c;
  undefined1 local_324 [248];
  undefined4 local_22c;
  undefined4 local_21c;
  int local_20c;
  int local_208;
  undefined1 *local_204;
  undefined4 local_200;
  LPCSTR local_1fc;
  LPCSTR local_1f8;
  int *local_1f4;
  uint local_1f0;
  undefined1 local_1e9;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  int *local_1e0;
  int *local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  uint local_1cc;
  undefined1 *local_1c8;
  int *local_1c4;
  int *local_1c0;
  uint local_1bc;
  int *local_1b8;
  undefined1 *local_1b4;
  int *local_1b0;
  undefined4 local_1ac;
  uint *local_1a0;
  uint local_19c;
  uint local_198;
  undefined1 local_191;
  uint local_190;
  undefined1 *local_18c;
  undefined4 local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  uint local_170;
  undefined1 *local_16c;
  int *local_168;
  int *local_164;
  uint local_160;
  int *local_15c;
  undefined1 *local_158;
  int *local_154;
  undefined4 local_150;
  uint *local_144;
  uint local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int *local_12c;
  undefined1 *local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  int *local_110;
  undefined4 *local_104;
  uint local_100;
  undefined4 *local_f4;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int *local_bc;
  undefined **local_b4 [2];
  undefined1 local_ac [8];
  int *local_a4;
  undefined1 local_9c [8];
  int *local_94;
  undefined **local_8c [2];
  undefined1 local_84 [8];
  int *local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  undefined1 local_24 [8];
  LPCSTR local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x50a85c);
  uVar1 = FUN_004cb224();
  if (0x20 < uVar1) goto LAB_004a3df5;
  local_d8 = 0x14;
  FUN_004cf628((int)local_14,(uint *)&DAT_0050a21e);
  local_cc = local_cc + 1;
  local_d8 = 0x20;
  iVar4 = local_c;
  puVar2 = FUN_004876f0();
  local_f4 = FUN_00487a14(local_3c,puVar2,iVar4);
  local_cc = local_cc + 1;
  FUN_004cf628((int)local_24,(uint *)local_f4[1]);
  FUN_00487aa8((int)local_3c,2);
  local_d8 = 8;
  if (*(int *)(local_1c + -4) != 0) {
    FUN_004cf384((int)local_14,(int)local_24);
    local_100 = *(uint *)(local_c + -4);
    pcVar3 = FUN_004dc9f4((uint *)s__shell_open_command_0050a223);
    FUN_004cfad4((int)local_14,local_100,0,0x50a223,(uint)pcVar3,0,(uint)pcVar3);
    local_d8 = 0x2c;
    iVar4 = local_c;
    puVar2 = FUN_004876f0();
    local_104 = FUN_00487a14(local_54,puVar2,iVar4);
    local_cc = local_cc + 1;
    FUN_004cf41c((int)local_24,(uint *)local_104[1]);
    local_cc = local_cc + -1;
    FUN_00487aa8((int)local_54,2);
    if (*(int *)(local_1c + -4) != 0) {
      local_d8 = 0x44;
      iVar4 = FUN_004cf628((int)local_64,(uint *)&DAT_0050a237);
      local_cc = local_cc + 1;
      uVar1 = FUN_004d7be4((int)local_24,*(byte **)(iVar4 + 8),0,*(int *)(*(int *)(iVar4 + 8) + -4))
      ;
      local_cc = local_cc + -1;
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          local_110 = (int *)(local_5c + -0xc);
          if (local_110 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_110 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_110 = *local_110 + -1;
            iVar4 = *local_110 + 1;
          }
          if (iVar4 != 0) goto LAB_004a3564;
        }
        local_114 = local_5c + -0xc;
        local_118 = local_5c + -0xc;
        FUN_004cc0bc();
        local_11c = 0;
        local_5c = 0;
        local_120 = local_64;
        local_21c = 0;
      }
LAB_004a3564:
      local_d8 = 0x38;
      if (uVar1 == 0xffffffff) {
        local_d8 = 0x5c;
        iVar4 = FUN_004cf628((int)local_74,(uint *)&DAT_0050a23c);
        local_cc = local_cc + 1;
        uVar1 = FUN_004d7be4((int)local_24,*(byte **)(iVar4 + 8),0,
                             *(int *)(*(int *)(iVar4 + 8) + -4));
        local_cc = local_cc + -1;
        if (local_6c != 0) {
          if (*(int *)(local_6c + -0xc) != -1) {
            local_12c = (int *)(local_6c + -0xc);
            if (local_12c == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (local_12c == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *local_12c = *local_12c + -1;
              iVar4 = *local_12c + 1;
            }
            if (iVar4 != 0) goto LAB_004a365a;
          }
          local_130 = local_6c + -0xc;
          local_134 = local_6c + -0xc;
          FUN_004cc0bc();
          local_138 = 0;
          local_6c = 0;
          local_13c = local_74;
          local_22c = 0;
        }
LAB_004a365a:
        local_d8 = 0x38;
        if (uVar1 != 0xffffffff) {
          local_140 = DAT_005140ac;
          if (*(uint *)(local_1c + -4) < uVar1) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar2 = &LAB_004084c8;
            uVar6 = 0;
            local_d8 = 0x80;
            local_144 = (uint *)FUN_004dc320(local_324,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            FUN_004cf628((int)local_9c,local_144);
            local_cc = local_cc + 2;
            local_8c[0] = &PTR_FUN_004ecaac;
            local_150 = 0;
            local_7c = (int *)0x0;
            local_d8 = 0x8c;
            if (local_94[-3] == -1 || local_94[-3] + 1 < 0) {
              local_160 = local_94[-1];
              local_168 = FUN_004cf7b0(local_84,local_160,local_160);
              local_33c = local_168 + 3;
              local_16c = local_84;
              local_170 = local_160;
              local_174 = local_94;
              local_178 = local_33c;
              local_164 = local_33c;
              local_7c = local_33c;
              FUN_004dc7d4(local_33c,local_94,local_160);
            }
            else {
              local_154 = local_94;
              local_7c = local_94;
              local_158 = local_84;
              local_15c = local_94 + -3;
              if (local_15c != &DAT_00513d58) {
                *local_15c = *local_15c + 1;
              }
            }
            local_d8 = 0x80;
            local_8c[0] = &PTR_FUN_004eca98;
            local_cc = local_cc + 2;
            if (local_94 != (int *)0x0) {
              if (local_94[-3] != -1) {
                local_17c = local_94 + -3;
                if (local_17c == &DAT_00513d58) {
                  iVar4 = 1;
                }
                else if (local_17c == &DAT_00513d58) {
                  iVar4 = 1;
                }
                else {
                  *local_17c = *local_17c + -1;
                  iVar4 = *local_17c + 1;
                }
                if (iVar4 != 0) goto LAB_004a38e8;
              }
              local_180 = local_94 + -3;
              local_184 = local_94 + -3;
              FUN_004cc0bc();
              local_188 = 0;
              local_94 = (int *)0x0;
              local_18c = local_9c;
              local_34c = 0;
            }
LAB_004a38e8:
            local_d8 = 0x74;
            FUN_004e7cc4((uint *)&DAT_0040846c,local_8c,uVar6,puVar2,uVar7,uVar8,uVar9,uVar10);
          }
          local_190 = *(int *)(local_1c + -4) - uVar1;
          local_191 = 0;
          local_198 = local_190;
          if (local_140 < local_190) {
            local_198 = local_140;
          }
          FUN_004cfad4((int)local_24,uVar1,local_198,(uint)&local_191,0,0,0);
        }
      }
      else {
        local_19c = DAT_005140ac;
        if (*(uint *)(local_1c + -4) < uVar1) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar2 = &LAB_004084c8;
          uVar6 = 0;
          local_d8 = 0xbc;
          local_1a0 = (uint *)FUN_004dc320(local_444,PTR_s_string_index_out_of_range_in_fun_00516d2c
                                          );
          FUN_004cf628((int)local_c4,local_1a0);
          local_cc = local_cc + 2;
          local_b4[0] = &PTR_FUN_004ecaac;
          local_1ac = 0;
          local_a4 = (int *)0x0;
          local_d8 = 200;
          if (local_bc[-3] == -1 || local_bc[-3] + 1 < 0) {
            local_1bc = local_bc[-1];
            local_1c4 = FUN_004cf7b0(local_ac,local_1bc,local_1bc);
            local_1d4 = local_1c4 + 3;
            local_1c8 = local_ac;
            local_1cc = local_1bc;
            local_1d0 = local_bc;
            local_1c0 = local_1d4;
            local_a4 = local_1d4;
            FUN_004dc7d4(local_1d4,local_bc,local_1bc);
          }
          else {
            local_1b0 = local_bc;
            local_a4 = local_bc;
            local_1b4 = local_ac;
            local_1b8 = local_bc + -3;
            if (local_1b8 != &DAT_00513d58) {
              *local_1b8 = *local_1b8 + 1;
            }
          }
          local_d8 = 0xbc;
          local_b4[0] = &PTR_FUN_004eca98;
          local_cc = local_cc + 2;
          if (local_bc != (int *)0x0) {
            if (local_bc[-3] != -1) {
              local_1d8 = local_bc + -3;
              if (local_1d8 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else if (local_1d8 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else {
                *local_1d8 = *local_1d8 + -1;
                iVar4 = *local_1d8 + 1;
              }
              if (iVar4 != 0) goto LAB_004a3bf2;
            }
            local_1dc = local_bc + -3;
            local_1e0 = local_bc + -3;
            FUN_004cc0bc();
            local_1e4 = 0;
            local_bc = (int *)0x0;
            local_1e8 = local_c4;
          }
LAB_004a3bf2:
          local_d8 = 0xb0;
          FUN_004e7cc4((uint *)&DAT_0040846c,local_b4,uVar6,puVar2,uVar7,uVar8,uVar9,uVar10);
        }
        uVar7 = *(int *)(local_1c + -4) - uVar1;
        local_1e9 = 0;
        if (local_19c < uVar7) {
          uVar7 = local_19c;
        }
        FUN_004cfad4((int)local_24,uVar1,uVar7,(uint)&local_1e9,0,0,0);
      }
      uVar1 = *(uint *)(local_1c + -4);
      pcVar3 = FUN_004dc9f4((uint *)&DAT_0050a262);
      FUN_004cfad4((int)local_24,uVar1,0,0x50a262,(uint)pcVar3,0,(uint)pcVar3);
      local_1f0 = *(uint *)(local_1c + -4);
      pcVar3 = FUN_004dc9f4(param_2);
      FUN_004cfad4((int)local_24,local_1f0,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
      uVar1 = WinExec(local_1c,param_3);
      local_d8 = 8;
    }
  }
  local_cc = local_cc + -1;
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_1f4 = (int *)(local_1c + -0xc);
      if (local_1f4 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_1f4 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_1f4 = *local_1f4 + -1;
        iVar4 = *local_1f4 + 1;
      }
      if (iVar4 != 0) goto LAB_004a3d57;
    }
    local_1f8 = local_1c + -0xc;
    local_1fc = local_1c + -0xc;
    FUN_004cc0bc();
    local_200 = 0;
    local_1c = (LPCSTR)0x0;
    local_204 = local_24;
  }
LAB_004a3d57:
  local_d8 = 8;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004a3df5;
    }
    local_208 = local_c + -0xc;
    local_20c = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_004a3df5:
  *in_FS_OFFSET = local_e8;
  return uVar1;
}


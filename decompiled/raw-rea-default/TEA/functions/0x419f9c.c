// rea decompile_all
// name: FUN_00419f9c
// address: 0x419f9c
// body: available
// range: 0x419f9c-0x41aa21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041a1eb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00419f9c(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_428 [248];
  undefined4 local_330;
  int *local_320;
  undefined1 local_308 [248];
  undefined4 local_210;
  undefined *local_200;
  undefined4 local_1f8;
  uint local_1f4;
  byte local_1f0;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1ac;
  undefined4 *local_1a8;
  uint local_1a4;
  int local_1a0;
  int *local_19c;
  int *local_198;
  int local_194;
  undefined4 *local_190;
  undefined4 local_18c;
  uint local_188;
  undefined1 local_184 [36];
  uint local_160;
  undefined1 *local_15c;
  undefined4 local_158;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  uint local_144;
  undefined1 *local_140;
  int *local_13c;
  int *local_138;
  uint local_134;
  int *local_130;
  undefined1 *local_12c;
  int *local_128;
  undefined4 local_124;
  uint *local_118;
  uint local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  uint local_f8;
  undefined1 *local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  undefined1 *local_e4;
  int *local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  byte local_b8 [12];
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined2 local_88;
  int local_7c;
  undefined1 local_74 [8];
  int *local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4ee848);
  local_a0 = 0;
  local_9c = -1;
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  if (param_4 == 0) {
    FUN_004691fc(param_2,(LPARAM)&local_a0);
  }
  else {
    local_a0 = FUN_004a76a8(*param_2,0xd7,0,param_4);
    local_9c = local_a0;
    if (iVar2 <= local_a0) {
      local_9c = 0;
    }
  }
  local_a4 = 0;
  if (local_a0 == local_9c) {
    HideCaret(*(HWND *)(*param_2 + 0xc));
    FUN_004a76a8(*param_2,0xb,0,0);
    local_1f8 = 0x3c;
    local_1f4 = 0;
    local_ac = local_a0;
    local_a8 = local_9c;
    while (local_a8 = local_a8 + 1, local_a8 <= iVar2) {
      FUN_0046924c(param_2,(LPARAM)&local_ac);
      FUN_004690f0(param_2,(LPARAM)&local_1f8,'\x01');
      if (((local_1f4 & 4) == 0) || ((local_1f0 & 4) == 0)) break;
    }
    local_a8 = local_a8 + -1;
    while (local_ac = local_ac + -1, -1 < local_ac) {
      FUN_0046924c(param_2,(LPARAM)&local_ac);
      FUN_004690f0(param_2,(LPARAM)&local_1f8,'\x01');
      if (((local_1f4 & 4) == 0) || ((local_1f0 & 4) == 0)) break;
    }
    local_ac = local_ac + 1;
    FUN_0046924c(param_2,(LPARAM)&local_a0);
    local_a0 = local_ac;
    local_9c = local_a8;
    FUN_004dc844((undefined4 *)local_b8,0,10);
    for (; local_9c + 1 <= iVar2; local_9c = local_9c + 1) {
      (**(code **)(param_2[3] + 0x30))();
      iVar3 = FUN_0043c6d4(local_b8[0]);
      if (iVar3 == 0) break;
      if (((char)local_b8[0] < '0') || ('9' < (char)local_b8[0])) {
        local_a4 = 0;
      }
      else {
        local_a4 = local_a4 + 1;
      }
    }
    do {
      if (local_a0 < 1) goto LAB_0041a1a1;
      (**(code **)(param_2[3] + 0x30))();
      iVar2 = FUN_0043c6d4(local_b8[0]);
      if (iVar2 == 0) goto LAB_0041a1a1;
      local_a0 = local_a0 + -1;
    } while( true );
  }
LAB_0041a1bd:
  local_c = (undefined4 *)&DAT_00513d64;
  local_200 = &DAT_00513d64;
  local_7c = local_7c + 1;
  local_88 = 0x20;
  if (local_a0 < local_9c) {
    local_bc = (local_9c - local_a0) * 2 + 1;
    puVar4 = (uint *)FUN_004cc180();
    FUN_004dc844(puVar4,0,local_bc);
    (**(code **)(param_2[3] + 0x30))();
    FUN_004cf41c((int)local_14,puVar4);
    FUN_004cc0cc();
  }
  uVar5 = local_c[-1] - local_a4;
  local_88 = 0x2c;
  FUN_004d6118((int)local_24,(int)local_14,uVar5,DAT_005140ac);
  local_7c = local_7c + 1;
  FUN_004cf384(param_3,(int)local_24);
  local_7c = local_7c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar6 = (int *)(local_1c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0041a32b;
    }
    local_c0 = local_1c + -0xc;
    local_c4 = local_1c + -0xc;
    FUN_004cc0bc();
    local_c8 = 0;
    local_cc = local_24;
    local_1c = 0;
    local_210 = 0;
  }
LAB_0041a32b:
  local_88 = 0x20;
  if (DAT_005140ac - 0xe < uVar5) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 1;
    puVar8 = &LAB_00408370;
    uVar7 = 0;
    local_88 = 0x50;
    local_d0 = (uint *)FUN_004dc320(local_308,PTR_s_invalid_string_size_parameter_in_00516d20);
    FUN_004cf628((int)local_64,local_d0);
    local_7c = local_7c + 2;
    local_3c[0] = &PTR_FUN_004ecaac;
    local_dc = 0;
    local_2c = (int *)0x0;
    local_88 = 0x5c;
    if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
      uVar1 = local_5c[-1];
      local_f0 = FUN_004cf7b0(local_34,uVar1,uVar1);
      local_f4 = local_34;
      local_320 = local_f0 + 3;
      local_fc = local_5c;
      local_100 = local_320;
      local_f8 = uVar1;
      local_ec = local_320;
      local_2c = local_320;
      FUN_004dc7d4(local_320,local_5c,uVar1);
    }
    else {
      local_e4 = local_34;
      local_e0 = local_5c;
      local_2c = local_5c;
      local_e8 = local_5c + -3;
      if (local_e8 != &DAT_00513d58) {
        *local_e8 = *local_e8 + 1;
      }
    }
    local_88 = 0x50;
    local_3c[0] = &PTR_LAB_004ecac0;
    local_7c = local_7c + 2;
    if (local_5c != (int *)0x0) {
      if (local_5c[-3] != -1) {
        piVar6 = local_5c + -3;
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0041a560;
      }
      local_104 = local_5c + -3;
      local_108 = local_5c + -3;
      FUN_004cc0bc();
      local_10c = 0;
      local_110 = local_64;
      local_5c = (int *)0x0;
      local_330 = 0;
    }
LAB_0041a560:
    local_88 = 0x44;
    FUN_004e7cc4((uint *)&DAT_00408314,local_3c,uVar7,puVar8,uVar9,uVar10,uVar11,uVar12);
  }
  uVar9 = local_c[-1];
  if (uVar5 < uVar9) {
    local_114 = uVar9 - uVar5;
    if (uVar9 < uVar5) {
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 1;
      puVar8 = &LAB_004084c8;
      uVar7 = 0;
      local_88 = 0x80;
      local_118 = (uint *)FUN_004dc320(local_428,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      FUN_004cf628((int)local_74,local_118);
      local_7c = local_7c + 2;
      local_54[0] = &PTR_FUN_004ecaac;
      local_124 = 0;
      local_44 = (int *)0x0;
      local_88 = 0x8c;
      if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
        local_134 = local_6c[-1];
        local_13c = FUN_004cf7b0(local_4c,local_134,local_134);
        local_140 = local_4c;
        local_14c = local_13c + 3;
        local_144 = local_134;
        local_148 = local_6c;
        local_138 = local_14c;
        local_44 = local_14c;
        FUN_004dc7d4(local_14c,local_6c,local_134);
      }
      else {
        local_12c = local_4c;
        local_128 = local_6c;
        local_44 = local_6c;
        local_130 = local_6c + -3;
        if (local_130 != &DAT_00513d58) {
          *local_130 = *local_130 + 1;
        }
      }
      local_88 = 0x80;
      local_54[0] = &PTR_FUN_004eca98;
      local_7c = local_7c + 2;
      if (local_6c != (int *)0x0) {
        if (local_6c[-3] != -1) {
          piVar6 = local_6c + -3;
          if (piVar6 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar2 = *piVar6 + 1;
          }
          if (iVar2 != 0) goto LAB_0041a7cf;
        }
        local_150 = local_6c + -3;
        local_154 = local_6c + -3;
        FUN_004cc0bc();
        local_158 = 0;
        local_15c = local_74;
        local_6c = (int *)0x0;
      }
LAB_0041a7cf:
      local_88 = 0x44;
      FUN_004e7cc4((uint *)&DAT_0040846c,local_54,uVar7,puVar8,uVar9,uVar10,uVar11,uVar12);
    }
    local_160 = local_c[-1] - uVar5;
    local_184[0] = 0;
    local_188 = local_160;
    if (local_114 < local_160) {
      local_188 = local_114;
    }
    FUN_004cfad4((int)local_14,uVar5,local_188,(uint)local_184,0,0,0);
  }
  else {
    FUN_004d5c40((int)local_14,uVar9,0,uVar5 - uVar9,0);
  }
  if (local_c + -3 != &DAT_00513d58) {
    local_c[-3] = 0;
  }
  local_88 = 0xb0;
  local_18c = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar5 = local_c[-1];
    local_19c = FUN_004cf7b0(param_1,uVar5,uVar5);
    local_198 = local_19c + 3;
    *(int **)(param_1 + 8) = local_198;
    local_1a0 = param_1;
    local_1a8 = local_c;
    local_1ac = *(undefined4 **)(param_1 + 8);
    local_1a4 = uVar5;
    FUN_004dc7d4(local_1ac,local_c,uVar5);
  }
  else {
    local_190 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_194 = param_1;
    piVar6 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar6 != &DAT_00513d58) {
      *piVar6 = *piVar6 + 1;
    }
  }
  local_88 = 200;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar6 = local_c + -3;
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0041aa01;
    }
    local_1b0 = local_c + -3;
    local_1b4 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0041aa01:
  *in_FS_OFFSET = local_98;
  return param_1;
LAB_0041a1a1:
  FUN_004a76a8(*param_2,0xb,1,0);
  ShowCaret(*(HWND *)(*param_2 + 0xc));
  goto LAB_0041a1bd;
}


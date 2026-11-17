// rea decompile_all
// name: FUN_00431474
// address: 0x431474
// body: available
// range: 0x431474-0x431f32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
FUN_00431474(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int *param_6)

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
  
  FUN_004dce64(0x4f2de4);
  local_79 = *(int *)(*(int *)(param_3 + 8) + -4) != 0;
  iVar6 = 0;
  local_80 = (char *)*param_2;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = -1;
  local_94 = 0;
  local_98 = *(int *)(*(int *)(param_3 + 8) + -4);
  uVar1 = FUN_00431458((int)param_1,0xf9);
  FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(char)uVar1);
  FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
  FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0x20);
  if (((*local_80 != ';') && (*local_80 != ')')) &&
     (iVar6 = FUN_00431f34((int)param_1,(int *)&local_80,param_3,&local_90,param_5,&local_88),
     iVar6 == -1)) {
    *in_FS_OFFSET = local_78;
    return -1;
  }
  if (*local_80 != ';') goto LAB_00431bdb;
  local_80 = local_80 + 1;
  local_94 = *(int *)(*(int *)(param_3 + 8) + -4);
  FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0xf4);
  local_9c = FUN_00408ec0(param_1[1099],param_1[0x44c]);
  local_9d = (undefined1)local_9c;
  FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,(undefined1)local_9c);
  local_a4 = *(int *)(*(int *)(param_3 + 8) + -4) + 4;
  if (DAT_005140ac - 0xeU < local_a4) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00408370;
    uVar1 = 0;
    local_68 = 0x14;
    local_a8 = (uint *)FUN_004dc320(local_270,PTR_s_invalid_string_size_parameter_in_00516d20);
    FUN_004cf628((int)local_44,local_a8);
    local_5c = local_5c + 2;
    local_1c[0] = &PTR_FUN_004ecaac;
    local_b4 = 0;
    local_c = (int *)0x0;
    local_68 = 0x20;
    if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
      local_c4 = local_3c[-1];
      local_cc = FUN_004cf7b0(local_14,local_c4,local_c4);
      local_d0 = local_14;
      local_288 = local_cc + 3;
      local_d4 = local_c4;
      local_d8 = local_3c;
      local_dc = local_288;
      local_c8 = local_288;
      local_c = local_288;
      FUN_004dc7d4(local_288,local_3c,local_c4);
    }
    else {
      local_bc = local_14;
      local_b8 = local_3c;
      local_c = local_3c;
      local_c0 = local_3c + -3;
      if (local_c0 != &DAT_00513d58) {
        *local_c0 = *local_c0 + 1;
      }
    }
    local_68 = 0x14;
    local_1c[0] = &PTR_LAB_004ecac0;
    local_5c = local_5c + 2;
    if (local_3c != (int *)0x0) {
      if (local_3c[-3] != -1) {
        local_e0 = local_3c + -3;
        if (local_e0 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_e0 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_e0 = *local_e0 + -1;
          iVar4 = *local_e0 + 1;
        }
        if (iVar4 != 0) goto LAB_00431854;
      }
      local_e4 = local_3c + -3;
      local_e8 = local_3c + -3;
      FUN_004cc0bc();
      local_ec = 0;
      local_f0 = local_44;
      local_3c = (int *)0x0;
      local_298 = 0;
    }
LAB_00431854:
    local_68 = 8;
    FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar1,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  if (local_a4 < *(uint *)(*(int *)(param_3 + 8) + -4)) {
    local_f4 = *(int *)(*(int *)(param_3 + 8) + -4) - local_a4;
    if (*(uint *)(*(int *)(param_3 + 8) + -4) < local_a4) {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_004084c8;
      uVar1 = 0;
      local_68 = 0x44;
      local_f8 = (uint *)FUN_004dc320(local_390,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      FUN_004cf628((int)local_54,local_f8);
      local_5c = local_5c + 2;
      local_34[0] = &PTR_FUN_004ecaac;
      local_104 = 0;
      local_24 = (int *)0x0;
      local_68 = 0x50;
      if (local_4c[-3] == -1 || local_4c[-3] + 1 < 0) {
        local_114 = local_4c[-1];
        local_11c = FUN_004cf7b0(local_2c,local_114,local_114);
        local_120 = local_2c;
        local_12c = local_11c + 3;
        local_124 = local_114;
        local_128 = local_4c;
        local_118 = local_12c;
        local_24 = local_12c;
        FUN_004dc7d4(local_12c,local_4c,local_114);
      }
      else {
        local_10c = local_2c;
        local_108 = local_4c;
        local_24 = local_4c;
        local_110 = local_4c + -3;
        if (local_110 != &DAT_00513d58) {
          *local_110 = *local_110 + 1;
        }
      }
      local_68 = 0x44;
      local_34[0] = &PTR_FUN_004eca98;
      local_5c = local_5c + 2;
      if (local_4c != (int *)0x0) {
        if (local_4c[-3] != -1) {
          local_130 = local_4c + -3;
          if (local_130 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_130 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar4 = *local_130 + 1;
          }
          if (iVar4 != 0) goto LAB_00431aeb;
        }
        local_134 = local_4c + -3;
        local_138 = local_4c + -3;
        FUN_004cc0bc();
        local_13c = 0;
        local_140 = local_54;
        local_4c = (int *)0x0;
      }
LAB_00431aeb:
      local_68 = 8;
      FUN_004e7cc4((uint *)&DAT_0040846c,local_34,uVar1,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    local_144 = *(int *)(*(int *)(param_3 + 8) + -4) - local_a4;
    local_145 = 0;
    local_14c = local_144;
    if (local_f4 < local_144) {
      local_14c = local_f4;
    }
    FUN_004cfad4(param_3,local_a4,local_14c,(uint)&local_145,0,0,0);
  }
  else {
    FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,
                 local_a4 - *(int *)(*(int *)(param_3 + 8) + -4),0);
  }
  puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
  if (puVar2 != &DAT_00513d58) {
    *puVar2 = 0;
  }
  local_84 = FUN_004327e8(param_1,&local_80,param_3,&local_8c,local_88);
  if (local_84 == -1) {
    *in_FS_OFFSET = local_78;
    return -1;
  }
  if (local_79 != '\0') {
    *param_5 = *(int *)(*(int *)(param_3 + 8) + -4) + 1;
  }
LAB_00431bdb:
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
        FUN_004d48d8(param_3);
      }
      local_154 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (local_154 != &DAT_00513d58) {
        *local_154 = 0xffffffff;
      }
      puVar3 = (undefined1 *)(*(int *)(param_3 + 8) + local_150);
      uVar1 = FUN_00431458((int)param_1,0xfa);
      *puVar3 = (char)uVar1;
      *param_6 = *param_6 + local_88;
    }
    if (-1 < local_90) {
      local_158 = local_90;
      if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
        FUN_004d48d8(param_3);
      }
      puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
      if (puVar2 != &DAT_00513d58) {
        *puVar2 = 0xffffffff;
      }
      if (*(char *)(*(int *)(param_3 + 8) + local_158) == -0xe) {
        local_15c = local_90;
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_004d48d8(param_3);
        }
        puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar2 != &DAT_00513d58) {
          *puVar2 = 0xffffffff;
        }
        *(undefined1 *)(*(int *)(param_3 + 8) + local_15c) = 0xf3;
      }
      else {
        local_160 = local_90;
        if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
          FUN_004d48d8(param_3);
        }
        puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (puVar2 != &DAT_00513d58) {
          *puVar2 = 0xffffffff;
        }
        if (*(char *)(*(int *)(param_3 + 8) + local_160) == -6) {
          local_164 = local_90;
          if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
            FUN_004d48d8(param_3);
          }
          puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
          if (puVar2 != &DAT_00513d58) {
            *puVar2 = 0xffffffff;
          }
          *(undefined1 *)(*(int *)(param_3 + 8) + local_164) = 0xfb;
        }
      }
    }
    local_168 = local_98 + 1;
    if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
      FUN_004d48d8(param_3);
    }
    puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
    if (puVar2 != &DAT_00513d58) {
      *puVar2 = 0xffffffff;
    }
    *(char *)(*(int *)(param_3 + 8) + local_168) = (char)iVar6;
    local_16c = local_98 + 2;
    if (1 < *(int *)(*(int *)(param_3 + 8) + -0xc) + 1) {
      FUN_004d48d8(param_3);
    }
    puVar2 = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
    if (puVar2 != &DAT_00513d58) {
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
          FUN_004d48d8(param_3);
        }
        local_17c = (undefined4 *)(*(int *)(param_3 + 8) + -0xc);
        if (local_17c != &DAT_00513d58) {
          *local_17c = 0xffffffff;
        }
        *(char *)(*(int *)(param_3 + 8) + local_178) = (char)*local_180;
        uVar8 = uVar8 + 1;
        local_180 = (int *)((int)local_180 + 1);
      } while (uVar8 < 4);
    }
    FUN_004d5c40(param_3,*(uint *)(*(int *)(param_3 + 8) + -4),0,1,0xfc);
    *param_2 = (int)local_80;
    *in_FS_OFFSET = local_78;
  }
  else {
    param_1[0x409] = 4;
    iVar6 = -1;
    *in_FS_OFFSET = local_78;
  }
  return iVar6;
}


// rea decompile_all
// name: FUN_00458310
// address: 0x458310
// body: available
// range: 0x458310-0x458c8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0045838c) */
/* WARNING: Removing unreachable block (ram,0x0045835a) */
/* WARNING: Removing unreachable block (ram,0x004583be) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
FUN_00458310(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined1 uVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  uint *puVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_2d4 [248];
  undefined4 local_1dc;
  undefined4 local_1cc;
  undefined *local_1bc;
  undefined *local_1ac;
  undefined *local_19c;
  undefined4 *local_18c;
  undefined4 *local_188;
  int *local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined *local_174;
  undefined1 *local_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  uint local_158;
  int local_154;
  int *local_150;
  int *local_14c;
  uint local_148;
  int *local_144;
  int local_140;
  undefined4 *local_13c;
  undefined4 local_138;
  uint local_134;
  undefined1 local_12d;
  uint local_12c;
  undefined1 *local_128;
  undefined4 local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  uint local_10c;
  undefined1 *local_108;
  int *local_104;
  int *local_100;
  uint local_fc;
  int *local_f8;
  undefined1 *local_f4;
  int *local_f0;
  undefined4 local_ec;
  uint *local_e0;
  uint local_dc;
  undefined1 *local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  uint local_c4;
  undefined1 *local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [8];
  int *local_74;
  undefined **local_6c [2];
  undefined1 local_64 [8];
  int *local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4f9038);
  local_a4 = 0;
  local_c = (undefined4 *)&DAT_00513d64;
  local_19c = &DAT_00513d64;
  local_1c = &DAT_00513d64;
  local_1ac = &DAT_00513d64;
  local_2c = &DAT_00513d64;
  local_1bc = &DAT_00513d64;
  local_84 = local_84 + 3;
  local_90 = 0x20;
  hWnd = GetFocus();
  BVar3 = IsChild(*(HWND *)(*(int *)(param_2 + 0x158) + 0xc),hWnd);
  if (BVar3 == 0) {
    iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x6d0) * 4 + *(int *)(param_2 + 0x6b4)) + 8);
    if ((param_3 != 0) || (iVar5 = FUN_0042ba14(iVar4), iVar5 == 1)) {
      uVar2 = FUN_0042eca0(iVar4,param_3,(int)local_14,&local_a4);
      local_c4 = CONCAT31(extraout_var,uVar2);
      local_90 = 0x74;
      FUN_004d6118((int)local_54,(int)local_14,local_c4,DAT_005140ac);
      local_84 = local_84 + 1;
      FUN_004cf384((int)local_34,(int)local_54);
      local_84 = local_84 + -1;
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          local_c8 = (int *)(local_4c + -0xc);
          if (local_c8 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_c8 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_c8 = *local_c8 + -1;
            iVar4 = *local_c8 + 1;
          }
          if (iVar4 != 0) goto LAB_00458653;
        }
        local_cc = local_4c + -0xc;
        local_d0 = local_4c + -0xc;
        FUN_004cc0bc();
        local_d4 = 0;
        local_d8 = local_54;
        local_4c = 0;
        local_1dc = 0;
      }
LAB_00458653:
      uVar1 = local_c4;
      local_90 = 0x20;
      local_dc = DAT_005140ac;
      if ((uint)local_c[-1] < local_c4) {
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 1;
        puVar9 = &LAB_004084c8;
        uVar8 = 0;
        local_90 = 0x98;
        local_e0 = (uint *)FUN_004dc320(local_2d4,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        FUN_004cf628((int)local_7c,local_e0);
        local_84 = local_84 + 2;
        local_6c[0] = &PTR_FUN_004ecaac;
        local_ec = 0;
        local_5c = (int *)0x0;
        local_90 = 0xa4;
        if (local_74[-3] == -1 || local_74[-3] + 1 < 0) {
          local_fc = local_74[-1];
          local_104 = FUN_004cf7b0(local_64,local_fc,local_fc);
          local_108 = local_64;
          local_114 = local_104 + 3;
          local_10c = local_fc;
          local_110 = local_74;
          local_100 = local_114;
          local_5c = local_114;
          FUN_004dc7d4(local_114,local_74,local_fc);
        }
        else {
          local_f4 = local_64;
          local_f0 = local_74;
          local_5c = local_74;
          local_f8 = local_74 + -3;
          if (local_f8 != &DAT_00513d58) {
            *local_f8 = *local_f8 + 1;
          }
        }
        local_90 = 0x98;
        local_6c[0] = &PTR_FUN_004eca98;
        local_84 = local_84 + 2;
        if (local_74 != (int *)0x0) {
          if (local_74[-3] != -1) {
            local_118 = local_74 + -3;
            if (local_118 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (local_118 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *local_118 = *local_118 + -1;
              iVar4 = *local_118 + 1;
            }
            if (iVar4 != 0) goto LAB_004588bb;
          }
          local_11c = local_74 + -3;
          local_120 = local_74 + -3;
          FUN_004cc0bc();
          local_124 = 0;
          local_128 = local_7c;
          local_74 = (int *)0x0;
        }
LAB_004588bb:
        local_90 = 0x8c;
        FUN_004e7cc4((uint *)&DAT_0040846c,local_6c,uVar8,puVar9,uVar10,uVar11,uVar12,uVar13);
      }
      local_12c = local_c[-1] - uVar1;
      local_12d = 0;
      local_134 = local_12c;
      if (local_dc < local_12c) {
        local_134 = local_dc;
      }
      FUN_004cfad4((int)local_14,uVar1,local_134,(uint)&local_12d,0,0,0);
      iVar4 = *(int *)(param_2 + 0x6d0);
      iVar5 = FUN_00466b18(*(int *)(param_2 + 0x38));
      puVar6 = (uint *)FUN_00408c98(iVar5,iVar4);
      FUN_004cf41c((int)local_24,puVar6);
    }
  }
  else {
    FUN_004cf384((int)local_14,param_2 + 0x698);
    iVar4 = FUN_004acea4((int *)(param_2 + 0x158),&local_a8,&local_ac);
    if ((iVar4 != -1) && ((int)local_a8 < (int)local_ac)) {
      local_90 = 0x5c;
      FUN_004d6118((int)local_44,(int)local_14,local_a8,local_ac - local_a8);
      local_84 = local_84 + 1;
      FUN_004cf384((int)local_14,(int)local_44);
      local_84 = local_84 + -1;
      if (local_3c != 0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_b0 = (int *)(local_3c + -0xc);
          if (local_b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_b0 = *local_b0 + -1;
            iVar4 = *local_b0 + 1;
          }
          if (iVar4 != 0) goto LAB_00458521;
        }
        local_b4 = local_3c + -0xc;
        local_b8 = local_3c + -0xc;
        FUN_004cc0bc();
        local_bc = 0;
        local_c0 = local_44;
        local_3c = 0;
        local_1cc = 0;
      }
LAB_00458521:
      local_90 = 0x20;
    }
  }
  if (param_4 != 0) {
    FUN_004cf384(param_4,(int)local_24);
  }
  if (param_5 != 0) {
    FUN_004cf384(param_5,(int)local_34);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_a4;
  }
  local_90 = 200;
  local_138 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    local_148 = local_c[-1];
    local_150 = FUN_004cf7b0(param_1,local_148,local_148);
    local_14c = local_150 + 3;
    *(int **)(param_1 + 8) = local_14c;
    local_154 = param_1;
    local_158 = local_148;
    local_15c = local_c;
    local_160 = *(undefined4 **)(param_1 + 8);
    FUN_004dc7d4(local_160,local_c,local_148);
  }
  else {
    local_13c = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_140 = param_1;
    local_144 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_144 != &DAT_00513d58) {
      *local_144 = *local_144 + 1;
    }
  }
  local_90 = 0xe0;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar7 = (int *)(local_2c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar4 = *piVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_00458b42;
    }
    local_164 = local_2c + -0xc;
    local_168 = local_2c + -0xc;
    FUN_004cc0bc();
    local_16c = 0;
    local_170 = local_34;
    local_2c = (undefined *)0x0;
  }
LAB_00458b42:
  local_84 = local_84 + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar4 = *piVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_00458bc9;
    }
    local_174 = local_1c + -0xc;
    local_178 = local_1c + -0xc;
    FUN_004cc0bc();
    local_17c = 0;
    local_180 = local_24;
    local_1c = (undefined *)0x0;
  }
LAB_00458bc9:
  local_84 = local_84 + -1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      local_184 = local_c + -3;
      if (local_184 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_184 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_184 = *local_184 + -1;
        iVar4 = *local_184 + 1;
      }
      if (iVar4 != 0) goto LAB_00458c6e;
    }
    local_188 = local_c + -3;
    local_18c = local_c + -3;
    FUN_004cc0bc();
  }
LAB_00458c6e:
  *in_FS_OFFSET = local_a0;
  return param_1;
}


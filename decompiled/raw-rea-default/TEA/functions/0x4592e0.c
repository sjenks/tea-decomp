// rea decompile_all
// name: FUN_004592e0
// address: 0x4592e0
// body: available
// range: 0x4592e0-0x459c42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004598f2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004592e0(int *param_1)

{
  undefined4 uVar1;
  HDC hdc;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  tagTEXTMETRICA *lptm;
  tagTEXTMETRICA local_294;
  undefined4 local_254;
  undefined4 local_244;
  undefined4 local_234;
  undefined *local_224;
  uint local_21c [15];
  undefined4 local_1e0;
  undefined4 local_1d0;
  undefined4 local_1c0;
  undefined4 local_1b0;
  undefined4 local_1a0;
  undefined1 *local_198;
  undefined4 local_194;
  undefined *local_190;
  undefined *local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  undefined *local_180;
  undefined *local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 *local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int *local_144;
  int local_138 [3];
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int *local_11c;
  int local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  undefined1 *local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  undefined *local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  int local_34;
  int local_2f;
  int local_c [2];
  
  FUN_004dce64(0x4f93e8);
  FUN_004156f4(param_1);
  FUN_0045d86c((int)param_1);
  FUN_0045d938((int)param_1);
  local_b8 = 0x14;
  iVar5 = 0;
  iVar3 = 0;
  FUN_004649b0((int)local_44);
  local_ac = local_ac + 1;
  FUN_0044e83c(local_c,(int)local_44,iVar3,iVar5);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      local_cc = (int *)(local_3c + -0xc);
      if (local_cc == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_cc == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_cc = *local_cc + -1;
        iVar3 = *local_cc + 1;
      }
      if (iVar3 != 0) goto LAB_004593f4;
    }
    local_d0 = local_3c + -0xc;
    local_d4 = local_3c + -0xc;
    FUN_004cc0bc();
    local_d8 = 0;
    local_dc = local_44;
    local_3c = 0;
    local_1a0 = 0;
  }
LAB_004593f4:
  piVar2 = param_1 + 0x28;
  local_b8 = 0x2c;
  FUN_004cf628((int)local_54,(uint *)s_WindowTopMost_004f767b);
  local_ac = local_ac + 1;
  FUN_0044e9c0((int)local_c,(int)local_54,piVar2);
  local_ac = local_ac + -1;
  if (local_4c != 0) {
    if (*(int *)(local_4c + -0xc) != -1) {
      piVar2 = (int *)(local_4c + -0xc);
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
      if (iVar3 != 0) goto LAB_004594d1;
    }
    local_e8 = local_4c + -0xc;
    local_ec = local_4c + -0xc;
    FUN_004cc0bc();
    local_f0 = 0;
    local_f4 = local_54;
    local_4c = 0;
    local_1b0 = 0;
  }
LAB_004594d1:
  piVar2 = param_1 + 0x29;
  local_b8 = 0x44;
  FUN_004cf628((int)local_64,(uint *)s_PaneOrientation_004f7689);
  local_ac = local_ac + 1;
  FUN_0044e9c0((int)local_c,(int)local_64,piVar2);
  local_ac = local_ac + -1;
  if (local_5c != 0) {
    if (*(int *)(local_5c + -0xc) != -1) {
      piVar2 = (int *)(local_5c + -0xc);
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
      if (iVar3 != 0) goto LAB_004595a9;
    }
    local_100 = local_5c + -0xc;
    local_104 = local_5c + -0xc;
    FUN_004cc0bc();
    local_108 = 0;
    local_10c = local_64;
    local_5c = 0;
    local_1c0 = 0;
  }
LAB_004595a9:
  piVar2 = &local_110;
  local_110 = 1;
  local_b8 = 0x5c;
  FUN_004cf628((int)local_74,(uint *)s_RangeShortest_004f75f6);
  local_ac = local_ac + 1;
  FUN_0044e9c0((int)local_c,(int)local_74,piVar2);
  local_ac = local_ac + -1;
  if (local_6c != 0) {
    if (*(int *)(local_6c + -0xc) != -1) {
      local_11c = (int *)(local_6c + -0xc);
      if (local_11c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_11c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_11c = *local_11c + -1;
        iVar3 = *local_11c + 1;
      }
      if (iVar3 != 0) goto LAB_004596a5;
    }
    local_120 = local_6c + -0xc;
    local_124 = local_6c + -0xc;
    FUN_004cc0bc();
    local_128 = 0;
    local_12c = local_74;
    local_6c = 0;
    local_1d0 = 0;
  }
LAB_004596a5:
  local_b8 = 8;
  if (local_110 < 1) {
    local_110 = 1;
  }
  else if (100 < local_110) {
    local_110 = 100;
  }
  FUN_0041b218(param_1 + 0xb6);
  local_138[2] = 100;
  local_138[1] = 1;
  FUN_004a76a8(param_1[0xe5],0x465,0,0x10064);
  piVar2 = local_138;
  local_138[0] = 100;
  local_b8 = 0x74;
  FUN_004cf628((int)local_84,(uint *)s_RangeLongest_004f7604);
  local_ac = local_ac + 1;
  FUN_0044e9c0((int)local_c,(int)local_84,piVar2);
  local_ac = local_ac + -1;
  if (local_7c != 0) {
    if (*(int *)(local_7c + -0xc) != -1) {
      local_144 = (int *)(local_7c + -0xc);
      if (local_144 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_144 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_144 = *local_144 + -1;
        iVar3 = *local_144 + 1;
      }
      if (iVar3 != 0) goto LAB_00459819;
    }
    local_148 = local_7c + -0xc;
    local_14c = local_7c + -0xc;
    FUN_004cc0bc();
    local_150 = 0;
    local_154 = local_84;
    local_7c = 0;
    local_1e0 = 0;
  }
LAB_00459819:
  local_b8 = 8;
  if (local_138[0] < 1) {
    local_138[0] = 1;
  }
  else if (100 < local_138[0]) {
    local_138[0] = 100;
  }
  FUN_0041b218(param_1 + 0x143);
  local_158 = 100;
  local_15c = 1;
  FUN_004a76a8(param_1[0x172],0x465,0,0x10064);
  local_160 = 0;
  do {
    FUN_004e0344((undefined1 *)local_21c,&DAT_004f7826);
    local_8c = &DAT_00513d64;
    local_224 = &DAT_00513d64;
    local_ac = local_ac + 1;
    puVar6 = local_94;
    local_b8 = 0xb0;
    FUN_004cf628((int)local_a4,local_21c);
    local_ac = local_ac + 1;
    uVar1 = FUN_0044e94c((int)local_c,(int)local_a4,(int)puVar6);
    if (((char)uVar1 == '\0') || (*(int *)(local_8c + -4) == 0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    local_ac = local_ac + -1;
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar2 = (int *)(local_9c + -0xc);
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
        if (iVar3 != 0) goto LAB_00459a06;
      }
      local_16c = local_9c + -0xc;
      local_170 = local_9c + -0xc;
      FUN_004cc0bc();
      local_174 = 0;
      local_178 = local_a4;
      local_9c = 0;
      local_234 = 0;
    }
LAB_00459a06:
    if (cVar4 == '\0') {
      local_ac = local_ac + -1;
      if (local_8c == (undefined *)0x0) break;
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar2 = (int *)(local_8c + -0xc);
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
        if (iVar3 != 0) break;
      }
      local_17c = local_8c + -0xc;
      local_180 = local_8c + -0xc;
      FUN_004cc0bc();
      local_184 = 0;
      local_188 = local_94;
      local_8c = (undefined *)0x0;
      local_244 = 0;
      break;
    }
    (**(code **)(param_1[0x59] + 0x60))();
    local_ac = local_ac + -1;
    if (local_8c != (undefined *)0x0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar2 = (int *)(local_8c + -0xc);
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
        if (iVar3 != 0) goto LAB_00459b7e;
      }
      local_18c = local_8c + -0xc;
      local_190 = local_8c + -0xc;
      FUN_004cc0bc();
      local_194 = 0;
      local_198 = local_94;
      local_8c = (undefined *)0x0;
      local_254 = 0;
    }
LAB_00459b7e:
    local_b8 = 8;
    local_160 = local_160 + 1;
  } while (local_160 < 100);
  local_b8 = 0xe0;
  FUN_004a8760(&local_34);
  local_ac = local_ac + 3;
  local_b8 = 8;
  (**(code **)(local_2f + 0x14))();
  lptm = &local_294;
  hdc = (HDC)(**(code **)(local_2f + 0x5c))();
  GetTextMetricsA(hdc,lptm);
  param_1[0x31e] = local_294.tmHeight + 4;
  local_ac = local_ac + -3;
  FUN_004a86dc(&local_34,0);
  local_ac = local_ac + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_c8;
  return;
}


// rea decompile_all
// name: FUN_0045ce74
// address: 0x45ce74
// body: available
// range: 0x45ce74-0x45d631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0045d0d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0045ce74(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  uint local_29c [64];
  tagRECT local_19c;
  LONG local_18c [6];
  undefined *local_174;
  undefined4 local_164;
  undefined4 local_154;
  undefined1 *local_14c;
  undefined4 local_148;
  int local_144;
  int local_140;
  undefined1 *local_134;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined *local_11c;
  undefined *local_118;
  undefined1 *local_114;
  undefined4 local_110;
  int local_10c;
  int local_108;
  int *local_104;
  undefined4 *local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int *local_e4;
  int *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  undefined *local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  bVar7 = 0;
  FUN_004dce64(0x4f9d40);
  local_90 = 0x14;
  iVar10 = 0;
  iVar8 = 1;
  FUN_004649b0((int)local_1c);
  local_84 = local_84 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar8,iVar10);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar4 = (int *)(local_14 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar8 = *piVar4 + 1;
      }
      if (iVar8 != 0) goto LAB_0045cf56;
    }
    local_a4 = local_14 + -0xc;
    local_a8 = local_14 + -0xc;
    FUN_004cc0bc();
    local_ac = 0;
    local_b0 = local_1c;
    local_14 = 0;
    local_154 = 0;
  }
LAB_0045cf56:
  piVar4 = &local_b4;
  local_90 = 0x2c;
  FUN_004cf628((int)local_2c,(uint *)s_QuickReference_004f75d8);
  local_84 = local_84 + 1;
  uVar2 = FUN_0044e9c0((int)local_c,(int)local_2c,piVar4);
  if (((char)uVar2 == '\0') || (local_b4 != 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  local_84 = local_84 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar4 = (int *)(local_24 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar8 = *piVar4 + 1;
      }
      if (iVar8 != 0) goto LAB_0045d03e;
    }
    local_c0 = local_24 + -0xc;
    local_c4 = local_24 + -0xc;
    FUN_004cc0bc();
    local_c8 = 0;
    local_cc = local_2c;
    local_24 = 0;
    local_164 = 0;
  }
LAB_0045d03e:
  if (cVar9 != '\0') {
    local_d0 = FUN_0045cbd0(param_1,1);
    local_90 = 0x44;
    FUN_004cf628((int)local_3c,(uint *)s_Definition1_004f78ec);
    local_84 = local_84 + 1;
    local_90 = 0x50;
    uVar1 = *(uint *)(local_34 + -4);
    pcVar3 = FUN_004dc9f4((uint *)s_Position_004f7360);
    FUN_004cfad4((int)local_3c,uVar1,0,0x4f7360,(uint)pcVar3,0,(uint)pcVar3);
    local_44 = &DAT_00513d64;
    local_174 = &DAT_00513d64;
    local_84 = local_84 + 1;
    local_90 = 0x50;
    FUN_0044e94c((int)local_c,(int)local_3c,(int)local_4c);
    if (*(int *)(local_44 + -4) == 0) {
      local_19c.left = 0;
      local_19c.top = 0;
      local_19c.right = 0;
      local_19c.bottom = 0;
      FUN_004a7a30(*(int *)(*param_1 + 0x14),&local_19c);
      ptVar5 = &local_19c;
      pLVar6 = local_18c;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pLVar6 = ptVar5->left;
        ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar7 * -2 + 1) * 4);
        pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
      }
      GetSystemMetrics(0);
      FUN_0044eee4((undefined1 *)local_29c);
      local_90 = 0x74;
      iVar8 = FUN_004cf628((int)local_5c,local_29c);
      local_84 = local_84 + 1;
      FUN_0044ec78((int)local_c,(int)local_3c,iVar8);
      local_84 = local_84 + -1;
      if (local_54 != 0) {
        if (*(int *)(local_54 + -0xc) != -1) {
          local_e4 = (int *)(local_54 + -0xc);
          if (local_e4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (local_e4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *local_e4 = *local_e4 + -1;
            iVar8 = *local_e4 + 1;
          }
          if (iVar8 != 0) goto LAB_0045d279;
        }
        local_e8 = local_54 + -0xc;
        local_ec = local_54 + -0xc;
        FUN_004cc0bc();
        local_f0 = 0;
        local_f4 = local_5c;
        local_54 = 0;
      }
LAB_0045d279:
      local_90 = 0x50;
      if (1 < *(int *)(local_34 + -0xc) + 1) {
        FUN_004d48d8((int)local_3c);
      }
      local_f8 = (undefined4 *)(local_34 + -0xc);
      if (local_f8 != &DAT_00513d58) {
        *local_f8 = 0xffffffff;
      }
      *(undefined1 *)(local_34 + 10) = 0x32;
      GetSystemMetrics(0);
      FUN_0044eee4((undefined1 *)local_29c);
      local_90 = 0x8c;
      iVar8 = FUN_004cf628((int)local_6c,local_29c);
      local_84 = local_84 + 1;
      FUN_0044ec78((int)local_c,(int)local_3c,iVar8);
      local_84 = local_84 + -1;
      if (local_64 != 0) {
        if (*(int *)(local_64 + -0xc) != -1) {
          local_104 = (int *)(local_64 + -0xc);
          if (local_104 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (local_104 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *local_104 = *local_104 + -1;
            iVar8 = *local_104 + 1;
          }
          if (iVar8 != 0) goto LAB_0045d3e0;
        }
        local_108 = local_64 + -0xc;
        local_10c = local_64 + -0xc;
        FUN_004cc0bc();
        local_110 = 0;
        local_64 = 0;
        local_114 = local_6c;
      }
LAB_0045d3e0:
      local_90 = 0x50;
    }
    local_84 = local_84 + -1;
    if (local_44 != (undefined *)0x0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        piVar4 = (int *)(local_44 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar8 = *piVar4 + 1;
        }
        if (iVar8 != 0) goto LAB_0045d479;
      }
      local_118 = local_44 + -0xc;
      local_11c = local_44 + -0xc;
      FUN_004cc0bc();
      local_120 = 0;
      local_44 = (undefined *)0x0;
      local_124 = local_4c;
    }
LAB_0045d479:
    local_84 = local_84 + -1;
    if (local_34 != 0) {
      if (*(int *)(local_34 + -0xc) != -1) {
        piVar4 = (int *)(local_34 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar8 = *piVar4 + 1;
        }
        if (iVar8 != 0) goto LAB_0045d512;
      }
      local_128 = local_34 + -0xc;
      local_12c = local_34 + -0xc;
      FUN_004cc0bc();
      local_130 = 0;
      local_134 = local_3c;
      local_34 = 0;
    }
  }
LAB_0045d512:
  piVar4 = &local_b4;
  local_90 = 0xbc;
  FUN_004cf628((int)local_7c,(uint *)s_StartupTips_004f75e7);
  local_84 = local_84 + 1;
  uVar2 = FUN_0044e9c0((int)local_c,(int)local_7c,piVar4);
  if (((char)uVar2 == '\0') || (local_b4 != 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  local_84 = local_84 + -1;
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar4 = (int *)(local_74 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar8 = *piVar4 + 1;
      }
      if (iVar8 != 0) goto LAB_0045d5f4;
    }
    local_140 = local_74 + -0xc;
    local_144 = local_74 + -0xc;
    FUN_004cc0bc();
    local_148 = 0;
    local_14c = local_7c;
    local_74 = 0;
  }
LAB_0045d5f4:
  if (cVar9 == '\0') {
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  else {
    FUN_0045cd28(param_1);
  }
  local_84 = local_84 + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_a0;
  return;
}


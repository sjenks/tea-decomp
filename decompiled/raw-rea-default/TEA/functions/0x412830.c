// rea decompile_all
// name: FUN_00412830
// address: 0x412830
// body: available
// range: 0x412830-0x412ca9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00412830(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_158 [15];
  undefined4 local_11c;
  undefined4 local_10c;
  undefined4 local_fc;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int *local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int *local_d0;
  undefined1 *local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined1 *local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4eccac);
  local_70 = 0x14;
  iVar4 = 0;
  iVar3 = 1;
  FUN_004649b0((int)local_1c);
  local_64 = local_64 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar3,iVar4);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar1 = (int *)(local_14 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_004128fc;
    }
    local_84 = local_14 + -0xc;
    FUN_004cc0bc();
    local_88 = 0;
    local_8c = local_1c;
    local_14 = 0;
    local_fc = 0;
  }
LAB_004128fc:
  local_70 = 8;
  if (*(int *)(param_1 + 0xa4) == 0) {
    pcVar2 = s_FileDictionary_004ecb28;
  }
  else {
    pcVar2 = s_FileCrossword_004ecb37;
  }
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) goto LAB_00412a9b;
  local_70 = 0x2c;
  FUN_004cf628((int)local_2c,*(uint **)(param_1 + 8));
  puVar5 = local_2c;
  local_64 = local_64 + 1;
  FUN_004cf628((int)local_3c,(uint *)pcVar2);
  local_64 = local_64 + 1;
  FUN_0044ec78((int)local_c,(int)local_3c,(int)puVar5);
  local_64 = local_64 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar1 = (int *)(local_34 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_00412a02;
    }
    local_a0 = local_34 + -0xc;
    local_a4 = local_34 + -0xc;
    FUN_004cc0bc();
    local_a8 = 0;
    local_ac = local_3c;
    local_34 = 0;
    local_10c = 0;
  }
LAB_00412a02:
  local_70 = 8;
  local_64 = local_64 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar1 = (int *)(local_24 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_00412a9b;
    }
    local_b0 = local_24 + -0xc;
    local_b4 = local_24 + -0xc;
    FUN_004cc0bc();
    local_b8 = 0;
    local_bc = local_2c;
    local_24 = 0;
    local_11c = 0;
  }
LAB_00412a9b:
  iVar3 = 1;
  piVar1 = (int *)(param_1 + 0x18);
  do {
    FUN_004e0344((undefined1 *)local_158,&DAT_004ecb45);
    if (*(int *)(*piVar1 + -4) != 0) {
      local_70 = 0x50;
      FUN_004cf628((int)local_4c,(uint *)*piVar1);
      local_64 = local_64 + 1;
      puVar5 = local_4c;
      FUN_004cf628((int)local_5c,local_158);
      local_64 = local_64 + 1;
      FUN_0044ec78((int)local_c,(int)local_5c,(int)puVar5);
      local_64 = local_64 + -1;
      if (local_54 != 0) {
        if (*(int *)(local_54 + -0xc) != -1) {
          local_d0 = (int *)(local_54 + -0xc);
          if (local_d0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_d0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_d0 = *local_d0 + -1;
            iVar4 = *local_d0 + 1;
          }
          if (iVar4 != 0) goto LAB_00412bc6;
        }
        local_d4 = local_54 + -0xc;
        local_d8 = local_54 + -0xc;
        FUN_004cc0bc();
        local_dc = 0;
        local_e0 = local_5c;
        local_54 = 0;
      }
LAB_00412bc6:
      local_70 = 8;
      local_64 = local_64 + -1;
      if (local_44 != 0) {
        if (*(int *)(local_44 + -0xc) != -1) {
          local_e4 = (int *)(local_44 + -0xc);
          if (local_e4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_e4 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_e4 = *local_e4 + -1;
            iVar4 = *local_e4 + 1;
          }
          if (iVar4 != 0) goto LAB_00412c7b;
        }
        local_e8 = local_44 + -0xc;
        local_ec = local_44 + -0xc;
        FUN_004cc0bc();
        local_f0 = 0;
        local_f4 = local_4c;
        local_44 = 0;
      }
    }
LAB_00412c7b:
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 4;
    if (9 < iVar3) {
      local_64 = local_64 + -1;
      FUN_0044e920((int)local_c,2);
      *in_FS_OFFSET = local_80;
      return;
    }
  } while( true );
}


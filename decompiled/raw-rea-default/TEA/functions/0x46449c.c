// rea decompile_all
// name: FUN_0046449c
// address: 0x46449c
// body: available
// range: 0x46449c-0x46495a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004645d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0046449c(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar4;
  undefined3 extraout_var;
  undefined *puVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint local_114 [15];
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined4 local_cc;
  uint *local_c8;
  uint *local_c4;
  undefined1 *local_c0;
  undefined4 local_bc;
  uint *local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  uint *local_ac;
  uint *local_a8;
  uint local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined1 *local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int *local_78;
  int local_74;
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined1 local_4c [8];
  uint *local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  uint *local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  undefined4 uVar3;
  
  FUN_004dce64(0x4fbc4c);
  local_74 = 1;
  local_60 = 0x14;
  iVar8 = 0;
  iVar7 = 0;
  FUN_004649b0((int)local_1c);
  local_54 = local_54 + 1;
  FUN_0044e83c(local_c,(int)local_1c,iVar7,iVar8);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      local_78 = (int *)(local_14 + -0xc);
      if (local_78 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (local_78 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *local_78 = *local_78 + -1;
        iVar7 = *local_78 + 1;
      }
      if (iVar7 != 0) goto LAB_0046457d;
    }
    local_7c = local_14 + -0xc;
    local_80 = local_14 + -0xc;
    FUN_004cc0bc();
    local_84 = 0;
    local_88 = local_1c;
    local_14 = 0;
    local_d8 = 0;
  }
LAB_0046457d:
  iVar7 = 1;
  do {
    local_60 = 8;
    FUN_004e0344((undefined1 *)local_114,&DAT_004fb4e9);
    local_24 = (uint *)&DAT_00513d64;
    local_54 = local_54 + 1;
    local_60 = 0x50;
    puVar9 = local_2c;
    FUN_004cf628((int)local_3c,local_114);
    local_54 = local_54 + 1;
    uVar3 = FUN_0044e94c((int)local_c,(int)local_3c,(int)puVar9);
    cVar1 = (char)uVar3;
    local_54 = local_54 + -1;
    if (local_34 != 0) {
      if (*(int *)(local_34 + -0xc) != -1) {
        piVar6 = (int *)(local_34 + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar8 = *piVar6 + 1;
        }
        if (iVar8 != 0) goto LAB_004646a7;
      }
      local_94 = local_34 + -0xc;
      local_98 = local_34 + -0xc;
      FUN_004cc0bc();
      local_9c = 0;
      local_a0 = local_3c;
      local_34 = 0;
    }
LAB_004646a7:
    if (cVar1 != '\0') {
      local_74 = 0;
    }
    if ((local_74 != 0) && (iVar7 < 5)) {
      FUN_004cf41c((int)local_2c,(uint *)s_Dictionaries__004fb53d);
      puVar10 = *(uint **)(iVar7 * 4 + 0x4fb324);
      local_a4 = local_24[-1];
      pcVar4 = FUN_004dc9f4(puVar10);
      FUN_004cfad4((int)local_2c,local_a4,0,(uint)puVar10,(uint)pcVar4,0,(uint)pcVar4);
    }
    if (local_24[-1] == 0) {
      local_54 = local_54 + -1;
      if (local_24 != (uint *)0x0) {
        if (local_24[-3] != 0xffffffff) {
          puVar10 = local_24 + -3;
          if (puVar10 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (puVar10 == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *puVar10 = *puVar10 - 1;
            iVar7 = *puVar10 + 1;
          }
          if (iVar7 != 0) goto LAB_00464788;
        }
        local_b8 = local_24 + -3;
        FUN_004cc0bc();
        local_bc = 0;
        local_24 = (uint *)0x0;
        local_c0 = local_2c;
      }
LAB_00464788:
      local_60 = 0x44;
      break;
    }
    bVar2 = FUN_00436f50((int)local_2c);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      FUN_00464bb4(param_1,local_24);
    }
    else {
      local_60 = 0x74;
      FUN_00437470((int)local_4c,(int)local_2c);
      local_54 = local_54 + 1;
      local_60 = 0x68;
      FUN_00464bb4(param_1,local_44);
      puVar10 = local_44;
      puVar5 = FUN_0041238c(param_1,0);
      FUN_0041251c((int)puVar5,puVar10);
      local_54 = local_54 + -1;
      if (local_44 != (uint *)0x0) {
        if (local_44[-3] != 0xffffffff) {
          puVar10 = local_44 + -3;
          if (puVar10 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (puVar10 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *puVar10 = *puVar10 - 1;
            iVar8 = *puVar10 + 1;
          }
          if (iVar8 != 0) goto LAB_0046487c;
        }
        local_a8 = local_44 + -3;
        local_ac = local_44 + -3;
        FUN_004cc0bc();
        local_b0 = 0;
        local_b4 = local_4c;
        local_44 = (uint *)0x0;
      }
LAB_0046487c:
      local_60 = 0x44;
    }
    local_54 = local_54 + -1;
    if (local_24 != (uint *)0x0) {
      if (local_24[-3] != 0xffffffff) {
        puVar10 = local_24 + -3;
        if (puVar10 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (puVar10 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *puVar10 = *puVar10 - 1;
          iVar8 = *puVar10 + 1;
        }
        if (iVar8 != 0) goto LAB_00464924;
      }
      local_c4 = local_24 + -3;
      local_c8 = local_24 + -3;
      FUN_004cc0bc();
      local_cc = 0;
      local_24 = (uint *)0x0;
      local_d0 = local_2c;
    }
LAB_00464924:
    local_60 = 8;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  local_54 = local_54 + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}


// rea decompile_all
// name: FUN_00499538
// address: 0x499538
// body: available
// range: 0x499538-0x4999b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004995ba) */

undefined4 __cdecl FUN_00499538(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1d8 [248];
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_cc;
  uint local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  undefined1 *local_a4;
  int *local_a0;
  int *local_9c;
  uint local_98;
  int *local_94;
  undefined1 *local_90;
  int *local_8c;
  undefined4 local_88;
  uint *local_7c;
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined4 local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined4 local_14 [4];
  
  FUN_004dce64(0x508560);
  local_68 = 8;
  FUN_00499268(local_14,param_3,0,0,0);
  local_5c = local_5c + 1;
  local_68 = 0x14;
  uVar1 = FUN_00499110(*param_1,(int)local_14);
  if (uVar1 != 0xffffffff) goto LAB_0049998b;
  local_1c = &DAT_00513d64;
  local_e0 = &DAT_00513d64;
  local_5c = local_5c + 1;
  local_68 = 0x38;
  if (DAT_005140ac - 0xeU < 0x80) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00408370;
    uVar5 = 0;
    local_68 = 0x50;
    local_7c = (uint *)FUN_004dc320(local_1d8,PTR_s_invalid_string_size_parameter_in_00516d20);
    FUN_004cf628((int)local_4c,local_7c);
    local_5c = local_5c + 2;
    local_3c[0] = &PTR_FUN_004ecaac;
    local_88 = 0;
    local_2c = (int *)0x0;
    local_68 = 0x5c;
    if (local_44[-3] == -1 || local_44[-3] + 1 < 0) {
      local_98 = local_44[-1];
      local_a0 = FUN_004cf7b0(local_34,local_98,local_98);
      local_b0 = local_a0 + 3;
      local_a4 = local_34;
      local_a8 = local_98;
      local_ac = local_44;
      local_9c = local_b0;
      local_2c = local_b0;
      FUN_004dc7d4(local_b0,local_44,local_98);
    }
    else {
      local_8c = local_44;
      local_2c = local_44;
      local_90 = local_34;
      local_94 = local_44 + -3;
      if (local_94 != &DAT_00513d58) {
        *local_94 = *local_94 + 1;
      }
    }
    local_68 = 0x50;
    local_3c[0] = &PTR_LAB_004ecac0;
    local_5c = local_5c + 2;
    if (local_44 != (int *)0x0) {
      if (local_44[-3] != -1) {
        local_b4 = local_44 + -3;
        if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_00499820;
      }
      local_b8 = local_44 + -3;
      local_bc = local_44 + -3;
      FUN_004cc0bc();
      local_c0 = 0;
      local_44 = (int *)0x0;
      local_c4 = local_4c;
    }
LAB_00499820:
    local_68 = 0x44;
    FUN_004e7cc4((uint *)&DAT_00408314,local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(uint *)(local_1c + -8) < 0x80) {
    FUN_004d6d58((int)local_24,0x80);
  }
  FUN_004cf41c((int)local_24,(uint *)s_Attempt_to_stream_unregistered_t_005083c2);
  local_c8 = *(uint *)(local_1c + -4);
  pcVar2 = FUN_004dc9f4(param_3);
  FUN_004cfad4((int)local_24,local_c8,0,(uint)param_3,(uint)pcVar2,0,(uint)pcVar2);
  uVar7 = *(uint *)(local_1c + -4);
  pcVar2 = FUN_004dc9f4((uint *)(s_Attempt_to_stream_unregistered_t_005083c2 + 0x24));
  FUN_004cfad4((int)local_24,uVar7,0,0x5083e6,(uint)pcVar2,0,(uint)pcVar2);
  local_68 = 0x80;
  piVar3 = FUN_0048e860(local_54,(int)local_24);
  local_5c = local_5c + 2;
  (**(code **)(*piVar3 + 0xc))();
  local_5c = local_5c + -2;
  FUN_0048ea24(local_54,2);
  local_5c = local_5c + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0049997f;
    }
    local_cc = local_1c + -0xc;
    local_d0 = local_1c + -0xc;
    FUN_004cc0bc();
    local_d4 = 0;
    local_1c = (undefined *)0x0;
    local_d8 = local_24;
  }
LAB_0049997f:
  local_68 = 0x14;
LAB_0049998b:
  uVar5 = *(undefined4 *)(*(int *)(*param_1 + 9) + uVar1 * 4);
  local_5c = local_5c + -1;
  FUN_004992f8((int)local_14,2);
  *in_FS_OFFSET = local_78;
  return uVar5;
}


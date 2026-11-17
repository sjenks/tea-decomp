// rea decompile_all
// name: FUN_0044b7c0
// address: 0x44b7c0
// body: available
// range: 0x44b7c0-0x44b8ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_0044b7c0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  int local_30;
  undefined4 local_28 [2];
  int local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 4);
  while (iVar2 != 0) {
    local_c = iVar2;
    uVar1 = FUN_004d40d0(iVar2 + 0x10,0,*(uint *)(*(int *)(iVar2 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_8 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  local_20 = local_8;
  local_10 = *(int *)(param_2 + 0x24);
  local_30 = local_10;
  if (local_10 != local_8) {
    local_14 = local_8;
    uVar1 = FUN_004d40d0(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(local_8 + 0x18),
                         *(uint *)(*(int *)(local_8 + 0x18) + -4));
    if (-1 < (int)uVar1) {
      puVar3 = local_28;
      goto LAB_0044b89b;
    }
  }
  puVar3 = local_48;
  local_18 = *(undefined4 *)(param_2 + 0x24);
  local_40 = *(undefined4 *)(param_2 + 0x24);
LAB_0044b89b:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  return param_1;
}


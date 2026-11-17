// rea decompile_all
// name: FUN_00480608
// address: 0x480608
// body: available
// range: 0x480608-0x48070a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00480608(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10c [15];
  undefined4 local_d0 [41];
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x502bac);
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x254);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 == 0) {
      local_8 = (undefined4 *)FUN_004cc0f0();
      if (local_8 != (undefined4 *)0x0) {
        local_1c = 0x14;
        FUN_00480754(local_10c,param_1);
        puVar5 = local_10c;
        puVar4 = (undefined4 *)(param_1 + 0xb8);
        FUN_00481b70(local_d0,param_1);
        FUN_00481f7c(local_8,local_d0,puVar4,puVar5);
        local_1c = 8;
      }
      iVar1 = *(int *)(param_1 + 0x254);
      iVar3 = 0;
      if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0x18)) {
        FUN_0047f820(iVar1,*(undefined4 **)(iVar1 + 8),&local_8);
      }
      else {
        **(int **)(iVar1 + 8) = (int)local_8;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
      }
    }
    else {
      iVar3 = (iVar3 >> 2) + -1;
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x254) + 4) + iVar3 * 4);
  }
  *in_FS_OFFSET = local_2c;
  return uVar2;
}


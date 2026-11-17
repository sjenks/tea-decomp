// rea decompile_all
// name: FUN_0043fe0c
// address: 0x43fe0c
// body: available
// range: 0x43fe0c-0x43ff47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0043fe0c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [8];
  int local_38;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x4f5f6c);
  local_c = 1;
  if (param_1 != 0) {
    local_18 = 8;
    for (local_2c = 0; local_2c < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38);
        local_2c = local_2c + 1) {
      local_30 = *(int *)(param_1 + 4) + local_2c * 0x38;
      local_18 = 8;
      local_38 = *(int *)(*(int *)(local_30 + 0x24) + 8);
      while( true ) {
        if (*(int *)(local_30 + 0x24) == local_38) break;
        iVar1 = *(int *)(local_38 + 0x20);
        if (iVar1 != 0) {
          FUN_0040957c(iVar1,*(int *)(iVar1 + 4),*(int *)(iVar1 + 8));
          FUN_004cc0bc();
          local_18 = 8;
          FUN_004cc0bc();
        }
        FUN_0043ff6c((int)local_40);
      }
    }
    local_c = local_c + -1;
    FUN_0043ffd0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


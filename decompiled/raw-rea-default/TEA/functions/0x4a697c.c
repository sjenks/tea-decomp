// rea decompile_all
// name: FUN_004a697c
// address: 0x4a697c
// body: available
// range: 0x4a697c-0x4a6a2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004a697c(int param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c [2];
  
  FUN_004dce64(0x50b1b8);
  if ((((*(int *)(param_1 + 0x5c) == DAT_0051b19c) || (*(int *)(param_1 + 0x5c) == DAT_0051b1a0)) ||
      (param_4 == 1)) || (param_4 == 2)) {
    uVar1 = FUN_004a5774(param_1);
    *in_FS_OFFSET = local_30;
  }
  else {
    uVar1 = FUN_0048c12c((uint *)(param_1 + 0x5c));
    SetBkColor(param_2,uVar1);
    puVar2 = FUN_004ab84c(local_c,(uint *)(param_1 + 0x5c),'\x01');
    uVar1 = *puVar2;
    FUN_004ab9b4(local_c,2);
    *in_FS_OFFSET = local_30;
  }
  return uVar1;
}


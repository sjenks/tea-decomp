// rea decompile_all
// name: FUN_004a6214
// address: 0x4a6214
// body: available
// range: 0x4a6214-0x4a62c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a6214(int param_1,int param_2)

{
  uint uVar1;
  tagRECT local_14;
  
  FUN_004a4db4(param_1);
  if (((DAT_0050abee == '\0') && (*(int *)(param_1 + 0x44) != 0)) && (param_2 != 1)) {
    DAT_0050abee = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    DAT_0050abee = '\0';
  }
  if (param_2 == 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a30(param_1,&local_14);
    *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
    *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_004a793c(param_1);
    if ((uVar1 & 4) == 0) {
      FUN_004a76a8(*(int *)(param_1 + 0x14),0x210,5,*(LPARAM *)(param_1 + 0xc));
    }
  }
  FUN_004a5774(param_1);
  return;
}


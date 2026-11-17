// rea decompile_all
// name: FUN_004afa14
// address: 0x4afa14
// body: available
// range: 0x4afa14-0x4afa7c inclusive
// range: 0x4afa93-0x4afada inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004afa14(int *param_1,int param_2,int param_3)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffff0ff | param_3 << 8;
  FUN_004a7988(param_1[1],0,0x4000000,0);
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  FUN_004950cc((int)(param_1 + 1),param_2);
  if ((*(byte *)(param_2 + 0x1b) & 0x10) != 0) {
    switch(param_3) {
    case 1:
      FUN_004af210((int)param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 2:
      FUN_004af394(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 3:
      FUN_004af558(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 4:
      FUN_004af794(param_1,param_2,*(int *)(*param_1 + 0x15));
    }
  }
  return;
}


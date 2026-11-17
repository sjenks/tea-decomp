// rea decompile_all
// name: FUN_004d1804
// address: 0x4d1804
// body: available
// range: 0x4d1804-0x4d184f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004d1804(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uStack_8;
  
  uVar1 = FUN_004d17a8((int)param_1);
  uVar2 = FUN_004d17b4((int)param_1);
  if (uVar1 < uVar2) {
    puVar3 = (undefined1 *)FUN_004d17a8((int)param_1);
    uStack_8 = CONCAT13(*puVar3,(undefined3)uStack_8);
    FUN_004d1850((int)param_1,1);
    FUN_004d179c((undefined1 *)((int)&uStack_8 + 3));
  }
  else {
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}


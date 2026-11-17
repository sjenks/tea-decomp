// rea decompile_all
// name: thunk_FUN_0041ffdc
// address: 0x4207f4
// body: available
// range: 0x4207f4-0x4207f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl thunk_FUN_0041ffdc(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_00432528 <= param_1) {
    uVar1 = FUN_004211cc(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_0043252c + param_1 * 4 + 2) & 1) == 0) &&
     (BVar2 = CloseHandle(*(HANDLE *)(&DAT_00434d98 + param_1 * 4)), BVar2 != 1)) {
    uVar1 = FUN_00421230();
    return uVar1;
  }
  (&DAT_0043252c)[param_1] = 0;
  *(undefined4 *)(&DAT_00434d98 + param_1 * 4) = 0xffffffff;
  return 0;
}


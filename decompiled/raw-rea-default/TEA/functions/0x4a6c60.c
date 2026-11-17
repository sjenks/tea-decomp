// rea decompile_all
// name: FUN_004a6c60
// address: 0x4a6c60
// body: available
// range: 0x4a6c60-0x4a6d07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a6c60(int param_1,undefined4 *param_2)

{
  HCURSOR pHVar1;
  undefined4 uVar2;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = *(undefined4 *)(*(int *)(param_1 + 0x70) + 8);
  param_2[5] = 0;
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  param_2[6] = pHVar1;
  if ((((*(uint *)(param_1 + 0x5c) & 0xf0000000) == 0x80000000) &&
      (*(int *)(param_1 + 0x5c) != DAT_0051b19c)) && (*(int *)(param_1 + 0x5c) != DAT_0051b1a0)) {
    param_2[7] = (*(uint *)(param_1 + 0x5c) & 0xffff) + 1;
  }
  else {
    param_2[7] = 6;
  }
  param_2[8] = 0;
  uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x74))();
  param_2[9] = uVar2;
  *param_2 = 8;
  param_2[1] = FUN_0049ac8c;
  return;
}


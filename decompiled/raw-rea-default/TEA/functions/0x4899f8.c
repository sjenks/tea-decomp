// rea decompile_all
// name: FUN_004899f8
// address: 0x4899f8
// body: available
// range: 0x4899f8-0x489a14 inclusive
// range: 0x489a29-0x489ada inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004899f8(int *param_1)

{
  switch((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c) {
  case 1:
    if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c != 1) {
      FUN_00488f94(param_1);
    }
    break;
  case 2:
    *(byte *)(param_1 + 0x15) =
         (*(byte *)(param_1 + 0x15) & 0xf) == 0 | *(byte *)(param_1 + 0x15) & 0xf0;
    break;
  case 3:
    if ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c == 1) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf0;
    }
    else {
      FUN_00488f94(param_1);
    }
  }
  (**(code **)(*param_1 + 0x68))();
  if (((((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c != 1) &&
       ((int)((uint)*(byte *)(param_1 + 0x15) << 0x18) >> 0x1c != 3)) ||
      ((int)((uint)*(byte *)(param_1 + 0x15) << 0x1c) >> 0x1c == 1)) &&
     ((*(byte *)((int)param_1 + 0x42) & 1) != 0)) {
    PostMessageA(*(HWND *)(**(int **)((int)param_1 + 6) + 0xc),0x111,
                 *(WPARAM *)((int)param_1 + 0x3a),0);
  }
  return;
}


// rea decompile_all
// name: FUN_004bdbb0
// address: 0x4bdbb0
// body: available
// range: 0x4bdbb0-0x4bdc69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004bdbb0(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  FUN_004be1e0(param_1,DAT_00512a1c,32000);
  FUN_004be26c(param_1,DAT_00512a1c,0x7d01);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0xffffffff;
  if (*(int *)((int)param_1 + 0x15) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 2;
    *(undefined4 *)(*param_1 + 0x5c) = DAT_0051b1a0;
  }
  return;
}


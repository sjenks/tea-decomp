// rea decompile_all
// name: FUN_00473df0
// address: 0x473df0
// body: available
// range: 0x473df0-0x473f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00473ece) */
/* WARNING: Removing unreachable block (ram,0x00473e2a) */
/* WARNING: Removing unreachable block (ram,0x00473ef0) */
/* WARNING: Removing unreachable block (ram,0x00473e65) */
/* WARNING: Removing unreachable block (ram,0x00473ea2) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x00473eaa */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00473df0(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ff31c);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x40;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x60) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x70) = &DAT_00513d64;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}


// rea decompile_all
// name: FUN_00495f90
// address: 0x495f90
// body: available
// range: 0x495f90-0x496087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00495f90(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50763c);
  *param_1 = 0;
  *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xf0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) & 0xf0;
  *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0xb) = 0;
  *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xf0 | 1;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xf0 | 1;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf0 | 5;
  *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) & 0xf0 | 5;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xf0;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(byte *)((int)param_1 + 0x27) = *(byte *)((int)param_1 + 0x27) & 0xf0 | 6;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 0xf0 | 6;
  *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) & 0xf0;
  *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) & 0xf | 0x10;
  param_1[10] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}


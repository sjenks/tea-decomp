// rea decompile_all
// name: FUN_00495da0
// address: 0x495da0
// body: available
// range: 0x495da0-0x495e5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __cdecl FUN_00495da0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50762c);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 5) = *param_3;
  *(undefined4 *)(param_1 + 9) = param_3[1];
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_3 + 2);
  param_1[0xf] = *(undefined1 *)((int)param_3 + 10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)param_3 + 0xb);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)param_3 + 0xf);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)((int)param_3 + 0x13);
  param_1[0x1a] = *(undefined1 *)((int)param_3 + 0x15);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((int)param_3 + 0x16);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)((int)param_3 + 0x1a);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)((int)param_3 + 0x1e);
  param_1[0x25] = *(undefined1 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)param_3 + 0x21);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)param_3 + 0x25);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((int)param_3 + 0x29);
  param_1[0x30] = *(undefined1 *)((int)param_3 + 0x2b);
  FUN_004cc3c4((int *)(param_1 + 0x31),9,4,1,FUN_00494c8c);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}


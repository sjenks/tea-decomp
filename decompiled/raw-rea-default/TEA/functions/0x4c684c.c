// rea decompile_all
// name: FUN_004c684c
// address: 0x4c684c
// body: available
// range: 0x4c684c-0x4c6945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_004c684c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5117f0);
  *param_1 = &PTR_FUN_004ea93c;
  *param_1 = &PTR_FUN_00511834;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x1a) & 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x3b) = uVar1;
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x1a) & 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}


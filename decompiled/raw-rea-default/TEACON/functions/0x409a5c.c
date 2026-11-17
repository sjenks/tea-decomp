// rea decompile_all
// name: FUN_00409a5c
// address: 0x409a5c
// body: available
// range: 0x409a5c-0x409b04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_00409a5c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42c49c);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = *(undefined4 *)(param_3 * 4 + *(int *)(param_2 + 0xc));
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[0x11ff] = 0;
  param_1[1] = DAT_0042c488;
  *param_1 = 0;
  if (DAT_0042c484 == (undefined4 *)0x0) {
    DAT_0042c484 = param_1;
  }
  else {
    *DAT_0042c488 = param_1;
  }
  DAT_0042c488 = param_1;
  *in_FS_OFFSET = local_28;
  return param_1;
}


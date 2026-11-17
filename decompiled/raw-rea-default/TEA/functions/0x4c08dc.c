// rea decompile_all
// name: FUN_004c08dc
// address: 0x4c08dc
// body: available
// range: 0x4c08dc-0x4c09a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_004c08dc(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5)

{
  UINT uMode;
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x510270);
  *param_1 = &PTR_FUN_004ea93c;
  *param_1 = &PTR_FUN_00510770;
  param_1[1] = 0;
  if (param_3 == '\0') {
    param_1[2] = 0;
  }
  else {
    uMode = SetErrorMode(0x8001);
    pHVar1 = LoadLibraryA((LPCSTR)param_2);
    param_1[2] = pHVar1;
    if (((uint)param_1[2] < 0x21) && (param_4 != '\0')) {
      FUN_004c225c(param_2);
    }
    SetErrorMode(uMode);
  }
  *(char *)(param_1 + 3) = param_3;
  FUN_004c0b54((int)param_1,param_2);
  if (param_5 != '\0') {
    FUN_004c0490((int)param_1);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}


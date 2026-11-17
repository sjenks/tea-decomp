// rea decompile_all
// name: FUN_0049eb84
// address: 0x49eb84
// body: available
// range: 0x49eb84-0x49ec67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_0049eb84(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50965c);
  FUN_0048fcec(param_1,param_2);
  *param_1 = &PTR_FUN_005096c8;
  param_1[0x15] = param_7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = GetSystemMetrics(DAT_00509df8);
  *(char *)((int)param_1 + 0x33) = (char)iVar1;
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_1 + 0x33);
  param_1[0x13] = param_4;
  param_1[0x14] = param_5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_0049f044((int)param_1);
  FUN_0049f058((int)param_1);
  FUN_0048fe6c((int)param_1,0,1);
  FUN_0049ed44((int)param_1,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}


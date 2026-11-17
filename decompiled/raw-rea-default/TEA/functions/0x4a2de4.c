// rea decompile_all
// name: FUN_004a2de4
// address: 0x4a2de4
// body: available
// range: 0x4a2de4-0x4a2e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004a2de4(int *param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  COLORREF local_58;
  COLORREF local_54;
  COLORREF local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28 [9];
  
  FUN_004dce64(0x50a66c);
  local_3c = 8;
  FUN_0048d7c8(local_28,param_2);
  local_30 = local_30 + 1;
  local_3c = 0x14;
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      FUN_0048dd6c(&local_58,local_28,(uint *)(param_1 + 8));
    }
    else {
      FUN_0048dd6c(&local_54,local_28,(uint *)(param_1 + 9));
    }
  }
  else {
    FUN_0048dd6c(&local_50,local_28,(uint *)(param_1 + 10));
  }
  uVar1 = FUN_004a697c(*param_1,param_2,param_3,param_4);
  local_30 = local_30 + -1;
  FUN_0048d8bc(local_28,2);
  *in_FS_OFFSET = local_4c;
  return uVar1;
}


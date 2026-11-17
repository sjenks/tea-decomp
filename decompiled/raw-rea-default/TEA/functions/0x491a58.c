// rea decompile_all
// name: FUN_00491a58
// address: 0x491a58
// body: available
// range: 0x491a58-0x491b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00491a58(int *param_1,int *param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0048fbc8(param_1 + 10,&local_8,&local_c,&local_10,&local_14,(uint)*(byte *)(param_1 + 0xc));
  if (*(int *)(*param_1 + 0x28) == 0) {
    *param_2 = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = local_8;
    param_2[2] = *(int *)(*param_1 + 0x28) - local_c;
    if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
      iVar1 = GetSystemMetrics(DAT_00509df0);
      param_2[2] = param_2[2] + iVar1 * -2;
    }
  }
  if (*(int *)(*param_1 + 0x2c) == 0) {
    param_2[1] = 0;
    param_2[3] = 0;
  }
  else {
    param_2[1] = local_10;
    param_2[3] = *(int *)(*param_1 + 0x2c) - local_14;
    if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
      iVar1 = GetSystemMetrics(DAT_00509de8);
      param_2[3] = param_2[3] + iVar1 * -2;
    }
  }
  return;
}


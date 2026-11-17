// rea decompile_all
// name: FUN_004927d0
// address: 0x4927d0
// body: available
// range: 0x4927d0-0x492866 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004927d0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  FUN_004dce64(0x506ea0);
  if (*(int *)(param_1 + 0x37) == 0) {
    if (param_2 == 0) {
      param_2 = 10;
    }
    if (param_3 == 0) {
      param_3 = 10;
    }
    local_8 = (undefined4 *)FUN_004cc0f0();
    if (local_8 != (undefined4 *)0x0) {
      local_1c = 0x14;
      local_3c = param_2;
      local_38 = param_3;
      local_34 = param_2;
      local_30 = param_3;
      FUN_00489df0(local_8,&local_3c,1,10,5,1);
    }
    *(undefined4 **)(param_1 + 0x37) = local_8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x37);
  *in_FS_OFFSET = local_2c;
  return uVar1;
}


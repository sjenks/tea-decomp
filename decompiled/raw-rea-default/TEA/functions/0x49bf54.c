// rea decompile_all
// name: FUN_0049bf54
// address: 0x49bf54
// body: available
// range: 0x49bf54-0x49c029 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049bf54(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  LOGFONTA local_6c;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint *local_c;
  uint *local_8;
  
  FUN_004dce64(0x508b88);
  if (*param_2 != 0) {
    GetObjectA((HANDLE)*param_2,0x3c,&local_6c);
    puVar1 = *(uint **)(param_1 + 0x3d);
    local_8 = (uint *)FUN_004cc0f0();
    if (local_8 != (uint *)0x0) {
      local_20 = 0x14;
      FUN_0048f7fc(local_8,&local_6c);
      local_20 = 8;
    }
    *(uint **)(param_1 + 0x3d) = local_8;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x14))();
    local_c = puVar1;
    if (puVar1 != (uint *)0x0) {
      local_20 = 0x2c;
      local_14 = local_14 + -1;
      FUN_00494064(puVar1,0);
      FUN_004cc0bc();
      local_20 = 0x20;
    }
    if (**(int **)(param_1 + 0x3d) != *(int *)(param_1 + 0x39)) {
      *(undefined4 *)(param_1 + 0x39) = **(undefined4 **)(param_1 + 0x3d);
      (**(code **)(*(int *)(param_1 + 5) + 0x60))();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}


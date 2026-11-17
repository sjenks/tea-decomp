// rea decompile_all
// name: FUN_004da038
// address: 0x4da038
// body: available
// range: 0x4da038-0x4da13c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_004da038(undefined4 *param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_004dce64(0x516430);
  piVar2 = param_1 + 2;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = local_30;
  param_1[0xf] = local_2c;
  *piVar2 = 1;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  puVar3 = (undefined4 *)param_1[8];
  if (param_1[8] == 0) {
    if (param_1[9] == param_1[10]) {
      FUN_004d2384(piVar2);
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
  }
  else {
    param_1[8] = *(undefined4 *)(param_1[8] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  param_1[0xb] = puVar3;
  puVar3[1] = 0;
  puVar3[2] = puVar3;
  puVar3[3] = puVar3;
  *piVar2 = 0x2a;
  if (param_2 == (LPCSTR)0x0) {
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    *param_1 = pHVar1;
  }
  else {
    pHVar1 = LoadLibraryA(param_2);
    *param_1 = pHVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}


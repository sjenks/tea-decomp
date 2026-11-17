// rea decompile_all
// name: FUN_00448c4c
// address: 0x448c4c
// body: available
// range: 0x448c4c-0x448d1d inclusive
// range: 0x448d3f-0x448d95 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00448c4c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined **local_c;
  undefined **local_8;
  
  FUN_004dce64(0x4f6ccc);
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 == (int *)0x0) {
    local_8 = &PTR_FUN_004eac74;
    FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
  }
  iVar2 = FUN_004cc0f0();
  if (iVar2 == 0) {
    local_c = &PTR_FUN_004eac74;
    FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[4];
  piVar1[1] = *param_1;
  param_1[4] = (int)piVar1;
  iVar2 = *(int *)(param_1[4] + 8);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + *param_1 * 0x28;
  *in_FS_OFFSET = local_30;
  return;
}


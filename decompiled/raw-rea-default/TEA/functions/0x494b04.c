// rea decompile_all
// name: FUN_00494b04
// address: 0x494b04
// body: available
// range: 0x494b04-0x494c89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00494b04(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5074e8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x41;
    *(int *)((int)param_1 + 0x41) = (int)param_1 + 0x35;
    *(int *)((int)param_1 + 0x45) = (int)param_1 + 0x39;
    param_1[1] = (int)param_1 + 0x35;
    param_1[2] = (int)param_1 + 0x39;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x39) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4de0((int *)((int)param_1 + 0x41),1,param_3,param_4,param_5);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_005076c0;
  *(undefined ***)param_1[1] = &PTR_LAB_005076d8;
  *(undefined ***)param_1[2] = &PTR_LAB_005076e4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_005076f0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_004a5098(*param_1,param_3,param_4,param_5);
  *(undefined4 *)((int)param_1 + 0x29) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  piVar1 = FUN_004cc3c4((int *)0x0,9,4,1,FUN_00494c8c);
  param_1[9] = (int)piVar1;
  *(undefined1 *)(param_1[9] + 8) = 1;
  *(undefined1 *)(param_1[9] + 0x11) = 1;
  *(undefined1 *)(param_1[9] + 0x1a) = 1;
  *(undefined1 *)(param_1[9] + 0x23) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}


// rea decompile_all
// name: FUN_0048ce64
// address: 0x48ce64
// body: available
// range: 0x48ce64-0x48d074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0048ce64(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,uint *param_5,
            int param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505b4c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5d;
    *(int *)((int)param_1 + 0x5d) = (int)param_1 + 0x51;
    *(int *)((int)param_1 + 0x61) = (int)param_1 + 0x55;
    param_1[4] = (int)param_1 + 0x51;
    param_1[5] = (int)param_1 + 0x55;
    *(undefined4 *)((int)param_1 + 0x4d) = 0;
    *(undefined4 *)((int)param_1 + 0x59) = 0;
    *(undefined ***)((int)param_1 + 0x51) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x55) = &PTR_FUN_004ea93c;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x5d),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  FUN_00491150(param_1,1,param_3,param_4,param_5,param_6);
  param_1[6] = (int)&PTR_FUN_00505b90;
  param_1[1] = (int)&PTR_LAB_00505c04;
  *(undefined ***)param_1[4] = &PTR_LAB_00505c24;
  *(undefined ***)param_1[5] = &PTR_LAB_00505c30;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505c3c;
  param_1[10] = 2;
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    iVar1 = GetSystemMetrics(DAT_00509df8);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_00509e00);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  else {
    iVar1 = GetSystemMetrics(DAT_00509df8);
    *(char *)((int)param_1 + 0x2d) = (char)iVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((int)param_1 + 0x2d);
    iVar1 = GetSystemMetrics(DAT_00509e00);
    *(char *)((int)param_1 + 0x2f) = (char)iVar1;
    *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_1 + 0x2f);
  }
  *(undefined1 *)((int)param_1 + 0x3f) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}


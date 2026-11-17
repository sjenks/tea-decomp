// rea decompile_all
// name: FUN_0048b0c0
// address: 0x48b0c0
// body: available
// range: 0x48b0c0-0x48b29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0048b0c0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505470);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x15);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[1] = (int)(param_1 + 0x12);
    param_1[2] = (int)(param_1 + 0x13);
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x12] = (int)&PTR_FUN_004ea94c;
    param_1[0x13] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x15,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x28;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x28;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x28;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x28;
  param_1[3] = (int)&PTR_FUN_005054b4;
  *(undefined ***)param_1[1] = &PTR_LAB_005054f8;
  *(undefined ***)param_1[2] = &PTR_LAB_00505504;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505510;
  param_1[0x10] = param_4;
  if (DAT_00505444 == 0) {
    DAT_00505444 = RegisterWindowMessageA(s_commdlg_SetRGBColor_00505430);
  }
  FUN_004dc844(param_1 + 7,0,0x24);
  param_1[7] = 0x24;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = *(uint *)param_1[0x10] | 0x10;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffdf;
  }
  else {
    param_1[0xf] = param_5;
    param_1[0xc] = param_1[0xc] | 0x20;
  }
  param_1[0xe] = 0;
  uVar1 = FUN_0048c12c((uint *)(param_1[0x10] + 8));
  param_1[10] = uVar1;
  param_1[0xb] = *(int *)(param_1[0x10] + 0xc);
  *in_FS_OFFSET = local_28;
  return param_1;
}


// rea decompile_all
// name: FUN_00473f78
// address: 0x473f78
// body: available
// range: 0x473f78-0x474167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_00473f78(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ff868);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0xea;
    *(int **)((int)param_1 + 0xea) = param_1 + 0x18;
    param_1[0x18] = (int)(param_1 + 0x15);
    param_1[0x19] = (int)(param_1 + 0x16);
    *(int **)((int)param_1 + 0xee) = param_1 + 0x15;
    *(int **)((int)param_1 + 0xf2) = param_1 + 0x16;
    param_1[1] = (int)(param_1 + 0x18);
    param_1[2] = (int)(param_1 + 0x15);
    param_1[3] = (int)(param_1 + 0x16);
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)((int)param_1 + 0xe6) = 0;
    param_1[0x15] = (int)&PTR_FUN_004ea94c;
    param_1[0x16] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x18,1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0xea),1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -9;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -9;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -9;
  if (param_4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_4;
  }
  FUN_004ae248(param_1,1,0,(uint *)&DAT_004ff3d1,iVar1,1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 9;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 9;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 9;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004ffcdc;
  param_1[4] = (int)&PTR_LAB_004ffd28;
  *(undefined ***)param_1[2] = &PTR_LAB_004ffd40;
  *(undefined ***)param_1[3] = &PTR_LAB_004ffd4c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004ffd58;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004ffde8;
  param_1[0x12] = (int)param_4;
  param_1[0x13] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}


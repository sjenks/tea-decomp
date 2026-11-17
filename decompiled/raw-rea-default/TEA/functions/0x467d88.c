// rea decompile_all
// name: FUN_00467d88
// address: 0x467d88
// body: available
// range: 0x467d88-0x467f21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_00467d88(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,uint *param_9,int param_10)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fc8c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x4c);
    param_1[0x4c] = (int)(param_1 + 0x49);
    param_1[0x4d] = (int)(param_1 + 0x4a);
    param_1[1] = (int)(param_1 + 0x49);
    param_1[2] = (int)(param_1 + 0x4a);
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x49] = (int)&PTR_FUN_004ea94c;
    param_1[0x4a] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x4c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc0;
  FUN_00413cf4(param_1,1,param_6,param_7,param_8,param_9,param_10,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc0;
  param_1[3] = (int)&PTR_FUN_004fca18;
  *(undefined ***)param_1[1] = &PTR_LAB_004fcae4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fcaf0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fcafc;
  FUN_0041eac8(param_1 + 0x18,0,param_1,0x1f5e);
  param_1[0x44] = param_3;
  param_1[0x45] = param_4;
  param_1[0x46] = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}


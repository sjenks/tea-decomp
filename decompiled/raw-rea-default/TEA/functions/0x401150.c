// rea decompile_all
// name: FUN_00401150
// address: 0x401150
// body: available
// range: 0x401150-0x40149c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_00401150(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ea368);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x296);
    param_1[0x296] = (int)(param_1 + 0x293);
    param_1[0x297] = (int)(param_1 + 0x294);
    param_1[1] = (int)(param_1 + 0x293);
    param_1[2] = (int)(param_1 + 0x294);
    param_1[0x292] = 0;
    param_1[0x295] = 0;
    param_1[0x293] = (int)&PTR_FUN_004ea94c;
    param_1[0x294] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x296,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x9e8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x9e8;
  FUN_00413cf4(param_1,1,0x4ea340,param_3,param_4,(uint *)0x12f2,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x9e8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x9e8;
  param_1[3] = (int)&PTR_FUN_004ea7c8;
  *(undefined ***)param_1[1] = &PTR_LAB_004ea890;
  *(undefined ***)param_1[2] = &PTR_LAB_004ea89c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ea8a8;
  param_1[0x18] = param_5;
  param_1[0x19] = param_6;
  FUN_004bf504(param_1 + 0x1a,0,*param_1,0x3278,0);
  FUN_0041af38(param_1 + 0x45,0,param_1,0x8de,0);
  FUN_0041af38(param_1 + 0x74,0,param_1,0x343a,0);
  FUN_0041af38(param_1 + 0xa3,0,param_1,0x1130,0);
  FUN_004c7a28(param_1 + 0xd2,0,*param_1,0x2fb2,0,0);
  FUN_004c7a28((int *)((int)param_1 + 0x3f6),0,*param_1,0x3688,0,0);
  FUN_004c7a28(param_1 + 0x129,0,*param_1,0x1a18,0,0);
  FUN_004c7a28((int *)((int)param_1 + 0x552),0,*param_1,0x1a22,0,0);
  FUN_0041af38(param_1 + 0x180,0,param_1,0x113a,0);
  FUN_0041af38(param_1 + 0x1af,0,param_1,0x367e,0);
  FUN_0041af38(param_1 + 0x1de,0,param_1,0x1202,0);
  FUN_0041af38(param_1 + 0x20d,0,param_1,0x120c,0);
  FUN_004abc64(param_1 + 0x23c,0,*param_1,1,0);
  FUN_004abc64(param_1 + 0x267,0,*param_1,0x5fa,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}


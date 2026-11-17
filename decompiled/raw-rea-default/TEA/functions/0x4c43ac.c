// rea decompile_all
// name: FUN_004c43ac
// address: 0x4c43ac
// body: available
// range: 0x4c43ac-0x4c450a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_004c43ac(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            uint *param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x510d90);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xc);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[0xd] = (int)(param_1 + 10);
    param_1[1] = (int)(param_1 + 9);
    param_1[2] = (int)(param_1 + 10);
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[9] = (int)&PTR_FUN_004ea94c;
    param_1[10] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xc,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_004c7a28(param_1,1,param_3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PTR_FUN_0051151c;
  *(undefined ***)param_1[1] = &PTR_LAB_00511558;
  *(undefined ***)param_1[2] = &PTR_LAB_00511564;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511570;
  iVar1 = FUN_00496d48(param_5);
  param_1[6] = iVar1;
  if (param_6 == (uint *)0x0) {
    iVar1 = FUN_00496d48((uint *)&DAT_00510d7c);
  }
  else {
    iVar1 = FUN_00496d48(param_6);
  }
  param_1[7] = iVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}


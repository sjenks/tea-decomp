// rea decompile_all
// name: FUN_0048b59c
// address: 0x48b59c
// body: available
// range: 0x48b59c-0x48b7b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0048b59c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5055c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1b);
    param_1[0x1b] = (int)(param_1 + 0x18);
    param_1[0x1c] = (int)(param_1 + 0x19);
    param_1[1] = (int)(param_1 + 0x18);
    param_1[2] = (int)(param_1 + 0x19);
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x18] = (int)&PTR_FUN_004ea94c;
    param_1[0x19] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1b,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x40;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x40;
  FUN_0048c514(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x40;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x40;
  param_1[3] = (int)&PTR_FUN_00505604;
  *(undefined ***)param_1[1] = &PTR_LAB_00505648;
  *(undefined ***)param_1[2] = &PTR_LAB_00505654;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505660;
  param_1[0x16] = param_4;
  FUN_004dc844(param_1 + 7,0,0x3c);
  param_1[7] = 0x3c;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[0x11] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = *(uint *)param_1[0x16] | 8;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffef;
  }
  else {
    param_1[0x10] = param_5;
    param_1[0xc] = param_1[0xc] | 0x10;
  }
  param_1[0xf] = 0;
  param_1[9] = *(int *)(param_1[0x16] + 8);
  param_1[10] = param_1[0x16] + 0xc;
  param_1[0xb] = *(int *)(param_1[0x16] + 0x48);
  uVar1 = FUN_0048c12c((uint *)(param_1[0x16] + 0x4c));
  param_1[0xd] = uVar1;
  param_1[0x12] = *(int *)(param_1[0x16] + 0x50);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_1[0x16] + 0x54);
  param_1[0x14] = *(int *)(param_1[0x16] + 0x56);
  param_1[0x15] = *(int *)(param_1[0x16] + 0x5a);
  *in_FS_OFFSET = local_28;
  return param_1;
}


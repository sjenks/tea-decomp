// rea decompile_all
// name: FUN_00475a74
// address: 0x475a74
// body: available
// range: 0x475a74-0x475cf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_00475a74(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ffe98);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xac);
    param_1[0xac] = (int)(param_1 + 0xa9);
    param_1[0xad] = (int)(param_1 + 0xaa);
    param_1[1] = (int)(param_1 + 0xa9);
    param_1[2] = (int)(param_1 + 0xaa);
    param_1[0xa8] = 0;
    param_1[0xab] = 0;
    param_1[0xa9] = (int)&PTR_FUN_004ea94c;
    param_1[0xaa] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xac,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x240;
  FUN_00413cf4(param_1,1,0x4ffe34,param_3,param_4,(uint *)0x321e,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x240;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x240;
  param_1[3] = (int)&PTR_FUN_00500064;
  *(undefined ***)param_1[1] = &PTR_LAB_0050012c;
  *(undefined ***)param_1[2] = &PTR_LAB_00500138;
  iVar1 = *param_1;
  *(undefined ***)(iVar1 + 8) = &PTR_LAB_00500144;
  FUN_004c7a28(param_1 + 0x18,0,iVar1,0x3228,0,0);
  FUN_004abc64((int *)((int)param_1 + 0x10e),0,*param_1,1,0);
  FUN_004179f0(param_1 + 0x70,0,param_1,0xd0c);
  param_1[0xa4] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0xa2,uVar2,uVar2);
    param_1[0xa4] = (int)(piVar3 + 3);
    FUN_004dc7d4((undefined4 *)param_1[0xa4],*(undefined4 **)(param_5 + 8),uVar2);
  }
  else {
    param_1[0xa4] = *(int *)(param_5 + 8);
    piVar3 = (int *)(param_1[0xa4] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  param_1[0xa6] = param_6;
  *in_FS_OFFSET = local_28;
  return param_1;
}


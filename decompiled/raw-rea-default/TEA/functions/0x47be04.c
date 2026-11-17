// rea decompile_all
// name: FUN_0047be04
// address: 0x47be04
// body: available
// range: 0x47be04-0x47bf98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl
FUN_0047be04(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  
  FUN_004dce64(0x501458);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x7b;
    *(int *)((int)param_1 + 0x7b) = (int)param_1 + 0x6f;
    *(int *)((int)param_1 + 0x7f) = (int)param_1 + 0x73;
    param_1[4] = (int)param_1 + 0x6f;
    param_1[5] = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6b) = 0;
    *(undefined4 *)((int)param_1 + 0x77) = 0;
    *(undefined ***)((int)param_1 + 0x6f) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x73) = &PTR_FUN_004ea93c;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x7b),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  iVar3 = 0;
  puVar1 = (uint *)FUN_004cc0f0();
  if (puVar1 != (uint *)0x0) {
    FUN_0048faec(puVar1);
  }
  FUN_0049d444(param_1,1,param_3,param_4,param_5,puVar1,iVar3);
  param_1[6] = (int)&PTR_FUN_005014a8;
  param_1[1] = (int)&PTR_LAB_00501520;
  *(undefined ***)param_1[4] = &PTR_LAB_00501540;
  *(undefined ***)param_1[5] = &PTR_LAB_0050154c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501558;
  puVar2 = (undefined4 *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(param_1[6] + 0x1c))();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + -1;
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}


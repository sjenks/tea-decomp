// rea decompile_all
// name: FUN_0043d32c
// address: 0x43d32c
// body: available
// range: 0x43d32c-0x43d7a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0043d32c(int *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f5634);
  if (param_1 == (int *)0x0) goto LAB_0043d79a;
  param_1[3] = (int)&PTR_FUN_004f5990;
  param_1[0x18] = (int)&PTR_LAB_004f5a68;
  *(undefined ***)param_1[1] = &PTR_LAB_004f5a84;
  *(undefined ***)param_1[2] = &PTR_LAB_004f5a90;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f5a9c;
  FUN_00417b74(param_1 + 0x1a2,2);
  FUN_0041b094(param_1 + 0x173,2);
  piVar2 = (int *)((int)param_1 + 0x51d);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + -4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
  FUN_004ad9d8(piVar2,0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + 4;
  *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + 0x96;
  FUN_004a52c0((undefined4 *)((int)param_1 + 0x545),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x521) + -4);
  *piVar3 = *piVar3 + -0x96;
  FUN_00489c54((undefined4 *)((int)param_1 + 0x53d),0);
  FUN_004ad9d8((int *)((int)param_1 + 0x473),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x477) + -4);
  *piVar3 = *piVar3 + 0x96;
  FUN_004a52c0((undefined4 *)((int)param_1 + 0x497),0);
  piVar3 = (int *)(*(int *)((int)param_1 + 0x477) + -4);
  *piVar3 = *piVar3 + -0x96;
  FUN_00489c54((undefined4 *)((int)param_1 + 0x48f),0);
  piVar3 = param_1 + 0xf2;
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + -1;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -1;
  FUN_004ad9d8(piVar3,0);
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + 1;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 1;
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + 0x96;
  FUN_004a52c0((undefined4 *)((int)param_1 + 0x3ed),0);
  *(int *)(param_1[0xf3] + -4) = *(int *)(param_1[0xf3] + -4) + -0x96;
  FUN_00489c54((undefined4 *)((int)param_1 + 0x3e5),0);
  FUN_00417b74(param_1 + 0xc0,2);
  FUN_0041b7d4(param_1 + 0x93,2);
  FUN_0041b094(param_1 + 100,2);
  piVar3 = param_1 + 0x38;
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + -4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -4;
  FUN_004ad9d8(piVar3,0);
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + 4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 4;
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + 0x96;
  FUN_004a52c0(param_1 + 0x42,0);
  *(int *)(param_1[0x39] + -4) = *(int *)(param_1[0x39] + -4) + -0x96;
  FUN_00489c54(param_1 + 0x40,0);
  FUN_0040b4f0(param_1 + 0x30,param_1[0x31],param_1[0x32]);
  FUN_004cc0bc();
  FUN_0040b4f0(param_1 + 0x28,param_1[0x29],param_1[0x2a]);
  FUN_004cc0bc();
  if (param_1[0x24] != 0) {
    if (*(int *)(param_1[0x24] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x24] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d669;
    }
    FUN_004cc0bc();
    param_1[0x24] = 0;
  }
LAB_0043d669:
  if (param_1[0x20] != 0) {
    if (*(int *)(param_1[0x20] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x20] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_0043d6e3;
    }
    FUN_004cc0bc();
    param_1[0x20] = 0;
  }
LAB_0043d6e3:
  FUN_0043fdec(param_1 + 0x18,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x6f0;
  FUN_00413f3c(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x6f0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x6f0;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x1d8,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x1d6,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_0043d79a:
  *in_FS_OFFSET = local_28;
  return;
}


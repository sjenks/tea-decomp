// rea decompile_all
// name: FUN_0049146c
// address: 0x49146c
// body: available
// range: 0x49146c-0x4915b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0049146c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x506d54);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_00506f88;
    param_1[1] = (int)&PTR_LAB_00506ffc;
    *(undefined ***)param_1[4] = &PTR_LAB_0050701c;
    *(undefined ***)param_1[5] = &PTR_LAB_00507028;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00507034;
    if ((uint *)param_1[7] != (uint *)0x0) {
      FUN_00494064((uint *)param_1[7],0);
      FUN_004cc0bc();
    }
    if (*(undefined4 **)((int)param_1 + 0x37) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x37))();
    }
    FUN_00490d0c(param_1 + 1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x5d),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x55),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}


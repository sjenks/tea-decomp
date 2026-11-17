// rea decompile_all
// name: FUN_00467594
// address: 0x467594
// body: available
// range: 0x467594-0x46779b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00467594(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  FUN_004dce64(0x4fc5a8);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fc6fc;
    *(undefined ***)param_1[1] = &PTR_LAB_004fc7c4;
    *(undefined ***)param_1[2] = &PTR_LAB_004fc7d0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fc7dc;
    uVar1 = 0;
    do {
      if (param_1[uVar1 + 0x19] != 0) {
        (*(code *)**(undefined4 **)(param_1[uVar1 + 0x19] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    uVar1 = 0;
    do {
      if (param_1[uVar1 + 0x23] != 0) {
        (*(code *)**(undefined4 **)(param_1[uVar1 + 0x23] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    if ((uint *)param_1[0x2d] != (uint *)0x0) {
      FUN_004ab9b4((uint *)param_1[0x2d],3);
    }
    if ((uint *)param_1[0x5b] != (uint *)0x0) {
      FUN_00494064((uint *)param_1[0x5b],0);
      FUN_004cc0bc();
    }
    FUN_004ac5f0(param_1 + 0x2f,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x110;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x110;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x110;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x110;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x60,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x5e,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}


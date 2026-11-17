// rea decompile_all
// name: FUN_0047ad78
// address: 0x47ad78
// body: available
// range: 0x47ad78-0x47af2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0047ad78(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x500f0c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00501188;
    *(undefined ***)param_1[1] = &PTR_LAB_00501250;
    *(undefined ***)param_1[2] = &PTR_LAB_0050125c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501268;
    if (param_1[0x22] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x22] + 0xc))();
    }
    FUN_004ac5f0(param_1 + 0x88,2);
    FUN_00417b74(param_1 + 0x56,2);
    FUN_00417b74(param_1 + 0x24,2);
    FUN_0040b4f0(param_1 + 0x18,param_1[0x19],param_1[0x1a]);
    FUN_004cc0bc();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x270;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x270;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x270;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x270;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0xb8,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xb6,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}


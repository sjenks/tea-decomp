// rea decompile_all
// name: FUN_00404f80
// address: 0x404f80
// body: available
// range: 0x404f80-0x40562c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00404f80(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eb09c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004eb1fc;
    *(undefined ***)param_1[1] = &PTR_LAB_004eb2c8;
    *(undefined ***)param_1[2] = &PTR_LAB_004eb2d4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004eb2e0;
    FUN_00417b74(param_1 + 0x7e6,2);
    FUN_0041851c(param_1 + 0x7b0,2);
    FUN_0041851c(param_1 + 0x77e,2);
    FUN_0041851c(param_1 + 0x74c,2);
    FUN_0041851c(param_1 + 0x71a,2);
    FUN_0041851c(param_1 + 0x6e8,2);
    FUN_0041851c(param_1 + 0x6b6,2);
    FUN_00417ffc(param_1 + 0x682,2);
    FUN_00417ffc(param_1 + 0x64e,2);
    FUN_00417ffc(param_1 + 0x61a,2);
    FUN_0041851c(param_1 + 0x5e8,2);
    FUN_00417ffc(param_1 + 0x5b4,2);
    FUN_00417ffc(param_1 + 0x580,2);
    FUN_0041851c(param_1 + 0x54e,2);
    FUN_0041851c(param_1 + 0x51c,2);
    FUN_004192dc(param_1 + 0x4d4,2);
    piVar1 = param_1 + 0x4a8;
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x4b2,0);
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x4b0,0);
    FUN_004192dc(param_1 + 0x460,2);
    piVar1 = param_1 + 0x434;
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x43e,0);
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x43c,0);
    FUN_004192dc(param_1 + 0x3ec,2);
    piVar1 = param_1 + 0x3c0;
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x3ca,0);
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x3c8,0);
    FUN_004192dc(param_1 + 0x378,2);
    piVar1 = param_1 + 0x34c;
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x356,0);
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x354,0);
    FUN_004192dc(param_1 + 0x304,2);
    piVar1 = param_1 + 0x2d8;
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x2e2,0);
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x2e0,0);
    FUN_004192dc(param_1 + 0x290,2);
    piVar1 = param_1 + 0x263;
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x26d,0);
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x26b,0);
    FUN_00418914(param_1 + 0x232,2);
    piVar1 = param_1 + 0x206;
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x210,0);
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x20e,0);
    FUN_0041c3b4(param_1 + 0x1d8,2);
    FUN_00417b74(param_1 + 0x1a6,2);
    FUN_00417ffc(param_1 + 0x172,2);
    FUN_00417ffc(param_1 + 0x13e,2);
    FUN_00417ffc(param_1 + 0x10a,2);
    FUN_0041851c(param_1 + 0xd8,2);
    FUN_0041851c(param_1 + 0xa6,2);
    FUN_0041b094(param_1 + 0x77,2);
    FUN_0041b094(param_1 + 0x48,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8000;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8000;
    FUN_00467f50(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8000;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8000;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x81c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x81a,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


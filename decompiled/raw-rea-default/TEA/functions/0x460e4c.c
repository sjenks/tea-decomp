// rea decompile_all
// name: FUN_00460e4c
// address: 0x460e4c
// body: available
// range: 0x460e4c-0x4611ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00460e4c(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_004dce64(0x4fae24);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fb100;
    *(undefined ***)param_1[1] = &PTR_LAB_004fb1c8;
    *(undefined ***)param_1[2] = &PTR_LAB_004fb1d4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fb1e0;
    iVar2 = 0;
    do {
      iVar1 = param_1[iVar2 + 0x19];
      if (iVar1 != 0) {
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar1 = param_1[iVar2 + 0x25];
      if (iVar1 != 0) {
        FUN_0041bfe0((int *)(iVar1 + 0x310),2);
        FUN_00417b74((int *)(iVar1 + 0x248),2);
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar1 = param_1[iVar2 + 0x1d];
      if (iVar1 != 0) {
        FUN_0041b094((int *)(iVar1 + 0x248),2);
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar1 = param_1[iVar2 + 0x21];
      if (iVar1 != 0) {
        FUN_0041b094((int *)(iVar1 + 0x248),2);
        FUN_0041b094((int *)(iVar1 + 0x18c),2);
        FUN_0041b094((int *)(iVar1 + 0xd0),2);
        FUN_0041851c((int *)(iVar1 + 8),2);
        FUN_004cc0bc();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_00417b74(param_1 + 0x8c,2);
    FUN_0041b094(param_1 + 0x5c,2);
    FUN_00417b74(param_1 + 0x2a,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x298;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x298;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x298;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x298;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0xc2,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xc0,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}


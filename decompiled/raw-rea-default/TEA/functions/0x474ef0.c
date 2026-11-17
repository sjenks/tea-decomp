// rea decompile_all
// name: FUN_00474ef0
// address: 0x474ef0
// body: available
// range: 0x474ef0-0x474fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00474ef0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ffa88);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_004ffc48;
    param_1[1] = (int)&PTR_LAB_004ffc9c;
    *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_004ffcac;
    *(undefined ***)*param_1 = &PTR_LAB_004ffccc;
    if (param_1[0x1c] != 0) {
      FUN_00463058(param_1[0x1c],3);
    }
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd;
    FUN_004a8edc(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd;
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}


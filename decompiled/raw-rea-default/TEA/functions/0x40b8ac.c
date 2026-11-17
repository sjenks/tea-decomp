// rea decompile_all
// name: FUN_0040b8ac
// address: 0x40b8ac
// body: available
// range: 0x40b8ac-0x40b9e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_0040b8ac(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ebe84);
  *param_1 = &PTR_FUN_004eca60;
  param_1[0x801] = 0;
  param_1[0x804] = 1;
  *(undefined2 *)(param_1 + 0xb7e) = 0;
  param_1[0xb7f] = 0;
  param_1[0xbe7] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
    piVar3 = FUN_004cf7b0(param_1 + 0xbe5,uVar2,uVar2);
    param_1[0xbe7] = piVar3 + 3;
    FUN_004dc7d4((undefined4 *)param_1[0xbe7],*(undefined4 **)(param_2 + 8),uVar2);
  }
  else {
    param_1[0xbe7] = *(undefined4 *)(param_2 + 8);
    piVar3 = (int *)(param_1[0xbe7] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  FUN_004dc844(param_1 + 0xb80,0,0x194);
  param_1[0x802] = 0;
  param_1[0x803] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}


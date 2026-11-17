// rea decompile_all
// name: FUN_004b2c48
// address: 0x4b2c48
// body: available
// range: 0x4b2c48-0x4b2d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b2c48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50d520);
  iVar1 = FUN_004b232c(param_1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar4 = iVar1 << 2;
    iVar3 = FUN_004cc180();
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))
                      (iVar3,*(int *)(param_1 + 8),iVar4,param_1,iVar3,iVar1,param_2);
    if (1 < iVar1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 100))();
    }
    if (iVar1 < 1) {
      uVar2 = 0;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      uVar2 = FUN_004b2d18(param_1,param_2,*(int **)(iVar3 + -4 + iVar1 * 4));
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}


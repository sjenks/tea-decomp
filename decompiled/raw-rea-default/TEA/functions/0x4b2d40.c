// rea decompile_all
// name: FUN_004b2d40
// address: 0x4b2d40
// body: available
// range: 0x4b2d40-0x4b2e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b2d40(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char local_130 [260];
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_004dce64(0x50d578);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 8))();
  if (iVar2 == 0) {
    uVar3 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar2 = FUN_004cc180();
    local_10 = local_10 + 1;
    local_1c = 0x14;
    local_8 = iVar2;
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    if (*(int *)((int)param_2 + 0x2e) == 0) {
      local_130[0] = '\0';
    }
    else {
      FUN_004dc9c4(local_130,*(char **)((int)param_2 + 0x2e));
    }
    iVar4 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
    if (iVar4 == 0) {
      uVar3 = 0;
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x20))();
      if (cVar1 == '\0') {
        uVar3 = 0;
        local_10 = local_10 + -1;
        FUN_004cc0cc();
        *in_FS_OFFSET = local_2c;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + -4 + iVar4 * 4);
        local_10 = local_10 + -1;
        FUN_004cc0cc();
        *in_FS_OFFSET = local_2c;
      }
    }
  }
  return uVar3;
}


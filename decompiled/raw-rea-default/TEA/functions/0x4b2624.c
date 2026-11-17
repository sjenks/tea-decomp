// rea decompile_all
// name: FUN_004b2624
// address: 0x4b2624
// body: available
// range: 0x4b2624-0x4b27b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b2624(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  char local_134 [263];
  char local_2d;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined4 local_8;
  
  FUN_004dce64(0x50d3ac);
  local_2d = (param_3 & 0x80000000) != 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 4))();
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    local_8 = FUN_004cc180();
    local_10 = local_10 + 1;
    local_1c = 0x14;
    (**(code **)(*(int *)(param_1 + 8) + 4))();
    local_134[0] = '\0';
    if (local_2d == '\0') {
      if (param_2 == (char *)0x0) {
        local_134[0] = '\0';
      }
      else {
        FUN_004dc9c4(local_134,param_2);
      }
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
    }
    else if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x5c))();
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else if ((local_134[0] == '\0') || (iVar1 = FUN_004b3b84(param_1,local_134), iVar1 == 0)) {
      uVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x18))();
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      uVar2 = 0;
      local_10 = local_10 + -1;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}


// rea decompile_all
// name: FUN_004c5b60
// address: 0x4c5b60
// body: available
// range: 0x4c5b60-0x4c5b90 inclusive
// range: 0x4c5ba5-0x4c5cf5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004c5b60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint local_d0 [10];
  uint local_a8 [10];
  CHAR local_80 [82];
  ushort local_2e;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  LPSTR local_8;
  
  FUN_004dce64(0x511208);
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0xfffffffb:
    local_2e = 0x7f50;
    break;
  case 0xfffffffc:
    local_2e = 0x7f51;
    break;
  case 0xfffffffd:
    local_2e = 0x7f53;
    break;
  case 0xfffffffe:
    local_2e = 0x7f52;
    break;
  case 0xffffffff:
    local_2e = 0x7f54;
    break;
  default:
    *in_FS_OFFSET = local_2c;
    return local_2c;
  }
  iVar2 = *(int *)(param_2 + 0x70);
  iVar1 = FUN_004c0cd4(iVar2,0x7f55,local_80,0x50);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_2c;
    uVar3 = local_2c;
  }
  else {
    iVar1 = FUN_004c0cd4(iVar2,0x7f4f,(LPSTR)local_a8,0x28);
    if (iVar1 == 0) {
      *in_FS_OFFSET = local_2c;
      uVar3 = local_2c;
    }
    else {
      iVar2 = FUN_004c0cd4(iVar2,(uint)local_2e,(LPSTR)local_d0,0x28);
      if (iVar2 == 0) {
        *in_FS_OFFSET = local_2c;
        uVar3 = local_2c;
      }
      else {
        FUN_004dc9f4(local_a8);
        FUN_004dc9f4(*(uint **)(param_3 + 4));
        FUN_004dc9f4(local_d0);
        local_1c = 0x14;
        local_8 = (LPSTR)FUN_004cc180();
        local_10 = local_10 + 1;
        local_1c = 8;
        wsprintfA(local_8,(LPCSTR)local_a8,*(undefined4 *)(param_3 + 4),local_d0);
        (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x1b) + 0x30))();
        local_10 = local_10 + -1;
        uVar3 = FUN_004cc0cc();
        *in_FS_OFFSET = local_2c;
      }
    }
  }
  return uVar3;
}


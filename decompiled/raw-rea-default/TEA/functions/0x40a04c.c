// rea decompile_all
// name: FUN_0040a04c
// address: 0x40a04c
// body: available
// range: 0x40a04c-0x40a258 inclusive
// range: 0x40a27a-0x40a2f2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0040a04c(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  FUN_004dce64(0x4ebb84);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    if ((uint)(iVar2 >> 7) < param_3) {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7f;
      }
      local_3c = iVar1 >> 7;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = FUN_004cc0f0();
      if (iVar1 == 0) {
        local_1c = 8;
        local_8 = &PTR_FUN_004eac74;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0040a2f4(*(int *)(param_1 + 4),param_2,iVar1);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040ae88((iVar2 >> 7) * 0x80 + iVar1,param_3,param_4);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040a2f4(param_2,*(int *)(param_1 + 8),((iVar2 >> 7) + param_3) * 0x80 + iVar1);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      FUN_0040b62c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      FUN_004cc0bc();
      *(int *)(param_1 + 0x18) = local_38 * 0x80 + iVar1;
      *(uint *)(param_1 + 8) = (iVar2 >> 7) * 0x80 + iVar1 + param_3 * 0x80;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar2 = iVar1 - param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7f;
      }
      if (param_3 < (uint)(iVar2 >> 7)) {
        FUN_0040a2f4(iVar1 + param_3 * -0x80,iVar1,iVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x80;
        FUN_0040ab04(param_2,iVar1 + param_3 * -0x80,iVar1);
        FUN_0040ae0c(param_2,param_3 * 0x80 + param_2,param_4);
      }
      else {
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x7f;
        }
        iVar2 = param_3 - (iVar2 >> 7);
        FUN_0040ae88(iVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 0x80;
        FUN_0040a2f4(param_2,iVar1,param_3 * 0x80 + param_2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 0x80;
        FUN_0040ae0c(param_2,iVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}


// rea decompile_all
// name: FUN_0044cea0
// address: 0x44cea0
// body: available
// range: 0x44cea0-0x44d030 inclusive
// range: 0x44d052-0x44d0c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0044cea0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  bVar5 = 0;
  FUN_004dce64(0x4f725c);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar2 >> 4 == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = (iVar2 >> 4) * 2;
    }
    puVar1 = (undefined4 *)FUN_004cc0f0();
    if (puVar1 == (undefined4 *)0x0) {
      local_c = &PTR_FUN_004eac74;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0044cde0(*(undefined4 **)(param_1 + 4),param_2,puVar1);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    puVar4 = puVar1 + (iVar3 >> 4) * 4;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = param_3[1];
      puVar4[2] = param_3[2];
    }
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_0044cde0(param_2,*(undefined4 **)(param_1 + 8),puVar1 + (iVar3 >> 4) * 4 + 4);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    FUN_0044d44c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    *(undefined4 **)(param_1 + 0x18) = puVar1 + iVar2 * 4;
    *(undefined4 **)(param_1 + 8) = puVar1 + (iVar3 >> 4) * 4 + 4;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = local_8[-4];
      local_8[1] = local_8[-3];
      local_8[2] = local_8[-2];
    }
    FUN_0044d0c8(param_2,*(undefined4 **)(param_1 + 8) + -4,*(undefined4 **)(param_1 + 8));
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *param_3;
      param_3 = param_3 + (uint)bVar5 * -2 + 1;
      param_2 = param_2 + (uint)bVar5 * -2 + 1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}


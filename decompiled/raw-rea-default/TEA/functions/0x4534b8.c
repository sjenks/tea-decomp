// rea decompile_all
// name: FUN_004534b8
// address: 0x4534b8
// body: available
// range: 0x4534b8-0x4536c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004534b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_140;
  undefined4 local_11c [62];
  undefined1 local_24 [8];
  uint *local_1c;
  undefined4 local_14 [4];
  
  FUN_004dce64(0x4f85c8);
  piVar1 = (int *)FUN_00464af0(*(int *)(param_1 + 0x38));
  if (piVar1 == (int *)0x0) {
    *in_FS_OFFSET = local_140;
    return local_140;
  }
  puVar5 = (uint *)piVar1[2];
  FUN_0043c330(local_14,*(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8));
  iVar2 = FUN_0043c428((int)local_14);
  if (iVar2 < 2) {
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    *puVar5 = *puVar5 | 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0xcb4) = 4;
    FUN_00464ba4();
  }
  iVar2 = *(int *)(param_1 + 0x6d0);
  iVar3 = FUN_00466b18(*(int *)(param_1 + 0x38));
  FUN_00408cbc(local_24,iVar3,iVar2);
  iVar2 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_00402fa0(local_11c,local_1c,puVar5,local_14,(undefined4 *)(iVar2 + 0xf0),
               *(undefined4 *)(param_1 + 0xcb4),(undefined4 *)(param_1 + 0xcb8));
  (**(code **)(*piVar1 + 0xc))();
  FUN_004030f4(local_11c,2);
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar2 = *puVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_00453698;
    }
    FUN_004cc0bc();
    local_1c = (uint *)0x0;
  }
LAB_00453698:
  uVar4 = FUN_0043c3a8(local_14,2);
  *in_FS_OFFSET = local_140;
  return uVar4;
}


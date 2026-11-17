// rea decompile_all
// name: FUN_00493eb4
// address: 0x493eb4
// body: available
// range: 0x493eb4-0x493fd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_00493eb4(uint param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  BOOL BVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507304);
  if (DAT_005071d0 == 0) {
    *in_FS_OFFSET = local_28;
    uVar5 = local_28;
  }
  else {
    puVar3 = (uint *)FUN_00493ae0(param_1);
    uVar5 = 0;
    if (puVar3 != (uint *)0x0) {
      *(char *)((int)puVar3 + 5) = *(char *)((int)puVar3 + 5) + -1;
      bVar2 = *(char *)((int)puVar3 + 5) == '\0';
      uVar5 = (uint)bVar2;
      if (bVar2) {
        BVar4 = DeleteObject((HGDIOBJ)*puVar3);
        if (BVar4 == 0) {
          FUN_00493800(0x7fde,*puVar3);
        }
        uVar5 = FUN_00493bac(DAT_005071d0,puVar3);
        if (uVar5 != 0xffffffff) {
          puVar1 = *(undefined4 **)(*(int *)(DAT_005071d0 + 9) + uVar5 * 4);
          FUN_004dc7f8((undefined4 *)(*(int *)(DAT_005071d0 + 9) + uVar5 * 4),
                       (undefined4 *)(*(int *)(DAT_005071d0 + 9) + (uVar5 + 1) * 4),
                       ((*(int *)(DAT_005071d0 + 1) - uVar5) + -1) * 4);
          *(int *)(DAT_005071d0 + 1) = *(int *)(DAT_005071d0 + 1) + -1;
          puVar6 = (undefined4 *)(DAT_005071d0 + 0xd);
          *puVar1 = *puVar6;
          *puVar6 = puVar1;
        }
        uVar5 = FUN_0049398e();
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return uVar5;
}


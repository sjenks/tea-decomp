// rea decompile_all
// name: FUN_004b2e74
// address: 0x4b2e74
// body: available
// range: 0x4b2e74-0x4b2f20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b2e74(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
LAB_004b2f0c:
  do {
    while( true ) {
      piVar3 = param_2;
      uVar2 = (**(code **)(*param_2 + 0x28))();
      if ((char)uVar2 == '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x4c))
                          (uVar2,*(int *)(param_1 + 8),piVar3,param_1,param_2,0x7efc,3);
      }
      else {
        iVar1 = 6;
      }
      if (iVar1 == 2) {
        return 0;
      }
      if (iVar1 == 6) break;
      if (iVar1 == 7) {
        uVar2 = (**(code **)(*param_2 + 0x18))();
        if ((char)uVar2 != '\0') {
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
        return 0;
      }
    }
    if ((*(char *)((int)param_2 + 0xd) == '\0') && (*(int *)((int)param_2 + 0x2e) == 0)) {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x20))();
      if (iVar1 == 0) goto LAB_004b2f0c;
      if (iVar1 != *(int *)((int)param_2 + 0x22)) {
        FUN_004b5734((int)param_2,iVar1);
      }
    }
    uVar2 = (**(code **)(*param_2 + 0x14))();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  } while( true );
}


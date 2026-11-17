// rea decompile_all
// name: FUN_00479c14
// address: 0x479c14
// body: available
// range: 0x479c14-0x479cb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00479c14(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  if ((uint)(iVar3 >> 2) < param_2) {
    local_8 = 0;
    iVar3 = (int)*(undefined4 **)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00479cb4(param_1,*(undefined4 **)(param_1 + 8),param_2 - (iVar3 >> 2),&local_8);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = (int)puVar1 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (param_2 < (uint)(iVar3 >> 2)) {
      puVar4 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 4));
      puVar2 = FUN_0047a0b4(puVar1,puVar1,puVar4);
      iVar3 = *(int *)(param_1 + 8);
      iVar5 = (int)puVar1 - (int)puVar4;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar5 >> 2) * -4;
      FUN_00410d88(param_1,(int)puVar2,iVar3);
    }
  }
  return;
}


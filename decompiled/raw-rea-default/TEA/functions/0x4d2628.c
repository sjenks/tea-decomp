// rea decompile_all
// name: FUN_004d2628
// address: 0x4d2628
// body: available
// range: 0x4d2628-0x4d26dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004d2628(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_004ce568(*(undefined4 *)(param_1 + 8));
  if (*piVar2 == 0) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    piVar2 = (int *)FUN_004cda1c(*piVar2);
    if (*piVar2 == *(int *)(param_1 + 8)) {
      puVar3 = (undefined4 *)FUN_004cda90(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = *puVar3;
      return param_1;
    }
  }
  piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
  bVar1 = FUN_004cda78(piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_004cda1c(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while (piVar2 = (int *)FUN_004cd864(iVar4), *piVar2 == *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = iVar4;
      piVar2 = (int *)FUN_004cda1c(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  else {
    piVar2 = (int *)FUN_004cd864(*(int *)(param_1 + 8));
    iVar4 = *piVar2;
    while( true ) {
      piVar2 = (int *)FUN_004cda90(iVar4);
      bVar1 = FUN_004cda78(piVar2);
      if (bVar1) break;
      piVar2 = (int *)FUN_004cda90(iVar4);
      iVar4 = *piVar2;
    }
    *(int *)(param_1 + 8) = iVar4;
  }
  return param_1;
}


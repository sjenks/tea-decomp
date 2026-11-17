// rea decompile_all
// name: FUN_004c07e4
// address: 0x4c07e4
// body: available
// range: 0x4c07e4-0x4c08db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004c07e4(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC pHVar3;
  WORD wLanguage;
  int iVar4;
  int local_18;
  int local_c;
  
  if (DAT_005101d0 != 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)FUN_00487bc0();
    iVar2 = FUN_00487e08(puVar1,iVar4);
    iVar4 = DAT_005101d0;
    if (iVar2 == 0) {
      wLanguage = 0;
    }
    else {
      wLanguage = *(WORD *)(iVar2 + 0x2f);
    }
    for (local_c = 0; iVar2 = DAT_005101d0, local_c < *(int *)(iVar4 + 1); local_c = local_c + 1) {
      pHVar3 = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + local_c * 4) + 8),param_2
                               ,param_1,wLanguage);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + local_c * 4);
      }
    }
    for (local_18 = 0; local_18 < *(int *)(iVar2 + 1); local_18 = local_18 + 1) {
      pHVar3 = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + local_18 * 4) + 8),param_1,
                             param_2);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + local_18 * 4);
      }
    }
  }
  return 0;
}


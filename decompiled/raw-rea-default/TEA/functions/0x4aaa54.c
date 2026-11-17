// rea decompile_all
// name: FUN_004aaa54
// address: 0x4aaa54
// body: available
// range: 0x4aaa54-0x4aab37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004aaa54(int param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x49) != 0) {
    bVar1 = false;
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x45); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x49) + iVar2 * 4) == param_2) {
        bVar1 = true;
        unaff_EDI = iVar2;
      }
    }
  }
  if (param_3 == '\0') {
    if (bVar1) {
      if (*(int *)(param_1 + 0x45) == 1) {
        FUN_004cc0cc();
        *(undefined4 *)(param_1 + 0x49) = 0;
        *(undefined4 *)(param_1 + 0x45) = 0;
      }
      else {
        iVar2 = FUN_004cc180();
        iVar3 = 0;
        if (0 < unaff_EDI) {
          do {
            *(undefined4 *)(iVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x49) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < unaff_EDI);
        }
        while (unaff_EDI = unaff_EDI + 1, unaff_EDI < *(int *)(param_1 + 0x45)) {
          *(undefined4 *)(iVar2 + -4 + unaff_EDI * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x49) + unaff_EDI * 4);
        }
        FUN_004cc0cc();
        *(int *)(param_1 + 0x49) = iVar2;
        *(int *)(param_1 + 0x45) = *(int *)(param_1 + 0x45) + -1;
      }
    }
  }
  else if (!bVar1) {
    iVar2 = FUN_004cc180();
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x45); iVar3 = iVar3 + 1) {
      *(undefined4 *)(iVar2 + iVar3 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x49) + iVar3 * 4);
    }
    FUN_004cc0cc();
    *(int *)(param_1 + 0x49) = iVar2;
    *(int *)(*(int *)(param_1 + 0x49) + *(int *)(param_1 + 0x45) * 4) = param_2;
    *(int *)(param_1 + 0x45) = *(int *)(param_1 + 0x45) + 1;
  }
  return;
}


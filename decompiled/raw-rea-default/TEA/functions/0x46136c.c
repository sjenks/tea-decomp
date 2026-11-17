// rea decompile_all
// name: FUN_0046136c
// address: 0x46136c
// body: available
// range: 0x46136c-0x461483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0046136c(int param_1)

{
  int iVar1;
  uint uVar2;
  WPARAM WVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_8;
  
  iVar5 = 0;
  do {
    iVar6 = 0;
    piVar4 = (int *)(param_1 + 100);
    do {
      if ((iVar5 == 0) && (*piVar4 != 0)) {
        local_8 = (int *)(*piVar4 + 8);
LAB_004613da:
        iVar1 = *(int *)(*(int *)(param_1 + 0x60) + iVar5 * 4) + iVar6 * 0x38;
        if (*(int *)(iVar1 + 0x40) == 0) {
          WVar3 = 0;
        }
        else {
          uVar2 = FUN_004d40d0(iVar1 + 0x48,0,*(uint *)(*(int *)(iVar1 + 0x50) + -4),
                               *(byte **)(*(int *)(param_1 + 0x60) + 0x28),
                               *(uint *)(*(int *)(*(int *)(param_1 + 0x60) + 0x28) + -4));
          if (uVar2 == 0) {
            WVar3 = 1;
          }
          else {
            WVar3 = 2;
          }
        }
        FUN_004ac750(local_8,WVar3);
      }
      else {
        if ((iVar5 == 1) && (piVar4[4] != 0)) {
          local_8 = (int *)(piVar4[4] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 3) && (piVar4[0xc] != 0)) {
          local_8 = (int *)(piVar4[0xc] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 2) && (piVar4[8] != 0)) {
          local_8 = (int *)(piVar4[8] + 8);
          goto LAB_004613da;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 4);
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return;
    }
  } while( true );
}


// rea decompile_all
// name: FUN_00479b08
// address: 0x479b08
// body: available
// range: 0x479b08-0x479b7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00479b08(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  
  *param_2 = 0x65;
  *param_3 = 0;
  iVar5 = 1;
  do {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(param_1 + 4);
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0) {
      pbVar3 = (byte *)0x0;
    }
    else {
      pbVar3 = *(byte **)(param_1 + 0x28);
    }
    uVar2 = FUN_00412000(1,0,iVar5,pbVar3,piVar4);
    if (uVar2 != 0) {
      if (*param_2 == 0x65) {
        *param_2 = iVar5;
      }
      *param_3 = iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x65);
  return;
}


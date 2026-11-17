// rea decompile_all
// name: FUN_00410420
// address: 0x410420
// body: available
// range: 0x410420-0x4104e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00410420(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  while( true ) {
    iVar5 = (int)param_2 - (int)param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if (iVar5 >> 2 < 0x11) break;
    piVar1 = param_2 + -1;
    iVar3 = iVar5 >> 3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((iVar5 >> 2 & 1U) != 0);
    }
    piVar4 = param_1 + iVar3;
    if (*param_1 < *piVar4) {
      piVar2 = piVar4;
      if ((*piVar1 <= *piVar4) && (piVar2 = param_1, *param_1 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    else {
      piVar2 = param_1;
      if ((*piVar1 <= *param_1) && (piVar2 = piVar4, *piVar4 < *piVar1)) {
        piVar2 = piVar1;
      }
    }
    piVar1 = (int *)FUN_004104e8(param_1,param_2,*piVar2);
    iVar5 = (int)piVar1 - (int)param_1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    iVar3 = (int)param_2 - (int)piVar1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar5 >> 2 < iVar3 >> 2) {
      FUN_00410420(param_1,piVar1);
      param_1 = piVar1;
    }
    else {
      FUN_00410420(piVar1,param_2);
      param_2 = piVar1;
    }
  }
  return;
}


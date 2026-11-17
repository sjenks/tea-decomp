// rea decompile_all
// name: FUN_00420dd0
// address: 0x420dd0
// body: available
// range: 0x420dd0-0x420e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_00420dd0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = param_1[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)param_1 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*param_1;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)param_1[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}


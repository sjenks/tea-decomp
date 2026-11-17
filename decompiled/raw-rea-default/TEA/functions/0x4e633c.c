// rea decompile_all
// name: FUN_004e633c
// address: 0x4e633c
// body: available
// range: 0x4e633c-0x4e6392 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_004e633c(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = FUN_004dc9f4(param_1);
  piVar3 = DAT_0051c41c;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    for (; (*piVar3 != 0 &&
           ((iVar2 = FUN_004e5b88((byte *)*piVar3,(byte *)param_1,(int)pcVar1), iVar2 != 0 ||
            (pcVar1[*piVar3] != '=')))); piVar3 = piVar3 + 1) {
    }
    if (*piVar3 == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = pcVar1 + *piVar3 + 1;
    }
  }
  return pcVar1;
}


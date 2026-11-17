// rea decompile_all
// name: FUN_0041d3a4
// address: 0x41d3a4
// body: available
// range: 0x41d3a4-0x41d400 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0041d3a4(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = &DAT_0043128c;
  pcVar2 = param_1;
  do {
    bVar4 = *pcVar2 == *pcVar3;
    if (!bVar4) break;
    if (*pcVar2 == '\0') {
      return 1;
    }
    pcVar1 = pcVar2 + 1;
    bVar4 = *pcVar1 == pcVar3[1];
    if (!bVar4) break;
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (!bVar4) {
    pcVar2 = s_POSIX_0043128e;
    do {
      bVar4 = *param_1 == *pcVar2;
      if (!bVar4) break;
      if (*param_1 == '\0') {
        return 1;
      }
      pcVar3 = param_1 + 1;
      bVar4 = *pcVar3 == pcVar2[1];
      if (!bVar4) break;
      param_1 = param_1 + 2;
      pcVar2 = pcVar2 + 2;
      bVar4 = *pcVar3 == '\0';
    } while (!bVar4);
    if (!bVar4) {
      return 0;
    }
  }
  return 1;
}


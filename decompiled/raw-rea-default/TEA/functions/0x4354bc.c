// rea decompile_all
// name: FUN_004354bc
// address: 0x4354bc
// body: available
// range: 0x4354bc-0x435508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __stdcall FUN_004354bc(HWND param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  CHAR local_38;
  char local_37 [51];
  
  GetClassNameA(param_1,&local_38,0x32);
  pcVar2 = &local_38;
  pcVar3 = s_SysHeader32_004f3570;
  do {
    if (*pcVar2 != *pcVar3) {
      return 1;
    }
    bVar4 = true;
    if (*pcVar2 == '\0') break;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 != pcVar3[1]) {
      return 1;
    }
    pcVar2 = pcVar2 + 2;
    pcVar3 = pcVar3 + 2;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  if (bVar4) {
    *param_2 = param_1;
  }
  return 1;
}


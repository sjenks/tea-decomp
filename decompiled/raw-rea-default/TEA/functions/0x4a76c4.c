// rea decompile_all
// name: FUN_004a76c4
// address: 0x4a76c4
// body: available
// range: 0x4a76c4-0x4a76f3 inclusive
// range: 0x4a76f6-0x4a7706 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT __cdecl FUN_004a76c4(int param_1,HWND param_2,char param_3)

{
  int iVar1;
  LRESULT LVar2;
  BOOL BVar3;
  
  if (param_2 == (HWND)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (param_3 != '\0') {
    LVar2 = SendMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                         *(LPARAM *)(iVar1 + 99));
    return LVar2;
  }
  BVar3 = PostMessageA(param_2,*(UINT *)(iVar1 + 0x5b),*(WPARAM *)(iVar1 + 0x5f),
                       *(LPARAM *)(iVar1 + 99));
  return BVar3;
}


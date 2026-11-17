// rea decompile_all
// name: FUN_00401012
// address: 0x401012
// body: available
// range: 0x401012-0x401058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401054 to 0x4e6fb4 FUN_004e6fb4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_004ea32b = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_004cd488();
  FUN_004cc824();
  FUN_004cd48c();
  FUN_004ddaec((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_004ea2d0;
  _DAT_004ea32f = GetModuleHandleA((LPCSTR)0x0);
  FUN_004e6fb4((int)ppuVar1);
  return;
}


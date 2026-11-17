// rea decompile_all
// name: FUN_00487964
// address: 0x487964
// body: available
// range: 0x487964-0x487a10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_00487964(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5,
            DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10,
            PFILETIME param_11)

{
  _FILETIME local_28;
  DWORD local_20 [7];
  
  local_20[6] = 0;
  local_20[5] = 0;
  local_20[4] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  if (param_11 == (PFILETIME)0x0) {
    param_11 = &local_28;
  }
  if (param_10 == (LPDWORD)0x0) {
    param_10 = local_20;
  }
  if (param_9 == (LPDWORD)0x0) {
    param_9 = local_20 + 1;
  }
  if (param_8 == (LPDWORD)0x0) {
    param_8 = local_20 + 2;
  }
  if (param_7 == (DWORD *)0x0) {
    param_7 = local_20 + 3;
  }
  if (param_6 == (DWORD *)0x0) {
    param_6 = local_20 + 4;
  }
  if (param_5 == (LPDWORD)0x0) {
    param_5 = local_20 + 5;
  }
  if (param_4 == (LPDWORD)0x0) {
    param_4 = local_20 + 6;
  }
  RegQueryInfoKeyA((HKEY)*param_1,param_2,param_3,(LPDWORD)0x0,param_4,param_5,param_6,param_7,
                   param_8,param_9,param_10,param_11);
  return;
}


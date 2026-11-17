// rea decompile_all
// name: FUN_004153ec
// address: 0x4153ec
// body: available
// range: 0x4153ec-0x41549d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004153ec(int param_1,int param_2,int param_3,int param_4)

{
  HMONITOR hMonitor;
  BOOL BVar1;
  int iVar2;
  tagMONITORINFO local_3c;
  RECT local_14;
  
  if ((0 < param_3) && (0 < param_4)) {
    local_14.left = param_1;
    local_14.right = param_3 + param_1;
    local_14.top = param_2;
    local_14.bottom = param_4 + param_2;
    hMonitor = MonitorFromRect(&local_14,2);
    if (hMonitor != (HMONITOR)0x0) {
      local_3c.cbSize = 0x28;
      BVar1 = GetMonitorInfoA(hMonitor,&local_3c);
      if (BVar1 != 0) {
        if (param_3 < 0) {
          param_3 = param_3 + 7;
        }
        if (local_14.left < local_3c.rcWork.right - (param_3 >> 3)) {
          iVar2 = param_4;
          if (param_4 < 0) {
            iVar2 = param_4 + 7;
          }
          if ((local_14.top < local_3c.rcWork.bottom - (iVar2 >> 3)) &&
             ((param_3 >> 3) + local_3c.rcWork.left < local_14.right)) {
            if (param_4 < 0) {
              param_4 = param_4 + 7;
            }
            if ((param_4 >> 3) + local_3c.rcWork.top < local_14.bottom) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


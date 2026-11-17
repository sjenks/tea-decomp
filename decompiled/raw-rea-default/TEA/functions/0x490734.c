// rea decompile_all
// name: FUN_00490734
// address: 0x490734
// body: available
// range: 0x490734-0x4907fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00490734(int param_1)

{
  POINT Point;
  int *piVar1;
  BOOL BVar2;
  HWND hWndTo;
  HWND local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagPOINT local_c;
  
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
  if (piVar1 != (int *)0x0) {
    BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (BVar2 != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      Point.y = local_c.y;
      Point.x = local_c.x;
      hWndTo = WindowFromPoint(Point);
      if (hWndTo == (HWND)0x0) {
        hWndTo = GetDesktopWindow();
      }
      else {
        MapWindowPoints((HWND)0x0,hWndTo,&local_c,1);
      }
      local_24 = 0x200;
      local_20 = 0;
      local_1c = CONCAT22((undefined2)local_c.y,(undefined2)local_c.x);
      local_28 = hWndTo;
      FUN_004a76a8(*piVar1,0x407,0,(LPARAM)&local_28);
    }
  }
  if ((*(char *)(param_1 + 0x39) != '\0') &&
     (*(undefined1 *)(param_1 + 0x39) = 0, (DAT_00506c48 & 1) != 0)) {
    FUN_004903b8(param_1);
  }
  return;
}


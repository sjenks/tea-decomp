// rea decompile_all
// name: @MsgHookProc$qqsiuil
// address: 0x4115a0
// body: available
// range: 0x4115a0-0x41164a inclusive
// range: 0x41164d-0x41167f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __stdcall _MsgHookProc_qqsiuil(int param_1,undefined4 param_2,undefined4 *param_3)

{
  SHORT SVar1;
  uint uVar2;
  HWND pHVar3;
  HWND hWnd;
  
                    /* 0x115a0  2  @MsgHookProc$qqsiuil */
  if ((-1 < param_1) && (param_3 != (undefined4 *)0x0)) {
    if (param_1 == 0) {
      if ((param_3[1] == 0x100) &&
         ((param_3[2] == 0x70 || ((param_3[2] == 9 && (SVar1 = GetKeyState(0x11), SVar1 < 0)))))) {
        hWnd = (HWND)0x0;
        pHVar3 = (HWND)*param_3;
        while ((pHVar3 != (HWND)0x0 &&
               (uVar2 = GetWindowLongA(pHVar3,-0x10), hWnd = pHVar3, (uVar2 & 0x40000000) != 0))) {
          pHVar3 = (HWND)GetWindowLongA(pHVar3,-8);
        }
        if ((hWnd != (HWND)0x0) && (uVar2 = GetWindowLongA(hWnd,-0x10), (uVar2 & 0x80000000) != 0))
        {
          PostMessageA(hWnd,DAT_0051ac78,param_3[2],0);
          return 1;
        }
      }
    }
    else if (((param_1 == 2) && (param_3[1] == 0x100)) && (param_3[2] == 0x70)) {
      PostMessageA(DAT_0051ac8c,DAT_0051ac78,2,0);
    }
  }
  return 0;
}


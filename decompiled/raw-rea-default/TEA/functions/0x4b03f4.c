// rea decompile_all
// name: FUN_004b03f4
// address: 0x4b03f4
// body: available
// range: 0x4b03f4-0x4b0485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004b03f4(int *param_1,LPMSG param_2)

{
  bool bVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND pHVar2;
  BOOL BVar3;
  
  bVar1 = FUN_004a54b4(*param_1,param_2);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (*(int *)(*param_1 + 0xc) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent(*(HWND *)(*param_1 + 0xc));
    }
    if ((((hWnd != (HWND)0x0) && (hWnd_00 = GetParent(hWnd), hWnd_00 != (HWND)0x0)) &&
        (pHVar2 = (HWND)SendMessageA(hWnd_00,0x229,0,0), hWnd == pHVar2)) &&
       (BVar3 = TranslateMDISysAccel(hWnd_00,param_2), BVar3 != 0)) {
      return true;
    }
    BVar3 = IsDialogMessageA(*(HWND *)(*param_1 + 0xc),param_2);
    bVar1 = BVar3 != 0;
  }
  return bVar1;
}


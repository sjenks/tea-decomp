// rea decompile_all
// name: FUN_004aa96c
// address: 0x4aa96c
// body: available
// range: 0x4aa96c-0x4aaa53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004aa96c(int param_1,int *param_2)

{
  BOOL BVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  HWND hWnd;
  
  if ((((*(int *)(param_1 + 0x31) != 0) &&
       (BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x31) + 0xc)), BVar1 != 0)) &&
      ((*param_2 == *(int *)(**(int **)(param_1 + 0x2b) + 0xc) ||
       (BVar1 = IsChild(*(HWND *)(**(int **)(param_1 + 0x2b) + 0xc),(HWND)*param_2), BVar1 != 0))))
     && ((0x1ff < (uint)param_2[1] && ((uint)param_2[1] < 0x20e)))) {
    FUN_004a76a8(**(int **)(param_1 + 0x31),0x407,0,(LPARAM)param_2);
  }
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    if (DAT_0050bc84 == '\0') {
      DAT_0050bc80 = GetDesktopWindow();
      DAT_0050bc84 = DAT_0050bc84 + '\x01';
    }
    if (hWnd == DAT_0050bc80) break;
    LVar2 = FUN_004a614c(hWnd,param_1);
    if ((LVar2 != 0) && (uVar3 = (**(code **)(*(int *)(LVar2 + 8) + 0x28))(), (char)uVar3 != '\0'))
    {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    hWnd = GetParent(hWnd);
  }
  return 0;
}


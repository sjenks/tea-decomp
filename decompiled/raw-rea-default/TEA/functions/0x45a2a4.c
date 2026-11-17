// rea decompile_all
// name: FUN_0045a2a4
// address: 0x45a2a4
// body: available
// range: 0x45a2a4-0x45a3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0045a2a4(int *param_1,undefined4 param_2,LPPOINT param_3)

{
  int *piVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_40;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4f95a8);
  piVar1 = FUN_0045dcb8(param_1,&param_3->x);
  if (piVar1 != (int *)0x0) {
    _DAT_0051ac88 = 0x19f0;
    DAT_0051ac84 = 0x19f0;
    iVar3 = 1;
    piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)0x19f0);
    FUN_00497fac(&local_10,piVar1,iVar3);
    FUN_00497bf4(local_1c,2);
    ClientToScreen(*(HWND *)(*param_1 + 0xc),param_3);
    iVar3 = GetSystemMetrics(0);
    if (param_3->x < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_3->x;
    }
    if (iVar2 < iVar3) {
      if (param_3->x < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3->x;
      }
    }
    else {
      iVar3 = GetSystemMetrics(0);
    }
    param_3->x = iVar3;
    iVar3 = GetSystemMetrics(1);
    if (param_3->y < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_3->y;
    }
    if (iVar2 < iVar3) {
      if (param_3->y < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3->y;
      }
    }
    else {
      iVar3 = GetSystemMetrics(1);
    }
    param_3->y = iVar3;
    hWnd = (HWND)FUN_00454458(param_1);
    TrackPopupMenu(local_c,2,param_3->x,param_3->y,0,hWnd,(RECT *)0x0);
    FUN_00497bf4(&local_10,0);
  }
  FUN_004a5774(*param_1);
  *in_FS_OFFSET = local_40;
  return;
}


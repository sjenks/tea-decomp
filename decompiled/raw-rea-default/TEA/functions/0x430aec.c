// rea decompile_all
// name: FUN_00430aec
// address: 0x430aec
// body: available
// range: 0x430aec-0x430c55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00430aec(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  tagPOINT local_48;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4f2be0);
  local_48.x = 0;
  local_48.y = 0;
  if (param_2 != (int *)0x0) {
    local_48.x = *param_2;
    local_48.y = param_2[1];
  }
  iVar1 = FUN_0042ba14((int)param_1);
  if (iVar1 == 0) {
    DAT_0051ac84 = (LPCSTR)0x19f0;
  }
  else {
    DAT_0051ac84 = (LPCSTR)0x1a04;
  }
  local_30 = 0x14;
  iVar1 = 1;
  _DAT_0051ac88 = DAT_0051ac84;
  piVar2 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),DAT_0051ac84);
  local_24 = local_24 + 1;
  FUN_00497fac(&local_10,piVar2,iVar1);
  local_24 = local_24 + 1;
  FUN_00497bf4(local_1c,2);
  local_30 = 8;
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_48);
  iVar3 = GetSystemMetrics(0);
  iVar1 = local_48.x;
  if (local_48.x < 1) {
    iVar1 = 0;
  }
  if (iVar1 < iVar3) {
    if (local_48.x < 1) {
      local_48.x = 0;
    }
  }
  else {
    local_48.x = GetSystemMetrics(0);
  }
  iVar3 = GetSystemMetrics(1);
  iVar1 = local_48.y;
  if (local_48.y < 1) {
    iVar1 = 0;
  }
  if (iVar1 < iVar3) {
    if (local_48.y < 1) {
      local_48.y = 0;
    }
  }
  else {
    local_48.y = GetSystemMetrics(1);
  }
  hWnd = (HWND)FUN_00454458((int *)param_1[0x38]);
  TrackPopupMenu(local_c,2,local_48.x,local_48.y,0,hWnd,(RECT *)0x0);
  local_24 = local_24 + -2;
  FUN_00497bf4(&local_10,0);
  *in_FS_OFFSET = local_40;
  return;
}


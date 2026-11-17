// rea decompile_all
// name: FUN_00415944
// address: 0x415944
// body: available
// range: 0x415944-0x415b18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00415944(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_50;
  LPARAM local_4c;
  tagPOINT local_48;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4edaa4);
  local_48.x = 0;
  local_48.y = 0;
  if (param_3 == (int *)0x0) {
    local_50 = 0;
    local_4c = -1;
    FUN_004691fc(param_2,(LPARAM)&local_50);
    FUN_004a76a8(*param_2,0xd6,(WPARAM)&local_48,local_4c);
    ClientToScreen(*(HWND *)(*param_2 + 0xc),&local_48);
  }
  else {
    local_48.x = *param_3;
    local_48.y = param_3[1];
  }
  local_30 = 0x14;
  iVar3 = 1;
  piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),
                        (LPCSTR)param_1[0x11]);
  local_24 = local_24 + 1;
  FUN_00497fac(&local_10,piVar1,iVar3);
  local_24 = local_24 + 1;
  FUN_00497bf4(local_1c,2);
  local_30 = 8;
  (**(code **)(param_2[3] + 0x7c))();
  DAT_0051ac84 = param_1[0x11];
  _DAT_0051ac88 = DAT_0051ac84;
  iVar2 = GetSystemMetrics(0);
  iVar3 = local_48.x;
  if (local_48.x < 1) {
    iVar3 = 0;
  }
  if (iVar3 < iVar2) {
    if (local_48.x < 1) {
      local_48.x = 0;
    }
  }
  else {
    local_48.x = GetSystemMetrics(0);
  }
  iVar2 = GetSystemMetrics(1);
  iVar3 = local_48.y;
  if (local_48.y < 1) {
    iVar3 = 0;
  }
  if (iVar3 < iVar2) {
    if (local_48.y < 1) {
      local_48.y = 0;
    }
  }
  else {
    local_48.y = GetSystemMetrics(1);
  }
  hWnd = *(HWND *)(*param_1 + 0xc);
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0)
  ;
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(piVar1[3] + 0x18))(), iVar3 == *param_1)) {
    hWnd = *(HWND *)(*piVar1 + 0xc);
  }
  TrackPopupMenu(local_c,2,local_48.x,local_48.y,0,hWnd,(RECT *)0x0);
  local_24 = local_24 + -2;
  FUN_00497bf4(&local_10,0);
  *in_FS_OFFSET = local_40;
  return;
}


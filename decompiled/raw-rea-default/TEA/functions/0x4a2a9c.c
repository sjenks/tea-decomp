// rea decompile_all
// name: FUN_004a2a9c
// address: 0x4a2a9c
// body: available
// range: 0x4a2a9c-0x4a2d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a2a9c(int *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  HWND hWnd;
  HGDIOBJ pvVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT local_64 [2];
  int local_44;
  LPSTR local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  LPSTR local_c;
  uint *local_8;
  
  FUN_004dce64(0x50a598);
  local_8 = (uint *)0x0;
  local_c = (LPSTR)0x0;
  local_20 = local_20 + 2;
  local_2c = 0x14;
  puVar1 = local_8;
  if (param_1[6] == 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x31;
    hWnd = GetParent(*(HWND *)(*param_1 + 0xc));
    pvVar3 = (HGDIOBJ)SendMessageA(hWnd,Msg,wParam,lParam);
    if (pvVar3 == (HGDIOBJ)0x0) {
      bVar2 = FUN_004875a8();
      if (bVar2) {
        iVar4 = 0xc;
      }
      else {
        iVar4 = 0xd;
      }
      pvVar3 = GetStockObject(iVar4);
    }
    puVar1 = local_8;
    if (pvVar3 != (HGDIOBJ)0x0) {
      local_10 = (uint *)FUN_004cc0f0();
      if (local_10 != (uint *)0x0) {
        local_2c = 0x38;
        FUN_0048f708(local_10,pvVar3,0);
        local_2c = 0x2c;
      }
      puVar1 = local_10;
      local_14 = local_8;
      if (local_8 != (uint *)0x0) {
        local_2c = 0x44;
        local_20 = local_20 + -1;
        FUN_00494064(local_8,0);
        FUN_004cc0bc();
        local_2c = 0x2c;
      }
    }
  }
  local_8 = puVar1;
  if (param_1[6] == 0) {
    if (local_8 != (uint *)0x0) {
      (**(code **)(*(int *)(param_2 + 5) + 0x14))();
    }
  }
  else {
    (**(code **)(*(int *)(param_2 + 5) + 0x14))();
  }
  iVar4 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  local_2c = 0x14;
  local_40 = (LPSTR)FUN_004cc180();
  FUN_004cc0cc();
  local_c = local_40;
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),local_40,iVar4 + 1);
  local_64[0].left = 0;
  local_64[0].top = 0;
  local_64[0].right = 0;
  local_64[0].bottom = 0;
  FUN_004a7a6c(*param_1,local_64);
  local_44 = param_1[8];
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) != '\0') {
      local_44 = param_1[9];
    }
  }
  else {
    local_44 = param_1[10];
  }
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x50))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  if ((param_1[6] != 0) || (local_8 != (uint *)0x0)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x1c))();
  }
  local_20 = local_20 + -1;
  FUN_004cc0cc();
  local_18 = local_8;
  if (local_8 != (uint *)0x0) {
    local_2c = 0x68;
    local_20 = local_20 + -2;
    FUN_00494064(local_8,0);
    FUN_004cc0bc();
  }
  *in_FS_OFFSET = local_3c;
  return;
}


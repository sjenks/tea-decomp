// rea decompile_all
// name: FUN_0045d674
// address: 0x45d674
// body: available
// range: 0x45d674-0x45d829 inclusive
// range: 0x45d82c-0x45d86a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_0045d674(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int local_60 [4];
  tagRECT local_50;
  int local_40 [4];
  tagRECT local_30 [2];
  tagPOINT local_c;
  
  if (param_2->message == 0x100) {
    if (((param_2->wParam == 0xd) && (SVar3 = GetKeyState(0x11), -1 < SVar3)) &&
       (bVar2 = FUN_00454524((int)param_1,0x1dce), bVar2)) {
      FUN_0045734c();
      return true;
    }
    WVar1 = param_2->wParam;
    if ((WVar1 == 0x73) || (WVar1 == 0x74)) {
      FUN_0045de08(param_1,WVar1,0);
      return true;
    }
    if ((param_1[0x18] == 0) && (param_2->wParam == 0x70)) {
      (**(code **)(param_1[3] + 0xb4))();
      return true;
    }
  }
  else if (param_2->message == 0x205) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    local_30[0].left = 0;
    local_30[0].top = 0;
    local_30[0].right = 0;
    local_30[0].bottom = 0;
    FUN_004a7a30(*(int *)param_1[0x1a3],local_30);
    ptVar6 = local_30;
    pLVar7 = local_40;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    local_50.left = 0;
    local_50.top = 0;
    local_50.right = 0;
    local_50.bottom = 0;
    FUN_004a7a30(param_1[0x84],&local_50);
    ptVar6 = &local_50;
    pLVar7 = local_60;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    if (local_40[3] < local_60[3]) {
      local_40[3] = local_60[3];
    }
    if (local_40[2] < local_60[2]) {
      local_40[2] = local_60[2];
    }
    if (local_60[1] < local_40[1]) {
      local_40[1] = local_60[1];
    }
    if (local_60[0] < local_40[0]) {
      local_40[0] = local_60[0];
    }
    if (((local_c.x < local_40[0]) || (local_40[2] <= local_c.x)) ||
       ((local_c.y < local_40[1] || (local_40[3] <= local_c.y)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0045c5f0(param_1,2);
      return true;
    }
  }
  else if (((param_2->message == 0x101) && (param_2->wParam == 0x5d)) &&
          (pHVar4 = GetFocus(), pHVar4 == *(HWND *)(param_1[0x84] + 0xc))) {
    FUN_0045c5f0(param_1,2);
    return true;
  }
  bVar2 = FUN_004167d8(param_1,param_2);
  return bVar2;
}


// rea decompile_all
// name: FUN_004194d8
// address: 0x4194d8
// body: available
// range: 0x4194d8-0x419872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004194d8(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  uint *puVar2;
  HDC pHVar3;
  int *piVar4;
  RECT *pRVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int iVar7;
  int local_bc [4];
  tagRECT local_ac;
  RECT local_94;
  COLORREF local_84;
  uint local_80;
  COLORREF local_7c;
  int local_78;
  undefined4 local_74;
  undefined2 local_64;
  int local_58;
  uint local_50 [2];
  LOGBRUSH local_48;
  undefined4 *local_3c;
  uint local_38 [2];
  uint local_30 [2];
  HDC local_28;
  int local_23;
  
  bVar6 = 0;
  FUN_004dce64(0x4ee62c);
  local_64 = 8;
  FUN_0048d7c8(&local_28,*(undefined4 *)(param_2 + 0x18));
  local_58 = local_58 + 1;
  local_94.bottom = *(int *)(param_2 + 0x28);
  local_94.right = *(int *)(param_2 + 0x24);
  local_94.top = *(int *)(param_2 + 0x20);
  local_94.left = *(int *)(param_2 + 0x1c);
  local_78 = local_94.left;
  if (((*(char *)(param_1 + 0x15) != '\0') && (2 < local_94.right - local_94.left)) &&
     (2 < local_94.bottom - local_94.top)) {
    local_64 = 0x20;
    FUN_0049b6a8(local_30,(uint *)&DAT_0051b1bc,1,0);
    local_58 = local_58 + 2;
    local_64 = 0x2c;
    FUN_0048d8f4(&local_28,local_30);
    local_64 = 0x38;
    iVar7 = 0;
    pvVar1 = GetStockObject(5);
    FUN_004ab7e4(local_38,pvVar1,iVar7);
    local_58 = local_58 + 2;
    local_64 = 0x2c;
    FUN_0048d938(&local_28,local_38);
    Rectangle(local_28,local_94.left,local_94.top,local_94.right,local_94.bottom);
    FUN_00494470(&local_94.left,-1,-1);
    FUN_0048da64(&local_28);
    FUN_0048da38(&local_28);
    local_58 = local_58 + -2;
    FUN_004ab9b4(local_38,2);
    local_58 = local_58 + -2;
    FUN_00494064(local_30,0);
  }
  local_64 = 0x14;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    iVar7 = 6;
  }
  else {
    iVar7 = 7;
  }
  FUN_0049f930(&local_ac.left,&local_94.left,iVar7,0);
  local_64 = 0x14;
  FUN_0049fa58(&local_ac,&local_28);
  FUN_0049f9e0(local_bc,&local_ac.left);
  piVar4 = local_bc;
  pRVar5 = &local_94;
  for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    pRVar5->left = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    local_64 = 0x44;
    FUN_004178ac(&local_48,*(COLORREF *)(param_1 + 0x60));
    local_58 = local_58 + 1;
    local_64 = 0x50;
    FillRect(local_28,&local_94,(HBRUSH)*local_3c);
    local_80 = *(uint *)(param_1 + 0x20);
    FUN_0048dd6c(&local_7c,(int *)&local_28,&local_80);
    local_64 = 0x5c;
    puVar2 = FUN_0048f7fc(local_50,(LOGFONTA *)(param_1 + 0x24));
    local_58 = local_58 + 2;
    FUN_0048d97c(&local_28,puVar2);
    local_58 = local_58 + -2;
    FUN_00494064(local_50,0);
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    if (pHVar3 != local_28) {
      SetBkMode(local_28,1);
    }
    iVar7 = 1;
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    iVar7 = SetBkMode(pHVar3,iVar7);
    local_64 = 0x50;
    FUN_0048e0a8(&local_28,*(LPCSTR *)(param_1 + 0x84),-1,&local_94,0x25);
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    if (pHVar3 != local_28) {
      SetBkMode(local_28,iVar7);
    }
    pHVar3 = (HDC)(**(code **)(local_23 + 0x5c))();
    SetBkMode(pHVar3,iVar7);
    FUN_0048da90(&local_28);
    FUN_0048dd6c(&local_84,(int *)&local_28,&local_7c);
    FUN_00494470(&local_94.left,-1,-1);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      DrawFocusRect(local_28,&local_94);
    }
    local_58 = local_58 + -1;
    FUN_0041794c((int)&local_48,2);
    local_64 = 0x14;
  }
  local_58 = local_58 + -1;
  FUN_0048d8bc((int *)&local_28,2);
  *in_FS_OFFSET = local_74;
  return;
}


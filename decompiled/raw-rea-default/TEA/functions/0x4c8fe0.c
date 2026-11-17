// rea decompile_all
// name: FUN_004c8fe0
// address: 0x4c8fe0
// body: available
// range: 0x4c8fe0-0x4c9176 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004c8fe0(undefined4 param_1,undefined4 *param_2,RECT *param_3,char param_4)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  RECT local_24;
  undefined1 local_14 [12];
  uint local_8;
  
  FUN_004c8c78(param_1,param_2,param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(&param_3->left,1,1);
  }
  if (param_3->right - param_3->left < 8) {
    local_24.right = (param_3->right - param_3->left) - 3;
  }
  else {
    uVar2 = param_3->right - param_3->left;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    local_24.right = ((param_3->right - param_3->left) - iVar3) - 1;
  }
  if (param_3->bottom - param_3->top < 8) {
    local_24.bottom = (param_3->bottom - param_3->top) + -3;
  }
  else {
    uVar2 = param_3->bottom - param_3->top;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    local_24.bottom = ((param_3->bottom - param_3->top) - iVar3) + -1;
  }
  if ((1 < local_24.right) && (1 < local_24.bottom)) {
    local_24.left = 0;
    local_24.top = 0;
    uVar2 = ((param_3->bottom - param_3->top) - local_24.bottom) - 1;
    iVar3 = (int)uVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
    }
    uVar2 = ((param_3->right - param_3->left) - local_24.right) - 1;
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    local_8 = local_24.right;
    FUN_00494454(&local_24.left,iVar4 + param_3->left,iVar3 + param_3->top);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_00494454(&local_24.left,1,1);
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = local_24.right - 1;
    local_24.bottom = local_24.bottom + -1;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x20))
              (local_14,*(int *)((int)param_2 + 5),BVar1 != 0,local_14,param_2,&DAT_0051b1ec);
    BVar1 = ExtTextOutA((HDC)*param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
    local_24.right = (LONG)(BVar1 != 0);
  }
  return local_24.right;
}


// rea decompile_all
// name: FUN_004908f0
// address: 0x4908f0
// body: available
// range: 0x4908f0-0x490aac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004908f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  HDC pHVar2;
  uint uVar3;
  uint uVar4;
  tagRECT *ptVar5;
  int iVar6;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  if (((DAT_00506c48 & 1) != 0) && ((char)param_1[0x11] != '\0')) {
    if ((DAT_00506c48 & 0x10) == 0) {
      uVar4 = 0;
      local_8 = 4;
    }
    else {
      uVar4 = 0x4000;
      local_8 = 1;
    }
    if (*(char *)(*(int *)((int)param_1 + 6) + 0x35) == '\0') {
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_004a7a6c(**(int **)((int)param_1 + 6),&local_20);
      local_c = DAT_00509ec8;
      iVar1 = GetSystemMetrics(DAT_00509ec8);
      FUN_00494470(&local_20.left,0,-iVar1);
      iVar1 = 2;
      ptVar5 = &local_20;
      pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(pHVar2,(LPPOINT)ptVar5,iVar1);
      uVar3 = *(int *)((int)param_1 + 0x12) - *(int *)((int)param_1 + 10);
      local_20.right = (int)uVar3 >> 1;
      if (local_20.right < 0) {
        local_20.right = local_20.right + (uint)((uVar3 & 1) != 0);
      }
      local_20.left = local_20.right + -1;
      local_20.right = local_20.right + 1;
      FUN_0049fa74(param_2,&local_20,local_8,uVar4 | 4);
    }
    else if (*(char *)(*(int *)((int)param_1 + 6) + 0x35) == '\x01') {
      local_30.left = 0;
      local_30.top = 0;
      local_30.right = 0;
      local_30.bottom = 0;
      FUN_004a7a6c(**(int **)((int)param_1 + 6),&local_30);
      iVar6 = 0;
      local_10 = DAT_00509ec0;
      iVar1 = GetSystemMetrics(DAT_00509ec0);
      FUN_00494470(&local_30.left,-iVar1,iVar6);
      iVar1 = 2;
      ptVar5 = &local_30;
      pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(pHVar2,(LPPOINT)ptVar5,iVar1);
      uVar3 = *(int *)((int)param_1 + 0x16) - *(int *)((int)param_1 + 0xe);
      local_30.bottom = (int)uVar3 >> 1;
      if (local_30.bottom < 0) {
        local_30.bottom = local_30.bottom + (uint)((uVar3 & 1) != 0);
      }
      local_30.top = local_30.bottom + -1;
      local_30.bottom = local_30.bottom + 1;
      FUN_0049fa74(param_2,&local_30,local_8,uVar4 | 2);
    }
  }
  FUN_00490560(param_1);
  return;
}


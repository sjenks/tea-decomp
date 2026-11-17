// rea decompile_all
// name: FUN_0045dcb8
// address: 0x45dcb8
// body: available
// range: 0x45dcb8-0x45dd88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_0045dcb8(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  tagRECT *ptVar5;
  int *piVar6;
  int local_30 [4];
  tagRECT local_20;
  undefined1 local_d;
  tagPOINT local_c;
  
  local_c.x = *param_2;
  local_c.y = param_2[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_c);
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar4) break;
    piVar1 = *(int **)(*(int *)(param_1[0x1ad] + uVar4 * 4) + 4);
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
    FUN_004a7a30(*piVar1,&local_20);
    ptVar5 = &local_20;
    piVar6 = local_30;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      piVar6 = piVar6 + 1;
    }
    if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1])) ||
       (local_30[3] <= local_c.y)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return piVar1;
    }
    uVar4 = uVar4 + 1;
    local_d = 0;
  }
  return (int *)0x0;
}


// rea decompile_all
// name: FUN_0044f9f0
// address: 0x44f9f0
// body: available
// range: 0x44f9f0-0x44faa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_0044f9f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  tagRECT *ptVar3;
  int *piVar4;
  int local_28 [4];
  tagRECT local_18;
  char local_5;
  
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  FUN_004a7a30(param_1,&local_18);
  ptVar3 = &local_18;
  piVar4 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = ptVar3->left;
    ptVar3 = (tagRECT *)&ptVar3->top;
    piVar4 = piVar4 + 1;
  }
  if ((((*param_2 < local_28[0]) || (local_28[2] <= *param_2)) || (param_2[1] < local_28[1])) ||
     (local_28[3] <= param_2[1])) {
    local_5 = '\0';
  }
  else {
    local_5 = '\x01';
  }
  if (local_5 != '\0') {
    iVar2 = GetDlgCtrlID(*(HWND *)(param_1 + 0xc));
    if (iVar2 < 0x1113) {
      iVar1 = iVar2;
      if (((iVar2 == 0x1112) || (iVar1 = 0, iVar2 == 0x10ae)) ||
         ((iVar1 = 0, iVar2 == 0x10b8 ||
          ((iVar1 = 0, iVar2 == 0x10fe || (iVar1 = 0, iVar2 == 0x1108)))))) {
LAB_0044fa9c:
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    else {
      iVar1 = 0;
      if (((iVar2 == 0x111c) || (iVar1 = 0, iVar2 == 0x1144)) || (iVar1 = 0, iVar2 == 0x3192))
      goto LAB_0044fa9c;
    }
  }
  return 0;
}


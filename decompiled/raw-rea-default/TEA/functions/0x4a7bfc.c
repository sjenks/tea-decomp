// rea decompile_all
// name: FUN_004a7bfc
// address: 0x4a7bfc
// body: available
// range: 0x4a7bfc-0x4a7d19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004a7bfc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HCURSOR hCursor;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int local_30 [4];
  tagRECT local_20;
  char local_d;
  tagPOINT local_c;
  
  if ((param_2 == *(int *)(param_1 + 0x50)) && (param_3 == *(int *)(param_1 + 0x54))) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x50) == 0)) {
      hCursor = (HCURSOR)0x0;
    }
    else {
      hCursor = *(HCURSOR *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x50) = param_2;
    *(int *)(param_1 + 0x54) = param_3;
    if (*(int *)(param_1 + 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else if (*(int *)(param_1 + 0x50) == 0) {
      param_3 = (int)LoadCursorA((HINSTANCE)0x0,*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    else {
      param_3 = (int)FUN_004c1b34(*(int *)(param_1 + 0x50),*(LPCSTR *)(param_1 + 0x54));
      *(int *)(param_1 + 0x58) = param_3;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(param_1 + 0xc),&local_c);
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_004a7a6c(param_1,&local_20);
      ptVar3 = &local_20;
      pLVar4 = local_30;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      param_3 = local_c.x;
      if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1]))
         || (param_3 = local_c.y, local_30[3] <= local_c.y)) {
        local_d = '\0';
      }
      else {
        local_d = '\x01';
      }
      if (local_d != '\0') {
        param_3 = (int)SetCursor(*(HCURSOR *)(param_1 + 0x58));
      }
    }
    if (hCursor != (HCURSOR)0x0) {
      param_3 = DestroyCursor(hCursor);
    }
    uVar1 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar1;
}


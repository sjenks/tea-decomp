// rea decompile_all
// name: FUN_004bf144
// address: 0x4bf144
// body: available
// range: 0x4bf144-0x4bf149 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __stdcall FUN_004bf144(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int aiStack_38 [4];
  tagRECT tStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  char cStack_5;
  
  FUN_004a6214(*(int *)param_1,param_2);
  if (*(int *)(param_1 + 0x15) != 0) {
    cStack_5 = '\0';
    if (param_2 != 1) {
      uVar1 = FUN_004be9dc((int *)param_1,'\x01');
      cStack_5 = (char)uVar1;
      tStack_28.left = 0;
      tStack_28.top = 0;
      tStack_28.right = 0;
      tStack_28.bottom = 0;
      FUN_004a7a6c(*(int *)(param_1 + 0x15),&tStack_28);
      ptVar3 = &tStack_28;
      pLVar4 = aiStack_38;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      iStack_14 = aiStack_38[3] - aiStack_38[1];
      iStack_18 = aiStack_38[2] - aiStack_38[0];
      *param_3 = iStack_18;
      param_3[1] = iStack_14;
      iStack_10 = iStack_18;
      iStack_c = iStack_14;
    }
    if (cStack_5 == '\0') {
      FUN_004a7708(*(int *)(param_1 + 0x15),'\x01');
    }
  }
  FUN_004bf118((int *)param_1,param_2,(LPARAM)param_3);
  return;
}


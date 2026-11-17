// rea decompile_all
// name: FUN_004c9490
// address: 0x4c9490
// body: available
// range: 0x4c9490-0x4c9495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __stdcall FUN_004c9490(int *param_1,undefined4 *param_2,int *param_3,char param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_10;
  int iStack_c;
  
  FUN_004c8c78(param_1,param_2,(RECT *)param_3,param_4);
  if (param_4 != '\0') {
    FUN_00494454(param_3,1,1);
  }
  iStack_34 = param_3[3] - param_3[1];
  iVar4 = param_3[2] - *param_3;
  BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (BVar1 != 0) {
    iVar2 = iStack_34 * -3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar3 = iVar4 + 1;
    if (iVar3 < 0) {
      iVar3 = iVar4 + 4;
    }
    iStack_24 = (iVar2 >> 3) + param_3[3];
    iStack_10 = (iVar3 >> 2) + *param_3;
    iStack_28 = (int)(iVar4 + 1U) >> 1;
    if (iStack_28 < 0) {
      iStack_28 = iStack_28 + (uint)((iVar4 + 1U & 1) != 0);
    }
    iStack_28 = iStack_28 + iStack_10;
    iStack_c = iStack_24;
    for (; iStack_10 < iStack_28; iStack_10 = iStack_10 + 1) {
      MoveToEx((HDC)*param_2,iStack_10,iStack_c,(LPPOINT)0x0);
      LineTo((HDC)*param_2,iStack_28,iStack_24);
      iStack_c = iStack_c + 1;
      iStack_28 = iStack_28 + -1;
      iStack_24 = iStack_24 + 1;
    }
  }
  BVar1 = IsZoomed(*(HWND *)(*param_1 + 0xc));
  if (BVar1 == 0) {
    iStack_34 = (iStack_34 * 2) / 3;
  }
  else {
    iStack_34 = iStack_34 * 3;
    if (iStack_34 < 0) {
      iStack_34 = iStack_34 + 7;
    }
    iStack_34 = iStack_34 >> 3;
  }
  iVar2 = iVar4 + 1;
  if (iVar2 < 0) {
    iVar2 = iVar4 + 4;
  }
  iStack_34 = iStack_34 + param_3[1];
  iStack_30 = (iVar2 >> 2) + *param_3;
  iStack_38 = (int)(iVar4 + 1U) >> 1;
  if (iStack_38 < 0) {
    iStack_38 = iStack_38 + (uint)((iVar4 + 1U & 1) != 0);
  }
  iStack_38 = iStack_38 + iStack_30;
  iStack_2c = iStack_34;
  for (; iStack_30 < iStack_38; iStack_30 = iStack_30 + 1) {
    MoveToEx((HDC)*param_2,iStack_30,iStack_2c,(LPPOINT)0x0);
    LineTo((HDC)*param_2,iStack_38,iStack_34);
    iStack_2c = iStack_2c + -1;
    iStack_38 = iStack_38 + -1;
    iStack_34 = iStack_34 + -1;
  }
  return;
}


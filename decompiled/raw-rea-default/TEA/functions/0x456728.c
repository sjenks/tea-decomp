// rea decompile_all
// name: FUN_00456728
// address: 0x456728
// body: available
// range: 0x456728-0x456808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00456728(int *param_1,int *param_2)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  HWND pHVar6;
  
  DVar1 = GetTickCount();
  if ((DVar1 < DAT_004f75d4) || (DAT_004f75d4 + 100 < DVar1)) {
    iVar3 = *(int *)(*(int *)(param_1[0x1a] * 4 + param_1[0x1ad]) + 8);
    DAT_004f75d4 = DVar1;
    iVar2 = FUN_0042ba08(iVar3);
    if (*param_2 < iVar2) {
      iVar3 = FUN_0042ba08(iVar3);
      *param_2 = iVar3;
      FUN_0045db98((int)param_1);
    }
  }
  piVar4 = (int *)(*(int *)(*param_1 + 0x6c) + 0x11);
  uVar5 = FUN_00498d7c(piVar4);
  if (param_1[0x19] == 4) {
    (**(code **)(param_1[3] + 0x20))(uVar5,param_1[3],piVar4,param_1,1);
    uVar5 = 1;
  }
  else {
    if (DAT_004f3434 != 0) {
      FUN_0045c6d4((int)param_1,3);
      DAT_004f3434 = 0;
    }
    if (param_1[0x19] == 3) {
      FUN_0045db98((int)param_1);
      pHVar6 = GetFocus();
      if (pHVar6 == *(HWND *)(param_1[0x84] + 0xc)) {
        SetFocus(*(HWND *)(param_1[0x56] + 0xc));
      }
      (**(code **)(param_1[3] + 0xa4))();
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


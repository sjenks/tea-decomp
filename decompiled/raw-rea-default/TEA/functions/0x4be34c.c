// rea decompile_all
// name: FUN_004be34c
// address: 0x4be34c
// body: available
// range: 0x4be34c-0x4be41c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004be34c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x15);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  (**(code **)(param_1[3] + 0x20))();
  if (iVar4 == *(int *)((int)param_1 + 0x11)) {
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  if (*(int *)((int)param_1 + 0x15) == 0) {
    *(undefined4 *)(*param_1 + 0x5c) = DAT_0051b19c;
  }
  else {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    iVar4 = *param_1;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0x15) + 0xc) == 0) {
        iVar4 = *(int *)((int)param_1 + 0x15);
        (**(code **)(*(int *)(iVar4 + 8) + 0x10))();
      }
      iVar2 = *(int *)((int)param_1 + 0x15);
      (**(code **)(*(int *)(iVar2 + 8) + 100))(iVar2,*(int *)(iVar2 + 8),iVar4,iVar2,4);
    }
    *(undefined4 *)(*param_1 + 0x5c) = DAT_0051b1a0;
    FUN_004be9dc(param_1,'\x01');
  }
  if ((*(int *)((int)param_1 + 0x15) != 0) && (*(int *)(*(int *)((int)param_1 + 0x15) + 0xc) != 0))
  {
    pHVar3 = GetFocus();
    if (pHVar3 == *(HWND *)(*param_1 + 0xc)) {
      SetFocus(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc));
      *(undefined4 *)((int)param_1 + 0x11) = *(undefined4 *)(*(int *)((int)param_1 + 0x15) + 0xc);
    }
  }
  return iVar1;
}


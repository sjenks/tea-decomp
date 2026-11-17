// rea decompile_all
// name: FUN_004aefd0
// address: 0x4aefd0
// body: available
// range: 0x4aefd0-0x4af0b6 inclusive
// range: 0x4af0cd-0x4af145 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004aefd0(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_10;
  
  if ((param_3 == (HWND)0x0) && (iVar2 = FUN_004a768c(param_1[1]), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      bVar5 = (*(byte *)(iVar2 + 0x1b) & 0x10) != 0;
    }
    else {
      BVar3 = IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      bVar5 = BVar3 != 0;
    }
    if (bVar5) {
      FUN_004950cc((int)(param_1 + 1),iVar2);
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x18);
      local_10 = 0;
      if ((*(byte *)(iVar2 + 0x75) & 0x80) == 0) {
        FUN_004a7590(param_1[1],FUN_004ae109);
      }
      else {
        local_10 = FUN_004a7590(param_1[1],FUN_004ae15f);
      }
      if (local_10 == 0) {
        local_10 = *(int *)(*param_1 + 0x15);
      }
      switch((uVar1 & 0xf00) >> 8) {
      case 1:
        FUN_004af210((int)param_1,iVar2,local_10);
        break;
      case 2:
        FUN_004af394(param_1,iVar2,local_10);
        break;
      case 3:
        FUN_004af558(param_1,iVar2,local_10);
        break;
      case 4:
        FUN_004af794(param_1,iVar2,local_10);
      }
    }
    (**(code **)(param_1[4] + 4))();
    (**(code **)(*(int *)(iVar2 + 8) + 100))();
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004bdfbc((int *)*param_1,param_2,param_3,param_4);
  }
  return uVar4;
}


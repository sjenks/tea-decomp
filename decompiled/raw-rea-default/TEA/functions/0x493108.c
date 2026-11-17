// rea decompile_all
// name: FUN_00493108
// address: 0x493108
// body: available
// range: 0x493108-0x4931d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_00493108(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 local_14;
  int local_10;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = param_2;
  local_8 = 0;
  cVar2 = (**(code **)(param_1[6] + 0x68))();
  if (cVar2 == '\0') {
    for (iVar1 = *(int *)(*param_1 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      unaff_ESI = FUN_004dd744(iVar1,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0);
      if ((unaff_ESI != (undefined4 *)0x0) || (*(int *)(iVar1 + 0x14) == 0)) break;
    }
    if ((iVar1 == 0) ||
       ((unaff_ESI != (undefined4 *)0x0 &&
        (iVar4 = (**(code **)(unaff_ESI[3] + 0x24))(), iVar4 == *(int *)(*param_1 + 0xc))))) {
      uVar3 = FUN_004a5968((undefined4 *)*param_1,param_2,param_3,param_4);
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x48))();
    }
  }
  else {
    FUN_0048e7e0(param_1[4],(int)&local_14);
    uVar3 = 0;
  }
  return uVar3;
}


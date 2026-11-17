// rea decompile_all
// name: FUN_00403194
// address: 0x403194
// body: available
// range: 0x403194-0x4033e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00403194(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  int local_14;
  uint local_c [2];
  
  FUN_004dce64(0x4ea9fc);
  FUN_004034c0(param_1);
  FUN_0048f7fc(local_c,(LOGFONTA *)(param_1 + 0x60));
  (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x14))();
  FUN_00494064(local_c,0);
  (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x24))();
  piVar3 = *(int **)(param_1 + 10);
  iVar2 = (**(code **)(*(int *)((int)piVar3 + 5) + 0x5c))();
  if (iVar2 != *piVar3) {
    SetBkMode((HDC)*piVar3,1);
  }
  iVar2 = 1;
  hdc = (HDC)(**(code **)(*(int *)((int)piVar3 + 5) + 0x5c))();
  SetBkMode(hdc,iVar2);
  if (param_2 == 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((param_2 + -2) * 8 + *(int *)(param_1 + 0xc4));
  }
  iVar1 = *(int *)((param_2 + -1) * 8 + *(int *)(param_1 + 0xc4));
  if ((iVar1 - iVar2) / *(int *)(param_1 + 0xec) < 1) {
    *in_FS_OFFSET = local_40;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x10))();
    for (; (iVar2 < iVar1 && (iVar2 < *(int *)(param_1 + 0xb4))); iVar2 = iVar2 + 1) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))();
      (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x44))();
      if (local_14 != 0) {
        if (*(int *)(local_14 + -0xc) != -1) {
          piVar3 = (int *)(local_14 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar4 = *piVar3 + 1;
          }
          if (iVar4 != 0) goto LAB_004033be;
        }
        FUN_004cc0bc();
        local_14 = 0;
      }
LAB_004033be:
    }
    *in_FS_OFFSET = local_40;
  }
  return;
}


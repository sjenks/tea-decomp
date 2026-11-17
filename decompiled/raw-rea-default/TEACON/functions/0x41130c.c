// rea decompile_all
// name: FUN_0041130c
// address: 0x41130c
// body: available
// range: 0x41130c-0x41156f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041134d) */

int __cdecl FUN_0041130c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_0041f3fc(0x42ddb0);
  local_c = (undefined4 *)&DAT_0042fac0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -4);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
      if ((cVar2 == '@') && (*(int *)(*(int *)(param_2 + 8) + -4) != 0)) {
        FUN_0041ab68((int)local_14,param_2);
      }
      else if ((cVar2 == '#') && (*(int *)(*(int *)(param_2 + 0x18) + -4) != 0)) {
        FUN_0041ab68((int)local_14,param_2 + 0x10);
      }
      else {
        if ((cVar2 == '\\') && (iVar4 + 1 < iVar3)) {
          FUN_0041ae90((int)local_14,local_c[-1],0,1,0x5c);
          iVar4 = iVar4 + 1;
          cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
        }
        FUN_0041ae90((int)local_14,local_c[-1],0,1,cVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = FUN_00416ffc(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    FUN_0041eddc(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_0042fab4) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_00411555;
    }
    FUN_00414f78();
  }
LAB_00411555:
  *in_FS_OFFSET = local_38;
  return param_1;
}


// rea decompile_all
// name: FUN_004aca54
// address: 0x4aca54
// body: available
// range: 0x4aca54-0x4acb95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004aca54(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x50c3f4);
  iVar2 = *(int *)(*param_1 + 1);
  param_1[6] = -1;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_004dc978(*(char **)(*(int *)(*(int *)(*param_1 + 9) + iVar4 * 4) + 8),
                           (char *)param_2);
      if (iVar1 == 0) {
        param_1[6] = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar2 = FUN_004cf628((int)local_14,param_2);
  uVar3 = FUN_004d40d0((int)(param_1 + 2),0,*(uint *)(param_1[4] + -4),*(byte **)(iVar2 + 8),
                       *(uint *)(*(int *)(iVar2 + 8) + -4));
  cVar6 = uVar3 != 0;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_004acb74;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_004acb74:
  if (cVar6 != '\0') {
    FUN_004cf41c((int)(param_1 + 2),param_2);
  }
  *in_FS_OFFSET = local_38;
  return;
}


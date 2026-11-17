// rea decompile_all
// name: FUN_00423c6c
// address: 0x423c6c
// body: available
// range: 0x423c6c-0x423e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00423cac) */

void __cdecl FUN_00423c6c(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int *local_54;
  int local_40;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_004dce64(0x4f1298);
  bVar1 = false;
  local_c = &DAT_00513d64;
  local_40 = 0;
  local_54 = param_1;
  do {
    iVar5 = 0;
    do {
      if (*(int *)(*local_54 + 0x40 + iVar5 * 0x38) != 0) {
        iVar3 = iVar5 * 0x38 + *local_54;
        iVar4 = iVar3 + 0x48;
        uVar2 = FUN_004d40d0(iVar4,0,*(uint *)(*(int *)(iVar3 + 0x50) + -4),(byte *)param_1[10],
                             *(uint *)(param_1[10] + -4));
        if (uVar2 == 0) {
          bVar1 = true;
        }
        else if (*(int *)(local_c + -4) == 0) {
          FUN_004cf384((int)local_14,iVar4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_40 = local_40 + 1;
    local_54 = local_54 + 1;
  } while (local_40 < 4);
  if (!bVar1) {
    FUN_004cf384((int)(param_1 + 8),(int)local_14);
  }
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar5 = *piVar6 + 1;
      }
      if (iVar5 != 0) goto LAB_00423dfd;
    }
    FUN_004cc0bc();
  }
LAB_00423dfd:
  *in_FS_OFFSET = local_38;
  return;
}


// rea decompile_all
// name: FUN_004581a0
// address: 0x4581a0
// body: available
// range: 0x4581a0-0x45830f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_004581a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f8f48);
  local_3c = 1;
  iVar2 = FUN_00466b18(param_1[0xe]);
  iVar3 = FUN_00408b14(iVar2);
LAB_004582df:
  do {
    do {
      iVar7 = iVar3 + -1;
      if (iVar3 < 1) {
        if (local_3c == 0) {
          FUN_00456950((int)param_1);
        }
        *in_FS_OFFSET = local_38;
        return local_3c;
      }
      iVar4 = FUN_00408c68(iVar2,iVar7);
      iVar3 = iVar7;
    } while (iVar4 != 0);
    puVar5 = (uint *)FUN_00408c98(iVar2,iVar7);
    FUN_004cf628((int)local_14,puVar5);
    uVar1 = *(uint *)(local_c + -4);
    pcVar6 = FUN_004dc9f4((uint *)s_is_no_longer_a_valid_TEA_Sympath_004f77b9);
    FUN_004cfad4((int)local_14,uVar1,0,0x4f77b9,(uint)pcVar6,0,(uint)pcVar6);
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    local_3c = 0;
  } while (local_c == 0);
  if (*(int *)(local_c + -0xc) != -1) goto code_r0x00458276;
  goto LAB_004582a3;
code_r0x00458276:
  piVar8 = (int *)(local_c + -0xc);
  if (piVar8 == &DAT_00513d58) {
    iVar7 = 1;
  }
  else if (piVar8 == &DAT_00513d58) {
    iVar7 = 1;
  }
  else {
    *piVar8 = *piVar8 + -1;
    iVar7 = *piVar8 + 1;
  }
  if (iVar7 == 0) {
LAB_004582a3:
    FUN_004cc0bc();
    local_c = 0;
  }
  goto LAB_004582df;
}


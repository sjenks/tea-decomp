// rea decompile_all
// name: FUN_00409208
// address: 0x409208
// body: available
// range: 0x409208-0x409659 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00409208(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_0041f3fc(0x42c3c8);
  if ((*(int *)(*(int *)(param_2 + 8) + -4) == 0) ||
     (bVar1 = FUN_00409000(param_2), CONCAT31(extraout_var,bVar1) == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar5 = FUN_00416ffc(param_1,uVar6,uVar6);
      *(int **)(param_1 + 8) = piVar5 + 3;
      FUN_0041eddc(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar6);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar5 != &DAT_0042fab4) {
        *piVar5 = *piVar5 + 1;
      }
    }
    *in_FS_OFFSET = local_58;
    return param_1;
  }
  local_c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = FUN_00416ffc(local_14,uVar6,uVar6);
    local_c = local_c + 3;
    FUN_0041eddc(local_c,*(undefined4 **)(param_2 + 8),uVar6);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_0042fab4) {
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = local_c[-1];
LAB_004094b5:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)local_c[-1] < uVar6) {
      uVar6 = local_c[-1];
    }
    pcVar3 = FUN_00408894((char *)local_c,';',uVar6);
    iVar4 = DAT_0042fce8;
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)local_c;
    }
    if (iVar4 == DAT_0042fce8) break;
    FUN_0040909c((int)local_24);
    FUN_0041acdc((int)local_14,iVar4 + 1,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_0042fab4) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_004094b5;
      }
      FUN_00414f78();
      local_1c = 0;
    }
  } while( true );
  puVar7 = local_14;
  FUN_0040909c((int)local_34);
  FUN_004088c0(param_1,(int)local_34,(int)puVar7);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar5 = (int *)(local_2c + -0xc);
      if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004095ac;
    }
    FUN_00414f78();
    local_2c = 0;
  }
LAB_004095ac:
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0040963f;
    }
    FUN_00414f78();
  }
LAB_0040963f:
  *in_FS_OFFSET = local_58;
  return param_1;
}


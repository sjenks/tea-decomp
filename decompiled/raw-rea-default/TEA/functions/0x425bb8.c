// rea decompile_all
// name: FUN_00425bb8
// address: 0x425bb8
// body: available
// range: 0x425bb8-0x425ff6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00425bb8(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  uint local_30;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f1838);
  if (param_1 == 0) goto LAB_00425fe7;
  local_30 = 0;
  do {
    iVar3 = *(int *)(param_1 + local_30 * 4);
    if (iVar3 != 0) {
      FUN_004cc264(iVar3 + 0x40,0x38,4,1,FUN_00425984);
      if (*(int *)(iVar3 + 0x38) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x38) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x38) + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_00425cae;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 0x38) = 0;
      }
LAB_00425cae:
      if (*(int *)(iVar3 + 0x28) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x28) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x28) + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_00425d38;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
LAB_00425d38:
      if (*(int *)(iVar3 + 0x18) != 0) {
        if (*(int *)(*(int *)(iVar3 + 0x18) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 0x18) + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_00425dc2;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
LAB_00425dc2:
      if (*(int *)(iVar3 + 8) != 0) {
        if (*(int *)(*(int *)(iVar3 + 8) + -0xc) != -1) {
          piVar1 = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar1 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1 + 1;
          }
          if (iVar2 != 0) goto LAB_00425e5f;
        }
        FUN_004cc0bc();
        *(undefined4 *)(iVar3 + 8) = 0;
      }
LAB_00425e5f:
      FUN_004cc0bc();
    }
    local_30 = local_30 + 1;
  } while (local_30 < 4);
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_00425f1f;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00425f1f:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1 + 1;
      }
      if (iVar3 != 0) goto LAB_00425fd7;
    }
    FUN_004cc0bc();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_00425fd7:
  if ((param_2 & 1) != 0) {
    FUN_004cc0bc();
  }
LAB_00425fe7:
  *in_FS_OFFSET = local_2c;
  return;
}


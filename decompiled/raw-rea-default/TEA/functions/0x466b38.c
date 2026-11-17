// rea decompile_all
// name: FUN_00466b38
// address: 0x466b38
// body: available
// range: 0x466b38-0x466e74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00466b7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00466b38(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fc3a8);
  local_c = (uint *)&DAT_00513d64;
  for (iVar3 = 0; iVar1 = FUN_00408b14(*(int *)(param_1 + 0x140)), iVar3 < iVar1; iVar3 = iVar3 + 1)
  {
    if (local_c[-1] != 0) {
      FUN_00464a94((int)local_24,param_1,0x2e4a);
      FUN_004d573c((int)local_14,(int)local_24);
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar4 = (int *)(local_1c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar1 = *piVar4 + 1;
          }
          if (iVar1 != 0) goto LAB_00466c4a;
        }
        FUN_004cc0bc();
        local_1c = 0;
      }
    }
LAB_00466c4a:
    FUN_00408cbc(local_34,*(int *)(param_1 + 0x140),iVar3);
    FUN_004d573c((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar4 = (int *)(local_2c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar1 = *piVar4 + 1;
        }
        if (iVar1 != 0) goto LAB_00466cf7;
      }
      FUN_004cc0bc();
      local_2c = 0;
    }
LAB_00466cf7:
  }
  FUN_00464a94((int)local_44,param_1,0x116c);
  FUN_004d573c((int)local_14,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar4 = (int *)(local_3c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00466dc1;
    }
    FUN_004cc0bc();
    local_3c = 0;
  }
LAB_00466dc1:
  FUN_004a7780(**(int **)(*(int *)(**(int **)(param_1 + 0x10) + 0x6c) + 0x2b),local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar3 = *puVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00466e64;
    }
    FUN_004cc0bc();
  }
LAB_00466e64:
  *in_FS_OFFSET = local_68;
  return;
}


// rea decompile_all
// name: FUN_0041f8c8
// address: 0x41f8c8
// body: available
// range: 0x41f8c8-0x41fbe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041f93c) */

int __cdecl FUN_0041f8c8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4ef774);
  puVar2 = (uint *)FUN_00408c98(*(int *)(param_2 + 0x14),param_3);
  FUN_004cf628((int)local_14,puVar2);
  local_1c = (uint *)&DAT_00513d64;
  for (iVar7 = 0; iVar4 = FUN_00408b14(*(int *)(param_2 + 0x14)), iVar7 < iVar4; iVar7 = iVar7 + 1)
  {
    if (iVar7 != param_3) {
      if (local_1c[-1] != 0) {
        FUN_004d5c40((int)local_24,local_1c[-1],0,1,0x3b);
      }
      puVar2 = (uint *)FUN_00408c98(*(int *)(param_2 + 0x14),iVar7);
      uVar1 = local_1c[-1];
      pcVar3 = FUN_004dc9f4(puVar2);
      FUN_004cfad4((int)local_24,uVar1,0,(uint)puVar2,(uint)pcVar3,0,(uint)pcVar3);
    }
  }
  puVar5 = FUN_00407734(local_1c);
  FUN_00408884(*(int *)(param_2 + 0x14));
  *(undefined4 **)(param_2 + 0x14) = puVar5;
  (**(code **)(*(int *)(param_2 + 0xc) + 0x68))();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar6 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar6 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar6 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar6 != &DAT_00513d58) {
      *piVar6 = *piVar6 + 1;
    }
  }
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar2 = local_1c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar7 = *puVar2 + 1;
      }
      if (iVar7 != 0) goto LAB_0041fb34;
    }
    FUN_004cc0bc();
    local_1c = (uint *)0x0;
  }
LAB_0041fb34:
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar6 = local_c + -3;
      if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar7 = *piVar6 + 1;
      }
      if (iVar7 != 0) goto LAB_0041fbc7;
    }
    FUN_004cc0bc();
  }
LAB_0041fbc7:
  *in_FS_OFFSET = local_48;
  return param_1;
}


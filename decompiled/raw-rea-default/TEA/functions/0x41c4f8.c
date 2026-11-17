// rea decompile_all
// name: FUN_0041c4f8
// address: 0x41c4f8
// body: available
// range: 0x41c4f8-0x41c73e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_0041c4f8(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int *in_FS_OFFSET;
  byte bVar12;
  int local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  uint *puVar11;
  
  bVar12 = 0;
  FUN_004dce64(0x4eee74);
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  do {
    iVar8 = iVar1 + -1;
    if (iVar1 < 1) goto LAB_0041c55b;
    pcVar2 = (char *)(**(code **)(*(int *)(param_1 + 0xc) + 0x48))();
    iVar3 = FUN_004dcbf8(pcVar2,(char *)param_2);
    iVar1 = iVar8;
  } while (iVar3 != 0);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_48;
    return local_48;
  }
LAB_0041c55b:
  if (iVar8 < 1) {
    if (iVar8 < 0) {
      FUN_004dc9f4(param_2);
      puVar4 = (undefined4 *)FUN_004cc180();
      uVar5 = 0xffffffff;
      puVar11 = param_2;
      do {
        puVar10 = puVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        puVar10 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        uVar6 = *puVar11;
        puVar11 = puVar10;
      } while ((char)uVar6 != '\0');
      uVar5 = ~uVar5;
      puVar9 = (undefined4 *)((int)puVar10 - uVar5);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar9;
        puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar12 * -2 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar12 * -2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar12 * -2 + 1);
      }
    }
  }
  else {
    iVar8 = (**(code **)(*(int *)(param_1 + 0xc) + 0x68))();
  }
  FUN_004cf628((int)local_24,param_2);
  FUN_0041ca1c((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar1 = *piVar7 + 1;
      }
      if (iVar1 != 0) goto LAB_0041c662;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_0041c662:
  if (param_3 == 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x60))();
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x4c))();
  }
  else {
    if (iVar8 != 0) {
      (**(code **)(*(int *)(param_1 + 0xc) + 100))();
      (**(code **)(*(int *)(param_1 + 0xc) + 0x4c))();
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar7 = (int *)(local_c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar1 = *piVar7 + 1;
      }
      if (iVar1 != 0) goto LAB_0041c72e;
    }
    FUN_004cc0bc();
    iVar1 = 0;
  }
LAB_0041c72e:
  *in_FS_OFFSET = local_48;
  return iVar1;
}


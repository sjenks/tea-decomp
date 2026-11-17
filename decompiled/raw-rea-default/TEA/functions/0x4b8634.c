// rea decompile_all
// name: FUN_004b8634
// address: 0x4b8634
// body: available
// range: 0x4b8634-0x4b8a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004b8634(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *in_FS_OFFSET;
  char cVar7;
  undefined4 local_158;
  undefined1 local_134 [8];
  byte *local_12c;
  undefined1 local_124 [8];
  byte *local_11c;
  int local_114;
  int local_110;
  undefined4 local_94 [2];
  undefined4 local_8c [34];
  
  FUN_004dce64(0x50e834);
  if (param_1[0x18] == 0) {
    *(undefined1 *)param_1[0x10] = 0;
  }
  else {
    FUN_004dc9c4((char *)param_1[0x10],(char *)param_1[0x18]);
  }
  piVar2 = FUN_004c2e14(&local_114,0,*param_1,(int)(param_1 + 0xe),0,0,0);
  iVar3 = (**(code **)(piVar2[3] + 0x14))();
  cVar7 = iVar3 == 1;
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x5c;
  *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + -0x5c;
  FUN_0048c668(&local_114,0);
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x5c;
  *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + 0x5c;
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x96;
  FUN_004a52c0(local_8c,0);
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x96;
  FUN_00489c54(local_94,0);
  if (cVar7 == '\0') goto LAB_004b8a27;
  cVar7 = (**(code **)(param_1[3] + 0x74))();
  if (cVar7 != '\0') {
    uVar4 = FUN_004b7c98(param_1,(uint *)param_1[0x10]);
    *in_FS_OFFSET = local_158;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  FUN_004c0e0c((int)local_134,*(int *)(*param_1 + 0x70),0x7f28);
  local_11c = (byte *)0x0;
  if (*(int *)(local_12c + -0xc) == -1 || *(int *)(local_12c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_12c + -4);
    piVar2 = FUN_004cf7b0(local_124,uVar1,uVar1);
    local_11c = (byte *)(piVar2 + 3);
    FUN_004dc7d4((undefined4 *)local_11c,(undefined4 *)local_12c,uVar1);
  }
  else {
    local_11c = local_12c;
    pbVar6 = local_12c + -0xc;
    if (pbVar6 != (byte *)&DAT_00513d58) {
      *(int *)pbVar6 = *(int *)pbVar6 + 1;
    }
  }
  if (local_12c != (byte *)0x0) {
    if (*(int *)(local_12c + -0xc) != -1) {
      pbVar6 = local_12c + -0xc;
      if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar3 = *(int *)pbVar6 + 1;
      }
      if (iVar3 != 0) goto LAB_004b8937;
    }
    FUN_004cc0bc();
    local_12c = (byte *)0x0;
  }
LAB_004b8937:
  puVar5 = (undefined1 *)FUN_004cc180();
  FUN_004e0344(puVar5,local_11c);
  (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_004cc0cc();
  if (local_11c != (byte *)0x0) {
    if (*(int *)(local_11c + -0xc) != -1) {
      pbVar6 = local_11c + -0xc;
      if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else if (pbVar6 == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        iVar3 = *(int *)pbVar6 + 1;
      }
      if (iVar3 != 0) goto LAB_004b8a27;
    }
    FUN_004cc0bc();
  }
LAB_004b8a27:
  *in_FS_OFFSET = local_158;
  return 0;
}


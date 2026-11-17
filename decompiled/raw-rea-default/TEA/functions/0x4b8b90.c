// rea decompile_all
// name: FUN_004b8b90
// address: 0x4b8b90
// body: available
// range: 0x4b8b90-0x4b905f inclusive
// range: 0x4b9066-0x4b9078 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_004b8b90(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  byte *local_c;
  
  FUN_004dce64(0x50e918);
  iVar1 = FUN_004a76a8(*param_1,0xb8,0,0);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_68;
    return 1;
  }
  FUN_004c0e0c((int)local_34,*(int *)(*param_1 + 0x70),0x7f29);
  local_c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar4 = *(uint *)(local_2c + -4);
    piVar2 = FUN_004cf7b0(local_14,uVar4,uVar4);
    local_c = (byte *)(piVar2 + 3);
    FUN_004dc7d4((undefined4 *)local_c,(undefined4 *)local_2c,uVar4);
  }
  else {
    local_c = local_2c;
    pbVar5 = local_2c + -0xc;
    if (pbVar5 != (byte *)&DAT_00513d58) {
      *(int *)pbVar5 = *(int *)pbVar5 + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      pbVar5 = local_2c + -0xc;
      if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_004b8d21;
    }
    FUN_004cc0bc();
    local_2c = (byte *)0x0;
  }
LAB_004b8d21:
  FUN_004c0e0c((int)local_44,*(int *)(*param_1 + 0x70),0x7f26);
  local_1c = (int *)0x0;
  if (local_3c[-3] == -1 || local_3c[-3] + 1 < 0) {
    uVar4 = local_3c[-1];
    local_1c = FUN_004cf7b0(local_24,uVar4,uVar4);
    local_1c = local_1c + 3;
    FUN_004dc7d4(local_1c,local_3c,uVar4);
  }
  else {
    local_1c = local_3c;
    piVar2 = local_3c + -3;
    if (piVar2 != &DAT_00513d58) {
      *piVar2 = *piVar2 + 1;
    }
  }
  if (local_3c != (int *)0x0) {
    if (local_3c[-3] != -1) {
      piVar2 = local_3c + -3;
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004b8eaa;
    }
    FUN_004cc0bc();
    local_3c = (int *)0x0;
  }
LAB_004b8eaa:
  puVar3 = (undefined1 *)FUN_004cc180();
  FUN_004e0344(puVar3,local_c);
  iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
  FUN_004cc0cc();
  if (iVar1 == 6) {
    uVar4 = (**(code **)(param_1[3] + 0x6c))();
  }
  else {
    uVar4 = (uint)(iVar1 != 2);
  }
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar2 = local_1c + -3;
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004b8fc1;
    }
    FUN_004cc0bc();
    local_1c = (int *)0x0;
  }
LAB_004b8fc1:
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      pbVar5 = local_c + -0xc;
      if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar5 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar5 = *(int *)pbVar5 + -1;
        iVar1 = *(int *)pbVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_004b9053;
    }
    FUN_004cc0bc();
  }
LAB_004b9053:
  *in_FS_OFFSET = local_68;
  return uVar4;
}


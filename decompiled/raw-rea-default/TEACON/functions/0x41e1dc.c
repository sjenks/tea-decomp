// rea decompile_all
// name: FUN_0041e1dc
// address: 0x41e1dc
// body: available
// range: 0x41e1dc-0x41e548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_0041e1dc(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_1b4 [240];
  undefined4 *local_c4;
  undefined4 *local_c0;
  uint local_bc;
  int local_b8;
  int *local_b4;
  int *local_b0;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  int *local_6c;
  undefined4 local_68;
  uint *local_5c;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_0041f3fc(0x431798);
  if (*(char *)(*param_2 + 0x30) == '\0') {
    local_40 = 8;
    FUN_00416e74(param_1,(uint *)&DAT_00431539);
    *in_FS_OFFSET = local_50;
    return param_1;
  }
  iVar4 = *param_2;
  if ((*(int *)(*(int *)(iVar4 + 0x28) + -4) != 0) ||
     (uVar3 = FUN_0041e908(iVar4 + 0x20,(int *)(iVar4 + 8)), (char)uVar3 != '\0'))
  goto LAB_0041e426;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 1;
  puVar6 = &LAB_0041e07c;
  uVar3 = 0;
  local_40 = 0x20;
  local_5c = (uint *)FUN_0041ea4c(local_1b4,PTR_s_Error_constructing_locale_name__00431398);
  FUN_00416e74((int)local_2c,local_5c);
  local_34 = local_34 + 2;
  local_1c[0] = &PTR_FUN_004318d0;
  local_68 = 0;
  local_c = (int *)0x0;
  local_40 = 0x2c;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_7c = FUN_00416ffc(local_14,uVar1,uVar1);
    local_80 = local_14;
    local_8c = local_7c + 3;
    local_88 = local_24;
    local_84 = uVar1;
    local_78 = local_8c;
    local_c = local_8c;
    FUN_0041eddc(local_8c,local_24,uVar1);
  }
  else {
    local_70 = local_14;
    local_6c = local_24;
    local_c = local_24;
    local_74 = local_24 + -3;
    if (local_74 != &DAT_0042fab4) {
      *local_74 = *local_74 + 1;
    }
  }
  local_40 = 0x20;
  local_34 = local_34 + 1;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
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
      if (iVar4 != 0) goto LAB_0041e40f;
    }
    local_90 = local_24 + -3;
    local_94 = local_24 + -3;
    FUN_00414f78();
    local_98 = 0;
    local_9c = local_2c;
    local_24 = (int *)0x0;
  }
LAB_0041e40f:
  local_40 = 0x14;
  FUN_004280a0((uint *)&DAT_0041e018,local_1c,uVar3,puVar6,uVar7,uVar8,uVar9,uVar10);
LAB_0041e426:
  local_40 = 0x50;
  iVar4 = *param_2;
  local_a0 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x28) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    uVar7 = *(uint *)(*(int *)(iVar4 + 0x28) + -4);
    local_b4 = FUN_00416ffc(param_1,uVar7,uVar7);
    local_b0 = local_b4 + 3;
    *(int **)(param_1 + 8) = local_b0;
    local_b8 = param_1;
    local_c0 = *(undefined4 **)(iVar4 + 0x28);
    local_c4 = *(undefined4 **)(param_1 + 8);
    local_bc = uVar7;
    FUN_0041eddc(local_c4,local_c0,uVar7);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar4 + 0x28);
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_0042fab4) {
      *piVar5 = *piVar5 + 1;
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}


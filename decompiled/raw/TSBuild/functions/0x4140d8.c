// name: FUN_004140d8
// address: 0x4140d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004140d8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_190 [240];
  undefined4 *local_a0;
  undefined1 *local_94;
  undefined4 local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  uint local_7c;
  undefined1 *local_78;
  int *local_74;
  int *local_70;
  undefined1 *local_6c;
  int *local_68;
  undefined4 local_64;
  uint *local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  undefined **local_30;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00467ba8(0x476930);
  if (param_2 < 0x10000000) goto LAB_004142cd;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  puVar5 = &LAB_00402064;
  uVar4 = 0;
  local_44 = 0x14;
  local_58 = (uint *)FUN_004670cc(local_190,PTR_s_invalid_string_size_parameter_in_00488a54);
  FUN_00459d78((int)local_2c,local_58);
  local_38 = local_38 + 2;
  local_1c[0] = &PTR_FUN_00474e2c;
  local_64 = 0;
  local_c = (int *)0x0;
  local_44 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_74 = FUN_00459f00(local_14,uVar1,uVar1);
    local_78 = local_14;
    local_84 = local_74 + 3;
    local_80 = local_24;
    local_7c = uVar1;
    local_70 = local_84;
    local_c = local_84;
    FUN_00467580(local_84,local_24,uVar1);
  }
  else {
    local_6c = local_14;
    local_68 = local_24;
    local_c = local_24;
    piVar3 = local_24 + -3;
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  local_44 = 0x14;
  local_1c[0] = &PTR_FUN_00474e40;
  local_38 = local_38 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004142b6;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    FUN_0045680c();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_004142b6:
  local_44 = 8;
  FUN_00471ae8((uint *)&DAT_00402008,local_1c,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
LAB_004142cd:
  iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if ((uint)(iVar2 >> 4) < param_2) {
    local_a0 = (undefined4 *)FUN_00456840();
    if (local_a0 == (undefined4 *)0x0) {
      local_44 = 0x44;
      local_30 = &PTR_FUN_00476b30;
      local_38 = local_38 + 2;
      FUN_00471ae8((uint *)&DAT_0040eb28,&local_30,0,&LAB_0040eb80,1,0,0,0);
    }
    local_44 = 0x50;
    FUN_00414410(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),local_a0);
    local_44 = 0;
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    FUN_00414a7c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_0045680c();
    *(undefined4 **)(param_1 + 8) = local_a0 + (iVar2 >> 4) * 4;
    *(undefined4 **)(param_1 + 4) = local_a0;
    *(undefined4 **)(param_1 + 0x18) = local_a0 + param_2 * 4;
  }
  *in_FS_OFFSET = local_54;
  return;
}


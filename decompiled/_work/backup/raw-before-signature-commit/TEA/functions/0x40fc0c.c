// name: FUN_0040fc0c
// address: 0x40fc0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040fc0c(int param_1,uint param_2)

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
  
  FUN_004dce64(0x4ec808);
  if (param_2 < 0x40000000) goto LAB_0040fe01;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 1;
  puVar5 = &LAB_00408370;
  uVar4 = 0;
  local_44 = 0x14;
  local_58 = (uint *)FUN_004dc320(local_190,PTR_s_invalid_string_size_parameter_in_00516d20);
  FUN_004cf628((int)local_2c,local_58);
  local_38 = local_38 + 2;
  local_1c[0] = &PTR_FUN_004ecaac;
  local_64 = 0;
  local_c = (int *)0x0;
  local_44 = 0x20;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_74 = FUN_004cf7b0(local_14,uVar1,uVar1);
    local_78 = local_14;
    local_84 = local_74 + 3;
    local_80 = local_24;
    local_7c = uVar1;
    local_70 = local_84;
    local_c = local_84;
    FUN_004dc7d4(local_84,local_24,uVar1);
  }
  else {
    local_6c = local_14;
    local_68 = local_24;
    local_c = local_24;
    piVar3 = local_24 + -3;
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  local_44 = 0x14;
  local_1c[0] = &PTR_FUN_004ecac0;
  local_38 = local_38 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0040fdea;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    FUN_004cc0bc();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_0040fdea:
  local_44 = 8;
  FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
LAB_0040fe01:
  iVar2 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 4);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  if ((uint)(iVar2 >> 2) < param_2) {
    local_a0 = (undefined4 *)FUN_004cc0f0();
    if (local_a0 == (undefined4 *)0x0) {
      local_44 = 0x44;
      local_30 = &PTR_FUN_004eac74;
      local_38 = local_38 + 2;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_30,0,&LAB_00404134,1,0,0,0);
    }
    local_44 = 0x50;
    FUN_004094e4(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),local_a0);
    local_44 = 0;
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    FUN_0040957c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    *(undefined4 **)(param_1 + 8) = local_a0 + (iVar2 >> 2);
    *(undefined4 **)(param_1 + 4) = local_a0;
    *(undefined4 **)(param_1 + 0x18) = local_a0 + param_2;
  }
  *in_FS_OFFSET = local_54;
  return;
}


// name: FUN_00481c1c
// address: 0x481c1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00481c74) */

undefined4 * __cdecl FUN_00481c1c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_194 [248];
  undefined4 local_9c;
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
  int *local_6c;
  undefined1 *local_68;
  int *local_64;
  undefined4 local_60;
  uint *local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  bVar5 = 0;
  FUN_004dce64(0x502ea8);
  local_40 = 8;
  puVar4 = param_1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x12] = &DAT_00513d64;
  local_9c = param_1[0x12];
  local_34 = local_34 + 1;
  param_1[0x14] = 3;
  param_1[0x15] = 0;
  if (0xff < DAT_005140ac - 0xeU) goto LAB_00481e8d;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar7 = &LAB_00408370;
  uVar6 = 0;
  local_40 = 0x38;
  local_54 = (uint *)FUN_004dc320(local_194,PTR_s_invalid_string_size_parameter_in_00516d20);
  FUN_004cf628((int)local_2c,local_54);
  local_34 = local_34 + 2;
  local_1c[0] = &PTR_FUN_004ecaac;
  local_60 = 0;
  local_c = (int *)0x0;
  local_40 = 0x44;
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
    local_68 = local_14;
    local_64 = local_24;
    local_c = local_24;
    local_6c = local_24 + -3;
    if (local_6c != &DAT_00513d58) {
      *local_6c = *local_6c + 1;
    }
  }
  local_40 = 0x38;
  local_1c[0] = &PTR_FUN_004ecac0;
  local_34 = local_34 + 2;
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
      if (iVar2 != 0) goto LAB_00481e76;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    FUN_004cc0bc();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00481e76:
  local_40 = 0x2c;
  FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
LAB_00481e8d:
  if (*(uint *)(param_1[0x12] + -8) < 0x100) {
    FUN_004d6d58((int)(param_1 + 0x10),0x100);
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}


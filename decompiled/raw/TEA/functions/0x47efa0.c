// name: FUN_0047efa0
// address: 0x47efa0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047efa0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_190 [240];
  undefined1 *local_a0;
  undefined4 local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  uint local_74;
  int *local_70;
  undefined1 *local_6c;
  int *local_68;
  undefined4 local_64;
  uint *local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x5028bc);
  if ((param_2 < 0) || (0xffff < param_2)) {
    *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
    goto LAB_0047f2c5;
  }
  *(int *)(param_1 + 0x214) = param_2;
  iVar1 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 <= param_2) {
    FUN_0040db1c(param_1 + 0x1b0,param_2 + 1);
    FUN_0040db1c(param_1 + 0x1d0,param_2 + 1);
    FUN_0047f2d8(param_1 + 0x1f0,param_2 + 1);
    local_54 = param_2 * 0x10 + *(int *)(param_1 + 0x1d4);
    if (DAT_005140ac - 0xeU < 0x20) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 1;
      puVar3 = &LAB_00408370;
      uVar2 = 0;
      local_40 = 0x14;
      local_58 = (uint *)FUN_004dc320(local_190,PTR_s_invalid_string_size_parameter_in_00516d20);
      FUN_004cf628((int)local_2c,local_58);
      local_34 = local_34 + 2;
      local_1c[0] = &PTR_FUN_004ecaac;
      local_64 = 0;
      local_c = (int *)0x0;
      local_40 = 0x20;
      if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
        local_74 = local_24[-1];
        local_7c = FUN_004cf7b0(local_14,local_74,local_74);
        local_80 = local_14;
        local_8c = local_7c + 3;
        local_84 = local_74;
        local_88 = local_24;
        local_78 = local_8c;
        local_c = local_8c;
        FUN_004dc7d4(local_8c,local_24,local_74);
      }
      else {
        local_6c = local_14;
        local_68 = local_24;
        local_c = local_24;
        local_70 = local_24 + -3;
        if (local_70 != &DAT_00513d58) {
          *local_70 = *local_70 + 1;
        }
      }
      local_40 = 0x14;
      local_1c[0] = &PTR_FUN_004ecac0;
      local_34 = local_34 + 2;
      if (local_24 != (int *)0x0) {
        if (local_24[-3] != -1) {
          local_90 = local_24 + -3;
          if (local_90 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (local_90 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *local_90 = *local_90 + -1;
            iVar1 = *local_90 + 1;
          }
          if (iVar1 != 0) goto LAB_0047f250;
        }
        local_94 = local_24 + -3;
        local_98 = local_24 + -3;
        FUN_004cc0bc();
        local_9c = 0;
        local_a0 = local_2c;
        local_24 = (int *)0x0;
      }
LAB_0047f250:
      local_40 = 8;
      FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
    }
    if (*(uint *)(*(int *)(local_54 + 8) + -8) < 0x20) {
      FUN_004d6d58(local_54,0x20);
    }
  }
  iVar1 = param_2 * 0x10 + *(int *)(param_1 + 0x1b4);
  FUN_004cfad4(iVar1,0,*(uint *)(*(int *)(iVar1 + 8) + -4),param_3,param_4 - param_3,0,
               param_4 - param_3);
  *(undefined1 *)(*(int *)(param_1 + 500) + param_2) = 0;
LAB_0047f2c5:
  *in_FS_OFFSET = local_50;
  return;
}


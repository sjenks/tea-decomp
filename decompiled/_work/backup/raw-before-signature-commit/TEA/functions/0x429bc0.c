// name: FUN_00429bc0
// address: 0x429bc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429bc0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  
  FUN_004dce64(0x4f259c);
  if (param_2 < 0x15555556) goto LAB_00429db5;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar7 = &LAB_00408370;
  uVar6 = 0;
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
    piVar5 = local_24 + -3;
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_44 = 0x14;
  local_1c[0] = &PTR_FUN_004ecac0;
  local_38 = local_38 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar5 = local_24 + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00429d9e;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    FUN_004cc0bc();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00429d9e:
  local_44 = 8;
  FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
LAB_00429db5:
  if ((uint)((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 4)) / 0xc) < param_2) {
    local_a0 = (undefined4 *)FUN_004cc0f0();
    if (local_a0 == (undefined4 *)0x0) {
      local_44 = 0x44;
      local_30 = &PTR_FUN_004eac74;
      local_38 = local_38 + 2;
      FUN_004e7cc4((uint *)&DAT_004040dc,&local_30,0,&LAB_00404134,1,0,0,0);
    }
    local_44 = 0x50;
    FUN_00429f04(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),local_a0);
    local_44 = 0;
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar3 = *(undefined4 **)(param_1 + 4);
    FUN_00429fb8(param_1,puVar3,puVar2);
    FUN_004cc0bc();
    *(undefined4 **)(param_1 + 8) = local_a0 + (((int)puVar2 - (int)puVar3) / 0xc) * 3;
    *(undefined4 **)(param_1 + 4) = local_a0;
    *(undefined4 **)(param_1 + 0x18) = local_a0 + param_2 * 3;
  }
  *in_FS_OFFSET = local_54;
  return;
}


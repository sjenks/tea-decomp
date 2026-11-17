// name: FUN_0044e7b8
// address: 0x44e7b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044e7b8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_388 [240];
  undefined1 local_298 [240];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [16];
  undefined4 local_6c [6];
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00455f04(0x472364);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_0044ea38(param_1);
  uVar2 = FUN_0044ea44(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004086e0;
      uVar6 = 0;
      local_90 = 0x14;
      FUN_0044cc2c(local_a8);
      puVar3 = FUN_00455640(local_1a8,PTR_s_iostream_object_has_failbit_set_00473194);
      puVar4 = (uint *)FUN_0044d088(puVar3);
      iVar5 = FUN_0044d11c((int)local_2c,puVar4);
      local_84 = local_84 + 1;
      FUN_0045336c(local_1c,iVar5);
      local_84 = local_84 + 2;
      FUN_004052c4((int)local_2c,2);
      local_90 = 8;
      FUN_0045ed74((uint *)&DAT_00408678,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004086e0;
      uVar6 = 0;
      local_90 = 0x2c;
      FUN_0044cc2c(local_b0);
      puVar3 = FUN_00455640(local_298,PTR_s_iostream_object_has_badbit_set_00473198);
      puVar4 = (uint *)FUN_0044d088(puVar3);
      iVar5 = FUN_0044d11c((int)local_54,puVar4);
      local_84 = local_84 + 1;
      FUN_0045336c(local_44,iVar5);
      local_84 = local_84 + 2;
      FUN_004052c4((int)local_54,2);
      local_90 = 0x20;
      FUN_0045ed74((uint *)&DAT_00408678,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_0044ea38(param_1);
    uVar2 = FUN_0044ea44(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004086e0;
      uVar6 = 0;
      local_90 = 0x44;
      FUN_0044cc2c(local_b8);
      puVar3 = FUN_00455640(local_388,PTR_s_iostream_object_has_eofbit_set_0047319c);
      puVar4 = (uint *)FUN_0044d088(puVar3);
      iVar5 = FUN_0044d11c((int)local_7c,puVar4);
      local_84 = local_84 + 1;
      FUN_0045336c(local_6c,iVar5);
      local_84 = local_84 + 2;
      FUN_004052c4((int)local_7c,2);
      local_90 = 0x38;
      FUN_0045ed74((uint *)&DAT_00408678,local_6c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
  }
  *in_FS_OFFSET = local_a0;
  return;
}


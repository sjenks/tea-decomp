// name: FUN_004183f0
// address: 0x4183f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004183f0(int param_1,uint param_2)

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
  
  FUN_0041f3fc(0x42fff4);
  if (*(int *)(param_1 + 0x24) == 0) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  uVar1 = FUN_00418730(param_1);
  uVar2 = FUN_0041873c(param_1);
  if ((uVar1 & uVar2) != 0) {
    uVar1 = FUN_00418730(param_1);
    uVar2 = FUN_0041873c(param_1);
    if ((uVar1 & uVar2 & 4) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004186d8;
      uVar6 = 0;
      local_90 = 0x14;
      FUN_004168f8(local_a8);
      puVar3 = FUN_0041ea4c(local_1a8,PTR_s_iostream_object_has_failbit_set_00430ba8);
      puVar4 = (uint *)FUN_00416de0(puVar3);
      iVar5 = FUN_00416e74((int)local_2c,puVar4);
      local_84 = local_84 + 1;
      FUN_0041c778(local_1c,iVar5);
      local_84 = local_84 + 2;
      FUN_00404fb4((int)local_2c,2);
      local_90 = 8;
      FUN_004280a0((uint *)&DAT_00418670,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_00418730(param_1);
    uVar2 = FUN_0041873c(param_1);
    if ((uVar1 & uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004186d8;
      uVar6 = 0;
      local_90 = 0x2c;
      FUN_004168f8(local_b0);
      puVar3 = FUN_0041ea4c(local_298,PTR_s_iostream_object_has_badbit_set_00430bac);
      puVar4 = (uint *)FUN_00416de0(puVar3);
      iVar5 = FUN_00416e74((int)local_54,puVar4);
      local_84 = local_84 + 1;
      FUN_0041c778(local_44,iVar5);
      local_84 = local_84 + 2;
      FUN_00404fb4((int)local_54,2);
      local_90 = 0x20;
      FUN_004280a0((uint *)&DAT_00418670,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
    uVar1 = FUN_00418730(param_1);
    uVar2 = FUN_0041873c(param_1);
    if ((uVar1 & uVar2 & 2) != 0) {
      *(uint *)(param_1 + 0x30) = param_2;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar1 = 1;
      puVar7 = &LAB_004186d8;
      uVar6 = 0;
      local_90 = 0x44;
      FUN_004168f8(local_b8);
      puVar3 = FUN_0041ea4c(local_388,PTR_s_iostream_object_has_eofbit_set_00430bb0);
      puVar4 = (uint *)FUN_00416de0(puVar3);
      iVar5 = FUN_00416e74((int)local_7c,puVar4);
      local_84 = local_84 + 1;
      FUN_0041c778(local_6c,iVar5);
      local_84 = local_84 + 2;
      FUN_00404fb4((int)local_7c,2);
      local_90 = 0x38;
      FUN_004280a0((uint *)&DAT_00418670,local_6c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
    }
  }
  *in_FS_OFFSET = local_a0;
  return;
}


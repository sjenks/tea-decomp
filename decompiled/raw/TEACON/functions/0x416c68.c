// name: FUN_00416c68
// address: 0x416c68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00416c68(int param_1,uint *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_160 [16];
  undefined1 local_150 [240];
  int local_60;
  undefined1 local_5a;
  char local_59;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_0041f3fc(0x42fb58);
  if (param_2 == (uint *)0x0) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    pcVar10 = FUN_004133f0;
    uVar9 = 0;
    local_40 = 0x14;
    FUN_004168f8(local_58);
    puVar2 = FUN_0041ea4c(local_150,PTR_s_unexpected_NULL_pointer_in_funct_00431a88);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    FUN_00416e74((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_00416de8(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_00404fb4((int)local_2c,2);
    local_40 = 8;
    FUN_004280a0((uint *)&DAT_004079c4,local_1c,uVar9,pcVar10,uVar11,uVar12,uVar13,uVar14);
  }
  uVar9 = FUN_004172e8();
  local_59 = (char)uVar9;
  bVar1 = FUN_00416e3c((char *)param_2,&local_59);
  if (bVar1) {
    piVar4 = (int *)FUN_00416740(param_1);
    iVar5 = FUN_00416754(piVar4);
    if (iVar5 == 1) {
      iVar5 = FUN_00416740(param_1);
      *(undefined4 *)(iVar5 + 8) = 0;
      uVar9 = FUN_004172e8();
      local_5a = (undefined1)uVar9;
      puVar2 = &local_5a;
      puVar6 = (undefined1 *)FUN_00416734(param_1);
      FUN_00416e54(puVar6,puVar2);
    }
    else {
      FUN_0041669c(param_1);
      piVar4 = FUN_00416784();
      FUN_00416c40(piVar4);
      puVar7 = FUN_00416784();
      local_60 = FUN_004172ec((int)puVar7);
      FUN_004168a0((int)local_160,param_1,&local_60);
    }
    *in_FS_OFFSET = local_50;
  }
  else {
    uVar11 = FUN_00416e64(param_2);
    uVar8 = FUN_0041687c(param_1);
    param_1 = FUN_004172f8(param_1,0,uVar8,(uint)param_2,uVar11);
    *in_FS_OFFSET = local_50;
  }
  return param_1;
}


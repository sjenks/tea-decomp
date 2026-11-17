// name: FUN_0041b368
// address: 0x41b368
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041b368(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_150 [240];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_0041f3fc(0x430638);
  uVar1 = FUN_0041687c(param_2);
  if (uVar1 < param_3) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004060a8;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004168f8(local_58);
    FUN_0041687c(param_2);
    puVar2 = FUN_0041ea4c(local_150,PTR_s_position_beyond_end_of_string_in_00431a7c);
    puVar3 = (uint *)FUN_00416de0(puVar2);
    FUN_00416e74((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_00417718(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00404fb4((int)local_2c,2);
    local_40 = 8;
    FUN_004280a0((uint *)&DAT_0040604c,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  iVar4 = FUN_0041687c(param_2);
  if (iVar4 - param_3 <= param_4) {
    param_4 = iVar4 - param_3;
  }
  local_40 = 0x20;
  FUN_004168f8(local_60);
  iVar4 = FUN_00416734(param_2);
  FUN_00418dec(param_1,(undefined4 *)(iVar4 + param_3),param_4);
  *in_FS_OFFSET = local_50;
  return param_1;
}


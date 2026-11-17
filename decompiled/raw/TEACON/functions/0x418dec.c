// name: FUN_00418dec
// address: 0x418dec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00418dec(int param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_27c [16];
  undefined1 local_26c [240];
  undefined1 local_17c [240];
  int local_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_0041f3fc(0x4301a0);
  local_68 = 8;
  FUN_00416fc4(param_1,0);
  if (param_2 == (undefined4 *)0x0) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    pcVar6 = FUN_004133f0;
    uVar5 = 0;
    local_68 = 0x2c;
    FUN_004168f8(local_80);
    puVar1 = FUN_0041ea4c(local_17c,PTR_s_unexpected_NULL_pointer_in_funct_00431a88);
    puVar2 = (uint *)FUN_00416de0(puVar1);
    FUN_00416e74((int)local_2c,puVar2);
    local_5c = local_5c + 1;
    FUN_00416de8(local_1c,(int)local_2c);
    local_5c = local_5c + 2;
    FUN_00404fb4((int)local_2c,2);
    local_68 = 0x20;
    FUN_004280a0((uint *)&DAT_004079c4,local_1c,uVar5,pcVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if (param_3 == DAT_0042fce8) {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00405f50;
    uVar5 = 0;
    local_68 = 0x44;
    FUN_004168f8(local_88);
    puVar1 = FUN_0041ea4c(local_26c,PTR_s_invalid_string_size_parameter_in_00431a78);
    puVar2 = (uint *)FUN_00416de0(puVar1);
    FUN_00416e74((int)local_54,puVar2);
    local_5c = local_5c + 1;
    FUN_00417760(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_00404fb4((int)local_54,2);
    local_68 = 0x38;
    FUN_004280a0((uint *)&DAT_00405ef4,local_44,uVar5,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  piVar3 = FUN_00416ffc(param_1,param_3,param_3);
  local_8c = FUN_004172ec((int)piVar3);
  FUN_004168a0((int)local_27c,param_1,&local_8c);
  puVar4 = (undefined4 *)FUN_00416734(param_1);
  FUN_00416fa4(puVar4,param_2,param_3);
  *in_FS_OFFSET = local_78;
  return param_1;
}


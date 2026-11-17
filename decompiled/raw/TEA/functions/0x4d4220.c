// name: FUN_004d4220
// address: 0x4d4220
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004d4220(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x514bc0);
  uVar1 = FUN_004cea6c(param_1);
  if (uVar1 < param_3 + param_2) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 1;
    puVar6 = &LAB_004084c8;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_004ceae8(local_58);
    FUN_004cea6c(param_1);
    puVar2 = FUN_004dc320(local_148,PTR_s_position_beyond_end_of_string_in_00516d24);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_004cfecc(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00402880((int)local_2c,2);
    local_40 = 8;
    FUN_004e7cc4((uint *)&DAT_0040846c,local_1c,uVar5,puVar6,uVar1,uVar7,uVar8,uVar9);
  }
  uVar1 = FUN_004cea6c(param_4);
  pbVar4 = (byte *)FUN_004cf40c(param_4);
  uVar1 = FUN_004d40d0(param_1,param_2,param_3,pbVar4,uVar1);
  *in_FS_OFFSET = local_50;
  return uVar1;
}


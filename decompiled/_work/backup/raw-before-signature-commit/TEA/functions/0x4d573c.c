// name: FUN_004d573c
// address: 0x4d573c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d573c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 local_148 [240];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x515078);
  iVar1 = FUN_004cea6c(param_2);
  uVar6 = DAT_005140ac - iVar1;
  uVar2 = FUN_004cea6c(param_1);
  if (uVar6 <= uVar2) {
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar2 = 1;
    puVar8 = &LAB_00408370;
    uVar7 = 0;
    local_40 = 0x14;
    FUN_004ceae8(local_58);
    FUN_004cea6c(param_2);
    FUN_004cea6c(param_1);
    puVar3 = FUN_004dc320(local_148,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar4 = (uint *)FUN_004cf594(puVar3);
    FUN_004cf628((int)local_2c,puVar4);
    local_34 = local_34 + 1;
    FUN_004cff14(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_00402880((int)local_2c,2);
    local_40 = 8;
    FUN_004e7cc4((uint *)&DAT_00408314,local_1c,uVar7,puVar8,uVar2,uVar9,uVar10,uVar12);
  }
  uVar2 = FUN_004cea6c(param_2);
  uVar6 = FUN_004cffa0(param_2);
  uVar11 = 0;
  uVar5 = FUN_004cea6c(param_1);
  FUN_004cfaac(param_1,uVar5,uVar11,uVar6,uVar2);
  *in_FS_OFFSET = local_50;
  return param_1;
}


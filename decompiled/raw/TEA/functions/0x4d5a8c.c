// name: FUN_004d5a8c
// address: 0x4d5a8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d5a8c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_268 [240];
  undefined1 local_178 [240];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_004dce64(0x515180);
  uVar1 = FUN_004cea6c(param_1);
  if (uVar1 < param_2) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_004084c8;
    uVar6 = 0;
    local_68 = 0x14;
    FUN_004ceae8(local_80);
    FUN_004cea6c(param_1);
    puVar2 = FUN_004dc320(local_178,PTR_s_string_index_out_of_range_in_fun_00516d2c);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_004cfecc(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_00402880((int)local_2c,2);
    local_68 = 8;
    FUN_004e7cc4((uint *)&DAT_0040846c,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  iVar4 = FUN_004cea6c(param_3);
  uVar5 = DAT_005140ac - iVar4;
  uVar1 = FUN_004cea6c(param_1);
  if (uVar5 <= uVar1) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_00408370;
    uVar6 = 0;
    local_68 = 0x2c;
    FUN_004ceae8(local_88);
    FUN_004cea6c(param_3);
    FUN_004cea6c(param_1);
    puVar2 = FUN_004dc320(local_268,PTR_s_resulting_length_is_invalid_in_f_00516d28);
    puVar3 = (uint *)FUN_004cf594(puVar2);
    FUN_004cf628((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_004cff14(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_00402880((int)local_54,2);
    local_68 = 0x20;
    FUN_004e7cc4((uint *)&DAT_00408314,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  iVar4 = FUN_004d5a50(param_1,param_2,0,param_3);
  *in_FS_OFFSET = local_78;
  return iVar4;
}


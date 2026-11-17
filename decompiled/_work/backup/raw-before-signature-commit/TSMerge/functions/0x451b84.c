// name: FUN_00451b84
// address: 0x451b84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00451b84(int param_1,uint param_2,int param_3)

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
  
  FUN_00455f04(0x472b20);
  uVar1 = FUN_0044cbb0(param_1);
  if (uVar1 < param_2) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_00403038;
    uVar6 = 0;
    local_68 = 0x14;
    FUN_0044cc2c(local_80);
    FUN_0044cbb0(param_1);
    puVar2 = FUN_00455640(local_178,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    FUN_0044d11c((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0044d9c0(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_004052c4((int)local_2c,2);
    local_68 = 8;
    FUN_0045ed74((uint *)&DAT_00402fdc,local_1c,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  iVar4 = FUN_0044cbb0(param_3);
  uVar5 = DAT_00471f90 - iVar4;
  uVar1 = FUN_0044cbb0(param_1);
  if (uVar5 <= uVar1) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar1 = 1;
    puVar7 = &LAB_00402ee0;
    uVar6 = 0;
    local_68 = 0x2c;
    FUN_0044cc2c(local_88);
    FUN_0044cbb0(param_3);
    FUN_0044cbb0(param_1);
    puVar2 = FUN_00455640(local_268,PTR_s_resulting_length_is_invalid_in_f_00474070);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    FUN_0044d11c((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0044da08(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_004052c4((int)local_54,2);
    local_68 = 0x20;
    FUN_0045ed74((uint *)&DAT_00402e84,local_44,uVar6,puVar7,uVar1,uVar8,uVar9,uVar10);
  }
  FUN_00451b48(param_1,param_2,0,param_3);
  *in_FS_OFFSET = local_78;
  return;
}


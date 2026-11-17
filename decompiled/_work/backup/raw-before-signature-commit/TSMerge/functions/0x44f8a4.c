// name: FUN_0044f8a4
// address: 0x44f8a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044f8a4(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00455f04(0x472650);
  local_40 = 8;
  FUN_0044d26c(param_1,0);
  uVar1 = FUN_0044cbb0(param_2);
  if (uVar1 < param_3) {
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar1 = 1;
    puVar10 = &LAB_00403038;
    uVar9 = 0;
    local_40 = 0x2c;
    FUN_0044cc2c(local_58);
    FUN_0044cbb0(param_2);
    puVar2 = FUN_00455640(local_14c,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    FUN_0044d11c((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0044d9c0(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_004052c4((int)local_2c,2);
    local_40 = 0x20;
    FUN_0045ed74((uint *)&DAT_00402fdc,local_1c,uVar9,puVar10,uVar1,uVar11,uVar12,uVar13);
  }
  iVar4 = FUN_0044cbb0(param_2);
  uVar1 = iVar4 - param_3;
  local_40 = 8;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_4 == DAT_00471f90) {
    param_4 = 0;
  }
  uVar8 = uVar1;
  if (uVar1 < param_4) {
    uVar8 = param_4;
  }
  piVar5 = FUN_0044d2a4(param_1,uVar8,uVar1);
  local_5c = FUN_0044d594((int)piVar5);
  FUN_0044cbd4((int)local_15c,param_1,&local_5c);
  iVar4 = FUN_0044ca68(param_2);
  puVar6 = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)FUN_0044ca68(param_1);
  FUN_0044d24c(puVar7,puVar6,uVar1);
  *in_FS_OFFSET = local_50;
  return param_1;
}


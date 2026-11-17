// name: FUN_0044d11c
// address: 0x44d11c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044d11c(int param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_15c [16];
  undefined1 local_14c [240];
  int local_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00455f04(0x471e5c);
  local_40 = 8;
  FUN_0044d26c(param_1,0);
  if (param_2 == (uint *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0044aeec;
    uVar5 = 0;
    local_40 = 0x2c;
    FUN_0044cc2c(local_58);
    puVar1 = FUN_00455640(local_14c,PTR_s_unexpected_NULL_pointer_in_funct_00474078);
    puVar2 = (uint *)FUN_0044d088(puVar1);
    FUN_0044d11c((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_0044d090(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_004052c4((int)local_2c,2);
    local_40 = 0x20;
    FUN_0045ed74((uint *)&DAT_00404790,local_1c,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  uVar7 = FUN_0044d10c(param_2);
  local_40 = 8;
  piVar3 = FUN_0044d2a4(param_1,uVar7,uVar7);
  local_5c = FUN_0044d594((int)piVar3);
  FUN_0044cbd4((int)local_15c,param_1,&local_5c);
  puVar4 = (undefined4 *)FUN_0044ca68(param_1);
  FUN_0044d24c(puVar4,param_2,uVar7);
  *in_FS_OFFSET = local_50;
  return param_1;
}


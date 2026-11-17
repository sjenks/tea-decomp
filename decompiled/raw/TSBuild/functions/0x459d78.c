// name: FUN_00459d78
// address: 0x459d78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00459d78(int param_1,uint *param_2)

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
  
  FUN_00467ba8(0x485dec);
  local_40 = 8;
  FUN_00459ec8(param_1,0);
  if (param_2 == (uint *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    pcVar6 = FUN_0045642c;
    uVar5 = 0;
    local_40 = 0x2c;
    FUN_00459238(local_58);
    puVar1 = FUN_004670cc(local_14c,PTR_s_unexpected_NULL_pointer_in_funct_00488a64);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    FUN_00459d78((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_00459cec(local_1c,(int)local_2c);
    local_34 = local_34 + 2;
    FUN_0040473c((int)local_2c,2);
    local_40 = 0x20;
    FUN_00471ae8((uint *)&DAT_00403f08,local_1c,uVar5,pcVar6,uVar7,uVar8,uVar9,uVar10);
  }
  uVar7 = FUN_00459d68(param_2);
  local_40 = 8;
  piVar3 = FUN_00459f00(param_1,uVar7,uVar7);
  local_5c = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_15c,param_1,&local_5c);
  puVar4 = (undefined4 *)FUN_00459074(param_1);
  FUN_00459ea8(puVar4,param_2,uVar7);
  *in_FS_OFFSET = local_50;
  return param_1;
}


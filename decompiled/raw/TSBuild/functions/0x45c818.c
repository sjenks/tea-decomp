// name: FUN_0045c818
// address: 0x45c818
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045c818(int param_1,int param_2,uint param_3,uint param_4)

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
  
  FUN_00467ba8(0x48667c);
  local_40 = 8;
  FUN_00459ec8(param_1,0);
  uVar1 = FUN_004591bc(param_2);
  if (uVar1 < param_3) {
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar1 = 1;
    puVar10 = &LAB_004021bc;
    uVar9 = 0;
    local_40 = 0x2c;
    FUN_00459238(local_58);
    FUN_004591bc(param_2);
    puVar2 = FUN_004670cc(local_14c,PTR_s_string_index_out_of_range_in_fun_00488a60);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    FUN_00459d78((int)local_2c,puVar3);
    local_34 = local_34 + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_0040473c((int)local_2c,2);
    local_40 = 0x20;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar9,puVar10,uVar1,uVar11,uVar12,uVar13);
  }
  iVar4 = FUN_004591bc(param_2);
  uVar1 = iVar4 - param_3;
  local_40 = 8;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_4 == DAT_00485f20) {
    param_4 = 0;
  }
  uVar8 = uVar1;
  if (uVar1 < param_4) {
    uVar8 = param_4;
  }
  piVar5 = FUN_00459f00(param_1,uVar8,uVar1);
  local_5c = FUN_0045a1f0((int)piVar5);
  FUN_004591e0((int)local_15c,param_1,&local_5c);
  iVar4 = FUN_00459074(param_2);
  puVar6 = (undefined4 *)(iVar4 + param_3);
  puVar7 = (undefined4 *)FUN_00459074(param_1);
  FUN_00459ea8(puVar7,puVar6,uVar1);
  *in_FS_OFFSET = local_50;
  return param_1;
}


// name: FUN_00460bbc
// address: 0x460bbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00460bbc(int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
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
  
  FUN_00467ba8(0x4870c0);
  if (param_2 == DAT_00485f20) {
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    puVar6 = &LAB_00402064;
    uVar5 = 0;
    local_40 = 0x14;
    FUN_00459238(local_58);
    puVar1 = FUN_004670cc(local_14c,PTR_s_invalid_string_size_parameter_in_00488a54);
    puVar2 = (uint *)FUN_00459ce4(puVar1);
    FUN_00459d78((int)local_2c,puVar2);
    local_34 = local_34 + 1;
    FUN_0045a664(local_1c,(int)local_2c);
    local_34 = local_34 + 3;
    FUN_0040473c((int)local_2c,2);
    local_40 = 8;
    FUN_00471ae8((uint *)&DAT_00402008,local_1c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
  }
  piVar3 = FUN_00459f00(param_1,param_2,param_2);
  local_5c = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_15c,param_1,&local_5c);
  while (param_2 != 0) {
    puVar1 = &stack0x0000000c;
    iVar4 = FUN_00459074(param_1);
    FUN_00459d58((undefined1 *)(iVar4 + (param_2 - 1)),puVar1);
    param_2 = param_2 - 1;
  }
  *in_FS_OFFSET = local_50;
  return;
}


// name: FUN_0041ff5c
// address: 0x41ff5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ff5c(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  FUN_00467ba8(0x479c14);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  puVar2 = &LAB_0041fdbc;
  uVar1 = 0;
  FUN_00422cfc(local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &PTR_FUN_00479c48;
  FUN_00471ae8((uint *)&DAT_0041fd60,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


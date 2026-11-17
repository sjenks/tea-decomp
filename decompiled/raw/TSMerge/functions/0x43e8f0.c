// name: FUN_0043e8f0
// address: 0x43e8f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e8f0(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  FUN_00455f04(0x46e0bc);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_0043e964;
  uVar1 = 0;
  FUN_00417b88(local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &PTR_FUN_0046e068;
  FUN_0045ed74((uint *)&DAT_0043e7d0,local_10,uVar1,pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


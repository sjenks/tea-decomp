// name: FUN_0048ef70
// address: 0x48ef70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048ef70(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  FUN_004dce64(0x5063b8);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  pcVar2 = FUN_0048efdc;
  uVar1 = 0;
  FUN_0048e99c(local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &PTR_FUN_005044cc;
  FUN_004e7cc4((uint *)&DAT_00487430,local_10,uVar1,pcVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


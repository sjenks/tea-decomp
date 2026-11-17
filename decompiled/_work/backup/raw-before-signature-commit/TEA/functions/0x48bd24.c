// name: FUN_0048bd24
// address: 0x48bd24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048bd24(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  FUN_004dce64(0x50578c);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  puVar2 = &LAB_0048bb6c;
  uVar1 = 0;
  FUN_0048e99c(local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &PTR_FUN_005057c0;
  FUN_004e7cc4((uint *)&DAT_0048bb10,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


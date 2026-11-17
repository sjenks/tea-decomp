// name: FUN_004980ec
// address: 0x4980ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004980ec(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_10 [2];
  int local_8;
  
  FUN_004dce64(0x507fe4);
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  puVar2 = &LAB_004981b4;
  uVar1 = 0;
  FUN_0048e99c(local_10,param_1);
  local_8 = param_1[2];
  local_10[0] = &PTR_FUN_0050803c;
  FUN_004e7cc4((uint *)&DAT_00498160,local_10,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


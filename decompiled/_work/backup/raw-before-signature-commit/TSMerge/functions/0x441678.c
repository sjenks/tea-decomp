// name: FUN_00441678
// address: 0x441678
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00441678(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_0042280c(param_2,param_1,4);
  uVar1 = FUN_00422908(param_2);
  *(uint *)(param_1 + 4) = uVar1;
  FUN_0044b2dc();
  FUN_0044b2dc();
  uVar2 = FUN_0044b390();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_0044b390();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_0042280c(param_2,*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4));
  FUN_0042280c(param_2,*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4));
  return;
}


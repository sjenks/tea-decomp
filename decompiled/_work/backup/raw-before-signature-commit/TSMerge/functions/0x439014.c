// name: FUN_00439014
// address: 0x439014
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00439014(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1,*(int *)(param_1 + 8),iVar2,param_1,iVar1,0);
  }
  return;
}


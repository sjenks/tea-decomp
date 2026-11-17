// name: FUN_004371f8
// address: 0x4371f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004371f8(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(param_2 + 0x22);
  }
  iVar1 = (**(code **)(*param_3 + 8))();
  FUN_00439d70(param_2,iVar1);
  return;
}


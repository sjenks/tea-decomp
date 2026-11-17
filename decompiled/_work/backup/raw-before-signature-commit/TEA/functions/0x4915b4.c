// name: FUN_004915b4
// address: 0x4915b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_004915b4(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_4 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    (**(code **)(*piVar1 + 0x18))();
  }
  return;
}


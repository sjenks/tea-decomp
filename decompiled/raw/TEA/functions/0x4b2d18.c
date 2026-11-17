// name: FUN_004b2d18
// address: 0x4b2d18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004b2d18(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(param_2 + 0x22);
  }
  iVar1 = (**(code **)(*param_3 + 8))();
  iVar1 = FUN_004b5890(param_2,iVar1);
  return iVar1;
}


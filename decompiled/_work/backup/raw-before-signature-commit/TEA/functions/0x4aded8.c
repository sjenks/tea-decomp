// name: FUN_004aded8
// address: 0x4aded8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004aded8(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 8);
  }
  FUN_004adf10(iVar1,param_2);
  FUN_0049a31c(param_2);
  return;
}


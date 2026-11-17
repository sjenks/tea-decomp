// name: FUN_00424b38
// address: 0x424b38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00424b38(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_00422efc(param_1,piVar1,1);
  return param_1;
}


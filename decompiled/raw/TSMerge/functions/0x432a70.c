// name: FUN_00432a70
// address: 0x432a70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432a70(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 8);
  }
  FUN_00432aa8(iVar1,param_2);
  FUN_00422d88(param_2);
  return;
}


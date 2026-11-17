// name: FUN_0041c8e8
// address: 0x41c8e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0041c8e8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if ((int *)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)) <= piVar1) {
      return (int *)0x0;
    }
    if (param_2 == *piVar1) break;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}


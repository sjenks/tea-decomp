// name: FUN_0045dc48
// address: 0x45dc48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045dc48(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar2 = param_2[1];
  }
  else {
    iVar2 = *param_2;
  }
  iVar1 = 1;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 <= iVar1) break;
    if ((**(int **)(iVar1 * 4 + *(int *)(param_1 + 0x6b4)) - *(int *)(param_1 + 0x7b4) <= iVar2) &&
       (iVar2 <= **(int **)(iVar1 * 4 + *(int *)(param_1 + 0x6b4)))) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  }
  return 0;
}


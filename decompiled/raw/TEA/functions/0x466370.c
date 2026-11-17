// name: FUN_00466370
// address: 0x466370
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00466370(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = **(int **)(param_1 + 0x10);
  }
  if (param_3 == iVar1) {
    FUN_0045de08(*(int **)(param_1 + 0x10),param_2,param_3);
  }
  return;
}


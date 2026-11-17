// name: FUN_004625f0
// address: 0x4625f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004625f0(int param_1,char param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 == 0x14aa) {
    iVar1 = 1;
  }
  else if (param_3 != 0x2bc0) {
    return;
  }
  iVar1 = **(int **)(param_1 + 0x94 + iVar1 * 4);
  FUN_004d5c40(iVar1 + 0x28,0,*(uint *)(*(int *)(iVar1 + 0x30) + -4),1,param_2 + '0');
  return;
}


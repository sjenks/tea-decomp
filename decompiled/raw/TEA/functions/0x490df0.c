// name: FUN_00490df0
// address: 0x490df0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00490df0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  return iVar1;
}


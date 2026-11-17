// name: FUN_00490dd0
// address: 0x490dd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00490dd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 0x3a)) break;
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  return iVar1;
}


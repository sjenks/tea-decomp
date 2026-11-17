// name: FUN_0044eb68
// address: 0x44eb68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044eb68(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 1) <= iVar1) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 9) + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


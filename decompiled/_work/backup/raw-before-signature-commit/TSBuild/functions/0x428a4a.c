// name: FUN_00428a4a
// address: 0x428a4a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00428a4a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == *(int *)(param_1 + iVar1 * 4)) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return -1;
}


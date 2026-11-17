// name: FUN_00494722
// address: 0x494722
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00494722(int param_1,int param_2)

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


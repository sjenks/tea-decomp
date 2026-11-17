// name: FUN_00497724
// address: 0x497724
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00497724(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < 0x10 && (*(int *)(param_1 + iVar1 * 5) != 0)); iVar1 = iVar1 + 1) {
    if (param_2 == *(int *)(param_1 + iVar1 * 5)) {
      *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
      return;
    }
  }
  return;
}


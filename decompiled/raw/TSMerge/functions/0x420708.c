// name: FUN_00420708
// address: 0x420708
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420708(int param_1,int param_2)

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


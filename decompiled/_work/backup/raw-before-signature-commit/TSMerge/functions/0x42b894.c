// name: FUN_0042b894
// address: 0x42b894
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042b894(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == *(int *)(param_1 + iVar1 * 0x10)) {
      *(undefined4 *)(param_1 + 8 + iVar1 * 0x10) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  return;
}


// name: FUN_00495f78
// address: 0x495f78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00495f78(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


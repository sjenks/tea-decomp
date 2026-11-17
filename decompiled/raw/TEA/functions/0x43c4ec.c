// name: FUN_0043c4ec
// address: 0x43c4ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043c4ec(int param_1,int param_2)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_00430730(*(int **)(param_1 + 8),param_2);
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}


// name: FUN_0040d6b4
// address: 0x40d6b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040d6b4(int param_1,int param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x1134) = 1;
    return;
  }
  if (99 < param_2) {
    *(undefined4 *)(param_1 + 0x1134) = 100;
    return;
  }
  *(int *)(param_1 + 0x1134) = param_2;
  return;
}


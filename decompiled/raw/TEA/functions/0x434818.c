// name: FUN_00434818
// address: 0x434818
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434818(int param_1,int param_2)

{
  if (param_2 < 2) {
    *(undefined4 *)(param_1 + 0x1138) = 1;
    return;
  }
  if (99 < param_2) {
    *(undefined4 *)(param_1 + 0x1138) = 100;
    return;
  }
  *(int *)(param_1 + 0x1138) = param_2;
  return;
}


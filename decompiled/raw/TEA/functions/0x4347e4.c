// name: FUN_004347e4
// address: 0x4347e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004347e4(int param_1,int param_2)

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


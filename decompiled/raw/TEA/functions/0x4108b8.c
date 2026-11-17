// name: FUN_004108b8
// address: 0x4108b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004108b8(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      FUN_004de7cc(*(int **)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


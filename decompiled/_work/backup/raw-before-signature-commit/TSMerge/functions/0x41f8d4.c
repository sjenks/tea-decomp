// name: FUN_0041f8d4
// address: 0x41f8d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041f8d4(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    while (*param_1 != 0) {
      *param_1 = *(int *)(*param_1 + 8);
      FUN_0044b2cc();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}


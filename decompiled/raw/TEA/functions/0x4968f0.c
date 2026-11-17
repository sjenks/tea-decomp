// name: FUN_004968f0
// address: 0x4968f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004968f0(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    while (*param_1 != 0) {
      *param_1 = *(int *)(*param_1 + 8);
      FUN_004cc0bc();
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


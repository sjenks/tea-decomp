// name: FUN_0042aa48
// address: 0x42aa48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042aa48(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    while (*param_1 != 0) {
      *param_1 = *(int *)(*param_1 + 8);
      FUN_0045680c();
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


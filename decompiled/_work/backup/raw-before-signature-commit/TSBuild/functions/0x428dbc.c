// name: FUN_00428dbc
// address: 0x428dbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428dbc(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_00428d9c(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


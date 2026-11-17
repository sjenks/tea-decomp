// name: FUN_00459134
// address: 0x459134
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00459134(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004590c4();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


// name: FUN_004ce9e4
// address: 0x4ce9e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004ce9e4(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


// name: FUN_004167f4
// address: 0x4167f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004167f4(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00416784();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


// name: FUN_00417a68
// address: 0x417a68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00417a68(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004179f4();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


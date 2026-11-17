// name: FUN_0044dd10
// address: 0x44dd10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044dd10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0044dc9c();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


// name: FUN_0045a96c
// address: 0x45a96c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045a96c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0045a8f8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


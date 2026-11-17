// name: FUN_004d021c
// address: 0x4d021c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d021c(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004d01a8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + -1;
    return *param_1 + 1;
  }
  return 1;
}


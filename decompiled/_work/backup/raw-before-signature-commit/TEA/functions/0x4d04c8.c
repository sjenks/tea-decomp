// name: FUN_004d04c8
// address: 0x4d04c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d04c8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004d01a8();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}


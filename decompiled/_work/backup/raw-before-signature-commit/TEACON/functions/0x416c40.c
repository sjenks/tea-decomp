// name: FUN_00416c40
// address: 0x416c40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416c40(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00416784();
  if (param_1 != piVar1) {
    *param_1 = *param_1 + 1;
  }
  return;
}


// name: FUN_00427128
// address: 0x427128
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427128(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_0042503c((int)(param_1 + 1));
    if (piVar1 != (int *)param_1[9]) {
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_0047af14)();
      }
      param_1[9] = (int)piVar1;
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_0047af20)();
      }
    }
  }
  else if (param_1[8] != 0) {
    (*(code *)PTR_FUN_0047af08)();
  }
  FUN_00436428(*param_1);
  return;
}


// name: FUN_0041bfb4
// address: 0x41bfb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041bfb4(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_00419ec8((int)(param_1 + 1));
    if (piVar1 != (int *)param_1[9]) {
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_00467138)();
      }
      param_1[9] = (int)piVar1;
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_00467144)();
      }
    }
  }
  else if (param_1[8] != 0) {
    (*(code *)PTR_FUN_0046712c)();
  }
  FUN_0042b294(*param_1);
  return;
}


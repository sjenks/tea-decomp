// name: FUN_00492e48
// address: 0x492e48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00492e48(int *param_1)

{
  int *piVar1;
  
  if (param_1[8] == 0) {
    piVar1 = FUN_00490d84((int)(param_1 + 1));
    if (piVar1 != (int *)param_1[9]) {
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_00506b40)();
      }
      param_1[9] = (int)piVar1;
      if (param_1[9] != 0) {
        (*(code *)PTR_FUN_00506b4c)();
      }
    }
  }
  else if (param_1[8] != 0) {
    (*(code *)PTR_FUN_00506b34)();
  }
  FUN_004a5774(*param_1);
  return;
}


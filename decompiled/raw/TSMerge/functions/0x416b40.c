// name: FUN_00416b40
// address: 0x416b40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416b40(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0046671c;
    FUN_00416d80(param_1);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}


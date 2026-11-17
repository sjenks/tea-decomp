// name: FUN_00415b28
// address: 0x415b28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415b28(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00414020(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_0045680c();
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


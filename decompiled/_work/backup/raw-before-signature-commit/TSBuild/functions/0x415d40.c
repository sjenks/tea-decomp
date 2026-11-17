// name: FUN_00415d40
// address: 0x415d40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415d40(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004061d0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_0045680c();
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


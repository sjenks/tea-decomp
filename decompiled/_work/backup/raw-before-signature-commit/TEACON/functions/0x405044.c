// name: FUN_00405044
// address: 0x405044
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00405044(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0040483c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_00414f78();
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}


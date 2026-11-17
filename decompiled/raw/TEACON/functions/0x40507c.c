// name: FUN_0040507c
// address: 0x40507c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040507c(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_00414f78();
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}


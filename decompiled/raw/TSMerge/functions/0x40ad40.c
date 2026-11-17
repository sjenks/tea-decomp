// name: FUN_0040ad40
// address: 0x40ad40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040ad40(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00406a90(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_0044b2cc();
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}


// name: FUN_004114a4
// address: 0x4114a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004114a4(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0040771c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


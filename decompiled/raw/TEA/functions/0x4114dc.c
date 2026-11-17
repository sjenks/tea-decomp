// name: FUN_004114dc
// address: 0x4114dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004114dc(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00410d88(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


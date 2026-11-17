// name: FUN_00411568
// address: 0x411568
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411568(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0040b4f0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


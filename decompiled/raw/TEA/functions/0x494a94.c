// name: FUN_00494a94
// address: 0x494a94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00494a94(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_00494a74(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


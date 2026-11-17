// name: FUN_00410d44
// address: 0x410d44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410d44(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && ((char)param_1[4] != '\0')) {
      RegCloseKey((HKEY)*param_1);
    }
    FUN_0044b2dc();
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}


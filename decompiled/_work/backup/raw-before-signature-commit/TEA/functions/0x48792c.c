// name: FUN_0048792c
// address: 0x48792c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048792c(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && ((char)param_1[4] != '\0')) {
      RegCloseKey((HKEY)*param_1);
    }
    FUN_004cc0cc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


// name: FUN_0041bd68
// address: 0x41bd68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041bd68(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && ((char)param_1[4] != '\0')) {
      RegCloseKey((HKEY)*param_1);
    }
    FUN_0045681c();
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


// name: FUN_00419d14
// address: 0x419d14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419d14(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)param_1[1])();
      if (*param_1 != 0) {
        (*(code *)param_1[1])();
        FreeLibrary((HMODULE)*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


// name: FUN_00414e0c
// address: 0x414e0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00414e0c(char *param_1,byte param_2)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      CloseClipboard();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}


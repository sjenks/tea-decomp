// name: FUN_0041fe30
// address: 0x41fe30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041fe30(char *param_1,byte param_2)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      CloseClipboard();
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


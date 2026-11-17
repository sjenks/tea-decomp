// name: FUN_0040ed84
// address: 0x40ed84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040ed84(char *param_1,byte param_2)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\0') {
      DAT_00434684 = 0;
    }
    else if (*param_1 == '\x01') {
      FUN_0040da50(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}


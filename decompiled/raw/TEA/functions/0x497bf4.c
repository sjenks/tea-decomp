// name: FUN_00497bf4
// address: 0x497bf4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00497bf4(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00508078;
    if ((*(char *)(param_1 + 2) != '\0') && (param_1[1] != 0)) {
      DestroyMenu((HMENU)param_1[1]);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


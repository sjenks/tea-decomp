// name: FUN_00411a20
// address: 0x411a20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411a20(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(HKEY *)(param_1 + 4) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}


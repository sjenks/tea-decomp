// name: FUN_00463bd4
// address: 0x463bd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00463bd4(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_0048d068 = DAT_0048d068 + -1;
    if (DAT_0048d068 == 0) {
      FUN_0045be5c((int *)&DAT_0048cfa0);
      FUN_0045be5c(&DAT_0048cfe0);
      FUN_0045be5c(&DAT_0048d020);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  return;
}


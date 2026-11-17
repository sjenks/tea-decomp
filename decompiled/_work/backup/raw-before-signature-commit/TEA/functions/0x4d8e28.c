// name: FUN_004d8e28
// address: 0x4d8e28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d8e28(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_0051bbec = DAT_0051bbec + -1;
    if (DAT_0051bbec == 0) {
      FUN_004d170c((int *)&DAT_0051bb24);
      FUN_004d170c(&DAT_0051bb64);
      FUN_004d170c(&DAT_0051bba4);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


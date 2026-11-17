// name: FUN_0041ca20
// address: 0x41ca20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ca20(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_00434894 = DAT_00434894 + -1;
    if (DAT_00434894 == 0) {
      FUN_00418c38((int *)&DAT_004347cc);
      FUN_00418c38(&DAT_0043480c);
      FUN_00418c38(&DAT_0043484c);
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  return;
}


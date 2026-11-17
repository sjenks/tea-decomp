// name: FUN_004658e8
// address: 0x4658e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004658e8(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0048d078 = DAT_0048d078 + 1;
    *param_1 = DAT_0048d078;
  }
  return param_1;
}


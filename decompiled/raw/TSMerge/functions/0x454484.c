// name: FUN_00454484
// address: 0x454484
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00454484(int *param_1)

{
  if (*param_1 == 0) {
    DAT_004775c8 = DAT_004775c8 + 1;
    *param_1 = DAT_004775c8;
  }
  return param_1;
}


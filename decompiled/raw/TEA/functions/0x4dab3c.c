// name: FUN_004dab3c
// address: 0x4dab3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004dab3c(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0051bbfc = DAT_0051bbfc + 1;
    *param_1 = DAT_0051bbfc;
  }
  return param_1;
}


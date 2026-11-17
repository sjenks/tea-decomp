// name: FUN_00410568
// address: 0x410568
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00410568(int *param_1,int *param_2,int *param_3)

{
  *param_3 = *param_1;
  while (param_1 = param_1 + 1, param_2 != param_1) {
    if (*param_1 != *param_3) {
      param_3 = param_3 + 1;
      *param_3 = *param_1;
    }
  }
  return param_3 + 1;
}


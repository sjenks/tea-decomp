// name: FUN_00410628
// address: 0x410628
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00410628(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if (*param_1 < *param_3) {
      param_1 = param_1 + 1;
    }
    else if (*param_3 < *param_1) {
      param_3 = param_3 + 1;
    }
    else {
      *param_5 = *param_1;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
      param_3 = param_3 + 1;
    }
  }
  return param_5;
}


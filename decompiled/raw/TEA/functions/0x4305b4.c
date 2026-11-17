// name: FUN_004305b4
// address: 0x4305b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004305b4(int *param_1,int *param_2)

{
  if (param_2 != param_1) {
    if (*param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  return;
}


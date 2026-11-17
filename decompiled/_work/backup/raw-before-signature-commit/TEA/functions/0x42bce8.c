// name: FUN_0042bce8
// address: 0x42bce8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042bce8(int *param_1,int *param_2,int *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 3) {
    FUN_004305b4(param_3,param_1);
    param_3 = param_3 + 3;
  }
  return param_3;
}


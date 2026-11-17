// name: FUN_004288b4
// address: 0x4288b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004288b4(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return param_1;
}


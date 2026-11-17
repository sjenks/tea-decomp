// name: FUN_00410da0
// address: 0x410da0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00410da0(int *param_1,int *param_2,int *param_3)

{
  *param_3 = 0;
  *param_2 = 0;
  if (*param_1 != 0) {
    *param_2 = param_1[0x44] - *(int *)(*param_1 + 0x2404);
    *param_3 = *(int *)(*param_1 + 0x2408) - *(int *)(*param_1 + 0x2404);
  }
  return;
}


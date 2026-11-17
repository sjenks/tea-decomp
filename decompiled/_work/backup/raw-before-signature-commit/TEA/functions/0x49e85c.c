// name: FUN_0049e85c
// address: 0x49e85c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049e85c(uint *param_1,uint *param_2,char *param_3)

{
  param_1[3] = (uint)param_2;
  if (param_3 == (char *)0x0) {
    param_3 = FUN_004dc9f4(param_2);
  }
  param_1[4] = (uint)param_3;
  *param_1 = *param_1 | 1;
  return;
}


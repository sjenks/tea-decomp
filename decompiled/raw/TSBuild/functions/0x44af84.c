// name: FUN_0044af84
// address: 0x44af84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0044af84(char *param_1,char *param_2,char *param_3)

{
  for (; ((param_2 != param_1 && (*param_3 != '\0')) && (*param_1 == *param_3));
      param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1;
}


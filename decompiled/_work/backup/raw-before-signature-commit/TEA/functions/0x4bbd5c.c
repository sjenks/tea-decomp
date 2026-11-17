// name: FUN_004bbd5c
// address: 0x4bbd5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004bbd5c(char *param_1,char *param_2,char *param_3)

{
  for (; ((param_2 != param_1 && (*param_3 != '\0')) && (*param_1 == *param_3));
      param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return;
}


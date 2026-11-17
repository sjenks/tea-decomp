// name: FUN_0040e070
// address: 0x40e070
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040e070(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    FUN_004cf384(param_3,param_2);
  }
  return param_3;
}


// name: FUN_0040e20c
// address: 0x40e20c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040e20c(int param_1,int param_2,int param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
    FUN_004cf384(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}


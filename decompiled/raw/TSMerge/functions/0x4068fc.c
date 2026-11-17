// name: FUN_004068fc
// address: 0x4068fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004068fc(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    FUN_0044ce78(param_3,param_2);
  }
  return param_3;
}


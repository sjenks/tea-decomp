// name: FUN_0040ab04
// address: 0x40ab04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0040ab04(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    FUN_004cf384(param_3 + -0x80,param_2 + -0x80);
    FUN_0040ab88(param_3 + -0x68,param_2 + -0x68);
    FUN_0040ab88(param_3 + -0x48,param_2 + -0x48);
    FUN_004cf384(param_3 + -0x28,param_2 + -0x28);
    FUN_004cf384(param_3 + -0x18,param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x70) = *(undefined4 *)(param_2 + -0x70);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    param_2 = param_2 + -0x80;
    param_3 = param_3 + -0x80;
  }
  return param_3;
}


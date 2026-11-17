// name: FUN_0046e698
// address: 0x46e698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0046e698(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_004cf384(param_3,param_1);
    FUN_0040ab88(param_3 + 0x18,param_1 + 0x18);
    FUN_0040ab88(param_3 + 0x38,param_1 + 0x38);
    FUN_004cf384(param_3 + 0x58,param_1 + 0x58);
    FUN_004cf384(param_3 + 0x68,param_1 + 0x68);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_3 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    param_3 = param_3 + 0x80;
  }
  return param_3;
}


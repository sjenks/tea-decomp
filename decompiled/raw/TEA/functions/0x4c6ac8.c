// name: FUN_004c6ac8
// address: 0x4c6ac8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c6ac8(int *param_1,int param_2,int param_3)

{
  param_1[4] = param_2;
  param_1[5] = param_3;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x2c))();
  return;
}


// name: FUN_004ace70
// address: 0x4ace70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ace70(int *param_1,int param_2)

{
  param_1[5] = param_2;
  if ((*(int *)(*param_1 + 0xc) != 0) && (param_1[5] != 0)) {
    FUN_004a76a8(*param_1,0x141,param_1[5] - 1,0);
  }
  return;
}


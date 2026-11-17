// name: FUN_004215f0
// address: 0x4215f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004215f0(int param_1,int param_2)

{
  FUN_0041f1c8(param_1,param_2,'\0');
  if (*(int **)(param_1 + 0x5b0) != (int *)0x0) {
    FUN_0041b218(*(int **)(param_1 + 0x5b0));
    FUN_004a76a8(**(int **)(param_1 + 0x5b4),0x465,0,999);
    FUN_0041b218(*(int **)(param_1 + 0x5b8));
    FUN_004a76a8(**(int **)(param_1 + 0x5bc),0x465,0,999);
  }
  return;
}


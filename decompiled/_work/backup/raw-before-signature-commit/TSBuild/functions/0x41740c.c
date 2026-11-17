// name: FUN_0041740c
// address: 0x41740c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041740c(int *param_1,int param_2)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}


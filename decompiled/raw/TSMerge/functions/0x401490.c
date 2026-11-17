// name: FUN_00401490
// address: 0x401490
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00401490(int *param_1,int param_2)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}


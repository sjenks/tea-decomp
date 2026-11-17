// name: FUN_004331a8
// address: 0x4331a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004331a8(int *param_1,int param_2)

{
  if ((param_2 == *(int *)(*param_1 + 0x15)) && (*(char *)((int)param_1 + 0x3e) == '\0')) {
    (**(code **)(*(int *)((int)param_1 + 0x35) + 0x10))();
  }
  FUN_0044239c((int *)*param_1,param_2);
  FUN_0041e324(param_1 + 1,param_2);
  return;
}


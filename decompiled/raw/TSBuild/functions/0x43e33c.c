// name: FUN_0043e33c
// address: 0x43e33c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e33c(int *param_1,int param_2)

{
  if ((param_2 == *(int *)(*param_1 + 0x15)) && (*(char *)((int)param_1 + 0x3e) == '\0')) {
    (**(code **)(*(int *)((int)param_1 + 0x35) + 0x10))();
  }
  FUN_0044d530((int *)*param_1,param_2);
  FUN_00429498(param_1 + 1,param_2);
  return;
}


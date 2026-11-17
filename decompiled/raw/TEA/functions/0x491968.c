// name: FUN_00491968
// address: 0x491968
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00491968(int *param_1)

{
  int in_EAX;
  
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    in_EAX = (**(code **)(param_1[6] + 0x38))();
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0;
    }
    if (*(char *)((int)param_1 + 0x32) != '\0') {
      in_EAX = *param_1;
      *(undefined4 *)(in_EAX + 0x2c) = 0;
    }
  }
  return in_EAX;
}


// name: FUN_00425bf0
// address: 0x425bf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425bf0(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    (**(code **)(param_1[6] + 0x38))();
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0;
    }
    if (*(char *)((int)param_1 + 0x32) != '\0') {
      *(undefined4 *)(*param_1 + 0x2c) = 0;
    }
  }
  return;
}


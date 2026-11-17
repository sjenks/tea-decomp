// name: FUN_00430ee0
// address: 0x430ee0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00430ee0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x52) != '\0') {
    if (param_2 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x53) + 0xd))();
      (**(code **)(*(int *)(param_1 + 0x53) + 0x15))();
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x53) + 0x11))();
  }
  return;
}


// name: FUN_0049c744
// address: 0x49c744
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049c744(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x86) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x68))();
  }
  return;
}


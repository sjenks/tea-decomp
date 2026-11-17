// name: FUN_00425a50
// address: 0x425a50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00425a50(int *param_1)

{
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(param_1[6] + 0x48))();
    (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
  }
  return;
}


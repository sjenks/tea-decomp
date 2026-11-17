// name: FUN_004ac750
// address: 0x4ac750
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ac750(int *param_1,WPARAM param_2)

{
  FUN_004a76a8(*param_1,0xf1,param_2,0);
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  return;
}


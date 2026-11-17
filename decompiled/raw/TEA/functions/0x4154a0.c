// name: FUN_004154a0
// address: 0x4154a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004154a0(int param_1,int param_2)

{
  if (param_2 == 0x70) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xb4))();
  }
  else if (param_2 == 9) {
    GetKeyState(0x10);
    (**(code **)(*(int *)(param_1 + 0xc) + 0x7c))();
  }
  return 1;
}


// name: FUN_004518a4
// address: 0x4518a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004518a4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
    uVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
    *(undefined4 *)(param_2 + 8) = uVar1;
  }
  else if (param_3 == 1) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x2c))();
    (**(code **)(*(int *)(param_1 + 0xc) + 0x30))();
  }
  return 0xc;
}


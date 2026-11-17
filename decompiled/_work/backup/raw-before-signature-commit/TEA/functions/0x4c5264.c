// name: FUN_004c5264
// address: 0x4c5264
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c5264(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x26) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x2a) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x2e) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(param_1 + 0x32) = uVar1;
  return;
}


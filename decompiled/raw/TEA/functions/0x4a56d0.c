// name: FUN_004a56d0
// address: 0x4a56d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a56d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0x38))();
  }
  return uVar1;
}


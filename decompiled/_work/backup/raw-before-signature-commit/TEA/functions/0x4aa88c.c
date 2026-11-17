// name: FUN_004aa88c
// address: 0x4aa88c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004aa88c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2b) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2b) + 0xc) + 0x2c))();
  }
  return uVar1;
}


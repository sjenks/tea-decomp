// name: FUN_00436384
// address: 0x436384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00436384(int param_1)

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


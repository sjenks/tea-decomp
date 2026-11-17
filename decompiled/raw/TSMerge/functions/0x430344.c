// name: FUN_00430344
// address: 0x430344
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00430344(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2b) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x2b) + 0xc) + 0x2c))();
  }
  return uVar1;
}


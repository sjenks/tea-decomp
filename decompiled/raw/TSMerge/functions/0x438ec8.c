// name: FUN_00438ec8
// address: 0x438ec8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00438ec8(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)*param_2)();
  return;
}


// name: FUN_0044405c
// address: 0x44405c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044405c(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x2c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))();
  }
  (**(code **)*param_2)();
  return;
}


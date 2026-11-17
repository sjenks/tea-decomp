// name: FUN_0048fe0c
// address: 0x48fe0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048fe0c(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00506a60;
    if (*(int *)((int)param_1 + 6) != 0) {
      (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x1c))();
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}


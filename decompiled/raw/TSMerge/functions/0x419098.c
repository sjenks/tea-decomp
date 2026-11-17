// name: FUN_00419098
// address: 0x419098
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419098(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00467058;
    if (*(int *)((int)param_1 + 6) != 0) {
      (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x1c))();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}


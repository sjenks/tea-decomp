// name: FUN_0041171c
// address: 0x41171c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041171c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x10))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}


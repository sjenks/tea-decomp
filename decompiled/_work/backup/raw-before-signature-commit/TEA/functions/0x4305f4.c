// name: FUN_004305f4
// address: 0x4305f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004305f4(undefined4 *param_1)

{
  while ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*param_1;
    FUN_004cc0bc();
  }
  param_1[1] = *param_1;
  param_1[2] = 0;
  return;
}


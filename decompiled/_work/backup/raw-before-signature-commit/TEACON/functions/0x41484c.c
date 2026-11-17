// name: FUN_0041484c
// address: 0x41484c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041484c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}


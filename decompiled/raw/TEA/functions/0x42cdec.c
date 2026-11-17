// name: FUN_0042cdec
// address: 0x42cdec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042cdec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}


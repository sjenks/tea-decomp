// name: FUN_0047f610
// address: 0x47f610
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 * __cdecl FUN_0047f610(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}


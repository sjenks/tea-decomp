// name: FUN_00403e94
// address: 0x403e94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00403e94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 2) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3 = param_3 + 2;
  }
  return param_3;
}


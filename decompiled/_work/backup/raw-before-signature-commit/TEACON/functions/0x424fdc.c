// name: FUN_00424fdc
// address: 0x424fdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00424fdc(int *param_1)

{
  if (*param_1 == 4) {
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    return 1;
  }
  if (*param_1 == 5) {
    return 1;
  }
  return 0;
}


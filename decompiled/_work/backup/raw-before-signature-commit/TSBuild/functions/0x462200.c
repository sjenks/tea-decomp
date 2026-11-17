// name: FUN_00462200
// address: 0x462200
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00462200(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}


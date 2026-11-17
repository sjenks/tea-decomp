// name: FUN_004d9b60
// address: 0x4d9b60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d9b60(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}


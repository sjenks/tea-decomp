// name: FUN_0046490c
// address: 0x46490c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046490c(int param_1,byte *param_2,byte *param_3)

{
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + (uint)*param_2 * 4) & 8) != 0) {
      *param_2 = *(byte *)(*(int *)(param_1 + 0x3c) + ((uint)*param_2 - *(int *)(param_1 + 0x30)));
    }
  }
  return;
}


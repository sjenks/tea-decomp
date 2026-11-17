// name: FUN_004856b8
// address: 0x4856b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004856b8(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  return;
}


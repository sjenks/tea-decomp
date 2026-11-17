// name: FUN_0048569c
// address: 0x48569c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048569c(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
  return;
}


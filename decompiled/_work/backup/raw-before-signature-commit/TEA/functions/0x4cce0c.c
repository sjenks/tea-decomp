// name: FUN_004cce0c
// address: 0x4cce0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cce0c(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_004cc678((LPVOID)(param_1 + -4));
      return;
    }
    FUN_004cce38(param_1);
  }
  return;
}


// name: FUN_00415cc8
// address: 0x415cc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415cc8(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_00415534((LPVOID)(param_1 + -4));
      return;
    }
    FUN_00415cf4(param_1);
  }
  return;
}


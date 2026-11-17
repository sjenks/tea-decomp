// name: FUN_0045755c
// address: 0x45755c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045755c(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_00456dc8((LPVOID)(param_1 + -4));
      return;
    }
    FUN_00457588(param_1);
  }
  return;
}


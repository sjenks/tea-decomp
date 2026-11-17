// name: FUN_0044c01c
// address: 0x44c01c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044c01c(int param_1)

{
  if (param_1 != 0) {
    if (0xfffff < (*(uint *)(param_1 + -4) & 0xfffffffc)) {
      FUN_0044b888((LPVOID)(param_1 + -4));
      return;
    }
    FUN_0044c048(param_1);
  }
  return;
}


// name: FUN_0042c89c
// address: 0x42c89c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c89c(int param_1)

{
  HACCEL pHVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    pHVar1 = FUN_00444ce8(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = pHVar1;
  }
  return;
}


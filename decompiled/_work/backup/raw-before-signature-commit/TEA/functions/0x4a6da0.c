// name: FUN_004a6da0
// address: 0x4a6da0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a6da0(int param_1)

{
  HACCEL pHVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    pHVar1 = FUN_004c1a9c(*(int *)(param_1 + 0x70),*(LPCSTR *)(param_1 + 0x3c));
    *(HACCEL *)(param_1 + 0x4c) = pHVar1;
  }
  return;
}


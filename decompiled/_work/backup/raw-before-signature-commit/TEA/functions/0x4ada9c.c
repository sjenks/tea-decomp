// name: FUN_004ada9c
// address: 0x4ada9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ada9c(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x80) != 0) {
    FUN_004a5774(*param_1);
    return;
  }
  FUN_004a6a30(*param_1);
  return;
}


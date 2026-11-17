// name: FUN_00489970
// address: 0x489970
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00489970(int param_1)

{
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) | 2;
  *(undefined1 *)(param_1 + 0x39) = 1;
  FUN_004903b8(param_1);
  FUN_00490404(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x01') {
    FUN_004916ec(*(int **)(param_1 + 6),*(int *)(param_1 + 0x3a));
  }
  return;
}


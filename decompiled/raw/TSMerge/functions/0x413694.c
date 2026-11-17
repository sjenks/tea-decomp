// name: FUN_00413694
// address: 0x413694
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413694(int param_1)

{
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) | 2;
  *(undefined1 *)(param_1 + 0x39) = 1;
  FUN_00419608(param_1);
  FUN_00419654(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x01') {
    FUN_0041a81c(*(int **)(param_1 + 6),*(int *)(param_1 + 0x3a));
  }
  return;
}


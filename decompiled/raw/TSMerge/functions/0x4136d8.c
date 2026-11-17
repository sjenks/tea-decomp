// name: FUN_004136d8
// address: 0x4136d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004136d8(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfd;
  *(undefined1 *)(param_1 + 0x39) = param_3;
  FUN_00419608(param_1);
  FUN_00419654(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x01') {
    FUN_0041a81c(*(int **)(param_1 + 6),-1);
  }
  return;
}


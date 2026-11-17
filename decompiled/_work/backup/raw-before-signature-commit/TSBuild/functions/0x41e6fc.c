// name: FUN_0041e6fc
// address: 0x41e6fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e6fc(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfd;
  *(undefined1 *)(param_1 + 0x39) = param_3;
  FUN_0042477c(param_1);
  FUN_004247c8(param_1);
  if (*(char *)(*(int *)(param_1 + 6) + 0x36) == '\x01') {
    FUN_00425990(*(int **)(param_1 + 6),-1);
  }
  return;
}


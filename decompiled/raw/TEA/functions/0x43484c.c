// name: FUN_0043484c
// address: 0x43484c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043484c(int param_1)

{
  if (100 < *(int *)(param_1 + 0x101c)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x1018) < *(int *)(param_1 + 0x101c)) {
    return 0xffffffff;
  }
  return 0;
}


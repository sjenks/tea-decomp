// name: FUN_004a72e8
// address: 0x4a72e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a72e8(int param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffdf;
  (**(code **)(*(int *)(param_1 + 8) + 0x7c))();
  if ((((*(byte *)(param_1 + 0x74) & 1) == 0) && ((*(byte *)(param_1 + 0x74) & 0x10) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x6c) + 0x1a) != '\0')) {
    PostQuitMessage(0);
  }
  FUN_004a5774(param_1);
  return;
}


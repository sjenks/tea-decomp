// name: FUN_0042cde4
// address: 0x42cde4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042cde4(int param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffdf;
  (**(code **)(*(int *)(param_1 + 8) + 0x7c))();
  if ((((*(byte *)(param_1 + 0x74) & 1) == 0) && ((*(byte *)(param_1 + 0x74) & 0x10) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x6c) + 0x1a) != '\0')) {
    PostQuitMessage(0);
  }
  FUN_0042b294(param_1);
  return;
}


// name: FUN_00437f24
// address: 0x437f24
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00437f24(int param_1)

{
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x24))();
    if ((*(int *)(param_1 + 0xc) == 0) && ((*(byte *)(param_1 + 0x75) & 8) != 0)) {
      FUN_0043babc(*(int *)(param_1 + 0x6c),param_1);
    }
    return;
  }
  FUN_00436428(param_1);
  return;
}


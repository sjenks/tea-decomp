// name: FUN_004856d4
// address: 0x4856d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004856d4(int param_1,undefined4 *param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40000000;
  if (param_2 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000000;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xbfffffff;
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  return;
}


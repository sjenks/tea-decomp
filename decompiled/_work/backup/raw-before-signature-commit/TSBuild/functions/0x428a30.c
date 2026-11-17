// name: FUN_00428a30
// address: 0x428a30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00428a30(int param_1)

{
  if (((*(byte *)(param_1 + 0x1b) & 0xc0) != 0) && ((*(byte *)(param_1 + 0x1a) & 0x80) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


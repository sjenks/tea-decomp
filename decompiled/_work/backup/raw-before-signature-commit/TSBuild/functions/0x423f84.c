// name: FUN_00423f84
// address: 0x423f84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00423f84(int param_1)

{
  if (((param_1 != 0) && (param_1 != -1)) && ((param_1 < 30000 || (30999 < param_1)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


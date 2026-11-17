// name: FUN_0043de8b
// address: 0x43de8b
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043de8b(int param_1,int *param_2)

{
  if ((param_1 != *param_2) && ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1])) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return 0;
}


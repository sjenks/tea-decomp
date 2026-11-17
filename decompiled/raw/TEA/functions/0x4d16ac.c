// name: FUN_004d16ac
// address: 0x4d16ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004d16ac(int param_1,uint param_2,byte param_3)

{
  return (*(uint *)(*(int *)(param_1 + 0x20) + (uint)param_3 * 4) & param_2) != 0;
}


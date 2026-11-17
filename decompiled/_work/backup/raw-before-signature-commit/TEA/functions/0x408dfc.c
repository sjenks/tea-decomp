// name: FUN_00408dfc
// address: 0x408dfc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00408dfc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0xc));
  return *(int *)(iVar1 + 0x2404) < *(int *)(iVar1 + 0x2408);
}


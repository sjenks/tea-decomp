// name: FUN_0040264c
// address: 0x40264c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0040264c(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = EnableWindow(*(HWND *)(param_1 + 0xc),(uint)param_2);
  return BVar1 != 0;
}


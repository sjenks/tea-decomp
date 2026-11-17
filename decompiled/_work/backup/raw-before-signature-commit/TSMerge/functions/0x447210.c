// name: FUN_00447210
// address: 0x447210
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00447210(int param_1,UINT param_2,UINT param_3)

{
  BOOL BVar1;
  
  BVar1 = EnableScrollBar(*(HWND *)(*(int *)(param_1 + 4) + 0xc),param_2,param_3);
  return BVar1 != 0;
}


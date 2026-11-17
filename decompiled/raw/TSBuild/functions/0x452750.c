// name: FUN_00452750
// address: 0x452750
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00452750(int param_1,UINT param_2,UINT param_3)

{
  BOOL BVar1;
  
  BVar1 = EnableScrollBar(*(HWND *)(*(int *)(param_1 + 4) + 0xc),param_2,param_3);
  return BVar1 != 0;
}


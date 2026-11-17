// name: FUN_00442778
// address: 0x442778
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00442778(int *param_1,HWND param_2,HWND param_3)

{
  BOOL BVar1;
  
  BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2);
  if (BVar1 != 0) {
    if ((param_3 == (HWND)0x0) || (BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_3), BVar1 == 0))
    {
      *(HWND *)((int)param_1 + 0x11) = param_2;
    }
    return true;
  }
  return param_2 == *(HWND *)(*param_1 + 0xc);
}


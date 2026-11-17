// name: FUN_00433844
// address: 0x433844
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __stdcall FUN_00433844(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if (param_2 == 0x87) {
    LVar1 = 0x104;
  }
  else {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  return LVar1;
}


// name: FUN_00436e00
// address: 0x436e00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __cdecl FUN_00436e00(HWND param_1,LPARAM param_2)

{
  LRESULT LVar1;
  DWORD DVar2;
  WNDPROC lpPrevWndFunc;
  DWORD local_8;
  
  if (param_1 == (HWND)0x0) {
    LVar1 = 0;
  }
  else {
    GetWindowThreadProcessId(param_1,&local_8);
    DVar2 = GetCurrentProcessId();
    if (DVar2 == local_8) {
      lpPrevWndFunc = (WNDPROC)GetWindowLongA(param_1,-4);
      if (lpPrevWndFunc == (WNDPROC)0x0) {
        LVar1 = 0;
      }
      else {
        LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,DAT_0047eb5c,0,param_2);
      }
    }
    else {
      LVar1 = 0;
    }
  }
  return LVar1;
}


// name: USER32.DLL::CallWindowProcA
// address: 0x473422
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __stdcall
CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}


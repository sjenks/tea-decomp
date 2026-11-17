// name: USER32.DLL::DefWindowProcA
// address: 0x4e9742
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __stdcall DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


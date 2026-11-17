// name: USER32.DLL::SendMessageA
// address: 0x4608f2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __stdcall SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


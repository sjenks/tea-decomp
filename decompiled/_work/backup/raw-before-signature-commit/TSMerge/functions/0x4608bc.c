// name: USER32.DLL::PostMessageA
// address: 0x4608bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


// name: USER32.DLL::SetWindowPos
// address: 0x46092e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046092e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}


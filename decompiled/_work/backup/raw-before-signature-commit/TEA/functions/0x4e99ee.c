// name: USER32.DLL::SetWindowPos
// address: 0x4e99ee
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
  return BVar1;
}


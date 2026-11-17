// name: USER32.DLL::DeferWindowPos
// address: 0x47346a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDWP __stdcall
DeferWindowPos(HDWP hWinPosInfo,HWND hWnd,HWND hWndInsertAfter,int x,int y,int cx,int cy,UINT uFlags
              )

{
  HDWP pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047346a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = DeferWindowPos(hWinPosInfo,hWnd,hWndInsertAfter,x,y,cx,cy,uFlags);
  return pvVar1;
}


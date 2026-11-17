// name: USER32.DLL::ScrollWindow
// address: 0x473668
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}


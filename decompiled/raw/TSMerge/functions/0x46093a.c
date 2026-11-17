// name: USER32.DLL::ShowScrollBar
// address: 0x46093a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ShowScrollBar(HWND hWnd,int wBar,BOOL bShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046093a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowScrollBar(hWnd,wBar,bShow);
  return BVar1;
}


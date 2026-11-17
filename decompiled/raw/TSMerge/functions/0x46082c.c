// name: USER32.DLL::InvalidateRect
// address: 0x46082c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}


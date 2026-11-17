// name: USER32.DLL::InvalidateRect
// address: 0x4735a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}


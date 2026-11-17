// name: USER32.DLL::GetSystemMenu
// address: 0x47370a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047370a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}


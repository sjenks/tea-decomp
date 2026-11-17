// name: USER32.DLL::GetClientRect
// address: 0x460784
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


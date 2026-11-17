// name: USER32.DLL::GetWindowRect
// address: 0x460808
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


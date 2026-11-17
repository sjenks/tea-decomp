// name: USER32.DLL::GetTopWindow
// address: 0x4e986e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e986e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}


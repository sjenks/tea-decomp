// name: USER32.DLL::SetCapture
// address: 0x4608f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004608f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}


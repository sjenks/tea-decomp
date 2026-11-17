// name: USER32.DLL::SetCapture
// address: 0x47367a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047367a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}


// name: USER32.DLL::SetFocus
// address: 0x460904
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}


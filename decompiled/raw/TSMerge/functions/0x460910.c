// name: USER32.DLL::SetParent
// address: 0x460910
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall SetParent(HWND hWndChild,HWND hWndNewParent)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetParent(hWndChild,hWndNewParent);
  return pHVar1;
}


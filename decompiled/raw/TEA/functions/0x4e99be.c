// name: USER32.DLL::SetFocus
// address: 0x4e99be
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}


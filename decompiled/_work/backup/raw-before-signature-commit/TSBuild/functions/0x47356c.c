// name: USER32.DLL::GetWindow
// address: 0x47356c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


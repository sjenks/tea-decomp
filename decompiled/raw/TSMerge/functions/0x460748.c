// name: USER32.DLL::EnableWindow
// address: 0x460748
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}


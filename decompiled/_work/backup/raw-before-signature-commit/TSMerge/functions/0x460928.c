// name: USER32.DLL::SetWindowPlacement
// address: 0x460928
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


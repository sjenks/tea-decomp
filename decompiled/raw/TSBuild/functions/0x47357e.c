// name: USER32.DLL::GetWindowPlacement
// address: 0x47357e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047357e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


// name: USER32.DLL::KillTimer
// address: 0x4e98fe
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e98fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}


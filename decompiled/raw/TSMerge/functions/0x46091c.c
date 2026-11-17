// name: USER32.DLL::SetTimer
// address: 0x46091c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT_PTR __stdcall SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc)

{
  UINT_PTR UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046091c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  return UVar1;
}


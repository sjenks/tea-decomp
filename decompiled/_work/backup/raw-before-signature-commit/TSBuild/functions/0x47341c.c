// name: USER32.DLL::BeginPaint
// address: 0x47341c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


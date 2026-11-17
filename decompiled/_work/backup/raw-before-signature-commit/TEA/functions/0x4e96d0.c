// name: USER32.DLL::BeginPaint
// address: 0x4e96d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e96d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}


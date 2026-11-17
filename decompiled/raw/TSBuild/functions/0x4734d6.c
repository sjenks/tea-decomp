// name: USER32.DLL::EndPaint
// address: 0x4734d6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndPaint(hWnd,lpPaint);
  return BVar1;
}


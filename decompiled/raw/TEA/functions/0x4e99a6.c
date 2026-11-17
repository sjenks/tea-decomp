// name: USER32.DLL::SetActiveWindow
// address: 0x4e99a6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}


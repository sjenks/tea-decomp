// name: USER32.DLL::GetWindowDC
// address: 0x4e987a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e987a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


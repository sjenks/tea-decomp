// name: USER32.DLL::GetWindowDC
// address: 0x4607f6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HDC __stdcall GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004607f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


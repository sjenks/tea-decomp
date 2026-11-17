// name: USER32.DLL::GetParent
// address: 0x473548
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


// name: USER32.DLL::GetActiveWindow
// address: 0x4734ee
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}


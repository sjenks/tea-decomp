// name: USER32.DLL::MonitorFromRect
// address: 0x4e994c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMONITOR __stdcall MonitorFromRect(LPCRECT lprc,DWORD dwFlags)

{
  HMONITOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = MonitorFromRect(lprc,dwFlags);
  return pHVar1;
}


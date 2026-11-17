// name: USER32.DLL::GetMonitorInfoA
// address: 0x4e9844
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetMonitorInfoA(HMONITOR hMonitor,LPMONITORINFO lpmi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMonitorInfoA(hMonitor,lpmi);
  return BVar1;
}


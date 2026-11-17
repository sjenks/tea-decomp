// name: USER32.DLL::WindowFromPoint
// address: 0x46097c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}


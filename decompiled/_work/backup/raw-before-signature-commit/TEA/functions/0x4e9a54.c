// name: USER32.DLL::WindowFromPoint
// address: 0x4e9a54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}


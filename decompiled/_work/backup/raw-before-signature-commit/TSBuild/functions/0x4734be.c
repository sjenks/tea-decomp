// name: USER32.DLL::EnableScrollBar
// address: 0x4734be
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004734be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableScrollBar(hWnd,wSBflags,wArrows);
  return BVar1;
}


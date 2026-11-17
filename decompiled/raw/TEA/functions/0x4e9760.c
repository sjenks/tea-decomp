// name: USER32.DLL::DestroyWindow
// address: 0x4e9760
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


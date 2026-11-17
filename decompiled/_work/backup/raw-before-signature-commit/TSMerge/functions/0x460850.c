// name: USER32.DLL::IsWindow
// address: 0x460850
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}


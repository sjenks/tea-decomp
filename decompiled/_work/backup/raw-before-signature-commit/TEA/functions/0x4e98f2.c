// name: USER32.DLL::IsWindowVisible
// address: 0x4e98f2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e98f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}


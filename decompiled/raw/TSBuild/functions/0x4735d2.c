// name: USER32.DLL::IsWindowEnabled
// address: 0x4735d2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004735d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


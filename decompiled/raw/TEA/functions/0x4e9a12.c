// name: USER32.DLL::ShowWindow
// address: 0x4e9a12
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


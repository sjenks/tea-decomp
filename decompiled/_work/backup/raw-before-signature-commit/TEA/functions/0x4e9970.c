// name: USER32.DLL::RedrawWindow
// address: 0x4e9970
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}


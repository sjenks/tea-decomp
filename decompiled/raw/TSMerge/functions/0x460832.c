// name: USER32.DLL::IsChild
// address: 0x460832
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}


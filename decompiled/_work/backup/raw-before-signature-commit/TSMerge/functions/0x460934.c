// name: USER32.DLL::SetWindowTextA
// address: 0x460934
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowTextA(hWnd,lpString);
  return BVar1;
}


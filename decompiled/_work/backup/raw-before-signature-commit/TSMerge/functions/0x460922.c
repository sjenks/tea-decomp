// name: USER32.DLL::SetWindowLongA
// address: 0x460922
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}


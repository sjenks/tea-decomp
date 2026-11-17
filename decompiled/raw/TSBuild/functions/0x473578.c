// name: USER32.DLL::GetWindowLongA
// address: 0x473578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


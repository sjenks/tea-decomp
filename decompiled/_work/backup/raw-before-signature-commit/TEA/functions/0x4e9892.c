// name: USER32.DLL::GetWindowTextA
// address: 0x4e9892
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}


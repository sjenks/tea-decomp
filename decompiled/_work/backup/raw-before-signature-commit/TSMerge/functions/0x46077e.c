// name: USER32.DLL::GetClassNameA
// address: 0x46077e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046077e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}


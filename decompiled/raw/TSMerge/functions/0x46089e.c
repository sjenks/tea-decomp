// name: USER32.DLL::MessageBoxExA
// address: 0x46089e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046089e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxExA(hWnd,lpText,lpCaption,uType,wLanguageId);
  return iVar1;
}


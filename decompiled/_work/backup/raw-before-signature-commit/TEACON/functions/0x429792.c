// name: USER32.DLL::MessageBoxA
// address: 0x429792
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00429792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


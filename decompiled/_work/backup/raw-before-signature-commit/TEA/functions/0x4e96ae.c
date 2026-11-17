// name: SHELL32.DLL::ShellExecuteA
// address: 0x4e96ae
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HINSTANCE __stdcall
ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory,
             INT nShowCmd)

{
  HINSTANCE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e96ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}


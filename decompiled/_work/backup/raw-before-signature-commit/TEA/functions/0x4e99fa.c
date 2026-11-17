// name: USER32.DLL::SetWindowsHookExA
// address: 0x4e99fa
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HHOOK __stdcall SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e99fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


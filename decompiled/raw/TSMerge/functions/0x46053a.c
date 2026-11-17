// name: KERNEL32.DLL::WinExec
// address: 0x46053a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall WinExec(LPCSTR lpCmdLine,UINT uCmdShow)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046053a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = WinExec(lpCmdLine,uCmdShow);
  return UVar1;
}


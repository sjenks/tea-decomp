// name: USER32.DLL::DdeInitializeA
// address: 0x4e9736
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

UINT __stdcall DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}


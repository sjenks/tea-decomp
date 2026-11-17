// name: USER32.DLL::SystemParametersInfoA
// address: 0x4e9a18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e9a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}


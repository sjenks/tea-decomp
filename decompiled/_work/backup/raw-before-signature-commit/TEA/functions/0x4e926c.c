// name: KERNEL32.DLL::ExpandEnvironmentStringsA
// address: 0x4e926c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ExpandEnvironmentStringsA(lpSrc,lpDst,nSize);
  return DVar1;
}


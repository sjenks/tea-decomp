// name: KERNEL32.DLL::lstrcpynA
// address: 0x460552
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPSTR __stdcall lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}


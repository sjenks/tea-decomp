// name: KERNEL32.DLL::lstrcpyA
// address: 0x46054c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


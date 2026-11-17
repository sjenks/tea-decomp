// name: KERNEL32.DLL::lstrcatA
// address: 0x4e94d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LPSTR __stdcall lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e94d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}


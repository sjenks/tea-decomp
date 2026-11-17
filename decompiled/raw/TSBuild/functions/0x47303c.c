// name: ADVAPI32.DLL::IsTextUnicode
// address: 0x47303c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall IsTextUnicode(void *lpv,int iSize,LPINT lpiResult)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsTextUnicode(lpv,iSize,lpiResult);
  return BVar1;
}


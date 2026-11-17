// name: KERNEL32.DLL::GetStringTypeA
// address: 0x47315e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall
GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047315e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}


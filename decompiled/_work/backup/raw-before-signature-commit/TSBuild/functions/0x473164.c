// name: KERNEL32.DLL::GetStringTypeW
// address: 0x473164
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00473164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}


// name: KERNEL32.DLL::GetLocaleInfoA
// address: 0x47312e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0047312e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


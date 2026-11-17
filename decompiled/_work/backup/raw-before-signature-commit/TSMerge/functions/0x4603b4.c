// name: KERNEL32.DLL::GetLocaleInfoA
// address: 0x4603b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004603b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


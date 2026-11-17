// name: KERNEL32.DLL::GetDateFormatA
// address: 0x4e92d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,
              int cchDate)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,cchDate);
  return iVar1;
}


// name: KERNEL32.DLL::GetTimeFormatA
// address: 0x4e936e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
GetTimeFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpTime,LPCSTR lpFormat,LPSTR lpTimeStr,
              int cchTime)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e936e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTimeFormatA(Locale,dwFlags,lpTime,lpFormat,lpTimeStr,cchTime);
  return iVar1;
}


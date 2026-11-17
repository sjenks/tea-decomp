// name: KERNEL32.DLL::FormatMessageA
// address: 0x4e92a2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

DWORD __stdcall
FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer,
              DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e92a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


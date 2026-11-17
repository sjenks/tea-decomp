// name: KERNEL32.DLL::MultiByteToWideChar
// address: 0x4604bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004604bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


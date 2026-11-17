// name: KERNEL32.DLL::WideCharToMultiByte
// address: 0x42976e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042976e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}


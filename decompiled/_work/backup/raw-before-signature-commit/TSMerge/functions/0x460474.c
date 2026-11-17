// name: KERNEL32.DLL::LCMapStringA
// address: 0x460474
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall
LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00460474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}

